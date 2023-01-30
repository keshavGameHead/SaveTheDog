//using SuperStarSdk;
//using System;
//using System.Collections;
//using System.Collections.Generic;
//using System.IO;
//using UnityEngine;
//using UnityEngine.UI;

//public class SSNativeBanner : MonoBehaviour
//{
//    private const string PlayStoreUrl = "https://play.google.com/store/apps/details?id={0}";
//    private const string AppStoreUrl = "https://itunes.apple.com/app/apple-store/id{0}";
//    [SerializeField]
//    private Text _gameName;
//    [SerializeField]
//    private Button _containerButton;
//    [SerializeField]
//    private RawImage _bannerContent;
//    [SerializeField]
//    private Button _playButton;

//    [SerializeField]
//    private GameObject _container;
//    int CurrentBannerIndex = -1;

//    public SSCrossPromoAsset _currentCrossPromoAsset;


//    private void OnEnable()
//    {
//        _container.SetActive(false);
//        _bannerContent.gameObject.SetActive(false);
//        SuperStarSdkManager.OnDataArrive += NativeBannerDataAarrived;
//        Debug.LogError("on enable called");
//        //yield return new WaitForSeconds(5f);
//        //if (SuperStarSdkManager.Instance.isCrossPromoDataArrived)
//        //{
//        //    find cross promo data for this cross promo

//        //    int cross = GiveMeNativeBannerIndex();

//        //    if (cross == -1)
//        //        {
//        //            Debug.Log("No video Prepared");
//        //        }
//        //        else
//        //        {

//        //            _currentCrossPromoAsset = SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[cross];
//        //            SetUpNativeBanner();
//        //        }
//        //}
//    }

//    private void OnDisable()
//    {
//        SuperStarSdkManager.OnDataArrive -= NativeBannerDataAarrived;
//    }

//    //public void NativeBannerDataAarrived()
//    //{

//    //    int cross = GiveMeNativeBannerIndex();

//    //    if (cross == -1)
//    //    {
//    //        Debug.Log("No Banner Prepared");
//    //    }
//    //    else
//    //    {

//    //        _currentCrossPromoAsset = SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[cross];
//    //        SetUpNativeBanner();
//    //    }

//    //    //Debug.LogError("Data arrived Load Video");
//    //    //_currentCrossPromoAsset = SuperStarSdkManager.Instance.crossPromoAssetsRoot.crossPromoAssets[0];
//    //    //SetUpCrosspromo();
//    //    // _container.SetActive(true);
//    //}

//    private void SetUpNativeBanner()
//    {
//        Debug.LogError("SetUpNativeBanner");
//        _containerButton.onClick.AddListener(OnClickEvent);
//        _playButton.onClick.AddListener(OnClickEvent);
//        LoadNativeBanner();
//    }

//    //public int GiveMeNativeBannerIndex()
//    //{
//    //    List<int> data = new List<int>();

//    //    for (int i = 0; i < SuperStarSdkManager.Instance.crossPromoAssetsRoot.data.Count; i++)
//    //    {
//    //        if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i].isBannerDownloaded)
//    //        {
//    //            data.Add(i);
//    //        }
//    //    }

//    //    if (data.Count > 0)
//    //    {
//    //        int x = data[UnityEngine.Random.Range(0, data.Count)];

//    //        if (CurrentBannerIndex != x)
//    //        {
//    //            CurrentBannerIndex = x;
//    //            return x;
//    //        }
//    //        else
//    //        {
//    //            return GiveMeNativeBannerIndex();
//    //        }

//    //    }
//    //    else
//    //    {
//    //        return -1;
//    //    }
//    //}

//    void LoadNativeBanner()
//    {
//        Debug.Log(Application.persistentDataPath + "/" + _currentCrossPromoAsset.appname+_currentCrossPromoAsset.appbannername + ".jpg");
//        _bannerContent.texture = GetTexture(Application.persistentDataPath + "/" + _currentCrossPromoAsset.appname + _currentCrossPromoAsset.appbannername + ".jpg");
//        _gameName.text = _currentCrossPromoAsset.appname;
//        _container.SetActive(true);
//        _bannerContent.gameObject.SetActive(true);
//    }

//    public Texture2D GetTexture(string path)
//    {
//        //string finalPath =  path ;
        
//        byte[] pngBytes = File.ReadAllBytes(path);
//        Texture2D tex = new Texture2D(2, 2);
//        tex.LoadImage(pngBytes);
//        tex.wrapMode = TextureWrapMode.Repeat;
//        tex.filterMode = FilterMode.Bilinear;
//       // allTextureLoadedList.Add(tex);
//        return tex;
//    }
//    //private void OnErrorReceived(VideoPlayer source, string message)
//    //{
//    //    StartCoroutine(PlayNextVideo());
//    //    Debug.LogError("Error recieved ");
//    //}

//    public void OnClickEvent()
//    {
//        if (_currentCrossPromoAsset != null)
//        {

//#if UNITY_ANDROID
//            Application.OpenURL( _currentCrossPromoAsset.appstoreid);
//#elif  UNITY_IOS
//                Application.OpenURL(AppStoreUrl, _currentCrossPromoAsset.AppStoreId);
//#endif
//        }
//    }

//}
