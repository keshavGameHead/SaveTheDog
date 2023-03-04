namespace PaperPlaneTools
{
	using UnityEngine;
	using System.Collections;
	using System;
	using System.Xml.Serialization;
	
	[Serializable]
	public class RateBoxStatistics
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.RateBoxStatistics"/> class.
		/// </summary>
		public RateBoxStatistics()
		{
			SessionsCount = 0;
			CustomEventCount = 0;
			AppInstallAt = 0;
			AppLaunchAt = 0;
			DialogShownAt = 0;
			DialogIsRejected = false;
			DialogIsRated = false;
			ApplicationVersion = null;
		}

		[SerializeField]
		private int sessionsCount;
		/// <summary>
		/// Holds number of application uses.
		/// Session counter increases automatically when using RateBoxPrefab or manually by calling <see cref="PaperPlaneTools.RateBox.Init"/> function.
		/// </summary>
		public int SessionsCount
		{
			get { return sessionsCount; }
			set { sessionsCount = value; }
		}

		[SerializeField]
		private int customEventCount;
		/// <summary>
		/// Holds number of custom events.
		/// The counter increases by calling <see cref="PaperPlaneTools.RateBox.IncrementCustomCounter"/> function
		/// </summary>
		public int CustomEventCount 
		{
			get { return customEventCount; }
			set { customEventCount = value; }
		}

		[SerializeField]
		private int appInstallAt;
		/// <summary>
		/// The first time when the application started (Unix Time Stamp).
		/// When using RateBoxPrefab, installation time is set automatically. Otherwise the first call of <see cref="PaperPlaneTools.RateBox.Init"/> function sets the installation time.
		/// Note that if new version of the application is detected, previously stored installation time is replaced with the new value.
		/// </summary>
		public int AppInstallAt 
		{
			get { return appInstallAt; }
			set { appInstallAt = value; }
		}

		[SerializeField]
		private int appLaunchAt;
		/// <summary>
		/// The last time when the application started (Unix Time Stamp).
		/// When using RateBoxPrefab, start time is set automatically. Otherwise the  call of <see cref="PaperPlaneTools.RateBox.Init"/> function sets the start time.
		/// </summary>
		public int AppLaunchAt 
		{
			get { return appLaunchAt; }
			set { appLaunchAt = value; }
		}


		[SerializeField]
		private int dialogShownAt;
		/// <summary>
		/// The last time when the dialog prompted (Unix Time Stamp).
		/// This time is set after succsessfull call of <see cref="PaperPlaneTools.RateBox.Show"/> function.
		/// Disclaimer: <see cref="PaperPlaneTools.RateBox.ForceShow"/> doesn't affect DialogShownAt
		/// </summary>
		public int DialogShownAt 
		{
			get { return dialogShownAt; }
			set { dialogShownAt = value; }
		}

		[SerializeField]
		private bool dialogIsRejected;
		/// <summary>
		/// Set to true when the user rejects the dialog (press rejectButtonTitle).
		/// If true, <see cref="PaperPlaneTools.RateBox.Show"/> function will not show dialog unless new version of application is detected.
		/// </summary>
		public bool DialogIsRejected
		{
			get { return dialogIsRejected; }
			set { dialogIsRejected = value; }
		}

		[SerializeField]
		private bool dialogIsRated;
		/// <summary>
		/// Set to true when the user rates the app (press rateButtonTitle).
		/// If true, <see cref="PaperPlaneTools.RateBox.Show"/> function will not show dialog unless new version of application is detected.
		/// </summary>
		public bool DialogIsRated
		{
			get { return dialogIsRated; }
			set { dialogIsRated = value; }
		}

		[SerializeField]
		private string applicationVersion;
		/// <summary>
		/// Holds the version of the application.
		/// If new version of apllication is detected the whole stored statistic will be cleared, in order to ask rating again.
		/// ApplicationVersion is set automatically when using RateBoxPrefab or manually by calling <see cref="PaperPlaneTools.RateBox.Init"/> function.
		/// </summary>
		public string ApplicationVersion 
		{
			get { return applicationVersion; }
			set { applicationVersion = value; }
		}


	}
}