namespace PaperPlaneTools
{
	using UnityEngine;
	using System.Collections;
	using System;

	public class RateBoxConditions
	{
		/// <summary>
		/// Initializes a new instance of the <see cref="PaperPlaneTools.RateBoxConditions"/> class.
		/// </summary>
		public RateBoxConditions()
		{
			MinSessionCount = 0;
			MinCustomEventsCount = 0;
			DelayAfterInstallInSeconds = 0;
			DelayAfterLaunchInSeconds = 0;
			PostponeCooldownInSeconds = 22 * 3600; // 22 hours
			RequireInternetConnection = true;
		}

		/// <summary>
		/// Check an internet connection before prompting a dialog.
		/// This makes sense because user won't be able to rate the app without an internet connection.
		/// </summary>
		public bool RequireInternetConnection 
		{
			get;
			set;
		}

		/// <summary>
		/// Minimum number of sessions. 
		/// Session counter increases automatically when using RateBoxPrefab or manually by calling <see cref="PaperPlaneTools.RateBox.Init"/> function.
		/// </summary>
		public int MinSessionCount
		{
			get;
			set;
		}

		/// <summary>
		/// Minimum value of custom counter. 
		/// The counter increases by calling <see cref="PaperPlaneTools.RateBox.IncrementCustomCounter"/> function
		/// </summary>
		public int MinCustomEventsCount
		{
			get;
			set;
		}

		/// <summary>
		/// Number of seconds to wait before prompting a rate dialog after the application was first time started.
		/// When using RateBoxPrefab, installation time is set automatically. Otherwise the first call of <see cref="PaperPlaneTools.RateBox.Init"/> function sets the installation time.
		/// Note that if new version of the application is detected, previously stored installation time is replaced with the new value
		/// and a rate dialog will be shown not earlier than <see cref="PaperPlaneTools.RateBoxConditions.DelayAfterInstallInSeconds"/>.
		/// </summary>
		public int DelayAfterInstallInSeconds
		{
			get;
			set;
		}

		/// <summary>
		/// Number of seconds to wait before prompting a rate dialog after the application starts.
		/// When using RateBoxPrefab, start time is set automatically. Otherwise call of <see cref="PaperPlaneTools.RateBox.Init"/> function sets the start time.
		/// </summary>
		public int DelayAfterLaunchInSeconds
		{
			get;
			set;
		}

		/// <summary>
		/// Number of seconds to wait before prompting a rate dialog after the former prompt.
		/// </summary>
		public int PostponeCooldownInSeconds
		{
			get;
			set;
		}
	}
}