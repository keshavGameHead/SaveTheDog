using Newtonsoft.Json;
using Sirenix.OdinInspector;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Networking;
using Unity.Advertisement.IosSupport;
#if UNITY_IOS
using UnityEngine.iOS;
#endif
using PaperPlaneTools;
#if UNITY_EDITOR
using Unity.EditorCoroutines.Editor;

#endif
namespace SuperStarSdk
{
    public class SuperStarSdkManager : MonoBehaviour
    {
        public int LastPlayedCrossPromoBoxIndex = -1;
        public int LastPlayedCrossPromoIntrestitialIndex = -1;


        public static SuperStarSdkManager Instance;
        //public SdkDataClass Settings;
        public string ConfigFileURL;

        //[Header("Own Ads Setting")]
        //public bool isCrossPromoOn=false;
        //public bool isNativeBannerOn = false;
        //public bool isNativeBannerCollectionOn = false;


        public SSCrossPromoAssetRoot crossPromoAssetsRoot;
        public bool isCrossPromoDataArrived = false;

        public delegate void OnDataArrivedDelegate();
        public static OnDataArrivedDelegate OnDataArrive;

        private const string PlayStoreUrl = "https://play.google.com/store/apps/details?id={0}";
        private const string AppStoreUrl = "https://itunes.apple.com/app/apple-store/id{0}";

        public string PrivacyPolicyLink;
       // public AdmobManager admobManager;
        public string LastJSON;
        public string DefaultConfig
        {
            get
            {
                return PlayerPrefs.GetString("DefaultConfig", LastJSON);
            }
            set
            {
                PlayerPrefs.SetString("DefaultConfig", value);
            }
        }

        public int PrivacyAccepted
        {
            get
            {
                return PlayerPrefs.GetInt("PrivacyAccepted", 0);
            }
            set
            {
                PlayerPrefs.SetInt("PrivacyAccepted", value);
            }
        }
        public GameObject GDPR;
        private void Awake()
        {
            if (!string.IsNullOrEmpty(DefaultConfig))
            {
                crossPromoAssetsRoot = JsonConvert.DeserializeObject<SSCrossPromoAssetRoot>(DefaultConfig);
            }

            if (Instance == null)
            {
                Instance = this;
                DontDestroyOnLoad(this.gameObject);
            }
            else
            {
                Destroy(this.gameObject);
            }

            //if (PrivacyAccepted == 0)
            //{
            //    GDPR.SetActive(true);
            //}
            //else {
            //    GDPR.SetActive(false);

            //}
          

        }

        public void AcceptGDPR() {
            PrivacyAccepted = 1;
          //  GDPR.SetActive(false);
        }
        public void CloseGDPR() {
            PrivacyAccepted = 1;
          //  GDPR.SetActive(false);
        }
        public void PrivacyPolicy() {
            Application.OpenURL(PrivacyPolicyLink);
        }



        private IEnumerator Start()
        {
            if (!string.IsNullOrEmpty(DefaultConfig))
            {

                crossPromoAssetsRoot = JsonConvert.DeserializeObject<SSCrossPromoAssetRoot>(DefaultConfig);
                AdmobManager.Instance.SetUp();
            }
            else
            {
                AdmobManager.Instance.SetUp();

            }

            SuperStarAd.Instance.Setup();
            //  Debug.Log("Complete json : => " + JsonConvert.SerializeObject(crossPromoAssetsRoot));
            AppTrackTransperancy();
            yield return new WaitForSeconds(1);
          //cross prom data 

            StartCoroutine(IEGetCrossPromoData());

        }


