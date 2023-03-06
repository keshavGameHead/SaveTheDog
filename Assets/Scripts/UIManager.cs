using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using SuperStarSdk;
using UnityEngine.UI;
using DG.Tweening;
using System;
using Spine.Unity;

public class UIManager : MonoBehaviour
{

    public static UIManager Instance;
    public GameObject clock, fail, complete, winPanel, failPanel, gamePlayScreen, Bg, ratingPopUp, guide, levelPanel;
    public TextMeshProUGUI levelpanelText;
    public GameObject TeleportPanel;
    public TextMeshProUGUI TeleportText;
    private float timer;

    public float timerMax;
    public Sprite nonFillStar;
    public Sprite fillStar;
    public List<GameObject> Stars = new List<GameObject>();
    public GameObject sliderObj;
    public TextMeshProUGUI gameWinTotalScore,gameWinGameScore,gameWinRewardButtonTxt;
    bool isRewardStart = false;
    public TextMeshProUGUI clockText, levelText;
    public Animator coinAnimation;
    public GameObject tapToContinue;
    public Slider sliderImage;
    public float drawLimit;
    public GameObject starImage3,starImage2,starImage1;
    public bool isCollideWithGirl;
    public bool isCollideWithBee;

    public bool startClock;
    public bool isClick = false;
    int rewardCoin;
    public GameObject cryingAnim;
    public GameObject monObj = null;

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
        cryingAnim.SetActive(false);
        levelPanel.SetActive(false);
        isRewardStart = false;
        if (GameController.instance.currentState == GameController.STATE.PLAYING)
        {
            gamePlayScreen.SetActive(true);
        }
        sliderImage.value = 1;
        levelText.text = "LEVEL " + (GameController.instance.GetCurrentLevelIndex()).ToString();
        if (GameController.instance.GetCurrentLevelIndex() == 1)
        {
            if (HomeManager.Instance.levelMode == null)
            {
                TeleportPanel.SetActive(false);
            }
            else
            {
                TeleportPanel.SetActive(true);
                if (HomeManager.Instance.LoveMode)
                {
                    TeleportText.text = "Lets Meet The Dogs!";
                }
                else if (HomeManager.Instance.MonsterMode)
                {
                    TeleportText.text = "Kill The Evil Dog!";
                }
                else if (HomeManager.Instance.LaserMode)
                {
                    TeleportText.text = "Protect The Dog From Laser!";
                }
                else if (HomeManager.Instance.TeleportMode)
                {
                    TeleportText.text = "Bees Will Teleport From Portal!";
                }
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (isRewardStart)
        {
            gameWinRewardButtonTxt.text = "X" + SliderScript.Instance.sliderInt;
        }
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
            if (timer < 6)
            {
                clock.GetComponent<Animator>().SetBool("Play", true);
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
        clock.SetActive(true);
        startClock = true;
       
    }

    Coroutine gameWin;
    void ShowResult()
    {
        if (Level.Instance.LoveMode)
        {
            if (GameController.instance.currentState == GameController.STATE.GAMEOVER || !isCollideWithGirl)
            {
                StartGameOverCoroutine();
            }
            else
            {
                StartGameWinCoroutine();
            }
        }
        else if (Level.Instance.monsterMode)
        {
            for (int i = 0; i < Level.Instance.monsters.Count; i++)
            {
                if (!Level.Instance.monsters[i].ishurt)
                {
                    monObj = Level.Instance.monsters[i].gameObject;
                }
            }
            if (monObj!= null)
            {
                monObj.GetComponent<CircleCollider2D>().isTrigger = true;
                monObj.transform.DOMove(Level.Instance.dogList[0].position, 3f).OnComplete(StartGameOverCoroutine);
            }
            else
            {
                StartGameWinCoroutine();
            }
        }
        else if (Level.Instance.spiderMode)
        {
            if (GameController.instance.currentState == GameController.STATE.GAMEOVER)
            {
                StartGameOverCoroutine();
            }
            else
            {
                StartGameWinCoroutine();
            }
        }
        else if (Level.Instance.laserMode)
        {
            if (GameController.instance.currentState == GameController.STATE.GAMEOVER)
            {
                StartGameOverCoroutine();
            }
            else
            {
                StartGameWinCoroutine();
            }
        }
        else if (Level.Instance.TeleportMode)
        {
            if (GameController.instance.currentState == GameController.STATE.GAMEOVER)
            {
                StartGameOverCoroutine();
            }
            else
            {
                StartGameWinCoroutine();
            }
        }
        else if(GameController.instance.currentState == GameController.STATE.GAMEOVER)
        {
            StartGameOverCoroutine();
        }
        else
        {
            StartGameWinCoroutine();
        }
    }

    public void StartGameOverCoroutine()
    {
        AudioManager.instance.failAudio.Play();
        StartCoroutine(ShowGameOverIE());
    }

    public void StartGameWinCoroutine()
    {
        if (HomeManager.Instance.levelMode == null)
        {
            for (int i = 0; i < Level.Instance.dogList.Count; i++)
            {
                if (Level.Instance.dogList[i].gameObject.tag == "Dog")
                {
                    Level.Instance.dogList[i].gameObject.GetComponent<SkeletonAnimation>().AnimationName = "5-happy";
                }
            }
        }
        AudioManager.instance.winAudio.Play();
        GameController.instance.currentState = GameController.STATE.FINISH;
        gameWin = StartCoroutine(ShowGameWinIE());
    }

    public void ShowRatingPopup()
    {
        //ratingPopUp.SetActive(true);
    }

    public void CloseRatingPopup()
    {
        SuperStarSdkManager.Instance.Rate();
        //ratingPopUp.SetActive(false);
    }

    public void GoBackToHome()
    {
        SceneManager.LoadScene("Home");
    }



    IEnumerator ShowGameOverIE()
    {
        fail.SetActive(true);
        yield return new WaitForSeconds(1.0f);
        failPanel.SetActive(true);
        gamePlayScreen.SetActive(false);
        cryingAnim.SetActive(true);
        yield return new WaitForSeconds(1f);
        cryingAnim.GetComponent<Animator>().SetBool("Play", true);
        if (PlayerPrefs.GetInt("NoAds") == 0)
        {
            if (GameController.instance.levelIndex > 4)
            {
                SuperStarAd.Instance.ShowInterstitialTimer((o) => { });
                //SuperStarAd.Instance.ShowBannerAd();
            }
        }
        SSEventManager.Instance.SSGameOverEventCall(HomeManager.Instance.levelMode + (PlayerPrefs.GetInt("UnlockLevel")));
    }
    public string levelMode;
    IEnumerator ShowGameWinIE()
    {
       
        int level = GameController.instance.levelIndex;
        SaveLevelByMode();
        int score = PlayerPrefs.GetInt("Coin", 0);
        gameWinTotalScore.text = score.ToString();
        PlayerPrefs.SetInt("Coin", score);
        tapToContinue.SetActive(false);
        complete.SetActive(true);
        gamePlayScreen.SetActive(false);
        yield return new WaitForSeconds(1.0f);
        winPanel.SetActive(true);
        gamePlayScreen.SetActive(false);
        yield return new WaitForSeconds(0.5f);
        isRewardStart = true;
        yield return new WaitForSeconds(2f);
        tapToContinue.SetActive(true);
        if (HomeManager.Instance.levelMode == null)
        {
            if (GameController.instance.levelIndex == 3 || GameController.instance.levelIndex == 5)
            {
                SuperStarSdkManager.Instance.Rate();
            }
        }
        if (PlayerPrefs.GetInt("NoAds") == 0)
        {
            if (GameController.instance.levelIndex > 4)
            {
                SuperStarAd.Instance.ShowInterstitialTimer((o) =>{});
                // SuperStarAd.Instance.ShowBannerAd();
            }
        }
        SSEventManager.Instance.SSGameWinEventCall(HomeManager.Instance.levelMode + (level - 1));
    }


    private void SaveLevelByMode()
    {
        if (HomeManager.Instance.LoveMode)
        {
            int level = GameController.instance.levelIndex;
            int maxLevel = PlayerPrefs.GetInt("LoveUnlockLevel", 1);
            if (level >= maxLevel)
            {
                PlayerPrefs.SetInt("LoveUnlockLevel", level + 1);
            }
            if (drawLimit <= 0.25f)
            {
                rewardCoin = 10;
                gameWinGameScore.text = "x10";
                PlayerPrefs.SetInt((level) + "LoveStars", 1);
            }
            else if (drawLimit <= 0.5f)
            {
                rewardCoin = 20;
                gameWinGameScore.text = "x20";
                PlayerPrefs.SetInt((level) + "LoveStars", 2);
            }
            else if (drawLimit >= 0.5f)
            {
                rewardCoin = 30;
                gameWinGameScore.text = "x30";
                PlayerPrefs.SetInt((level) + "LoveStars", 3);
            }
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            int level = GameController.instance.levelIndex;
            int maxLevel = PlayerPrefs.GetInt("MonsterUnlockLevel", 1);
            if (level >= maxLevel)
            {
                PlayerPrefs.SetInt("MonsterUnlockLevel", level + 1);
            }
            if (drawLimit <= 0.25f)
            {
                rewardCoin = 10;
                gameWinGameScore.text = "x10";
                PlayerPrefs.SetInt((level) + "MonsterStars", 1);
            }
            else if (drawLimit <= 0.5f)
            {
                rewardCoin = 20;
                gameWinGameScore.text = "x20";
                PlayerPrefs.SetInt((level) + "MonsterStars", 2);
            }
            else if (drawLimit >= 0.5f)
            {
                rewardCoin = 30;
                gameWinGameScore.text = "x30";
                PlayerPrefs.SetInt((level) + "MonsterStars", 3);
            }
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            int level = GameController.instance.levelIndex;
            int maxLevel = PlayerPrefs.GetInt("SpiderUnlockLevel", 1);
            if (level >= maxLevel)
            {
                PlayerPrefs.SetInt("SpiderUnlockLevel", level + 1);
            }
            if (drawLimit <= 0.25f)
            {
                rewardCoin = 10;
                gameWinGameScore.text = "x10";
                PlayerPrefs.SetInt((level) + "SpiderStars", 1);
            }
            else if (drawLimit <= 0.5f)
            {
                rewardCoin = 20;
                gameWinGameScore.text = "x20";
                PlayerPrefs.SetInt((level) + "SpiderStars", 2);
            }
            else if (drawLimit >= 0.5f)
            {
                rewardCoin = 30;
                gameWinGameScore.text = "x30";
                PlayerPrefs.SetInt((level) + "SpiderStars", 3);
            }
        }
        else if (HomeManager.Instance.LaserMode)
        {
            int level = GameController.instance.levelIndex;
            int maxLevel = PlayerPrefs.GetInt("LaserUnlockLevel", 1);
            if (level >= maxLevel)
            {
                PlayerPrefs.SetInt("LaserUnlockLevel", level + 1);
            }
            if (drawLimit <= 0.25f)
            {
                rewardCoin = 10;
                gameWinGameScore.text = "x10";
                PlayerPrefs.SetInt((level) + "LaserStars", 1);
            }
            else if (drawLimit <= 0.5f)
            {
                rewardCoin = 20;
                gameWinGameScore.text = "x20";
                PlayerPrefs.SetInt((level) + "LaserStars", 2);
            }
            else if (drawLimit >= 0.5f)
            {
                rewardCoin = 30;
                gameWinGameScore.text = "x30";
                PlayerPrefs.SetInt((level) + "LaserStars", 3);
            }
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            int level = GameController.instance.levelIndex;
            int maxLevel = PlayerPrefs.GetInt("TeleUnlockLevel", 1);
            if (level >= maxLevel)
            {
                PlayerPrefs.SetInt("TeleUnlockLevel", level + 1);
            }
            if (drawLimit <= 0.25f)
            {
                rewardCoin = 10;
                gameWinGameScore.text = "x10";
                PlayerPrefs.SetInt((level) + "TeleStars", 1);
            }
            else if (drawLimit <= 0.5f)
            {
                rewardCoin = 20;
                gameWinGameScore.text = "x20";
                PlayerPrefs.SetInt((level) + "TeleStars", 2);
            }
            else if (drawLimit >= 0.5f)
            {
                rewardCoin = 30;
                gameWinGameScore.text = "x30";
                PlayerPrefs.SetInt((level) + "TeleStars", 3);
            }
        }
        else
        {
            int level = GameController.instance.levelIndex;
            int maxLevel = PlayerPrefs.GetInt("UnlockLevel", 1);
            if (level >= maxLevel)
            {
                PlayerPrefs.SetInt("UnlockLevel", level + 1);
            }
            if (drawLimit <= 0.25f)
            {
                rewardCoin = 10;
                gameWinGameScore.text = "x10";
                PlayerPrefs.SetInt((level) + "Stars", 1);
            }
            else if (drawLimit <= 0.5f)
            {
                rewardCoin = 20;
                gameWinGameScore.text = "x20";
                PlayerPrefs.SetInt((level) + "Stars", 2);
            }
            else if (drawLimit >= 0.5f)
            {
                rewardCoin = 30;
                gameWinGameScore.text = "x30";
                PlayerPrefs.SetInt((level) + "Stars", 3);
            }
            if (maxLevel >= 20)
            {
                PlayerPrefs.SetInt("LoveMode", 1);
            }
            if (maxLevel >= 40)
            {
                PlayerPrefs.SetInt("MonsterMode", 1);
            }
            if (maxLevel >= 60)
            {
                PlayerPrefs.SetInt("LaserMode", 1);
            }
            if (maxLevel >= 80)
            {
                PlayerPrefs.SetInt("TeleportMode", 1);
            }
        }

    }

    int starIndx;
    public IEnumerator OnClickRating()
    {
        yield return new WaitForSeconds(0.8f);
        if (starIndx > 2)
        {
            //SuperStarSdkManager.Instance.Rate();
            //ratingPopUp.SetActive(false);
        }
        else
        {
            //NextLevel();
            //ratingPopUp.SetActive(false);
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
        if (GameController.instance.levelIndex > 4)
        {
            SuperStarAd.Instance.ShowInterstitialTimer(ReplayLEvel);
        }
        else 
        {
            PlayerPrefs.SetInt("CurrentLevel", GameController.instance.levelIndex);
            SceneManager.LoadScene("Level");
        }
    }


    public void ReplayLEvel(bool isdone) {

        PlayerPrefs.SetInt("CurrentLevel", GameController.instance.levelIndex);
        SceneManager.LoadScene("Level");
    }

    public void NextLevel()
    {
        SuperStarAd.Instance.ShowRewardVideo(StartNextCoroutine);
    }

    public void StartNextCoroutine(bool isRewarded)
    {
        if (isRewarded)
        {
            StartCoroutine(StopSlider());
        }
        else
        {
            TapToContinue();
        }
    }
    public void TapToContinue()
    {
        StartCoroutine(ContinueLoadLevel());
    }
    IEnumerator StopSlider()
    {
        StopCoroutine(gameWin);
        sliderObj.GetComponent<Animator>().enabled = false;
        int gameScore;
        if (drawLimit <= 0.25f)
        {
            gameScore = 10 * SliderScript.Instance.sliderInt;
        }
        else if (drawLimit <= 0.5f)
        {
            gameScore = 20 * SliderScript.Instance.sliderInt;
        }
        else 
        {
            gameScore = 30 * SliderScript.Instance.sliderInt;
        }

        gameWinGameScore.text = gameScore.ToString();
        yield return new WaitForSeconds(1f);
        coinAnimation.SetBool("Play", true);
        yield return new WaitForSeconds(1.5f);
        int totalScore = gameScore + PlayerPrefs.GetInt("Coin", 0);
        gameWinTotalScore.text = totalScore.ToString();
        PlayerPrefs.SetInt("Coin", totalScore);
        yield return new WaitForSeconds(1f);
        LoadNewLevel();
    }

    IEnumerator ContinueLoadLevel()
    {
        sliderObj.gameObject.SetActive(false);
        int gameScore = rewardCoin;
        gameWinGameScore.text = gameScore.ToString();
        yield return new WaitForSeconds(1f);
        coinAnimation.SetBool("Play", true);
        yield return new WaitForSeconds(1.5f);
        int totalScore = gameScore + PlayerPrefs.GetInt("Coin", 0);
        gameWinTotalScore.text = totalScore.ToString();
        PlayerPrefs.SetInt("Coin", totalScore);
        yield return new WaitForSeconds(1f);
        LoadNewLevel();
    }

    public void LoadNewLevel()
    {
        int num = GameController.instance.levelIndex;
        SetCurrentLevelIndexByMode(num + 1);
        if (num >= 5)
        {
            SuperStarAd.Instance.ShowInterstitialTimer((O) =>
            {
                SceneManager.LoadScene("Level");
            });
        }
        else
        {
            SceneManager.LoadScene("Level");
        }
    }

    private void SetCurrentLevelIndexByMode(int num)
    {
        if (HomeManager.Instance.LoveMode)
        {
            PlayerPrefs.SetInt("LoveCurrentLevel", num);
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            PlayerPrefs.SetInt("MonsterCurrentLevel", num);
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            PlayerPrefs.SetInt("SpiderCurrentLevel", num);
        }
        else if (HomeManager.Instance.LaserMode)
        {
            PlayerPrefs.SetInt("LaserCurrentLevel", num);
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            PlayerPrefs.SetInt("TeleCurrentLevel", num);
        }
        else
        {
            PlayerPrefs.SetInt("CurrentLevel", num);
        }
    }

    public void Home()
    {
        if (PlayerPrefs.GetInt("NoAds") == 0)
        {
            SuperStarAd.Instance.ShowInterstitialTimer((O) =>
            {
                LoadHomePanel();
            });
        }
        else
        {
            LoadHomePanel();
        }
    }

    private void LoadHomePanel()
    {
        if (HomeManager.Instance.LoveMode)
        {
            levelPanel.SetActive(true);
            levelpanelText.text = "LOVE MODE";
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            levelPanel.SetActive(true);
            levelpanelText.text = "MONSTER MODE";
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            levelPanel.SetActive(true);
            levelpanelText.text = "SPIDER MODE";
        }
        else if (HomeManager.Instance.LaserMode)
        {
            levelPanel.SetActive(true);
            levelpanelText.text = "LASER MODE";
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            levelPanel.SetActive(true);
            levelpanelText.text = "TELEPORT MODE";
        }
        else
        {
            SceneManager.LoadScene("Home");
        }
    }

    public void Hint()
    {
        isAdplaying = true;
        SuperStarAd.Instance.ShowRewardVideo(ExampleShowRewardAssign);
      //  guide.SetActive(true);
    }

    public Material Linemat;
    public Gradient Linecolor;
    public bool isAdplaying = false;
    public void ExampleShowRewardAssign(bool isrewarded)
    {
        if (isrewarded)
        {
            //Give reward here
            Debug.Log("Reward Given");
            guide.GetComponent<LineRenderer>().material = Linemat;
            guide.GetComponent<LineRenderer>().colorGradient = Linecolor;
            guide.SetActive(true);
            Invoke("InvokeIsPlaying",1f);
        }
        else
        {
            Debug.Log("Reward Eroor Given");
            Invoke("InvokeIsPlaying", 0f);
        }
       
    }


    public void InvokeIsPlaying() {

        isAdplaying = false;
    }

    public void TelePortPanelCloseBtn()
    {
        TeleportPanel.SetActive(false);
    }
}
