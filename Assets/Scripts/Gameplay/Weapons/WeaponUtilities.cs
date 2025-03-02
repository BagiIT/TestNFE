using Unity.CharacterController;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Physics;
using Unity.Transforms;
using UnityEngine;

using Random = Unity.Mathematics.Random;
using RaycastHit = Unity.Physics.RaycastHit;

public static class WeaponUtilities
{
    public static bool GetClosestValiWeaponRaycastHit(
        in NativeList<RaycastHit> hits,
        in DynamicBuffer<WeaponShotIgnoredEntity> ignoredEntities,
        out RaycastHit closestValidHit)
    {
        closestValidHit = default;
        closestValidHit.Fraction = float.MaxValue;
        for (var j = 0; j < hits.Length; j++)
        {
            RaycastHit tmpHit = hits[j];

            if(tmpHit.Fraction < closestValidHit.Fraction)
            {
                if (PhysicsUtilities.IsCollidable(tmpHit.Material))
                {
                    var entityValid = true;
                    for(var k = 0; k < ignoredEntities.Length; k++)
                    {
                        if(tmpHit.Entity == ignoredEntities[k].Entity)
                        {
                            entityValid = false;
                            break;
                        }
                    }
                    if(entityValid)
                    {
                        closestValidHit = tmpHit;
                    }
                }
            }
        }
        return closestValidHit.Entity != Entity.Null;
    }

    public static RigidTransform GetShotSimulationOrigin(
        Entity shotOriginEntity,
        in WeaponShotSimulationOriginOverride shotSimulationOriginOverride,
        ref ComponentLookup<LocalTransform> localTransformLookup,
        ref ComponentLookup<Parent> parentLookup,
        ref ComponentLookup<PostTransformMatrix> postTransformMatixLookup)
    {
        Entity shotSimulationOriginEntity = localTransformLookup.HasComponent(shotSimulationOriginOverride.Entity) ? shotSimulationOriginOverride.Entity : shotOriginEntity;
        TransformHelpers.ComputeWorldTransformMatrix(shotSimulationOriginEntity, out float4x4 shotSimulationOriginTransform, ref localTransformLookup, ref parentLookup, ref postTransformMatixLookup);

        return new RigidTransform(shotSimulationOriginTransform.Rotation(), shotSimulationOriginTransform.Translation());
    }

    public static quaternion CalculateSpreadRotation(quaternion shotSimulationRotation, float spreadRadians, ref Random random)
    {
        quaternion shotSpreadRotation = quaternion.identity;
        if (spreadRadians > 0f)
        {
            shotSpreadRotation = math.slerp(random.NextQuaternionRotation(), quaternion.identity, (math.PI - math.clamp(spreadRadians, 0f, math.PI)) / math.PI);
        }
        return math.mul(shotSpreadRotation, shotSimulationRotation);
    }

    public static void CalculateIndividualRaycastShot(
        float3 shotSimulationOrigin,
        float3 shotSimulationDirection,
        float range,
        in CollisionWorld collisionWorld,
        ref NativeList<RaycastHit> hits,
        in DynamicBuffer<WeaponShotIgnoredEntity> ignoredEntities,
        out bool hitFound,
        out float3 hitNormal,
        out Entity hitEntity,
        out float3 shotEndPoint)
    {
        hits.Clear();
        RaycastInput rayInput = new RaycastInput
        {
            Start = shotSimulationOrigin,
            End = shotSimulationOrigin + shotSimulationDirection * range,
            Filter = CollisionFilter.Default
        };

        collisionWorld.CastRay(rayInput, ref hits);
        hitFound = GetClosestValiWeaponRaycastHit(in hits, in ignoredEntities, out RaycastHit closestValidHit);

        var hitDistance = range;
        hitNormal = default;
        hitEntity = default;
        if (hitFound)
        {
            hitDistance = closestValidHit.Fraction * range;
            hitNormal = closestValidHit.SurfaceNormal;
            hitEntity = closestValidHit.Entity;
        }

        shotEndPoint = shotSimulationOrigin + shotSimulationDirection * hitDistance;
    }

}
