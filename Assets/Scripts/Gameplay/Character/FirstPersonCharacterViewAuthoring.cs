using Unity.Entities;
using UnityEngine;


[DisallowMultipleComponent]
public class FirstPersonCharacterViewAuthoring : MonoBehaviour
{
    public GameObject Character;

    public class Baker : Baker<FirstPersonCharacterViewAuthoring>
    {
        public override void Bake(FirstPersonCharacterViewAuthoring authoring)
        {
            if(authoring.transform.parent != authoring.Character.transform)
            {
                Debug.Log("Error : The character view must be direct 1st-level child of the character authoring gameobject. Conversion will be aborted");
                return;
            }

            Entity entity = GetEntity(TransformUsageFlags.Dynamic);
            AddComponent(entity, new FirstPersonCharacterView { CharacterEntity = GetEntity(authoring.Character, TransformUsageFlags.Dynamic) });
        }
    }
}
