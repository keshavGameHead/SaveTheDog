//using System;
//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.Networking;

//namespace SuperStarSdk.CrossPromo
//{
//    public class CrossPromoAPI : MonoBehaviour
//    {
//        private bool _isRetrievingInfo;
//        private int _retries;
//        private CoroutineQueue _queueDownload;

//#if UNITY_ANDROID
//        private const string os = "android";
//#else
//        private const string os = "ios";
//#endif

//        private void Awake()
//        {
//            _isRetrievingInfo = false;
//            _retries = 1;
//            _queueDownload = new CoroutineQueue(this);
//            DontDestroyOnLoad(gameObject);
//        }

//        public void GetGameInfoAndDownload()
//        {
//            SSCrossPromoMain.CrossPromoIsReady = false;
//            StartCoroutine(StartGetGameInfoAndDownload());
//        }

//        public void BufferVideosInCache()
//        {
//            _queueDownload.EnqueueAction(DownloadNextFiles(VoodooCrossPromo.Info.Waterfall.Count));
//        }

//        public bool IsRetrievingInfo() => _isRetrievingInfo;

//        private IEnumerator StartGetGameInfoAndDownload()
//        {
//            _isRetrievingInfo = true;
//            yield return StartGetGameInfo();
//            yield return DownloadFiles();
//            _isRetrievingInfo = false;
//        }

//        private IEnumerator StartGetGameInfo()
//        {
//            UnityWebRequest webRequest = GetGameInfo(CreateGameInfoParameters());

//            float startTime = Time.time;
//            yield return webRequest.SendWebRequest();
//            float time = Time.time - startTime;
//            bool hasTimeout = time >= webRequest.timeout;

//            if (webRequest.isNetworkError || webRequest.isHttpError)
//            {
//                VoodooCrossPromo.Info.HasInternet = !webRequest.isNetworkError;
//                VoodooLog.LogWarning(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG,
//                    $"Failed to retrieve game information for cross promotion {webRequest.responseCode} {webRequest.error}");
//                if (webRequest.responseCode != 404)
//                    StartCoroutine(Retry());
//                yield break;
//            }

//            _retries = 1;
//            VoodooCrossPromo.Info.HasInternet = true;
//            try
//            {
//                if (!string.IsNullOrEmpty(webRequest.downloadHandler.text))
//                    VoodooCrossPromo.Info.CurrentGame =
//                        JsonUtility.FromJson<GameModel>(webRequest.downloadHandler.text);
//                else
//                    VoodooLog.LogError(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG, "JSON Empty");
//            }
//            catch (Exception e)
//            {
//                VoodooLog.LogError(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG, e.ToString());
//                VoodooCrossPromo.Info.CurrentGame = null;
//            }

//            var httpResponse = webRequest.responseCode.ToString();
//            var gamesPromoted = "";
//            if (VoodooCrossPromo.Info.CurrentGame != null)
//            {
//                gamesPromoted = VoodooCrossPromo.Info.CurrentGame.GetPromotedAssetsNames();

//                string strategyId = VoodooCrossPromo.Info.CurrentGame.strategy_id;
//                if (!string.IsNullOrEmpty(strategyId))
//                {
//                    VoodooAnalyticsManager.GlobalContext.Add(CP_SQUARE_STRATEGY_ID, strategyId, true);
//                }
//            }

//            AnalyticsManager.TrackCrossPromoInit(new CrossPromoInitInfo
//            {
//                DownloadTime = time,
//                GamesPromoted = gamesPromoted,
//                HasTimeout = hasTimeout,
//                HttpResponse = httpResponse,
//            });

//            VoodooCrossPromo.Info.FilterAssets();
//        }
//    private static IEnumerator DownloadFiles()
//    {
//        if (VoodooCrossPromo.Info.CurrentGame == null)
//        {
//            VoodooCrossPromo.Info.FillAssetsListFromCache();
//            if (!VoodooCrossPromo.Info.CrossPromoIsReady)
//                CrossPromoEvents.TriggerInitComplete(VoodooCrossPromo.Info.Format);
//            yield break;
//        }

