using System;
using System.Threading;
using System.Threading.Tasks;
using Unity.Networking.Transport;
using Unity.Services.Authentication;
using Unity.Services.Core;
using Unity.Services.Multiplayer;
using UnityEngine;


public static class SessionExtension
{
    public static bool IsServer(this ISession session)
    {
        return session.IsHost && session.CurrentPlayer?.Id == null;
    }
}

public class GameConnection
{
    public ISession Session { get; private set; }
    public NetworkEndpoint ListenEndpoint { get; private set; }
    public NetworkEndpoint ConnectEndpoint { get; private set; }
    public NetworkType SessionConnectionType { get; private set; }

    public static async Task<GameConnection> JoinGameAsync()
    {
        var gameConnection = new GameConnection();

        await StartServicesAsync();

        var networkHandler = new EntityNetworkHandler();
        JoinSessionOptions options = new JoinSessionOptions();
        options.WithNetworkHandler(networkHandler);
        Debug.Log(ConnectionSettings.Instance.SessionCode);
        gameConnection.Session = await MultiplayerService.Instance.JoinSessionByCodeAsync(ConnectionSettings.Instance.SessionCode, options); 
        gameConnection.ConnectEndpoint = await networkHandler.ConnectEndpoint;
        gameConnection.ListenEndpoint = await networkHandler.ListenEndpoint;
        gameConnection.SessionConnectionType = await networkHandler.SessionConnectionType;
        return gameConnection;

    }

    public static async Task<GameConnection> JoinOrCreateMatchmmakerGameAsync(CancellationToken cancellationToken)
    {
        var gameConnection = new GameConnection();
        await StartServicesAsync();

        ConnectionSettings.Instance.GameConnectionState = GameConnectionState.Matchmaking;
        var options = CreateSessionOptions(GameManager.Instance.CurrentSessionSettings.ConnectionTypeRequested, ConnectionSettings.Instance.IPAddress, ConnectionSettings.Instance.Port);
        var networkHandler = new EntityNetworkHandler();
        options.WithNetworkHandler(networkHandler);
        MatchmakerOptions match = new MatchmakerOptions
        {
            QueueName = GameManager.Instance.CurrentSessionSettings.MatchmakerTypeRequested == MatchmakerType.Dgs
                ? "multiplayer-n4e-dgs"
                : "multiplayer-n4e-p2p",
        };
        LoadingData.Instance.UpdateLoading(LoadingData.LoadingSteps.LookingForMatch);
        gameConnection.Session = await MultiplayerService.Instance.MatchmakeSessionAsync(match, options, cancellationToken);
        gameConnection.ConnectEndpoint = await networkHandler.ConnectEndpoint;
        gameConnection.ListenEndpoint = await networkHandler.ListenEndpoint;
        gameConnection.SessionConnectionType = await networkHandler.SessionConnectionType;

        return gameConnection;
    }

    public static async Task<GameConnection> CreateGameAsync()
    {
        var gameConnection = new GameConnection();
        await StartServicesAsync();

        var options = CreateSessionOptions(GameManager.Instance.CurrentSessionSettings.ConnectionTypeRequested, ConnectionSettings.Instance.IPAddress, ConnectionSettings.Instance.Port);
        var networkHandler = new EntityNetworkHandler();
        options.WithNetworkHandler(networkHandler);
        gameConnection.Session = await MultiplayerService.Instance.CreateSessionAsync(options);
        gameConnection.ConnectEndpoint = await networkHandler.ConnectEndpoint;
        gameConnection.ListenEndpoint = await networkHandler.ListenEndpoint;
        gameConnection.SessionConnectionType = await networkHandler.SessionConnectionType;

        return gameConnection;
    }


    static async Task StartServicesAsync()
    {
        if(UnityServices.State != ServicesInitializationState.Initialized)
        {
            await UnityServices.InitializeAsync();
        }

        if (!AuthenticationService.Instance.IsAuthorized)
        {
            await AuthenticationService.Instance.SignInAnonymouslyAsync();
        }
    }

    static SessionOptions CreateSessionOptions(ConnectionType connectionType, string address, string port)
    {
        SessionOptions options = new SessionOptions { MaxPlayers = GameManager.MaxPlayer };
        switch (connectionType)
        {
            case ConnectionType.Relay:
                options.WithRelayNetwork();
                break;
            case ConnectionType.Direct:
                options.WithDirectNetwork("0.0.0.0", address, ushort.Parse(port));
                break;
        }
        return options;
    }
}
