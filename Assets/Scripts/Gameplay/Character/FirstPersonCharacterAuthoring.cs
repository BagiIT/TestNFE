using Unity.CharacterController;
using Unity.Entities;
using Unity.Mathematics;
using UnityEngine;

[DisallowMultipleComponent]
public class FirstPersonCharacterAuthoring : MonoBehaviour
{
    public GameObject ViewEntity;
    public GameObject NameTagSocket;

    public GameObject WeaponSocket;
    public GameObject WeaponAnimationSocket;

    public GameObject DeathVfxSpawnPoint;

    public AuthoringKinematicCharacterProperties CharacterProperties = AuthoringKinematicCharacterProperties.GetDefault();

    public float GroundMaxSpeed = 10f;
    public float GroundedMovemntSharpness = 15f;
    public float AirAcceleration = 50f;
    public float AirMaxSpeed = 10f;
    public float AirDrag = 0f;
    public float JumpSpeed = 10f;
    public float3 Gravity = math.up() * -30f;
    public bool PreventAirAcceleationAgainstUngroundedHits = true;

    public BasicStepAndSlopeHandlingParameters StepAndSlopeHandling = 
        BasicStepAndSlopeHandlingParameters.GetDefault();

    public float MinViewAngle = -90f;
    public float MaxViewAngle = 90f;

    public float BaseFov;

    public class Baker : Baker<FirstPersonCharacterAuthoring>
    {
        public override void Bake(FirstPersonCharacterAuthoring authoring)
        {
            KinematicCharacterUtilities.BakeCharacter(this, authoring, authoring.CharacterProperties);

            var entity = GetEntity(TransformUsageFlags.Dynamic | TransformUsageFlags.WorldSpace);


            AddComponent(entity, new FirstPersonCaharacterComponent
            {
                GroundMaxSpeed = authoring.GroundMaxSpeed,
                GroundedMovementSharpness = authoring.GroundedMovemntSharpness,
                AirAcceleration = authoring.AirAcceleration,
                AirMaxSpeed = authoring.AirMaxSpeed,
                AirDrag = authoring.AirDrag,
                JumpSpeed = authoring.JumpSpeed,
                Gravity = authoring.Gravity,
                PreventAirAccelerationAgainstUngroundedHits = authoring.PreventAirAcceleationAgainstUngroundedHits,
                StepAndSlopeHandling = authoring.StepAndSlopeHandling,
                MinViewAngle = authoring.MinViewAngle,
                MaxViewAngle = authoring.MaxViewAngle,
                ViewEntity = GetEntity(authoring.ViewEntity, TransformUsageFlags.Dynamic),
                ViewPitchDegrees = 0f,
                ViewLocalRotation = quaternion.identity,
                NameTagSocketEntity = GetEntity(authoring.NameTagSocket, TransformUsageFlags.Dynamic),

                BaseFov = authoring.BaseFov,

                WeaponSocketEntity = GetEntity(authoring.WeaponSocket, TransformUsageFlags.Dynamic),
                WeaponAnimationSocketEntity = GetEntity(authoring.WeaponAnimationSocket, TransformUsageFlags.Dynamic),

                DeathVfxSpawnPoint = GetEntity(authoring.DeathVfxSpawnPoint,TransformUsageFlags.Dynamic)

            });

            AddComponent(entity, new FirstPersonCharacterControl());
            AddComponent(entity, new OwningPlayer());
            AddComponent(entity, new ActiveWeapon());
            AddComponent(entity, new CharacterWeaponVisualFeedback());
            AddComponent(entity, new DelayedDespawn());
            SetComponentEnabled<DelayedDespawn>(entity, false);
            AddComponent(entity, new CharacterInitialized());
            SetComponentEnabled<CharacterInitialized>(entity, false);
        }
    }

}
