//using System.Collections;
//using System.Collections.Generic;
//using TMPro;
//using UnityEngine;
//using DG.Tweening;

//public class VFXManager : MonoBehaviour
//{
//    public static VFXManager Instance;

//    private void Awake()
//    {
//        if (Instance == null)
//        {
//            Instance = this;
//        }
//    }

//    [SerializeField]
//    // private GameObject coinParticleGameplAy;
//    public GameObject Gameplay, GameWin;
//    int CoinAdd = 0;

//    #region STAR ADD
//    public void GameCompleteAddCoin(int coin, Vector3 StartPos) // Star add
//    {

//#if !UNITY_EDITOR
//            //IronSourceAnalytics.updateProgress(ISAnalyticsProgressState.COMPLETE, "Level_" + (GameManager.instanse.CurrentLvl - 1), null, null, coin);
//#endif
//        // coinParticleGameplAy = GameWin;

//        GameObject go = Instantiate(GameWin);
//        int maxparticle;
//        if (coin > 10 && coin <= 100)//&& coin % 5 == 0)
//        {
//            //  Debug.LogError("111");
//            maxparticle = (coin / 5) + 4;
//        }
//        else if (coin > 100 && coin <= 200)// && coin % 10 == 0)
//        {
//            //  Debug.LogError("222");
//            maxparticle = (coin / 10) + 4;
//        }
//        else if (coin > 200 && coin <= 1000)// && coin % 50 == 0)
//        {
//            maxparticle = (coin / 50) + 4;
//        }
//        else
//        {
//            maxparticle = coin;
//        }
//        go.GetComponent<VFXCoinGamePlayAttacker>().MaxParticles = maxparticle;
//        go.GetComponent<VFXCoinGamePlayAttacker>().SpawnReward(maxparticle, StartPos);

//        go.SetActive(true);
//        Destroy(go, 3f);
//        Earn = 0;
//        StartCoroutine(DelayCoinAdded(coin, 0.5f));
//    }

//    public int lastTotalCoinCount;
//    public int Earn;
//    public IEnumerator DelayCoinAdded(int coin, float time)
//    {
//        int mulwithCoin = 0;
//        float tempcoin = 0;
//        int addcoin = 0;

//        if (coin > 10 && coin <= 100)//&& coin % 5 == 0)
//        {
//            tempcoin = coin / 5;
//            mulwithCoin = 5;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin > 100 && coin <= 200)// && coin % 10 == 0)
//        {
//            tempcoin = coin / 10;
//            mulwithCoin = 10;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin > 200 && coin <= 1000)// && coin % 50 == 0)
//        {
//            tempcoin = coin / 50;
//            mulwithCoin = 50;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin > 1000 && coin <= 2000)// && coin % 100 == 0)
//        {
//            tempcoin = coin / 100;
//            mulwithCoin = 100;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin > 2000 && coin <= 5000 && coin % 500 == 0)
//        {
//            tempcoin = coin / 500;
//            mulwithCoin = 500;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin > 5000 && coin <= 10000)//&& coin % 1000 == 0)
//        {
//            tempcoin = coin / 1000;
//            mulwithCoin = 1000;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin > 10000 && coin <= 20000)//&& coin % 1500 == 0)
//        {
//            tempcoin = coin / 1500;
//            mulwithCoin = 1500;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else
//        {
//            addcoin = coin;
//            mulwithCoin = 1;
//        }

//        yield return new WaitForSeconds(time);
//        // Debug.LogError(addcoin + "AddCoin");
//        if (CoinAdd < addcoin)
//        {
//            CoinAdd += 1;
//            Earn += mulwithCoin;

//            if (coin - CoinAdd > 2)
//            {
//                //SoundManager.Instance.SoundManage(SoundManager.Instance.Coin_Collect);
//            }
//            //GameManager.instanse.STAR += mulwithCoin;
//            //GameManager.instanse.StartText.text = GameManager.instanse.STAR.ToString();

