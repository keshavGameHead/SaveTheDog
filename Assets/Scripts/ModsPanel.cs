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

    public TextMeshProUGUI LogoTxt;

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
        SuperStarAd.Instance.ShowRewardVideo(HomeManager.Instance.LoveModeIsEnable);
    }

    public void SetLogo(int n)
    {
        switch(n)
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
