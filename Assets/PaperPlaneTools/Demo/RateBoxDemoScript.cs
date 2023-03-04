namespace PaperPlaneTools
{
	using UnityEngine;
	using System.Collections;

	using System;
	using PaperPlaneTools;
	using UnityEngine.UI;

	public class RateBoxDemoScript : MonoBehaviour 
	{
		public Text infoText;

		void Update() {
			infoText.text = GetDebugText ();
		}
		public void OnButtonShow() {
			RateBox.Instance.Show ();
		}
		public void OnButtonForceShow() {
			RateBox.Instance.ForceShow ();
		}

		private string GetDebugText() 
		{
			var epochStart = new System.DateTime(1970, 1, 1, 8, 0, 0, System.DateTimeKind.Utc);
			int time =  (int) Math.Floor((System.DateTime.UtcNow - epochStart).TotalSeconds);	
			var stat = RateBox.Instance.Statistics;
			var conditions = RateBox.Instance.Conditions;

			if (conditions == null) {
				return "RateBox.Instance.Conditions was not called";
			}

			string res = "";
			int value;

			// Application version
			res += ("App version: " + Application.version + "\n");

			//Wait after first launch
			value = stat.AppInstallAt + conditions.DelayAfterInstallInSeconds - time;
			res += ("Install cooldown: " + (value > 0 ? String.Format("<color=red>wait {0} sec.</color>", value) : "<color=green>OK</color>") + "\n");

			//Wait after application launch
			value = stat.AppLaunchAt + conditions.DelayAfterLaunchInSeconds - time;
			res += ("Launch cooldown: " + (value > 0 ? String.Format("<color=red>wait {0} sec.</color>", value) : "<color=green>OK</color>") + "\n");

			//Wait after previous demonstration
			value = stat.DialogShownAt + conditions.PostponeCooldownInSeconds - time;
			res += ("Demonstartion cooldown: " + (value > 0 ? String.Format("<color=red>wait {0} sec.</color>", value) : "<color=green>OK</color>") + "\n");

			// Check internet connection 
            res += ("Internet connection: " + ((Application.internetReachability == NetworkReachability.NotReachable) 
				? (conditions.RequireInternetConnection ? "<color=red>Failed (no Internet)</color>" : "<color=green>OK (no Internet)</color>") 
				: "<color=green>OK</color>"
				) + "\n");

			// Check if 'Never Show' button (rejectButtonTitle) has been ever pressed
			// If true, calling Show will be ignored unless new version of the application is detected or ClearStatistics is called
			res += ("Dialog rejected: " + (stat.DialogIsRejected ? "<color=red>Failed (rejected)</color>" : "<color=green>OK (not rejected)</color>")+ "\n");

			// Check if 'Rate' button (rateButtonTitle) has been ever pressed
			// If true, calling Show will be ignored unless new version of the application is detected or ClearStatistics is called
			res += ("Rated: " + (stat.DialogIsRated ? "<color=red>Failed (already rated)</color>" : "<color=green>OK (not rated)</color>")+ "\n");


			//Session count
			value = conditions.MinSessionCount - stat.SessionsCount;
			res += ("Sessions: " + (value > 0 ? String.Format("<color=red>wait {0} more sesssions</color>", value) : "<color=green>OK</color>") + "\n");

			//Custom event count
			value = conditions.MinCustomEventsCount - stat.CustomEventCount;
			res += ("Custom events: " + (value > 0 ? String.Format("<color=red>wait {0} more events</color>", value) : "<color=green>OK</color>") + "\n");

			res += ("Url: " + RateBox.Instance.RateUrl + "\n");

			return res;
			

		}
	}
}