//            StartCoroutine(DelayCoinAdded(coin, 0.15f));
//        }
//        else
//        {
//            int totalcointoadd = (lastTotalCoinCount + coin);
//            if (Earn != totalcointoadd)
//            {
//                int diff = (totalcointoadd - Earn);

//                //GameManager.instanse.STAR += diff;
//                //GameManager.instanse.StartText.text = GameManager.instanse.STAR.ToString();
//            }
//            StopCoroutine("DelayCoinAdded");
//            Invoke("SuccessCoinAdd", 0.4f);
//            CoinAdd = 0;
//        }
//    }
//    #endregion
//    #region  GamePlay Star
//    int CoinAdd1 = 0;
//    public void GamePlayCoinAdd(int coin, Vector3 StartPos, int star)
//    {
//        Earn = 0;
//        GameObject go = Instantiate(Gameplay);
//        go.GetComponent<VFXCoinGamePlayAttacker>().MaxParticles = star;
//        go.GetComponent<VFXCoinGamePlayAttacker>().SpawnReward(coin, StartPos);

//        go.SetActive(true);
//        Destroy(go, 3f);
//        CoinAdd1 = 0;
//        StartCoroutine(GameplayDelayCoinAdded(coin, 0.5f));
//    }

//    public IEnumerator GameplayDelayCoinAdded(int coin, float time)
//    {
//        GameManager.instanse.LevelStar += coin;
//        GameManager.instanse.gameplayStartText.transform.localScale = Vector3.one;
//        GameManager.instanse.gameplayStartText.transform.DOPunchScale(Vector3.one, .2f);
//        GameManager.instanse.gameplayStartText.text = GameManager.instanse.LevelStar.ToString();

//        Debug.Log("Done Lvl" + GameManager.instanse.islvldone);

//        Debug.Log(GameManager.instanse.MatchCount + " " + GameManager.instanse.NoOfMatches);
//        // if (GameManager.instanse.MatchCount == (GameManager.instanse.LevelObjList.Count)) //Level[CurrentLvl]._LvlData.Toys
//        if (GameManager.instanse.MatchCount == GameManager.instanse.NoOfMatches)
//        {
//            Debug.Log("Enter2");
//            GameManager.instanse.islvldone = true;
//        }
//        if (GameManager.instanse.isSpecialObj)
//        {
//            Debug.LogError("0");
//            GameManager.instanse.OnSpecialObjectChest();
//            StopCoroutine("GameplayDelayCoinAdded");
//        }
//        else if (GameManager.instanse.isSpecialKeyObj)
//        {
//            Debug.LogError("1");
//            GameManager.instanse.OnSpecialObjectKey();
//            StopCoroutine("GameplayDelayCoinAdded");
//        }
//        else if (GameManager.instanse.islvldone)
//        {
//            Debug.LogError("2");
//            GameManager.instanse.islvldone = false;

//            StopCoroutine("GameplayDelayCoinAdded");

//            yield return new WaitForSeconds(0f);

//            Debug.Log("call frome here" + GameManager.instanse.islvldone);

//            Debug.Log("Current Level : " + GameManager.instanse.CurrentLvl);

//            if (GameManager.instanse.CurrentLvl != 0)
//                StartCoroutine(GameManager.instanse.GameComplete(0.6f));
//            else
//            {
//                GameManager.instanse.CurrentLvl++;
//                GameManager.instanse.TUTORIAL = 1;

//                GameManager.instanse.Start_Game();

//                GameManager.instanse.Mainscreenpanel.SetActive(true);
//                GameManager.instanse.Gameplaypanel.SetActive(false);
//                GameManager.instanse.GameplaypanelUI.SetActive(false);
//            }
//        }
//    }
//    #endregion

//    void DelayCall()
//    {

//    }

