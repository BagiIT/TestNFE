using UnityEngine;
using UnityEngine.UIElements;

[RequireComponent(typeof(UIDocument))]
public class ConnectionStatusScreen : MonoBehaviour
{
    static class UIElementNames
    {
        public const string CancleButton = "CancleButton";
    }

    Button m_CancleButton;

    private void OnEnable()
    {
        var root = GetComponent<UIDocument>().rootVisualElement;

        root.SetBinding("style.display", new DataBinding
        {
            dataSource = ConnectionSettings.Instance,
            dataSourcePath = new Unity.Properties.PropertyPath(ConnectionSettings.ConnectionStatusStylePropertyName),
            bindingMode = BindingMode.ToTarget,
        });

        m_CancleButton = root.Q<Button>(UIElementNames.CancleButton);
        m_CancleButton.clicked += OnCanclePressed;
    }

    private void OnDisable()
    {
        m_CancleButton.clicked -= OnCanclePressed;
    }

    static void OnCanclePressed() => GameManager.Instance.ReturnToMainMenuAsync();
}
