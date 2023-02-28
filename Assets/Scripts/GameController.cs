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
    public int loveMax;
    public int monsterMax;
    public int laserMax;
    public int teleportMax;

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
        else if (HomeManager.Instance.LaserMode)
        {
            return PlayerPrefs.GetInt("LaserCurrentLevel", 1);
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            return PlayerPrefs.GetInt("TeleCurrentLevel", 1);
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
            return PlayerPrefs.GetInt("LoveUnlockLevel", 1);
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            return PlayerPrefs.GetInt("MonsterUnlockLevel", 1);
        }
        else if (HomeManager.Instance.SpiderMode)
        {
            return PlayerPrefs.GetInt("SpiderUnlockLevel", 1);
        }
        else if (HomeManager.Instance.LaserMode)
        {
            return PlayerPrefs.GetInt("LaserUnlockLevel", 1);
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            return PlayerPrefs.GetInt("TeleUnlockLevel", 1);
        }
        else
        {
            return PlayerPrefs.GetInt("UnlockLevel", 1);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void ActivateGame() 
    {
        currentState = STATE.PLAYING;
        ActiveDog();
        uiManager.ActiveClock();
    }

    void ActiveDog()
    {
        for (int i = 0; i < currentLevel.dogList.Count; i++)
        {
            if (!currentLevel.dogList[i].CompareTag("Monster"))
            {
                currentLevel.dogList[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
            }
        }
        if (Level.Instance.BombMode)
        {
            Level.Instance.bombObj.rb.bodyType = RigidbodyType2D.Dynamic;
            Level.Instance.bombObj.isTimeStart = true;
        }
    }

    void CreateLevel()
    {
        GetMaxLevel();
        GameObject levelObj = GetLevelObj();
        //GameObject levelObj = Instantiate(testLevel);
        currentLevel = levelObj.GetComponent<Level>();  
    }

    private void GetMaxLevel()
    {
        if (HomeManager.Instance.LoveMode)
        {
            if (levelIndex > loveMax)
            {
                levelIndex = UnityEngine.Random.Range(1, loveMax);
            }
        }
        else if (HomeManager.Instance.MonsterMode)
        {
            if (levelIndex > monsterMax)
            {
                levelIndex = UnityEngine.Random.Range(1, monsterMax);
            }
        }
        else if (HomeManager.Instance.LaserMode)
        {
            if (levelIndex > laserMax)
            {
                levelIndex = UnityEngine.Random.Range(1, laserMax);
            }
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            if (levelIndex > teleportMax)
            {
                levelIndex = UnityEngine.Random.Range(1, teleportMax);
            }
        }
        else
        {
            if (levelIndex > maxLevel)
            {
                levelIndex = UnityEngine.Random.Range(1, maxLevel);
            }
        }
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
        else if (HomeManager.Instance.LaserMode)
        {
            return Instantiate(Resources.Load("LaserMode/Level" + (levelIndex).ToString())) as GameObject;
        }
        else if (HomeManager.Instance.TeleportMode)
        {
            return Instantiate(Resources.Load("TeleportMode/Level" + (levelIndex).ToString())) as GameObject;
        }
        else
        {
            return Instantiate(Resources.Load("Levels/Level" + (levelIndex).ToString())) as GameObject;
        }
    }
}
