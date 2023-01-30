using UnityEngine;

namespace SuperStarSdk
{
    /// <summary>
    /// Using Android native methods to check for internet connectivity.
    /// Reference: https://developer.android.com/training/monitoring-device-state/connectivity-monitoring#java
    /// </summary>
    public class AndroidInternetConnectionTester : MonoBehaviour
    {
        private const string TAG = "AndroidInternetChecker";
        
        /// <summary>
        /// Test internet connection on Android platform. It uses native Android methods to do the tests,
        /// hence it won't work on any other platform.
        /// - tested on Android 16
        /// </summary>
        /// <returns></returns>
        public static bool IsInternetConnected()
        {
            Debug.Log("IsInternetConnected");
            AndroidJavaObject cm = GetConnectivityManager();
            if (cm != null)
            {
                Debug.Log("IsInternetConnected: got ConnectionManager");
                // getting network info
                // equivalent call on Android: NetworkInfo activeNetwork = cm.getActiveNetworkInfo();
                AndroidJavaObject activeNetwork = cm.Call<AndroidJavaObject>("getActiveNetworkInfo");
                bool isConnected = activeNetwork != null &&
                                   activeNetwork.Call<bool>("isConnectedOrConnecting");
                return isConnected;
            }
            else
            {
                Debug.Log("IsInternetConnected: couldn't get ConnectionManager. Cannot test for internet connectivity.'");
                return false;
            }
            
        }
        
        // See https://developer.android.com/reference/android/content/Context.html#CONNECTIVITY_SERVICE
        private const string CONNECTIVITY_SERVICE = "connectivity";

        private static AndroidJavaObject GetConnectivityManager()
        {
            Debug.Log("GetConnectivityManager");
            // retrieving android context
            AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject context = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            // getting ConnectivityManager.
            // equivalent call on Android: ConnectivityManager cm = (ConnectivityManager)context.getSystemService(Context.CONNECTIVITY_SERVICE);
            AndroidJavaObject cm = context.Call<AndroidJavaObject>(
                "getSystemService", CONNECTIVITY_SERVICE);
            return cm;
        }
    }
}