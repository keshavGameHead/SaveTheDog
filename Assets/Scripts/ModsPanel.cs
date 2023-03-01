using SuperStarSdk;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ModsPanel : MonoBehaviour
{
    public static ModsPanel Instance;
    public GameObject popupPanel;
    public GameObject MonsterLogo, LoveLogo, LaserLogo, TeleportLogo;
    public GameObject Insta;

    public TextMeshProUGUI LogoTxt, LevelText;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    public void NoBtn()
    {
        popupPanel.SetActive(false);
    }

    public void UnlockBtn()
    {
        if (HomeManager.Instance.LoveMode)
        {
            SuperStarAd.Instance.ShowRewardVideo(HomeManager.Instance.LoveModeIsEnable);
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            SuperStarAd.Instance.ShowRewardVideo(HomeManager.Instance.MonsterModeIsEnable);
        }
        else if (HomeManager.Instance.LaserMode)
        {
            SuperStarAd.Instance.ShowRewardVideo(HomeManager.Instance.LaserModeIsEnable);
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            SuperStarAd.Instance.ShowRewardVideo(HomeManager.Instance.TeleModeIsEnable);
        }
    }

    public void SetLogo(int n)
    {
        if (Insta.transform.childCount > 0)
        {
            for (int i = 0; i < Insta.transform.childCount; i++)
            {
                Destroy(Insta.transform.GetChild(i).gameObject);
            }
        }
        switch (n)
        {
            case 1:
                Instantiate(LoveLogo, Insta.transform);
                break;
            case 2:
                Instantiate(MonsterLogo, Insta.transform);
                break;
            case 3:
                Instantiate(LaserLogo, Insta.transform);
                break;
            case 4:
                Instantiate(TeleportLogo, Insta.transform);
                break;
        }
    }
}
