using Unity.Mathematics;
using UnityEngine;

public static class FirstPersonInputDeltaUtilities
{
    const float k_DefaultWrapAroundValue = 1000f;

    public static void AddInputDelta(ref float2 input, float2 addedDelta)
    {
        input = math.fmod(input + addedDelta, k_DefaultWrapAroundValue);
    }

    public static float2 GetInputDelta(float2 currentValue, float2 previousValue)
    {
        float2 delat = currentValue - previousValue;

        if(math.abs(delat.x) > (k_DefaultWrapAroundValue * 0.5f))
        {
            delat.x += (math.sign(previousValue.x - currentValue.x) * k_DefaultWrapAroundValue);
        }
        if (math.abs(delat.y) > (k_DefaultWrapAroundValue * 0.5f))
        {
            delat.y += (math.sign(previousValue.y - currentValue.y) * k_DefaultWrapAroundValue);
        }

        return delat;
    }
}
