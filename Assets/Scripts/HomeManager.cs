using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HomeManager : MonoBehaviour
{
    public GameObject levelPanel, settingPanel;
    public static HomeManager Instance;
    public TextMeshProUGUI scoreTxt;

    public int LevelIdx;

    public void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
        scoreTxt.text = PlayerPrefs.GetInt("Coin", 0).ToString();
        LevelIdx = PlayerPrefs.GetInt("CurrentLevel");
    }


    // Update is called once per frame
    void Update()
    {
        
    }

    public void Play()
    {
        int unlockLevel = PlayerPrefs.GetInt("UnlockLevel");
        PlayerPrefs.SetInt("CurrentLevel", unlockLevel);
        SceneManager.LoadScene("Level");
        SSEventManager.Instance.SSGameStarEventCall(unlockLevel);
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
