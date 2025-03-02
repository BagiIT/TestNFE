using System;
using Unity.NetCode;
using Unity.Services.Multiplayer;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Scripting;
using Object = UnityEngine.Object;

[Preserve]
public class GameBootstrap : ClientServerBootstrap
{
    public override bool Initialize(string defaultWorldName)
    {

#if UNITY_SERVER && !UNITY_EDITOR
        AutoConnectPort = 0; // Disable the auto-connect
                                 //Create only a local simulation world without any multiplayer and netcode system in it.
        CreateLocalWorld(defaultWorldName); // Client & Server worlds are not created in that case,
                                                // we do so conditionally (depending on what the user chooses
                                                // via the MainMenu UI).

        return true;
#else
        if (SceneManager.GetActiveScene().name == GameManager.MainMenuSceneName)
        {
            if(RequestedPlayType == PlayType.Server)
            {
#if UNITY_EDITOR
                MultiplayerPlayModePreferences.RequestedPlayType = PlayType.ClientAndServer;
#else
throw new System.NotSupportedException("Starting from the MainMenu scene is not supported when the Playmode Tools RequestedPlayType is Server.");
#endif
            }
            AutoConnectPort = 0; // Disable the auto-connect
                                 //Create only a local simulation world without any multiplayer and netcode system in it.
            CreateLocalWorld(defaultWorldName); // Client & Server worlds are not created in that case,
                                                // we do so conditionally (depending on what the user chooses
                                                // via the MainMenu UI).
            return true;
        }

        NetworkRole role = RequestedPlayType switch
        {
            PlayType.ClientAndServer => NetworkRole.Host,
            PlayType.Client => NetworkRole.Client,
            PlayType.Server => NetworkRole.Server,
            _ => throw new ArgumentOutOfRangeException()
        };
        NetworkStreamReceiveSystem.DriverConstructor = new EntityDriverConstructor(role);

        AutoConnectPort = ConnectionSettings.DefaultServerPort;
        if (base.Initialize(defaultWorldName))
        {
            //Load gamemanager
            if(GameManager.Instance == null)
            {
                GameManager gameManagerPrefab = Resources.Load<GameManager>("GameManager");
                if(gameManagerPrefab != null)
                {
                    Object.Instantiate(gameManagerPrefab);
                }
                else
                {
                    Debug.LogError("Unable to find GameManager prefab in the Resources folder ");
                    return false;
                }
            }
            //Setup the right connection endpoint so the clientconnectiosystem is working
            ConnectionSettings.Instance.ConnectionEndpoint = DefaultConnectAddress.WithPort(AutoConnectPort);

            //Resume game start from the GameManager
            GameManager.Instance.StartFromBootstrapAsync(ServerWorld, ClientWorld);
            return true;
        }

        return false;
#endif
    }
}