//        CleanCache();
//        if (CacheManager.GetAllFilesFromCache().Length != 0 && !VoodooCrossPromo.Info.CrossPromoIsReady)
//            CrossPromoEvents.TriggerInitComplete(VoodooCrossPromo.Info.Format);
//        var filesDownloaded = 0;
//        var assets = new List<AssetModel>(VoodooCrossPromo.Info.Assets);
//        foreach (AssetModel asset in assets)
//        {
//            if (filesDownloaded == VoodooCrossPromo.Info.CurrentGame.first_time_videos_in_cache)
//                break;
//            filesDownloaded++;
//            PlayerPrefs.SetString(PlayerPrefsUtils.GetKey(asset.file_path), JsonUtility.ToJson(asset));
//            if (CacheManager.IsFileExist(asset.file_path)) continue;
//            var wwwFile = new WWW(asset.file_url);
//            yield return wwwFile;

//            if (wwwFile.error == null)
//            {
//                CacheManager.WriteFile(asset.file_path, wwwFile.bytes);
//                if (!VoodooCrossPromo.Info.CrossPromoIsReady)
//                    CrossPromoEvents.TriggerInitComplete(VoodooCrossPromo.Info.Format);
//            }
//            else
//                VoodooLog.LogWarning(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG, "Failed to download file in cache: " + wwwFile.error);
//        }

//        if (!VoodooCrossPromo.Info.CrossPromoIsReady)
//            CrossPromoEvents.TriggerInitComplete(VoodooCrossPromo.Info.Format);
//    }

//    private static void CleanCache()
//    {
//        try
//        {
//            foreach (string fileInCache in CacheManager.GetAllFilesFromCache())
//            {
//                var isExist = false;
//                foreach (AssetModel asset in VoodooCrossPromo.Info.Assets)
//                {
//                    if (CacheManager.CompareTwoFilesName(asset.file_path, fileInCache))
//                        isExist = true;
//                }

//                if (isExist) continue;
//                CacheManager.DeleteFile(fileInCache);
//                PlayerPrefs.DeleteKey(PlayerPrefsUtils.GetKey(fileInCache));
//            }
//        }
//        catch (Exception e)
//        {
//            VoodooLog.LogError(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG, e.ToString());
//        }
//    }
//    private IEnumerator DownloadNextFiles(int waterfallCount)
//    {
//        if (VoodooCrossPromo.Info.CurrentGame == null)
//            yield break;
//        yield return WaitFinishRetrievingInfo();
//        var i = 0;
//        var assets = new List<AssetModel>(VoodooCrossPromo.Info.Assets);
//        foreach (var asset in assets.Skip(waterfallCount))
//        {
//            if (i == VoodooCrossPromo.Info.CurrentGame.buffer_videos)
//                break;
//            i++;
//            if (CacheManager.IsFileExist(asset.file_path))
//                continue;
//            PlayerPrefs.SetString(PlayerPrefsUtils.GetKey(asset.file_path), JsonUtility.ToJson(asset));
//            if (CacheManager.IsFileExist(asset.file_path)) continue;
//            var wwwFile = new WWW(asset.file_url);
//            yield return wwwFile;

//            if (wwwFile.error == null)
//                CacheManager.WriteFile(asset.file_path, wwwFile.bytes);
//        }
//    }

//    private IEnumerator WaitFinishRetrievingInfo()
//    {
//        while (_isRetrievingInfo) yield return null;
//    }

//    private IEnumerator Retry()
//    {
//        if (_retries > 10)
//            yield break;
//        var waitInMilliseconds = (float)(Math.Pow(2, _retries) * 100);
//        _retries += 1;
//        yield return new WaitForSeconds(waitInMilliseconds * 0.001f);
//        yield return WaitFinishRetrievingInfo();
//        GetGameInfoAndDownload();
//    }

