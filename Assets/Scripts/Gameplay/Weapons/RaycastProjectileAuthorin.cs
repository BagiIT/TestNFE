using Unity.Entities;
using UnityEngine;

public class RaycastProjectileAuthorin : MonoBehaviour
{
    public float Damage = 1f;
    public float Range = 1000f;

    class Baker : Baker<RaycastProjectileAuthorin>
    {
        public override void Bake(RaycastProjectileAuthorin authoring)
        {
            Entity entity = GetEntity(TransformUsageFlags.Dynamic);
            AddComponent(entity, new RaycastProjectile
            {
                Damage = authoring.Damage,
                Range = authoring.Range
            });

        }
    }
}
