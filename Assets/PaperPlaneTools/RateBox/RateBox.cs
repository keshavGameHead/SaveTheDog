namespace PaperPlaneTools
{
	using UnityEngine;
	using System.Collections;
	using System;
	using System.IO;
	using System.Xml.Serialization;
	using System.Runtime.InteropServices;

	/// <summary>
	/// RateBox asset main class
	/// </summary>
	public class RateBox 
	{
#if UNITY_IOS
		[DllImport("__Internal")]
		extern static private bool _reviewControllerIsAvailable ();
		[DllImport("__Internal")]
		extern static private void _reviewControllerShow ();
#endif

		/// <summary>
		/// Path to file where <see cref="RateBox.Statistics"/> is stored
		/// </summary>
		static private string statisticsPath = "com.paperplanetools.ratebox.RateBoxStatistics.xml";

		static private RateBox instance;
		//private RateBoxStatistics stat;

		private RateBox(RateBoxStatistics stat) 
		{
			Statistics = stat;
			DebugMode = false;
		}

		/// <summary>
		/// Singleton for RateBox instance
		/// </summary>
		public static RateBox Instance 
		{
			get  
			{
				if (instance == null) 
				{
					string path = Application.persistentDataPath + "/" + statisticsPath;
					RateBoxStatistics stat = null;
					if(File.Exists(path)) {
						try {
							var serializer = new XmlSerializer(typeof(RateBoxStatistics));
							var stream = new FileStream(path, FileMode.Open);
							stat = serializer.Deserialize(stream) as RateBoxStatistics;
							stream.Close();
						}
						catch (Exception e) {
							stat = null;
							Debug.Log(e.Message);
						}
					}
					if (stat == null) {
						stat = new RateBoxStatistics (); 
					}

					instance = new RateBox (stat);

#if (UNITY_EDITOR)
						instance.DebugMode = true;
#endif

				}
				return instance;
			}
		}

		/// <summary>
		/// Return store url for the app.
		/// This function is only for your convenience and designed to work with AppStore and Google Play.
		/// If you need more complex behaviour, for example your app supports Amazone Store you should not use this function, but create the new one.
		/// Note: In Unity Editor return AppStore url
		/// </summary>
		/// <returns>The Store URL.</returns>
		/// <param name="iTunesAppId"> App id from iTuncesConnect</param>
		/// <param name="googlePlayMarketAppBundleId">App bundle identifier.</param>
		public static string GetStoreUrl(string iTunesAppId, string googlePlayMarketAppBundleId) 
		{
			string url = "";
#if (UNITY_IPHONE || UNITY_EDITOR)
				url = String.Format("https://itunes.apple.com/app/id{0}?action=write-review",  WWW.EscapeURL(iTunesAppId));
#endif
#if UNITY_ANDROID
				url = String.Format("https://play.google.com/store/apps/details?id={0}",  WWW.EscapeURL(googlePlayMarketAppBundleId));
#endif
			return url;
		}

		/// <summary>
		/// Turn on debug to report conditions check log.
		/// This will help to understand why Rate dialog doesn't appear after calling Show method
		/// Default value is false, however if in Unity Editor environment default value is true
		/// Can be set directly in code or automatically if using RateBoxPrefab ('Log Debug Message' field)

		/// </summary>
		public bool DebugMode 
		{
			get;
			set;
		}

		/// <summary>
		/// http(s) url to open after user press the Rate button.
		/// In most cases the url from <see cref="PaperPlaneTools.RateBox.GetStoreUrl"/> function will met your requirements.
		/// Can be set directly in code, or after calling init function, or  automatically if using RateBoxPrefab ('App Store App Id' and 'Play Market App Bundle Id' fields)
		/// </summary>
		public string RateUrl 
		{
			get;
			set;
		}

		/// <summary>
		/// The set of conditions under which rate dialog is presented. 
		/// If any requirements are not met, calling Show is ignored.
		/// This is useful when you want to limit number of rate dialog impressions.
		/// Can be set directly in code, or after calling init function, or automatically if using RateBoxPrefab ('DISPLAY CONDITIONS' group)
		/// For more information check <see cref="PaperPlaneTools.RateBoxConditions"/> class
		/// </summary>
		public RateBoxConditions Conditions 
		{
			get;
			set;
		}

		/// <summary>
		/// Additional settings for RateBox
		/// see <see cref="PaperPlaneTools.RateBoxSettings"/> for details.
		/// </summary>
		public RateBoxSettings Settings 
		{
			get;
			set;
		}

		/// <summary>
		/// Holds statistics which RateBox rely on when check <see cref="PaperPlaneTools.RateBox.Conditions"/>.
		/// For more information check <see cref="PaperPlaneTools.RateBoxStatistics"/> class
		/// </summary>
		public RateBoxStatistics Statistics 
		{
			get;
			private set;
		}

		/// <summary>
		/// Holds strings (like title, message etc) to use when call Show() or ForceShow() functions without arguments
		/// Can be set directly in code, or automatically if using RateBoxPrefab ('TEXT' group)
		/// For more information check <see cref="PaperPlaneTools.RateBoxTextSettings"/> class
		/// </summary>
		public RateBoxTextSettings DefaultTextSettings 
		{
			get;
			set;
		}

		/// <summary>
		/// This adapter will be used to show Alert
		/// By default is null, which means native alert window will be used
		/// If you want to show your custom designed window you need to implement IAlertPlatformAdapter
		/// </summary>
		public IAlertPlatformAdapter AlertAdapter 
		{
			get;
			set;
		}

		/// <summary>
		/// Disclaimer: Call Init function only if you don't use RateBoxPrefab. 
		///             Otherwise RateBoxPrefab script will call Init for you with arguments from the inspector.
		/// Call Init after the application is launched, or when it returns from a background state in order to increment 
		/// session counter correctly.
		/// </summary>
		/// <param name="rateUrl">
		///   http(s) url to open after user press the Rate button.
		/// </param>
		/// <param name="conditions">
		///   The set of conditions under which a rate dialog should be presented. 
		///   If any requirements are not meet, calling Show will be ignored.
		///   This is useful when you want to limit number of rate dialog impressions.
		///   If null, default restrictions will be used. 
		///   Check RateBoxConditions to learn about default values
		/// </param>
		/// <param name="textSettings">
		///   Holds strings (like title, message etc) to use when call Show() or ForceShow() functions without arguments
		///   Can be set directly in code, or automatically if using RateBoxPrefab ('TEXT' group)
		///   If null, you need to call Show and Force show with arguments; default functions will not work
		/// </param>
		public void Init(string rateUrl, RateBoxConditions conditions = null, RateBoxTextSettings textSettings = null, RateBoxSettings settings = null) 
		{
			int time = Time ();
			if (Statistics.ApplicationVersion == null || Statistics.ApplicationVersion != Application.version) 
			{
				Statistics = new RateBoxStatistics ();
				Statistics.ApplicationVersion = Application.version;
			}

			if (Statistics.AppInstallAt <= 0) 
			{
				Statistics.AppInstallAt = time;
			}

			Statistics.AppLaunchAt = time;
			Statistics.SessionsCount++;

			Conditions = (conditions == null) ? new RateBoxConditions() : conditions;
			Settings = (settings == null) ? new RateBoxSettings () : settings;
			DefaultTextSettings = textSettings;
			RateUrl = rateUrl;

			SaveStatistics ();
		}

		/// <summary>
		/// Show a rate dialog if all restrictions are met. 
		/// Restrictions are set when calling Init function with conditions argument != null 
		/// Disclaimer: DefaultTextSettings will be totally ignored
		/// </summary>
		/// <param name="title">Title of the dialog</param>
		/// <param name="message">Message </param>
		/// <param name="rateButtonTitle">Rate button title. For example: "Rate"</param>
		/// <param name="postponeButtonTilte">Postpone button title. For example: "Later"</param>
		/// <param name="rejectButtonTitle">Reject button title. If null, third button is not shown. For example: "Never" for 3-buttons dialog, or null for 2-buttons dialog</param>
		public void Show(string title, string message, string rateButtonTitle, string postponeButtonTilte, string rejectButtonTitle = null)
		{
			if (CheckConditionsAreMet ()) 
			{
				Statistics.DialogShownAt = Time ();
				SaveStatistics ();
#if (UNITY_IPHONE && !UNITY_EDITOR)
				if (Settings.UseIOSReview && _reviewControllerIsAvailable()) {
					_reviewControllerShow();
					return;
				} 
#endif

				ForceShow (title, message, rateButtonTitle, postponeButtonTilte, rejectButtonTitle);
			}
		}

		/// <summary>
		/// Basically function does the same as Show function with arguments, but takes arguments from DefaultTextSettings.
		/// Usually <see cref="PaperPlaneTools.RateBox.DefaultTextSettings"/> is set automatically if using RateBoxPrefab, but <see cref="PaperPlaneTools.RateBox.DefaultTextSettings"/> also can be set directly in code
		/// </summary>
		public void Show() {
			if (DefaultTextSettings == null) {
				DebugLog ("Can't show a dialog because dialog strings are not configured. Please drag PaperPlaneTools/Resources/RateBox/RateBoxPrefab to your scene or set DefaultTextSettings manually.");			
				return;
			}
			Show (DefaultTextSettings.Title, DefaultTextSettings.Message, DefaultTextSettings.RateButtonTitle, DefaultTextSettings.PostponeButtonTitle, DefaultTextSettings.RejectButtonTitle);
		}

		/// <summary>
		/// Show a rate dialog without checking any restrictions. 
		/// Designed to show a rate dialog from game settings menu.
		/// Doesn't affect postpone cooldown, even if user press postponeButtonTilte button.
		/// However, if the user press rateButtonTitle or rejectButtonTitle buttons the dialog will not be displayed again after calling Show function.
		/// Disclaimer: <see cref="PaperPlaneTools.RateBox.DefaultTextSettings"/> will be totally ignored.
		/// </summary>
		/// <param name="title">Title of the dialog</param>
		/// <param name="message">Message </param>
		/// <param name="rateButtonTitle">Rate button title. For example: "Rate"</param>
		/// <param name="postponeButtonTilte">Postpone button title. For example: "Later"</param>
		/// <param name="rejectButtonTitle">Reject button title. If null, third button is not shown. For example: "Never" for 3-buttons dialog, or null for 2-buttons dialog</param>
		public void ForceShow(string title, string message, string rateButtonTitle, string postponeButtonTilte, string rejectButtonTitle = null)
		{
			Alert alert = new Alert (title, message)
				.SetPositiveButton (rateButtonTitle, () => {
					GoToRateUrl();	
				})
				.SetNeutralButton (postponeButtonTilte)
				.AddOptions (new AlertIOSOptions () {
					PreferableButton = Alert.ButtonType.Positive
				});

			if (rejectButtonTitle != null) 
			{
				alert.SetNegativeButton (rejectButtonTitle, () => {
					Statistics.DialogIsRejected = true;
					SaveStatistics();
				});
			}
			alert.SetAdapter(AlertAdapter);
			alert.Show ();
		}


		/// <summary>
		/// Basically function does the same as ForceShow function with arguments, but takes arguments from DefaultTextSettings.
		/// Usually <see cref="PaperPlaneTools.RateBox.DefaultTextSettings"/> is set automatically if using RateBoxPrefab, but <see cref="PaperPlaneTools.RateBox.DefaultTextSettings"/> also can be set directly in code
		/// </summary>
		public void ForceShow() {
			if (DefaultTextSettings == null) {
				DebugLog ("Can't show a dialog because dialog strings are not configured. Please drag PaperPlaneTools/Resources/RateBox/RateBoxPrefab to your scene or set DefaultTextSettings manually.");			
				return;
			}
			ForceShow (DefaultTextSettings.Title, DefaultTextSettings.Message, DefaultTextSettings.RateButtonTitle, DefaultTextSettings.PostponeButtonTitle, DefaultTextSettings.RejectButtonTitle);
		}

		/// <summary>
		/// Increments the custom counter.
		/// Call IncrementCustomCounter to increment the counter if MinCustomEventsCount restriction is greater than 0
		/// </summary>
		public void IncrementCustomCounter(int value = 1)
		{
			Statistics.CustomEventCount += value;
			SaveStatistics ();
		}

		/// <summary>
		/// Check all restrictions.
		/// Call CheckConditionsAreMet function to predict if Show would prompt a rate dialog
		/// </summary>
		public bool CheckConditionsAreMet()
		{
			
			int time = Time ();
			if (Conditions == null) {
				DebugLog ("Conditions are NOT met because Init function is never called.");
				return false;
			}

			if (Statistics.DialogIsRejected) 
			{
				DebugLog ("Conditions are NOT met because dialog was rejected; DialogIsRejected == true, this flag will be cleared after new application version is detected.");
				return false;
			}

			if (Statistics.DialogIsRated) 
			{
				DebugLog ("Conditions are NOT met because user has already rate the app; DialogIsRated == true, this flag will be cleared after new application version is detected.");
				return false;
			}

			if (Statistics.SessionsCount < Conditions.MinSessionCount) 
			{
				DebugLog(String.Format(
					"Conditions.MinSessionCount is NOT met; {0} < {1}. Session counter increases everytime Init function is called.", 
					Statistics.SessionsCount,
					Conditions.MinSessionCount
				));
				return false;
			}

			if (Statistics.CustomEventCount < Conditions.MinCustomEventsCount) 
			{
				DebugLog(String.Format(
					"Conditions.MinCustomEventsCount is NOT met; {0} < {1}. Counter increases everytime IncrementCustomCounter function is called. ", 
					Statistics.CustomEventCount,
					Conditions.MinCustomEventsCount
				));
				return false;
			}

			if (Statistics.AppInstallAt + Conditions.DelayAfterInstallInSeconds > time) 
			{
				DebugLog(String.Format(
					"Conditions.DelayAfterInstallInSeconds is NOT met. Need to wait {3} more seconds. Install time = {0}, Conditions.DelayAfterInstallInSeconds = {1}, now = {2}", 
					Statistics.AppInstallAt,
					Conditions.DelayAfterInstallInSeconds,
					time,
					Statistics.AppInstallAt + Conditions.DelayAfterInstallInSeconds - time
				));
				return false;
			}

			if (Statistics.AppLaunchAt + Conditions.DelayAfterLaunchInSeconds > time) 
			{
				DebugLog(String.Format(
					"Conditions.DelayAfterLaunchInSeconds is not met. Need to wait {3} more seconds. Launch time = {0}, Conditions.DelayAfterLaunchInSeconds = {1}, now = {2}", 
					Statistics.AppLaunchAt,
					Conditions.DelayAfterLaunchInSeconds,
					time,
					Statistics.AppLaunchAt + Conditions.DelayAfterLaunchInSeconds - time
				));
				return false;
			}
				
			if (Statistics.DialogShownAt + Conditions.PostponeCooldownInSeconds > time) 
			{
				DebugLog(String.Format(
					"Conditions.PostponeCooldownInSeconds is NOT met. Need to wait {3} more seconds. Show time = {0}, Conditions.PostponeCooldownInSeconds = {1}, now = {2}", 
					Statistics.DialogShownAt,
					Conditions.PostponeCooldownInSeconds,
					time,
					Statistics.DialogShownAt + Conditions.PostponeCooldownInSeconds - time
				));
				return false;
			}

			if(Conditions.RequireInternetConnection && Application.internetReachability == NetworkReachability.NotReachable){ 
				DebugLog(String.Format(
					"Conditions.RequireInternetConnection is NOT met."
				));
				return false;
			}

			DebugLog ("All conditions are met.");
			return true;
		}

		/// <summary>
		/// Clears the statistics
		/// Normally this function is called automatically when new app's version is detected. 
		/// However, it can be handy to use it for test purpose.
		/// Important: It is not a good idea to clear statistics in release version of the applications
		/// </summary>
		public void ClearStatistics() 
		{
			Statistics = new RateBoxStatistics ();
			SaveStatistics ();
		}

		/// <summary>
		/// Permanently saves Statistics. 
		/// It's really rare when Statistics is manupulated outside the RateBox class, and I would not recomend you to do so without a strong reason.
		/// However, if you have such reason call SaveStatistics after you've changed Statistic to store it permanently
		/// </summary>
		public bool SaveStatistics() 
		{
			try {
				string path = Application.persistentDataPath + "/" + statisticsPath;
				var serializer = new XmlSerializer(typeof(RateBoxStatistics));
	 			var stream = new FileStream(path, FileMode.Create);
	 			serializer.Serialize(stream, Statistics);
	 			stream.Close();
			}
			catch (Exception e) {
				Debug.Log(e.Message);
				return false;
			}
			return true;
		}

		private int Time()
		{
			var epochStart = new System.DateTime(1970, 1, 1, 8, 0, 0, System.DateTimeKind.Utc);
			return (int) Math.Floor((System.DateTime.UtcNow - epochStart).TotalSeconds);	
		}


		private void GoToRateUrl() {
			Statistics.DialogIsRated = true;
			SaveStatistics ();
			Application.OpenURL(RateUrl);
		}

		private void DebugLog(string str)
		{
			if (DebugMode) 
			{
				Debug.Log("RateBox: " +str);
			}
		}
	}
}