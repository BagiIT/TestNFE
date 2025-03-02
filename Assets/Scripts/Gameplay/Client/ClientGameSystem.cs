using System;
using Unity.Burst;
using Unity.CharacterController;
using Unity.Collections;
using Unity.Entities;
using Unity.NetCode;
using Unity.Physics;
using Unity.Physics.Extensions;
using Unity.Transforms;
using UnityEngine;
using UnityEngine.Rendering;
using Random = Unity.Mathematics.Random;

public struct ClientJoinRequestRpc : IRpcCommand
{
    public FixedString128Bytes PlayerName;
    public bool IsSpectator;
}

public struct ClientRequestRespawnRpc: IRpcCommand
{
}

[WorldSystemFilter(WorldSystemFilterFlags.ClientSimulation)]
[BurstCompile]
public partial struct PlayerStatusSystem : ISystem
{
    EntityQuery m_PlayerAliveQuery;

    public void OnCreate(ref SystemState state)
    {
        m_PlayerAliveQuery = new EntityQueryBuilder(Allocator.Temp)
            .WithAll<MainCamera>().Build(state.EntityManager);
    }
    public void OnUpdate(ref SystemState state)
    {
        GameSettings.Instance.PlayerState = m_PlayerAliveQuery.IsEmpty ? PlayerState.Dead : PlayerState.Playing;
    }
}


[WorldSystemFilter(WorldSystemFilterFlags.ClientSimulation)]
[BurstCompile]
public partial struct DebugPlayerRespawnSystem : ISystem
{
    public void OnCreate(ref SystemState state)
    {
        state.RequireForUpdate(new EntityQueryBuilder(Allocator.Temp)
            .WithAll<FirstPersonCaharacterComponent, GhostOwnerIsLocal>().WithDisabled<DelayedDespawn>()
            .Build(state.EntityManager));
    }

    public void OnUpdate(ref SystemState state)
    {
        if (GameInput.Actions.Game.RequestRespawn.WasPressedThisFrame())
            state.EntityManager.CreateEntity(ComponentType.ReadWrite<ClientRequestRespawnRpc>(),
                ComponentType.ReadWrite<SendRpcCommandRequest>());
    }
}

[WorldSystemFilter(WorldSystemFilterFlags.ClientSimulation | WorldSystemFilterFlags.ThinClientSimulation)]
[BurstCompile]
public partial struct ClientGameSystem : ISystem
{
    EntityQuery m_SpectatorSpawnPointsQuery;

    public void OnCreate(ref SystemState state)
    {
        state.RequireForUpdate<GameResources>();

        var randomSeed = (uint)DateTime.Now.Millisecond;
        var randomEntity = state.EntityManager.CreateEntity();
        state.EntityManager.AddComponentData(randomEntity, new FixedRandom
        {
            Random = Random.CreateFromIndex(randomSeed),
        });

        m_SpectatorSpawnPointsQuery = new EntityQueryBuilder(Allocator.Temp)
            .WithAll<SpectatorSpawnPoint, LocalToWorld>().Build(state.EntityManager);
    }

    public void OnUpdate(ref SystemState state)
    {
        if (SystemAPI.HasSingleton<DisableCharacterDynamicContacts>())
            state.EntityManager.DestroyEntity(SystemAPI.GetSingletonEntity<DisableCharacterDynamicContacts>());

        var gameResources = SystemAPI.GetSingleton<GameResources>();
        HandleSendJoinRequest(ref state, gameResources);
        HandleCharacterSetup(ref state);
        
    }

