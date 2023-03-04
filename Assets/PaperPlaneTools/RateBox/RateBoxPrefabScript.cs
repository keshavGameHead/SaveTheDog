namespace PaperPlaneTools { 
	using UnityEngine;
	using System.Collections;
	

	public class RateBoxPrefabScript : MonoBehaviour {


		/*
		 * DISPlAY CONDITIONS
		*/

		[Header("DISPLAY CONDITIONS:")]
		[Tooltip("Minimum number of sessions before prompting a dialog.\nThe counter increases every time the game starts.")]
		/// <summary>
		/// Minimum number of sessions. 
		/// Session counter increases automatically when using RateBoxPrefab or manually by calling <see cref="PaperPlaneTools.RateBox.Init"/> function.
		/// </summary>
		public int minSessionCount = 0;

		[Tooltip("Minimum number of a custom events before prompting a dialog.\nThe custom counter increases every time RateBox.IncrementCustomCounter function is called.")]
		/// <summary>
		/// Minimum value of custom counter. 
		/// The counter increases by calling <see cref="PaperPlaneTools.RateBox.IncrementCustomCounter"/> function
		/// </summary>
		public int minCustomEventsCount = 0;

		[Tooltip("Number of hours to wait before prompting a dialog after the application was first time started.\n\nFor example, a value of 2.5 means that the user won't see a rate prompt at least first 2 and a half hours after the installation.")]
		/// <summary>
		/// Number of seconds to wait before prompting a rate dialog after the application was first time started.
		/// When using RateBoxPrefab, installation time is set automatically. Otherwise the first call of <see cref="PaperPlaneTools.RateBox.Init"/> function sets the installation time.
		/// Note that if new version of the application is detected, previously stored installation time is replaced with the new value
		/// and a rate dialog will be shown not earlier than <see cref="PaperPlaneTools.RateBoxConditions.DelayAfterInstallInSeconds"/>.
		/// </summary>
		public float delayAfterInstallInHours = 0f;

		[Tooltip("Number of hours to wait before prompting a dialog after the application was started. \n\nFor example, a value of 0.2 means that the user won't see a rate prompt at least first 12 minutes (0.2 * 60) after the applications starts.")]
		/// <summary>
		/// Number of seconds to wait before prompting a rate dialog after the application starts.
		/// When using RateBoxPrefab, start time is set automatically. Otherwise call of <see cref="PaperPlaneTools.RateBox.Init"/> function sets the start time.
		/// </summary>
		public float delayAfterLaunchInHours = 0f;

		[Tooltip("Number of hours to wait before prompting a dialog after the former one was displayed.\n\nFor example, a value of 12.5 means that the user won't see a rate prompt at least first 12 and a half hours after dismissing the former one.")]
		/// <summary>
		/// Number of seconds to wait before prompting a rate dialog after the former prompt.
		/// </summary>
		public float postponeCooldownInHours = 22f;

		[Tooltip("Check internet connection before prompting a dialog. This makes sense because user won't be able to rate the app without an internet connection.")]
		/// <summary>
		/// Check an internet connection  before prompting a dialog.
		/// This makes sense because user won't be able to rate the app without an internet connection.
		/// </summary>
		public bool requireInternetConnection = true;

		/*
		 * TEXT
		*/
		[Header("TEXT:")]
		[Tooltip("Title of the dialog")]
		/// <summary>
		/// Title of the dialog.
		/// </summary>
		public string title = "Like the game?";

		[Tooltip("Message of the dialog")]
		[Multiline]
		/// <summary>
		/// Message of the dialog.
		/// </summary>
		public string message = "Take a moment to rate us!";

		[Tooltip("Title of the rate-button")]
		/// <summary>
		/// Title of the rate-button.
		/// </summary>
		public string rateButton = "Rate";

		[Tooltip("Title of the later-button")]
		/// <summary>
		/// Title of the later-button.
		/// </summary>
		public string postponeButton = "Later";

		[Tooltip("Title of the rate button.\nIf empty string, the button won't be displayed.")]
		/// <summary>
		/// Title of the rate button.
		/// If empty string, the button won't be displayed.
		/// </summary>
		public string rejectButton = "";

		/*
		 * Rate url
		*/
		[Header("RATE URLS:")]
		[Tooltip("Apple AppStore app id.\nThe url will be https://itunes.apple.com/app/id{iTunesAppId}")]
		/// <summary>
		/// Apple AppStore app id.
		/// The url will be https://itunes.apple.com/app/id{iTunesAppId}
		/// </summary>
		public string appStoreAppId = "";


		[Tooltip("Your app bundle id for Google Playe Market.\nThe url will be https://play.google.com/store/apps/details?id={playMarketAppBundleId}")]
		/// <summary>
		/// Your app bundle id for Google Playe Market.
		/// The url will be https://play.google.com/store/apps/details?id={playMarketAppBundleId}
		/// </summary>
		public string playMarketAppBundleId = "";

		/*
		 * Rate url
		*/
		[Header("Settings:")]
		[Tooltip("Use new iOS SKStoreReviewController if available")]
		/// <summary>
		/// Instead of alert window shows SKStoreReviewController review window.
		/// If SKStoreReviewController is not available (iOS version < 10.3) useIOSReview parameter will be treated as it is false
		/// </summary>
		public bool useIOSReview = false;

		/*
		 * Custom window
		*/
		[Header("Custom window:")]
		[Tooltip("Show custom UI window instead of native alerts")]
		public GameObject customUIWindow;

		/*
		 * Debug
		*/
		[Header("DEBUG (Unity Editor Only):")]
		[Tooltip("Clear statistics on start.\nSometimes you don't want RateBox to store statistics permanently, for instance, if you reject the prompt once, you will never see it again.\nThis behavior is not always desired when debugging, so by enabling 'Clear On Start' you can start from the blank state every time you launch the app in the Unity Editor.")]
		/// <summary>
		/// Clear statistics on start.
		/// Sometimes you don't want RateBox to store statistics permanently, for instance, if you reject the prompt once, you will never see it again.
		/// This behavior is not always desired when debugging, so by enabling 'Clear On Start' you can start from the blank state every time you launch the app in the Unity Editor.
		/// </summary>
		public bool clearOnStart = false;

		[Tooltip("Turn on debug to report conditions check log.\nThis will help to understand why a dialog doesn't appear after calling Show method.")]
		/// <summary>
		/// Turn on debug to report conditions check log.
		//  This will help to understand why a dialog doesn't appear after calling Show method.
		/// </summary>
		public bool logDebugMessages = true;


		/// <summary>
		/// Call <see cref="PaperPlaneTools.RateBox.Init"/> function
		/// </summary>
		void Start () {
			string rateUrl = RateBox.GetStoreUrl (appStoreAppId, playMarketAppBundleId); 
			//Debug settings are only allowed inside development environment
			#if (UNITY_EDITOR)
				if (clearOnStart) {
					RateBox.Instance.ClearStatistics(); 
				}
				RateBox.Instance.DebugMode = logDebugMessages;
			#else
				RateBox.Instance.DebugMode = false;
			#endif

			var rejectButtonTrimmed = rejectButton.Trim ();
			RateBox.Instance.Init (
				rateUrl, 
				new RateBoxConditions() {
					MinSessionCount = minSessionCount,
					MinCustomEventsCount = minCustomEventsCount,
					DelayAfterInstallInSeconds = Mathf.CeilToInt(delayAfterInstallInHours * 3600),
					DelayAfterLaunchInSeconds = Mathf.CeilToInt(delayAfterLaunchInHours * 3600),
					PostponeCooldownInSeconds = Mathf.CeilToInt(postponeCooldownInHours * 3600),
					RequireInternetConnection = requireInternetConnection
				},
				new RateBoxTextSettings() {
					Title = title.Trim(),
					Message = message.Trim(),
					RateButtonTitle = rateButton.Trim(),
					PostponeButtonTitle = postponeButton.Trim(),
					RejectButtonTitle = rejectButtonTrimmed.Length > 0 ? rejectButtonTrimmed.Trim() : null
				},
				new RateBoxSettings() {
					UseIOSReview = useIOSReview
				}
			);

			// Custom alertAdapter allows to display custom UI windows instead of native alerts
			IAlertPlatformAdapter alertAdapter = null;
			if (customUIWindow != null) {
				customUIWindow.SetActive(false);
				alertAdapter = customUIWindow.GetComponent<IAlertPlatformAdapter>();
			}

			RateBox.Instance.AlertAdapter = alertAdapter;
		}
		
	}
}