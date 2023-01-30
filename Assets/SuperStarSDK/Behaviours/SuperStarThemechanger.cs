using Sirenix.OdinInspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.ProceduralImage;

namespace SuperStarSdk
{
    public class SuperStarThemechanger : MonoBehaviour
    {

        public List<ThemeDataSS> themeData = new List<ThemeDataSS>();
        [Button]
        void ChangeColor()
        {
            //  OnClickChangeThemeColor(0);
            for (int i = 0; i < themeData.Count; i++)
            {
                for (int j = 0; j < themeData[i].allImages.Length; j++)
                {
                    themeData[i].allImages[j].color = themeData[i].MainPanelColor;
                }
                for (int k = 0; k < themeData[i].allProceduralImages.Length; k++)
                {
                    themeData[i].allProceduralImages[k].color = themeData[i].MainPanelColor;
                }
                Camera.main.backgroundColor = themeData[i].MainPanelColor;
            }

        }


    }


}


[System.Serializable]
public class ThemeDataSS
{
    public Color MainPanelColor;
    public Image[] allImages;
    public ProceduralImage[] allProceduralImages;
    public Text[] allText;
}
