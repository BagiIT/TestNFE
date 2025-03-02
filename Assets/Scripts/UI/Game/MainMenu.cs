using UnityEngine;
using UnityEngine.UIElements;
using Unity.Properties;
using System;
using UnityEngine.EventSystems;

[RequireComponent(typeof(UIDocument))]
public class MainMenu : MonoBehaviour
{
    static class UIElementNames
    {
        public const string HidingBackground = "HidingBackground";
        public const string NameInputField = "PlayerNameField";
        public const string SpectatorToggle = "SpectatorToggle";
        public const string CreateGame = "CreateGame";
        public const string JoinGame = "JoinGame";
        public const string QuickJoin = "QuickJoin";
        public const string QuitButton = "QuitButton";
    }

    VisualElement m_MainMenu;
    Button m_CreateGameButton;
    Button m_JoinGameButton;
    Button m_QuickJoinButton;
    Button m_QuitButton;

    private void OnEnable()
    {
        m_MainMenu = GetComponent<UIDocument>().rootVisualElement;
        m_MainMenu.RegisterTextFieldInputCallbacks();

        m_MainMenu.SetBinding("style.display", new DataBinding
        {
            dataSource = GameSettings.Instance
            ,
            dataSourcePath = new PropertyPath(GameSettings.MainMenuStylePropertyName),
            bindingMode = BindingMode.ToTarget,
        });

        var nameInputField = m_MainMenu.Q<TextField>(UIElementNames.NameInputField);
        nameInputField.SetBinding("value", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath = new PropertyPath(nameof(GameSettings.PlayerName)),
            bindingMode = BindingMode.TwoWay,
        });

        var spectatorToggle = m_MainMenu.Q<Toggle>(UIElementNames.SpectatorToggle);
        spectatorToggle.SetBinding("value", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath= new PropertyPath(nameof(GameSettings.SpectatorToggle)),
            bindingMode = BindingMode.TwoWay,
        });

        m_CreateGameButton = m_MainMenu.Q<Button>(UIElementNames.CreateGame);
        m_CreateGameButton.clicked += OnCreateGamePressed;

        m_JoinGameButton = m_MainMenu.Q<Button>(UIElementNames.JoinGame);
        m_JoinGameButton.clicked += OnJoinGamePressed;

        m_QuickJoinButton = m_MainMenu.Q<Button>(UIElementNames.QuickJoin);
        m_QuickJoinButton.clicked += OnQuickJoinPressed;

        m_QuitButton = m_MainMenu.Q<Button>(UIElementNames.QuitButton);
        m_QuitButton.clicked += OnQuitPressed;

        var hidingBackground = m_MainMenu.Q<VisualElement>(UIElementNames.HidingBackground);
        hidingBackground.SetBinding("style.display", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath = new PropertyPath(GameSettings.MainMenuSceneLoadedPropertyName),
            bindingMode = BindingMode.ToTarget,
        });
    }

    private void OnDisable()
    {
        m_MainMenu.UnregisterTextFieldInputCallbacks();

        m_CreateGameButton.clicked -= OnCreateGamePressed;
        m_JoinGameButton.clicked -= OnJoinGamePressed;
        m_QuickJoinButton.clicked -= OnQuickJoinPressed;
        m_QuitButton.clicked -= OnQuitPressed;
    }

    private void Start()
    {
        EventSystem.current.SetSelectedGameObject(transform.parent.GetComponentInChildren<PanelRaycaster>().gameObject);
    }

    static void OnQuitPressed() => GameManager.Instance.QuitAsync();

    static void OnQuickJoinPressed() => GameManager.Instance.StartGameAsync(CreationType.QuickJoin);

    static void OnJoinGamePressed() => GameManager.Instance.StartGameAsync(CreationType.Join);

    static void OnCreateGamePressed() => GameManager.Instance.StartGameAsync(CreationType.Create);
    
}
