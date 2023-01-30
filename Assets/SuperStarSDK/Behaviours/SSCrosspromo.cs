using SuperStarSdk;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

//public enum CrossPromoType {

//    PORTRAIT=0,
//    LANDSCAPE=1
//}

public class SSCrosspromo : MonoBehaviour
{
    private const string PlayStoreUrl = "https://play.google.com/store/apps/details?id={0}";
    private const string AppStoreUrl = "https://itunes.apple.com/app/apple-store/id{0}";
    [SerializeField]
    private VideoPlayer _videoPlayer;
    [SerializeField]
    private GameObject _videoPlayerGameObject;
    [SerializeField]
    private Text _gameName;
    [SerializeField]
    private Button _containerButton;
    [SerializeField]
    private RawImage _videoContent;
    [SerializeField]
    private RenderTexture _renderTexture;
    [SerializeField]
    private GameObject _container;
    [SerializeField]
    private Button _playButton;
    [Header("0 portrait , 1 LandScape")]
    public string CrosspromoType;
    //[SerializeField]
    //private Material _material;

    private Vector3 _previousLocalScale;
    public SSCrossPromoAsset _currentCrossPromoAsset;
    private static Vector3 ZeroScaleVector = new Vector3(0, 0, 0);

    private bool DidLoad;

    int CurrentVideoIndex = -1;

    private void OnEnable()
    {
        _container.SetActive(false);
        _videoContent.gameObject.SetActive(false);
        SuperStarSdkManager.OnDataArrive += CrossPromoDataAarrived;
        Debug.LogError("on enable called");
        //yield return new WaitForSeconds(5f);
        if (SuperStarSdkManager.Instance.isCrossPromoDataArrived)
        {
            //find cross promo data for this cross promo

            int cross = GiveMeCrossPromoVideoIndex();

            if (cross == -1)
            {
                Debug.Log("No video Prepared");
            }
            else {

            _currentCrossPromoAsset = SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[cross];
            SetUpCrosspromo();
            }
        }
    }


