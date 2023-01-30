using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameAnalyticsSDK;
public class SSEventManager : MonoBehaviour
{
    public static SSEventManager Instance;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }
    private void Start()
    {
        GameAnalytics.Initialize();
        GameAnalyticsILRD.SubscribeIronSourceImpressions();
    }

    public void SSGameStarEventCall(int CurrentLevelIndex)
    {
        GameAnalytics.NewProgressionEvent(GAProgressionStatus.Start, CurrentLevelIndex + "Level_Start"); // without score
    }


    public void SSGameWinEventCall(int CurrentLevelIndex)
    {
        GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, CurrentLevelIndex + "Level_Complete");
    }

    public void SSGameOverEventCall(int CurrentLevelIndex)
    {
        GameAnalytics.NewProgressionEvent(GAProgressionStatus.Fail, CurrentLevelIndex + "Level_Fail");
    }


    public void SSOnPressCrossPromoBox(string gamename,string os)
    {
        Dictionary<string, object> fields = new Dictionary<string, object>();
        fields.Add("gamename", gamename);
        fields.Add("os", os);
       // fields.Add("test_2", "hello_world");

        GameAnalytics.NewDesignEvent("OnPressCrossPromoBox");
    }

    public void SSOnPressCrossPromoCollection(string gamename, string os)
    {
        Dictionary<string, object> fields = new Dictionary<string, object>();
        fields.Add("gamename", gamename);
        fields.Add("os", os);
       // fields.Add("test_2", "hello_world");

        GameAnalytics.NewDesignEvent("OnPressCrossPromoCollection", fields);
    }
}