//    public void WaitForFirstFrame(Action action)
//    {
//        StartCoroutine(StartWaitForFirstFrame(action));
//    }

//    private static IEnumerator StartWaitForFirstFrame(Action action)
//    {
//        yield return null;
//        if (AFormatManager.Instance == null)
//            VoodooLog.LogWarning(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG, "No prefab found.");
//        else
//            action();
//    }

//    private GetGameInfoParameters CreateGameInfoParameters()
//    {
//        PrivacyCore privacy = VoodooSauceCore.GetPrivacy();
//        string advertisingId = privacy.GetAdvertisingId();

//        string waterfallGameList = VoodooCrossPromo.Configuration.GetGamesToShow();
//        string waterfallId = VoodooCrossPromo.Configuration.GetWaterfallId();

//        AnalyticsSessionManager sessionManager = AnalyticsSessionManager.Instance();

//        return new GetGameInfoParameters
//        {
//            bundleId = Application.identifier,
//            cpFormat = VoodooCrossPromo.Info.Format,
//            osType = os,
//            adId = advertisingId,
//            idfv = SystemInfo.deviceUniqueIdentifier,
//            waterfallId = waterfallId,
//            waterfallGameList = waterfallGameList,
//            userId = AnalyticsUserIdHelper.GetUserId(),
//            sessionId = sessionManager.SessionInfo.id,
//            sessionCount = sessionManager.SessionInfo.count,
//            appOpenCount = AnalyticsStorageHelper.Instance.GetAppLaunchCount(),
//            userGameCount = AnalyticsStorageHelper.Instance.GetGameCount(),
//            manufacturer = DeviceUtils.Manufacturer,
//            deviceModel = DeviceUtils.Model,
//            screenResolution = $"{Screen.width}x{Screen.height}",
//            appVersion = Application.version,
//            gameWinRatio = AnalyticsStorageHelper.Instance.GetWinRate().ToString("0.##", CultureInfo.CreateSpecificCulture("en-US")),
//        };
//    }

//    public static UnityWebRequest GetGameInfo(GetGameInfoParameters info)
//    {
//        var baseUrl = $"{CrossPromoSettings.BaseUrl}/sdk/game/";

//        var queryParams = new QueryParameters(baseUrl);
//        queryParams.Add("bundleId", info.bundleId);
//        queryParams.Add("cpFormat", info.cpFormat);
//        queryParams.Add("osType", info.osType);
//        queryParams.Add("idfv", info.idfv);
//        queryParams.Add("waterfallGameList", info.waterfallGameList);
//        queryParams.Add("waterfallId", info.waterfallId);
//        queryParams.Add("advertising_id", info.adId);

//        queryParams.Add("user_id", info.userId);
//        queryParams.Add("session_id", info.sessionId);
//        queryParams.Add("session_count", info.sessionCount);
//        queryParams.Add("app_open_count", info.appOpenCount);
//        queryParams.Add("user_game_count", info.userGameCount);
//        queryParams.Add("manufacturer", info.manufacturer);
//        queryParams.Add("model", info.deviceModel);
//        queryParams.Add("screen_resolution", info.screenResolution);
//        queryParams.Add("app_version", info.appVersion);
//        queryParams.Add("game_win_ratio", info.gameWinRatio);

//        if (MercuryTestModeManager.Instance.IsTestModeEnabled())
//        {
//            queryParams.Add("is_test_mode_active", 1);
//        }

//        string url = queryParams.GetFormattedUrl();

//        UnityWebRequest webRequest = UnityWebRequest.Get(url);
//        webRequest.timeout = 10;
//        webRequest.SetRequestHeader("Authorization", CrossPromoSettings.Token);
//        return webRequest;
//    }
//    }

//}
