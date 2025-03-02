using Unity.Entities;
using Unity.Mathematics;
using UnityEngine;

public class BaseWeaponAuthoring : MonoBehaviour
{
    public GameObject ShotOrigin;
    public bool Automatic;
    public float FireRate;
    public float SpreadDegrees;
    public int ProjectilesPerShoot;
    public WeaponVisualFeedback.Authoring VisualFeedback = WeaponVisualFeedback.Authoring.GetDefault();

    class Baker : Baker<BaseWeaponAuthoring>
    {
        public override void Bake(BaseWeaponAuthoring authoring)
        {
            Entity entity = GetEntity(TransformUsageFlags.Dynamic);
            AddComponent(entity, new BaseWeapon
            {
                ShotOrigin = GetEntity(authoring.ShotOrigin, TransformUsageFlags.Dynamic),
                Automatic = authoring.Automatic,
                FireRate = authoring.FireRate,
                SpreadRadians = math.radians(authoring.SpreadDegrees),
                ProjectilesPerShot = authoring.ProjectilesPerShoot,
            });
            AddComponent(entity, new WeaponVisualFeedback(authoring.VisualFeedback));
            AddComponent(entity, new WeaponControl());
            AddComponent(entity, new WeaponOwner());
            AddComponent(entity, new WeaponShotSimulationOriginOverride());
            AddBuffer<WeaponShotIgnoredEntity>(entity);
            AddBuffer<WeaponProjectileEvent>(entity);
        }
    }
}
