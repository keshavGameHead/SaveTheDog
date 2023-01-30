using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InternetCheckingManager : MonoBehaviour
{
    public static InternetCheckingManager Instance;
    public ConnectionTester _connectionTester;

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
    }
}