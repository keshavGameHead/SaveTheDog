using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    public AudioSource musicSource;

    public AudioSource failAudio;

    public AudioSource winAudio;

    public AudioSource dogAudio;

    public AudioSource buttonAudio;

    public AudioSource breakAudio;

    [HideInInspector]
    public int soundState,musicState;

    private void Awake()
    {

        if (FindObjectsOfType(typeof(AudioManager)).Length > 1)
        {
            Destroy(gameObject);
            return;
        }


        instance = this;
        DontDestroyOnLoad(gameObject);
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void TurnSoundOff()
    {
        failAudio.volume = 0.0f;
        dogAudio.volume = 0.0f;
        winAudio.volume = 0.0f;
        buttonAudio.volume = 0.0f;
        breakAudio.volume = 0.0f;
        soundState = 0;
    }

    public void TurnSoundOn()
    {
        failAudio.volume = 1.0f;
        winAudio.volume = 1.0f;
        dogAudio.volume = 1.0f;
        buttonAudio.volume = 1.0f;
        breakAudio.volume = 1.0f;

        soundState = 1;
    }

    public void TurnMusicOff()
    {
        musicSource.volume = 0.0f;
        musicState = 0;
    }

    public void TurnMusicOn()
    {
        musicSource.volume = 1.0f;
        musicState = 1;
    }
}
