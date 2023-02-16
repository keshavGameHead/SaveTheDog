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

        if (isDone)
        {
            bgImage.sprite = doneSpr;
            lockObj.SetActive(false);
            unlockObj.SetActive(true);
            for (int i = 0; i < StarImgs.Count; i++)
            {
                StarImgs[i].sprite = starSPr;
            }
        }
        else
        {
            bgImage.sprite = unDoneSpr;
            lockObj.SetActive(true);
            unlockObj.SetActive(false);
        }

    }

   
}
