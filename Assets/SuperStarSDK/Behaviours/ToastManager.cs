//using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToastManager : MonoBehaviour
{

    public static ToastManager Instance;
    public Vector2 DestinationPos= new Vector2(0,300);


    private void Awake()
    {
        if (Instance==null)
        {
            Instance = this;
        }

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.T))
        {
            ShowNoInternetToast();
        }
    }
    // Start is called before the first frame update
    public void ShowNoInternetToast()
    {
        ShowTost("Please check Your Connection");
    }
    public void ShowDataLoading()
    {
        ShowTost("Data is Loading...");
    }
    public GameObject tostObject;
    public Transform tostParent;
    public void ShowTost(string data)
    {

        GameObject tost = Instantiate(tostObject, tostParent);
        tost.GetComponent<RectTransform>().anchoredPosition = DestinationPos;
        //tost.GetComponent<RectTransform>().DOAnchorPos(new Vector2(0, 300), 0.3f);
        tost.GetComponentInChildren<Text>().text = data;
        Destroy(tost, 1f);

    }
}
