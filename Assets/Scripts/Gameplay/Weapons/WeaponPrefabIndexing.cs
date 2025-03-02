using Unity.Entities;
using UnityEngine;

public class WeaponPrefabIndexing : MonoBehaviour
{
    public int Index;

    public class Baker : Baker<WeaponPrefabIndexing>
    {
        public override void Bake(WeaponPrefabIndexing authoring)
        {
            Entity entity = GetEntity(TransformUsageFlags.None);
            AddComponent(entity, new WeaponPrefabIndex { Index = authoring.Index });
        }
    }
}

public struct WeaponPrefabIndex : IComponentData
{
    public int Index;
}
