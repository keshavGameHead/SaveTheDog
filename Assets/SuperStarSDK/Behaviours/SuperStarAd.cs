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
        string appKey = SuperStarSdkManager.Instance.crossPromoAssetsRoot.iOSISAppKey;
#else
        string appKey = "unexpected_platform";
#endif

            IronSource.Agent.validateIntegration();

            Debug.Log("unity-script: unity version" + IronSource.unityVersion());

            // SDK init
            Debug.Log("unity-script: IronSource.Agent.init");
            IronSource.Agent.init(appKey);
            bannerImage.SetActive(false);
            lastInterstitial = -1000f;
            ShowBannerAd();
            LoadInterstitialAd(0);

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

        //void OnApplicationPause(bool isPaused)
        //{
        //    Debug.Log("unity-script: OnApplicationPause = " + isPaused);
        //    IronSource.Agent.onApplicationPause(isPaused);

        //    if (!isPaused)
        //    {
        //        if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_appopen == 1)
        //        {

        //          //  AdmobManager.Instance.RequestAppOpenAds();

        //        }
        //    }
        //}

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
            isRewardGiven = true;
            isRewardShowing = false;
            Debug.Log("unity-script: I got RewardedVideoAdRewardedEvent, amount = " + ssp.getRewardAmount() + " name = " + ssp.getRewardName());
            //GiveRewardToUser();
        }

        void RewardedVideoAdClosedEvent()
        {

            if (isRewardGiven)
            {
                if (_callback == null)
                {
                    return;
                }
                _callback.Invoke(true);
                _callback = null;
            }
            else 
            {
                if (_callback == null)
                {
                    return;
                }
                _callback.Invoke(false);
                _callback = null;
            }
            isRewardShowing = false;
            //Time.timeScale = 1;
            // GiveRewardToUser();
            Debug.Log("unity-script: I got RewardedVideoAdClosedEvent");
        }

        void RewardedVideoAdStartedEvent()
        {
            Debug.Log("unity-script: I got RewardedVideoAdStartedEvent");
        }

        void RewardedVideoAdEndedEvent()
        {
            isRewardShowing = false;
            Debug.Log("unity-script: I got RewardedVideoAdEndedEvent");
        }

        void RewardedVideoAdShowFailedEvent(IronSourceError error)
        {
            isRewardShowing = false;
            if (isRewardGiven)
            {
                if (_callback == null)
                {
                    return;
                }
                _callback.Invoke(false);
                _callback = null;
            }
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
            LoadInterstitialAd(5f);
            isIntrestitiallShowing = false;
            if (_callbackIntrestital == null)
            {
                return;
            }
            _callbackIntrestital.Invoke(false);
            _callbackIntrestital = null;

            Debug.Log("unity-script: I got InterstitialAdLoadFailedEvent, code: " + error.getCode() + ", description : " + error.getDescription());
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
             isIntrestitiallShowing = false;
            if (_callbackIntrestital == null)
            {
                return;
            }
            _callbackIntrestital.Invoke(false);
            _callbackIntrestital = null;
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

            LoadInterstitialAd(5f);
            isIntrestitiallShowing = false;
            if (_callbackIntrestital == null)
            {
                return;
            }
            _callbackIntrestital.Invoke(true);
            _callbackIntrestital = null;
          
            Debug.Log("heheheheheh");
           
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

        Coroutine CRLoadInterstitialAd;

        public void LoadInterstitialAd(float delay)
        {
            if (!IronSource.Agent.isInterstitialReady())
            {

                if (CRLoadInterstitialAd==null)
                {
                    CRLoadInterstitialAd = StartCoroutine(IELoadInterstitialAd(delay));
                }
            }
            Debug.Log("Load Interstitial AD");
          
            
        }

        public IEnumerator IELoadInterstitialAd(float delay) 
        {
            yield return new WaitForSeconds(delay);
            //AdmobManager.Instance.RequestInterstitial();
            IronSource.Agent.loadInterstitial();
        }


        public void ShowInterstitial() 
        {
            float time = Time.time;
            if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_IS_interstitial_ads == 1 && IronSource.Agent.isInterstitialReady())
            {

                IronSource.Agent.showInterstitial();
                lastInterstitial = time;

            }
            //else if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_intrestitial == 1 && AdmobManager.Instance.interstitial != null && AdmobManager.Instance.interstitial.IsLoaded())
            //{
            //    IronSource.Agent.loadInterstitial();
            //    AdmobManager.Instance.ShowInterstrial();
            //    lastInterstitial = time;
            //}
            
            else
            {
                LoadInterstitialAd(5f);



            }
        }

        public int InterstitialCounter = 0;


        public bool ISIntrestitialReadyToShow(bool ForceShow = false) 
        {
            if (!IronSource.Agent.isInterstitialReady())
            {
                IronSource.Agent.loadInterstitial();
            }
            float time = Time.time;
            bool isloadedTime = false;
            if (time - lastInterstitial >= ReloadTime)
            {
                //ShowInterstitial(f);
                //lastInterstitial = time;
                isloadedTime = true;
            }
            if (ForceShow)
            {
                isloadedTime = true;
            }
            return SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_IS_interstitial_ads == 1 && IronSource.Agent.isInterstitialReady()&& isloadedTime;
        }


        public void ExampleShowIntrestitialWithCallback() 
        {
            ShowInterstitialTimer(TestIntrestitialWithCallback);
        }

        public void TestIntrestitialWithCallback(bool isCompleted)
        {
           
            if (isCompleted)
            {
                //Give reward here
                Debug.Log("Intrestitial  completed  Do other thing");

            }
            else
            {
                Debug.Log("Intrestitial  has issue");

                // do next step as reward not available
            }
        }



        public Action<bool> _callbackIntrestital;
        [HideInInspector]
        public bool isIntrestitiallShowing = false;
        public void ShowInterstitialTimer(Action<bool> onComplete)
        {
            Debug.Log("ShowInterstitialTimer");
            if (isIntrestitiallShowing)
            {
                return;
            }
            isIntrestitiallShowing = true;
            _callbackIntrestital = onComplete;

#if UNITY_EDITOR
            isIntrestitiallShowing = false;
            if (_callbackIntrestital == null)
            {
                return;
            }
            _callbackIntrestital.Invoke(true);
            _callbackIntrestital = null;
            return;
#endif

            if (ISIntrestitialReadyToShow())
            {

                IronSource.Agent.showInterstitial();
                lastInterstitial = Time.time;

            }
            else
            {

                isIntrestitiallShowing = false;
                if (_callbackIntrestital == null)
                {
                    return;
                }
                _callbackIntrestital.Invoke(false);
                _callbackIntrestital = null;
                LoadInterstitialAd(5f);
            }
        }

        public void ShowForceInterstitial(Action<bool> onComplete)
        {
            if (isIntrestitiallShowing)
            {
                return;
            }
            isIntrestitiallShowing = true;
            _callbackIntrestital = onComplete;

#if UNITY_EDITOR
            isIntrestitiallShowing = false;
            if (_callbackIntrestital == null)
            {
                return;
            }
            _callbackIntrestital.Invoke(true);
            _callbackIntrestital = null;
            return;
#endif
            if (ISIntrestitialReadyToShow(true))
            {
                IronSource.Agent.showInterstitial();
                lastInterstitial = Time.time;
            }
            else
            {
                isIntrestitiallShowing = false;
                if (_callbackIntrestital == null)
                {
                    return;
                }
                _callbackIntrestital.Invoke(false);
                _callbackIntrestital = null;
                LoadInterstitialAd(5f);
            }
        }

       

       
        public void ExampleShowReward()
        {
            ShowRewardVideo(ExampleShowRewardAssign);
        }

        public void ExampleShowRewardAssign(bool isrewarded)
        {
            if (isrewarded)
            {
                //Give reward here
                Debug.Log("Reward Given");
            }
            else
            {
                Debug.Log("Reward Eroor Given");
                // do next step as reward not available
            }
        }
        public Action<bool> _callback;
        [HideInInspector]
        public bool isRewardShowing = false;
        string VideoFor = "";
        [HideInInspector]
        public bool isRewardGiven = false;
        public void ShowRewardVideo(Action<bool> onComplete)
        {
            Debug.Log("Show Reward video Ad");

            if (isRewardShowing)
            {
                return;
            }
            isRewardGiven = false;
            isRewardShowing = true;
            _callback = onComplete;
            //GiveRewardToUser();
#if UNITY_EDITOR
            isRewardShowing = false;
            if (_callback == null)
            {
                return;
            }
            _callback.Invoke(true);
            _callback = null;
            return;
#endif
            if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_IS_reward_ads==1 && IronSource.Agent.isRewardedVideoAvailable())
            {
                //SoundManager.Instance.StopAllSoundRunningVideoAd(true);
                IronSource.Agent.showRewardedVideo();
            }
            //else if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.display_Admob_reward == 1 && AdmobManager.Instance.rewardedAd != null && AdmobManager.Instance.rewardedAd.IsLoaded())
            //{
            //    AdmobManager.Instance.ShowRewardVideo();
            //}
            else
            {
                Debug.LogError("Problem in showing video");
                isRewardShowing = false;
                if (_callback == null)
                {
                    return;
                }
                _callback.Invoke(false);
                _callback = null;
                return;
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
            