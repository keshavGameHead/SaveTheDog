namespace PaperPlaneTools 
{
	#if UNITY_EDITOR

	using UnityEngine;
	using System.Collections;
	using System;
	using System.Collections.Generic;


	public class AlertUnityAdapter: IAlertPlatformAdapter 
	{
		private Action onDismiss;

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
			int buttonIndex;

			if (alert.OnDismiss != null) 
			{
				onDismiss += alert.OnDismiss;
			}

			if (alert.NegativeButton != null && alert.NeutralButton != null) 
			{
				buttonIndex = UnityEditor.EditorUtility.DisplayDialogComplex (alert.Title, alert.Message,
					(alert.PositiveButton != null) ? alert.PositiveButton.Title : null, 
					alert.NegativeButton.Title,
					alert.NeutralButton.Title
				);
			} else 
			{
				bool substituteNegativeButton = alert.NegativeButton == null;
				AlertButton negativeButton = substituteNegativeButton ? alert.NeutralButton : alert.NegativeButton;
				bool res = UnityEditor.EditorUtility.DisplayDialog (alert.Title, alert.Message, 
								(alert.PositiveButton != null) ? alert.PositiveButton.Title : null, 
								(negativeButton != null) ? negativeButton.Title : null
				);
				//DisplayDialog returns true if ok button is pressed.
				buttonIndex = res ? 0 : (substituteNegativeButton ? 2 : 1);
			}

			//0, 1 or 2 corresponding to ok, cancel and alt buttons.
			if (buttonIndex == 0 && alert.PositiveButton != null && alert.PositiveButton.Handler != null) 
			{
				alert.PositiveButton.Handler.Invoke ();
			}
			if (buttonIndex == 1 && alert.NegativeButton != null && alert.NegativeButton.Handler != null) 
			{
				alert.NegativeButton.Handler.Invoke ();
			}
			if (buttonIndex == 2 && alert.NeutralButton != null && alert.NeutralButton.Handler != null) 
			{
				alert.NeutralButton.Handler.Invoke ();
			}

			if (onDismiss != null) 
			{
				onDismiss.Invoke ();
			}
		}
			
		/// <summary>
		/// Unity fully stops thread when EditorUtility.DisplayDialog is shown, 
		/// for that reason there is no way to dismiss the dialog, nor even execute a line of code
		/// </summary>
		void IAlertPlatformAdapter.Dismiss() 
		{

		}
		/// <summary>
		/// Unity fully stops thread when EditorUtility.DisplayDialog is shown, 
		/// for that reason no any asynchronous events are possible => nothing to handle
		/// </summary>

		void IAlertPlatformAdapter.HandleEvent (string name, string value) 
		{
		}

	}
	#endif
}