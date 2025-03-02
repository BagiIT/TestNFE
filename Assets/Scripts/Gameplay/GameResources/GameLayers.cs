using Unity.Physics;
using UnityEngine;

public static class GameLayers
{
    public static int Default;
    public static int Players;
    public static int Weapons;
    public static CollisionFilter CollideWithPlayers;

#if UNITY_EDITOR
    [UnityEditor.InitializeOnLoadMethod]
#endif
    [RuntimeInitializeOnLoadMethod]
    public static void Init()
    {
        Default = LayerMask.NameToLayer(nameof(Default));
        Players = LayerMask.NameToLayer(nameof(Players));
        Weapons = LayerMask.NameToLayer(nameof(Weapons));
        CollideWithPlayers = CreateCollidesWithCollisionFilter(Players);
    }

    static CollisionFilter CreateCollidesWithCollisionFilter(int layerAsIndex)
    {
        var mask = 1u << layerAsIndex;
        var filter = CollisionFilter.Default;
        filter.CollidesWith = mask;
        return filter;
    }
}