        public event Action sentTrackingAuthorizationRequest;
        public void AppTrackTransperancy() {
#if UNITY_IOS

            Version currentVersion = new Version(Device.systemVersion); 
            Version ios14 = new Version("14.5"); 
            // check with iOS to see if the user has accepted or declined tracking
            var status = ATTrackingStatusBinding.GetAuthorizationTrackingStatus();

            if (status == ATTrackingStatusBinding.AuthorizationTrackingStatus.NOT_DETERMINED && currentVersion >= ios14)
            {

            Debug.Log("Unity iOS Support: Requesting iOS App Tracking Transparency native dialog.");

            ATTrackingStatusBinding.RequestAuthorizationTracking();

            sentTrackingAuthorizationRequest?.Invoke();

                Debug.LogWarning("Unity iOS Support: Tried to request iOS App Tracking Transparency native dialog, " +
                                 "but the current platform is not iOS.");

            }
#else
            Debug.Log("Unity iOS Support: App Tracking Transparency status not checked, because the platform is not iOS.");
#endif

        }

        public IEnumerator IEGetCrossPromoData()
        {

            Debug.Log("IEGetCrossPromoData Config files ");

            UnityWebRequest www = UnityWebRequest.Get(ConfigFileURL);//APImainURL
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
                Debug.Log("USer Craetion failed : " + www.downloadHandler.text);

                if (!string.IsNullOrEmpty(DefaultConfig))
                {
                    Debug.Log("data1 " + DefaultConfig);
                    crossPromoAssetsRoot = JsonConvert.DeserializeObject<SSCrossPromoAssetRoot>(DefaultConfig);
                    Debug.Log("All Data arrives sucessfully");
                    SuperStarAd.Instance.ReloadTime = crossPromoAssetsRoot.display_interstitial_reloadtime;
                    if (crossPromoAssetsRoot.display_crosspromovideoBox_ads==1)
                    {
                        StartCoroutine(DownloadVideo());
                    }
                    //if (crossPromoAssetsRoot.display_crosspromonativebanner_ads == 1)
                    //{
                    //    StartCoroutine(DownloadBanners());
                    //}
                    if (crossPromoAssetsRoot.display_crosspromobannercollection_ads == 1)
                    {
                        StartCoroutine(DownloadIcons());
                    }
                    isCrossPromoDataArrived = true;
                    if (OnDataArrive != null)
                    {
                        OnDataArrive();
                    }
                    CheckForForceUpdate();
                   // Debug.Log("Complete json : => " + JsonConvert.SerializeObject(crossPromoAssetsRoot));
                   // LastJSON = JsonConvert.SerializeObject(crossPromoAssetsRoot);

                }
            }
            else
            {

                string data = www.downloadHandler.text;
                Debug.Log("data " + data);

                data = Regex.Unescape(data);
                DefaultConfig = data;
                Debug.Log("data " + data);
                if (!string.IsNullOrEmpty(data))
                {
                    Debug.Log("data1 " + data);
                    crossPromoAssetsRoot = JsonConvert.DeserializeObject<SSCrossPromoAssetRoot>(data);
                    Debug.Log("All Data arrives sucessfully");
                     SuperStarAd.Instance.ReloadTime = crossPromoAssetsRoot.display_interstitial_reloadtime;

                    if (crossPromoAssetsRoot.display_crosspromovideoBox_ads == 1)
                    {
                        StartCoroutine(DownloadVideo());
                    }
                    //if (crossPromoAssetsRoot.display_crosspromonativebanner_ads == 1)
                    //{
                    //    StartCoroutine(DownloadBanners());
                    //}
                    if (crossPromoAssetsRoot.display_crosspromobannercollection_ads == 1)
                    {
                        StartCoroutine(DownloadIcons());
                    }
                    isCrossPromoDataArrived = true;
                    if (OnDataArrive!=null)
                    {

                    OnDataArrive();
                    }
                    CheckForForceUpdate();
                    Debug.Log("Complete json : => " + JsonConvert.SerializeObject(crossPromoAssetsRoot));
                    //LastJSON = JsonConvert.SerializeObject(crossPromoAssetsRoot);
                }



            }
            Debug.Log("data ");

        }

        public GameObject ForceUpdateScreen;
        public void CheckForForceUpdate() {

            if (crossPromoAssetsRoot.display_forceupdate == 1)
            {
                if (crossPromoAssetsRoot.minversionforceupdate > float.Parse(Application.version))
                {
                    UpdatepopupOpen();
                }
            }
            //else
            //{
            //    ForceUpdateScreen.SetActive(false);

            //}
        }

