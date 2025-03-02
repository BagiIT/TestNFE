using Unity.Burst;
using Unity.Entities;
using Unity.Mathematics;
using Unity.NetCode;
using Unity.Rendering;
using UnityEngine;

public struct SetPlayerToDebugColor : IComponentData
{
}

[DisallowMultipleComponent]
public class SetPlayerToDebugColorAuthoring : MonoBehaviour
{
    class SetPlayerDebugColorBaker : Baker<SetPlayerToDebugColorAuthoring>
    {
        public override void Bake(SetPlayerToDebugColorAuthoring authoring)
        {
            SetPlayerToDebugColor component = default(SetPlayerToDebugColor);
            var entity = GetEntity(TransformUsageFlags.Dynamic);
            AddComponent(entity, component);
            AddComponent(entity, new URPMaterialPropertyBaseColor() { Value = new float4(1, 0, 0, 1) });
        }
    }
}

[BurstCompile]
[RequireMatchingQueriesForUpdate]
[WorldSystemFilter(WorldSystemFilterFlags.Presentation)]
public partial struct SetPlayerToDebugColorSystem : ISystem
{
    [BurstCompile]
    public void OnUpdate(ref SystemState state)
    {
        var hadDebugColorLookupRO = SystemAPI.GetComponentLookup<SetPlayerToDebugColor>(true);
        var urpMaterialPropertiyBaseColorLookupRW = SystemAPI.GetComponentLookup<URPMaterialPropertyBaseColor>(false);
        foreach(var (ghostLinkedEntityGroup, ghostOwner) in 
            SystemAPI.Query<DynamicBuffer<LinkedEntityGroup>, RefRO<GhostOwner>>()
            .WithChangeFilter<GhostOwner>().WithAll<SetPlayerToDebugColor>())
        {
            foreach(var linkedEntity in ghostLinkedEntityGroup)
            {
                if (!hadDebugColorLookupRO.HasComponent(linkedEntity.Value)) continue;
                var colorRefRW = urpMaterialPropertiyBaseColorLookupRW.GetRefRWOptional(linkedEntity.Value);
                if (!colorRefRW.IsValid) continue;
                colorRefRW.ValueRW.Value = NetworkIdDebugColorUtility.Get(ghostOwner.ValueRO.NetworkId);
            }
        }
    }
}
