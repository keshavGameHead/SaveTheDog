using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using SuperStarSdk;
public class HomeManager : MonoBehaviour
{
    public GameObject levelPanel, settingPanel, noAds;
    public static HomeManager Instance;
    public TextMeshProUGUI scoreTxt;
    public bool LoveMode, MonsterMode, SpiderMode, LaserMode, TeleportMode;
    public string levelMode;

    public int LevelIdx;

    public void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
        
        if (PlayerPrefs.GetInt("NoAds") == 1)
        {
            noAds.SetActive(false);
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }

    public void Play()
    {
        levelMode = null;
        LoveMode = false;
        MonsterMode = false;
        SpiderMode = false;
        LaserMode = false;
        TeleportMode = false;
        int unlockLevel = PlayerPrefs.GetInt("UnlockLevel", 1);
        PlayerPrefs.SetInt("CurrentLevel", unlockLevel);
        SceneManager.LoadScene("Level");
        SSEventManager.Instance.SSGameStarEventCall(unlockLevel);
    }

    public void LoveModePlay()
    {
        levelMode = "LoveMode";
        LoveMode = true;
        MonsterMode = false;
        SpiderMode = false;
        LaserMode = false;
        TeleportMode = false;
        if (PlayerPrefs.GetInt("LoveMode", 0) == 0)
        {
            ModsPanel.Instance.popupPanel.SetActive(true);
            ModsPanel.Instance.LogoTxt.text = "LOVE MODE";
            ModsPanel.Instance.SetLogo(1);
        }
        else
        {
            int unlockLevel = PlayerPrefs.GetInt("LoveUnlockLevel", 1);
            PlayerPrefs.SetInt("LoveCurrentLevel", unlockLevel);
            SceneManager.LoadScene("Level");
            SSEventManager.Instance.SSGameStarEventCall("LoveMode"+unlockLevel);
        }
    }
    public void LoveModeIsEnable(bool isRewarded)
    {
        if (isRewarded)
        {
            PlayerPrefs.SetInt("LoveMode", 1);
            ModsPanel.Instance.popupPanel.SetActive(false);
            LoveModePlay();
        }
        else
        {
            PlayerPrefs.SetInt("LoveMode", 0);
            ModsPanel.Instance.popupPanel.SetActive(false);
            SceneManager.LoadScene("Home");
        }
    }

    public void MonsterModePlay()
    {
        levelMode = "MonsterMode";
        LoveMode = false;
        MonsterMode = true;
        SpiderMode = false;
        LaserMode = false;
        TeleportMode = false;
        if (PlayerPrefs.GetInt("MonsterMode", 0) == 0)
        {
            ModsPanel.Instance.popupPanel.SetActive(true);
            ModsPanel.Instance.LogoTxt.text = "MONSTER MODE";
            ModsPanel.Instance.SetLogo(2);
        }
        else
        {
            int unlockLevel = PlayerPrefs.GetInt("MonsterUnlockLevel", 1);
            PlayerPrefs.SetInt("MonsterCurrentLevel", unlockLevel);
            SceneManager.LoadScene("Level");
            SSEventManager.Instance.SSGameStarEventCall("MonsterMode" + unlockLevel);
        }
    }
    public void MonsterModeIsEnable(bool isRewarded)
    {
        if (isRewarded)
        {
            PlayerPrefs.SetInt("MonsterMode", 1);
            ModsPanel.Instance.popupPanel.SetActive(false);
            MonsterModePlay();
        }
        else
        {
            PlayerPrefs.SetInt("MonsterMode", 0);
            ModsPanel.Instance.popupPanel.SetActive(false);
            SceneManager.LoadScene("Home");
        }
    }

