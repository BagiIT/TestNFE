using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.NetCode;
using Unity.Transforms;
using Unity.VisualScripting;
using UnityEngine;



[UpdateInGroup(typeof(PredictedSimulationSystemGroup), OrderFirst = true)]
[UpdateBefore(typeof(PredictedFixedStepSimulationSystemGroup))]
[WorldSystemFilter(WorldSystemFilterFlags.ServerSimulation | WorldSystemFilterFlags.ClientSimulation)]
[BurstCompile]
public partial struct ActiveWeaponSystem : ISystem
{
    [BurstCompile]
    public void OnUpdate(ref SystemState state)
    {
        ActiveWeaponSetupJob setupJob = new ActiveWeaponSetupJob
        {
            ecb = SystemAPI.GetSingletonRW<BeginSimulationEntityCommandBufferSystem.Singleton>().ValueRW.CreateCommandBuffer(state.WorldUnmanaged),
            IsServer = state.WorldUnmanaged.IsServer(),
            WeaponControlLookup = SystemAPI.GetComponentLookup<WeaponControl>(true),
            FirstPersonCharacterComponentLookup = SystemAPI.GetComponentLookup<FirstPersonCaharacterComponent>(true),
            WeaponSimulationShotOriginOverrideLookup = SystemAPI.GetComponentLookup<WeaponShotSimulationOriginOverride>(),
            LinkedEntityGroupLookup = SystemAPI.GetBufferLookup<LinkedEntityGroup>(),
            WeaponShotIgnoredEntityLookup = SystemAPI.GetBufferLookup<WeaponShotIgnoredEntity>()
        };
        state.Dependency = setupJob.Schedule(state.Dependency);
    }

    [BurstCompile]
    public partial struct ActiveWeaponSetupJob: IJobEntity
    {
        public EntityCommandBuffer ecb;
        public bool IsServer;
        [ReadOnly]
        public ComponentLookup<WeaponControl> WeaponControlLookup;
        [ReadOnly]
        public ComponentLookup<FirstPersonCaharacterComponent> FirstPersonCharacterComponentLookup;
        public ComponentLookup<WeaponShotSimulationOriginOverride> WeaponSimulationShotOriginOverrideLookup;
        public BufferLookup<LinkedEntityGroup> LinkedEntityGroupLookup;
        public BufferLookup<WeaponShotIgnoredEntity> WeaponShotIgnoredEntityLookup;

        void Execute(Entity entity, ref ActiveWeapon activeWeapon)
        {
            //Detect changes in active weapon
            if(activeWeapon.Entity != activeWeapon.PreviousEntity)
            {
                //set new weapon
                if (WeaponControlLookup.HasComponent(activeWeapon.Entity))
                {
                    //set for characters
                    if(FirstPersonCharacterComponentLookup.TryGetComponent(entity, out FirstPersonCaharacterComponent character))
                    {
                        //set the weapon raycast startpoin to character view entity
                        if(WeaponSimulationShotOriginOverrideLookup.TryGetComponent(activeWeapon.Entity, out WeaponShotSimulationOriginOverride shotOriginOverride))
                        {
                            shotOriginOverride.Entity = character.ViewEntity;
                            WeaponSimulationShotOriginOverrideLookup[activeWeapon.Entity] = shotOriginOverride;
                        }

                        ecb.AddComponent(activeWeapon.Entity, new Parent { Value = character.WeaponAnimationSocketEntity });

                        ecb.SetComponent(activeWeapon.Entity, new WeaponOwner { Entity = entity });

                        DynamicBuffer<LinkedEntityGroup> linkedEntityBuffer = LinkedEntityGroupLookup[entity];
                        linkedEntityBuffer.Add(new LinkedEntityGroup { Value = activeWeapon.Entity });

                        if(WeaponShotIgnoredEntityLookup.TryGetBuffer(activeWeapon.Entity, out DynamicBuffer<WeaponShotIgnoredEntity> ignoredEntiteis))
                        {
                            ignoredEntiteis.Add(new WeaponShotIgnoredEntity { Entity = entity });
                        }
                    }
                }
                // TODO: Un-setup previous weapon
                 if (WeaponControlLookup.HasComponent(activeWeapon.PreviousEntity))
                 {
                    if (WeaponSimulationShotOriginOverrideLookup.TryGetComponent(activeWeapon.PreviousEntity, out WeaponShotSimulationOriginOverride prevShoyOriginOverride))
                    {
                        prevShoyOriginOverride.Entity = Entity.Null;
                        WeaponSimulationShotOriginOverrideLookup[activeWeapon.PreviousEntity] = prevShoyOriginOverride;
                    }

                    ecb.RemoveComponent<Parent>(activeWeapon.PreviousEntity);
                    ecb.RemoveComponent<WeaponOwner>(activeWeapon.PreviousEntity);

                    if(LinkedEntityGroupLookup.TryGetBuffer(entity, out DynamicBuffer<LinkedEntityGroup> linkedBuffer))
                    {
                        for (int i = linkedBuffer.Length -1 ; i >= 0; i--)
                        {
                            if (linkedBuffer[i].Value == activeWeapon.PreviousEntity)
                            {
                                linkedBuffer.RemoveAt(i);
                                break;
                            }
                        }
                    }

                    if(WeaponShotIgnoredEntityLookup.TryGetBuffer(entity, out DynamicBuffer<WeaponShotIgnoredEntity> ignoredEntities))
                    {
                        for(int i = ignoredEntities.Length - 1; i >= 0; i--)
                        {
                            if (ignoredEntities[i].Entity == entity)
                            {
                                ignoredEntities.RemoveAt(i);
                                break;
                            }
                        }
                    }
                    if(IsServer)
                        ecb.DestroyEntity(activeWeapon.PreviousEntity);
                 }
                
            }
            
            activeWeapon.PreviousEntity = activeWeapon.Entity;
        }
    }
}

