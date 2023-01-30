using UnityEngine;
using GoogleMobileAds.Api;
using System;
using System.Collections;
using System.Collections.Generic;
using SuperStarSdk;

public class AdmobManager : MonoBehaviour
{
    public static AdmobManager Instance;
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }
    public BannerView bannerView;
    public InterstitialAd interstitial;
    public RewardedAd rewardedAd;
    // public string gameId;
    //[Header("Android")]
    //public string BannerIdAndroid;
    //public string InterstitialIdAndroid;
    //public string RewardVideoIdAndroid;
    //[Header("ios")]
    //public string BannerIdios;
    //public string InterstitialIdios;
    //public string RewardVideoIdios;
    bool isNetConnected = false;


    //[Header("test ids android")]
    //public string testBannerIdAndroid;
    //public string testInterstitialIdAndroid;
    //public string testRewardVideoIdAndroid;

    //[Header("test ids ios")]
    //public string testBannerIdios;
    //public string testInterstitialIdios;
    //public string testRewardVideoIdios;
    //public bool isTestMode;

    public List<string> BannerAdsIds= new List<string>();
    public List<string> IntrestitialAdsIds= new List<string>();
    public List<string> RewardAdsIds= new List<string>();
    public List<string> AppOpenAdsIds= new List<string>();


    public int BannerIdIndex = 0;
    public int IntrestitialIdIndex = 0;
    public int RewardIdIndex = 0;
    public int AppOpenIdIndex = 0;

    //[Header("coin reward")]
    //DateTime startTime;
    //TimeSpan currentTime;
    //TimeSpan hour = new TimeSpan(4, 0, 0);

    void Start()
    {
       

        MobileAds.Initialize(initStatus => { });
        InvokeRepeating("CheckNet", 1, 10);
        
        //   StartTime();
    }

    public void SetUp()
    {
        AppOpenAdsIds = SuperStarSdkManager.Instance.crossPromoAssetsRoot.AAdmobOpenID;
        BannerAdsIds = SuperStarSdkManager.Instance.crossPromoAssetsRoot.AAdmobBID;
        IntrestitialAdsIds = SuperStarSdkManager.Instance.crossPromoAssetsRoot.AAdmobInID;
        RewardAdsIds = SuperStarSdkManager.Instance.crossPromoAssetsRoot.AAdmobReID;
        

        AppOpenAdsIds.RemoveAll(item => item == "");
        BannerAdsIds.RemoveAll(item => item == "");
        IntrestitialAdsIds.RemoveAll(item => item == "");
        RewardAdsIds.RemoveAll(item => item == "");

        //RequestBanner();
        //UnHideBannerAd();
        RequestAppOpenAds();
        RequestInterstitial();
        RequestRewardAd();
        //if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_ads == 1)
        //{

        //   ShowAppOpenAdIfAvailable();

        //}
    }


    void CheckNet()
    {
        StartCoroutine(NetCheckerCoroutine());
        //if (Application.internetReachability == NetworkReachability.NotReachable)
        //{
        //    if (isNetConnected)
        //    {
        //        isNetConnected = false;
        //    }
        //}
        //else
        //{
        //    if (!isNetConnected)
        //    {
        //        isNetConnected = true;
        //        ReloadAds();
        //    }
        //}
    }
    IEnumerator NetCheckerCoroutine()
    {
        //Debug.LogError("net checker coroutine");
        WWW req = new WWW("https://www.google.com/");
        yield return req;
        if (req.error != null)
        {
            isNetConnected = false;
            //Debug.LogError("No Internet");
        }
        else if (req.isDone)
        {
            if (!isNetConnected)
            {
                isNetConnected = true;
                ReloadAds();
                //Debug.LogError("Internet connected");
            }
        }
    }
    void ReloadAds()
    {
        //if (PlayerPrefs.GetInt("RemoveAds", 0) == 0)
        //{
        //    InvokeRepeating("RequestBanner", 1, 35);
        //    Invoke("RequestInterstitial", 2.5f);
        //}
        // Advertisement.Initialize(gameId, isTestMode);

        // InvokeRepeating("RequestBanner", 1, 50);
        Invoke("RequestInterstitial",5f);
        Invoke("RequestRewardAd", 5);

    }

    public void RequestBanner()
    {

        if (BannerIdIndex >= BannerAdsIds.Count)
        {
            return;
        }
        //Debug.LogError("Banner load");
        string adUnitId = BannerAdsIds[BannerIdIndex];
 
        this.bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();

        // Load the banner with the request.
        this.bannerView.LoadAd(request);
    }

    public void DestrotyBannerAd()
    {
        if (bannerView != null)
        {
            bannerView.Destroy();
        }
    }

    public void HideBannerAd()
    {
        if (bannerView != null)
            bannerView.Hide();
    }

    public void UnHideBannerAd()
    {
        if (bannerView != null)
            bannerView.Show();
    }

    private AppOpenAd ad;

    private bool isShowingAd = false;

    private bool IsAdAvailable
    {
        get
        {
            return ad != null;
        }
    }
    public void RequestAppOpenAds()
    {
        if ( IsAdAvailable && !isShowingAd)
        {
            ShowAppOpenAdIfAvailable();
            return;
        }
        if (AppOpenIdIndex >= AppOpenAdsIds.Count)
        {
            return;
        }
        string adUnitId = AppOpenAdsIds[AppOpenIdIndex];
        AdRequest request = new AdRequest.Builder().Build();

        // Load an app open ad for portrait orientation
        AppOpenAd.LoadAd(adUnitId, ScreenOrientation.Portrait, request, ((appOpenAd, error) =>
        {
            if (error != null)
            {
                // Handle the error.
                AppOpenIdIndex++;
                Debug.LogFormat("Failed to load the ad. (reason: {0})", error.LoadAdError.GetMessage());
                return;
            }

            // App open ad is loaded.
            ad = appOpenAd;
            ShowAppOpenAdIfAvailable();
        }));
    }
    public void ShowAppOpenAdIfAvailable()
    {
        if (!IsAdAvailable || isShowingAd)
        {
            return;
        }

        ad.OnAdDidDismissFullScreenContent += HandleAdDidDismissFullScreenContent;
        ad.OnAdFailedToPresentFullScreenContent += HandleAdFailedToPresentFullScreenContent;
        ad.OnAdDidPresentFullScreenContent += HandleAdDidPresentFullScreenContent;
        ad.OnAdDidRecordImpression += HandleAdDidRecordImpression;
        ad.OnPaidEvent += HandlePaidEvent;

        ad.Show();
    }

    private void HandleAdDidDismissFullScreenContent(object sender, EventArgs args)
    {
        Debug.Log("Closed app open ad");
        // Set the ad to null to indicate that AppOpenAdManager no longer has another ad to show.
        ad = null;
        isShowingAd = false;
        AppOpenIdIndex++;
        //RequestAppOpenAds();
    }

    private void HandleAdFailedToPresentFullScreenContent(object sender, AdErrorEventArgs args)
    {
        Debug.LogFormat("Failed to present the ad (reason: {0})", args.AdError.GetMessage());
        // Set the ad to null to indicate that AppOpenAdManager no longer has another ad to show.
        ad = null;
        isShowingAd = false;
        AppOpenIdIndex++;
        RequestAppOpenAds();
    }

    private void HandleAdDidPresentFullScreenContent(object sender, EventArgs args)
    {
        Debug.Log("Displayed app open ad");
        isShowingAd = true;
    }

    private void HandleAdDidRecordImpression(object sender, EventArgs args)
    {
        Debug.Log("Recorded ad impression");
    }

    private void HandlePaidEvent(object sender, AdValueEventArgs args)
    {
        Debug.LogFormat("Received paid event. (currency: {0}, value: {1}",
                args.AdValue.CurrencyCode, args.AdValue.Value);
    }

    public void RequestInterstitial()
    {

        if (interstitial!=null &&  interstitial.IsLoaded())
        {
            return;
        }

        if (IntrestitialIdIndex>= IntrestitialAdsIds.Count)
        {
            return;
        }

        string adUnitId = IntrestitialAdsIds[IntrestitialIdIndex];

        // Initialize an InterstitialAd.
        this.interstitial = new InterstitialAd(adUnitId);

        // Called when an ad request has successfully loaded.
        this.interstitial.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        // Called when an ad is shown.
        this.interstitial.OnAdOpening += HandleOnAdOpened;
        // Called when the ad is closed.
        this.interstitial.OnAdClosed += HandleOnAdClosed;
        // Called when the ad click caused the user to leave the application.
        //this.interstitial.OnAdLeavingApplication += HandleOnAdLeavingApplication;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        this.interstitial.LoadAd(request);
    }
    #region handle events interstrial ads
    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLoaded event received");
    }

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        IntrestitialIdIndex++;
        Invoke("RequestInterstitial", 2);
        MonoBehaviour.print("HandleFailedToReceiveAd event received with message: "
                            + args.LoadAdError);
    }

    public void HandleOnAdOpened(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdOpened event received");
    }

    public void HandleOnAdClosed(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdClosed event received");
    }

    public void HandleOnAdLeavingApplication(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLeavingApplication event received");
    }
    #endregion

    public void ShowInterstrial()
    {

        if (interstitial != null && interstitial.IsLoaded())
        {
                 interstitial.Show();
                Invoke("RequestInterstitial", 10);
        }
        else
        {
            //if (Advertisement.IsReady("video"))
            //{
            //    Advertisement.Show("video");
            //}
            RequestInterstitial();
        }
    }

    public void RequestRewardAd()
    {

        if (rewardedAd!=null && rewardedAd.IsLoaded())
        {
            return;
        }

        //Debug.LogError("reward load");
        string adUnitId = RewardAdsIds[RewardIdIndex];
        
        this.rewardedAd = new RewardedAd(adUnitId);

        // Called when an ad request has successfully loaded.
        this.rewardedAd.OnAdLoaded += HandleRewardedAdLoaded;
        // Called when an ad request failed to load.
        this.rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad;
        // Called when an ad is shown.
        this.rewardedAd.OnAdOpening += HandleRewardedAdOpening;
        // Called when an ad request failed to show.
        this.rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow;
        // Called when the user should be rewarded for interacting with the ad.
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
        // Called when the ad is closed.
        this.rewardedAd.OnAdClosed += HandleRewardedAdClosed;

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);
    }

    #region events of reward video
    public void HandleRewardedAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardedAdLoaded event received");
    }

    public void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {

        RewardIdIndex++;
        MonoBehaviour.print(
            "HandleRewardedAdFailedToLoad event received with message: "
                             + args.LoadAdError);
    }

    public void HandleRewardedAdOpening(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardedAdOpening event received");
    }

    public void HandleRewardedAdFailedToShow(object sender, AdErrorEventArgs args)
    {
        MonoBehaviour.print(
            "HandleRewardedAdFailedToShow event received with message: "
                             + args.Message);
    }

    public void HandleRewardedAdClosed(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardedAdClosed event received");
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        //string type = args.Type;
        //double amount = args.Amount;
        //MonoBehaviour.print("HandleRewardedAdRewarded event received for " + amount.ToString() + " " + type);
        SuperStarAd.Instance.GiveRewardToUser();
        //switch (_videoFor)
        //{
        //    case VideoFor.PowerUps:
        //        //Debug.LogError("Give reward powerups here");
        //        //UiManager.Instance.WatchAdForPowerUps();
        //        return;
        //    case VideoFor.Money:
        //        //Debug.LogError("Give reward Money here");
        //        return;

        //    case VideoFor.Coin:
        //       // FindObjectOfType<DailyRewardScript>().RewardMarket150CoinSuccess();
        //        Debug.LogError("Give reward Coin here");
        //        return;
        //    case VideoFor.Diamond:

        //        //Debug.LogError("Give reward Diamond here");
        //        return;
        //    case VideoFor.DubbleCoin:
        //        //UiManager.Instance.isDubbleRewardClick = true;
        //        //  FindObjectOfType<DailyRewardPopupScript>().GetReward();
        //        //Debug.LogError("Give reward Coin here");
        //        return;

        //    default:
        //        return;
        //}
    }
    #endregion
    public static VideoFor _videoFor;
    public void ShowRewardVideo()
    {
       
        if (rewardedAd != null && rewardedAd.IsLoaded())
        {
            
                rewardedAd.Show();
                Invoke("RequestRewardAd", 5);
            
           
        }
        else
        {
            //  ShowRewardedAdUnity();
            Invoke("RequestRewardAd", 1);
        }

    }


    public void ShowRewardVideo(VideoFor v)
    {
        _videoFor = v;
        //Debug.Log("Show RewardAd");
        if (rewardedAd != null)
        {
            if (rewardedAd.IsLoaded())
            {
                rewardedAd.Show();
                Invoke("RequestRewardAd", 1);
            }
            //else
            //{
            //  //  ShowRewardedAdUnity();
            //    Invoke("RequestRewardAd", 1);
            //}
        }
        else
        {
            //  ShowRewardedAdUnity();
            Invoke("RequestRewardAd", 1);
        }

    }
    //public void ShowRewardedAdUnity()
    //{
    //    const string RewardedPlacementId = "rewardedVideo";

    //    //if (!Advertisement.IsReady(RewardedPlacementId))
    //    //{
    //    //    //Debug.Log(string.Format("Ads not ready for placement '{0}'", RewardedPlacementId));
    //    //    return;
    //    //}

    //    //var options = new ShowOptions { resultCallback = HandleShowResult };
    //    //Advertisement.Show(RewardedPlacementId, options);
    //}

    //private void HandleShowResult(ShowResult result)
    //{
    //    switch (result)
    //    {
    //        case ShowResult.Finished:
    //            //Debug.Log("The ad was successfully shown.");
    //            switch (_videoFor)
    //            {
    //                case VideoFor.Gems75:
    //                    UILogic.Instance.OnSuccessWatchVideoForGemsMain();
    //                    //Debug.LogError("Give reward 75 gems here");
    //                    return;
    //                case VideoFor.GameOverContinue:
    //                    UILogic.Instance.SuccessContinueGameOver();
    //                    //Debug.LogError("Give reward GameOverContinue here");
    //                    return;
    //                default:
    //                    return;
    //            }
    //            break;
    //        case ShowResult.Skipped:
    //            //Debug.Log("The ad was skipped before reaching the end.");
    //            break;
    //        case ShowResult.Failed:
    //            //Debug.LogError("The ad failed to be shown.");
    //            break;
    //    }
    //}

    //--------------coin Reward------------------------
    //void Update()
    //{
    //    currentTime = DateTime.UtcNow - startTime;
    //    Debug.Log("current time" + currentTime);

    //}
    //private void StartTime()
    //{
    //    startTime = DateTime.UtcNow;
    //    Debug.Log("Start time" + startTime);
    //}
    //private string GetTime(TimeSpan time)
    //{
    //    TimeSpan countdown = hour - time;
    //    return countdown.Hours.ToString() + ":" + countdown.Minutes.ToString()
    //        + ":" + countdown.Seconds.ToString();
    //}
}

public enum VideoFor
{
    PowerUps,
    Money,
    Coin,
    Diamond,
    DubbleCoin
}