using SuperStarSdk;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class SSBannerCollection : MonoBehaviour
{

    private const string PlayStoreUrl = "https://play.google.com/store/apps/details?id={0}";
    private const string AppStoreUrl = "https://itunes.apple.com/app/apple-store/id{0}";


    public int MaxBannerLoad = 5;
    private List<SSCrossPromoAsset> _currentCrossPromoAsset = new List<SSCrossPromoAsset>();
    public GameObject BannerPrefab;
    public Transform BannerParent;
    public GameObject AllGamesScreenObject;
    public bool isDataLaoded = false;

    private void OnEnable()
    {
       // BannerParent.gameObject.SetActive(false);
        SuperStarSdkManager.OnDataArrive += BannerColectionDataAarrived;
        BannerColectionDataAarrived();





    }

    public void ShowMoreApps()
    {
        if (isDataLaoded)
        {
            AllGamesScreenObject.SetActive(true);
        }

    }

    public void TurnOffMoreApps() {
        AllGamesScreenObject.SetActive(false);
    }



    public void OnClickEvent(int index)
    {
        if (_currentCrossPromoAsset != null)
        {
#if UNITY_ANDROID
            Application.OpenURL(_currentCrossPromoAsset[index].Aappstoreid);
            SSEventManager.Instance.SSOnPressCrossPromoCollection(_currentCrossPromoAsset[index].appname,"Android");
#elif  UNITY_IOS
                Application.OpenURL(_currentCrossPromoAsset[index].Iappstoreid);
            SSEventManager.Instance.SSOnPressCrossPromoCollection(_currentCrossPromoAsset[index].appname,"IOS");
#endif
        }
    }

    public List<int> RandomAndUniqueIndexList = new List<int>();
    public int GiveMeRandomAndUniqueIndex() {


        int ind = UnityEngine.Random.Range(0, _currentCrossPromoAsset.Count);

        if (!RandomAndUniqueIndexList.Contains(ind))
        {
            RandomAndUniqueIndexList.Add(ind);
            return ind;
        }
        else
        {
            return GiveMeRandomAndUniqueIndex();
        }
        return 0;
    }


    public void BannerColectionDataAarrived()
    {
        AllGamesScreenObject.SetActive(false);
        RandomAndUniqueIndexList.Clear();
        //SuperStarSdkManager.OnDataArrive += BannerColectionDataAarrived;
        if (SuperStarSdkManager.Instance.isCrossPromoDataArrived)
        {

            List<Transform> childtrans = new List<Transform>();
            _currentCrossPromoAsset.Clear();
            for (int i = 1; i < BannerParent.childCount; i++)
            {
                childtrans.Add(BannerParent.GetChild(i));
            }


            for (int i = 0; i < childtrans.Count; i++)
            {
                Destroy(childtrans[i].gameObject);
            }

            for (int i = 0; i < SuperStarSdkManager.Instance.crossPromoAssetsRoot.data.Count; i++)
            {
                if (SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i].appiconurl.isDownloaded)
                {
                    _currentCrossPromoAsset.Add(SuperStarSdkManager.Instance.crossPromoAssetsRoot.data[i]);
                }
            }

            if (_currentCrossPromoAsset.Count > MaxBannerLoad)
            {
                for (int i = 0; i < _currentCrossPromoAsset.Count; i++)
                {

                    if (i >= MaxBannerLoad)
                    {
                        break;
                    }
                    int indexRandom= GiveMeRandomAndUniqueIndex();
                    GameObject b = Instantiate(BannerPrefab, BannerParent);
                    SSBannerDetails bdata = b.GetComponent<SSBannerDetails>();
                    bdata.gameNameText.text = _currentCrossPromoAsset[indexRandom].appname;
                 //   bdata.gameDescriptionText.text = _currentCrossPromoAsset[indexRandom].appdescription;
                //    bdata.gameDownloadsText.text = _currentCrossPromoAsset[indexRandom].appdownloads;
                    bdata.image.texture = GetTexture(Application.persistentDataPath + "/" + _currentCrossPromoAsset[indexRandom].appname + _currentCrossPromoAsset[indexRandom].appiconurl.name + ".jpg"); ;
                    int index = indexRandom;
                    bdata.PlayButton.onClick.AddListener(() => { OnClickEvent(index); });
                    bdata.BannerButton.onClick.AddListener(() => { OnClickEvent(index); });
                }
            }
            else
            {
                for (int i = 0; i < _currentCrossPromoAsset.Count; i++)
                {

                    if (i >= MaxBannerLoad)
                    {
                        break;
                    }
                    GameObject b = Instantiate(BannerPrefab, BannerParent);
                    SSBannerDetails bdata = b.GetComponent<SSBannerDetails>();
                    bdata.gameNameText.text = _currentCrossPromoAsset[i].appname;
                  //  bdata.gameDescriptionText.text = _currentCrossPromoAsset[i].appdescription;
                   // bdata.gameDownloadsText.text = _currentCrossPromoAsset[i].appdownloads;
                    bdata.image.texture = GetTexture(Application.persistentDataPath + "/" + _currentCrossPromoAsset[i].appname + _currentCrossPromoAsset[i].appiconurl.name + ".jpg"); ;
                    int index = i;
                    bdata.PlayButton.onClick.AddListener(() => { OnClickEvent(index); });
                    bdata.BannerButton.onClick.AddListener(() => { OnClickEvent(index); });
                }
            }

            

            if (_currentCrossPromoAsset.Count > 0)
            {
                //BannerParent.gameObject.SetActive(true);
                isDataLaoded = true;

            }
        }


      

      

    }

    public Texture2D GetTexture(string path)
    {
        //string finalPath =  path ;

        byte[] pngBytes = File.ReadAllBytes(path);
        Texture2D tex = new Texture2D(2, 2);
        tex.LoadImage(pngBytes);
        tex.wrapMode = TextureWrapMode.Repeat;
        tex.filterMode = FilterMode.Bilinear;
        // allTextureLoadedList.Add(tex);
        return tex;
    }

    private void OnDisable()
    {
        SuperStarSdkManager.OnDataArrive -= BannerColectionDataAarrived;
    }

    public void StartPanel() {

        //for (int i = 0; i < length; i++)
        //{

        //}
    }

    public void closePanel() {

    }
    
}
