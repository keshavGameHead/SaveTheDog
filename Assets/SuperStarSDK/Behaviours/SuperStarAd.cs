using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SuperStarSdk
{
    public class SuperStarAd : MonoBehaviour
    {
        public static SuperStarAd Instance;

        public delegate void AfterInterstitialFunction();



        private static float lastInterstitial;

        private int triggeredAdRetryCounter;

        private static bool triggeredAdReady;

        public IronSourceBannerPosition baanerPosition;
        public Action MethodAction;
        public GameObject bannerImage;

        public int ReloadTime=40;

        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
            }

        }


        private void Start()
        {

         
#if UNITY_ANDROID
            string appKey = SuperStarSdkManager.Instance.crossPromoAssetsRoot.AndroidISAppKey;
#elif UNITY_IPHONE
        string appKey = SuperStarSdkManager.Instance.crossPromoAssetsRoot.AndroidAppKey.iOSISAppKey;
#else
        string appKey = "unexpected_platform";
#endif

            IronSource.Agent.validateIntegration();

            Debug.Log("unity-script: unity version" + IronSource.unityVersion());

            // SDK init
            Debug.Log("unity-script: IronSource.Agent.init");
            Debug.Log("IS Key => "+ appKey);
            IronSource.Agent.init(appKey);
            bannerImage.SetActive(false);
            lastInterstitial = -1000f;
            ShowBannerAd();
            LoadInterstitialAd();

        }

        void OnEnable()
        {
            //Add Rewarded Video Events
            IronSourceEvents.onRewardedVideoAdOpenedEvent += RewardedVideoAdOpenedEvent;
            IronSourceEvents.onRewardedVideoAdClosedEvent += RewardedVideoAdClosedEvent;
            IronSourceEvents.onRewardedVideoAvailabilityChangedEvent += RewardedVideoAvailabilityChangedEvent;
            IronSourceEvents.onRewardedVideoAdStartedEvent += RewardedVideoAdStartedEvent;
            IronSourceEvents.onRewardedVideoAdEndedEvent += RewardedVideoAdEndedEvent;
            IronSourceEvents.onRewardedVideoAdRewardedEvent += RewardedVideoAdRewardedEvent;
            IronSourceEvents.onRewardedVideoAdShowFailedEvent += RewardedVideoAdShowFailedEvent;
            IronSourceEvents.onRewardedVideoAdClickedEvent += RewardedVideoAdClickedEvent;

            // Add Interstitial Events
            IronSourceEvents.onInterstitialAdReadyEvent += InterstitialAdReadyEvent;
            IronSourceEvents.onInterstitialAdLoadFailedEvent += InterstitialAdLoadFailedEvent;
            IronSourceEvents.onInterstitialAdShowSucceededEvent += InterstitialAdShowSucceededEvent;
            IronSourceEvents.onInterstitialAdShowFailedEvent += InterstitialAdShowFailedEvent;
            IronSourceEvents.onInterstitialAdClickedEvent += InterstitialAdClickedEvent;
            IronSourceEvents.onInterstitialAdOpenedEvent += InterstitialAdOpenedEvent;
            IronSourceEvents.onInterstitialAdClosedEvent += InterstitialAdClosedEvent;

            // Add Banner Events
            IronSourceEvents.onBannerAdLoadedEvent += BannerAdLoadedEvent;
            IronSourceEvents.onBannerAdLoadFailedEvent += BannerAdLoadFailedEvent;
            IronSourceEvents.onBannerAdClickedEvent += BannerAdClickedEvent;
            IronSourceEvents.onBannerAdScreenPresentedEvent += BannerAdScreenPresentedEvent;
            IronSourceEvents.onBannerAdScreenDismissedEvent += BannerAdScreenDismissedEvent;
            IronSourceEvents.onBannerAdLeftApplicationEvent += BannerAdLeftApplicationEvent;
        }

        void OnApplicationPause(bool isPaused)
        {
           
            IronSource.Agent.onApplicationPause(isPaused);

            if (!isPaused)
            {
                if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_appopen == 1)
                {
                    if (HomeManager.Instance.LevelIdx >= 11)
                    {
                        Debug.Log("unity-script: OnApplicationPause = " + isPaused);
                        AdmobManager.Instance.RequestAppOpenAds();
                    }
                }
            }
        }

        #region RewardedAd callback handlers
        void RewardedVideoAvailabilityChangedEvent(bool canShowAd)
        {
            Debug.Log("unity-script: I got RewardedVideoAvailabilityChangedEvent, value = " + canShowAd);
        }

        void RewardedVideoAdOpenedEvent()
        {
            Debug.Log("unity-script: I got RewardedVideoAdOpenedEvent");
        }

        void RewardedVideoAdRewardedEvent(IronSourcePlacement ssp)
        {
            Debug.Log("unity-script: I got RewardedVideoAdRewardedEvent, amount = " + ssp.getRewardAmount() + " name = " + ssp.getRewardName());
            //GiveRewardToUser();
        }

        void RewardedVideoAdClosedEvent()
        {

            //Time.timeScale = 1;
            GiveRewardToUser();
            Debug.Log("unity-script: I got RewardedVideoAdClosedEvent");
        }

        void RewardedVideoAdStartedEvent()
        {
            Debug.Log("unity-script: I got RewardedVideoAdStartedEvent");
        }

        void RewardedVideoAdEndedEvent()
        {
            Debug.Log("unity-script: I got RewardedVideoAdEndedEvent");
        }

        void RewardedVideoAdShowFailedEvent(IronSourceError error)
        {

           // Time.timeScale = 1;
            Debug.Log("unity-script: I got RewardedVideoAdShowFailedEvent, code :  " + error.getCode() + ", description : " + error.getDescription());
        }

        void RewardedVideoAdClickedEvent(IronSourcePlacement ssp)
        {
            Debug.Log("unity-script: I got RewardedVideoAdClickedEvent, name = " + ssp.getRewardName());
        }
        #endregion

        #region Interstitial callback handlers
        void InterstitialAdReadyEvent()
        {
            Debug.Log("unity-script: I got InterstitialAdReadyEvent");
        }

        void InterstitialAdLoadFailedEvent(IronSourceError error)
        {
          //  Time.timeScale = 1;
            Debug.Log("unity-script: I got InterstitialAdLoadFailedEvent, code: " + error.getCode() + ", description : " + error.getDescription());
            Invoke("LoadInterstitialAd", 1f);
        }

        void InterstitialAdShowSucceededEvent()
        {
            Debug.Log("unity-script: I got InterstitialAdShowSucceededEvent");
            //if (GameManager.Instance.IdForShowIntrestitialAd == "TryAgain")
            //{
            //    GameManager.Instance.IdForShowIntrestitialAd = "";
            //    GameManager.Instance.CloseAdAfterCallForTryAgain();
            //}
        }

        void InterstitialAdShowFailedEvent(IronSourceError error)
        {
            //Time.timeScale = 1;
            Debug.Log("unity-script: I got InterstitialAdShowFailedEvent, code :  " + error.getCode() + ", description : " + error.getDescription());

        }

        void InterstitialAdClickedEvent()
        {
            Debug.Log("unity-script: I got InterstitialAdClickedEvent");
        }

        void InterstitialAdOpenedEvent()
        {
           // Time.timeScale = 0;
            Debug.Log("unity-script: I got InterstitialAdOpenedEvent");
        }

        void InterstitialAdClosedEvent()
        {
          //  Time.timeScale = 1;
            Debug.Log("unity-script: I got InterstitialAdClosedEvent");

            MethodAction?.Invoke();
            // MethodAction();


            Debug.Log("heheheheheh");
            //CancelInvoke("LoadInterstitialAd");
            //Invoke("LoadInterstitialAd", 5f);
            LoadInterstitialAd();
        }
        #endregion

        #region Banner callback handlers
        void BannerAdLoadedEvent()
        {
            //Debug.Log("unity-script: I got BannerAdLoadedEvent");
            bannerImage.SetActive(true);
            Debug.Log("RefreshBanner");
            
        }

        void BannerAdLoadFailedEvent(IronSourceError error)
        {
            Debug.Log("unity-script: I got BannerAdLoadFailedEvent, code: " + error.getCode() + ", description : " + error.getDescription());
        }

        void BannerAdClickedEvent()
        {
            Debug.Log("unity-script: I got BannerAdClickedEvent");
        }

        void BannerAdScreenPresentedEvent()
        {
            Debug.Log("unity-script: I got BannerAdScreenPresentedEvent");
        }

        void BannerAdScreenDismissedEvent()
        {
            Debug.Log("unity-script: I got BannerAdScreenDismissedEvent");
        }

        void BannerAdLeftApplicationEvent()
        {
            Debug.Log("unity-script: I got BannerAdLeftApplicationEvent");
        }
        #endregion


        public void ShowBannerAd()
        {
            if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_IS_banner_ads == 1)
            {
            Debug.Log("Banner ad load");
            IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, baanerPosition);
            bannerImage.SetActive(true);
            }
        }

        public void HideBannerAd()
        {
            Debug.Log("Hide Banner Ad");
            IronSource.Agent.destroyBanner();
            bannerImage.SetActive(false);
            ShowBannerAd();
        }

        public void LoadInterstitialAd()
        {

            Debug.Log("Load Interstitial AD");
            if (!IronSource.Agent.isInterstitialReady())
            {
            IronSource.Agent.loadInterstitial();
            }
            AdmobManager.Instance.RequestInterstitial();
            
        }

        public void ShowInterstitial() 
        {
            Debug.Log("ShowInterstitial");
            Debug.Log("ShowInterstitial = > "+ IronSource.Agent.isInterstitialReady());
            float time = Time.time;
            if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_IS_interstitial_ads == 1 && IronSource.Agent.isInterstitialReady())
            {
                Debug.Log("ready and show");
                LoadInterstitialAd();
                IronSource.Agent.showInterstitial();
               // AdmobManager.Instance.RequestInterstitial();
                lastInterstitial = time;

            }
            else if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_intrestitial == 1 && AdmobManager.Instance.interstitial != null && AdmobManager.Instance.interstitial.IsLoaded())
            {
                Debug.Log("ready and show 2");
                LoadInterstitialAd();
                AdmobManager.Instance.ShowInterstrial();
                lastInterstitial = time;
            }
            
            else
            {
                Invoke("LoadInterstitialAd", 1f);
               

            }
        }

        public int InterstitialCounter = 0;
        public void ShowInterstitialTimer()
        {

            float time = Time.time;
            if (time - lastInterstitial < ReloadTime)
            {
                //ShowInterstitial(f);
                //lastInterstitial = time;
                return;
            }
            
            if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_IS_interstitial_ads == 1 && IronSource.Agent.isInterstitialReady())
            {
                LoadInterstitialAd();
                IronSource.Agent.showInterstitial();
                //AdmobManager.Instance.RequestInterstitial();
                lastInterstitial = time;
            }
            else if(SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_intrestitial == 1 && AdmobManager.Instance.interstitial != null && AdmobManager.Instance.interstitial.IsLoaded())
            {
                LoadInterstitialAd();
                AdmobManager.Instance.ShowInterstrial();
                lastInterstitial = time;
            }
            else
            {
                Invoke("LoadInterstitialAd", 1f);


            }
        }

        public void ShowInterstitial(Action act)
        {
            MethodAction = act;

            Debug.Log("Show Intrestitial Ad");
            if (IronSource.Agent.isInterstitialReady())
            {
                IronSource.Agent.showInterstitial();
            }
            else
            {
                Invoke("LoadInterstitialAd", 1f);
            }
        }

        public bool ShowInterstitialIfReady(Action f)
        {
            if (!IronSource.Agent.isInterstitialReady())
            {
                f();
                return false;
            }
            float time = Time.time;
            if (time - lastInterstitial > ReloadTime)
            {
                ShowInterstitial(f);
                lastInterstitial = time;
                return true;
            }
            f();
            return false;
        }

        public void ShowInterstitialWithFunction(Action f)
        {
            if (!IronSource.Agent.isInterstitialReady())
            {
                f();
                return;
            }
            ShowInterstitial(f);
            lastInterstitial = Time.time;
        }

        public void ShowTriggeredAd()
        {
            if (IronSource.Agent.isInterstitialReady())
            {
                ShowInterstitial(null);
            }
        }



        string VideoFor = "";
        public void ShowRewardVideo(string _rewardFor = "test")
        {
            Debug.Log("Show Reward video Ad");
            VideoFor = _rewardFor;
            //GiveRewardToUser();
           
            if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_IS_reward_ads==1 && IronSource.Agent.isRewardedVideoAvailable())
            {
                //SoundManager.Instance.StopAllSoundRunningVideoAd(true);
                IronSource.Agent.showRewardedVideo();
            }
            else if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_reward == 1 && AdmobManager.Instance.rewardedAd != null && AdmobManager.Instance.rewardedAd.IsLoaded())
            {
                AdmobManager.Instance.ShowRewardVideo();
            }
            else
            {
                Debug.LogError("Problem in showing video");
                // NotificationHandler.Instance.ShowNotification("Reward Ad is not available!");
            }
        }

        public void GiveRewardToUser()
        {
            Debug.LogError("watch video comepleted:" + VideoFor);
            switch (VideoFor)
            {

            }
        }

        //private void OnApplicationPause(bool pauseStatus)
        //{

        //}


        //private void OnApplicationFocus(bool focus)
        //{
        //    if (focus)
        //    {
        //        if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_ads == 1)
        //        {

        //            AdmobManager.Instance.RequestAppOpenAds();

        //        }
        //    }
        //}

        //void OnApplicationPause(bool pauseStatus)
        //{
        //    isPaused = pauseStatus;
        //}
    }




}
            