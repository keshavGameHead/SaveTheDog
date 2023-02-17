using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Level : MonoBehaviour
{
    public static Level Instance;
    public int levelIndex;
    public bool isDarkBg = false;
    public GameObject guide;
    public List<Transform> dogList;
    public SpiderControl[] spider;
    public float maxDrawLimit;
    public bool isWater;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        if (spider != null)
        {
            for (int i = 0; i < spider.Length; i++)
            {
                spider[i].enabled = false;
            }
        }
        UIManager.Instance.guide = this.guide;
        if (isDarkBg)
        {
            UIManager.Instance.Bg.GetComponent<SpriteRenderer>().color = new Color32(85, 85, 85, 255);
        }
        else
        {
            UIManager.Instance.Bg.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            if(GameController.instance.levelIndex == 0)
            {
                guide.SetActive(false);
            }
        }
        
    }


}
