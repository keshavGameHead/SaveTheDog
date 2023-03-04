using SuperStarSdk;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectionTester : MonoBehaviour
{
    private string INTERNET_TEST_PING_IP = "www.google.com";
    private float INTERNET_TEST_PING_TIME_MAX = 5f;

    private static ConnectionTester instance;

    public static ConnectionTester GetInstance(GameObject go)
    {
        if (instance == null)
        {
            instance = go.AddComponent<ConnectionTester>();
        }
        return instance;
    }

    /// <summary>
    /// Ip to test the connection.
    /// Default value is 'www.google.com'.
    /// </summary>
    /// <param name="ip">Ip to test the connection.</param>
    /// <returns>ConnectionTester instance</returns>
    public ConnectionTester ipToTest(string ip)
    {
        instance.INTERNET_TEST_PING_IP = ip;
        return instance;
    }

    /// <summary>
    /// Starts the internet connection test.
    /// </summary>
    /// <param name="callback">Callback action that will receive the test result. <value>true</value> if internet is available</param>
    public void TestInternet(Action<Boolean> callback)
    {
        StartCoroutine(CheckInternet(callback));
    }


    /// <summary>
    /// Checks if an internet connection is available, taking into consideration the current platform.
    /// Send the test result using <paramref name="callback"/>,
    /// <value>true</value> if internet is available.
    /// 
    /// Default test: <see cref="CheckInternetConnectionDefault"/>
    /// Android test: <see cref="AndroidInternetConnectionTester.IsInternetConnected"/>
    /// </summary>
    /// <param name="callback">Callback action that will receive the test result.</param>
    /// <returns></returns>
    protected IEnumerator CheckInternet(Action<Boolean> callback)
    {
        Debug.Log("CheckInternet");
        switch (Application.platform)
        {
            // Android
            case RuntimePlatform.Android:
            {
                Debug.Log("CheckInternet: Testing connection for Android.");
                bool internetIsAvailable = AndroidInternetConnectionTester.IsInternetConnected();
                Debug.Log($"CheckInternet: internet available: {internetIsAvailable}");
                callback(internetIsAvailable);
                break;
            }
            default:
            {
                Debug.Log("CheckInternet: default connection testing.");
                StartCoroutine(CheckInternetConnectionDefault(callback));
                break;
            }
        }

        yield break;
    }

    /// <summary>
    /// Default internet test.
    /// Test internet connection using Unity methods.
    /// - tested on Windows 10
    /// TODO: test if test works on iOS
    /// TODO: test if test works on Linux
    /// - it doesn't work on Android
    /// </summary>
    /// <param name="callback"></param>
    /// <returns></returns>
    private IEnumerator CheckInternetConnectionDefault(Action<Boolean> callback)
    {
        bool internetPossiblyAvailable;
        switch (Application.internetReachability)
        {
            case NetworkReachability.ReachableViaLocalAreaNetwork:
                Debug.Log("CheckInternet: NetworkReachability.ReachableViaLocalAreaNetwork");
                internetPossiblyAvailable = true;
                break;
            case NetworkReachability.ReachableViaCarrierDataNetwork:
                Debug.Log("CheckInternet: NetworkReachability.ReachableViaCarrierDataNetwork");
                //internetPossiblyAvailable = allowCarrierDataNetwork;
                internetPossiblyAvailable = true;
                break;
            case NetworkReachability.NotReachable:
                Debug.Log("CheckInternet: NetworkReachability.NotReachable");
                internetPossiblyAvailable = false;
                break;
            default:
                Debug.Log("CheckInternet: default");
                internetPossiblyAvailable = false;
                break;
        }

        if (!internetPossiblyAvailable)
        {
            Debug.Log("CheckInternet: internet not available");
            callback(false);
            yield break;
        }

        if (internetPossiblyAvailable)
        {
            Debug.LogError("Available ");
            callback(true);
        }
        else { 
            Debug.LogError("Not available ");
            callback(false);

        }
    }
}