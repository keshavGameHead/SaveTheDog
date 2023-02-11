using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
namespace SuperStarSdk.CrossPromo
{
    internal static class CacheManager
    {
        /// <summary>
        /// Name of the directory inside the cache
        /// </summary>
        private const string CacheDirectoryName = "VoodooAds";

        /// <summary>
        /// Path of the cache
        /// </summary>
        public static readonly string Path = $"{Application.temporaryCachePath}/{CacheDirectoryName}/";

        /// <summary>
        /// Create the cache directory if it is not present
        /// </summary>
        public static void CreateCacheIfNoExist()
        {
            try
            {
                CreateDirectoriesIfNoExist(Path);
            }
            catch (Exception e)
            {
             //   VoodooLog.LogError(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG, e.ToString());
            }
        }

        /// <summary>
        /// Write the content of a <c>byte[]</c> in a file inside the cache
        /// </summary>
        /// <param name="filePath">Relative path of the file</param>
        /// <param name="bytes">The content of the file in <c>bytes[]</c></param>
        public static void WriteFile(string filePath, byte[] bytes)
        {
            try
            {
                CreateDirectoriesIfNoExist(Path + filePath, true);
                File.WriteAllBytes(Path + filePath, bytes);
            }
            catch (Exception e)
            {
               // VoodooLog.LogError(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG, e.ToString());
            }
        }

        /// <summary>
        /// Get all the files in the cache
        /// </summary>
        /// <returns>All the absolute files path</returns>
        public static string[] GetAllFilesFromCache()
        {
            try
            {
                return Directory.GetFiles(Path, "*.*", SearchOption.AllDirectories);
            }
            catch (Exception)
            {
                return new string[0];
            }
        }

        /// <summary>
        /// Check if the file exist inside of the cache
        /// </summary>
        /// <param name="filePath">Relative path of the file</param>
        /// <returns><c>true</c> if the file exist or <c>false</c> if not</returns>
        public static bool IsFileExist(string filePath)
        {
            try
            {
                return File.Exists(Path + filePath);
            }
            catch (Exception)
            {
                return false;
            }
        }

        /// <summary>
        /// Delete the file inside of the Cache
        /// </summary>
        /// <param name="filePath">Absolute path of the file</param>
        public static void DeleteFile(string filePath)
        {
            try
            {
                File.Delete(filePath);
            }
            catch (Exception e)
            {
                //VoodooLog.LogError(VoodooLog.Module.CROSS_PROMO, VoodooCrossPromo.TAG, "Deleting file failed " + e);
            }
        }

        /// <summary>
        /// Compare two files name for two different path
        /// </summary>
        /// <param name="path1">Relative path of file</param>
        /// <param name="path2">Absolute path of file</param>
        /// <returns></returns>
        public static bool CompareTwoFilesName(string path1, string path2)
        {
            var key1 = PlayerPrefsUtils.GetKey(path1);
            var key2 = PlayerPrefsUtils.GetKey(path2);
            try
            {
                return key1.Equals(key2);
            }
            catch (Exception)
            {
                return false;
            }
        }

        /// <summary>
        /// Get the current directory of file
        /// </summary>
        /// <param name="filePath">Absolute or relative path of the file</param>
        /// <returns>The current directory</returns>
        public static string GetCurrentDirectory(string filePath)
        {
            return System.IO.Path.GetFileName(System.IO.Path.GetDirectoryName(filePath));
        }

        /// <summary>
        /// Create a directory if no exist
        /// </summary>
        /// <param name="path">Absoulte path of the directory</param>
        /// <param name="fromFilePath">Create directories and subdirectory 
        /// if the <paramref name="path"/> is a file path</param>
        /// <exception cref="Exception">Invalid directory name</exception>
        private static void CreateDirectoriesIfNoExist(string path, bool fromFilePath = false)
        {
            if (fromFilePath)
            {
                var directoryName = System.IO.Path.GetDirectoryName(path);
                if (string.IsNullOrEmpty(directoryName))
                    throw new Exception("Wrong Directory Name");
                path = directoryName;
            }

            if (Directory.Exists(path)) return;
            Directory.CreateDirectory(path);
        }
    }
}