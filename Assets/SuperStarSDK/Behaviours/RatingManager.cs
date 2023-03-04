using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using SuperStarSdk;

public class RatingManager : MonoBehaviour
{

    //public string androidBundleID;
  //  public string iosAppId;
    public Sprite BlankStarSprite;
    public Sprite FilledStarSprite;
    public Image[] StarImages;
    public int startReview = -1;

    public int lastSelectedStar = 0;

    public GameObject TapToRate;
    public GameObject Thanks;

    private void OnEnable()
    {
        lastSelectedStar = startReview;
        for (int i = 0; i < StarImages.Length; i++)
        {
            StarImages[i].sprite = BlankStarSprite;
        }
        // SelectStar(lastSelectedStar);
    }
   
       
   
    public void SelectStar(int index) {

        Debug.Log("Win");

        lastSelectedStar = index;
        for (int i = 0; i < StarImages.Length; i++)
        {
            StarImages[i].sprite = BlankStarSprite;
        }

        for (int i = 0; i < index+1; i++)
        {
            StarImages[i].sprite = FilledStarSprite;
        }
       StartCoroutine(  OnRateButtonPressed());
        TapToRate.SetActive(false);
        Thanks.SetActive(true);
        
       // UIManager.Instance.OnCLickRatingButtonClose();

    }

    public IEnumerator OnRateButtonPressed() {

        if (lastSelectedStar>=3)
        {
            SuperStarSdkManager.Instance.OpenRateURLs();
            gameObject.SetActive(false);

        }
        else if (lastSelectedStar<0)
        {
            yield return new WaitForSeconds(1f);
            Debug.Log("please give rate");
            gameObject.SetActive(false);

        }
        else 
        {
            yield return new WaitForSeconds(1f);
            Debug.Log("rate is less than 3");
            Debug.Log("open thanks here");
            //ScreenManager.Instance.OffRaingPopUp();
            // ScreenManager.Instance.OnThankYouPopUp();
            gameObject.SetActive(false);
        }

    }

    // Start is called before the first frame update


}
