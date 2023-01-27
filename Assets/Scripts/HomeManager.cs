using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HomeManager : MonoBehaviour
{
    public GameObject levelPanel, settingPanel;
    // Start is called before the first frame update
    void Start()
    {
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
