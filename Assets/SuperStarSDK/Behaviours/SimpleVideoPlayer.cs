using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Video;
using UnityEngine.UI;
using System;

namespace SuperStarSdk.CrossPromo
{
    public class SimpleVideoPlayer : MonoBehaviour, IPointerClickHandler
    {
        private VideoPlayer _videoPlayer;
        private RawImage _imageDisplay;
        private RenderTexture _renderTexture;
        private Action _videoClicked;

        public bool SoundEnabled { get; private set; }

        public event Action videoCompleted;
        public event Action<VideoPlayer> videoPrepared;

        private void Awake()
        {
            _videoPlayer = GetComponent<VideoPlayer>();
            _imageDisplay = gameObject.AddComponent<RawImage>();

            _renderTexture = new RenderTexture(1080, 1920, 24);
            _imageDisplay.texture = _renderTexture;
            _videoPlayer.targetTexture = _renderTexture;

            _videoPlayer.prepareCompleted += OnVideoPrepareCompleted;
            _videoPlayer.loopPointReached += OnLoopPointReached;
        }

        private void OnDestroy()
        {
            _videoPlayer.prepareCompleted -= OnVideoPrepareCompleted;
            _videoPlayer.loopPointReached -= OnLoopPointReached;
        }

        public void PlayVideo(string path)
        {
            _videoPlayer.source = VideoSource.Url;
            _videoPlayer.url = path;
            _videoPlayer.Prepare();
        }

        public void PlayVideo(VideoClip clip)
        {
            _videoPlayer.source = VideoSource.VideoClip;
            _videoPlayer.clip = clip;
            _videoPlayer.Prepare();
        }

        private void OnLoopPointReached(VideoPlayer source)
        {
            TriggerCompleteCallback();
        }

        private void OnVideoPrepareCompleted(VideoPlayer source)
        {
            _renderTexture.Create();
            _imageDisplay.enabled = true;

            videoPrepared?.Invoke(_videoPlayer);
        }

        private void TriggerCompleteCallback()
        {
            videoCompleted?.Invoke();
            videoCompleted = null;
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            _videoClicked?.Invoke();
        }

        public void SetVideoClickedCallback(Action onClicked)
        {
            _videoClicked = onClicked;
        }

        public void ToggleSound()
        {
            SoundEnabled = !SoundEnabled;
            if (SoundEnabled)
            {
                _videoPlayer.audioOutputMode = VideoAudioOutputMode.Direct;
            }
            else
            {
                _videoPlayer.audioOutputMode = VideoAudioOutputMode.None;
            }
        }
    }
}