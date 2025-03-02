using UnityEngine;
using UnityEngine.Splines;

public class CameraTrain : MonoBehaviour
{
    public SplineContainer Spline;
    public Transform LookAt;

    private void LateUpdate()
    {
        if(GameSettings.Instance.GameState == GlobalGameState.MainMenu)
        {
            if(MainGameObjectCamera.Instance != null)
            {
                if(!MainGameObjectCamera.Instance.TryGetComponent(out SplineAnimate spline))
                {
                    spline = MainGameObjectCamera.Instance.gameObject.AddComponent<SplineAnimate>();
                    spline.AnimationMethod = SplineAnimate.Method.Speed;
                    spline.MaxSpeed = 0.05f;
                    spline.Container = GetComponent<SplineContainer>();
                    spline.Restart(true);
                }
                MainGameObjectCamera.Instance.transform.LookAt(LookAt);
            }
        }
        else
        {
            if(MainGameObjectCamera.Instance != null && MainGameObjectCamera.Instance.TryGetComponent(out SplineAnimate spline))
                Destroy(spline);
            
        }
    }
}