     public   List<int> data = new List<int>();
    public int GiveMeCrossPromoVideoIndex() {

        for (int i = 0; i < SuperStarSdkManager.Instance.crossPromoAssetsRoot.data.Count; i++)
        {

            for (int z = 0; z < SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i].appvideourl.Count; z++)
            {
            if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i].appvideourl[z].isDownloaded )
            {
                    if (!data.Contains(i))
                    {
                   data.Add(i);
                    }
            }

            }
            //else if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i].isVideoDownloaded && SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i].appvideotype == CrosspromoType)
            //{
            //    data.Add(i);
            //}
        }

        if (data.Count > 0)
        {
            int x =  data[UnityEngine.Random.Range(0, data.Count)];

            if (CurrentVideoIndex != x)
            {
                CurrentVideoIndex = x;
                return x;
            }
            else
            {
                return GiveMeCrossPromoVideoIndex();
            }

        }
        else {
            return -1;
        }
    }


    public int GiveMeCrossPromoVideoURLIndex()
    {

        List<int> dummyIndex = new List<int>();

            for (int z = 0; z < _currentCrossPromoAsset.appvideourl.Count; z++)
            {
                if (_currentCrossPromoAsset.appvideourl[z].isDownloaded)
                {
                dummyIndex.Add(z);
                }

            }

        return dummyIndex[UnityEngine.Random.Range(0, dummyIndex.Count)];

        return -1;
            //else if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i].isVideoDownloaded && SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i].appvideotype == CrosspromoType)
            //{
            //    data.Add(i);
            //}
        

    }

    private void OnDisable()
    {
        SuperStarSdkManager.OnDataArrive -= CrossPromoDataAarrived;
    }


    public void CrossPromoDataAarrived()
    {

        int cross = GiveMeCrossPromoVideoIndex();

        if (cross == -1)
        {
            Debug.Log("No video Prepared");
        }
        else
        {

            _currentCrossPromoAsset = SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[cross];
            SetUpCrosspromo();
        }

        //Debug.LogError("Data arrived Load Video");
        //_currentCrossPromoAsset = SuperStarSdkManager.Instance.crossPromoAssetsRoot.crossPromoAssets[0];
        //SetUpCrosspromo();
       // _container.SetActive(true);
    }

    private void SetUpCrosspromo()
    {
        Debug.LogError("SetUpCrosspromo");
        _containerButton.onClick.AddListener(OnClickEvent);
        _playButton.onClick.AddListener(OnClickEvent);
        _videoPlayer = _videoPlayerGameObject.GetComponent<VideoPlayer>();
        _videoContent.texture = _renderTexture;
        _videoPlayer.targetTexture = _renderTexture;
        _videoPlayer.errorReceived += OnErrorReceived;
        _videoPlayer.prepareCompleted += OnVideoPrepared;
        _videoPlayer.sendFrameReadyEvents = true;
        _renderTexture.Create();

        LoadVideo();
    }

    private void OnErrorReceived(VideoPlayer source, string message)
    {
        StartCoroutine(PlayNextVideo());
        Debug.LogError("Error recieved ");
    }

    private void CleanTexture()
    {
        _renderTexture.Release();
        _renderTexture.DiscardContents();
    }
    private void OnVideoPrepared(VideoPlayer source)
    {
        
        Debug.LogError("Video Prepared");
        CleanTexture();
       // source.frameReady += OnFrameReady;
        source.Play();
        _videoContent.gameObject.SetActive(true);
      //  Show();
    }

    //private void Show()
    //{
    //    Debug.Log("Video Show");
    //    if (_previousLocalScale != null)
    //    {
    //        _container.transform.localScale = _previousLocalScale;
    //    }
    //}

    //private void OnFrameReady(VideoPlayer source, long frameIdx)
    //{
    //    if (source.frame >= 0)
    //    {
    //        source.frameReady -= OnFrameReady;
    //    }
    //}

    public void OnClickEvent()
    {
        if (_currentCrossPromoAsset != null)
        {

#if UNITY_ANDROID
            Application.OpenURL(_currentCrossPromoAsset.Aappstoreid);
            SSEventManager.Instance.SSOnPressCrossPromoBox(_currentCrossPromoAsset.appname, "Android");
#elif  UNITY_IOS
            Application.OpenURL(_currentCrossPromoAsset.Iappstoreid);
            SSEventManager.Instance.SSOnPressCrossPromoBox(_currentCrossPromoAsset.appname, "IOS");

#endif
        }
    }

    void LoadVideo()
    {
        int crosspromoindex = GiveMeCrossPromoVideoURLIndex();
        Debug.Log("Load video" + Application.persistentDataPath + "/" + _currentCrossPromoAsset.appname+_currentCrossPromoAsset.appvideourl[crosspromoindex].name + ".mp4");
        _videoPlayer.url = Application.persistentDataPath + "/"+ _currentCrossPromoAsset.appname + _currentCrossPromoAsset.appvideourl[crosspromoindex].name + ".mp4";
          _gameName.text = _currentCrossPromoAsset.appname;
        _container.SetActive(true);
        _videoPlayer.Prepare();
    }

    private IEnumerator PlayNextVideo()
    {
        while (!DidLoad)
        {
            yield return null;
        }
        //if (!SupersonicWisdom.HasCrossPromo(Format))
        //{
        //    Hide();
        //    yield break;
        //}
       // StartCoroutine(SuperStarSdk.StartInitialDownload(Format));

        while (!isActiveAndEnabled)
        {
            yield return null;
        }
        if (isActiveAndEnabled)
        {
            yield return StartCoroutine(LoadNextVideo());
        }
        if (isActiveAndEnabled)
        {
            Play();
        }
    }
    IEnumerator LoadNextVideo()
    {
        //if (SuperStarSdk.HasCrossPromo(Format))
        //{
        //    if (_videoPlayer != null)
        //    {
        //        if (_videoPlayer.isPlaying)
        //        {
        //            yield break;
        //        }
        //    }

        //    SuperStarSdk.SwCrossPromoAsset currentAsset;
        //    do
        //    {
        //        currentAsset = SuperStarSdk.GetNextCrossPromoAsset(Format);
        //        if (!isActiveAndEnabled)
        //        {
        //            yield break;
        //        }
        //        if (currentAsset == null)
        //        {
                   yield return null;
        //        }
        //    } while (currentAsset == null);
        //    _currentCrossPromoAsset = currentAsset;
        //    _videoPlayer.url = currentAsset.cachePath;
        //    _gameName.text = currentAsset.name;
        //}
    }

    private void Play()
    {
        if (_videoPlayer != null)
        {
            if (String.IsNullOrEmpty(_videoPlayer.url) || _videoPlayer.isPlaying)
            {
                return;
            }

            if (!_videoPlayer.isPrepared)
            {
                _videoPlayer.Prepare();
            }
        }

    }

    private void OnDestroy()
    {
       
        _containerButton.onClick.RemoveAllListeners();
        _containerButton.onClick.RemoveAllListeners();
        _playButton.onClick.RemoveAllListeners();
    }
}
