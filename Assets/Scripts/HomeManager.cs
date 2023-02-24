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

    public int LevelIdx;

    public void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
        //scoreTxt.text = PlayerPrefs.GetInt("Coin", 0).ToString();
        //LevelIdx = PlayerPrefs.GetInt("CurrentLevel");
        if (PlayerPrefs.GetInt("NoAds") == 1)
        {
            noAds.SetActive(false);
        }
        LoveMode = false;
        MonsterMode = false;
        SpiderMode = false;
        LaserMode = false;
    }


    // Update is called once per frame
    void Update()
    {
        
    }

    public void Play()
    {
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
        if (PlayerPrefs.GetInt("LoveMode", 0) == 0)
        {
            ModsPanel.Instance.popupPanel.SetActive(true);
            ModsPanel.Instance.LogoTxt.text = "LOVE MODE";
            ModsPanel.Instance.SetLogo(1);
        }
        else
        {
            LoveMode = true;
            MonsterMode = false;
            SpiderMode = false;
            LaserMode = false;
            TeleportMode = false;
            int unlockLevel = PlayerPrefs.GetInt("LoveUnlockLevel", 1);
            PlayerPrefs.SetInt("LoveCurrentLevel", unlockLevel);
            SceneManager.LoadScene("Level");
            SSEventManager.Instance.SSGameStarEventCall(unlockLevel);
        }
    }
    public void LoveModeIsEnable(bool isRewarded)
    {
        if (isRewarded)
        {
            PlayerPrefs.SetInt("LoveMode", 1);
        }
        else
        {
            PlayerPrefs.SetInt("LoveMode", 0);
        }
    }

    public void MonsterModePlay()
    {
        ModsPanel.Instance.popupPanel.SetActive(true);
        ModsPanel.Instance.LogoTxt.text = "MONSTER MODE";
        ModsPanel.Instance.SetLogo(2);

        LoveMode = false;
        MonsterMode = true;
        SpiderMode = false;
        LaserMode = false;
        TeleportMode = false;
        int unlockLevel = PlayerPrefs.GetInt("MonsterUnlockLevel", 1);
        PlayerPrefs.SetInt("MonsterCurrentLevel", unlockLevel);
        SceneManager.LoadScene("Level");
        SSEventManager.Instance.SSGameStarEventCall(unlockLevel);
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
        ModsPanel.Instance.popupPanel.SetActive(true);
        ModsPanel.Instance.LogoTxt.text = "LASER MODE";
        ModsPanel.Instance.SetLogo(3);

        LoveMode = false;
        MonsterMode = false;
        SpiderMode = false;
        LaserMode = true;
        TeleportMode = false;
        int unlockLevel = PlayerPrefs.GetInt("LaserUnlockLevel", 1);
        PlayerPrefs.SetInt("LaserCurrentLevel", unlockLevel);
        SceneManager.LoadScene("Level");
        SSEventManager.Instance.SSGameStarEventCall(unlockLevel);
    }

    public void TeleportModePlay()
    {
        ModsPanel.Instance.popupPanel.SetActive(true);
        ModsPanel.Instance.LogoTxt.text = "TELEPORT MODE";
        ModsPanel.Instance.SetLogo(4);

        LoveMode = false;
        MonsterMode = false;
        SpiderMode = false;
        LaserMode = false;
        TeleportMode = true;
        int unlockLevel = PlayerPrefs.GetInt("TeleUnlockLevel", 1);
        PlayerPrefs.GetInt("TeleCurrentLevel", unlockLevel);
        SceneManager.LoadScene("Level");
        SSEventManager.Instance.SSGameStarEventCall(unlockLevel);
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
