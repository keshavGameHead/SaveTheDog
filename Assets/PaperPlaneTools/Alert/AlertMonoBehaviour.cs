namespace PaperPlaneTools 
{
	using UnityEngine;
	using System.Collections;
	using System;
	/// <summary>
	/// This class is used to catch events from iOS and Android native alerts
	/// </summary>
	public class AlertMonoBehaviour : MonoBehaviour 
	{

		void Start () 
		{

		}

		/// <summary>
		/// Callback for button press
		/// </summary>
		public void AlertAndroid_OnButtonClick(string buttonType) 
		{
			AlertManager.Instance.HandleEvent ("AlertAndroid_OnButtonClick", buttonType);
		}

		/// <summary>
		/// Callback for cancel event.
		/// https://developer.android.com/reference/android/app/Dialog.html#setOnCancelListener(android.content.DialogInterface.OnCancelListener)
		/// </summary>
		public void AlertAndroid_OnCancel(string nothing) 
		{
			AlertManager.Instance.HandleEvent ("AlertAndroid_OnCancel", nothing);
		}

		/// <summary>
		/// Callback for dismiss event.
		/// https://developer.android.com/reference/android/app/Dialog.html#setOnDismissListener(android.content.DialogInterface.OnDismissListener)
		/// </summary>
		public void AlertAndroid_OnDismiss(string nothing) 
		{
			AlertManager.Instance.HandleEvent ("AlertAndroid_OnDismiss", nothing);
		}


		/// <summary>
		/// Callback for button press
		/// </summary>
		void AlertIOS_OnButtonClick(string tag) 
		{
			AlertManager.Instance.HandleEvent ("AlertIOS_OnButtonClick", tag);
		}

		/// <summary>
		/// Callback for dismiss event in analogy to AlertAndroid_OnDismiss
		/// </summary>
		void AlertIOS_OnDismiss(string nothing) 
		{
			AlertManager.Instance.HandleEvent ("AlertIOS_OnDismiss", nothing);
		}		
	}
}