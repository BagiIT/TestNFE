using UnityEngine;
using UnityEngine.UIElements;
using Unity.Properties;
using System;

[RequireComponent(typeof(UIDocument))]
public class SessionCodePopUp : MonoBehaviour
{
    static class UIElementNames
    {
        public const string SessionInputField = "SessionField";
        public const string JoinButton = "JoinButton";
        public const string CancleButton = "CancleButton";
    }



    VisualElement m_SessionCodePopUp;
    Button m_JoinButton;
    Button m_CancleButton;

    private void OnEnable()
    {
        m_SessionCodePopUp = GetComponent<UIDocument>().rootVisualElement;
        m_SessionCodePopUp.RegisterTextFieldInputCallbacks();

        m_SessionCodePopUp.SetBinding("style.display", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath = new PropertyPath(GameSettings.SessionCodeStylePropertyName),
            bindingMode = BindingMode.ToTarget
        });

        var sessionCode = m_SessionCodePopUp.Q<TextField>(UIElementNames.SessionInputField);
        sessionCode.SetBinding("value", new DataBinding
        {
            dataSource = ConnectionSettings.Instance,
            dataSourcePath = new PropertyPath(nameof(ConnectionSettings.SessionCode)),
            bindingMode = BindingMode.TwoWay,
        });

        m_JoinButton = m_SessionCodePopUp.Q<Button>(UIElementNames.JoinButton);
        m_JoinButton.clicked += OnJoinPressed;
        Debug.Log(m_JoinButton);
        m_JoinButton.SetBinding("enableSelf", new DataBinding
        {
            dataSource = ConnectionSettings.Instance,
            dataSourcePath = new PropertyPath(nameof(ConnectionSettings.IsSessionCodeFormatValid)),
            bindingMode = BindingMode.ToTarget,
        });

        m_CancleButton = m_SessionCodePopUp.Q<Button>(UIElementNames.CancleButton);
        m_CancleButton.clicked += OnCanclePressed;
    }

    private void OnJoinPressed() => GameSettings.Instance.CancellableUserInputPopUp.SetResult();

    private void OnCanclePressed()
    {
        GameSettings.Instance.CancellableUserInputPopUp.SetCanceled();
        ConnectionSettings.Instance.SessionCode = "";
    }

    private void OnDisable()
    {
        m_SessionCodePopUp.UnregisterTextFieldInputCallbacks();

        m_JoinButton.clicked -= OnJoinPressed;
        m_CancleButton.clicked -= OnCanclePressed;
    }
}
