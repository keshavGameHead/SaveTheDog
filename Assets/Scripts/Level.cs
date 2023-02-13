using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Level : MonoBehaviour
{
    public int levelIndex;
    public bool isDarkBg = false;
    public GameObject guide;
    public List<Transform> dogList;


    // Start is called before the first frame update
    void Start()
    {
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
