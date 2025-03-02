using Unity.Entities;
using Unity.Mathematics;
using Unity.NetCode;
using UnityEngine;


[UpdateInGroup(typeof(GhostInputSystemGroup))]
[WorldSystemFilter(WorldSystemFilterFlags.ClientSimulation)]
public partial struct FirstPersonPlayerInputSystem : ISystem
{
    public void OnCreate(ref SystemState state)
    {
        state.RequireForUpdate(SystemAPI.QueryBuilder().WithAll<FirstPersonPlayer, FirstPersonPlayerCommands>().Build());
        state.RequireForUpdate<GameResources>();
        state.RequireForUpdate<NetworkTime>();
    }

    public void OnUpdate(ref SystemState state)
    {
        var deltaTime = SystemAPI.Time.DeltaTime;
        var elapsedTime = (float)SystemAPI.Time.ElapsedTime;
        var defaultActionMap = GameInput.Actions.Game;

        var ecb = SystemAPI.GetSingleton<BeginSimulationEntityCommandBufferSystem.Singleton>().CreateCommandBuffer(state.WorldUnmanaged);

        foreach (var playerCommans in SystemAPI
            .Query<RefRW<FirstPersonPlayerCommands>>()
            .WithAll<GhostOwnerIsLocal, FirstPersonPlayer>())
        {
            if (GameSettings.Instance.IsPauseMenuOpen)
            {
                //if pause is open reset inputs 
                var currentRotation = playerCommans.ValueRO.LookYawPitchDegrees;
                var aimHeld = playerCommans.ValueRO.AimHeld;
                playerCommans.ValueRW = default;
                playerCommans.ValueRW.LookYawPitchDegrees = currentRotation;
                playerCommans.ValueRW.ShootRelesed.Set();
                playerCommans.ValueRW.AimHeld = aimHeld;

                continue;
            }

            //move
            playerCommans.ValueRW.MoveInput =
                Vector2.ClampMagnitude(defaultActionMap.Move.ReadValue<Vector2>(), 1f);

            //Look
            var invertMultiplier = GameSettings.Instance.InvertYAxis ? new float2(1.0f, -1.0f) : new float2(1.0f, 1.0f);
            if(math.lengthsq(defaultActionMap.LookConstant.ReadValue<Vector2>()) >
               math.lengthsq(defaultActionMap.LookDelta.ReadValue<Vector2>()))
            {

                //gamepass input
                FirstPersonInputDeltaUtilities.AddInputDelta(ref playerCommans.ValueRW.LookYawPitchDegrees,
                    (float2)defaultActionMap.LookConstant.ReadValue<Vector2>() * deltaTime *
                    GameSettings.Instance.LookSensitivity * invertMultiplier);
            }
            else
            {
                //Mouuse delta input
                FirstPersonInputDeltaUtilities.AddInputDelta(ref playerCommans.ValueRW.LookYawPitchDegrees,
                    (float2)defaultActionMap.LookDelta.ReadValue<Vector2>() *
                    GameSettings.Instance.LookSensitivity * invertMultiplier);
                
            }

            //jump
            playerCommans.ValueRW.JumpPressed = default;
            if(defaultActionMap.Jump.WasPressedThisFrame())
                playerCommans.ValueRW.JumpPressed.Set();

                //Shoot pressed
                playerCommans.ValueRW.ShootPressed = default;
            if (defaultActionMap.Shoot.WasPressedThisFrame())
                playerCommans.ValueRW.ShootPressed.Set();

            //shoot relesed
            playerCommans.ValueRW.ShootRelesed = default;
            if (defaultActionMap.Shoot.WasReleasedThisFrame())
                playerCommans.ValueRW.ShootRelesed.Set();

            //aim
            playerCommans.ValueRW.AimHeld = defaultActionMap.Aim.IsPressed();

            //Weapon switch test
            int index = (int)defaultActionMap.SwitchWeapon.ReadValue<Vector2>().y;
            if (index != 0)
            {
                int direction = index > 0 ? 1 : -1;
                
                Entity rpcEntity = ecb.CreateEntity();
                ecb.AddComponent(rpcEntity, new ChangeWeaponRpc { switchDirection = index });
                ecb.AddComponent(rpcEntity, new SendRpcCommandRequest());
            }
        }
    }
}
