using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelSelector : MonoBehaviour
{
    public int currentPage;

    public int maxPage;

    public List<LevelItem> itemList;

    // Start is called before the first frame update
    void Start()
    {
        currentPage = 0;
        RefreshItem();
    }

    private void OnEnable()
    {
        currentPage = 0;
        RefreshItem();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void RefreshItem()
    {
        int unlockLevel = PlayerPrefs.GetInt("UnlockLevel");

        for (int i = 0; i < itemList.Count; i++)
        {
            if((8 * currentPage + i) <= unlockLevel)
               itemList[i].RefreshItem(currentPage, true);
            else
                itemList[i].RefreshItem(currentPage, false);
        }
    }

    public void NextPage()
    {
        AudioManager.instance.buttonAudio.Play();
        if (currentPage < maxPage - 1)
          currentPage++;
        RefreshItem();
    }

    public void PreviousPage()
    {
        AudioManager.instance.buttonAudio.Play();
        if (currentPage > 0)
            currentPage--;
        RefreshItem();
                
    }

    public void GoToLevel(int index)
    {
        int levelIndex = 8 * currentPage + index;

        int unlockLevel = PlayerPrefs.GetInt("UnlockLevel");
       

        if (levelIndex <= unlockLevel)
        {
            AudioManager.instance.buttonAudio.Play();
            PlayerPrefs.SetInt("CurrentLevel", levelIndex);
            SceneManager.LoadScene("Level");
        }
    }
}
