namespace PaperPlaneTools 
{
	#if UNITY_ANDROID
	using UnityEngine;
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine.UI;
	using System;


	public class AlertAndroid 
	{
		public enum ButtonType
		{
			POSITIVE = -1,
			NEGATIVE = -2,
			NEUTRAL = -3
		};

		private Dictionary<int, AlertButton> buttons= new Dictionary<int, AlertButton>();

		/// <summary>
		/// Dismiss callback
		/// </summary>
		public Action OnDismiss = null;
		//public Action OnCancel = null;

		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.AlertAndroid"/> class.
		/// </summary>
		public AlertAndroid(string title = null, string message = null) 
		{
			Title = title;
			Message = message;
			Cancelable = true;
		}

		/// <summary>
		/// Set positive button. 
		/// </summary>
		public void SetPositiveButton(string title, Action handler) 
		{
			SetButton (ButtonType.POSITIVE, title, handler);
		}
		/// <summary>
		/// Set negative button.
		/// </summary>
		public void SetNegativeButton(string title, Action handler) 
		{
			SetButton (ButtonType.NEGATIVE, title, handler);
		}

		/// <summary>
		/// Set neutral button.
		/// </summary>
		public void SetNeutralButton(string title, Action handler) 
		{
			SetButton (ButtonType.NEUTRAL, title, handler);
		}

		/// <summary>
		/// Generic set button.
		/// </summary>
		public void SetButton(ButtonType whichButton, string title, Action handler) 
		{
			buttons[(int)whichButton] = new AlertButton(title, handler);
		}
			
		/// <summary>
		/// Dialog title
		/// </summary>
		public string Title 
		{
			get;
			set;
		}

		/// <summary>
		/// Dialog message
		/// </summary>
		public string Message 
		{
			get;
			set;
		}

		/// <summary>
		/// If true, dialog can be dismissed by taping outside the dialog area
		/// </summary>
		public bool Cancelable 
		{
			get;
			set;
		}

		/// <summary>
		/// Show the dialog
		/// </summary>
		/// <param name="gameObjectName">Game object name in the scene to handle callbacks</param>
		public void Show(string gameObjectName) 
		{
			AndroidJavaClass pluginClass  = new AndroidJavaClass("com.paperplanetools.Alert");
			pluginClass.CallStatic<int> ("initBuilder", new System.Object[] { gameObjectName });

			if (Title != null) 
			{
				pluginClass.CallStatic<int> ("setTitle", new System.Object[] { Title });
			}

			if (Message != null) 
			{
				pluginClass.CallStatic<int> ("setMessage", new System.Object[] { Message });
			}

			foreach (KeyValuePair<int, AlertButton> entry in buttons) 
			{
				pluginClass.CallStatic<int> ("setButton", new System.Object[] {entry.Key , entry.Value.Title });
			}

			pluginClass.CallStatic<int> ("setCancelable", new System.Object[] { Cancelable });

			pluginClass.CallStatic<int> ("show");
		}

		/// <summary>
		/// Dismiss current dialog.
		/// </summary>
		public void Dismiss() 
		{
			AndroidJavaClass pluginClass  = new AndroidJavaClass("com.paperplanetools.Alert");

			//Implicitily leads to call of HandleDismiss function
			pluginClass.CallStatic<int> ("dismiss");
		}

		/// <summary>
		/// Callback for button click
		/// </summary>
		public void HandleButtonClick(int whichButton) 
		{
			AlertButton button;
			if (buttons.TryGetValue (whichButton, out button)) 
			{
				if (button.Handler != null) 
				{
					button.Handler.Invoke ();
				}
			}
		}

		/// <summary>
		/// Callback for cancel event
		/// </summary>
		public void HandleCancel() 
		{
		}

		/// <summary>
		/// Callback for dismiss event
		/// </summary>
		public void HandleDismiss() 
		{
			if (OnDismiss != null) 
			{
				OnDismiss.Invoke ();
			}
		}

	}

	#endif
}