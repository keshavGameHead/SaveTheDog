using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using SuperStarSdk;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{

    public static UIManager Instance;
    public GameObject clock, fail, complete, winPanel, failPanel, gamePlayScreen, Bg, ratingPopUp, guide;

    private float timer;

    public float timerMax;
    public Sprite nonFillStar;
    public Sprite fillStar;
    public List<GameObject> Stars = new List<GameObject>();

    public TextMeshProUGUI clockText, levelText;

    private bool startClock;
    public bool isClick = false;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        startClock = false;
        timer = timerMax;
    }

    // Start is called before the first frame update
    void Start()
    {
        if (GameController.instance.currentState == GameController.STATE.PLAYING)
        {
            gamePlayScreen.SetActive(true);
        }
        levelText.text = "LEVEL " + (GameController.instance.levelIndex + 1).ToString();
    }

    // Update is called once per frame
    void Update()
    {
        if (startClock)
        {
            if (timer > 0.0f)
            {
                timer -= Time.deltaTime;
                clockText.text = Mathf.CeilToInt(timer).ToString();
            }

            else
            {
                startClock = false;
                clock.SetActive(false);
                ShowResult();
            }

            if (GameController.instance.currentState == GameController.STATE.GAMEOVER)
            {
                startClock = false;
                AudioManager.instance.failAudio.Play();
                clock.SetActive(false);
                StartCoroutine(ShowGameOverIE());
            }
        }
    }

    public void ActiveClock()
    {
        //clock.SetActive(true);
        startClock = true;
    }

    void ShowResult()
    {
        if (GameController.instance.currentState == GameController.STATE.GAMEOVER)
        {
            AudioManager.instance.failAudio.Play();
            StartCoroutine(ShowGameOverIE());

        }
        else
        {
            AudioManager.instance.winAudio.Play();
            GameController.instance.currentState = GameController.STATE.FINISH;
            StartCoroutine(ShowGameWinIE());

        }
    }

    public void ShowRatingPopup()
    {
        ratingPopUp.SetActive(true);
    }

    public void CloseRatingPopup()
    {
        ratingPopUp.SetActive(false);
    }



    IEnumerator ShowGameOverIE()
    {
        fail.SetActive(true);
        yield return new WaitForSeconds(1.0f);
        failPanel.SetActive(true);
        gamePlayScreen.SetActive(false);
        if (GameController.instance.levelIndex > 4)
        {
            //SuperStarAd.Instance.ShowInterstitialTimer();
            //SuperStarAd.Instance.ShowBannerAd();
        }

    }

    IEnumerator ShowGameWinIE()
    {
        int levelUnlock = PlayerPrefs.GetInt("UnlockLevel");
        levelUnlock++;
        PlayerPrefs.SetInt("UnlockLevel", levelUnlock);
        int totalCoin = PlayerPrefs.GetInt("Coin", 0);
        totalCoin += 10;
        PlayerPrefs.SetInt("Coin", totalCoin);
        complete.SetActive(true);
        gamePlayScreen.SetActive(false);
        yield return new WaitForSeconds(1.0f);
        winPanel.SetActive(true);
        gamePlayScreen.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        if (GameController.instance.levelIndex == 4)
        {
            Debug.Log(GameController.instance.levelIndex);
            ShowRatingPopup();
        }
        if (GameController.instance.levelIndex > 4)
        {
            //SuperStarAd.Instance.ShowInterstitialTimer();
            // SuperStarAd.Instance.ShowBannerAd();
        }
    }

    int starIndx;
    public IEnumerator OnClickRating()
    {
        yield return new WaitForSeconds(0.8f);
        if (starIndx > 2)
        {
            SuperStarSdkManager.Instance.Rate();
            ratingPopUp.SetActive(false);
        }
        else
        {
            //NextLevel();
            ratingPopUp.SetActive(false);
        }
    }

    public void StarButton(int indx)
    {
        starIndx = indx;
        for (int i = 0; i < Stars.Count; i++)
        {
            if (i <= indx)
            {
                Stars[i].GetComponent<Image>().sprite = fillStar;
            }
            else
            {
                Stars[i].GetComponent<Image>().sprite = nonFillStar;
            }
        }
        StartCoroutine(OnClickRating());
    }

    public void Replay()
    {
        PlayerPrefs.SetInt("CurrentLevel", GameController.instance.levelIndex);
        SceneManager.LoadScene("Level");
        if (GameController.instance.levelIndex > 4)
        {
            //SuperStarAd.Instance.ShowInterstitialTimer();
            //SuperStarAd.Instance.ShowBannerAd();
        }

    }

    public void NextLevel()
    {
        GameController.instance.levelIndex++;
        PlayerPrefs.SetInt("CurrentLevel", GameController.instance.levelIndex);

        if (GameController.instance.levelIndex > 4)
        {
            SuperStarAd.Instance.ShowInterstitialTimer((O) =>
            {
                Debug.Log("Next Level After Ad "+ GameController.instance.levelIndex);
                SceneManager.LoadScene("Level");
            });
        }
        else
        {
            SceneManager.LoadScene("Level");
        }

    }

    public void Home()
    {
        SceneManager.LoadScene("Home");
    }

    public void Hint()
    {
        
        guide.SetActive(true);
    }
}
