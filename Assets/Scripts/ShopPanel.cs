using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ShopPanel : MonoBehaviour
{
    public static ShopPanel Instance;
    public GameObject popupPanel;

    public Sprite SelectImage;
    public Sprite unSelectImage;
    public TextMeshProUGUI coinTxt;

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
        coinTxt.text = PlayerPrefs.GetInt("Coin",0).ToString();
        PlayerPrefs.SetInt(1 + "_ShopItem", 1);
        SetPanel();
    }

    public void OnClickClose()
    {
        AudioManager.instance.buttonAudio.Play();
        popupPanel.SetActive(false);
    }

    public void SetPanel()
    {
        for (int i = 0; i < shopItems.Count; i++)
        {
            if (i == PlayerPrefs.GetInt("PlayerSkin",0))
            {
                shopItems[i].itemText.text = "";
                shopItems[i].ItemImage.sprite = SelectImage;
            }
            else
            {
                if (PlayerPrefs.GetInt(shopItems[i].index+"_ShopItem") == 1)
                {
                    shopItems[i].itemText.text = "Select";
                    shopItems[i].ItemImage.sprite = unSelectImage;
                }
                else
                {
                    shopItems[i].itemText.text = shopItems[i].prise.ToString();
                    shopItems[i].ItemImage.sprite = unSelectImage;
                }
            }
        }
    }

    public void OnClickCloseWin()
    {
        popupPanel.SetActive(false);
    }

}
