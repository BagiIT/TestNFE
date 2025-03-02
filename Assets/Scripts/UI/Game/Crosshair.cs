using UnityEngine;
using UnityEngine.UIElements;
using Unity.Properties;

[RequireComponent(typeof(UIDocument))]
public class Crosshair : MonoBehaviour
{
    private void OnEnable()
    {
        var root = GetComponent<UIDocument>().rootVisualElement;
        root.SetBinding("style.display", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath = new PropertyPath(GameSettings.InGameUIPropertyName),
            bindingMode = BindingMode.ToSource,
        });
    }
}
