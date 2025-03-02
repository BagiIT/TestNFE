using UnityEngine;
using UnityEngine.UIElements;
using Unity.Properties;
using System;
using UnityEngine.InputSystem;
using UnityEngine.EventSystems;

[RequireComponent(typeof(UIDocument))]
public class PauseMenu : MonoBehaviour
{
    static class UIElementNames
    {
        public const string LookSensitivitySlider = "LookSensitivitySlider";
        public const string ResumeButton = "ResumeButton";
        public const string MainMenuButton = "MainMenuButton";
        public const string QuitButton = "QuitButton";
        public const string InvertYAxis = "InvertYAxis";
    }

    Button m_ResumeButton;
    Button m_MainMenuButton;
    Button m_QuitButton;


    private void OnEnable()
    {
        var root = GetComponent<UIDocument>().rootVisualElement;
        GameInput.Actions.Game.TogglePauseMenu.performed += TogglePauseMenuVisability;

        root.SetBinding("style.display", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath = new PropertyPath(GameSettings.PauseMenuStylePropertyName),
            bindingMode = BindingMode.ToTarget,
        });

        var sensitivirySlider = root.Q<Slider>(UIElementNames.LookSensitivitySlider);
        sensitivirySlider.SetBinding("value", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath = new PropertyPath(nameof(GameSettings.LookSensitivity)),
            bindingMode = BindingMode.TwoWay,
        });

        var invertYAxis = root.Q<Toggle>(UIElementNames.InvertYAxis);
        invertYAxis.SetBinding("value", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath = new PropertyPath(nameof(GameSettings.InvertYAxis)),
            bindingMode = BindingMode.TwoWay,
        });

        m_ResumeButton = root.Q<Button>(UIElementNames.ResumeButton);
        m_ResumeButton.clicked += OnResumePressed;

        m_MainMenuButton = root.Q<Button>(UIElementNames.MainMenuButton);
        m_MainMenuButton.clicked += OnMainMenuPressed;

        m_QuitButton = root.Q<Button>(UIElementNames.QuitButton);
        m_QuitButton.clicked += OnQuitPressed;
    }

    private void OnDisable()
    {
        GameInput.Actions.Game.TogglePauseMenu.performed -= TogglePauseMenuVisability;

        m_ResumeButton.clicked -= OnResumePressed;
        m_MainMenuButton.clicked -= OnMainMenuPressed;
        m_QuitButton.clicked -= OnQuitPressed;
    }

    private void TogglePauseMenuVisability(InputAction.CallbackContext context)
    {
        EventSystem.current.SetSelectedGameObject(transform.parent.GetComponentInChildren<PanelRaycaster>().gameObject);
        GameSettings.Instance.IsPauseMenuOpen = true;
    }

    static void OnResumePressed() => GameSettings.Instance.IsPauseMenuOpen = false;


    static void OnMainMenuPressed() => GameManager.Instance.ReturnToMainMenuAsync();

    static void OnQuitPressed() => GameManager.Instance.QuitAsync();
}
