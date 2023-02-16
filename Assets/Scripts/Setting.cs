using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Setting : MonoBehaviour
{
    public Image musicImage, soundImage, vibrateImage;

    public Sprite musicOn, musicOff;

    public TextMeshProUGUI musicTxt, soundTxt, vibrateTxt;


    // Start is called before the first frame update
    void Start()
    {
        Refresh();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnClickFeedBack()
    {

    }

    public void ToggleMusic()
    {
        if (PlayerPrefs.GetInt("Music") == 0)
        {
            musicImage.sprite = musicOff;
            musicTxt.text = "OFF";
            PlayerPrefs.SetInt("Music", 1);
            AudioManager.instance.TurnMusicOff();
        }
        else
        {
            musicImage.sprite = musicOn;
            musicTxt.text = "ON";
            PlayerPrefs.SetInt("Music", 0);
            AudioManager.instance.TurnMusicOn();
        }
    }

    public void ToggleSound()
    {
        if (PlayerPrefs.GetInt("Sound") == 0)
        {
            soundImage.sprite = musicOff;
            soundTxt.text = "OFF";
            PlayerPrefs.SetInt("Sound", 1);
            AudioManager.instance.TurnSoundOff();
        }
        else
        {
            soundImage.sprite = musicOn;
            soundTxt.text = "ON";
            PlayerPrefs.SetInt("Sound", 0);
            AudioManager.instance.TurnSoundOn();
        }
    }

    public void ToggleVibrate()
    {
        if (PlayerPrefs.GetInt("Vibrate") == 0)
        {
            vibrateImage.sprite = musicOff;
            vibrateTxt.text = "OFF";
            PlayerPrefs.SetInt("Vibrate", 1);
             
        }
        else
        {
            vibrateImage.sprite = musicOn;
            vibrateTxt.text = "ON";
            PlayerPrefs.SetInt("Vibrate", 0);
            AudioManager.instance.TurnSoundOn();
        }
    }

    void Refresh()
    {
        if(PlayerPrefs.GetInt("Music") == 0)
        {
            musicImage.sprite = musicOn;
            musicTxt.text = "ON";
            AudioManager.instance.TurnMusicOn();
        }
        else
        {
            musicImage.sprite = musicOff;
            musicTxt.text = "OFF";
            AudioManager.instance.TurnMusicOff();
        }

        if (PlayerPrefs.GetInt("Sound") == 0)
        {
            soundImage.sprite = musicOn;
            soundTxt.text = "ON";
            AudioManager.instance.TurnSoundOn();
        }
        else
        {
            soundImage.sprite = musicOff;
            soundTxt.text = "OFF";
            AudioManager.instance.TurnSoundOff();
        }

        if (PlayerPrefs.GetInt("Vibrate") == 0)
        {
            vibrateImage.sprite = musicOff;
            vibrateTxt.text = "OFF";
            PlayerPrefs.SetInt("Vibrate", 1);
            AudioManager.instance.TurnSoundOff();
        }
        else
        {
            vibrateImage.sprite = musicOn;
            vibrateTxt.text = "ON";
            PlayerPrefs.SetInt("Vibrate", 0);
            AudioManager.instance.TurnSoundOn();
        }
    }
}
