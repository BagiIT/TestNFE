using UnityEngine;
using UnityEngine.UIElements;
using Unity.Properties;
using Unity.Mathematics;
using Unity.NetCode;
using Unity.Entities;


[RequireComponent(typeof(UIDocument))]
public class RespawnScreen : MonoBehaviour
{
    public class UIElementNames
    {
        public const string RespawnMessageLable = "RespawnMessage";
    }

    float m_Timer;
    bool m_ResetTimer = true;


    private void OnEnable()
    {
        var root = GetComponent<UIDocument>().rootVisualElement;

        root.SetBinding("style.display", new DataBinding
        {
            dataSource = GameSettings.Instance,
            dataSourcePath = new PropertyPath(GameSettings.RespawnScreenStylePropertyName),
            bindingMode = BindingMode.ToTarget,
        });

        var respawnMessageText = root.Q<Label>(UIElementNames.RespawnMessageLable);
        respawnMessageText.SetBinding("text", new DataBinding
        {
            dataSource = RespawnData.Instance,
            dataSourcePath = new PropertyPath(RespawnData.RespawnMessagePropertyName),
            bindingMode= BindingMode.ToTarget,
        });
    }

    void LateUpdate()
    {
        if(GameSettings.Instance.PlayerState == PlayerState.Dead)
        {
            m_ResetTimer = true;
            if (m_Timer > 0f)
            {
                m_Timer -= Time.deltaTime;
                if (m_Timer < 0f) m_Timer = 0f;
            }
            RespawnData.Instance.RespawnTimer = (int)math.ceil(m_Timer);
        }
        else if (m_ResetTimer)
        {
            if(ClientServerBootstrap.ClientWorld != null)
            {
                var request = ClientServerBootstrap.ClientWorld.EntityManager.CreateEntityQuery(
                    ComponentType.ReadOnly<GameResources>());
                if(request.TryGetSingleton(out GameResources gameResources))
                {
                    m_Timer = gameResources.RespawnTime;
                    RespawnData.Instance.RespawnTimer = (int)math.ceil(m_Timer);
                    m_ResetTimer = false;
                }
            }
        }
    }
}
