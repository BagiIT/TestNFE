using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;


[UpdateInGroup(typeof(SimulationSystemGroup))]
[UpdateBefore(typeof(TransformSystemGroup))]
[WorldSystemFilter(WorldSystemFilterFlags.ClientSimulation)]
public partial struct SpectatorControllerSystem : ISystem
{
    public void OnCreate(ref SystemState state)
    {
        
    }

    public void OnUpdate(ref SystemState state)
    {
        var deltaTime = SystemAPI.Time.DeltaTime;

        InputAaction_FPS.GameActions defaultActionsMap = GameInput.Actions.Game;
        if (GameSettings.Instance.IsPauseMenuOpen)
            return;

        foreach(var (localTransform, specatorController) in SystemAPI.Query<RefRW<LocalTransform>, RefRW<SpectatorController>>())
        {
            float3 moveInput = Vector3.ClampMagnitude(new Vector3(
                defaultActionsMap.Move.ReadValue<Vector2>().x,
                defaultActionsMap.SpectatorVertical.ReadValue<float>(),
                defaultActionsMap.Move.ReadValue<Vector2>().y),
                1f);

            float2 lookInput;
            if(math.lengthsq(defaultActionsMap.LookConstant.ReadValue<Vector2>()) > math.lengthsq(defaultActionsMap.LookDelta.ReadValue<Vector2>()))
            {
                //gamepad look
                lookInput = defaultActionsMap.LookConstant.ReadValue<Vector2>() * GameSettings.Instance.LookSensitivity * deltaTime;
            }
            else
            {
                //mouse look
                lookInput = defaultActionsMap.LookDelta.ReadValue<Vector2>() * GameSettings.Instance.LookSensitivity;

            }

            //Velocity
            float3 worldMoveInput = math.mul(localTransform.ValueRW.Rotation, moveInput);
            float3 targetVelocity = worldMoveInput * specatorController.ValueRW.Params.MoveSpeed;
            specatorController.ValueRW.Velocity = math.lerp(specatorController.ValueRW.Velocity, targetVelocity, specatorController.ValueRW.Params.MoveSharpness * deltaTime);
            localTransform.ValueRW.Position += specatorController.ValueRW.Velocity * deltaTime;


            //rotation
            quaternion rotation = localTransform.ValueRW.Rotation;
            quaternion rotationDeltaVectical = quaternion.Euler(math.radians(-lookInput.y) * specatorController.ValueRW.Params.RotationSpeed, 0f, 0f);
            quaternion rotationDeltaHorizontal = quaternion.Euler(0f, math.radians(lookInput.x) * specatorController.ValueRW.Params.RotationSpeed, 0f);
            rotation = math.mul(rotation, rotationDeltaVectical);
            rotation = math.mul(rotationDeltaHorizontal, rotation);
            localTransform.ValueRW.Rotation = rotation;
        }
    }
}
