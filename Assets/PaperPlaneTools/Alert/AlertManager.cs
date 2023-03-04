namespace PaperPlaneTools 
{

	using UnityEngine;
	using System.Collections;
	using System.Collections.Generic;
	using System;

	/// <summary>
	/// AlertManager implemnts a queue for alerts.
	/// </summary>
	public class AlertManager  
	{

		private IAlertPlatformAdapter currentAdapter;
		private Alert currentAlert;

		private List<Alert> queue = new List<Alert>();
		private static AlertManager instance;

		private AlertManager() 
		{
		}

		/// <summary>
		/// Gets the instance.
		/// </summary>
		public static AlertManager Instance {
			get  {
				if (instance == null) {
					instance = new AlertManager();
					#if UNITY_ANDROID
						instance.AlertFactory = () => {
							return new AlertAndroidAdapter (  );
						};
					#endif
					#if UNITY_IOS
						instance.AlertFactory = () => {
							return new AlertIOSAdapter(  );
						};
					#endif
					#if UNITY_EDITOR
						instance.AlertFactory = () => {
							return new AlertUnityAdapter();
						};
					#endif
				}
				return instance;
			}
		}

		/// <summary>
		/// Defult factory for IAlertPlatformAdapter. 
		/// You can redefine alert behaviour or apperance by setting another IAlertPlatformAdapter.
		/// This propery is ignored if <see cref="Alert.Adapter"/> is set
		/// </summary>
		public Func<IAlertPlatformAdapter> AlertFactory 
		{
			get;
			set;
		}


		/// <summary>
		/// Put alert to queue to show when no other alerts are displayed
		/// </summary>
		/// <param name="alert">Alert.</param>
		public void Show(Alert alert) 
		{
			queue.Add (alert);
			ShowNext ();
		}

		/// <summary>
		/// Manually dismiss alert.
		/// </summary>
		public void Dismiss(Alert alert) 
		{
			if (currentAlert == alert) 
			{
				currentAdapter.Dismiss (); // Will implicitly call OnDismiss
			} 
			else 
			{
				int index = queue.IndexOf (alert);		
				if (index >= 0) 
				{
					queue.RemoveAt (index);
					if (alert.OnDismiss != null) 
					{
						alert.OnDismiss.Invoke ();
					}
				}
			}
		}

			
		/// <summary>
		/// Handles external events. For exmaple from ios or android native alerts
		/// </summary>
		/// <param name="eventName">Event name</param>
		/// <param name="value">Event value.</param>
		public void HandleEvent (string eventName, string value) 
		{
			if (currentAlert != null) 
			{
				currentAdapter.HandleEvent (eventName, value);
			}
		}

		private IAlertPlatformAdapter CreateAdapter() 
		{
			return 	AlertFactory != null ? AlertFactory () : null;		
		}

		private void OnDismiss() 
		{
			currentAdapter = null;
			currentAlert = null;
			ShowNext ();
		}
		private void ShowNext() 
		{
			if (currentAdapter == null && queue.Count > 0) 
			{
				currentAlert = queue[0]; 
				queue.RemoveAt (0);
				if (currentAlert != null) 
				{
					currentAdapter = currentAlert.Adapter != null ? currentAlert.Adapter : CreateAdapter ();
					currentAdapter.SetOnDismiss (this.OnDismiss);
					currentAdapter.Show (currentAlert);
				}
			}
		}


	}
}