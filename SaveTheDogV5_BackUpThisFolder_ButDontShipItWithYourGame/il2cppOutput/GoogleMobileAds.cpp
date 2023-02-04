#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.AdInspectorError>
struct Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D;
// System.Action`1<GoogleMobileAds.Common.AdInspectorErrorClientEventArgs>
struct Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3;
// System.Action`1<GoogleMobileAds.Common.AppState>
struct Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79;
// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC;
// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36;
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Api.AdapterStatus>
struct Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IAppOpenAdClient>
struct HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>
struct HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEqualityComparer`1<GoogleMobileAds.Common.IAppOpenAdClient>
struct IEqualityComparer_1_t558B9E9DDA942993AED21BF7E8D0EDD0CF1BA83C;
// System.Collections.Generic.IEqualityComparer`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>
struct IEqualityComparer_1_t75E47BCC874E40DCDFE6AC980E61DAE9B5A5018C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GoogleMobileAds.Api.AdapterStatus>
struct KeyCollection_tCC9477A5A05C7B38CA9D53DA8DD1DCC1766383CC;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GoogleMobileAds.Api.AdapterStatus>
struct ValueCollection_t21D6F5F4A0DA3FE96317F60A51550710DDBA4227;
// System.Collections.Generic.Dictionary`2/Entry<System.String,GoogleMobileAds.Api.AdapterStatus>[]
struct EntryU5BU5D_tD5415EB93F82D82B5CDA561F9AB65653D6DF8B00;
// System.Collections.Generic.HashSet`1/Slot<GoogleMobileAds.Common.IAppOpenAdClient>[]
struct SlotU5BU5D_t330761583E885FA013274B97561DD49938F1093F;
// System.Collections.Generic.HashSet`1/Slot<GoogleMobileAds.Common.IRewardedInterstitialAdClient>[]
struct SlotU5BU5D_tB81369F0A536EDCAB616A97CF8519FF6C9C75033;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2;
// GoogleMobileAds.Api.AdInspectorError
struct AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D;
// GoogleMobileAds.Common.AdInspectorErrorClientEventArgs
struct AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158;
// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// GoogleMobileAds.Api.AdapterStatus
struct AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0;
// GoogleMobileAds.Api.AppOpenAd
struct AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC;
// GoogleMobileAds.Api.AppStateEventNotifier
struct AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF;
// GoogleMobileAds.Common.IAdInspectorErrorClient
struct IAdInspectorErrorClient_t014D7BDEAEADC7BFF5FF32AB1E464B5554B0CF36;
// GoogleMobileAds.Common.IAppOpenAdClient
struct IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1;
// GoogleMobileAds.Common.IAppStateEventClient
struct IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D;
// GoogleMobileAds.IClientFactory
struct IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE;
// GoogleMobileAds.Common.IRewardedInterstitialAdClient
struct IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2;
// GoogleMobileAds.Api.MaxAdContentRating
struct MaxAdContentRating_t8F4AA13668EB7FF7A5F6F369845B5280BBE0BF17;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5;
// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB;
// ResponseInfo
struct ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A;
// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09;
// GoogleMobileAds.Api.RewardedInterstitialAd
struct RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey0
struct U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E;
// GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1
struct U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29;
// GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey0
struct U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1;
// GoogleMobileAds.Api.RewardedInterstitialAd/<Show>c__AnonStorey1
struct U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CAppOpenAdU3Em__0_m71273B9B952EA834D01A35052130EBCD03A44AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CAppOpenAdU3Em__1_m95AB46E70B2551D186C7162F18F337E97309194A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CAppOpenAdU3Em__2_m8073213C182E9465680FE1A3CE46D96C4A89F392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CAppOpenAdU3Em__3_mFB3ABD17EC989BDDC755CF1FF3A605D31F421947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppOpenAd_U3CAppOpenAdU3Em__4_m6114FF50857C139B3E0FD563D142A910B8EE738E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m45206AFE5E93E7F80A181979FC61E5A949DC1CC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m77B22C881DF62A87E8A7A6ACFABBCB30B8D65D6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m2738E457CF79097CF1A91AEDA0EB5E6C520B7BA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD2415C292BEE5623F0CAFAD37CB69675E158C457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mFC434D295BF73788BD37F905892BBEE5EC613F6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_mD9AB20C1FFAEAD6A626A6BBCDFD48A3DF9DF2DB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_mBA91FE835789507100A2CC4E8E854119F23952DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_m7850866C3C79A5D4A3089CAB06307BC70C759358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_m4A3C7126A706F3E3D5F283824AAD5227F45932DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_m734625FBF51CD2C8436A9956714F9E292FF7517B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_m221190AE61A632B50FBD86597A674450BEC0DD76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_m46F6D45ECC414351A8396C8E8C8FAEC66A474F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__0_m4FD384A761281F475F9E2218F9C67FAE0B6D680B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__1_mE790647E69FE71BD265705C2EE567EAC0BACDF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__2_m8B50377DBBC149247995ABFF7DA7A6D0F9B700D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__3_m24EBE0A4DFE9050EC5B1E375E0F4E24CA7E3D3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__4_m13C7A88EA72D423A7344C30A2D38D27851A7CFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__5_m63B410882F4A64A35EF48E1F4E88C38210E84F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__6_mBDCA1D60EFC88A7B2A101CE6847F37384CE4E85D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__7_m3B9289109237C593AAAA7660A4A9E657B6290ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__8_m22E2ED99D3ABD0AE9E78CF74DAEE8620367178F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__0_m26273933C8A362F85F590A101CD03643FD0379C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__1_mF7E0D170847B48C1B22A396E1580BDB52DDF9A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__2_m266EE754E769A33CB0D6FEBF3A3E7B410B1D3EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__3_mCBD9ACD8B03CF3A40FF40A49C549F0B457C21F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__4_m8F48FE74E18083F1DF79AE492152EF0926112C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_m18A05D3639F2F5EBBBB4B21C06E9567B2FD27266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_m352BCDED4CA085897623C5D3B36BED4BC9AD7F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__1_mE53F89F612AD9191B651B3C0603EC1344D6494A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__1_mE8EA1214FDC1A36A539EE33CB06BBC4380EB37B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenAdInspectorU3Ec__AnonStorey1_U3CU3Em__0_m3CDB9AD92681A0486EB120F61FBEB57BF89642FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m53991EB376881064CF9B9277B5A121B7866272A5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300 
{
};

// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Api.AdapterStatus>
struct Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD5415EB93F82D82B5CDA561F9AB65653D6DF8B00* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC9477A5A05C7B38CA9D53DA8DD1DCC1766383CC* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t21D6F5F4A0DA3FE96317F60A51550710DDBA4227* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IAppOpenAdClient>
struct HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t330761583E885FA013274B97561DD49938F1093F* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>
struct HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB81369F0A536EDCAB616A97CF8519FF6C9C75033* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;
};

struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
};

// GoogleMobileAds.Api.AdapterStatus
struct AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdapterState GoogleMobileAds.Api.AdapterStatus::<InitializationState>k__BackingField
	int32_t ___U3CInitializationStateU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Api.AdapterStatus::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_1;
	// System.Int32 GoogleMobileAds.Api.AdapterStatus::<Latency>k__BackingField
	int32_t ___U3CLatencyU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.AppOpenAd
struct AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAppOpenAdClient GoogleMobileAds.Api.AppOpenAd::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.AppOpenAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.AppOpenAd::OnAdFailedToPresentFullScreenContent
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToPresentFullScreenContent_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AppOpenAd::OnAdDidPresentFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidPresentFullScreenContent_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AppOpenAd::OnAdDidDismissFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidDismissFullScreenContent_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.AppOpenAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_6;
};

struct AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_StaticFields
{
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IAppOpenAdClient> GoogleMobileAds.Api.AppOpenAd::loadingClients
	HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17* ___loadingClients_1;
};

// GoogleMobileAds.Api.AppStateEventNotifier
struct AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE  : public RuntimeObject
{
};

