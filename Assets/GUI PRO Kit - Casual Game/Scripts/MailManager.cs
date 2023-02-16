using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using UnityEngine;
using UnityEngine.UI;

public class MailManager : MonoBehaviour
{

    // Start is called before the first frame update
    public string ReciverEmail = "keshavgamehead@gmail.com"; //"support@randomlogicgames.com";
    public string AppName = "Sort Block 3D";
    string TempSpace = "\n" +
       "\n" +
       "\n" +
       "\n" +
       "\n" +
       "\n" +
       "\n" +
       "\n" +
       "\n" +
       "\n";
    public static string FirbaseToken;
    public static string FirebasToken
    {
        get
        {
            return PlayerPrefs.GetString("FirebasToken", "");
        }
        set
        {
            PlayerPrefs.SetString("FirebasToken", value);
        }
    }
    private void Start()
    {
       
    }

    public void OnShareViaGmail()
    {
      //  body = MyEscapeURL(body);
        string SubjectData =(AppName); ;
        String BodyData = CreateBody();
#if UNITY_ANDROID
        Application.OpenURL("mailto:" + ReciverEmail + "?subject=" + SubjectData + "&body=" + BodyData);
#else
        Application.OpenURL("googlegmail:///co?to=" + ReciverEmail + "&subject=" + SubjectData + "&body=" + BodyData);
#endif
    }

    private string MyEscapeURL(string appName)
    {
        throw new NotImplementedException();
    }

    public string CreateBody()
    {
#if UNITY_ANDROID
        return AppName + "-" + Application.platform + "-" + Application.version + TempSpace +
                "APP:" + AppName + "\n" +
                 "APPVER:" + Application.version + "\n" +
                  "OS:" + Application.platform + " " + SystemInfo.deviceModel + "\n" +
                 "DEVICE:" + SystemInfo.deviceName + "\n" +
                  "IP :" + GetLocalIPv4() + "\n" +
                    "DEVICE - UUID:" + SystemInfo.deviceUniqueIdentifier + "\n" +
                    "TIME UTC:" + DateTime.UtcNow + "\n" +
                   // "Firebase Instance ID:"  "\n" +
                   "Firebase Token:" + FirebasToken;
#else
    return AppName + "-" + Application.platform + "-" + Application.version +
        "APP:" + AppName;
#endif

    }
    public string GetLocalIPv4()
    {
        return Dns.GetHostEntry(Dns.GetHostName())
            .AddressList.First(
                f => f.AddressFamily == System.Net.Sockets.AddressFamily.InterNetwork)
            .ToString();
    }
}
