using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InternetCheckingManager : MonoBehaviour
{
    public static InternetCheckingManager Instance;
    public GameObject popupPanel;
    float time;
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
        CheckPanel();
    }

    private void Update()
    {
        time -= Time.deltaTime;

        if (time < 0)
        {
            time = 3;
            CheckPanel();
        }
    }

    public void CheckPanel()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            popupPanel.SetActive(true);
        }
        else
        {
            popupPanel.SetActive(false);
        }
    }

    public void CloseBtn()
    {
        popupPanel.SetActive(false);
        time = 3;
    }
}