using Unity.Burst;
using Unity.CharacterController;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;


[UpdateInGroup(typeof(WeaponVisualsUpdateGroup))]
[WorldSystemFilter(WorldSystemFilterFlags.ClientSimulation)]
[BurstCompile]
partial struct CharacterWeaponVisualFeedbackSystem : ISystem
{
    [BurstCompile]
    public void OnCreate(ref SystemState state)
    {
        state.RequireForUpdate<FirstPersonCharacterControl>();
    }

    [BurstCompile]
    public void OnUpdate(ref SystemState state)
    {
        CharacterWeaponVisualFeedbackJob job = new CharacterWeaponVisualFeedbackJob
        {
            DeltaTime = SystemAPI.Time.DeltaTime,
            ElapsedTime = (float)SystemAPI.Time.ElapsedTime,
            WeaponVisualFeedbackLookup = SystemAPI.GetComponentLookup<WeaponVisualFeedback>(true),
            WeaponControlLookup = SystemAPI.GetComponentLookup<WeaponControl>(true),
            LocalTransformLookup = SystemAPI.GetComponentLookup<LocalTransform>(),
            MainEntityCameraLookup = SystemAPI.GetComponentLookup<MainCamera>(),
        };

        state.Dependency = job.Schedule(state.Dependency);
    }

    public partial struct CharacterWeaponVisualFeedbackJob : IJobEntity
    {
        public float DeltaTime;
        public float ElapsedTime;
        [ReadOnly]
        public ComponentLookup<WeaponVisualFeedback> WeaponVisualFeedbackLookup;
        [ReadOnly]
        public ComponentLookup<WeaponControl> WeaponControlLookup;
        public ComponentLookup<LocalTransform> LocalTransformLookup;
        public ComponentLookup<MainCamera> MainEntityCameraLookup;

        void Execute(ref CharacterWeaponVisualFeedback characterWeaponVisualFeedback, in FirstPersonCaharacterComponent character, in KinematicCharacterBody characterBody, in ActiveWeapon activeWeapon)
        {
            var isAiming = WeaponControlLookup.TryGetComponent(activeWeapon.Entity, out WeaponControl weaponControl) && weaponControl.AimHeld;
            var characterMaxSpeed = characterBody.IsGrounded ? character.GroundMaxSpeed : character.AirMaxSpeed;

            if(WeaponVisualFeedbackLookup.TryGetComponent(activeWeapon.Entity,out WeaponVisualFeedback weaponFeedback))
            {
                var characterVelocityRatio = math.length(characterBody.RelativeVelocity) / characterMaxSpeed;

                {
                    float3 targetBobPos = default;
                    if (characterBody.IsGrounded)
                    {
                        var bobSpeedMultiplier = isAiming ? weaponFeedback.WeaponBobAimRatio : 1f;
                        var hBob = math.sin(ElapsedTime * weaponFeedback.WeaponBobFrequency) * weaponFeedback.WeaponBobHAmount * bobSpeedMultiplier * characterVelocityRatio;
                        var vBob = (math.sin(ElapsedTime * weaponFeedback.WeaponBobFrequency * 2f) * 0.5f + 0.5f) * weaponFeedback.WeaponBobVAmount * bobSpeedMultiplier * characterVelocityRatio;
                        targetBobPos = new float3(hBob, vBob, 0f);
                    }

                    characterWeaponVisualFeedback.WeaponLocalPosBob = math.lerp(characterWeaponVisualFeedback.WeaponLocalPosBob, targetBobPos, math.saturate(weaponFeedback.WeaponBobSharpness * DeltaTime));
                }

                {
                    characterWeaponVisualFeedback.CurrentRecoil = math.clamp(characterWeaponVisualFeedback.CurrentRecoil, 0f, weaponFeedback.RecoilMaxDistance);

                    if(characterWeaponVisualFeedback.WeaponLocalPosReciol.z >= -characterWeaponVisualFeedback.CurrentRecoil * 0.99f)
                    {
                        characterWeaponVisualFeedback.WeaponLocalPosReciol = math.lerp(characterWeaponVisualFeedback.WeaponLocalPosReciol, math.forward() * -characterWeaponVisualFeedback.CurrentRecoil, math.saturate(weaponFeedback.RecoilSharpness * DeltaTime));
                    }

                    else
                    {
                        characterWeaponVisualFeedback.WeaponLocalPosReciol = math.lerp(characterWeaponVisualFeedback.WeaponLocalPosReciol, float3.zero, math.saturate(weaponFeedback.RecoilRestitutionSharpness * DeltaTime));
                        characterWeaponVisualFeedback.CurrentRecoil = -characterWeaponVisualFeedback.WeaponLocalPosReciol.z;
                    }
                }

                float3 targerWeaponAnimSocketLocalPosition = characterWeaponVisualFeedback.WeaponLocalPosBob + characterWeaponVisualFeedback.WeaponLocalPosReciol;
                LocalTransformLookup[character.WeaponAnimationSocketEntity] = LocalTransform.FromPosition(targerWeaponAnimSocketLocalPosition);

                if(MainEntityCameraLookup.TryGetComponent(character.ViewEntity, out MainCamera entityCamera))
                {
                    {
                        characterWeaponVisualFeedback.TargetRecoilFovKick = math.clamp(characterWeaponVisualFeedback.TargetRecoilFovKick, 0f, weaponFeedback.RecoilMaxFovKick);

                        if(characterWeaponVisualFeedback.CurrentRecoilFovKick <= characterWeaponVisualFeedback.TargetRecoilFovKick * 0.99f)
                        {
                            characterWeaponVisualFeedback.CurrentRecoilFovKick = math.lerp(characterWeaponVisualFeedback.CurrentRecoilFovKick, characterWeaponVisualFeedback.TargetRecoilFovKick, math.saturate(weaponFeedback.RecoilFovKickSharpness * DeltaTime));
                        }
                        else
                        {
                            characterWeaponVisualFeedback.CurrentRecoilFovKick = math.lerp(characterWeaponVisualFeedback
                                .CurrentRecoilFovKick, 0f, math.saturate(weaponFeedback.RecoilFovKickRestitutionSharpness * DeltaTime));
                            characterWeaponVisualFeedback.TargetRecoilFovKick = characterWeaponVisualFeedback.CurrentRecoilFovKick;
                        }
                    }

                    {
                        var targetFov = isAiming ? entityCamera.BaseFov * weaponFeedback.AimFovRatio : entityCamera.BaseFov;
                        entityCamera.CurrentFov = math.lerp(entityCamera.CurrentFov, targetFov + characterWeaponVisualFeedback.CurrentRecoilFovKick, math.saturate(weaponFeedback.AimFovSharpness * DeltaTime));
                    }

                    MainEntityCameraLookup[character.ViewEntity] = entityCamera;
                }
            }
        }
    }
}
