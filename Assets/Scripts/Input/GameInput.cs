using UnityEngine;

public static class GameInput
{
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
    static void RuntimeInitializeOnLoad()
    {
        Actions = new InputAaction_FPS();
        Actions.Enable();
    }

    public static InputAaction_FPS Actions { get; private set; } = null!;
}
