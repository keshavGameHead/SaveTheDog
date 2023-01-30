using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace SuperStarSdk
{
    public class SSBringtoFront : MonoBehaviour
    {
        void OnEnable()
        {
            transform.SetAsLastSibling();
        }
    }
}