struct AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields
{
	// GoogleMobileAds.Common.IAppStateEventClient GoogleMobileAds.Api.AppStateEventNotifier::client
	RuntimeObject* ___client_0;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_5;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_9;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5  : public RuntimeObject
{
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;
};

struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields
{
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* ___instance_2;
};

// ResponseInfo
struct ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A  : public RuntimeObject
{
	// GoogleMobileAds.Common.IResponseInfoClient ResponseInfo::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09  : public RuntimeObject
{
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.RewardedAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___OnUserEarnedReward_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_10;
};

// GoogleMobileAds.Api.RewardedInterstitialAd
struct RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.Api.RewardedInterstitialAd::rewardedInterstitialAdClient
	RuntimeObject* ___rewardedInterstitialAdClient_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdFailedToPresentFullScreenContent
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToPresentFullScreenContent_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdDidPresentFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidPresentFullScreenContent_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdDidDismissFullScreenContent
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidDismissFullScreenContent_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_6;
};

struct RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields
{
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient> GoogleMobileAds.Api.RewardedInterstitialAd::loadingClients
	HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* ___loadingClients_1;
};

// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3  : public RuntimeObject
{
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<CustomData>k__BackingField
	String_t* ___U3CCustomDataU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey0
struct U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey0::adLoadCallback
	Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* ___adLoadCallback_0;
	// GoogleMobileAds.Common.IAppOpenAdClient GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey0::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction_0;
};

// GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1
struct U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdInspectorError> GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1::adInspectorClosedAction
	Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* ___adInspectorClosedAction_0;
};

// GoogleMobileAds.Api.MobileAds/Utils
struct Utils_tABF51ED79C8665BBD39CC4AD306F8B5B4464CD67  : public RuntimeObject
{
};

// GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey0
struct U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey0::adLoadCallback
	Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* ___adLoadCallback_0;
	// GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey0::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Api.RewardedInterstitialAd/<Show>c__AnonStorey1
struct U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedInterstitialAd/<Show>c__AnonStorey1::userEarnedRewardCallback
	Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ___userEarnedRewardCallback_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>
struct Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>
struct Nullable_1_tD9EF87DE17BC8563283D8BCB64EF209BCFE74FD3 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___U3CLoadAdErrorU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdInspectorError
struct AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
};