    public void SpiderModePlay()
    {

        LoveMode = false;
        MonsterMode = false;
        SpiderMode = true;
        LaserMode = false;
        TeleportMode = false;
        int unlockLevel = PlayerPrefs.GetInt("SpiderUnlockLevel", 1);
        PlayerPrefs.SetInt("SpiderCurrentLevel", unlockLevel);
        SceneManager.LoadScene("Level");
        SSEventManager.Instance.SSGameStarEventCall(unlockLevel);
    }

    public void LaserModePlay()
    {
        levelMode = "LaserMode";
        LoveMode = false;
        MonsterMode = false;
        SpiderMode = false;
        LaserMode = true;
        TeleportMode = false;
        if (PlayerPrefs.GetInt("LaserMode", 0) == 0)
        {
            ModsPanel.Instance.popupPanel.SetActive(true);
            ModsPanel.Instance.LogoTxt.text = "LASER MODE";
            ModsPanel.Instance.SetLogo(3);
        }
        else
        {
            int unlockLevel = PlayerPrefs.GetInt("LaserUnlockLevel", 1);
            PlayerPrefs.SetInt("LaserCurrentLevel", unlockLevel);
            SceneManager.LoadScene("Level");
            SSEventManager.Instance.SSGameStarEventCall("LaserMode" + unlockLevel);
        }
    }

    public void LaserModeIsEnable(bool isRewarded)
    {
        if (isRewarded)
        {
            PlayerPrefs.SetInt("LaserMode", 1);
            ModsPanel.Instance.popupPanel.SetActive(false);
            LaserModePlay();
        }
        else
        {
            PlayerPrefs.SetInt("LaserMode", 0);
            ModsPanel.Instance.popupPanel.SetActive(false);
            SceneManager.LoadScene("Home");
        }
    }
    public void TeleportModePlay()
    {
        levelMode = "TeleportMode";
        LoveMode = false;
        MonsterMode = false;
        SpiderMode = false;
        LaserMode = false;
        TeleportMode = true;
        if (PlayerPrefs.GetInt("TeleportMode", 0) == 0)
        {
            ModsPanel.Instance.popupPanel.SetActive(true);
            ModsPanel.Instance.LogoTxt.text = "TELEPORT MODE";
            ModsPanel.Instance.SetLogo(4);
        }
        else
        {
            int unlockLevel = PlayerPrefs.GetInt("TeleUnlockLevel", 1);
            PlayerPrefs.GetInt("TeleCurrentLevel", unlockLevel);
            SceneManager.LoadScene("Level");
            SSEventManager.Instance.SSGameStarEventCall("TeleportMode" + unlockLevel);
        }
    }
    public void TeleModeIsEnable(bool isRewarded)
    {
        if (isRewarded)
        {
            PlayerPrefs.SetInt("TeleportMode", 1);
            ModsPanel.Instance.popupPanel.SetActive(false);
            TeleportModePlay();
        }
        else
        {
            PlayerPrefs.SetInt("TeleportMode", 0);
            ModsPanel.Instance.popupPanel.SetActive(false);
            SceneManager.LoadScene("Home");
        }
    }

    public void OnClickNoAds()
    {
        InaapManager.Instance.PurchaseNoAdsProuduct();
    }
    public void ShowMoreApps() 
    {

#if UNITY_ANDROID
        Application.OpenURL(SuperStarSdkManager.Instance.crossPromoAssetsRoot.moreappurl);
#elif UNITY_IOS
        Application.OpenURL(SuperStarSdkManager.Instance.crossPromoAssetsRoot.moreappurlios);

#endif
    }

    public void ShowLevelSelector()
    {
        AudioManager.instance.buttonAudio.Play();
        levelPanel.SetActive(true);
    }

    public void ShowSetting()
    {
        AudioManager.instance.buttonAudio.Play();
        settingPanel.SetActive(true);
    }

    public void CloseSetting()
    {
        AudioManager.instance.buttonAudio.Play();
        settingPanel.SetActive(false);
    }

    public void CloseLevelSelector()
    {
        AudioManager.instance.buttonAudio.Play();
        levelPanel.SetActive(false);
    }
}
