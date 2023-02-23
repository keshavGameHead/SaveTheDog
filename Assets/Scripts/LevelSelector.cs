using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelSelector : MonoBehaviour
{
    public int currentPage;

    public int maxPage;

    public List<LevelItem> itemList;

    // Start is called before the first frame update
    void Start()
    {
        currentPage = 0;
        RefreshItem();
    }

    private void OnEnable()
    {
        currentPage = 0;
        RefreshItem();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void RefreshItem()
    {
        
        int unlockLevel = GetUnlockLevelIndex();
        for (int i = 0; i < itemList.Count; i++)
        {
            if((8 * currentPage + i) < unlockLevel)
               itemList[i].RefreshItem(currentPage, true);
            else
                itemList[i].RefreshItem(currentPage, false);
        }
    }

    private int GetUnlockLevelIndex()
    {
        if (HomeManager.Instance.LoveMode)
        {
            return PlayerPrefs.GetInt("LoveUnlockLevel", 1);
        }
        else if(HomeManager.Instance.MonsterMode)
        {
            return PlayerPrefs.GetInt("MonsterUnlockLevel", 1);
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            return PlayerPrefs.GetInt("SpiderUnlockLevel", 1);
        }
        else if (HomeManager.Instance.LaserMode)
        {
            return PlayerPrefs.GetInt("LaserUnlockLevel", 1);
        }
        else
        {
            return PlayerPrefs.GetInt("UnlockLevel", 1);
        }
    }

    public void NextPage()
    {
        AudioManager.instance.buttonAudio.Play();
        if (currentPage < maxPage - 1)
          currentPage++;
        RefreshItem();
    }

    public void PreviousPage()
    {
        AudioManager.instance.buttonAudio.Play();
        if (currentPage > 0)
            currentPage--;
        RefreshItem();
                
    }

    public void GoToLevel(int index)
    {
        int levelIndex = 8 * currentPage + index;
        AudioManager.instance.buttonAudio.Play();
        PlayerPrefs.SetInt("CurrentLevel", levelIndex + 1);
        SetCurrentLevel(levelIndex + 1);
        SceneManager.LoadScene("Level");
    }

    private void SetCurrentLevel(int v)
    {
        if (HomeManager.Instance.LoveMode)
        {
             PlayerPrefs.SetInt("LoveUnlockLevel", v);
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            PlayerPrefs.SetInt("MonsterUnlockLevel", v);
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            PlayerPrefs.SetInt("SpiderUnlockLevel", v);
        }
        else if (HomeManager.Instance.LaserMode)
        {
            PlayerPrefs.SetInt("LaserUnlockLevel", v);
        }
        else
        {
            PlayerPrefs.SetInt("UnlockLevel", v);
        }
    }
}
