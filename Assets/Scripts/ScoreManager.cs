using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager : MonoBehaviour
{
    public GameObject timeBar;
    float _timeGetStarted;
    public float gameTime;
    // Start is called before the first frame update
    void Start()
    {
        _timeGetStarted = Time.timeScale;
    }

    // Update is called once per frame
    void Update()
    {
        //SetTimebarScale(1.0f - ((Time.timeScale - _timeGetStarted) / gameTime));
    }

    private void SetTimebarScale(float fullness)
    {
        fullness = fullness > 1 ? 1 : fullness < 0 ? 0 : fullness;

        RectTransform timerTransform = timeBar.transform.GetComponent(typeof(RectTransform)) as RectTransform;
        RectTransform timerParentTransform = timeBar.transform.parent.GetComponent(typeof(RectTransform)) as RectTransform;

        timerTransform.sizeDelta = new Vector2(timerParentTransform.rect.width * fullness, timerTransform.rect.height);
    }
}