        IEnumerator DownloadVideo()
        {
            for (int i = 0; i < crossPromoAssetsRoot.data.Count; i++)
            {
                for (int z = 0; z < crossPromoAssetsRoot.data[i].appvideourl.Count; z++)
                {

                if (File.Exists(Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname+crossPromoAssetsRoot.data[i].appvideourl[z].name + ".mp4"))
                {
                    Debug.Log("video is available " + Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appvideourl[z].name + ".mp4");
                    crossPromoAssetsRoot.data[i].appvideourl[z].isDownloaded = true;
                    //ActivateVideoCrossPromotion();
                }
                else
                {

                    Debug.Log("video is downloading" + crossPromoAssetsRoot.data[i].appvideourl.Count);


                   
                    UnityWebRequest www = UnityWebRequest.Get(crossPromoAssetsRoot.data[i].appvideourl[z].url);
                    yield return www.SendWebRequest();

                    if (www.isNetworkError || www.isHttpError)
                    {
                        Debug.Log(www.error);
                    }
                    else
                    {

                      File.WriteAllBytes(Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appvideourl[z].name + ".mp4", www.downloadHandler.data);

                        yield return new WaitForSeconds(1f);
                        crossPromoAssetsRoot.data[i].appvideourl[z].isDownloaded = true;


                        Debug.Log(" video Path : " + Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appvideourl[z].name + ".mp4");
                    }
                    Debug.Log("video is downloaded");



                }
                }




            }
        }


        //IEnumerator DownloadBanners()
        //{
        //    for (int i = 0; i < crossPromoAssetsRoot.data.Count; i++)
        //    {
        //        if (File.Exists(Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appbannername + ".jpg"))
        //        {
        //            Debug.Log("Banner is available " + Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appbannername + ".jpg");
        //            crossPromoAssetsRoot.data[i].isBannerDownloaded = true;
        //            //ActivateVideoCrossPromotion();
        //        }
        //        else
        //        {

        //            Debug.Log("Banner is downloading");

        //            UnityWebRequest www = UnityWebRequest.Get(crossPromoAssetsRoot.data[i].appbannerurl);
        //            yield return www.SendWebRequest();

        //            if (www.isNetworkError || www.isHttpError)
        //            {
        //                Debug.Log(www.error);
        //            }
        //            else
        //            {

        //                //yield return new WaitForSeconds(0.1f);
        //                File.WriteAllBytes(Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appbannername + ".jpg", www.downloadHandler.data);
        //                crossPromoAssetsRoot.data[i].isBannerDownloaded = true;
        //                Debug.Log(" Banner Path : " + Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appbannername + ".jpg");
        //            }
        //            Debug.Log("Banner is downloaded");
        //        }
        //    }
        //}

        IEnumerator DownloadIcons()
        {
            for (int i = 0; i < crossPromoAssetsRoot.data.Count; i++)
            {
                if (File.Exists(Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appiconurl.name + ".jpg"))
                {
                    Debug.Log("Banner is available " + Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appiconurl.name + ".jpg");
                    crossPromoAssetsRoot.data[i].appiconurl.isDownloaded = true;
                    //ActivateVideoCrossPromotion();
                }
                else
                {
                    Debug.Log("Banner is downloading");

                    UnityWebRequest www = UnityWebRequest.Get(crossPromoAssetsRoot.data[i].appiconurl.url);
                    yield return www.SendWebRequest();

                    if (www.isNetworkError || www.isHttpError)
                    {
                        Debug.Log(www.error);
                    }
                    else
                    {
                        //yield return new WaitForSeconds(0.1f);
                        File.WriteAllBytes(Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appiconurl.name + ".jpg", www.downloadHandler.data);
                        crossPromoAssetsRoot.data[i].appiconurl.isDownloaded = true;
                        Debug.Log(" Banner Path : " + Application.persistentDataPath + "/" + crossPromoAssetsRoot.data[i].appname + crossPromoAssetsRoot.data[i].appiconurl.name + ".jpg");
                    }
                    Debug.Log("Banner is downloaded");
                }
            }
        }