    void HandleSendJoinRequest( ref SystemState state, GameResources gameResources)
    {
        if (!SystemAPI.TryGetSingletonEntity<NetworkId>(out var clientEntity) ||
            SystemAPI.HasComponent<NetworkStreamInGame>(clientEntity))
            return;

        var joinRequestEntity = state.EntityManager.CreateEntity(ComponentType.ReadOnly<ClientJoinRequestRpc>(),
            ComponentType.ReadWrite<SendRpcCommandRequest>());
        var playerName = GameSettings.Instance.PlayerName;
        if (state.WorldUnmanaged.IsThinClient())
        {
            ref var random = ref SystemAPI.GetSingletonRW<FixedRandom>().ValueRW;
            playerName = $"[Bot {random.Random.NextInt(1, 99):00}] {playerName}";
        }

        var clientJoinRequestRpc = new ClientJoinRequestRpc();
        clientJoinRequestRpc.IsSpectator = GameSettings.Instance.SpectatorToggle;
        clientJoinRequestRpc.PlayerName.CopyFromTruncated(playerName);
        state.EntityManager.SetComponentData(joinRequestEntity, clientJoinRequestRpc);
        state.EntityManager.AddComponentData(clientEntity, new NetworkStreamInGame());

        if (GameSettings.Instance.SpectatorToggle)
        {
            LocalToWorld spawnPoint = default;
            using var specatotrSpawnPoints =
                m_SpectatorSpawnPointsQuery.ToComponentDataArray<LocalToWorld>(Allocator.Temp);
            if (specatotrSpawnPoints.Length > 0)
            {
                ref var random = ref SystemAPI.GetSingletonRW<FixedRandom>().ValueRW;
                spawnPoint = specatotrSpawnPoints[random.Random.NextInt(0, specatotrSpawnPoints.Length - 1)];
            }

            var specatorEntity = state.EntityManager.Instantiate(gameResources.SpectatorPrefab);
            state.EntityManager.SetComponentData(specatorEntity,
                LocalTransform.FromPositionRotation(spawnPoint.Position,spawnPoint.Rotation));
        }
    }

    void HandleCharacterSetup(ref SystemState state)
    {
        var ecb = SystemAPI.GetSingletonRW<BeginSimulationEntityCommandBufferSystem.Singleton>().ValueRW
            .CreateCommandBuffer(state.WorldUnmanaged);

        //local characte rinit
        foreach(var (character, entity) in SystemAPI.
            Query<FirstPersonCaharacterComponent>()
            .WithAll<GhostOwnerIsLocal, OwningPlayer, GhostOwner>()
            .WithDisabled<CharacterInitialized>()
            .WithEntityAccess())
        {
            ecb.AddComponent(character.ViewEntity, new MainCamera
            {
                BaseFov = character.BaseFov,
            });
            var childBufferLookup = SystemAPI.GetBufferLookup<Child>();
            if (!childBufferLookup.HasBuffer(entity))
            {
                Debug.Log($"Entity {entity} has NO Child buffer at this frame!");
                return;
            }
            else
            {
                Debug.Log($"Entity {entity} has {childBufferLookup[entity].Length} children.");
            }
            MiscUtilities.SetShadowModeInHierarchy(state.EntityManager, ecb, entity, ref childBufferLookup,
                ShadowCastingMode.ShadowsOnly);
        }
        //inity remote character
        foreach (var (character, owningPlayer) in SystemAPI
            .Query<FirstPersonCaharacterComponent, OwningPlayer>()
            .WithNone<GhostOwnerIsLocal>()
            .WithDisabled<CharacterInitialized>())

            ecb.AddComponent(character.NameTagSocketEntity, new NameTagProxy
            {
                PlayerEntity = owningPlayer.Entity,
            });

        //Init character common
        foreach(var(physicsCollider, characterInitilized, entity) in SystemAPI
            .Query<RefRW<PhysicsCollider>, EnabledRefRW<CharacterInitialized>>()
            .WithAll<FirstPersonCaharacterComponent>()
            .WithDisabled<CharacterInitialized>()
            .WithEntityAccess())
        {
            physicsCollider.ValueRW.MakeUnique(entity, ecb);
            characterInitilized.ValueRW = true;
        }

        
        
    }

}
