using Unity.Entities;
using Unity.Transforms;

[WorldSystemFilter(WorldSystemFilterFlags.ClientSimulation)]
[UpdateInGroup(typeof(PresentationSystemGroup))]
public partial class MainCameraSystem : SystemBase
{
    protected override void OnCreate()
    {
        RequireForUpdate<MainCamera>();
    }

    protected override void OnUpdate()
    {
        if(MainGameObjectCamera.Instance != null)
        {
            Entity mainEntityCameraEntity = SystemAPI.GetSingletonEntity<MainCamera>();
            MainCamera mainCamera = SystemAPI.GetSingleton<MainCamera>();
            LocalToWorld targetLocalWorld = SystemAPI.GetComponent<LocalToWorld>(mainEntityCameraEntity);
            MainGameObjectCamera.Instance.transform.SetPositionAndRotation(targetLocalWorld.Position,
                targetLocalWorld.Rotation);
            MainGameObjectCamera.Instance.fieldOfView = mainCamera.CurrentFov;
        }
    }
}
