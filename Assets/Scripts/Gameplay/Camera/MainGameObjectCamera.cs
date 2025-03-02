using UnityEngine;

[RequireComponent(typeof(Camera))]
public class MainGameObjectCamera : MonoBehaviour
{

    public static Camera Instance;

    void Awake()
    {
        if(Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = GetComponent<Camera>();
    }

    void OnDestroy()
    {
        if(Instance == GetComponent<Camera>())
        {
            Instance = null;
        }
    }
}
