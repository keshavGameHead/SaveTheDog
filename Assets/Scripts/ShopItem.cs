using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShopItem : MonoBehaviour
{
    public int index;
    public int prise;
    public TextMeshProUGUI itemText;
    public Image ItemImage;

    public void OnClickBtn()
    {
        AudioManager.instance.buttonAudio.Play();
        if (itemText.text != "Select" || itemText.text == "Selected")
        {
            int coin = PlayerPrefs.GetInt("Coin", 0);
            coin = coin - (int.Parse(itemText.text));
            if (coin < 0)
            {
                Debug.LogError("You Don't Have Enough Coin");
                return;
            }
            PlayerPrefs.SetInt("Coin", coin);
            ShopPanel.Instance.coinTxt.text = coin.ToString();
            itemText.text = "Select";
            PlayerPrefs.SetInt(index + "_ShopItem", 1);
        }
        else
        {
            for (int i = 0; i < ShopPanel.Instance.shopItems.Count; i++)
            {
                if (i == (index - 1))
                {
                    itemText.text = "";
                    ShopPanel.Instance.shopItems[i].ItemImage.sprite = ShopPanel.Instance.SelectImage;
                    PlayerPrefs.SetInt("PlayerSkin", index - 1);
                }
                else
                {
                    if (PlayerPrefs.GetInt(ShopPanel.Instance.shopItems[i].index+"_ShopItem") == 1)
                    {
                        ShopPanel.Instance.shopItems[i].itemText.text = "Select";
                        ShopPanel.Instance.shopItems[i].ItemImage.sprite = ShopPanel.Instance.unSelectImage;
                    }
                    else
                    {
                        ShopPanel.Instance.shopItems[i].itemText.text = ShopPanel.Instance.shopItems[i].prise.ToString();
                        ShopPanel.Instance.shopItems[i].ItemImage.sprite = ShopPanel.Instance.unSelectImage;
                    }
                }
            }
        }
    }
}
