using System;
using UnityEngine;
using UnityEngine.UIElements;

static class VisualElementExtension
{
    public static void RegisterTextFieldInputCallbacks(this VisualElement root)
    {
        root.RegisterCallback<FocusInEvent>(OnFocusInTextField);
        root.RegisterCallback<FocusOutEvent>(OnFocusOutTextField);
    }

    static void OnFocusOutTextField(FocusOutEvent evt)
    {
        if (evt.target is TextElement)
            GameInput.Actions.Debug.Enable();
    }

    static void OnFocusInTextField(FocusInEvent evt)
    {
        if (evt.target is TextElement)
            GameInput.Actions.Debug.Disable();
    }

    public static void UnregisterTextFieldInputCallbacks(this VisualElement root)
    {
        root.UnregisterCallback<FocusInEvent>(OnFocusInTextField);
        root.UnregisterCallback<FocusOutEvent>(OnFocusOutTextField);
    }
}