        public int LastCriticalUpdateDate
        {
            get
            {
                return PlayerPrefs.GetInt("LastCriticalUpdateDate", 0);
            }
            set
            {
                PlayerPrefs.SetInt("LastCriticalUpdateDate", value);
            }
        }
      
        public void UpdatepopupOpen()
        {
            if (DateTime.Now.Day != LastCriticalUpdateDate)
            {
                print("open update dialog");
                LastCriticalUpdateDate = DateTime.Now.Day;
                ForceUpdateScreen.SetActive(true);
            }
            else
            {
                ForceUpdateScreen.SetActive(false);
            }

        }

        public void UpdateAppUrl()
        {
#if UNITY_ANDROID
            Application.OpenURL(String.Format(PlayStoreUrl, crossPromoAssetsRoot.AndroidBundleId));
#elif UNITY_IOS

            Application.OpenURL(String.Format(AppStoreUrl, crossPromoAssetsRoot.iOSAppBundleId));
#endif

        }

        public void MoreApps() 
        {
            if (!string.IsNullOrEmpty(crossPromoAssetsRoot.moreappurl)  )
            {
                Application.OpenURL(crossPromoAssetsRoot.moreappurl);
            }

        }

        public GameObject RatePopUpScreen;
        public void Rate()
        {

            if (crossPromoAssetsRoot.display_direct_review == 1)
            {
                //Show Native popups

#if UNITY_ANDROID
                Review.Instance.Rate();

#elif UNITY_IOS

                RateBox.Instance.Show();

#endif
            }
            else 
            {

                RatePopUpScreen.SetActive(true);
              //  RateGame.Instance.ForceShowRatePopup();
              //Show Gley popup

            }

        }

        public void OpenRateURLs() {
#if UNITY_ANDROID
            Application.OpenURL(String.Format(PlayStoreUrl, crossPromoAssetsRoot.AndroidBundleId));
#elif UNITY_IOS

                        Application.OpenURL(String.Format(AppStoreUrl, crossPromoAssetsRoot.iOSAppBundleId));
#endif

        }

        public void Share()
        {

           new NativeShare()
                .SetSubject("Skins for Minecraft MCPE").SetText("Hey are you make Your OWN Minecaft Skin Then Download This Application!" + "  \n for Android User  " + String.Format(PlayStoreUrl, crossPromoAssetsRoot.AndroidBundleId) + "   \n IPhone User  " + String.Format(AppStoreUrl, crossPromoAssetsRoot.iOSAppBundleId))
                .SetCallback((result, shareTarget) => Debug.Log("Share result: " + result + ", selected app: " + shareTarget))
                .Share();
        }

        public void openFile(string filepath) 
        {
           // AndroidContentOpenerWrapper.OpenContent(filepath);
        }


        [Button]
        public void LoadDataFromServer()
        {

#if UNITY_EDITOR
            EditorCoroutineUtility.StartCoroutine(IEDirectLoadDataFromServer(), this);
#endif
        }

        [Button]
        public void DebugFilledData()
        {
          //  data = Regex.Unescape(data);
            //LastJSON = data;
            LastJSON = JsonConvert.SerializeObject(crossPromoAssetsRoot);

        }


        IEnumerator IEDirectLoadDataFromServer()
        {

            UnityWebRequest www = UnityWebRequest.Get(ConfigFileURL);//APImainURL
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
                Debug.Log("USer Craetion failed : " + www.downloadHandler.text);


            }
            else
            {

                string data = www.downloadHandler.text;
                Debug.Log("data " + data);

                data = Regex.Unescape(data);
                LastJSON = data;
                crossPromoAssetsRoot = JsonConvert.DeserializeObject<SSCrossPromoAssetRoot>(data);

//#if UNITY_ANDROID
//                admobManager.AppOpenAdsIds = crossPromoAssetsRoot.AAdmobOpenID;
//                admobManager.BannerAdsIds = crossPromoAssetsRoot.AAdmobBID;
//                admobManager.IntrestitialAdsIds = crossPromoAssetsRoot.AAdmobInID;
//                admobManager.RewardAdsIds = crossPromoAssetsRoot.AAdmobReID;
//#else
//                admobManager.AppOpenAdsIds = crossPromoAssetsRoot.IAdmobOpenID;
//                admobManager.BannerAdsIds = crossPromoAssetsRoot.IAdmobBID;
//                admobManager.IntrestitialAdsIds = crossPromoAssetsRoot.IAdmobInID;
//                admobManager.RewardAdsIds = crossPromoAssetsRoot.IAdmobReID;

//#endif
              

            }

        }
    }
}


