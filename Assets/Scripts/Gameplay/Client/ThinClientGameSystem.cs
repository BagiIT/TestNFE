using Unity.Entities;
using Unity.NetCode;
using UnityEngine;

[WorldSystemFilter(WorldSystemFilterFlags.ThinClientSimulation)]
public partial struct ThinClientGameSystem : ISystem
{
    bool m_HasAttemptedToConnectAtLastOnce;

    public void OnCreate(ref SystemState state)
    {
        state.RequireForUpdate<GameResources>();
    }

    public void OnUpdate(ref SystemState state)
    {
        if (Application.isEditor && m_HasAttemptedToConnectAtLastOnce) return;

        var clientWorld = ClientServerBootstrap.ClientWorld;
        if (clientWorld == null || !clientWorld.IsCreated) return;


        if (ConnectionSettings.Instance.GameConnectionState != GameConnectionState.Connecting) return;

        if (SystemAPI.HasSingleton<NetworkStreamConnection>())
        {
            m_HasAttemptedToConnectAtLastOnce = true;
            return;
        }

        ref var networkStreamDriver = ref SystemAPI.GetSingletonRW<NetworkStreamDriver>().ValueRW;
        networkStreamDriver.Connect(state.EntityManager, ConnectionSettings.Instance.ConnectionEndpoint);
    }
}