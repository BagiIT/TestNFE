using System;
using Unity.Entities;
using Unity.Mathematics;
using UnityEngine;

[Serializable]
public struct CharacterWeaponVisualFeedback : IComponentData
{
    public float3 WeaponLocalPosBob;
    public float3 WeaponLocalPosReciol;

    public float CurrentRecoil;

    public float TargetRecoilFovKick;
    public float CurrentRecoilFovKick;
}