//[System.Serializable]
//public class SSCrossPromoAsset
//{

//    public string id;
//    public string Appname;
//    public string AppDescription;

//    public string AppStoreId;
//    public string AppIconName;
//    public string AppIconUrl;

//    public string AppBannerName;
//    public string AppBannerUrl;
//    public string AppDownloads;

//    public string AppVideoName;
//    public string AppVideoUrl;
//    public int AppVideoType;
//    public string AppVideoFormat;

//    public bool isVideoDownloaded;
//    public bool isBannerDownloaded;
//    public bool isIconDownloaded;
//   // public bool isAppiconDownloaded;
//  //  public bool isSkipped = false;

//}
//[System.Serializable]
//public class SSCrossPromoAssetRoot
//{
//    public List<SSCrossPromoAsset> crossPromoAssets = new List<SSCrossPromoAsset>();
//}

//[System.Serializable]
//public class APIDataClass
//{
//    public string ConfigFileURL;
//}

[System.Serializable]
public class SSCrossPromoAsset
{
    public string id;
    public string appname;
    public string Aappstoreid;
    public string Iappstoreid;
    public URLClass appiconurl;
    public List<URLClass> appvideourl = new List<URLClass>();
    public bool isVideoDownloaded;
    //public bool isIconDownloaded;
}

[System.Serializable]
public class URLClass {
    public string url;
    public string name;
    public bool isDownloaded=false;
}

[System.Serializable]
public class SSCrossPromoAssetRoot
{

    [Header("Configuration Data")]
    public float jsonversion = 0;
    public float minversionforceupdate = 0;
    public int ad_Start_Level = 4;
    public int rate_Us_level = 3;
    public float display_Admob_intrestitial_Probablity = 0.5f;
    public float display_Admob_reward_Probablity = 0.5f;
    public int display_Admob_intrestitial = 1;
    public int display_Admob_reward = 1;
    public int display_Admob_appopen = 1;
    public int display_Admob_banner = 1;
    public int display_IS_banner_ads = 1;
    public int display_IS_interstitial_ads = 1;
    public int display_IS_reward_ads = 1;
    public int display_interstitial_reloadtime = 40;
    
    public int display_direct_review = 0;
    public int display_crosspromovideoBox_ads = 1;
    public int display_crosspromonativebanner_ads = 1;
    public int display_crosspromobannercollection_ads = 1;
    public int display_forceupdate = 0;

    [Header("App Data")]
    public string feedbackmail;
    public string moreappurl;
    public string moreappurlios;
    public string PrivacyPolicy;
    public string AndroidISAppKey;
    public string AndroidAdmobAppKey;
    public string iOSISAppKey;
    public string iOSAdmobAppKey;
    public string ExtraURL;

    [Header("Ads Data")]
    public int IntrestitialAdsStartLevel = 5;
    public List<int> RateAppLevel= new List<int>();

    [Header("Share")]
    public string AndroidBundleId;
    public string iOSAppBundleId;
    public List<string> AAdmobBID = new List<string>();
    public List<string> AAdmobInID = new List<string>();
    public List<string> AAdmobReID = new List<string>();
    public List<string> AAdmobOpenID = new List<string>();
    public List<string> IAdmobBID = new List<string>();
    public List<string> IAdmobInID = new List<string>();
    public List<string> IAdmobReID = new List<string>();
    public List<string> IAdmobOpenID = new List<string>();
    public List<SSCrossPromoAsset> data;
}