
namespace PaperPlaneTools 
{
	#if UNITY_IOS
	using UnityEngine;
	using System;

	public class AlertIOSAdapter: IAlertPlatformAdapter 
	{
		private GameObject gameObject;
		private AlertIOS alertIOS;
		private Action onDismiss;

//		public static AlertIOSButton.Type PositiveButtonType = AlertIOSButton.Type.Default;
//		public static AlertIOSButton.Type NegativeButtonType = AlertIOSButton.Type.Destructive;
//		public static AlertIOSButton.Type NeutralButtonType = AlertIOSButton.Type.Default;

		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.AlertIOSAdapter"/> class.
		/// </summary>
		public AlertIOSAdapter() 
		{
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
			AlertIOSOptions options = null;
			foreach (System.Object opt in alert.Options) 
			{
				if (opt is AlertIOSOptions) 
				{
					options = (AlertIOSOptions) opt;
					break;
				}
			}

			if (options == null) 
			{
				options = new AlertIOSOptions ();
			}

			alertIOS = new AlertIOS();
			alertIOS.Title = alert.Title;
			alertIOS.Message = alert.Message;

			var buttonsAddOrder = options.ButtonsAddOrder;
			foreach (Alert.ButtonType buttonType in buttonsAddOrder) 
			{
				if (buttonType == Alert.ButtonType.Positive && alert.PositiveButton != null) 
				{
					alertIOS.AddButton (options.PositiveButton, alert.PositiveButton.Title, alert.PositiveButton.Handler, options.PreferableButton == Alert.ButtonType.Positive);
				}
				if (buttonType == Alert.ButtonType.Neutral && alert.NeutralButton != null) 
				{
					alertIOS.AddButton (options.NeutralButton, alert.NeutralButton.Title, alert.NeutralButton.Handler, options.PreferableButton == Alert.ButtonType.Neutral);
				}
				if (buttonType == Alert.ButtonType.Negative && alert.NegativeButton != null) 
				{
					alertIOS.AddButton (options.NegativeButton, alert.NegativeButton.Title, alert.NegativeButton.Handler, options.PreferableButton == Alert.ButtonType.Negative);
				}
			}

			alertIOS.OnDismiss = this.onDismissCallback;
			alertIOS.Show (gameObject.transform.name, true);
		}

		/// <summary>
		/// Dismiss this alert.
		/// </summary>
		void IAlertPlatformAdapter.Dismiss() 
		{
			if (alertIOS != null) 
			{
				alertIOS.Dismiss (true);
			}
			GameObject.Destroy(gameObject);
		}

		/// <summary>
		/// Handles events from iOS plugin. 
		/// </summary>
		/// <param name="name">Event name.</param>
		/// <param name="value">Event value.</param>
		void IAlertPlatformAdapter.HandleEvent (string eventName, string value) 
		{
			if (alertIOS == null) 
			{
				return;
			}

			if (eventName == "AlertIOS_OnButtonClick") 
			{
				alertIOS.HandleButtonClick (Int32.Parse (value));
			}

			if (eventName == "AlertIOS_OnDismiss") 
			{
				alertIOS.HandleDismiss ();
			}
		}

		private void onDismissCallback() 
		{
			if (onDismiss != null) 
			{
				onDismiss.Invoke ();
			}
		}
	}

	#endif
}