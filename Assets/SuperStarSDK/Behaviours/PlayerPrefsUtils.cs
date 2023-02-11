using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
namespace SuperStarSdk.CrossPromo
{
    internal static class PlayerPrefsUtils
    {
        /// <summary>
        /// Get the key of the asset according to the file path
        /// </summary>
        /// <param name="filePath">file path</param>
        /// <returns>The key</returns>
        public static string GetKey(string filePath)
        {
            return CacheManager.GetCurrentDirectory(filePath) + Path.GetFileName(filePath);
        }

        public static AssetModel GetAsset(string key)
        {
            try
            {
                return JsonUtility.FromJson<AssetModel>(PlayerPrefs.GetString(key));
            }
            catch (Exception)
            {
                return null;
            }
        }
    }

    [Serializable]
    public class AssetModel
    {
        public string id;
        public string file_path;
        public string file_url;
        public string tracking_link;
        public string tracking_impression;
        public string cp_format;

        public string store_ios_url;

        public GameToPromote game;

       
    }

    [Serializable]
    public class GameToPromote
    {
        public string id;
        public string name;
        public long apple_id;
        public string bundle_id;
        public string os_type;
    }
}