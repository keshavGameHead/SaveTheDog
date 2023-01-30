using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_ANDROID
using Google.Play.Review;
#endif
public class Review : MonoBehaviour
{
    public static Review Instance;
#if UNITY_ANDROID
    ReviewManager _reviewManager;
    private PlayReviewInfo _playReviewInfo;
#endif
    public int EarlyReviewPopup
    {
        get
        {
            return PlayerPrefs.GetInt("EarlyReviewPopup", 0);
        }
        set
        {
            PlayerPrefs.SetInt("EarlyReviewPopup", value);
        }
    }

    // Start is called before the first frame update
    private void Awake()
    {
        if (Instance == null )
        {
            Instance = this;
        }
    }

    public void Rate()
    {
        StartCoroutine(RequestReview());
    }

    //private void Start()
    //{
    //    StartCoroutine(RequestReview());
    //}
    public IEnumerator RequestReview()
    {
#if UNITY_ANDROID
        if (EarlyReviewPopup == 0)
        {

            Debug.LogError("Review 0");
            _reviewManager = new ReviewManager();
            var requestFlowOperation = _reviewManager.RequestReviewFlow();
            yield return requestFlowOperation;
            if (requestFlowOperation.Error != ReviewErrorCode.NoError)
            {
                Debug.LogError(requestFlowOperation.Error);
                // Log error. For example, using requestFlowOperation.Error.ToString().
                yield break;
            }
            _playReviewInfo = requestFlowOperation.GetResult();

            var launchFlowOperation = _reviewManager.LaunchReviewFlow(_playReviewInfo);
            yield return launchFlowOperation;
            _playReviewInfo = null; // Reset the object
            if (launchFlowOperation.Error != ReviewErrorCode.NoError)
            {
                Debug.LogError(launchFlowOperation.Error);
                // Log error. For example, using requestFlowOperation.Error.ToString().
                yield break;
            }
            else
            {
            EarlyReviewPopup = 1;
            }
        }
      
#endif
        yield return new WaitForSeconds(0);
    }
}
