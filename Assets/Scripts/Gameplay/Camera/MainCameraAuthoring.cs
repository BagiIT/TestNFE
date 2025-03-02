using UnityEngine;
using Unity.Entities;

public class MainCameraAuthoring : MonoBehaviour
{
    public float FOV = 75f;

    public class Baker : Baker<MainCameraAuthoring>
    {
        public override void Bake(MainCameraAuthoring authoring)
        {
            Entity entity = GetEntity(TransformUsageFlags.Dynamic);
            AddComponent(entity, new MainCamera(authoring.FOV));
        }
    }
}

public struct MainCamera : IComponentData
{
    public MainCamera(float fov)
    {
        BaseFov = fov;
        CurrentFov = fov;
    }

    public float BaseFov;
    public float CurrentFov;
}

