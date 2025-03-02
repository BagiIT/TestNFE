using Unity.Entities;
using UnityEngine;

[RequireComponent(typeof(BaseWeaponAuthoring))]
public class RaycastProjectileWeaponAuthoring : MonoBehaviour
{
    public GameObject ProjectilePrefab;
    public RaycastWeaponVisualSyncMode VisualSyncMode;

    public class Baker : Baker<RaycastProjectileWeaponAuthoring>
    {
        public override void Bake(RaycastProjectileWeaponAuthoring authoring)
        {
            Entity entity = GetEntity(TransformUsageFlags.Dynamic);
            AddComponent(entity, new RaycastWeapon
            {
                ProjecttilePrefab = GetEntity(authoring.ProjectilePrefab, TransformUsageFlags.Dynamic),
                VisualSyncMode = authoring.VisualSyncMode
            });
            AddBuffer<RaycastWeaponVisualProcjetileEvent>(entity);
        }
    }
}
