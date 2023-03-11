using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelSelector : MonoBehaviour
{
    public int currentPage;

    public int maxPage;

    public int maxLevel;

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
            if ((6 * currentPage + i) < maxLevel)
            {
                if ((6 * currentPage + i) < unlockLevel)
                    itemList[i].RefreshItem(currentPage, true);
                else
                    itemList[i].RefreshItem(currentPage, false);
            }
            else
            {
                itemList[i].gameObject.SetActive(false);
            }
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
        else if (HomeManager.Instance.TeleportMode)
        {
            return PlayerPrefs.GetInt("TeleUnlockLevel", 1);
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
        int levelIndex = 6 * currentPage + index;
        AudioManager.instance.buttonAudio.Play();
        SetCurrentLevel(levelIndex + 1);
        SceneManager.LoadScene("Level");
    }

    private void SetCurrentLevel(int v)
    {
        if (HomeManager.Instance.LoveMode)
        {
            HomeManager.Instance.levelMode = "LoveMode";
             PlayerPrefs.SetInt("LoveCurrentLevel", v);
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            HomeManager.Instance.levelMode = "MonsterMode";
            PlayerPrefs.SetInt("MonsterCurrentLevel", v);
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            HomeManager.Instance.levelMode = "SpiderMode";
            PlayerPrefs.SetInt("SpiderCurrentLevel", v);
        }
        else if (HomeManager.Instance.LaserMode)
        {
            HomeManager.Instance.levelMode = "LaserMode";
            PlayerPrefs.SetInt("LaserCurrentLevel", v);
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            HomeManager.Instance.levelMode = "TeleportMode";
            PlayerPrefs.SetInt("TeleCurrentLevel", v);
        }
        else
        {
            HomeManager.Instance.levelMode = null;
            PlayerPrefs.SetInt("CurrentLevel", v);
        }
    }
}
