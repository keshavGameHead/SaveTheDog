using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SuperStarSdk;
using System;

public class GameController : MonoBehaviour
{
    [HideInInspector]
    public Level currentLevel;

    [HideInInspector]
    public int levelIndex;

    public int maxLevel;

    public static GameController instance;

    public GameObject drawManager;

    public UIManager uiManager;

    public GameObject testLevel;

    public enum STATE
    {
        DRAWING,
        PLAYING,
        FINISH,
        GAMEOVER
    }

    public STATE currentState;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        currentState = STATE.DRAWING;
        levelIndex = GetCurrentLevelIndex();
        CreateLevel();
        Application.targetFrameRate = 60;
    }

    public int GetCurrentLevelIndex()
    {
        if (HomeManager.Instance.LoveMode)
        {
            return PlayerPrefs.GetInt("LoveCurrentLevel", 1);
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            return PlayerPrefs.GetInt("MonsterCurrentLevel", 1);
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            return PlayerPrefs.GetInt("SpiderCurrentLevel", 1);
        }
        else
        {
            return PlayerPrefs.GetInt("CurrentLevel", 1);
        }
    }

    public int GetUnlockLevelIndex()
    {
        if (HomeManager.Instance.LoveMode)
        {
            return levelIndex = PlayerPrefs.GetInt("LoveUnlockLevel", 1);
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            return levelIndex = PlayerPrefs.GetInt("MonsterUnlockLevel", 1);
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            return levelIndex = PlayerPrefs.GetInt("SpiderUnlockLevel", 1);
        }
        else
        {
            return levelIndex = PlayerPrefs.GetInt("UnlockLevel", 1);
        }
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    //void Update()
    //{
    //    if (Input.GetMouseButtonUp(0) && currentState == STATE.DRAWING)
    //    {
           
    //    }
           
    //}

    public void ActivateGame() 
    {
        currentState = STATE.PLAYING;
        ActiveDog();
        uiManager.ActiveClock();
    }

    void ActiveDog()
    {
        for(int i = 0; i < currentLevel.dogList.Count; i++)
        {
            if (!currentLevel.dogList[i].CompareTag("Monster"))
            {
                currentLevel.dogList[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
            }
        }
    }

    void CreateLevel()
    {
        if(levelIndex > maxLevel)
        {
            Debug.LogError("New Repeat level");
            levelIndex = UnityEngine.Random.Range(1,maxLevel);
        }
        
        GameObject levelObj = GetLevelObj();
        //GameObject levelObj = Instantiate(testLevel);
        currentLevel = levelObj.GetComponent<Level>();
    }

    private GameObject GetLevelObj()
    {
        if (HomeManager.Instance.LoveMode)
        {
            return Instantiate(Resources.Load("LoveMode/Level" + (levelIndex).ToString())) as GameObject;
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            return Instantiate(Resources.Load("MonsterMode/Level" + (levelIndex).ToString())) as GameObject;
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            return Instantiate(Resources.Load("SpiderMode/Level" + (levelIndex).ToString())) as GameObject;
        }
        else
        {
            return Instantiate(Resources.Load("Levels/Level" + (levelIndex).ToString())) as GameObject;
        }
    }
}
