using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.NiceVibrations;
//using Obvious.Soap;

public class HapticManager : MonoBehaviour
{

    public static HapticManager Instance;

    //[SerializeField] private BoolVariable SHaptic;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }

        Debug.Log("HapticManager Call");
    }

    public void SoftHapticCalled()
    {
        if (PlayerPrefs.GetInt("Vibrate") == 0)
        {
            MMVibrationManager.Haptic(HapticTypes.SoftImpact, false, true, this);
        }

    }

    public void MediumHapticCalled()
    {
        if (PlayerPrefs.GetInt("Vibrate") == 0)
        {
        MMVibrationManager.Haptic(HapticTypes.MediumImpact, false, true, this);
        }
    }
    public void HeavyHapticCalled()
    {
        if (PlayerPrefs.GetInt("Vibrate") == 0)
        {
        MMVibrationManager.Haptic(HapticTypes.HeavyImpact, false, true, this);
        }
    }


    public void NotificationSucessHaptic()
    {
        if (PlayerPrefs.GetInt("Vibrate") == 0)
        {
        MMVibrationManager.Haptic(HapticTypes.Success, false, true, this);
        }

    }
}
