using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InternetCheckingManager : MonoBehaviour
{
    public static InternetCheckingManager Instance;
    public ConnectionTester _connectionTester;
    public bool isinternetavailable;
    public GameObject NoInternetPopUp;
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
        _connectionTester = ConnectionTester
           .GetInstance(gameObject)
           .ipToTest("www.google.com");


        InternetCheckInvoke();
    }

    public void InternetCheckInvoke()
    {

        _connectionTester.TestInternet((test) =>
        {
            if (test)
            {
                isinternetavailable = true;
                Debug.Log("disable popup");
                Debug.Log("Internet Availables");
                NoInternetPopUp.SetActive(false);
                Invoke("InternetCheckInvoke", 10);

            }
            else
            {
                isinternetavailable = false;
                Debug.Log("Show popup");
                NoInternetPopUp.SetActive(true);
                Invoke("InternetCheckInvoke", 5);
            }

        });
    }
}