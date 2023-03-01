using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ShopPanel : MonoBehaviour
{
    public static ShopPanel Instance;
    public GameObject popupPanel;

    public TextMeshProUGUI coinText;

    public List<ShopItem> shopItems = new List<ShopItem>();

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    private void Start()
    {
        coinText.text = PlayerPrefs.GetInt("Coin",0).ToString();
        SetPanel();
    }

    public void OnClickClose()
    {
        popupPanel.SetActive(false);
    }

    public void SetPanel()
    {
        for (int i = 0; i < shopItems.Count; i++)
        {
            if (i==0)
            {
                shopItems[i].itemText.text = "Selected";
                PlayerPrefs.SetInt(shopItems[i].index + "_ShopItem", 1);
            }
            else 
            {
                if (PlayerPrefs.GetInt(shopItems[i].index+"_ShopItem") == 1)
                {
                    shopItems[i].itemText.text = "Select";
                }
                else
                {
                    shopItems[i].itemText.text = "100";
                }
            }
        }
    }

}
