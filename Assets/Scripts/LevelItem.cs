using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;

public class LevelItem : MonoBehaviour
{
    public int index;

    public TextMeshProUGUI levelText;

    public Image bgImage;
    public List<Image> StarImgs = new List<Image>();

    public Sprite doneSpr, unDoneSpr, starSPr;

    public GameObject lockObj, unlockObj;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void RefreshItem(int page, bool isDone)
    {
        levelText.text = "LV " + (page * 8 + index + 1).ToString();
        int currentLevelNum = GetUnlockLevelIndex();
        if (currentLevelNum == (page * 8 + index + 1))
        {
            gameObject.GetComponent<Button>().interactable = true;
            bgImage.sprite = doneSpr;
            lockObj.SetActive(false);
            unlockObj.SetActive(false);
            for (int i = 0; i < StarImgs.Count; i++)
            {
                StarImgs[i].gameObject.SetActive(false);
            }
        }
        else if (isDone)
        {
            gameObject.GetComponent<Button>().interactable = true;
            bgImage.sprite = doneSpr;
            lockObj.SetActive(false);
            unlockObj.SetActive(true);
            int starCount = GetStarIndex(page);
            
            for (int i = 0; i < StarImgs.Count; i++)
            {
                if (i < starCount)
                {
                    StarImgs[i].sprite = starSPr;
                }
                else
                {
                    StarImgs[i].gameObject.SetActive(false);
                }
            }
        }
        else
        {
            gameObject.GetComponent<Button>().interactable = false;
            bgImage.sprite = unDoneSpr;
            lockObj.SetActive(true);
            unlockObj.SetActive(false);
            for (int i = 0; i < StarImgs.Count; i++)
            {
                StarImgs[i].gameObject.SetActive(false);
            }
        }

    }

    private int GetStarIndex(int page)
    {
        if (HomeManager.Instance.LoveMode)
        {
            return PlayerPrefs.GetInt((page * 8 + index + 1) + "LoveStars");
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            return PlayerPrefs.GetInt((page * 8 + index + 1) + "MonsterStars");
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            return PlayerPrefs.GetInt((page * 8 + index + 1) + "SpiderStars");
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            return PlayerPrefs.GetInt((page * 8 + index + 1) + "LaserStars");
        }
        else
        {
            return PlayerPrefs.GetInt((page * 8 + index + 1) + "Stars");
        }
    }
    public int GetUnlockLevelIndex()
    {
        if (HomeManager.Instance.LoveMode)
        {
            return PlayerPrefs.GetInt("LoveUnlockLevel", 1);
        }
        else if (HomeManager.Instance.MonsterMode)
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
}
