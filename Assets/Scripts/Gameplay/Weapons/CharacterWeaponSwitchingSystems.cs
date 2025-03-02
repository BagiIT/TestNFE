using Unity.Burst;
using Unity.Entities;
using Unity.NetCode;
using UnityEngine;
using static ServerGameSystem;

public partial struct ChangeWeaponRpc : IRpcCommand 
{
    public int switchDirection;
}

[UpdateInGroup(typeof(SimulationSystemGroup))]
[UpdateBefore(typeof(EndSimulationEntityCommandBufferSystem))]
[UpdateBefore(typeof(ActiveWeaponSystem))]
[WorldSystemFilter(WorldSystemFilterFlags.ServerSimulation)]
[BurstCompile]
public partial struct CharacterWeaponSwitchingSystems : ISystem
{

    public void OnUpdate(ref SystemState state)
    {
        var ecb = SystemAPI.GetSingleton<BeginSimulationEntityCommandBufferSystem.Singleton>().CreateCommandBuffer(state.WorldUnmanaged);
        
        foreach(var (rpc, receiveRpc, entity) in SystemAPI.Query<RefRO<ChangeWeaponRpc>, ReceiveRpcCommandRequest>().WithEntityAccess())
        {
            
            Entity connectionEntity = receiveRpc.SourceConnection;

            if (!SystemAPI.HasComponent<JoinedClient>(connectionEntity)) continue;
            Entity playerEntity = SystemAPI.GetComponent <JoinedClient>(connectionEntity).PlayerEntity;
            Debug.Log(playerEntity);
            Entity clientEntity = SystemAPI.GetComponent<FirstPersonPlayer>(playerEntity).ControlledCharacter;

            ActiveWeapon activeWeapon = SystemAPI.GetComponent<ActiveWeapon>(clientEntity);
            var networkId = SystemAPI.GetComponent<NetworkId>(receiveRpc.SourceConnection);
            if (!state.EntityManager.Exists(activeWeapon.Entity)) continue;

            // Get index from prefab component
            if (!SystemAPI.HasComponent<WeaponPrefabIndex>(activeWeapon.Entity)) continue;
            int currentIndex = SystemAPI.GetComponent<WeaponPrefabIndex>(activeWeapon.Entity).Index;

            Debug.Log(currentIndex);

            var gameResources = SystemAPI.GetSingleton<GameResources>();
            var weapons = SystemAPI.GetSingletonBuffer<GameResourcesWeapon>();
            int newIndex = (currentIndex + rpc.ValueRO.switchDirection + weapons.Length) % weapons.Length;

            Entity newWeaponPrefab = weapons[newIndex].WeaponPrefab;
            Entity newWeapon = ecb.Instantiate(newWeaponPrefab);


            ecb.SetComponent(newWeapon, new GhostOwner { NetworkId = networkId.Value });
            ecb.SetComponent(clientEntity, new ActiveWeapon { Entity = newWeapon });
            Debug.Log(entity);
            ecb.DestroyEntity(activeWeapon.Entity);
            ecb.DestroyEntity(entity);
            
        }
    }
}
