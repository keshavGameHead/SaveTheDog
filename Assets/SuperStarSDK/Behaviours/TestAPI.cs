using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class TestAPI : MonoBehaviour
{

    private void Start()
    {
        StartCoroutine(IEApiCall());
    }
    public string ServerURL = "https://hexeros.com/dev/panja/public/api/v1/get_device";
    public string push_token = "fDzYs-8kTN6fFW_F2YiGQD:APA91bE1xiKWQUQ_tpKFNCVRwLj77ELinaYZLLup03c2-Itu_sadNN25QV3OizOopTCRF_bnBqMPxKLGfDwKnXPHJb6JHEZBlbC7AZRIMLgpvdieUup-hSCucsb3bZq6faaVxs3G3EMH";
    //API MAnage
    public IEnumerator IEApiCall()
    {
        WWWForm form = new WWWForm();

        form.AddField("device_id", SystemInfo.deviceUniqueIdentifier);
        form.AddField("device_type", "android");
        form.AddField("lang", "en");
        form.AddField("push_token", push_token);

        UnityWebRequest www = UnityWebRequest.Post(ServerURL, form);//APImainURL
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.LogError(www.error);
            Debug.LogError("USer Craetion failed : " + www.downloadHandler.text);
        }
        else
        {

            string data = www.downloadHandler.text;
            Debug.LogError("data " + data);

        }
    }
}
