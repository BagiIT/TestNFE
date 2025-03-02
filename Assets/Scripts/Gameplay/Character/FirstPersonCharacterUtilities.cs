using Unity.CharacterController;
using Unity.Mathematics;
using UnityEngine;

public static class FirstPersonCharacterUtilities
{
    public static float ComputeCharacterYAngleFromDirection(float3 forward)
    {
        float direction = math.dot(forward, math.right()) >= 0 ? 1 : -1;
        return math.degrees(math.acos(math.dot(forward, math.forward()))) * direction;
    }

    public static void ComputeFinalRotationsFromRotationDelta(
        ref float viewPitchDegress,
        ref float characterRotationYDegres,
        float3 characterTransformUp,
        float2 yawPitchDeltaDegrees,
        float viewRollDegrees,
        float minPitchDegrees,
        float maxPitchDegrees,
        out quaternion characterRotation,
        out quaternion viewLocalRotation)
    {
        //Yaw
        characterRotationYDegres += yawPitchDeltaDegrees.x;
        ComputeRotationFromYAngleUp(characterRotationYDegres, characterTransformUp, out characterRotation);

        //Pitch
        viewPitchDegress += yawPitchDeltaDegrees.y;
        viewPitchDegress = math.clamp(viewPitchDegress, minPitchDegrees, maxPitchDegrees);

        viewLocalRotation = CalculateLocalViewRotation(viewPitchDegress, viewRollDegrees);
    }

    public static void ComputeRotationFromYAngleUp(
        float characterRotationYDegrees,
        float3 characterTransformUp,
        out quaternion characterRotation)
    {
        characterRotation = math.mul(MathUtilities.CreateRotationWithUpPriority(characterTransformUp, math.forward()), quaternion.Euler(0f, math.radians(characterRotationYDegrees), 0f)); ;
    }

    public static quaternion CalculateLocalViewRotation(float viewPitchDegrees, float viewRollDegrees)
    {
        //Pitch
        quaternion viewLocalRotation = quaternion.AxisAngle(-math.right(), math.radians(viewPitchDegrees));

        //Roll
        viewLocalRotation = math.mul(viewLocalRotation, quaternion.AxisAngle(math.forward(), math.radians(viewRollDegrees)));

        return viewLocalRotation;
    }
}
