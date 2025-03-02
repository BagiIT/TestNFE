using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class InputSystemManager : MonoBehaviour
{
    public static Task<bool> IsMobile => s_IsMobile.Task;
    static TaskCompletionSource<bool> s_IsMobile;

    [SerializeField]
    Volume PostProcessingVolume;

    InputAaction_FPS.UIActions uIActions;
    InputAaction_FPS.GameActions gameActions;

    [Header("Debug"), Tooltip("This option is only used in Playmode in the Editor")]
    public bool ForceMobileInput;

    VolumeComponent m_DepthOfField;

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void InitializeStatic() => s_IsMobile = new TaskCompletionSource<bool>();

    void Awake()
    {
#if UNITY_EDITOR
        if (ForceMobileInput)
#endif
#if UNITY_EDITOR || UNITY_ANDROID || UNITY_IOS
        {
            // On mobile, the GameInput Actions are filtered to only allow the Mobile Scheme the MobileGamepadController class is using.
            GameInput.Actions.Disable();
            GameInput.Actions.bindingMask = InputBinding.MaskByGroup(GameInput.Actions.MobileScheme.bindingGroup);
            GameInput.Actions.Enable();
            s_IsMobile.SetResult(true);

#if UNITY_EDITOR
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;
#endif
        }
#endif
#if UNITY_EDITOR
        else
#endif
#if UNITY_EDITOR || (!UNITY_ANDROID && !UNITY_IOS)
        {
            s_IsMobile.SetResult(false);
        }
#endif
    }

    private void Start()
    {
        uIActions = GameInput.Actions.UI;
        gameActions = GameInput.Actions.Game;

        uIActions.Disable();
        gameActions.Disable();

        if(!PostProcessingVolume.profile.TryGet(typeof(DepthOfField), out m_DepthOfField))
            Debug.Log("Could not find Depth Of Field Post Processing Component, needed for UI Blur");

    }


    private void LateUpdate()
    {
        var gameIsInUI = GameSettings.Instance.GameState != GlobalGameState.InGame ||
                        GameSettings.Instance.IsPauseMenuOpen || 
                        ConnectionSettings.Instance.GameConnectionState == GameConnectionState.Connecting;

        if (gameIsInUI && !uIActions.enabled)
        {
            //Set virtual device state and style.
            //MobileGamepadState.GetOrCreate.ButtonShoot = false;

            gameActions.Disable();
            uIActions.Enable();
        }
        if (!gameIsInUI && !gameActions.enabled)
        {
            uIActions.Disable();
            gameActions.Enable();
        }
        if (!IsMobile.Result)
        {
            Cursor.visible = gameIsInUI;
            Cursor.lockState = Cursor.visible
                ? CursorLockMode.None
                : CursorLockMode.Locked;
        }
        else
        {
            if (GameSettings.Instance.GameState != GlobalGameState.InGame) { return; }
                //MobileGamepadState.GetOrCreate.ButtonAim = false;
        }

        m_DepthOfField.active = gameIsInUI;
    }
}
