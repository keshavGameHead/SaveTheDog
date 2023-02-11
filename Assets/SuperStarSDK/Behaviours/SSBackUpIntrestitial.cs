using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

namespace SuperStarSdk.CrossPromo
{
    public class SSBackUpIntrestitial : MonoBehaviour
    {
        private const string TAG = "BackupAdsCanvas";

        public SimpleVideoPlayer videoPlayer;
        public Button closeButton;
        public Text timerText;
        public GameObject endScreen;
        public RectTransform interstitialParent;
        public Text downloadText;

        [Header("Sound")]
        public Button muteButton;
        public Image muteImage;
        public Sprite soundOnIcon;
        public Sprite soundOffIcon;

        private Action _closeCallback;
        private float _delayBeforeShowingCloseButton = 5f;
        private float _startTime;
        private bool _delayElapsed;
        private Action<bool> _completeCallback;

        private UnityEngine.Canvas _canvas;
        private BackupAdsInfo _info;

        private void Awake()
        {
            _canvas = GetComponent<UnityEngine.Canvas>();
            DontDestroyOnLoad(gameObject);
        }

        private void OnEnable()
        {
            MakeSureAllCanvasAreBelowThisOne();
            closeButton.onClick.AddListener(OnCloseButtonClicked);
            muteButton.onClick.AddListener(OnMuteButtonClicked);
        }

        public void OnDisable()
        {
            closeButton.onClick.RemoveListener(OnCloseButtonClicked);
            muteButton.onClick.RemoveListener(OnMuteButtonClicked);
        }

        private void Update()
        {
            if (!_delayElapsed)
            {
                float elapsed = _delayBeforeShowingCloseButton - (Time.time - _startTime);
                if (elapsed > 0)
                {
                    timerText.text = $"{Mathf.CeilToInt(elapsed)}";
                }
                else
                {
                    DeactivateCloseButtonDelay();
                }
            }
        }

        public void PlayAd(BackupAdsInfo info, float duration, Action<bool> onComplete, Action onClose, Action onClicked)
        {
            _info = info;

            _completeCallback = onComplete;
            _closeCallback = onClose;
            videoPlayer.videoCompleted += OnVideoCompleted;
            videoPlayer.videoPrepared += AdjustDuration;
            videoPlayer.SetVideoClickedCallback(onClicked);

            downloadText.text = $"Download {info.gameName} now!";

            _delayBeforeShowingCloseButton = duration;

            ShowCanvas();
        }

        private void AdjustDuration(VideoPlayer player)
        {
            double videoDuration = player.length;
            if (_delayBeforeShowingCloseButton <= -1f ||
                _delayBeforeShowingCloseButton > videoDuration)
            {
                _delayBeforeShowingCloseButton = (float)videoDuration;
            }
           // VoodooLog.LogDebug(VoodooLog.Module.ADS, TAG, $"BackupAds closing time: {_delayBeforeShowingCloseButton}");
            ActivateCloseButtonDelay();
        }

        private void ShowCanvas()
        {
            endScreen.SetActive(false);
            gameObject.SetActive(true);
            StartVideo();
            StartCoroutine(AnimateShow());
        }

        private void HideCanvas()
        {
            StartCoroutine(AnimateHide());
        }

        private IEnumerator AnimateShow()
        {
            var duration = 0.2f;
            Vector2 sourcePosition = new Vector2(0f, -Screen.height);
            Vector2 targetPosition = new Vector2(0f, 0f);

            yield return Animate(sourcePosition, targetPosition, duration);
        }

        private IEnumerator AnimateHide()
        {
            var duration = 0.2f;
            Vector2 sourcePosition = new Vector2(0f, 0f);
            Vector2 targetPosition = new Vector2(0f, -Screen.height);

            yield return Animate(sourcePosition, targetPosition, duration);

            gameObject.SetActive(false);
        }

        private IEnumerator Animate(Vector2 sourcePosition, Vector2 targetPosition, float duration)
        {
            var time = 0f;

            interstitialParent.anchoredPosition = sourcePosition;
            while (time < duration)
            {
                yield return null;
                time += Time.deltaTime;
                float percent = time / duration;
                interstitialParent.anchoredPosition = Vector2.Lerp(sourcePosition, targetPosition, percent);
            }

            interstitialParent.anchoredPosition = targetPosition;
        }

        private void StartVideo()
        {
            if (_info.videoClip)
            {
             //   VoodooLog.LogDebug(VoodooLog.Module.CROSS_PROMO, TAG, $"Starting video from clip: {_info.videoClip}");
                videoPlayer.PlayVideo(_info.videoClip);
            }
            else if (!string.IsNullOrEmpty(_info.videoUrl))
            {
                //VoodooLog.LogDebug(VoodooLog.Module.CROSS_PROMO, TAG, $"Starting video from url: {_info.videoUrl}");
                videoPlayer.PlayVideo(_info.videoUrl);
            }
            else
            {
              //  VoodooLog.LogDebug(VoodooLog.Module.CROSS_PROMO, TAG, $"No clip or URL found.");
            }
        }

        private void OnVideoCompleted()
        {
            endScreen.SetActive(true);
        }

        private void ActivateCloseButtonDelay()
        {
            _delayElapsed = false;
            _startTime = Time.time;
            timerText.text = $"{_delayBeforeShowingCloseButton:0}";
            closeButton.gameObject.SetActive(false);
        }

        private void DeactivateCloseButtonDelay()
        {
            _delayElapsed = true;
            timerText.text = "";
            closeButton.gameObject.SetActive(true);
        }

        private void OnCloseButtonClicked()
        {
            _completeCallback?.Invoke(true);
            _completeCallback = null;
            _closeCallback?.Invoke();
            _closeCallback = null;
            HideCanvas();
        }

        private void OnMuteButtonClicked()
        {
            ToggleSound();
        }

        private void ToggleSound()
        {
            videoPlayer.ToggleSound();

            bool newSoundValue = videoPlayer.SoundEnabled;
            if (newSoundValue)
            {
                muteImage.sprite = soundOnIcon;
            }
            else
            {
                muteImage.sprite = soundOffIcon;
            }
        }

        // The backupFS Canvas has the maximum sorting order
        // If any other canvas has the maximum sorting order, there is nothing I can do but decrease it in order to make sure the BackupFS canvas is on top
        private void MakeSureAllCanvasAreBelowThisOne()
        {
            foreach (UnityEngine.Canvas canvas in FindObjectsOfType<UnityEngine.Canvas>())
            {
                if (canvas == _canvas) continue;

                if (canvas.sortingOrder >= _canvas.sortingOrder)
                {
                    canvas.sortingOrder--;
                }
            }
        }
    }

}