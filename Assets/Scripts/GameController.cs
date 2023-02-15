using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SuperStarSdk;

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
        levelIndex = PlayerPrefs.GetInt("CurrentLevel");
        CreateLevel();
        Application.targetFrameRate = 60;

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
            currentLevel.dogList[i].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
        }
    }

    void CreateLevel()
    {
        if(levelIndex >= maxLevel)
        {
            levelIndex = levelIndex - maxLevel;
        }
        GameObject levelObj = Instantiate(Resources.Load("Levels/Level" + (levelIndex + 1).ToString())) as GameObject;
        //GameObject levelObj = Instantiate(testLevel);
        currentLevel = levelObj.GetComponent<Level>();
    }
}
