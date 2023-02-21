using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
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
        int currentLevelNum = (PlayerPrefs.GetInt("CurrentLevel") + 1);
        if (currentLevelNum == (page * 8 + index + 1))
        {
            Debug.LogError("Current Level : " + (currentLevelNum));
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
            bgImage.sprite = doneSpr;
            lockObj.SetActive(false);
            unlockObj.SetActive(true);
            int starCount = PlayerPrefs.GetInt((page * 8 + index + 1)+"Stars");
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
            bgImage.sprite = unDoneSpr;
            lockObj.SetActive(true);
            unlockObj.SetActive(false);
            for (int i = 0; i < StarImgs.Count; i++)
            {
                StarImgs[i].gameObject.SetActive(false);
            }
        }

    }

   
}
