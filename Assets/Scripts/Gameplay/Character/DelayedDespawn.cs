using Unity.Entities;
using Unity.NetCode;

[GhostComponent]
[GhostEnabledBit]
public struct DelayedDespawn : IComponentData, IEnableableComponent
{
    public uint Ticks;
    public byte HasHandlePreDespawn;
}