//    public void SuccessCoinAdd()
//    {
//        //if (GameManager.instanse.isStarAddOnTotalSoundPlay)
//        //{
//        //    GameManager.instanse.isStarAddOnTotalSoundPlay = false;
//        //}
//        //GameManager.instanse.onSuccessFullAdshowPlayNext();
//    }
//    #region // Coin Animation
//    [Space]
//    [Header("Reward Coin Add")]
//    public GameObject CoinPrefeb;
//    public void RewardCoin(int coin, Vector3 StartPos, string PlaySoundClipName)
//    {
//        if (!string.IsNullOrEmpty(PlaySoundClipName))
//        {
//            SoundManager._soundmanager.SoundManage(PlaySoundClipName);
//        }
//        else
//        {
//            SoundManager._soundmanager.SoundManage("RewardCoinSound");
//        }
//        Earn = 0;
//        int maxparticle;
//        GameObject go = Instantiate(CoinPrefeb);
//        if (coin > 10 && coin < 50)//&& coin % 5 == 0)
//        {
//            maxparticle = (coin / 10);
//        }
//        else if (coin >= 50 && coin <= 100)//&& coin % 5 == 0)
//        {
//            maxparticle = (coin / 20);
//        }
//        else if (coin > 100 && coin <= 400)// && coin % 10 == 0)
//        {

//            maxparticle = (coin / 50);
//        }
//        else if (coin > 400 && coin <= 1000)// && coin % 50 == 0)
//        {
//            maxparticle = (coin / 200);
//        }
//        else
//        {
//            maxparticle = coin;
//        }
//        go.GetComponent<VFXCoinGamePlayAttacker>().MaxParticles = maxparticle;
//        go.GetComponent<VFXCoinGamePlayAttacker>().SpawnReward(maxparticle, StartPos);

//        go.SetActive(true);
//        Destroy(go, 3f);
//        StartCoroutine(DelayRewardCoinAdded(coin, 0.15f));
//    }
//    public IEnumerator DelayRewardCoinAdded(int coin, float time)
//    {
//        int mulwithCoin = 0;
//        float tempcoin = 0;
//        int addcoin = 0;
//        if (coin > 10 && coin < 50)//&& coin % 5 == 0)
//        {
//            // Debug.LogError("111");
//            tempcoin = coin / 10;
//            mulwithCoin = 10;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin >= 50 && coin <= 100)//&& coin % 5 == 0)
//        {
//            // Debug.LogError("111");
//            tempcoin = coin / 20;
//            mulwithCoin = 20;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin > 100 && coin <= 400)// && coin % 10 == 0)
//        {
//            //  Debug.LogError("222");
//            tempcoin = coin / 50;
//            mulwithCoin = 50;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else if (coin > 400 && coin <= 1000)// && coin % 50 == 0)
//        {
//            tempcoin = coin / 200;
//            mulwithCoin = 200;
//            addcoin = Mathf.RoundToInt(tempcoin);
//        }
//        else
//        {
//            addcoin = coin;
//            mulwithCoin = 1;
//        }

//        yield return new WaitForSeconds(0.15f);

//        if (CoinAdd < addcoin)
//        {
//            CoinAdd += 1;
//            Earn += mulwithCoin;

//            if (coin - CoinAdd > 2)
//            {
//                //SoundManager.Instance.SoundManage(SoundManager.Instance.Coin_Collect);
//            }

//            GameManager.instanse.COIN += mulwithCoin;
//            GameManager.instanse.CoinTxt.text = GameManager.instanse.COIN.ToString();

//            StartCoroutine(DelayRewardCoinAdded(coin, 0.15f));
//        }
//        else
//        {
//            int totalcointoadd = (lastTotalCoinCount + coin);
//            if (Earn != totalcointoadd)
//            {
//                int diff = (totalcointoadd - Earn);

//                GameManager.instanse.COIN += diff;
//                GameManager.instanse.CoinTxt.text = GameManager.instanse.COIN.ToString();
//            }
//            StopCoroutine("DelayRewardCoinAdded");

//            GameManager.instanse.SuccessCoinRewarded();//...........................................

//            CoinAdd = 0;
//        }
//    }
//    #endregion
//}