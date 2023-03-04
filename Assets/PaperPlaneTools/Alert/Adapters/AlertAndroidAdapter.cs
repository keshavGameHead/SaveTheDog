namespace PaperPlaneTools 
{

	#if UNITY_ANDROID

	using System.Collections;
	using System;
	using System.Collections.Generic;
	using System.Runtime.InteropServices;
	using UnityEngine;
	public class AlertAndroidAdapter: IAlertPlatformAdapter 
	{
		private AlertAndroid alertAndroid;
		private Action onDismiss;
		private GameObject gameObject;

		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.AlertAndroidAdapter"/> class.
		/// </summary>
		public AlertAndroidAdapter() 
		{
			// Create game object to handle events from the native implementation
			this.gameObject = GameObject.Instantiate (Resources.Load ("PaperPlaneTools/Alert/AlertCallbackHandler")) as GameObject;
		}

		/// <summary>
		/// Set a callback to call when alert is dismissed.
		/// </summary>
		/// <param name="action">Callback to call.</param>
		void IAlertPlatformAdapter.SetOnDismiss (Action action) 
		{
			onDismiss = action;
		}

		/// <summary>
		/// Show the specified alert.
		/// </summary>
		/// <param name="alert">Show <see cref="PaperPlaneTools.Alert"/></param>
		void IAlertPlatformAdapter.Show(Alert alert) 
		{
			if (alert.OnDismiss != null) 
			{
				onDismiss += alert.OnDismiss;
			}
			AlertAndroidOptions options = null;
			foreach (System.Object opt in alert.Options) 
			{
				if (opt is AlertAndroidOptions) 
				{
					options = (AlertAndroidOptions) opt;
					break;
				}
			}

			if (options == null) 
			{
				options = new AlertAndroidOptions ();
			}
			alertAndroid = new AlertAndroid();
			alertAndroid.Title = alert.Title;
			alertAndroid.Message = alert.Message;
			if (alert.PositiveButton != null) 
			{
				alertAndroid.SetPositiveButton (alert.PositiveButton.Title, alert.PositiveButton.Handler);
			}
			if (alert.NegativeButton != null) 
			{
				alertAndroid.SetNegativeButton (alert.NegativeButton.Title, alert.NegativeButton.Handler);
			}
			if (alert.NeutralButton != null) 
			{
				alertAndroid.SetNeutralButton (alert.NeutralButton.Title, alert.NeutralButton.Handler);
			}

			alertAndroid.OnDismiss = this.onDismissCallback;
			alertAndroid.Cancelable = options.Cancelable;
			alertAndroid.Show (gameObject.transform.name);
		}

		/// <summary>
		/// Dismiss this alert.
		/// </summary>
		void IAlertPlatformAdapter.Dismiss() 
		{
			if (alertAndroid != null) 
			{
				alertAndroid.Dismiss ();
			}
		}

		/// <summary>
		/// Handles event form android native alert plugin. 
		/// </summary>
		/// <param name="name">Event name.</param>
		/// <param name="value">Event value.</param>
		void IAlertPlatformAdapter.HandleEvent (string eventName, string value) 
		{
			if (alertAndroid == null) 
			{
				return;
			}

			if (eventName == "AlertAndroid_OnButtonClick") 
			{
				alertAndroid.HandleButtonClick (Int32.Parse (value));
			}

			if (eventName == "AlertAndroid_OnCancel") 
			{
				alertAndroid.HandleCancel ();
			}
			if (eventName == "AlertAndroid_OnDismiss") 
			{
				alertAndroid.HandleDismiss ();
			}
		}

		private void onDismissCallback() 
		{
			if (onDismiss != null) 
			{
				onDismiss.Invoke ();
			}
			
			GameObject.Destroy(gameObject);
		}
	}

	#endif
}