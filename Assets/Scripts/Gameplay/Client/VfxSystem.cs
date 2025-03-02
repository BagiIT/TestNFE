using System.Collections.Generic;
using System.Diagnostics;
using Unity.Entities;
using UnityEngine;
using UnityEngine.VFX;
using Debug = UnityEngine.Debug;
using Object = UnityEngine.Object;


struct VfxDictionaryValueStruct
{
    public VisualEffect Vfx;
    public VFXEventAttribute Payload;
}

public enum VfxType
{
    MachineGunBullet,
    ShotgunBullet,
    Laser,
    Plasma,
    Rocket,
    Death,
}

public enum BulletType
{
    Other,
    MachineGun,
    Shotgun,
}

public struct VfxHitRequest : IComponentData
{
    public VfxType VfxHitType;
    public float LowCount;
    public float MidCount;
    public float HighCunt;
    public Vector3 Position;
    public Vector3 HitNormal;
    public float HitRadius;
}

static class VfxProperyNames
{
    public const string OnStartLowCount = "OnStartLowCount";
    public const string OnStartMidCount = "OnStartMidCount";
    public const string OnStartHighCount = "OnStartHighCount";
    public const string Position = "position";
    public const string Direction = "direction";
    public const string SpawnCount = "spawnCount";
    public const string HitRadius = "DamageRadius";
}

[WorldSystemFilter(WorldSystemFilterFlags.ClientSimulation)]
[UpdateInGroup(typeof(SimulationSystemGroup), OrderFirst = true)]
public partial class VfxSystem : SystemBase
{
    int m_OnStartLowCountId;
    int m_OnStartMidCountId;
    int m_OnStarTHighId;

    int m_SpawnCountId;
    int m_PositionId;
    int m_HitNormalId;

    Dictionary<VfxType, VfxDictionaryValueStruct> m_VfxDictionay;

    protected override void OnCreate()
    {
        RequireForUpdate<VfxHitRequest>();
        RequireForUpdate<VfxHitResources>();

        m_VfxDictionay = new Dictionary<VfxType, VfxDictionaryValueStruct>();

        m_OnStartLowCountId = Shader.PropertyToID(VfxProperyNames.OnStartLowCount);
        m_OnStartMidCountId = Shader.PropertyToID(VfxProperyNames.OnStartMidCount);
        m_OnStarTHighId = Shader.PropertyToID(VfxProperyNames.OnStartHighCount);

        m_PositionId = Shader.PropertyToID(VfxProperyNames.Position);
        m_HitNormalId = Shader.PropertyToID(VfxProperyNames.Direction);
        m_SpawnCountId = Shader.PropertyToID(VfxProperyNames.SpawnCount);
    }
    
    protected override void OnDestroy()
    {
        foreach (var type in m_VfxDictionay)
        {
            type.Value.Payload?.Dispose();
            if (type.Value.Vfx != null)
                Object.Destroy(type.Value.Vfx.gameObject);
        }
    }

    protected override void OnUpdate()
    {
        var ecb = SystemAPI.GetSingletonRW<BeginSimulationEntityCommandBufferSystem.Singleton>().ValueRW.CreateCommandBuffer(World.Unmanaged);
        var rateRatio = SystemAPI.Time.DeltaTime / UnityEngine.Time.deltaTime;
        var vfxPrefabs = SystemAPI.GetSingletonBuffer<VfxHitResources>();
        foreach(var (hitVfxRequest, entity) in SystemAPI.Query<RefRO<VfxHitRequest>>().WithEntityAccess())
        {
            if(!m_VfxDictionay.TryGetValue(hitVfxRequest.ValueRO.VfxHitType, out var vfxValue))
            {
                vfxValue.Vfx = Object.Instantiate(vfxPrefabs[(int)hitVfxRequest.ValueRO.VfxHitType].VfxPrefab.Value).GetComponent<VisualEffect>();
                vfxValue.Payload = vfxValue.Vfx.CreateVFXEventAttribute();
                m_VfxDictionay.Add(hitVfxRequest.ValueRO.VfxHitType, vfxValue);

                DebugVfxMissingUsedProperties(hitVfxRequest.ValueRO.VfxHitType, vfxValue.Vfx);

                if (hitVfxRequest.ValueRO.VfxHitType == VfxType.Rocket)
                    vfxValue.Vfx.SetFloat(VfxProperyNames.HitRadius, hitVfxRequest.ValueRO.HitRadius);
            }

            vfxValue.Vfx.playRate = rateRatio;
            vfxValue.Payload.SetVector3(m_PositionId, hitVfxRequest.ValueRO.Position);
            vfxValue.Payload.SetVector3(m_HitNormalId, hitVfxRequest.ValueRO.HitNormal);

            vfxValue.Payload.SetFloat(m_SpawnCountId, hitVfxRequest.ValueRO.LowCount);
            vfxValue.Vfx.SendEvent(m_OnStartLowCountId, vfxValue.Payload);

            vfxValue.Payload.SetFloat(m_SpawnCountId, hitVfxRequest.ValueRO.MidCount);
            vfxValue.Vfx.SendEvent(m_OnStartMidCountId, vfxValue.Payload);

            vfxValue.Payload.SetFloat(m_SpawnCountId, hitVfxRequest.ValueRO.HighCunt);
            vfxValue.Vfx.SendEvent(m_OnStarTHighId, vfxValue.Payload);

            ecb.DestroyEntity(entity);
        }

    }
    [Conditional("UNITY_EDITOR")]
    void DebugVfxMissingUsedProperties(VfxType vfxType, VisualEffect vfx)
    {
        List<string> eventNames = new List<string>();
        vfx.visualEffectAsset.GetEvents(eventNames);
        if (!eventNames.Contains(VfxProperyNames.OnStartLowCount)
            && !eventNames.Contains(VfxProperyNames.OnStartMidCount)
            && !eventNames.Contains(VfxProperyNames.OnStartHighCount))
           Debug.LogWarning($"[VfxGraph] None of the send vfx events was found in the " +
                             $"{vfx.visualEffectAsset.name} vfx graph, " +
                             $"{vfxType} hit vfx will not show! " +
                             $"Make sure to use one of the following event names : \"{VfxProperyNames.OnStartLowCount}\"" +
                             $" \"{VfxProperyNames.OnStartMidCount}\" \"{VfxProperyNames.OnStartHighCount}\"");

        if (vfxType != VfxType.Rocket)
            return;
        if (!vfx.HasFloat(VfxProperyNames.HitRadius))
            Debug.LogWarning($"[VfxGraph] \"{VfxProperyNames.HitRadius}\" not found in " +
                             $"{vfx.visualEffectAsset.name} vfx graph! This will trigger an error.");
    }
}
