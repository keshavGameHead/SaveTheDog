using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShopPanel : MonoBehaviour
{
    public static ShopPanel Instance;
    public GameObject popupPanel;

    public Sprite SelectImage;
    public Sprite unSelectImage;

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
       // coinImage = PlayerPrefs.GetInt("Coin",0).ToString();
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
                shopItems[i].itemText.text = "";
                shopItems[i].ItemImage.sprite = SelectImage;
                PlayerPrefs.SetInt(shopItems[i].index + "_ShopItem", 1);
            }
            else 
            {
                if (PlayerPrefs.GetInt(shopItems[i].index+"_ShopItem") == 1)
                {
                    //shopItems[i].itemText.text = "Select";
                    shopItems[i].ItemImage.sprite = SelectImage;
                }
                else
                {
                    shopItems[i].itemText.text = "100";
                    shopItems[i].ItemImage.sprite = unSelectImage;
                }
            }
        }
    }

}