// GoogleMobileAds.Common.AdInspectorErrorClientEventArgs
struct AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.IAdInspectorErrorClient GoogleMobileAds.Common.AdInspectorErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___U3CAdValueU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB  : public RuntimeObject
{
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_t8F4AA13668EB7FF7A5F6F369845B5280BBE0BF17* ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_tD9EF87DE17BC8563283D8BCB64EF209BCFE74FD3 ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::<TestDeviceIds>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CTestDeviceIdsU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration::<SameAppKeyEnabled>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CSameAppKeyEnabledU3Ek__BackingField_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<GoogleMobileAds.Api.AdInspectorError>
struct Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Common.AdInspectorErrorClientEventArgs>
struct Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Common.AppState>
struct Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Int32 GoogleMobileAds.Api.AdError::GetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdError_GetCode_mA116D849D016CBD0DD09858416FBDAE26A5DE211 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64 (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0__ctor_m78A9FADAE27D95ED5B73FBED4DDA395C4B50701C (U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IAppOpenAdClient>::Add(T)
inline bool HashSet_1_Add_m77B22C881DF62A87E8A7A6ACFABBCB30B8D65D6E (HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9 (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IAppOpenAdClient>::.ctor()
inline void HashSet_1__ctor_mD2415C292BEE5623F0CAFAD37CB69675E158C457 (HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* __this, RuntimeObject* ___sender0, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*, RuntimeObject*, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Api.AppOpenAd::.ctor(GoogleMobileAds.Common.IAppOpenAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd__ctor_m8712CC46DE91737B91B231D8A52D26075994A20C (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(T1,T2)
inline void Action_2_Invoke_m0D4AB9693F9CC5993B5401DFE046C815BBD54CF7_inline (Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* __this, AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* ___arg10, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8*, AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IAppOpenAdClient>::Remove(T)
inline bool HashSet_1_Remove_m2738E457CF79097CF1A91AEDA0EB5E6C520B7BA0 (HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06 (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*, RuntimeObject*, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10 (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A (const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC006F130CC140CE80CA285AAD5974413D196CCD3 (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_m76A4DE8CDB2F00244DF305ACE913CDA65750ADEE (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenAdInspectorU3Ec__AnonStorey1__ctor_m735FFA3170ED94622B9C7E17D043F0B11426269F (U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Common.AdInspectorErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3A854622750D4DC48A4BA5095AE96640DBFCF39F (Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(T)
inline void Action_1_Invoke_m790B395C4CBEA3E5F364964EAC8520817D5C9A92_inline (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// GoogleMobileAds.Common.IAdInspectorErrorClient GoogleMobileAds.Common.AdInspectorErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdInspectorErrorClientEventArgs_get_AdErrorClient_mD9C13714CC9C1B5EE4A5E7D59AA7EAEF7CEC224B_inline (AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdInspectorError::.ctor(GoogleMobileAds.Common.IAdInspectorErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdInspectorError__ctor_mE93C77EEEF4D946EB574A8E22DD786CAE2071519 (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.AdInspectorError>::Invoke(T)
inline void Action_1_Invoke_mC10C27E17B39A65041E89C2ACCE108E9A6C2FD0D_inline (Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* __this, AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D*, AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146 (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m8B60E1EAE8DD8802908DF7398D18814BD5F2F903_inline (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*, RuntimeObject*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0__ctor_m45981BBFF3A963B89B0A20061745D404A885646D (U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>::Add(T)
inline bool HashSet_1_Add_m45206AFE5E93E7F80A181979FC61E5A949DC1CC5 (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<Show>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1__ctor_m5FF29AE3B35F78FAE83C9489D24C16BCFE35314F (U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>::.ctor()
inline void HashSet_1__ctor_mFC434D295BF73788BD37F905892BBEE5EC613F6A (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::.ctor(GoogleMobileAds.Common.IRewardedInterstitialAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(T1,T2)
inline void Action_2_Invoke_m81A3571679D652C4F1924D55802D093169D12479_inline (Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* __this, RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* ___arg10, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36*, RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>::Remove(T)
inline bool HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void System.Action`1<GoogleMobileAds.Api.Reward>::Invoke(T)
inline void Action_1_Invoke_mD16ED15700A9B573C44A2A4CEF4CA51CACA79DCE_inline (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		return;
	}
}
// System.Int32 GoogleMobileAds.Api.AdError::GetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdError_GetCode_mA116D849D016CBD0DD09858416FBDAE26A5DE211 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 GoogleMobileAds.Common.IAdErrorClient::GetCode() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdError::GetDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_GetDomain_m5F044523940454684B989FEC18A398BE0B8A46CD (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String GoogleMobileAds.Common.IAdErrorClient::GetDomain() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdError::GetMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_GetMessage_m1D90CEA0A4CE678016C5D06D73C3F111D6BA370C (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String GoogleMobileAds.Common.IAdErrorClient::GetMessage() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdError::GetCause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdError_tA3BF7518349885A73447524367693A096B3DD1AE* AdError_GetCause_m6BC6B46849DC11860E4C6A172CC9C690846A2934 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.IAdErrorClient::GetCause() */, IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF_il2cpp_TypeInfo_var, L_0);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_2 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_2, L_1, NULL);
		return L_2;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_mD2183315C9A1F6504900AD43F22BB385765FA9F9 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::get_AdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdError_tA3BF7518349885A73447524367693A096B3DD1AE* AdErrorEventArgs_get_AdError_mDEDFB0E86705280AB359EAA0F2DA2ADD8E233EED (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = __this->___U3CAdErrorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = ___value0;
		__this->___U3CAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdErrorEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdErrorEventArgs_get_Message_mDB276E3541BD8EE06CCF258B58D9C436128515F5 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_Message_m91632BD975B8A4CB7C85D154346F3D993CBD805D (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06 (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_LoadAdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* AdFailedToLoadEventArgs_get_LoadAdError_m1024EE5A736DAF310FEE838CEBA91D921ACB919D (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = __this->___U3CLoadAdErrorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___value0;
		__this->___U3CLoadAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdInspectorError::.ctor(GoogleMobileAds.Common.IAdInspectorErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdInspectorError__ctor_mE93C77EEEF4D946EB574A8E22DD786CAE2071519 (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(__this, L_0, NULL);
		return;
	}
}
// GoogleMobileAds.Api.AdInspectorError/AdInspectorErrorCode GoogleMobileAds.Api.AdInspectorError::GetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdInspectorError_GetCode_m318A8A53348DA35D23F9B6E3E88E7C2EE6940186 (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = AdError_GetCode_mA116D849D016CBD0DD09858416FBDAE26A5DE211(__this, NULL);
		return (int32_t)(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AppOpenAd::.ctor(GoogleMobileAds.Common.IAppOpenAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd__ctor_m8712CC46DE91737B91B231D8A52D26075994A20C (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CAppOpenAdU3Em__0_m71273B9B952EA834D01A35052130EBCD03A44AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CAppOpenAdU3Em__1_m95AB46E70B2551D186C7162F18F337E97309194A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CAppOpenAdU3Em__2_m8073213C182E9465680FE1A3CE46D96C4A89F392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CAppOpenAdU3Em__3_mFB3ABD17EC989BDDC755CF1FF3A605D31F421947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_U3CAppOpenAdU3Em__4_m6114FF50857C139B3E0FD563D142A910B8EE738E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		RuntimeObject* L_1 = __this->___client_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_2 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_2, __this, (intptr_t)((void*)AppOpenAd_U3CAppOpenAdU3Em__0_m71273B9B952EA834D01A35052130EBCD03A44AA8_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_1, L_2);
		RuntimeObject* L_3 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_4, __this, (intptr_t)((void*)AppOpenAd_U3CAppOpenAdU3Em__1_m95AB46E70B2551D186C7162F18F337E97309194A_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_6, __this, (intptr_t)((void*)AppOpenAd_U3CAppOpenAdU3Em__2_m8073213C182E9465680FE1A3CE46D96C4A89F392_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_8, __this, (intptr_t)((void*)AppOpenAd_U3CAppOpenAdU3Em__3_mFB3ABD17EC989BDDC755CF1FF3A605D31F421947_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_7, L_8);
		RuntimeObject* L_9 = __this->___client_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_10, __this, (intptr_t)((void*)AppOpenAd_U3CAppOpenAdU3Em__4_m6114FF50857C139B3E0FD563D142A910B8EE738E_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_9, L_10);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnPaidEvent_mB2908CB8DC8DB58F74C5706E666DF9F7B6104EF9 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_2);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnPaidEvent_mC32EB90159BE9CB58975AF5432B749896349E025 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_2);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdFailedToPresentFullScreenContent_mBF74E44D7DD28CE830BA2B7CF1F2B9DA9300D7B3 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_3);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdFailedToPresentFullScreenContent_m65D03AFC2D407959E18F5F7304BF9C14B53D9DCB (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_3);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdDidPresentFullScreenContent_mB83D5B0AA2A92898F34BB5049A02297BDC2EBA36 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_4);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdDidPresentFullScreenContent_m887A8CFDEC8A76F471A99FB82EE77892F0C7218E (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_4);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdDidDismissFullScreenContent_m469DEC3185652A48925AF5731B037D4FCFB9FA2C (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdDidDismissFullScreenContent_m95B78BFD7C7C240859B9D02873BC40C8C7B1D7F7 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_add_OnAdDidRecordImpression_m55C6C541D103B32BA778D168BC1E67BB5A2EE829 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_remove_OnAdDidRecordImpression_m864A776B21D97AACE9FE4BF6838E3709D16F7546 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::LoadAd(System.String,UnityEngine.ScreenOrientation,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.AppOpenAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_LoadAd_m7C5D813171D0A5587B640ADCFC830A5478759CDC (String_t* ___adUnitID0, int32_t ___orientation1, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request2, Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* ___adLoadCallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m77B22C881DF62A87E8A7A6ACFABBCB30B8D65D6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_m18A05D3639F2F5EBBBB4B21C06E9567B2FD27266_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__1_mE8EA1214FDC1A36A539EE33CB06BBC4380EB37B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* V_0 = NULL;
	{
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_0 = (U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE*)il2cpp_codegen_object_new(U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAdU3Ec__AnonStorey0__ctor_m78A9FADAE27D95ED5B73FBED4DDA395C4B50701C(L_0, NULL);
		V_0 = L_0;
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_1 = V_0;
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_2 = ___adLoadCallback3;
		NullCheck(L_1);
		L_1->___adLoadCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adLoadCallback_0), (void*)L_2);
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IAppOpenAdClient GoogleMobileAds.IClientFactory::BuildAppOpenAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_3);
		L_3->___client_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___client_1), (void*)L_5);
		il2cpp_codegen_runtime_class_init_inline(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17* L_6 = ((AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_StaticFields*)il2cpp_codegen_static_fields_for(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var))->___loadingClients_1;
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___client_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = HashSet_1_Add_m77B22C881DF62A87E8A7A6ACFABBCB30B8D65D6E(L_6, L_8, HashSet_1_Add_m77B22C881DF62A87E8A7A6ACFABBCB30B8D65D6E_RuntimeMethod_var);
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___client_1;
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::CreateAppOpenAd() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_11);
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___client_1;
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_14 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_15 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_15, L_14, (intptr_t)((void*)U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_m18A05D3639F2F5EBBBB4B21C06E9567B2FD27266_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_13, L_15);
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___client_1;
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_18 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_19 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_19, L_18, (intptr_t)((void*)U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__1_mE8EA1214FDC1A36A539EE33CB06BBC4380EB37B9_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_17, L_19);
		U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___client_1;
		String_t* L_22 = ___adUnitID0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_23 = ___request2;
		int32_t L_24 = ___orientation1;
		NullCheck(L_21);
		InterfaceActionInvoker3< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D*, int32_t >::Invoke(15 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest,UnityEngine.ScreenOrientation) */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_21, L_22, L_23, L_24);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_Show_m2037E04CE3FAE7C677CEA702F39C20390CAB9024 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___client_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::Show() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_Destroy_mD1F8CE10A274F9681F7D7FF7A591781F6A5E5351 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IAppOpenAdClient::DestroyAppOpenAd() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// ResponseInfo GoogleMobileAds.Api.AppOpenAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* AppOpenAd_GetResponseInfo_m5153FFF713F64DD469CC2AB98FDC2E90F4ACCB43 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(17 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IAppOpenAdClient::GetResponseInfoClient() */, IAppOpenAdClient_t808FB0D044FBF40A9CD2EB35FC6E9DFCF2A911D1_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* L_2 = (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A*)il2cpp_codegen_object_new(ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd__cctor_mD1130C4BD7D204E8C8857E4B8B303662833BA908 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mD2415C292BEE5623F0CAFAD37CB69675E158C457_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17* L_0 = (HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17*)il2cpp_codegen_object_new(HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mD2415C292BEE5623F0CAFAD37CB69675E158C457(L_0, HashSet_1__ctor_mD2415C292BEE5623F0CAFAD37CB69675E158C457_RuntimeMethod_var);
		((AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_StaticFields*)il2cpp_codegen_static_fields_for(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var))->___loadingClients_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_StaticFields*)il2cpp_codegen_static_fields_for(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var))->___loadingClients_1), (void*)L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<AppOpenAd>m__0(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CAppOpenAdU3Em__0_m71273B9B952EA834D01A35052130EBCD03A44AA8 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_3;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_1, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_3 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToPresentFullScreenContent_3;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<AppOpenAd>m__1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CAppOpenAdU3Em__1_m95AB46E70B2551D186C7162F18F337E97309194A (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_4;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidPresentFullScreenContent_4;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<AppOpenAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CAppOpenAdU3Em__2_m8073213C182E9465680FE1A3CE46D96C4A89F392 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidDismissFullScreenContent_5;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<AppOpenAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CAppOpenAdU3Em__3_mFB3ABD17EC989BDDC755CF1FF3A605D31F421947 (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_6;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd::<AppOpenAd>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppOpenAd_U3CAppOpenAdU3Em__4_m6114FF50857C139B3E0FD563D142A910B8EE738E (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_2;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_2;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0__ctor_m78A9FADAE27D95ED5B73FBED4DDA395C4B50701C (U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey0::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_m18A05D3639F2F5EBBBB4B21C06E9567B2FD27266 (U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m2738E457CF79097CF1A91AEDA0EB5E6C520B7BA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_0 = __this->___adLoadCallback_0;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_1 = __this->___adLoadCallback_0;
		RuntimeObject* L_2 = __this->___client_1;
		AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC* L_3 = (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*)il2cpp_codegen_object_new(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AppOpenAd__ctor_m8712CC46DE91737B91B231D8A52D26075994A20C(L_3, L_2, NULL);
		NullCheck(L_1);
		Action_2_Invoke_m0D4AB9693F9CC5993B5401DFE046C815BBD54CF7_inline(L_1, L_3, (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17* L_4 = ((AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_StaticFields*)il2cpp_codegen_static_fields_for(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var))->___loadingClients_1;
		RuntimeObject* L_5 = __this->___client_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Remove_m2738E457CF79097CF1A91AEDA0EB5E6C520B7BA0(L_4, L_5, HashSet_1_Remove_m2738E457CF79097CF1A91AEDA0EB5E6C520B7BA0_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppOpenAd/<LoadAd>c__AnonStorey0::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__1_mE8EA1214FDC1A36A539EE33CB06BBC4380EB37B9 (U3CLoadAdU3Ec__AnonStorey0_t924E37FE8EA08D4B19D5701650F8A18EAF63CFFE* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m2738E457CF79097CF1A91AEDA0EB5E6C520B7BA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_0 = __this->___adLoadCallback_0;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_1, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_3, L_2, NULL);
		V_0 = L_3;
		Action_2_tE49308FCB52FC5298526AD6BBBE0B1E6CF6579E8* L_4 = __this->___adLoadCallback_0;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		Action_2_Invoke_m0D4AB9693F9CC5993B5401DFE046C815BBD54CF7_inline(L_4, (AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC*)NULL, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var);
		HashSet_1_tC8F425706233625FD9E60A181EC8016B7469CF17* L_9 = ((AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_StaticFields*)il2cpp_codegen_static_fields_for(AppOpenAd_tF3D4C7489EF9689BE192F2379D10A39A26B82DAC_il2cpp_TypeInfo_var))->___loadingClients_1;
		RuntimeObject* L_10 = __this->___client_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = HashSet_1_Remove_m2738E457CF79097CF1A91AEDA0EB5E6C520B7BA0(L_9, L_10, HashSet_1_Remove_m2738E457CF79097CF1A91AEDA0EB5E6C520B7BA0_RuntimeMethod_var);
	}

IL_0042:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AppStateEventNotifier::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppStateEventNotifier__cctor_m741EDC54C3A65311800A5B0AC88FAFF6A93A06B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IAppStateEventClient GoogleMobileAds.IClientFactory::BuildAppStateEventClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		((AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields*)il2cpp_codegen_static_fields_for(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var))->___client_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields*)il2cpp_codegen_static_fields_for(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var))->___client_0), (void*)L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppStateEventNotifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppStateEventNotifier__ctor_m542F1A36C3B718E6CCC304B43BA9E6FAD12249A4 (AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppStateEventNotifier::add_AppStateChanged(System.Action`1<GoogleMobileAds.Common.AppState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppStateEventNotifier_add_AppStateChanged_m11DAB106CCCE3EF78F377722C46ED63BCCF36704 (Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields*)il2cpp_codegen_static_fields_for(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var))->___client_0;
		Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IAppStateEventClient::add_AppStateChanged(System.Action`1<GoogleMobileAds.Common.AppState>) */, IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AppStateEventNotifier::remove_AppStateChanged(System.Action`1<GoogleMobileAds.Common.AppState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppStateEventNotifier_remove_AppStateChanged_m9C6E767D608F2F692DF3BEA4DB4EA9FE615E5364 (Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_StaticFields*)il2cpp_codegen_static_fields_for(AppStateEventNotifier_t0A047576C80CBFF891C1E1A0106BA70A5E302FAE_il2cpp_TypeInfo_var))->___client_0;
		Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_tFF28F60745C112FCD21E71B64003D8D58F407B79* >::Invoke(1 /* System.Void GoogleMobileAds.Common.IAppStateEventClient::remove_AppStateChanged(System.Action`1<GoogleMobileAds.Common.AppState>) */, IAppStateEventClient_t1ADD98C9FF5BF82F2B549C910DC8727FF655EF73_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___adUnitId0, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___adSize1, int32_t ___position2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->___client_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_1);
		RuntimeObject* L_2 = __this->___client_0;
		String_t* L_3 = ___adUnitId0;
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_4 = ___adSize1;
		int32_t L_5 = ___position2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158*, int32_t >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_mA9E2DB08311AE9F1D152DAE5A12B521A7C544E26 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___adUnitId0, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___adSize1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->___client_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_1);
		RuntimeObject* L_2 = __this->___client_0;
		String_t* L_3 = ___adUnitId0;
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_4 = ___adSize1;
		int32_t L_5 = ___x2;
		int32_t L_6 = ___y3;
		NullCheck(L_2);
		InterfaceActionInvoker4< String_t*, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158*, int32_t, int32_t >::Invoke(11 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,System.Int32,System.Int32) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6);
		BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdLoaded_m080F143D61034545D5375B44E3E5165CA444CCE2 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_1);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdLoaded_m02556E436A77DFA3C37CB226DA96A3B7443D65AA (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_1;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_1);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFailedToLoad_m92D031919F382DE6C7B6C87F0DAB95AB3B8EDD50 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_2);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdFailedToLoad_m3F81D07D144343E62022DDC7DD4735A41DF90B43 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_2);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdOpening_mFF4CE382B9A9C9A9E43F68D23829440F5417459F (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdOpening_m39B2741A9E313BF92336ACE657A27ADE3BCB4891 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdClosed_m1238848F85F63AE1D5FAE380326E9FD246B5752A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_4);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnAdClosed_mC2DF0471CD2D376CBBA7E01D090486B934DF266F (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_4);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnPaidEvent_mD5707D472E79CC2F501A5C7FBDF465B82C76C29C (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_5);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_remove_OnPaidEvent_m0A62885C2E6C8DF2584F115DD9C8FD4AB4A38023 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_5);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_1 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker1< AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IBannerClient::HideBannerView() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(13 /* System.Void GoogleMobileAds.Common.IBannerClient::ShowBannerView() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(15 /* System.Void GoogleMobileAds.Common.IBannerClient::DestroyBannerView() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Single GoogleMobileAds.Api.BannerView::GetHeightInPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BannerView_GetHeightInPixels_m7E9AEE3A333CC8370B35DBF8E8C6ED89EFDEB4B8 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(16 /* System.Single GoogleMobileAds.Common.IBannerClient::GetHeightInPixels() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single GoogleMobileAds.Api.BannerView::GetWidthInPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BannerView_GetWidthInPixels_m30250357790E167D473D206B4586A6EA6792A8ED (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(17 /* System.Single GoogleMobileAds.Common.IBannerClient::GetWidthInPixels() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::SetPosition(GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_SetPosition_m4306DC8B9B0FB81BFD3C75795416E620F955114B (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, int32_t ___adPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		int32_t L_1 = ___adPosition0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(18 /* System.Void GoogleMobileAds.Common.IBannerClient::SetPosition(GoogleMobileAds.Api.AdPosition) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_SetPosition_m86AD73B0E4F31A2DD1B520C0CEEAE100FF23B644 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(19 /* System.Void GoogleMobileAds.Common.IBannerClient::SetPosition(System.Int32,System.Int32) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_m04F0638EF968385C04608F12F9BBFF1811F1437A (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->___client_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_3 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_3, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_7, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->___client_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_9, __this, (intptr_t)((void*)BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_8, L_9);
		return;
	}
}
// ResponseInfo GoogleMobileAds.Api.BannerView::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* BannerView_GetResponseInfo_m5DE6A19DF03B6A9C81A494365C7D43572F41867D (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(20 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IBannerClient::GetResponseInfoClient() */, IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* L_2 = (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A*)il2cpp_codegen_object_new(ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_m950132C20D9FF852333840439DE8B7E912AED86E (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_1;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_m33285EB72E7B98E9DDE1A768A6E9AED39973E367 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_2;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_1, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_2;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_mE7CB7EF05F18F046FEFE2051610EADC5F7DB26B1 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_3;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_3;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_mA1831E8828F53A1179D0A9FEB046D01B6C6FFC9D (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_4;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_4;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_m7DEA932A7EFF3F20A7ED0F465C4212BDC32CB338 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_5;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		return;
	}
}
// GoogleMobileAds.Api.AdapterStatus GoogleMobileAds.Api.InitializationStatus::getAdapterStatusForClassName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0* InitializationStatus_getAdapterStatusForClassName_m3AF96768C6F7FDD61FEF47B87AC81024E4BB1E47 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, String_t* ___className0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		String_t* L_1 = ___className0;
		NullCheck(L_0);
		AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0* L_2;
		L_2 = InterfaceFuncInvoker1< AdapterStatus_t4DFBD853B6BC534B2B9C9379AC5FA14051FFDEE0*, String_t* >::Invoke(0 /* GoogleMobileAds.Api.AdapterStatus GoogleMobileAds.Common.IInitializationStatusClient::getAdapterStatusForClassName(System.String) */, IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Api.AdapterStatus> GoogleMobileAds.Api.InitializationStatus::getAdapterStatusMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D* InitializationStatus_getAdapterStatusMap_mF3F9583668620A65BB6CD61105146FEFAB32B3E8 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D* L_1;
		L_1 = InterfaceFuncInvoker0< Dictionary_2_tD09BAE2C655BFDAEA7FA3E7C3FA32F26D5D2096D* >::Invoke(1 /* System.Collections.Generic.Dictionary`2<System.String,GoogleMobileAds.Api.AdapterStatus> GoogleMobileAds.Common.IInitializationStatusClient::getAdapterStatusMap() */, IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__0_mD9AB20C1FFAEAD6A626A6BBCDFD48A3DF9DF2DB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__1_mBA91FE835789507100A2CC4E8E854119F23952DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__2_m7850866C3C79A5D4A3089CAB06307BC70C759358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__3_m4A3C7126A706F3E3D5F283824AAD5227F45932DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__4_m734625FBF51CD2C8436A9956714F9E292FF7517B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__5_m221190AE61A632B50FBD86597A674450BEC0DD76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__6_m46F6D45ECC414351A8396C8E8C8FAEC66A474F83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->___client_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_1);
		String_t* L_2 = ___adUnitId0;
		__this->___adUnitId_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adUnitId_1), (void*)L_2);
		__this->___isLoaded_2 = (bool)0;
		RuntimeObject* L_3 = __this->___client_0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__0_mD9AB20C1FFAEAD6A626A6BBCDFD48A3DF9DF2DB7_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->___client_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_7, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__1_mBA91FE835789507100A2CC4E8E854119F23952DF_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_9, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__2_m7850866C3C79A5D4A3089CAB06307BC70C759358_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_11, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__3_m4A3C7126A706F3E3D5F283824AAD5227F45932DD_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->___client_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_13 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_13, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__4_m734625FBF51CD2C8436A9956714F9E292FF7517B_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_15 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_15, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__5_m221190AE61A632B50FBD86597A674450BEC0DD76_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->___client_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_17 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_17, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__6_m46F6D45ECC414351A8396C8E8C8FAEC66A474F83_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m91C35A6E06656E5654EF283678A7865C238BB4FC (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_4);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_mE3B77178758E9D191422324F4529BE71B59724C9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_4);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_m959F3574110E01E5E986D7AB584A9E62E65D7F97 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdOpening_m9BDE013724D1AC139CB1BA5B926342F70BF677D2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_m1ACD7753DE0DF8499C6BB968EF86274F0D57B1C2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToShow_m18C6774092B30031238243EC60776794B06989E4 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToShow_7);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToShow_mF3FAD3D6907C027908D1A9B6C3D1CACBD0C1564C (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToShow_7);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdDidRecordImpression_m7AE5EC0E482543630B476FDE4CA1BFB9B229E775 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdDidRecordImpression_mA2A6EC524857CD0EE43FDD33BFD5A2A855D70905 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnPaidEvent_m59DCB06E8627578CF944D5AD153D8DEE8665D92D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_9);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnPaidEvent_m505066A3D988917FCB136E193C9BC34AB372FF9F (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_9);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		String_t* L_1 = __this->___adUnitId_1;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___isLoaded_2 = (bool)0;
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IInterstitialClient::DestroyInterstitial() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// ResponseInfo GoogleMobileAds.Api.InterstitialAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* InterstitialAd_GetResponseInfo_m0888CB0DFA12A76C489181A74ABC91E615539F5D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(17 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IInterstitialClient::GetResponseInfoClient() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* L_2 = (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A*)il2cpp_codegen_object_new(ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_mD9AB20C1FFAEAD6A626A6BBCDFD48A3DF9DF2DB7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		__this->___isLoaded_2 = (bool)1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_3;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_mBA91FE835789507100A2CC4E8E854119F23952DF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_1, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_4;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_m7850866C3C79A5D4A3089CAB06307BC70C759358 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_5;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_m4A3C7126A706F3E3D5F283824AAD5227F45932DD (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_6;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_m734625FBF51CD2C8436A9956714F9E292FF7517B (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_1, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_3 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_7;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_m221190AE61A632B50FBD86597A674450BEC0DD76 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_m46F6D45ECC414351A8396C8E8C8FAEC66A474F83 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_9;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(__this, L_0, NULL);
		RuntimeObject* L_1 = ___client0;
		__this->___client_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_1);
		return;
	}
}
// ResponseInfo GoogleMobileAds.Api.LoadAdError::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* LoadAdError_GetResponseInfo_m69D081FA02479A3BE179238EE35B78AF1CFDE9E8 (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.ILoadAdErrorClient::GetResponseInfoClient() */, ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* L_2 = (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A*)il2cpp_codegen_object_new(ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E(L_2, L_1, NULL);
		return L_2;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mC2DBA6C870EEBF993492FF04A29F4AE567D45C53 (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___client_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10 (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14(NULL);
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_1 = (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5*)il2cpp_codegen_object_new(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10(L_1, NULL);
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2), (void*)L_1);
	}

IL_0014:
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_2 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2;
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_0 = (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E*)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74(L_0, NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_1 = V_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->___initCompleteAction_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___initCompleteAction_0), (void*)L_2);
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_3;
		L_3 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___client_0;
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_5 = V_0;
		Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* L_6 = (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499*)il2cpp_codegen_object_new(Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mC006F130CC140CE80CA285AAD5974413D196CCD3(L_6, L_5, (intptr_t)((void*)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_4, L_6);
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_m76A4DE8CDB2F00244DF305ACE913CDA65750ADEE(NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::DisableMediationInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_DisableMediationInitialization_m2ED0577236796274DDA5AB6A865669E013262821 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::DisableMediationInitialization() */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetApplicationMuted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetApplicationMuted_m267D8100F87D613627A627DFB53E8A0D48C92C8A (bool ___muted0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		bool L_2 = ___muted0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::SetApplicationMuted(System.Boolean) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetRequestConfiguration_m1F0110671038CF67255ADAA3CFDB4CFC6E1E7AF5 (RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* ___requestConfiguration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* L_2 = ___requestConfiguration0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* >::Invoke(7 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Api.MobileAds::GetRequestConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* MobileAds_GetRequestConfiguration_m8BA2E9E3186E0AA8F3D0FD6E9D643D32A995430D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		NullCheck(L_1);
		RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* L_2;
		L_2 = InterfaceFuncInvoker0< RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* >::Invoke(8 /* GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Common.IMobileAdsClient::GetRequestConfiguration() */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetApplicationVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetApplicationVolume_mB5DDE1F385743EA7E66A64ED250081A91B4C4AE1 (float ___volume0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		float L_2 = ___volume0;
		NullCheck(L_1);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::SetApplicationVolume(System.Single) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::SetiOSAppPauseOnBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetiOSAppPauseOnBackground_m2626F076EEDF748681C27AC832E79AC9E93756E7 (bool ___pause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		bool L_2 = ___pause0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::SetiOSAppPauseOnBackground(System.Boolean) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::OpenAdInspector(System.Action`1<GoogleMobileAds.Api.AdInspectorError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_OpenAdInspector_m82664E9F13F8B0373A8529EE41F5295C3F2ECA70 (Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* ___adInspectorClosedAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenAdInspectorU3Ec__AnonStorey1_U3CU3Em__0_m3CDB9AD92681A0486EB120F61FBEB57BF89642FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* V_0 = NULL;
	{
		U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* L_0 = (U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29*)il2cpp_codegen_object_new(U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenAdInspectorU3Ec__AnonStorey1__ctor_m735FFA3170ED94622B9C7E17D043F0B11426269F(L_0, NULL);
		V_0 = L_0;
		U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* L_1 = V_0;
		Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* L_2 = ___adInspectorClosedAction0;
		NullCheck(L_1);
		L_1->___adInspectorClosedAction_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adInspectorClosedAction_0), (void*)L_2);
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_3;
		L_3 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___client_0;
		U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* L_5 = V_0;
		Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3* L_6 = (Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3*)il2cpp_codegen_object_new(Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m3A854622750D4DC48A4BA5095AE96640DBFCF39F(L_6, L_5, (intptr_t)((void*)U3COpenAdInspectorU3Ec__AnonStorey1_U3CU3Em__0_m3CDB9AD92681A0486EB120F61FBEB57BF89642FF_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t2601981BDC871EC09EBB3A3F82611A6D7C3581A3* >::Invoke(9 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::OpenAdInspector(System.Action`1<GoogleMobileAds.Common.AdInspectorErrorClientEventArgs>) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_4, L_6);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1;
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = il2cpp_codegen_get_type(L_3, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E_RuntimeMethod_var);
		V_1 = L_4;
		Type_t* L_5 = V_1;
		RuntimeObject* L_6;
		L_6 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_5, NULL);
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1;
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m1A2ADAC0C61D673C13E8B06068EDFBACC58FCD14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single GoogleMobileAds.Api.MobileAds/Utils::GetDeviceScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_GetDeviceScale_m7C7E5A26369A7559001C4C9B39F06587211A5C8F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single GoogleMobileAds.Common.IMobileAdsClient::GetDeviceScale() */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Int32 GoogleMobileAds.Api.MobileAds/Utils::GetDeviceSafeWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetDeviceSafeWidth_m2A67365794C45FB7BE2D557C9E9CE23E3FD6B3A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0;
		L_0 = MobileAds_get_Instance_m90A099F9597B22FEEC2CB4739F31219727C3614A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___client_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 GoogleMobileAds.Common.IMobileAdsClient::GetDeviceSafeWidth() */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = __this->___initCompleteAction_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_1 = __this->___initCompleteAction_0;
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* L_3 = (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD*)il2cpp_codegen_object_new(InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15(L_3, L_2, NULL);
		NullCheck(L_1);
		Action_1_Invoke_m790B395C4CBEA3E5F364964EAC8520817D5C9A92_inline(L_1, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenAdInspectorU3Ec__AnonStorey1__ctor_m735FFA3170ED94622B9C7E17D043F0B11426269F (U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<OpenAdInspector>c__AnonStorey1::<>m__0(GoogleMobileAds.Common.AdInspectorErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenAdInspectorU3Ec__AnonStorey1_U3CU3Em__0_m3CDB9AD92681A0486EB120F61FBEB57BF89642FF (U3COpenAdInspectorU3Ec__AnonStorey1_t8FA972E1259D9624FD470630976445C1D42A7D29* __this, AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* V_0 = NULL;
	{
		Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* L_0 = __this->___adInspectorClosedAction_0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		V_0 = (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D*)NULL;
		AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* L_1 = ___args0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = AdInspectorErrorClientEventArgs_get_AdErrorClient_mD9C13714CC9C1B5EE4A5E7D59AA7EAEF7CEC224B_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* L_4 = ___args0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = AdInspectorErrorClientEventArgs_get_AdErrorClient_mD9C13714CC9C1B5EE4A5E7D59AA7EAEF7CEC224B_inline(L_4, NULL);
		AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* L_6 = (AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D*)il2cpp_codegen_object_new(AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AdInspectorError__ctor_mE93C77EEEF4D946EB574A8E22DD786CAE2071519(L_6, L_5, NULL);
		V_0 = L_6;
	}

IL_002a:
	{
		Action_1_t22BCEEA28B80F9170EC19984592D155304718F9D* L_7 = __this->___adInspectorClosedAction_0;
		AdInspectorError_tD384323496C44553EA9EA953DBCFE6D24BC0534D* L_8 = V_0;
		NullCheck(L_7);
		Action_1_Invoke_mC10C27E17B39A65041E89C2ACCE108E9A6C2FD0D_inline(L_7, L_8, NULL);
	}

IL_0036:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		return;
	}
}
// System.String ResponseInfo::GetMediationAdapterClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseInfo_GetMediationAdapterClassName_m632FFCC87B521B5F20822BB7E61ADFA9D94470CF (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String GoogleMobileAds.Common.IResponseInfoClient::GetMediationAdapterClassName() */, IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String ResponseInfo::GetResponseId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseInfo_GetResponseId_mF2C68A53076A0CF99E794293612B3340CFA9A63B (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String GoogleMobileAds.Common.IResponseInfoClient::GetResponseId() */, IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String ResponseInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseInfo_ToString_mB39E1B5039E9D2D997557EE5D3E1E2CEDC79A4AE (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m1070740DC6E2FBC47C0F16E8FFCAF39BB5EC8BAD (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__0_m4FD384A761281F475F9E2218F9C67FAE0B6D680B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__1_mE790647E69FE71BD265705C2EE567EAC0BACDF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__2_m8B50377DBBC149247995ABFF7DA7A6D0F9B700D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__3_m24EBE0A4DFE9050EC5B1E375E0F4E24CA7E3D3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__4_m13C7A88EA72D423A7344C30A2D38D27851A7CFC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__5_m63B410882F4A64A35EF48E1F4E88C38210E84F1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__6_mBDCA1D60EFC88A7B2A101CE6847F37384CE4E85D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__7_m3B9289109237C593AAAA7660A4A9E657B6290ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__8_m22E2ED99D3ABD0AE9E78CF74DAEE8620367178F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->___client_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_1);
		String_t* L_2 = ___adUnitId0;
		__this->___adUnitId_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adUnitId_1), (void*)L_2);
		__this->___isLoaded_2 = (bool)0;
		RuntimeObject* L_3 = __this->___client_0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__0_m4FD384A761281F475F9E2218F9C67FAE0B6D680B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->___client_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_7, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__1_mE790647E69FE71BD265705C2EE567EAC0BACDF86_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->___client_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_9, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__2_m8B50377DBBC149247995ABFF7DA7A6D0F9B700D5_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_11, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__3_m24EBE0A4DFE9050EC5B1E375E0F4E24CA7E3D3CB_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__4_m13C7A88EA72D423A7344C30A2D38D27851A7CFC2_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->___client_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_15 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_15, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__5_m63B410882F4A64A35EF48E1F4E88C38210E84F1B_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_17 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_17, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__6_mBDCA1D60EFC88A7B2A101CE6847F37384CE4E85D_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_16, L_17);
		RuntimeObject* L_18 = __this->___client_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_19 = (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)il2cpp_codegen_object_new(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146(L_19, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__7_m3B9289109237C593AAAA7660A4A9E657B6290ED5_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_18, L_19);
		RuntimeObject* L_20 = __this->___client_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_21 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_21, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__8_m22E2ED99D3ABD0AE9E78CF74DAEE8620367178F9_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_mD0B12FB2ABBDE30E8732E99B5C779433E6BAD6F6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdLoaded_mE88357C807E78FE3B707A546F9B30B3093C00DE6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToLoad_mB26D105153B1DB189E66011AABA403D89431895B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_4);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToLoad_m41BD7D8E336FF59C55E8551EF6050B73524A5304 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_4);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdOpening_mD07D6D5227A775A714601F6E5632DE6466956E57 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdOpening_m3E59A310DEA1D14AE4AAE19435A4D24869120DA5 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_mACC55256BAE633DB7C82568589572958F0EC2C50 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdClosed_mC8EE3841BDB00AB65A340756A9DBD6F18A167617 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToShow_mC937D2B8125C2FBCDCED3248B6E7930E45D07574 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToShow_7);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToShow_mE8F9758B66CA3B799D093F66876924EF8525170F (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToShow_7);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdDidRecordImpression_m207460CA24A2C5E09C87C359E4B91A5F64DF3B2E (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdDidRecordImpression_m4AC37F2DADCA23A652440F1879C4E3F18FAC933C (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_mB60E7A9832C6D85C8F0BF788A019E684C72A6989 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_9);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnUserEarnedReward_m42D91A51C9CA31961FCE210034CAC29AF2F56254 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_9);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnPaidEvent_m297662B76404AA7695C1F29AE2B8C6F37C1B6AE0 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_10);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnPaidEvent_m798414B3D29FC6DC6AA788B06AED81BA6105BBB4 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_10);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_m47B97DF0CABB6A9C4F75D61C39149B20C5E95DDB (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		String_t* L_1 = __this->___adUnitId_1;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(17 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mF937659797435830409614A6B7A9CC29FA031948 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___isLoaded_2 = (bool)0;
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(19 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::Show() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_SetServerSideVerificationOptions_mCF679FC1BCA3D98F16A2E4F83391570E738B9B78 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* ___serverSideVerificationOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* L_1 = ___serverSideVerificationOptions0;
		NullCheck(L_0);
		InterfaceActionInvoker1< ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* >::Invoke(20 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// GoogleMobileAds.Api.Reward GoogleMobileAds.Api.RewardedAd::GetRewardItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* RewardedAd_GetRewardItem_m2860C01A84FBA3A530D0EABCF40E8A12B2ACD8E1 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___isLoaded_2;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->___client_0;
		NullCheck(L_1);
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_2;
		L_2 = InterfaceFuncInvoker0< Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* >::Invoke(18 /* GoogleMobileAds.Api.Reward GoogleMobileAds.Common.IRewardedAdClient::GetRewardItem() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0017:
	{
		return (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*)NULL;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Destroy_mF51E7A752A2B5C378E94553FE48482D19BDF7319 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(22 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::DestroyRewardedAd() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// ResponseInfo GoogleMobileAds.Api.RewardedAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* RewardedAd_GetResponseInfo_mD14D7719356C84FE6D452A22A620B2898CE8DD6F (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(21 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IRewardedAdClient::GetResponseInfoClient() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* L_2 = (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A*)il2cpp_codegen_object_new(ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__0_m4FD384A761281F475F9E2218F9C67FAE0B6D680B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		__this->___isLoaded_2 = (bool)1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_3;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__1_mE790647E69FE71BD265705C2EE567EAC0BACDF86 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_1, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_4;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__2(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__2_m8B50377DBBC149247995ABFF7DA7A6D0F9B700D5 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_1, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_3 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_7;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__3_m24EBE0A4DFE9050EC5B1E375E0F4E24CA7E3D3CB (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_5;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__4_m13C7A88EA72D423A7344C30A2D38D27851A7CFC2 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_6;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__5(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__5_m63B410882F4A64A35EF48E1F4E88C38210E84F1B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_1, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_3 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_7;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__6_mBDCA1D60EFC88A7B2A101CE6847F37384CE4E85D (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__7(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__7_m3B9289109237C593AAAA7660A4A9E657B6290ED5 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = __this->___OnUserEarnedReward_9;
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m8B60E1EAE8DD8802908DF7398D18814BD5F2F903_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__8(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__8_m22E2ED99D3ABD0AE9E78CF74DAEE8620367178F9 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_10;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_10;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::.ctor(GoogleMobileAds.Common.IRewardedInterstitialAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__0_m26273933C8A362F85F590A101CD03643FD0379C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__1_mF7E0D170847B48C1B22A396E1580BDB52DDF9A82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__2_m266EE754E769A33CB0D6FEBF3A3E7B410B1D3EFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__3_mCBD9ACD8B03CF3A40FF40A49C549F0B457C21F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__4_m8F48FE74E18083F1DF79AE492152EF0926112C82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->___rewardedInterstitialAdClient_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedInterstitialAdClient_0), (void*)L_0);
		RuntimeObject* L_1 = __this->___rewardedInterstitialAdClient_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_2 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_2, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__0_m26273933C8A362F85F590A101CD03643FD0379C4_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_1, L_2);
		RuntimeObject* L_3 = __this->___rewardedInterstitialAdClient_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_4, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__1_mF7E0D170847B48C1B22A396E1580BDB52DDF9A82_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = __this->___rewardedInterstitialAdClient_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_6, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__2_m266EE754E769A33CB0D6FEBF3A3E7B410B1D3EFC_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = __this->___rewardedInterstitialAdClient_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_8, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__3_mCBD9ACD8B03CF3A40FF40A49C549F0B457C21F69_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_7, L_8);
		RuntimeObject* L_9 = __this->___rewardedInterstitialAdClient_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_10, __this, (intptr_t)((void*)RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__4_m8F48FE74E18083F1DF79AE492152EF0926112C82_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_9, L_10);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnPaidEvent_m4EAB67A2C74C40BBF8DE34FF882608D5F24C7473 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_2);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnPaidEvent_m6FC6CA8FDC8C170C8A3AAC8DBACFC608E909A5F4 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_2;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_2 = (&__this->___OnPaidEvent_2);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_2, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_5, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_8) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdFailedToPresentFullScreenContent_m360A736195BD68841370B5AD9642C44990033CC9 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_3);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdFailedToPresentFullScreenContent_mE285F8DDE04910B6C578D1AD4F78982D2FBE41A2 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_0 = NULL;
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3** L_2 = (&__this->___OnAdFailedToPresentFullScreenContent_3);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_3 = V_1;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_6 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*>(L_2, ((EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)Castclass((RuntimeObject*)L_5, EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_8 = V_0;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_8) == ((RuntimeObject*)(EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdDidPresentFullScreenContent_m56E8CB641F64C4B20E1AF115CB1D0C99D8AB2551 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_4);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdDidPresentFullScreenContent_mBDEF370F5D373E8382A52214288E30FF90BBC62D (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidPresentFullScreenContent_4);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdDidDismissFullScreenContent_m472DB7B9B7E4DB35805B416C09CE6558EAE60043 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdDidDismissFullScreenContent_m56CD8026F53AAD99B5A751EE6F841981EAAA0C0A (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidDismissFullScreenContent_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_add_OnAdDidRecordImpression_mEA0C53C27FB3B25D17E7CB75EC61740DE7799B62 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::remove_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_remove_OnAdDidRecordImpression_m71C8BC2DC41AB23703AD803961B824CAA01FA626 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdDidRecordImpression_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::LoadAd(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_LoadAd_m9AECAE03C5A3095E5E1A3232616168A01BF8C367 (String_t* ___adUnitID0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* ___adLoadCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m45206AFE5E93E7F80A181979FC61E5A949DC1CC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_m352BCDED4CA085897623C5D3B36BED4BC9AD7F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__1_mE53F89F612AD9191B651B3C0603EC1344D6494A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* V_0 = NULL;
	{
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_0 = (U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1*)il2cpp_codegen_object_new(U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAdU3Ec__AnonStorey0__ctor_m45981BBFF3A963B89B0A20061745D404A885646D(L_0, NULL);
		V_0 = L_0;
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_1 = V_0;
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_2 = ___adLoadCallback2;
		NullCheck(L_1);
		L_1->___adLoadCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___adLoadCallback_0), (void*)L_2);
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = MobileAds_GetClientFactory_mFA1B4391A9B66823B3461742EA7623C6A650395E(NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.IClientFactory::BuildRewardedInterstitialAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_3);
		L_3->___client_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___client_1), (void*)L_5);
		il2cpp_codegen_runtime_class_init_inline(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* L_6 = ((RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields*)il2cpp_codegen_static_fields_for(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var))->___loadingClients_1;
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___client_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = HashSet_1_Add_m45206AFE5E93E7F80A181979FC61E5A949DC1CC5(L_6, L_8, HashSet_1_Add_m45206AFE5E93E7F80A181979FC61E5A949DC1CC5_RuntimeMethod_var);
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___client_1;
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::CreateRewardedInterstitialAd() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_11);
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___client_1;
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_14 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_15 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_15, L_14, (intptr_t)((void*)U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_m352BCDED4CA085897623C5D3B36BED4BC9AD7F33_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_13, L_15);
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___client_1;
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_18 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_19 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_19, L_18, (intptr_t)((void*)U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__1_mE53F89F612AD9191B651B3C0603EC1344D6494A3_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_17, L_19);
		U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___client_1;
		String_t* L_22 = ___adUnitID0;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_23 = ___request1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(17 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::Show(System.Action`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_Show_m94EC715CC0BB7273E1207CAD0B5D6D0E2248363E (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ___userEarnedRewardCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m53991EB376881064CF9B9277B5A121B7866272A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA* V_0 = NULL;
	{
		U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA* L_0 = (U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA*)il2cpp_codegen_object_new(U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowU3Ec__AnonStorey1__ctor_m5FF29AE3B35F78FAE83C9489D24C16BCFE35314F(L_0, NULL);
		V_0 = L_0;
		U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA* L_1 = V_0;
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_2 = ___userEarnedRewardCallback0;
		NullCheck(L_1);
		L_1->___userEarnedRewardCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___userEarnedRewardCallback_0), (void*)L_2);
		RuntimeObject* L_3 = __this->___rewardedInterstitialAdClient_0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_4 = __this->___rewardedInterstitialAdClient_0;
		U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA* L_5 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)il2cpp_codegen_object_new(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146(L_6, L_5, (intptr_t)((void*)U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m53991EB376881064CF9B9277B5A121B7866272A5_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_7 = __this->___rewardedInterstitialAdClient_0;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(19 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::Show() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_7);
	}

IL_003a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_SetServerSideVerificationOptions_m4A2DF87B2A1019C7BE35A70CFBC8600729979F70 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* ___serverSideVerificationOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___rewardedInterstitialAdClient_0;
		ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* L_1 = ___serverSideVerificationOptions0;
		NullCheck(L_0);
		InterfaceActionInvoker1< ServerSideVerificationOptions_tCB0CF0403C3E4DDA0E47F9594BE01D214B4673C3* >::Invoke(20 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::SetServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions) */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// GoogleMobileAds.Api.Reward GoogleMobileAds.Api.RewardedInterstitialAd::GetRewardItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* RewardedInterstitialAd_GetRewardItem_m6F950D81055503877135AFC3FCB7D33E946CBAAC (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___rewardedInterstitialAdClient_0;
		NullCheck(L_0);
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_1;
		L_1 = InterfaceFuncInvoker0< Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* >::Invoke(18 /* GoogleMobileAds.Api.Reward GoogleMobileAds.Common.IRewardedInterstitialAdClient::GetRewardItem() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_Destroy_m1795BB7A135FE3D473385CD77D9D0FAD9987765E (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___rewardedInterstitialAdClient_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(22 /* System.Void GoogleMobileAds.Common.IRewardedInterstitialAdClient::DestroyRewardedInterstitialAd() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// ResponseInfo GoogleMobileAds.Api.RewardedInterstitialAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* RewardedInterstitialAd_GetResponseInfo_m0DDBE07BA88BD5D352304389E31DAE29FE61C3CC (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___rewardedInterstitialAdClient_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(21 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IRewardedInterstitialAdClient::GetResponseInfoClient() */, IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* L_2 = (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A*)il2cpp_codegen_object_new(ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd__cctor_mDE74D8BCB5DBE435E70A17A2BBB6111148C3AC52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mFC434D295BF73788BD37F905892BBEE5EC613F6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* L_0 = (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE*)il2cpp_codegen_object_new(HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mFC434D295BF73788BD37F905892BBEE5EC613F6A(L_0, HashSet_1__ctor_mFC434D295BF73788BD37F905892BBEE5EC613F6A_RuntimeMethod_var);
		((RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields*)il2cpp_codegen_static_fields_for(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var))->___loadingClients_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields*)il2cpp_codegen_static_fields_for(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var))->___loadingClients_1), (void*)L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RewardedInterstitialAd>m__0(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__0_m26273933C8A362F85F590A101CD03643FD0379C4 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToPresentFullScreenContent_3;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_1, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_3 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToPresentFullScreenContent_3;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RewardedInterstitialAd>m__1(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__1_mF7E0D170847B48C1B22A396E1580BDB52DDF9A82 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidPresentFullScreenContent_4;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidPresentFullScreenContent_4;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RewardedInterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__2_m266EE754E769A33CB0D6FEBF3A3E7B410B1D3EFC (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidDismissFullScreenContent_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidDismissFullScreenContent_5;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RewardedInterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__3_mCBD9ACD8B03CF3A40FF40A49C549F0B457C21F69 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_6;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::<RewardedInterstitialAd>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd_U3CRewardedInterstitialAdU3Em__4_m8F48FE74E18083F1DF79AE492152EF0926112C82 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_2;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_2;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0__ctor_m45981BBFF3A963B89B0A20061745D404A885646D (U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey0::<>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__0_m352BCDED4CA085897623C5D3B36BED4BC9AD7F33 (U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_0 = __this->___adLoadCallback_0;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_1 = __this->___adLoadCallback_0;
		RuntimeObject* L_2 = __this->___client_1;
		RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* L_3 = (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*)il2cpp_codegen_object_new(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6(L_3, L_2, NULL);
		NullCheck(L_1);
		Action_2_Invoke_m81A3571679D652C4F1924D55802D093169D12479_inline(L_1, L_3, (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* L_4 = ((RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields*)il2cpp_codegen_static_fields_for(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var))->___loadingClients_1;
		RuntimeObject* L_5 = __this->___client_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F(L_4, L_5, HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<LoadAd>c__AnonStorey0::<>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAdU3Ec__AnonStorey0_U3CU3Em__1_mE53F89F612AD9191B651B3C0603EC1344D6494A3 (U3CLoadAdU3Ec__AnonStorey0_t2C84592161A61CC94CDD71B5FFFA8330D74338B1* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_0 = __this->___adLoadCallback_0;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_1, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_3, L_2, NULL);
		V_0 = L_3;
		Action_2_t97F13572CD833FB4B4C58C0740807331AC5A8B36* L_4 = __this->___adLoadCallback_0;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		Action_2_Invoke_m81A3571679D652C4F1924D55802D093169D12479_inline(L_4, (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*)NULL, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* L_9 = ((RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields*)il2cpp_codegen_static_fields_for(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var))->___loadingClients_1;
		RuntimeObject* L_10 = __this->___client_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F(L_9, L_10, HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var);
	}

IL_0042:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<Show>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1__ctor_m5FF29AE3B35F78FAE83C9489D24C16BCFE35314F (U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/<Show>c__AnonStorey1::<>m__0(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m53991EB376881064CF9B9277B5A121B7866272A5 (U3CShowU3Ec__AnonStorey1_t4E12F6485B9475CCAFCBC050EC87C9AAC1DD16AA* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___args1, const RuntimeMethod* method) 
{
	{
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_0 = __this->___userEarnedRewardCallback_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_1 = __this->___userEarnedRewardCallback_0;
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_2 = ___args1;
		NullCheck(L_1);
		Action_1_Invoke_mD16ED15700A9B573C44A2A4CEF4CA51CACA79DCE_inline(L_1, L_2, NULL);
	}

IL_0017:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = ___value0;
		__this->___U3CAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLoadAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___value0;
		__this->___U3CLoadAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdInspectorErrorClientEventArgs_get_AdErrorClient_mD9C13714CC9C1B5EE4A5E7D59AA7EAEF7CEC224B_inline (AdInspectorErrorClientEventArgs_tA430D6E41FFCB38B31390D9EA1860D279FA4EBFA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
