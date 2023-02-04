#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Comparison`1<Sirenix.Serialization.PrefabModification>
struct Comparison_1_t266E6E7A90604B921B8E4751EB1EB695B2961EED;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.HashSet`1<System.Type>>
struct Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Object,System.Object,System.Object>
struct DoubleLookupDictionary_3_tF9966B9DC1257238AEAF91AFB9AABFFEF07A02A5;
// Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Func`2<System.Object,System.Object>>
struct DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07;
// Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Delegate>
struct DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t8E50A30565DC033F3BDF1627DA5A9C930C1E0DB9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Object,System.Object>>>
struct KeyCollection_t701CF2F9BA1D193104A01496B581B6A3F38D8DC4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Delegate>>
struct KeyCollection_t02541CB969C6789E9BB983900971E523FEA71BC7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.HashSet`1<System.Type>>
struct KeyCollection_tCACF0F935C55F552E0FD0DDA438EC25BBF25ED51;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.String>
struct KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Type>
struct KeyCollection_t56C9CA539771D68F44D87D0E711E4CFF69326192;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<System.Type>
struct Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Object,System.Object>>>
struct ValueCollection_t5F9B90EE460F9D5D33F86C21995A946FF8457245;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Delegate>>
struct ValueCollection_t74FDEA2937112B440C9793D59E228CD60DE451FC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.HashSet`1<System.Type>>
struct ValueCollection_t1D1B27DB918D05BA0A63482CB9982A09024878DC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.String>
struct ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Type>
struct ValueCollection_tC72ADD3C4A1BECE1A0E419F63C5C423DD518C857;
// Sirenix.Serialization.Utilities.ValueGetter`2<System.Object,System.IntPtr>
struct ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414;
// Sirenix.Serialization.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Object,System.Object>>>[]
struct EntryU5BU5D_tE9BE14F441DCFD2977A08126ED2F533542FBAFB8;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Delegate>>[]
struct EntryU5BU5D_tEEDA5F4359FEF3DEC4D529C4F114429079673B0E;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.HashSet`1<System.Type>>[]
struct EntryU5BU5D_t17F8E70A5CCB9392AF3EB4EF446604C8AB4372FA;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.String>[]
struct EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Type>[]
struct EntryU5BU5D_tB314925F934D4288E8F1FEFD9BAB2450767E315F;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88;
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// Sirenix.Serialization.Utilities.FastTypeComparer
struct FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_tC47C1E6A3DC1ADA77819AF705CC1D1175315876D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Sirenix.Serialization.Utilities.ImmutableList
struct ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// Sirenix.Serialization.Utilities.MemberAliasFieldInfo
struct MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656;
// Sirenix.Serialization.Utilities.MemberAliasMethodInfo
struct MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18;
// Sirenix.Serialization.Utilities.MemberAliasPropertyInfo
struct MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// Sirenix.Serialization.PrefabModification
struct PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Sirenix.Serialization.Utilities.WeakValueGetter
struct WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3;
// Sirenix.Serialization.Utilities.WeakValueSetter
struct WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD;
// Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25
struct U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15;
// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871;
// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F;
// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD;
// Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41
struct U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD;
// Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42
struct U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45;
// Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47
struct U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817;
// Sirenix.Serialization.UnitySerializationUtility/<>c
struct U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A;
// Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t0C7255F6A4588E842EFEF680C770229492707203;
// Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t9040DA5309D00DEBB765D34EBF8949494D38294A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatterUtilities_tBAB60F8536042EE1F6432327A20A0DB39020E1F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD890B0F65ABAD0B3D3FDCE92EDC9BC15264F36B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodBase_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1;
IL2CPP_EXTERN_C String_t* _stringLiteral072BA90B274B502615639084DC3D7FCC63407A24;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral0998B927332BD3D3FA31ADAA179A89C9ED471F54;
IL2CPP_EXTERN_C String_t* _stringLiteral0A12E14A8352046747ED2DAAB8A78C057C6AE00E;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0BB39DE8D1B747008B7AA481357BD906FEA90B6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814;
IL2CPP_EXTERN_C String_t* _stringLiteral0C52B300840D30CF95D86AED2546C77721EE5F99;
IL2CPP_EXTERN_C String_t* _stringLiteral0CE918CF589A0B3A3BDB90F0F98BCC43CDF6169E;
IL2CPP_EXTERN_C String_t* _stringLiteral0CEBF7DFA17440E9873C47A2C1BE712F98DFA500;
IL2CPP_EXTERN_C String_t* _stringLiteral0D78A3ACF08834A8208E9C1EAB783D9E372B0E45;
IL2CPP_EXTERN_C String_t* _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E;
IL2CPP_EXTERN_C String_t* _stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645;
IL2CPP_EXTERN_C String_t* _stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96;
IL2CPP_EXTERN_C String_t* _stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral18BBD42CCE9B175CCD6F5CA37762D740A0B5A5C4;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9F773AF09A196B0A76B00E4B47084B3EA86D59;
IL2CPP_EXTERN_C String_t* _stringLiteral1B6D0EA4FFAEA7868BA3D296BF046EF1266CEC55;
IL2CPP_EXTERN_C String_t* _stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282;
IL2CPP_EXTERN_C String_t* _stringLiteral1C50918CD5619BDE9BDBED1D23983EEBAD065B57;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral21F6FFBE5C595684B2E59EF3E0B83D1172BFA69E;
IL2CPP_EXTERN_C String_t* _stringLiteral2210DC84C50D37C279FE93BEDD2A7B12B749BA3B;
IL2CPP_EXTERN_C String_t* _stringLiteral22363B2DA57DE0197C3DC04546321A605E3FFE02;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23998DBCE1A1F83012093E4B71C64B024670D733;
IL2CPP_EXTERN_C String_t* _stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E;
IL2CPP_EXTERN_C String_t* _stringLiteral24AEC96AAC2379CB03D9ED44346655AC81FAE3DE;
IL2CPP_EXTERN_C String_t* _stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D;
IL2CPP_EXTERN_C String_t* _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499;
IL2CPP_EXTERN_C String_t* _stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B;
IL2CPP_EXTERN_C String_t* _stringLiteral286CC02C1E7ED462D7D2D31546D5144F88661A2F;
IL2CPP_EXTERN_C String_t* _stringLiteral28A2974B55097EBB10C3D44D4452824517C0783D;
IL2CPP_EXTERN_C String_t* _stringLiteral2900020C8C73B769305C05646CF927B358E92966;
IL2CPP_EXTERN_C String_t* _stringLiteral2D308A3610717843215FF698C5DC2B84ABDC6705;
IL2CPP_EXTERN_C String_t* _stringLiteral2E3ED7A81B1913E943A744C8F9E7D5EB5C672B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral2E4441B58AEC6A28560FB3E17B198D20AEFBD3D7;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB2011F6A6D5DF54BEB205C0A83C64BCCBB3CE1;
IL2CPP_EXTERN_C String_t* _stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3;
IL2CPP_EXTERN_C String_t* _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral33F3CCC8C96B52CBA9D88D899779B6191CE15B79;
IL2CPP_EXTERN_C String_t* _stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C;
IL2CPP_EXTERN_C String_t* _stringLiteral3680357E36BF098D58315A89BD03F078921BEFD9;
IL2CPP_EXTERN_C String_t* _stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC;
IL2CPP_EXTERN_C String_t* _stringLiteral36F26CE56BFC86CF905B1202DB5A7633261FCA47;
IL2CPP_EXTERN_C String_t* _stringLiteral370CFD53E33E4EFE27924264F033C97807D3B553;
IL2CPP_EXTERN_C String_t* _stringLiteral384565B8399EC9A224FB52B7078096010121FA9F;
IL2CPP_EXTERN_C String_t* _stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral3A875C2DDB0E75D33980FFCBCC3004D425279B20;
IL2CPP_EXTERN_C String_t* _stringLiteral3B5E495CDE8B6F083E7D5ACE1D945067609680FC;
IL2CPP_EXTERN_C String_t* _stringLiteral3C686C624D22B0C45E4FADFB00FA535DDDC88AD7;
IL2CPP_EXTERN_C String_t* _stringLiteral3F530C05EDCBF7716458575421F02CF2C179352F;
IL2CPP_EXTERN_C String_t* _stringLiteral40238A1A323AEE2FA699BCF0BB5F71A5CCC87DA2;
IL2CPP_EXTERN_C String_t* _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59;
IL2CPP_EXTERN_C String_t* _stringLiteral43C759A2427665422C3C60545704071B53161510;
IL2CPP_EXTERN_C String_t* _stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4;
IL2CPP_EXTERN_C String_t* _stringLiteral45E91B775C05667BB0C4313D3AF0298D560E3F90;
IL2CPP_EXTERN_C String_t* _stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral49AE794C00022ECA141068DEA9531BF6E0D342B7;
IL2CPP_EXTERN_C String_t* _stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471;
IL2CPP_EXTERN_C String_t* _stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral532311522446D888867656699DB97A234896ECE0;
IL2CPP_EXTERN_C String_t* _stringLiteral541BC3E626400B590FFDBE860C1855349210E425;
IL2CPP_EXTERN_C String_t* _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C;
IL2CPP_EXTERN_C String_t* _stringLiteral55E606CEDF36876109C1C2004C2DCF1B25DE95A1;
IL2CPP_EXTERN_C String_t* _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D;
IL2CPP_EXTERN_C String_t* _stringLiteral581430FB5E2AB80389A430804CEF0F2382806766;
IL2CPP_EXTERN_C String_t* _stringLiteral5917A064FBFAF0DF11A326FEA4CCBAFFA668E43A;
IL2CPP_EXTERN_C String_t* _stringLiteral5B41A58E45555854EC2026B9B5F8243AA9E7ED4B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5CAD421923F0F10D02AFE6EA17ED4E929131E356;
IL2CPP_EXTERN_C String_t* _stringLiteral5DFC03B35CE1610D507097EBBBD36CF45BCB4C2C;
IL2CPP_EXTERN_C String_t* _stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F;
IL2CPP_EXTERN_C String_t* _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680;
IL2CPP_EXTERN_C String_t* _stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42;
IL2CPP_EXTERN_C String_t* _stringLiteral61C6D968B7FE88D4B8A63934DD5685C362457520;
IL2CPP_EXTERN_C String_t* _stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteral679D068D573133B9C7C465FC6CF9C9D07B531421;
IL2CPP_EXTERN_C String_t* _stringLiteral6A3D04F009CE456B611375CDCB93697F9F93314B;
IL2CPP_EXTERN_C String_t* _stringLiteral6A76FCB19BBA6079C7B0AF8D9FBA28F21155CB78;
IL2CPP_EXTERN_C String_t* _stringLiteral6A7C5B87AC840B649D5115CC2F065246EA1D14D2;
IL2CPP_EXTERN_C String_t* _stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59;
IL2CPP_EXTERN_C String_t* _stringLiteral6A86BA126A7E3A6780C81DFDC4654EEDA711D881;
IL2CPP_EXTERN_C String_t* _stringLiteral6AF94847D8333B0BCB378F091360854B8D58B6F9;
IL2CPP_EXTERN_C String_t* _stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6;
IL2CPP_EXTERN_C String_t* _stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8C975CC62CF419550282B028FB7E3A1F591D06;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8F98E9633CEAA294D5E0716A7DFE13EF8CCF6C;
IL2CPP_EXTERN_C String_t* _stringLiteral6C92044AA503422C8954E73697B146F1E63C9334;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB17CEF37092BF11409AA447C34F194421A10B8;
IL2CPP_EXTERN_C String_t* _stringLiteral6D8FF8DB7E82CED1C565F940C532A5A2BB643CEF;
IL2CPP_EXTERN_C String_t* _stringLiteral6E0FA423BE483BF423BD92086B411B16CAD1BCC6;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral6FA4C59C48F20F657EA95225B529B162ECF44EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral6FCB3E628798FEE20D20EC67ED09A53128D4BC2E;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral73708E57866F385D8A16EE244A5943522286EB8E;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral766E767D6A87AB03C7C3410F3665A93D03D6E9FA;
IL2CPP_EXTERN_C String_t* _stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB;
IL2CPP_EXTERN_C String_t* _stringLiteral77BB4FFDFB178041A1B27761291B83B0B4D9CC03;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7AB8B44988B970CC5C32DF979DCC41D9F4392F23;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB7D34E749351FF41F13FEFE203BD9A3E3133A0;
IL2CPP_EXTERN_C String_t* _stringLiteral7C3D0F99DF1B534F06138C8CCF9638478F3E6499;
IL2CPP_EXTERN_C String_t* _stringLiteral7F497E973411BC854B5A2BE7DA46204C7859FC6F;
IL2CPP_EXTERN_C String_t* _stringLiteral83882E2E410B213AB2B2289E29DC55945FAD39F3;
IL2CPP_EXTERN_C String_t* _stringLiteral85E9CE6AD4896D7DAC7FD63267FC79467CB4862F;
IL2CPP_EXTERN_C String_t* _stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D;
IL2CPP_EXTERN_C String_t* _stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE;
IL2CPP_EXTERN_C String_t* _stringLiteral89337E2EE35A3C198227FBA81922CE5F0C58D97F;
IL2CPP_EXTERN_C String_t* _stringLiteral8940E1FEA4EBF3CA20C44768AA93531C62B71B4A;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD5428D0D7693EA23B9301AD08C2C5147DFE422;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1D304CED4C13075109A2D82DE6D8D24A9E3678;
IL2CPP_EXTERN_C String_t* _stringLiteral8C231B3C1DD723D0564B3FC078E20657B6C821C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8DFF4CFCB48843FA0B74F54FD72D6C945EF41953;
IL2CPP_EXTERN_C String_t* _stringLiteral902761964D1B51BF73EA832887150DC4CD16D65B;
IL2CPP_EXTERN_C String_t* _stringLiteral90A683BBF1FEB32AEC0B5DED0CC88DD136FC5CE7;
IL2CPP_EXTERN_C String_t* _stringLiteral934962903D946CC131DF8E5E4E575453098EEF43;
IL2CPP_EXTERN_C String_t* _stringLiteral979BEF74EBFAB7697A86533A10926355727B6C8A;
IL2CPP_EXTERN_C String_t* _stringLiteral98ED1E1F1BFD6992A0B518CB20563E6381318B8F;
IL2CPP_EXTERN_C String_t* _stringLiteral99201352CB96CC1C32BEF52CD271CF53199FF8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB5FCE33702D239DF36758E2369160F0D2A806A;
IL2CPP_EXTERN_C String_t* _stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D;
IL2CPP_EXTERN_C String_t* _stringLiteral9C48C24D4BF1ED95579220DFFA96B8E7E7AB87E0;
IL2CPP_EXTERN_C String_t* _stringLiteral9D03F517F20E147CE2C2F50B69EFB70B9DBDA7E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA041A903507FD76791B65E77B8DA1BF219158F7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA32674451B983F172BF67FC604D118D404FD19E6;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D6D6129E2AA416A3AD79CDD0C93B36F3B4F3F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826;
IL2CPP_EXTERN_C String_t* _stringLiteralA8547678D958192955E69B63AFFFA701CC73DBE8;
IL2CPP_EXTERN_C String_t* _stringLiteralA971E6F33BE8C290E391DA92D49C7B1309E3795D;
IL2CPP_EXTERN_C String_t* _stringLiteralA9C6E7553EC8AA085F5FDB9F92B7707363BED95D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD0928C03BDC2C023E2CF3BC347393F87144F9F8;
IL2CPP_EXTERN_C String_t* _stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59;
IL2CPP_EXTERN_C String_t* _stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A;
IL2CPP_EXTERN_C String_t* _stringLiteralB1868FA5803D4E948C556DEC84B3C733E6C6863C;
IL2CPP_EXTERN_C String_t* _stringLiteralB27BC2DBD9E4582303E95015D30F8DB415DB3D4B;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D;
IL2CPP_EXTERN_C String_t* _stringLiteralB69353B06B1314407246F1AC38E57393F5AEC72E;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB7D5E5AC531E559325A91A03E52812F6DB3706F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E7D625DFBC9C92FA0449D5E3E0BE263DECD0EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBB95AED94347EEEE80FE2B58CC6819F8D88029C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E;
IL2CPP_EXTERN_C String_t* _stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261;
IL2CPP_EXTERN_C String_t* _stringLiteralBEADF129C0FBE570705EB6183DA8896AF1EE36DD;
IL2CPP_EXTERN_C String_t* _stringLiteralBF45CADC16AD267EA891B4231D162B68FDED748D;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110;
IL2CPP_EXTERN_C String_t* _stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118;
IL2CPP_EXTERN_C String_t* _stringLiteralC5A553F3851704DFEED79230EBCEC65739012BE7;
IL2CPP_EXTERN_C String_t* _stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13;
IL2CPP_EXTERN_C String_t* _stringLiteralC6711B5838E686DD662577EF29FC942D7FBBA6AE;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EB7E9CF33F38E0ED8E72FB570BC3A2AD6B8D52;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E96B02CE2FCA04F04D40AA6924D3CF419BF743;
IL2CPP_EXTERN_C String_t* _stringLiteralC94CA552630B8AC1ADF21BAF5252FC9092E4DDDC;
IL2CPP_EXTERN_C String_t* _stringLiteralC986D07788FAD84AD4C91118B24FB60F06A41D34;
IL2CPP_EXTERN_C String_t* _stringLiteralCB2070BB5AC5DA50197474C74B7EA4D7BDEEBCB1;
IL2CPP_EXTERN_C String_t* _stringLiteralCEBC2707039661BD61D98F991B27F2B9CB160373;
IL2CPP_EXTERN_C String_t* _stringLiteralCF55DB7CA65AEC3E52A69DAAA96E4F262E80D577;
IL2CPP_EXTERN_C String_t* _stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998;
IL2CPP_EXTERN_C String_t* _stringLiteralD268E825BBBA4A484453E18A5BE5FA70EF65968B;
IL2CPP_EXTERN_C String_t* _stringLiteralD34ED529A5E207D27C3E70E6556A1ADD9F7E4A04;
IL2CPP_EXTERN_C String_t* _stringLiteralD525221FF38EAF1A30491622A0B39D5D960A7815;
IL2CPP_EXTERN_C String_t* _stringLiteralD88EC033DEAF162C44E191CE77B510F07AACCDA5;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralDAB2782BCFFB875073F11FC79423426C1C2B07DF;
IL2CPP_EXTERN_C String_t* _stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF7342DCBF4F4F80F2C4D42F5991B8E851510BD;
IL2CPP_EXTERN_C String_t* _stringLiteralDFC500CF01D877A89AA3F6E3447F79A733BA63FF;
IL2CPP_EXTERN_C String_t* _stringLiteralE11BCBD02DE56176C5AAB76634169ACE3251128B;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2D76D817C414EEA0C84FDF21336CF360167A6FC;
IL2CPP_EXTERN_C String_t* _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3B96F0508EC406F09EC368CD25C2223D68D10AC;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B;
IL2CPP_EXTERN_C String_t* _stringLiteralE5B7FB5BFBF1CF60857A40FCA10F830CC619AE16;
IL2CPP_EXTERN_C String_t* _stringLiteralE6916006B378403522431CD9C96E6052573CE96F;
IL2CPP_EXTERN_C String_t* _stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E;
IL2CPP_EXTERN_C String_t* _stringLiteralE895F499BC653C0CA36FB31C5936FC768CAD263E;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F;
IL2CPP_EXTERN_C String_t* _stringLiteralECC5FBBC8E0BED3B8718D6E2160AD386C9CEC212;
IL2CPP_EXTERN_C String_t* _stringLiteralECE7ACD2EBE43C9753D823F423714DB870E2FDC2;
IL2CPP_EXTERN_C String_t* _stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7;
IL2CPP_EXTERN_C String_t* _stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralEF911DE1BCFD80F95D73E01E462BE47D7986598B;
IL2CPP_EXTERN_C String_t* _stringLiteralF13E4BFF086D4E511E68B0617B76ACC5BD5AFFE7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF49AECB5A7A9C87D4D672BA9D06F6929E0895580;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E35F8C3B4DEB7662034D2DB84C95826A9E9496;
IL2CPP_EXTERN_C String_t* _stringLiteralF56887477425485B59C9C4926D0FEFC2946FA21E;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4;
IL2CPP_EXTERN_C String_t* _stringLiteralFCBCF9082006C7AAA99359786D794609E8CEEE89;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCA4686ED2A34FD32531B43B63D30DBE5A0C258;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0205CA2DDC8935364EA764C0B7C811D6515A1E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m67D721D20F638BE7BAEC7A32D5705AD5BFE599E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE16D1F0A83CCC58576ADEFFBBECC40559A212FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoubleLookupDictionary_3_AddInner_mE6587AA4C57DAA962350E8B0C2555841941B5CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoubleLookupDictionary_3_TryGetInnerValue_m403B9F6BACEF00B3AE823A9E2D4542A7FFB57EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoubleLookupDictionary_3__ctor_m0090BA54CD3B486CBDBD1BEB35F8B6A387AC839A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoubleLookupDictionary_3__ctor_m995979C65A47F6DDE91D13D7916048B5B39DF675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakStaticFieldGetter_m07C96A50F111398BA38F66E039F184D7FAEC44D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakStaticFieldSetter_m8FC8005D5D10F68D7C5C0096B5F9BCCAA2A04F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisMethodInfo_t_m0BDE409D8B745A112F60FA3482C66D0204FB9479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m38CF2B84030C5802B54AF8946331B396CBC0ABB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisMethodInfo_t_m462DC8BEFC6D07FDE58FEA1C8ECBCB9F4CC7B753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m7F7BD85B3A417097B3F18F85F973F8241E8ABB32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_mD81EB8C74D5689E55D239A259003F5BAC625DAC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_mE968971AB6E9A412FDB6E90869E5CA8E5ACFDB50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_m15AB187D9728A51EACB6E2E44B5D0B6E26009359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m28F8A42114DE24FC6C34ED9D59F4044FF2F1CF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m120F4089F7A721670196CA1C703F7CA58060C017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_mDC7138036F1240939E1F79DCE246044A4247CA98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_m53DE8B16CE1ACD252E902C383F6ECB241E8D6FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Add_m5F336C9204CD98F21F7168A844DD7F219146A7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Clear_m11BA43CD0772AD9CE5D71A5EC8500D04DF020EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Insert_m7E0CFAD102C4BED8BEF7F2E642DC07A8D73E654C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_RemoveAt_m913C2F47C5B8B4FF044B61544E0CA3C486C07CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Remove_m266092BA6380A1A595D503B415E43B0AD3C5E6EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_set_Item_m630BA6436B91738C6891612A49B9DE607B7E3D0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList__ctor_mCE912BFBB1722C1AECB7EDDB307E79CB64C73889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberInfoExtensions_DeAlias_m538E8BFD6B63DFA685276B468C2B1BFC30F8DD31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m03FB41D67EAB5D7616A20430C9C088F9D7F33EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m75AF54248CC2A4640BECA635A126879530FE200A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberInfoExtensions_IsStatic_m668CA87480817C276BB472019F2A2E94D209EC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mF8507DFDFE2D6D67195306C62871EAB49032D3F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m4C1517D8ECA864DFE621D30E118735B407E87400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m52ECB17AD4F33C10906F19BA7E7FE3EE73E78887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m1EE4BE944BE2ECBFD9260CFA0045C36D4A130B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m21C5D550F6E4D7C2BC74D515C2107BDC538C46C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_AreGenericConstraintsSatisfiedBy_m34EF6D8006428F1C8E9452AA48E234210C758598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GenericArgumentsContainsTypes_m6067107736BC8CEB4D2E2DF1FF471F3FFFD5D82C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetEnumBitmask_m125A2270971B8FB376684B6A743F6D4E8986D0FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetGenericConstraintsString_mD122EE5EFC14DAAA2DAED842F7DAA49C1C202C3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetGenericParameterConstraintsString_mA7237337E08913F86BC8EDCE1EF98A0B2CC13BF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetInheritanceDistance_mF4542DD6E7EB489BBE743A396C17D055C81BB50C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetMemberValue_mE3FD3960D996E279B1724F28BC77F86001F6DDC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetOperatorMethod_m22F60D9DE830F21F16ED530B5F26727D21CF4387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetOperatorMethod_m65B46B3AFAC267C4837CBC0F0ACB864BF7DA97C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_GetOperatorMethods_m40BE04AA32E2E7B943242FE3D54D5D530BE0EC02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_IsCastableTo_m942D3FDCED24E6A79B4EF9C689FB45D8B7D53CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_IsFullyConstructedGenericType_m946EB36041677E8FAD045E1B4DE186BB5395CEB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_SetMemberValue_m94C32E028E6D97BEA2351CEAB11B93F6A8736F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_TryInferGenericParameters_m99BF5CE0874F79F024E97B8EE9D5AA105CA214FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__41_System_Collections_IEnumerator_Reset_mF20BF9402687D9916F1D2881724CEC1E707D348B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_Reset_mA148AA5B9980AF00EB5359D0EDC8B98EE349FFC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetBaseClassesU3Ed__47_System_Collections_IEnumerator_Reset_mF766808CA430AC3F07A72758DE650BBEACD44306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m84E0417231B60237F9966B732EA3B2F31536F54D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_m80F5E0B869526535E26D3A7A16C237DAAB351748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_mCD4AA4540DD151461327DCB9B0AB329798E4A335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m77C3D8039446DAC83B52D894CA305C5BF455EB56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m93082FC04A79F990C18D146BF1B8FE5B2776A757_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CGetCastMethodDelegateU3Eb__0_m75269A6F7FC80A9CE6B6CAD4E7CD09E8E931E004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass39_0_U3CGetOperatorMethodU3Eb__0_mA393C191CB9E8C63D354B95E7E6F98EE63C65613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m46246E138B8CBB96D56664110220DA07A8A0F3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_0_U3CGetOperatorMethodsU3Eb__0_mDF2C9BFF7BA798E168BACD087EF14B656980E9BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldSetterU3Eb__0_mD568367A9CD4D3C64F9E0A392B1FB41A5C43A3C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m97200AEA6BDF8CCEB20BDA70F0F136277CE33997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityExtensions_SafeIsUnityNull_m6E7C9703117460205E46C387FFECFB514480246A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_MemoryCopy_m2FF651B6F23D59D8D9D29A6BFEA30DFD75278F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringFromBytes_m577D384ECCC0DAD912AF0A7410AA8BA412BB09C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringToBytes_m47C191284C1676E35355A0FD43E90D71EF16DD0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ICollection_1_tB47DDF469B770957C5467EC2DBDED44B2DD613DB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_1_t8C7C301DAF6E4E4DFA7504EF93E6E2C93AB33AE7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UIntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Object,System.Object>>>
struct Dictionary_2_tCB007E3A9C33120EC395A529187E48B56CA3B701  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE9BE14F441DCFD2977A08126ED2F533542FBAFB8* ____entries_1;
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
	KeyCollection_t701CF2F9BA1D193104A01496B581B6A3F38D8DC4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5F9B90EE460F9D5D33F86C21995A946FF8457245* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Delegate>>
struct Dictionary_2_t71CA952877BC0C970147F6BCC4B7058C6C82E086  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEEDA5F4359FEF3DEC4D529C4F114429079673B0E* ____entries_1;
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
	KeyCollection_t02541CB969C6789E9BB983900971E523FEA71BC7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74FDEA2937112B440C9793D59E228CD60DE451FC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.HashSet`1<System.Type>>
struct Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t17F8E70A5CCB9392AF3EB4EF446604C8AB4372FA* ____entries_1;
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
	KeyCollection_tCACF0F935C55F552E0FD0DDA438EC25BBF25ED51* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1D1B27DB918D05BA0A63482CB9982A09024878DC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8* ____entries_1;
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
	KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB314925F934D4288E8F1FEFD9BAB2450767E315F* ____entries_1;
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
	KeyCollection_t56C9CA539771D68F44D87D0E711E4CFF69326192* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC72ADD3C4A1BECE1A0E419F63C5C423DD518C857* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
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

// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88* ____slots_8;
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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Type>
struct Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Sirenix.Serialization.Utilities.EmitUtilities
struct EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94  : public RuntimeObject
{
};

// Sirenix.Serialization.Utilities.FastTypeComparer
struct FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE  : public RuntimeObject
{
};

struct FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_StaticFields
{
	// Sirenix.Serialization.Utilities.FastTypeComparer Sirenix.Serialization.Utilities.FastTypeComparer::Instance
	FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* ___Instance_0;
};

// Sirenix.Serialization.Utilities.FieldInfoExtensions
struct FieldInfoExtensions_tE719BF92F18A26BC1893CA18F67F2D705072F054  : public RuntimeObject
{
};

// Sirenix.Serialization.Utilities.Flags
struct Flags_tAA380BAFB0562EEBDAD2AB395DB9EDDD533C6E1C  : public RuntimeObject
{
};

// Sirenix.Serialization.Utilities.GarbageFreeIterators
struct GarbageFreeIterators_tC4968955CFF88EEDDE5FBB03453AAD428EE5745D  : public RuntimeObject
{
};

// Sirenix.Serialization.Utilities.ImmutableList
struct ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD  : public RuntimeObject
{
	// System.Collections.IList Sirenix.Serialization.Utilities.ImmutableList::innerList
	RuntimeObject* ___innerList_0;
};

// Sirenix.Serialization.Utilities.LinqExtensions
struct LinqExtensions_t8CA2AD073D582983F1E8A6D0022C2B4EC9686D9D  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Sirenix.Serialization.Utilities.MemberInfoExtensions
struct MemberInfoExtensions_t508703EC9DFB86C014B6B5F95B0A0A2C4BE6AF7F  : public RuntimeObject
{
};

// Sirenix.Serialization.Utilities.MethodInfoExtensions
struct MethodInfoExtensions_tEBFD4F1ABF7FDD390A16E8C31C966AF46C31B779  : public RuntimeObject
{
};

// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0  : public RuntimeObject
{
};

struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_StaticFields
{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeNameIgnoreCase_1;
};
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_com
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Sirenix.Serialization.Utilities.PathUtilities
struct PathUtilities_t8CF135AE6AC6C12ADC698F94B87332595759F6DB  : public RuntimeObject
{
};

// Sirenix.Serialization.PrefabModification
struct PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B  : public RuntimeObject
{
	// Sirenix.Serialization.PrefabModificationType Sirenix.Serialization.PrefabModification::ModificationType
	int32_t ___ModificationType_0;
	// System.String Sirenix.Serialization.PrefabModification::Path
	String_t* ___Path_1;
	// System.Collections.Generic.List`1<System.String> Sirenix.Serialization.PrefabModification::ReferencePaths
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ReferencePaths_2;
	// System.Object Sirenix.Serialization.PrefabModification::ModifiedValue
	RuntimeObject* ___ModifiedValue_3;
	// System.Int32 Sirenix.Serialization.PrefabModification::NewLength
	int32_t ___NewLength_4;
	// System.Object[] Sirenix.Serialization.PrefabModification::DictionaryKeysAdded
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___DictionaryKeysAdded_5;
	// System.Object[] Sirenix.Serialization.PrefabModification::DictionaryKeysRemoved
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___DictionaryKeysRemoved_6;
};

// Sirenix.Serialization.Utilities.PropertyInfoExtensions
struct PropertyInfoExtensions_tA4E9DE24553B240869DE24F522D8EC7D6CC67B05  : public RuntimeObject
{
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Sirenix.Serialization.Utilities.StringExtensions
struct StringExtensions_tDAB3D2AE97DFE6BBAE0C2D8C1BA2E949FE8E94C3  : public RuntimeObject
{
};

// Sirenix.Serialization.Utilities.TypeExtensions
struct TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49  : public RuntimeObject
{
};

struct TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields
{
	// System.Object Sirenix.Serialization.Utilities.TypeExtensions::GenericConstraintsSatisfaction_LOCK
	RuntimeObject* ___GenericConstraintsSatisfaction_LOCK_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Sirenix.Serialization.Utilities.TypeExtensions::GenericConstraintsSatisfactionInferredParameters
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___GenericConstraintsSatisfactionInferredParameters_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Sirenix.Serialization.Utilities.TypeExtensions::GenericConstraintsSatisfactionResolvedMap
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___GenericConstraintsSatisfactionResolvedMap_2;
	// System.Collections.Generic.HashSet`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions::GenericConstraintsSatisfactionProcessedParams
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___GenericConstraintsSatisfactionProcessedParams_3;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions::GenericListInterface
	Type_t* ___GenericListInterface_4;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions::GenericCollectionInterface
	Type_t* ___GenericCollectionInterface_5;
	// System.Object Sirenix.Serialization.Utilities.TypeExtensions::WeaklyTypedTypeCastDelegates_LOCK
	RuntimeObject* ___WeaklyTypedTypeCastDelegates_LOCK_6;
	// System.Object Sirenix.Serialization.Utilities.TypeExtensions::StronglyTypedTypeCastDelegates_LOCK
	RuntimeObject* ___StronglyTypedTypeCastDelegates_LOCK_7;
	// Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Func`2<System.Object,System.Object>> Sirenix.Serialization.Utilities.TypeExtensions::WeaklyTypedTypeCastDelegates
	DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07* ___WeaklyTypedTypeCastDelegates_8;
	// Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Delegate> Sirenix.Serialization.Utilities.TypeExtensions::StronglyTypedTypeCastDelegates
	DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041* ___StronglyTypedTypeCastDelegates_9;
	// System.Type[] Sirenix.Serialization.Utilities.TypeExtensions::TwoLengthTypeArray_Cached
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___TwoLengthTypeArray_Cached_10;
	// System.Collections.Generic.Stack`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions::GenericArgumentsContainsTypes_ArgsToCheckCached
	Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* ___GenericArgumentsContainsTypes_ArgsToCheckCached_11;
	// System.Collections.Generic.HashSet`1<System.String> Sirenix.Serialization.Utilities.TypeExtensions::ReservedCSharpKeywords
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___ReservedCSharpKeywords_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Sirenix.Serialization.Utilities.TypeExtensions::TypeNameAlternatives
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___TypeNameAlternatives_13;
	// System.Object Sirenix.Serialization.Utilities.TypeExtensions::CachedNiceNames_LOCK
	RuntimeObject* ___CachedNiceNames_LOCK_14;
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Sirenix.Serialization.Utilities.TypeExtensions::CachedNiceNames
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* ___CachedNiceNames_15;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions::VoidPointerType
	Type_t* ___VoidPointerType_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.HashSet`1<System.Type>> Sirenix.Serialization.Utilities.TypeExtensions::PrimitiveImplicitCasts
	Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* ___PrimitiveImplicitCasts_17;
	// System.Collections.Generic.HashSet`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions::ExplicitCastIntegrals
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___ExplicitCastIntegrals_18;
};

// Sirenix.Serialization.Utilities.UnityExtensions
struct UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A  : public RuntimeObject
{
};

struct UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields
{
	// Sirenix.Serialization.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr> Sirenix.Serialization.Utilities.UnityExtensions::UnityObjectCachedPtrFieldGetter
	ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* ___UnityObjectCachedPtrFieldGetter_0;
};

// Sirenix.Serialization.Utilities.UnityVersion
struct UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A  : public RuntimeObject
{
};

struct UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields
{
	// System.Int32 Sirenix.Serialization.Utilities.UnityVersion::Major
	int32_t ___Major_0;
	// System.Int32 Sirenix.Serialization.Utilities.UnityVersion::Minor
	int32_t ___Minor_1;
};

// Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities
struct UnsafeUtilities_tA8B80810ACCF0E14F0F45B4A6E01932F16EFCE38  : public RuntimeObject
{
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

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901  : public RuntimeObject
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass11_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980  : public RuntimeObject
{
	// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass12_0::propertyInfo
	PropertyInfo_t* ___propertyInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF  : public RuntimeObject
{
	// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0::propertyInfo
	PropertyInfo_t* ___propertyInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B  : public RuntimeObject
{
	// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass21_0::methodInfo
	MethodInfo_t* ___methodInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06  : public RuntimeObject
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass3_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0  : public RuntimeObject
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543  : public RuntimeObject
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass8_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25
struct U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15  : public RuntimeObject
{
	// System.Int32 Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Sirenix.Serialization.Utilities.ImmutableList Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>4__this
	ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871  : public RuntimeObject
{
	// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass26_0::method
	MethodInfo_t* ___method_0;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F  : public RuntimeObject
{
	// System.String Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass39_0::methodName
	String_t* ___methodName_0;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD  : public RuntimeObject
{
	// System.String Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass40_0::methodName
	String_t* ___methodName_0;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41
struct U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD  : public RuntimeObject
{
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::<>2__current
	MemberInfo_t* ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::type
	Type_t* ___type_3;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::<currentType>5__1
	Type_t* ___U3CcurrentTypeU3E5__1_7;
	// System.Reflection.MemberInfo[] Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::<>7__wrap1
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___U3CU3E7__wrap1_8;
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_9;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42
struct U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45  : public RuntimeObject
{
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>2__current
	MemberInfo_t* ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::type
	Type_t* ___type_3;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.String Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::name
	String_t* ___name_7;
	// System.String Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>3__name
	String_t* ___U3CU3E3__name_8;
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_9;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47
struct U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817  : public RuntimeObject
{
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::<>2__current
	Type_t* ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::type
	Type_t* ___type_3;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::includeSelf
	bool ___includeSelf_5;
	// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_6;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::<current>5__1
	Type_t* ___U3CcurrentU3E5__1_7;
};

// Sirenix.Serialization.UnitySerializationUtility/<>c
struct U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A  : public RuntimeObject
{
};

struct U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A_StaticFields
{
	// Sirenix.Serialization.UnitySerializationUtility/<>c Sirenix.Serialization.UnitySerializationUtility/<>c::<>9
	U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A* ___U3CU3E9_0;
	// System.Comparison`1<Sirenix.Serialization.PrefabModification> Sirenix.Serialization.UnitySerializationUtility/<>c::<>9__31_0
	Comparison_1_t266E6E7A90604B921B8E4751EB1EB695B2961EED* ___U3CU3E9__31_0_1;
};

// Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t0C7255F6A4588E842EFEF680C770229492707203  : public RuntimeObject
{
	// System.Reflection.MemberInfo Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass37_0::member
	MemberInfo_t* ___member_0;
};

// Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t9040DA5309D00DEBB765D34EBF8949494D38294A  : public RuntimeObject
{
	// System.Reflection.MemberInfo Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass38_0::member
	MemberInfo_t* ___member_0;
};

// Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Func`2<System.Object,System.Object>>
struct DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07  : public Dictionary_2_tCB007E3A9C33120EC395A529187E48B56CA3B701
{
	// System.Collections.Generic.IEqualityComparer`1<TSecondKey> Sirenix.Serialization.Utilities.DoubleLookupDictionary`3::secondKeyComparer
	RuntimeObject* ___secondKeyComparer_14;
};

// Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Delegate>
struct DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041  : public Dictionary_2_t71CA952877BC0C970147F6BCC4B7058C6C82E086
{
	// System.Collections.Generic.IEqualityComparer`1<TSecondKey> Sirenix.Serialization.Utilities.DoubleLookupDictionary`3::secondKeyComparer
	RuntimeObject* ___secondKeyComparer_14;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD* ___cached_add_event_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t741396FC32ABDA9AA236C8BB159DEEA850DE1B17 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t741396FC32ABDA9AA236C8BB159DEEA850DE1B17__padding[256];
	};
};
#pragma pack(pop, tp)

// Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult
struct CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D 
{
	// System.Boolean Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult::HasCalculatedSerializeUnityFieldsTrueResult
	bool ___HasCalculatedSerializeUnityFieldsTrueResult_0;
	// System.Boolean Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult::HasCalculatedSerializeUnityFieldsFalseResult
	bool ___HasCalculatedSerializeUnityFieldsFalseResult_1;
	// System.Boolean Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult::SerializeUnityFieldsTrueResult
	bool ___SerializeUnityFieldsTrueResult_2;
	// System.Boolean Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult::SerializeUnityFieldsFalseResult
	bool ___SerializeUnityFieldsFalseResult_3;
};
// Native definition for P/Invoke marshalling of Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult
struct CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshaled_pinvoke
{
	int32_t ___HasCalculatedSerializeUnityFieldsTrueResult_0;
	int32_t ___HasCalculatedSerializeUnityFieldsFalseResult_1;
	int32_t ___SerializeUnityFieldsTrueResult_2;
	int32_t ___SerializeUnityFieldsFalseResult_3;
};
// Native definition for COM marshalling of Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult
struct CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshaled_com
{
	int32_t ___HasCalculatedSerializeUnityFieldsTrueResult_0;
	int32_t ___HasCalculatedSerializeUnityFieldsFalseResult_1;
	int32_t ___SerializeUnityFieldsTrueResult_2;
	int32_t ___SerializeUnityFieldsFalseResult_3;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5BB50946CCA6324A2450442AAED3334F91FE8320  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t5BB50946CCA6324A2450442AAED3334F91FE8320_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::3CDA7449B0586AB873C75C04BB11D4864F5D7392
	__StaticArrayInitTypeSizeU3D256_t741396FC32ABDA9AA236C8BB159DEEA850DE1B17 ___3CDA7449B0586AB873C75C04BB11D4864F5D7392_0;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Sirenix.Serialization.Utilities.MemberAliasFieldInfo
struct MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656  : public FieldInfo_t
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.MemberAliasFieldInfo::aliasedField
	FieldInfo_t* ___aliasedField_1;
	// System.String Sirenix.Serialization.Utilities.MemberAliasFieldInfo::mangledName
	String_t* ___mangledName_2;
};

// Sirenix.Serialization.Utilities.MemberAliasPropertyInfo
struct MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA  : public PropertyInfo_t
{
	// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::aliasedProperty
	PropertyInfo_t* ___aliasedProperty_1;
	// System.String Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::mangledName
	String_t* ___mangledName_2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities/Struct256Bit
struct Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A 
{
	// System.Decimal Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities/Struct256Bit::d1
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d1_0;
	// System.Decimal Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities/Struct256Bit::d2
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d2_1;
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// Sirenix.Serialization.Utilities.MemberAliasMethodInfo
struct MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18  : public MethodInfo_t
{
	// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasMethodInfo::aliasedMethod
	MethodInfo_t* ___aliasedMethod_1;
	// System.String Sirenix.Serialization.Utilities.MemberAliasMethodInfo::mangledName
	String_t* ___mangledName_2;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// Sirenix.Serialization.Utilities.ValueGetter`2<System.Object,System.IntPtr>
struct ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414  : public MulticastDelegate_t
{
};

// Sirenix.Serialization.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Sirenix.Serialization.Utilities.WeakValueGetter
struct WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3  : public MulticastDelegate_t
{
};

// Sirenix.Serialization.Utilities.WeakValueSetter
struct WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1  : public RuntimeArray
{
	ALIGN_FIELD (8) Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* m_Items[1];

	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.IEnumerable`1<T> Sirenix.Serialization.Utilities.MemberInfoExtensions::GetAttributes<System.Object>(System.Reflection.ICustomAttributeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberInfoExtensions_GetAttributes_TisRuntimeObject_m6265F3279A380463D306275474D868EBEBEBBFCD_gshared (RuntimeObject* ___member0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> Sirenix.Serialization.Utilities.MemberInfoExtensions::GetAttributes<System.Object>(System.Reflection.ICustomAttributeProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberInfoExtensions_GetAttributes_TisRuntimeObject_m24B68682CF9874B039FCC83DC56A383ABB13F354_gshared (RuntimeObject* ___member0, bool ___inherit1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Object,System.Object,System.Object>::TryGetInnerValue(TFirstKey,TSecondKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoubleLookupDictionary_3_TryGetInnerValue_m9A41A579F959C432C80C83A2DB2B7079D9D5EEFC_gshared (DoubleLookupDictionary_3_tF9966B9DC1257238AEAF91AFB9AABFFEF07A02A5* __this, RuntimeObject* ___firstKey0, RuntimeObject* ___secondKey1, RuntimeObject** ___value2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Object,System.Object,System.Object>::AddInner(TFirstKey,TSecondKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DoubleLookupDictionary_3_AddInner_mC6AB6D3CEAC439E7FE146E1AD2164DF5437FBE0B_gshared (DoubleLookupDictionary_3_tF9966B9DC1257238AEAF91AFB9AABFFEF07A02A5* __this, RuntimeObject* ___firstKey0, RuntimeObject* ___secondKey1, RuntimeObject* ___value2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> Sirenix.Serialization.Utilities.TypeExtensions::GetAllMembers<System.Object>(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllMembers_TisRuntimeObject_m3273E8C88AE76B0D06AB6F7890373ACC5C1DF25C_gshared (Type_t* ___type0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___source0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleLookupDictionary_3__ctor_m29E6F0A5BE268EE40981E129000B9ABFA8761EE5_gshared (DoubleLookupDictionary_3_tF9966B9DC1257238AEAF91AFB9AABFFEF07A02A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// Sirenix.Serialization.Utilities.ValueGetter`2<InstanceType,FieldType> Sirenix.Serialization.Utilities.EmitUtilities::CreateInstanceFieldGetter<System.Object,System.IntPtr>(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414* EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_m6A239C29FF9CA6DDA4A8E9F840412C777640091C_gshared (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method) ;
// FieldType Sirenix.Serialization.Utilities.ValueGetter`2<System.Object,System.IntPtr>::Invoke(InstanceType&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ValueGetter_2_Invoke_mC6FDDFB9939D99C3A2312F88394AAED91B0984BC_gshared_inline (ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414* __this, RuntimeObject** ___instance0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void Sirenix.Serialization.UnitySerializationUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0904D2B5DBF1D794253689181193CC7EEA5E9D62 (U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method) ;
// System.Object Sirenix.Serialization.FormatterUtilities::GetMemberValue(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormatterUtilities_GetMemberValue_mAF9BEA5FEF4F7F0FE71A8FF506DDE373416C2ACB (MemberInfo_t* ___member0, RuntimeObject* ___obj1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.FormatterUtilities::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatterUtilities_SetMemberValue_mCBB30A189CF74A7D8C1B85DABE79EFE8FEA5952F (MemberInfo_t* ___member0, RuntimeObject* ___obj1, RuntimeObject* ___value2, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_AliasedField()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldInfo_t* MemberAliasFieldInfo_get_AliasedField_mD5DE35FBCA9EBBF8164EC578CDE3E4FCA88889CF_inline (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) ;
// System.String Sirenix.Serialization.Utilities.MemberInfoExtensions::GetNiceName(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberInfoExtensions_GetNiceName_mDD38DA7F83B59FE9217C70AB7078233F4737E787 (MemberInfo_t* ___member0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> Sirenix.Serialization.Utilities.MemberInfoExtensions::GetAttributes<System.Attribute>(System.Reflection.ICustomAttributeProvider)
inline RuntimeObject* MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m03FB41D67EAB5D7616A20430C9C088F9D7F33EA1 (RuntimeObject* ___member0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))MemberInfoExtensions_GetAttributes_TisRuntimeObject_m6265F3279A380463D306275474D868EBEBEBBFCD_gshared)(___member0, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Attribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Collections.Generic.IEnumerable`1<T> Sirenix.Serialization.Utilities.MemberInfoExtensions::GetAttributes<System.Attribute>(System.Reflection.ICustomAttributeProvider,System.Boolean)
inline RuntimeObject* MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m75AF54248CC2A4640BECA635A126879530FE200A (RuntimeObject* ___member0, bool ___inherit1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, bool, const RuntimeMethod*))MemberInfoExtensions_GetAttributes_TisRuntimeObject_m24B68682CF9874B039FCC83DC56A383ABB13F354_gshared)(___member0, ___inherit1, method);
}
// System.String Sirenix.Serialization.Utilities.MethodInfoExtensions::GetFullName(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodInfoExtensions_GetFullName_m2CEA5F6CDD46B8FE2B9F39C2AC5560E3ADC3A2B0 (MethodBase_t* ___method0, const RuntimeMethod* method) ;
// System.String Sirenix.Serialization.Utilities.StringExtensions::ToTitleCase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_ToTitleCase_mA4EC3E3A8A74722E89350C4DE4593AD168D84049 (String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsSealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_AliasedProperty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t* MemberAliasPropertyInfo_get_AliasedProperty_m641D01DDC45E3CB59762B653EAC3982678D3CB30_inline (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_AliasedMethod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasMethodInfo_get_AliasedMethod_mE6D71392C2BF6D6E8DEB276007EEC701E50BA6FB_inline (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.MethodInfoExtensions::IsExtensionMethod(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfoExtensions_IsExtensionMethod_mAC0B94959438CD10C594221C5EEF57FC06BA7EBE (MethodBase_t* ___method0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Sirenix.Serialization.Utilities.MethodInfoExtensions::GetParamsNames(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodInfoExtensions_GetParamsNames_m708A745C8A0EDC687613506C2E6DE82560C54EC2 (MethodBase_t* ___method0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m38CF2B84030C5802B54AF8946331B396CBC0ABB5 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared)(___source0, ___count1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* Enumerable_ToArray_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m7F7BD85B3A417097B3F18F85F973F8241E8ABB32 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetNiceName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB (Type_t* ___type0, const RuntimeMethod* method) ;
// System.String Sirenix.Serialization.Utilities.MethodInfoExtensions::GetFullName(System.Reflection.MethodBase,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodInfoExtensions_GetFullName_mDFD637FD1006FD6ED7F6085AB41681B5B5134D4D (MethodBase_t* ___method0, String_t* ___extensionMethodPrefix1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsNested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* DirectoryInfo_get_Parent_m2B95E4D3CBA22F8DAA259247ED791F1411D93347 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsAbstract_mBD096DC9FCDF68114928CA73690882A2F9831EF9 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsVirtual_m2C0A566F37B666FDEE3066729AEACF336B342EC2 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsLower(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Char System.Char::ToUpper(System.Char,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToUpper_mB770BD2F2A733A053C8BBEFA013BED3E0C37B832 (Il2CppChar ___c0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816 (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::CreateNiceName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_CreateNiceName_m7A0D5281F6102DCC3DBA242E98981444A0027711 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::InheritsFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_InheritsFrom_m246820A7A897F304D093F93B522261D153507D2B (Type_t* ___type0, Type_t* ___baseType1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4 (Type_t* __this, const RuntimeMethod* method) ;
// System.String Sirenix.Serialization.Utilities.TypeExtensions::TypeNameGauntlet(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_TypeNameGauntlet_m6D103478DEDCF191B7C8DB73AD0273810BFE6D13 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsCastableTo(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsCastableTo_m942D3FDCED24E6A79B4EF9C689FB45D8B7D53CEA (Type_t* ___from0, Type_t* ___to1, bool ___requireImplicitCast2, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.HashSet`1<System.Type>>::get_Item(TKey)
inline HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* Dictionary_2_get_Item_mE16D1F0A83CCC58576ADEFFBBECC40559A212FAB (Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* (*) (Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Contains(T)
inline bool HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.TypeExtensions::GetCastMethod(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetCastMethod_mD8F2128A0AEFD1461FCF7AE9587021F136400192 (Type_t* ___from0, Type_t* ___to1, bool ___requireImplicitCast2, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsValidIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValidIdentifier_m957DDF483E94E2AC67D54DFF077FD964FF5CCAC6 (String_t* ___identifier0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsValidIdentifierStartCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValidIdentifierStartCharacter_mCC1057AED22B6214A78388CD49B3CE097A5046CD (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsValidIdentifierPartCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValidIdentifierPartCharacter_m258C614DD6947BF8E3A503407B7A64A7F4823B69 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetter_m4363120285B51739DEE559E5C81E89580DDC78C0 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::HasCastDefined(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_HasCastDefined_m922E1CB13D9F9959303880F873CBE2120E1E9057 (Type_t* ___from0, Type_t* ___to1, bool ___requireImplicitCast2, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Func`2<System.Object,System.Object>>::TryGetInnerValue(TFirstKey,TSecondKey,TValue&)
inline bool DoubleLookupDictionary_3_TryGetInnerValue_m403B9F6BACEF00B3AE823A9E2D4542A7FFB57EA7 (DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07* __this, Type_t* ___firstKey0, Type_t* ___secondKey1, Func_2_tACBF5A1656250800CE861707354491F0611F6624** ___value2, const RuntimeMethod* method)
{
	return ((  bool (*) (DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07*, Type_t*, Type_t*, Func_2_tACBF5A1656250800CE861707354491F0611F6624**, const RuntimeMethod*))DoubleLookupDictionary_3_TryGetInnerValue_m9A41A579F959C432C80C83A2DB2B7079D9D5EEFC_gshared)(__this, ___firstKey0, ___secondKey1, ___value2, method);
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mD7449A332EF1223915014834C96A731F81A9D9DB (U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398 (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// TValue Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Func`2<System.Object,System.Object>>::AddInner(TFirstKey,TSecondKey,TValue)
inline Func_2_tACBF5A1656250800CE861707354491F0611F6624* DoubleLookupDictionary_3_AddInner_mE6587AA4C57DAA962350E8B0C2555841941B5CF6 (DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07* __this, Type_t* ___firstKey0, Type_t* ___secondKey1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___value2, const RuntimeMethod* method)
{
	return ((  Func_2_tACBF5A1656250800CE861707354491F0611F6624* (*) (DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07*, Type_t*, Type_t*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))DoubleLookupDictionary_3_AddInner_mC6AB6D3CEAC439E7FE146E1AD2164DF5437FBE0B_gshared)(__this, ___firstKey0, ___secondKey1, ___value2, method);
}
// System.Collections.Generic.IEnumerable`1<T> Sirenix.Serialization.Utilities.TypeExtensions::GetAllMembers<System.Reflection.MethodInfo>(System.Type,System.Reflection.BindingFlags)
inline RuntimeObject* TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18 (Type_t* ___type0, int32_t ___flags1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Type_t*, int32_t, const RuntimeMethod*))TypeExtensions_GetAllMembers_TisRuntimeObject_m3273E8C88AE76B0D06AB6F7890373ACC5C1DF25C_gshared)(___type0, ___flags1, method);
}
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::ImplementsOpenGenericInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementsOpenGenericInterface_mA9B23B842C59B27B5CC0DF28621B67539A9BAD37 (Type_t* ___candidateType0, Type_t* ___openGenericInterfaceType1, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::ImplementsOpenGenericClass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementsOpenGenericClass_m169A6AB06B4B5AE55B28F0F35E89F3C3C9869D45 (Type_t* ___candidateType0, Type_t* ___openGenericType1, const RuntimeMethod* method) ;
// System.Type[] Sirenix.Serialization.Utilities.TypeExtensions::GetArgumentsOfInheritedOpenGenericInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* TypeExtensions_GetArgumentsOfInheritedOpenGenericInterface_m9AED9C1EB9599B6903AB54B37E45214E37C5E9D6 (Type_t* ___candidateType0, Type_t* ___openGenericInterfaceType1, const RuntimeMethod* method) ;
// System.Type[] Sirenix.Serialization.Utilities.TypeExtensions::GetArgumentsOfInheritedOpenGenericClass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* TypeExtensions_GetArgumentsOfInheritedOpenGenericClass_m5A4229D704A7E36F20B2D5716FE41BA0481F0DE5 (Type_t* ___candidateType0, Type_t* ___openGenericType1, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types3, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___modifiers4, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass39_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0__ctor_mEBC7B16B8CFFFCAF19FF511AC52088084D6941AC (U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.MethodInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0 (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline MethodInfo_t* Enumerable_FirstOrDefault_TisMethodInfo_t_m0BDE409D8B745A112F60FA3482C66D0204FB9479 (RuntimeObject* ___source0, Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* ___predicate1, const RuntimeMethod* method)
{
	return ((  MethodInfo_t* (*) (RuntimeObject*, Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_m7831EB2C4F652473B652F350DC54AFCBA038B891 (U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD (RuntimeObject* ___source0, Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* Enumerable_ToArray_TisMethodInfo_t_m462DC8BEFC6D07FDE58FEA1C8ECBCB9F4CC7B753 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__41__ctor_mF5AFE6D49F13AF415CAA8501540FD68BEDBAB665 (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42__ctor_mB3D1A62F734B8D3286E8D9532724757B78A8FE34 (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Type Sirenix.Serialization.Utilities.TypeExtensions::GetGenericBaseType(System.Type,System.Type,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269 (Type_t* ___type0, Type_t* ___baseType1, int32_t* ___depthCount2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions::GetBaseClasses(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetBaseClasses_mFB77894BA4CDBC0D1BF7E2CE57544C5F48CFB3C7 (Type_t* ___type0, bool ___includeSelf1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___first0, ___second1, method);
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__47__ctor_m0607598FFE900A081E6CBC87CDE433EE2294E82B (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetCachedNiceName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetCachedNiceName_m0D2F45BD9C2B907CBEF089A6DD094014EFBF5DFA (Type_t* ___type0, const RuntimeMethod* method) ;
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetNiceFullName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetNiceFullName_m485DEE70C40BE0715AACC505B16628D1492FF26B (Type_t* ___type0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690 (RuntimeObject* ___source0, Type_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Type_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___source0, ___value1, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Type>::Clear()
inline void Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsFullyConstructedGenericType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsFullyConstructedGenericType_m946EB36041677E8FAD045E1B4DE186BB5395CEB4 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, Type_t* ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, Type_t*, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::AreGenericConstraintsSatisfiedBy(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005 (Type_t* ___genericType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Type>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9 (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Type>::get_Count()
inline int32_t Dictionary_2_get_Count_m67D721D20F638BE7BAEC7A32D5705AD5BFE599E1 (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Type>::get_Item(TKey)
inline Type_t* Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0 (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::AreGenericConstraintsSatisfiedBy(System.Type[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AreGenericConstraintsSatisfiedBy_m6C119BBC9F17F9D3EE0300AB3890F8C4D4ABE01D (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___definitions0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters1, const RuntimeMethod* method) ;
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::GenericParameterIsFulfilledBy(System.Type,System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Type>,System.Collections.Generic.HashSet`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA (Type_t* ___genericParameterDefinition0, Type_t* ___parameterType1, Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___resolvedMap2, HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___processedParams3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Type>::Clear()
inline void HashSet_1_Clear_mD81EB8C74D5689E55D239A259003F5BAC625DAC5 (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(T)
inline bool HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1 (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetGenericParameterConstraintsString(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetGenericParameterConstraintsString_mA7237337E08913F86BC8EDCE1EF98A0B2CC13BF8 (Type_t* ___type0, bool ___useFullTypeNames1, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Type>::Clear()
inline void Stack_1_Clear_mF8507DFDFE2D6D67195306C62871EAB49032D3F0 (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Type>::Push(T)
inline void Stack_1_Push_m52ECB17AD4F33C10906F19BA7E7FE3EE73E78887 (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04*, Type_t*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.Stack`1<System.Type>::Pop()
inline Type_t* Stack_1_Pop_m4C1517D8ECA864DFE621D30E118735B407E87400 (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count()
inline int32_t Stack_1_get_Count_m21C5D550F6E4D7C2BC74D515C2107BDC538C46C6_inline (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// System.Boolean System.Type::get_HasElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE (Type_t* __this, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mA2BE4A2841686E8B79607BA469368B4FB4D40F34 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Type>::.ctor()
inline void Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729 (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Func`2<System.Object,System.Object>>::.ctor()
inline void DoubleLookupDictionary_3__ctor_m995979C65A47F6DDE91D13D7916048B5B39DF675 (DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07* __this, const RuntimeMethod* method)
{
	((  void (*) (DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07*, const RuntimeMethod*))DoubleLookupDictionary_3__ctor_m29E6F0A5BE268EE40981E129000B9ABFA8761EE5_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.Utilities.DoubleLookupDictionary`3<System.Type,System.Type,System.Delegate>::.ctor()
inline void DoubleLookupDictionary_3__ctor_m0090BA54CD3B486CBDBD1BEB35F8B6A387AC839A (DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041* __this, const RuntimeMethod* method)
{
	((  void (*) (DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041*, const RuntimeMethod*))DoubleLookupDictionary_3__ctor_m29E6F0A5BE268EE40981E129000B9ABFA8761EE5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Type>::.ctor()
inline void Stack_1__ctor_m1EE4BE944BE2ECBFD9260CFA0045C36D4A130B53 (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::.ctor()
inline void Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6 (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.HashSet`1<System.Type>>::.ctor()
inline void Dictionary_2__ctor_m0205CA2DDC8935364EA764C0B7C811D6515A1E36 (Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.HashSet`1<System.Type>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3 (Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* __this, Type_t* ___key0, HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929*, Type_t*, HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__41_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_mEB7B9DE5F262081A4B0FDDC04A5C8AA2A60C3F3B (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42_U3CU3Em__Finally1_m20668C62FF9E0482D2E290455C3ED292F4B2ADA7 (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42_System_IDisposable_Dispose_m302A8F39BDCC85BE0202DA3704A183CF815CB80C (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions::GetAllMembers(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllMembers_mEB91F0825655A28B9FF2E3AC7B481A9B8A01F40D (Type_t* ___type0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m88F987D199CF8814F3DCD17182A267E3165C7FB3 (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__47_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mA63A6C0B6163F13F2E21670DBAD45ABE2FDDA824 (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, const RuntimeMethod* method) ;
// Sirenix.Serialization.Utilities.ValueGetter`2<InstanceType,FieldType> Sirenix.Serialization.Utilities.EmitUtilities::CreateInstanceFieldGetter<UnityEngine.Object,System.IntPtr>(System.Reflection.FieldInfo)
inline ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90 (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method)
{
	return ((  ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* (*) (FieldInfo_t*, const RuntimeMethod*))EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_m6A239C29FF9CA6DDA4A8E9F840412C777640091C_gshared)(___fieldInfo0, method);
}
// FieldType Sirenix.Serialization.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>::Invoke(InstanceType&)
inline intptr_t ValueGetter_2_Invoke_m3398DBC4F65272B44F2BB361E081532DBB87116C_inline (ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___instance0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))ValueGetter_2_Invoke_mC6FDDFB9939D99C3A2312F88394AAED91B0984BC_gshared_inline)(__this, ___instance0, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mEB1102BAA604D62A8CF3861EB268525984A4AC4B (U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.FieldInfoExtensions::DeAliasField(System.Reflection.FieldInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72 (FieldInfo_t* ___fieldInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m03328FB084A7D3CBB8FB6EED127A3DC54A0EF544 (U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m998FD226EB6F1D5317F9E86D69C59FDD02EAC23A (U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.WeakValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter__ctor_m1A26FA25BC25A32D1775B6E4CB03D9429B707EEF (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m42ACAD81DE123D60B9039CDD2F94790F489A9BAB (U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter__ctor_m625DC041A75E241CE1D7C8099550A37CACED2D34 (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m690C6120213140ADC0786DFDCD00CA42AB3201CA (U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.PropertyInfoExtensions::DeAliasProperty(System.Reflection.PropertyInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE (PropertyInfo_t* ___propertyInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m803DDE9F6B05AD81CBD934E9D207B7D3B72AB808 (U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MethodInfoExtensions::DeAliasMethod(System.Reflection.MethodInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9 (MethodInfo_t* ___methodInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4 (Type_t* ___type0, MethodInfo_t* ___method1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m9D31EF15ED9FDEE6A59872E73423373F5886D937 (U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.FastTypeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__ctor_m96FDA0B2719EF764A2336C02F7A2CF573EA4C26B (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.ImmutableList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_GetEnumerator_m5516440CC191369757EE85F2988C6224060663FD (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mADF4798474AFAAAF22F526DB3789B94746AEC7A0 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m1AFA84BE50CB992E494E23FE6A5978DB421F552B (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m32BE744D1FF1B9C0E511C6A37DCEE82A14E3CA77 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.MethodInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B (MethodInfo_t* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.PropertyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult
IL2CPP_EXTERN_C void CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshal_pinvoke(const CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D& unmarshaled, CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshaled_pinvoke& marshaled)
{
	marshaled.___HasCalculatedSerializeUnityFieldsTrueResult_0 = static_cast<int32_t>(unmarshaled.___HasCalculatedSerializeUnityFieldsTrueResult_0);
	marshaled.___HasCalculatedSerializeUnityFieldsFalseResult_1 = static_cast<int32_t>(unmarshaled.___HasCalculatedSerializeUnityFieldsFalseResult_1);
	marshaled.___SerializeUnityFieldsTrueResult_2 = static_cast<int32_t>(unmarshaled.___SerializeUnityFieldsTrueResult_2);
	marshaled.___SerializeUnityFieldsFalseResult_3 = static_cast<int32_t>(unmarshaled.___SerializeUnityFieldsFalseResult_3);
}
IL2CPP_EXTERN_C void CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshal_pinvoke_back(const CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshaled_pinvoke& marshaled, CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D& unmarshaled)
{
	bool unmarshaledHasCalculatedSerializeUnityFieldsTrueResult_temp_0 = false;
	unmarshaledHasCalculatedSerializeUnityFieldsTrueResult_temp_0 = static_cast<bool>(marshaled.___HasCalculatedSerializeUnityFieldsTrueResult_0);
	unmarshaled.___HasCalculatedSerializeUnityFieldsTrueResult_0 = unmarshaledHasCalculatedSerializeUnityFieldsTrueResult_temp_0;
	bool unmarshaledHasCalculatedSerializeUnityFieldsFalseResult_temp_1 = false;
	unmarshaledHasCalculatedSerializeUnityFieldsFalseResult_temp_1 = static_cast<bool>(marshaled.___HasCalculatedSerializeUnityFieldsFalseResult_1);
	unmarshaled.___HasCalculatedSerializeUnityFieldsFalseResult_1 = unmarshaledHasCalculatedSerializeUnityFieldsFalseResult_temp_1;
	bool unmarshaledSerializeUnityFieldsTrueResult_temp_2 = false;
	unmarshaledSerializeUnityFieldsTrueResult_temp_2 = static_cast<bool>(marshaled.___SerializeUnityFieldsTrueResult_2);
	unmarshaled.___SerializeUnityFieldsTrueResult_2 = unmarshaledSerializeUnityFieldsTrueResult_temp_2;
	bool unmarshaledSerializeUnityFieldsFalseResult_temp_3 = false;
	unmarshaledSerializeUnityFieldsFalseResult_temp_3 = static_cast<bool>(marshaled.___SerializeUnityFieldsFalseResult_3);
	unmarshaled.___SerializeUnityFieldsFalseResult_3 = unmarshaledSerializeUnityFieldsFalseResult_temp_3;
}
// Conversion method for clean up from marshalling of: Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult
IL2CPP_EXTERN_C void CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshal_pinvoke_cleanup(CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult
IL2CPP_EXTERN_C void CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshal_com(const CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D& unmarshaled, CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshaled_com& marshaled)
{
	marshaled.___HasCalculatedSerializeUnityFieldsTrueResult_0 = static_cast<int32_t>(unmarshaled.___HasCalculatedSerializeUnityFieldsTrueResult_0);
	marshaled.___HasCalculatedSerializeUnityFieldsFalseResult_1 = static_cast<int32_t>(unmarshaled.___HasCalculatedSerializeUnityFieldsFalseResult_1);
	marshaled.___SerializeUnityFieldsTrueResult_2 = static_cast<int32_t>(unmarshaled.___SerializeUnityFieldsTrueResult_2);
	marshaled.___SerializeUnityFieldsFalseResult_3 = static_cast<int32_t>(unmarshaled.___SerializeUnityFieldsFalseResult_3);
}
IL2CPP_EXTERN_C void CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshal_com_back(const CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshaled_com& marshaled, CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D& unmarshaled)
{
	bool unmarshaledHasCalculatedSerializeUnityFieldsTrueResult_temp_0 = false;
	unmarshaledHasCalculatedSerializeUnityFieldsTrueResult_temp_0 = static_cast<bool>(marshaled.___HasCalculatedSerializeUnityFieldsTrueResult_0);
	unmarshaled.___HasCalculatedSerializeUnityFieldsTrueResult_0 = unmarshaledHasCalculatedSerializeUnityFieldsTrueResult_temp_0;
	bool unmarshaledHasCalculatedSerializeUnityFieldsFalseResult_temp_1 = false;
	unmarshaledHasCalculatedSerializeUnityFieldsFalseResult_temp_1 = static_cast<bool>(marshaled.___HasCalculatedSerializeUnityFieldsFalseResult_1);
	unmarshaled.___HasCalculatedSerializeUnityFieldsFalseResult_1 = unmarshaledHasCalculatedSerializeUnityFieldsFalseResult_temp_1;
	bool unmarshaledSerializeUnityFieldsTrueResult_temp_2 = false;
	unmarshaledSerializeUnityFieldsTrueResult_temp_2 = static_cast<bool>(marshaled.___SerializeUnityFieldsTrueResult_2);
	unmarshaled.___SerializeUnityFieldsTrueResult_2 = unmarshaledSerializeUnityFieldsTrueResult_temp_2;
	bool unmarshaledSerializeUnityFieldsFalseResult_temp_3 = false;
	unmarshaledSerializeUnityFieldsFalseResult_temp_3 = static_cast<bool>(marshaled.___SerializeUnityFieldsFalseResult_3);
	unmarshaled.___SerializeUnityFieldsFalseResult_3 = unmarshaledSerializeUnityFieldsFalseResult_temp_3;
}
// Conversion method for clean up from marshalling of: Sirenix.Serialization.UnitySerializationUtility/CachedSerializationBackendResult
IL2CPP_EXTERN_C void CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshal_com_cleanup(CachedSerializationBackendResult_tC1D5AAED5258552AB1691F4912C8E5D7022C234D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Serialization.UnitySerializationUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC11747591133EDBADCE350EF73EDBD07A89DF33E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A* L_0 = (U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A*)il2cpp_codegen_object_new(U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0904D2B5DBF1D794253689181193CC7EEA5E9D62(L_0, NULL);
		((U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Sirenix.Serialization.UnitySerializationUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0904D2B5DBF1D794253689181193CC7EEA5E9D62 (U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Sirenix.Serialization.UnitySerializationUtility/<>c::<SerializePrefabModifications>b__31_0(Sirenix.Serialization.PrefabModification,Sirenix.Serialization.PrefabModification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSerializePrefabModificationsU3Eb__31_0_mD8539788AA8E5E010F7216E8C242DC480669ECB3 (U3CU3Ec_t3323AEA634A9F9465010708C6B074122277C167A* __this, PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* ___a0, PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Path_1;
		PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* L_2 = ___b1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___Path_1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF(L_1, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_004d;
		}
	}
	{
		PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* L_6 = ___a0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___ModificationType_0;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* L_8 = ___a0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___ModificationType_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0031;
		}
	}

IL_0027:
	{
		PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* L_10 = ___b1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___ModificationType_0;
		if (L_11)
		{
			goto IL_0031;
		}
	}
	{
		return 1;
	}

IL_0031:
	{
		PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* L_12 = ___a0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___ModificationType_0;
		if (L_13)
		{
			goto IL_004d;
		}
	}
	{
		PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* L_14 = ___b1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___ModificationType_0;
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		PrefabModification_tFB68A5CBBC3E8ED26B18B566D50E8193F7F74C4B* L_16 = ___b1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___ModificationType_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_004d;
		}
	}

IL_004b:
	{
		return (-1);
	}

IL_004d:
	{
		int32_t L_18 = V_0;
		return L_18;
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
// System.Void Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_mBC63F73DF77E123C84063EBF5FBAE63BEFB5D0CE (U3CU3Ec__DisplayClass37_0_t0C7255F6A4588E842EFEF680C770229492707203* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass37_0::<GetCachedUnityMemberGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass37_0_U3CGetCachedUnityMemberGetterU3Eb__0_m5FD352CF92ADF9F656A7C1B7239D105AA1A3D440 (U3CU3Ec__DisplayClass37_0_t0C7255F6A4588E842EFEF680C770229492707203* __this, RuntimeObject** ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterUtilities_tBAB60F8536042EE1F6432327A20A0DB39020E1F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t* L_0 = __this->___member_0;
		RuntimeObject** L_1 = ___instance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		il2cpp_codegen_runtime_class_init_inline(FormatterUtilities_tBAB60F8536042EE1F6432327A20A0DB39020E1F4_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = FormatterUtilities_GetMemberValue_mAF9BEA5FEF4F7F0FE71A8FF506DDE373416C2ACB(L_0, L_2, NULL);
		return L_3;
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
// System.Void Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m6C4D81E7A6ED44EFBF172C03C5683F1C7EF59441 (U3CU3Ec__DisplayClass38_0_t9040DA5309D00DEBB765D34EBF8949494D38294A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.UnitySerializationUtility/<>c__DisplayClass38_0::<GetCachedUnityMemberSetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0_U3CGetCachedUnityMemberSetterU3Eb__0_mECF0E9B54A0DB2541916DFEC4A1EA14FCFFD2369 (U3CU3Ec__DisplayClass38_0_t9040DA5309D00DEBB765D34EBF8949494D38294A* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterUtilities_tBAB60F8536042EE1F6432327A20A0DB39020E1F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t* L_0 = __this->___member_0;
		RuntimeObject** L_1 = ___instance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		RuntimeObject* L_3 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(FormatterUtilities_tBAB60F8536042EE1F6432327A20A0DB39020E1F4_il2cpp_TypeInfo_var);
		FormatterUtilities_SetMemberValue_mCBB30A189CF74A7D8C1B85DABE79EFE8FEA5952F(L_0, L_2, L_3, NULL);
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
// System.Boolean Sirenix.Serialization.Utilities.FieldInfoExtensions::IsAliasField(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfoExtensions_IsAliasField_m15C2BE92B75941BCEF2EC8B03D23B0559D83B600 (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo_t* L_0 = ___fieldInfo0;
		return (bool)((!(((RuntimeObject*)(MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656*)((MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656*)IsInstSealed((RuntimeObject*)L_0, MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.FieldInfoExtensions::DeAliasField(System.Reflection.FieldInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72 (FieldInfo_t* ___fieldInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* V_0 = NULL;
	{
		FieldInfo_t* L_0 = ___fieldInfo0;
		V_0 = ((MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656*)IsInstSealed((RuntimeObject*)L_0, MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var));
		MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t* L_3;
		L_3 = MemberAliasFieldInfo_get_AliasedField_mD5DE35FBCA9EBBF8164EC578CDE3E4FCA88889CF_inline(L_2, NULL);
		V_0 = ((MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656*)IsInstSealed((RuntimeObject*)L_3, MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* L_4 = V_0;
		NullCheck(L_4);
		FieldInfo_t* L_5;
		L_5 = MemberAliasFieldInfo_get_AliasedField_mD5DE35FBCA9EBBF8164EC578CDE3E4FCA88889CF_inline(L_4, NULL);
		if (((MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656*)IsInstSealed((RuntimeObject*)L_5, MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var)))
		{
			goto IL_000c;
		}
	}
	{
		MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* L_6 = V_0;
		NullCheck(L_6);
		FieldInfo_t* L_7;
		L_7 = MemberAliasFieldInfo_get_AliasedField_mD5DE35FBCA9EBBF8164EC578CDE3E4FCA88889CF_inline(L_6, NULL);
		return L_7;
	}

IL_002c:
	{
		bool L_8 = ___throwOnNotAliased1;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		FieldInfo_t* L_9 = ___fieldInfo0;
		String_t* L_10;
		L_10 = MemberInfoExtensions_GetNiceName_mDD38DA7F83B59FE9217C70AB7078233F4737E787(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0FA423BE483BF423BD92086B411B16CAD1BCC6)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCCA4686ED2A34FD32531B43B63D30DBE5A0C258)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72_RuntimeMethod_var)));
	}

IL_004a:
	{
		FieldInfo_t* L_13 = ___fieldInfo0;
		return L_13;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Attribute[] Sirenix.Serialization.Utilities.MemberInfoExtensions::GetAttributes(System.Reflection.ICustomAttributeProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* MemberInfoExtensions_GetAttributes_mAFA11FE5789D63F70052FBB102DDD61094A789EF (RuntimeObject* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m03FB41D67EAB5D7616A20430C9C088F9D7F33EA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeObject* L_0 = ___member0;
		RuntimeObject* L_1;
		L_1 = MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m03FB41D67EAB5D7616A20430C9C088F9D7F33EA1(L_0, MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m03FB41D67EAB5D7616A20430C9C088F9D7F33EA1_RuntimeMethod_var);
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_2;
		L_2 = Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258(L_1, Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0018;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Object)
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_3 = (AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1*)(AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1_il2cpp_TypeInfo_var)), (uint32_t)0);
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0018;
	}// end catch (depth: 1)

IL_0018:
	{
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_4 = V_0;
		return L_4;
	}
}
// System.Attribute[] Sirenix.Serialization.Utilities.MemberInfoExtensions::GetAttributes(System.Reflection.ICustomAttributeProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* MemberInfoExtensions_GetAttributes_mBCD5532EC5596DA603C8244E0DBA5BAEB88EEF2C (RuntimeObject* ___member0, bool ___inherit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m75AF54248CC2A4640BECA635A126879530FE200A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeObject* L_0 = ___member0;
		bool L_1 = ___inherit1;
		RuntimeObject* L_2;
		L_2 = MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m75AF54248CC2A4640BECA635A126879530FE200A(L_0, L_1, MemberInfoExtensions_GetAttributes_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m75AF54248CC2A4640BECA635A126879530FE200A_RuntimeMethod_var);
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_3;
		L_3 = Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258(L_2, Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000f;
		}
		throw e;
	}

CATCH_000f:
	{// begin catch(System.Object)
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_4 = (AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1*)(AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1_il2cpp_TypeInfo_var)), (uint32_t)0);
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_5 = V_0;
		return L_5;
	}
}
// System.String Sirenix.Serialization.Utilities.MemberInfoExtensions::GetNiceName(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberInfoExtensions_GetNiceName_mDD38DA7F83B59FE9217C70AB7078233F4737E787 (MemberInfo_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodBase_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodBase_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		MemberInfo_t* L_0 = ___member0;
		V_0 = ((MethodBase_t*)IsInstClass((RuntimeObject*)L_0, MethodBase_t_il2cpp_TypeInfo_var));
		MethodBase_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		MethodBase_t* L_2 = V_0;
		String_t* L_3;
		L_3 = MethodInfoExtensions_GetFullName_m2CEA5F6CDD46B8FE2B9F39C2AC5560E3ADC3A2B0(L_2, NULL);
		V_1 = L_3;
		goto IL_001a;
	}

IL_0013:
	{
		MemberInfo_t* L_4 = ___member0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		V_1 = L_5;
	}

IL_001a:
	{
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = StringExtensions_ToTitleCase_mA4EC3E3A8A74722E89350C4DE4593AD168D84049(L_6, NULL);
		return L_7;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberInfoExtensions::IsStatic(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfoExtensions_IsStatic_m668CA87480817C276BB472019F2A2E94D209EC59 (MemberInfo_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodBase_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	MethodBase_t* V_2 = NULL;
	EventInfo_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		MemberInfo_t* L_0 = ___member0;
		V_0 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		FieldInfo_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		MemberInfo_t* L_4 = ___member0;
		V_1 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		PropertyInfo_t* L_6 = V_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
		if (L_7)
		{
			goto IL_0030;
		}
	}
	{
		PropertyInfo_t* L_8 = V_1;
		NullCheck(L_8);
		MethodInfo_t* L_9;
		L_9 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(25 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_8, (bool)1);
		NullCheck(L_9);
		bool L_10;
		L_10 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_9, NULL);
		return L_10;
	}

IL_0030:
	{
		PropertyInfo_t* L_11 = V_1;
		NullCheck(L_11);
		MethodInfo_t* L_12;
		L_12 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_11, (bool)1);
		NullCheck(L_12);
		bool L_13;
		L_13 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_12, NULL);
		return L_13;
	}

IL_003d:
	{
		MemberInfo_t* L_14 = ___member0;
		V_2 = ((MethodBase_t*)IsInstClass((RuntimeObject*)L_14, MethodBase_t_il2cpp_TypeInfo_var));
		MethodBase_t* L_15 = V_2;
		if (!L_15)
		{
			goto IL_004e;
		}
	}
	{
		MethodBase_t* L_16 = V_2;
		NullCheck(L_16);
		bool L_17;
		L_17 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_16, NULL);
		return L_17;
	}

IL_004e:
	{
		MemberInfo_t* L_18 = ___member0;
		V_3 = ((EventInfo_t*)IsInstClass((RuntimeObject*)L_18, EventInfo_t_il2cpp_TypeInfo_var));
		EventInfo_t* L_19 = V_3;
		if (!L_19)
		{
			goto IL_0065;
		}
	}
	{
		EventInfo_t* L_20 = V_3;
		NullCheck(L_20);
		MethodInfo_t* L_21;
		L_21 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.EventInfo::GetRaiseMethod(System.Boolean) */, L_20, (bool)1);
		NullCheck(L_21);
		bool L_22;
		L_22 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_21, NULL);
		return L_22;
	}

IL_0065:
	{
		MemberInfo_t* L_23 = ___member0;
		V_4 = ((Type_t*)IsInstClass((RuntimeObject*)L_23, Type_t_il2cpp_TypeInfo_var));
		Type_t* L_24 = V_4;
		if (!L_24)
		{
			goto IL_0084;
		}
	}
	{
		Type_t* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4(L_25, NULL);
		if (!L_26)
		{
			goto IL_0082;
		}
	}
	{
		Type_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_27, NULL);
		return L_28;
	}

IL_0082:
	{
		return (bool)0;
	}

IL_0084:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_29;
		L_29 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_30;
		MemberInfo_t* L_32 = ___member0;
		NullCheck(L_32);
		Type_t* L_33;
		L_33 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_32);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_31;
		MemberInfo_t* L_36 = ___member0;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_36);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_35;
		MemberInfo_t* L_39 = ___member0;
		NullCheck(L_39);
		Type_t* L_40;
		L_40 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_39, NULL);
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_41);
		String_t* L_42;
		L_42 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73708E57866F385D8A16EE244A5943522286EB8E)), L_38, NULL);
		V_5 = L_42;
		String_t* L_43 = V_5;
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_44 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_44);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_44, L_43, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberInfoExtensions_IsStatic_m668CA87480817C276BB472019F2A2E94D209EC59_RuntimeMethod_var)));
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberInfoExtensions::IsAlias(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfoExtensions_IsAlias_mBDEFA274444FDF67953F75F75C3EBAE2C00B2776 (MemberInfo_t* ___memberInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t* L_0 = ___memberInfo0;
		if (((MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656*)IsInstSealed((RuntimeObject*)L_0, MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		MemberInfo_t* L_1 = ___memberInfo0;
		if (((MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA*)IsInstSealed((RuntimeObject*)L_1, MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		MemberInfo_t* L_2 = ___memberInfo0;
		return (bool)((!(((RuntimeObject*)(MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18*)((MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18*)IsInstSealed((RuntimeObject*)L_2, MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.MemberInfoExtensions::DeAlias(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* MemberInfoExtensions_DeAlias_m538E8BFD6B63DFA685276B468C2B1BFC30F8DD31 (MemberInfo_t* ___memberInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* V_0 = NULL;
	MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* V_1 = NULL;
	MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* V_2 = NULL;
	{
		MemberInfo_t* L_0 = ___memberInfo0;
		V_0 = ((MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656*)IsInstSealed((RuntimeObject*)L_0, MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656_il2cpp_TypeInfo_var));
		MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t* L_3;
		L_3 = MemberAliasFieldInfo_get_AliasedField_mD5DE35FBCA9EBBF8164EC578CDE3E4FCA88889CF_inline(L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		MemberInfo_t* L_4 = ___memberInfo0;
		V_1 = ((MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA*)IsInstSealed((RuntimeObject*)L_4, MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var));
		MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* L_6 = V_1;
		NullCheck(L_6);
		PropertyInfo_t* L_7;
		L_7 = MemberAliasPropertyInfo_get_AliasedProperty_m641D01DDC45E3CB59762B653EAC3982678D3CB30_inline(L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		MemberInfo_t* L_8 = ___memberInfo0;
		V_2 = ((MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18*)IsInstSealed((RuntimeObject*)L_8, MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var));
		MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* L_10 = V_2;
		NullCheck(L_10);
		MethodInfo_t* L_11;
		L_11 = MemberAliasMethodInfo_get_AliasedMethod_mE6D71392C2BF6D6E8DEB276007EEC701E50BA6FB_inline(L_10, NULL);
		return L_11;
	}

IL_0033:
	{
		bool L_12 = ___throwOnNotAliased1;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		MemberInfo_t* L_13 = ___memberInfo0;
		String_t* L_14;
		L_14 = MemberInfoExtensions_GetNiceName_mDD38DA7F83B59FE9217C70AB7078233F4737E787(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5917A064FBFAF0DF11A326FEA4CCBAFFA668E43A)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCCA4686ED2A34FD32531B43B63D30DBE5A0C258)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberInfoExtensions_DeAlias_m538E8BFD6B63DFA685276B468C2B1BFC30F8DD31_RuntimeMethod_var)));
	}

IL_0051:
	{
		MemberInfo_t* L_17 = ___memberInfo0;
		return L_17;
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
// System.String Sirenix.Serialization.Utilities.MethodInfoExtensions::GetFullName(System.Reflection.MethodBase,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodInfoExtensions_GetFullName_mDFD637FD1006FD6ED7F6085AB41681B5B5134D4D (MethodBase_t* ___method0, String_t* ___extensionMethodPrefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		MethodBase_t* L_1 = ___method0;
		bool L_2;
		L_2 = MethodInfoExtensions_IsExtensionMethod_mAC0B94959438CD10C594221C5EEF57FC06BA7EBE(L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		StringBuilder_t* L_4 = V_0;
		String_t* L_5 = ___extensionMethodPrefix1;
		NullCheck(L_4);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_5, NULL);
	}

IL_0018:
	{
		StringBuilder_t* L_7 = V_0;
		MethodBase_t* L_8 = ___method0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		NullCheck(L_7);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_9, NULL);
		StringBuilder_t* L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		StringBuilder_t* L_13 = V_0;
		MethodBase_t* L_14 = ___method0;
		String_t* L_15;
		L_15 = MethodInfoExtensions_GetParamsNames_m708A745C8A0EDC687613506C2E6DE82560C54EC2(L_14, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, L_15, NULL);
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.String Sirenix.Serialization.Utilities.MethodInfoExtensions::GetParamsNames(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodInfoExtensions_GetParamsNames_m708A745C8A0EDC687613506C2E6DE82560C54EC2 (MethodBase_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m38CF2B84030C5802B54AF8946331B396CBC0ABB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m7F7BD85B3A417097B3F18F85F973F8241E8ABB32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_4 = NULL;
	String_t* V_5 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* G_B3_0 = NULL;
	{
		MethodBase_t* L_0 = ___method0;
		bool L_1;
		L_1 = MethodInfoExtensions_IsExtensionMethod_mAC0B94959438CD10C594221C5EEF57FC06BA7EBE(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		MethodBase_t* L_2 = ___method0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		G_B3_0 = L_3;
		goto IL_0021;
	}

IL_0010:
	{
		MethodBase_t* L_4 = ___method0;
		NullCheck(L_4);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5;
		L_5 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		RuntimeObject* L_6;
		L_6 = Enumerable_Skip_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m38CF2B84030C5802B54AF8946331B396CBC0ABB5((RuntimeObject*)L_5, 1, Enumerable_Skip_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m38CF2B84030C5802B54AF8946331B396CBC0ABB5_RuntimeMethod_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7;
		L_7 = Enumerable_ToArray_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m7F7BD85B3A417097B3F18F85F973F8241E8ABB32(L_6, Enumerable_ToArray_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m7F7BD85B3A417097B3F18F85F973F8241E8ABB32_RuntimeMethod_var);
		G_B3_0 = L_7;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_8, NULL);
		V_1 = L_8;
		V_2 = 0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_0;
		NullCheck(L_9);
		V_3 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		goto IL_007c;
	}

IL_0030:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_14 = V_4;
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_14);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_15, NULL);
		V_5 = L_16;
		StringBuilder_t* L_17 = V_1;
		String_t* L_18 = V_5;
		NullCheck(L_17);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
		StringBuilder_t* L_20 = V_1;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		StringBuilder_t* L_22 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_23 = V_4;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_24, NULL);
		int32_t L_26 = V_2;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_27, 1)))))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t* L_28 = V_1;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0078:
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_007c:
	{
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0030;
		}
	}
	{
		StringBuilder_t* L_33 = V_1;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		return L_34;
	}
}
// System.String Sirenix.Serialization.Utilities.MethodInfoExtensions::GetFullName(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodInfoExtensions_GetFullName_m2CEA5F6CDD46B8FE2B9F39C2AC5560E3ADC3A2B0 (MethodBase_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7D5E5AC531E559325A91A03E52812F6DB3706F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0 = ___method0;
		String_t* L_1;
		L_1 = MethodInfoExtensions_GetFullName_mDFD637FD1006FD6ED7F6085AB41681B5B5134D4D(L_0, _stringLiteralB7D5E5AC531E559325A91A03E52812F6DB3706F8, NULL);
		return L_1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MethodInfoExtensions::IsExtensionMethod(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfoExtensions_IsExtensionMethod_mAC0B94959438CD10C594221C5EEF57FC06BA7EBE (MethodBase_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		MethodBase_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4(L_2, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		Type_t* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD(L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		MethodBase_t* L_8 = ___method0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (ExtensionAttribute_t55192F874E3E06FBC2C075D9AB0214C94A702991_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_8, L_10, (bool)0);
		return L_11;
	}

IL_0031:
	{
		return (bool)0;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MethodInfoExtensions::IsAliasMethod(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfoExtensions_IsAliasMethod_mF826465317C13857E4909C322ECEF0AF3AF3BDCC (MethodInfo_t* ___methodInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___methodInfo0;
		return (bool)((!(((RuntimeObject*)(MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18*)((MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18*)IsInstSealed((RuntimeObject*)L_0, MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MethodInfoExtensions::DeAliasMethod(System.Reflection.MethodInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9 (MethodInfo_t* ___methodInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* V_0 = NULL;
	{
		MethodInfo_t* L_0 = ___methodInfo0;
		V_0 = ((MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18*)IsInstSealed((RuntimeObject*)L_0, MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var));
		MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* L_2 = V_0;
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = MemberAliasMethodInfo_get_AliasedMethod_mE6D71392C2BF6D6E8DEB276007EEC701E50BA6FB_inline(L_2, NULL);
		V_0 = ((MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18*)IsInstSealed((RuntimeObject*)L_3, MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* L_4 = V_0;
		NullCheck(L_4);
		MethodInfo_t* L_5;
		L_5 = MemberAliasMethodInfo_get_AliasedMethod_mE6D71392C2BF6D6E8DEB276007EEC701E50BA6FB_inline(L_4, NULL);
		if (((MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18*)IsInstSealed((RuntimeObject*)L_5, MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18_il2cpp_TypeInfo_var)))
		{
			goto IL_000c;
		}
	}
	{
		MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* L_6 = V_0;
		NullCheck(L_6);
		MethodInfo_t* L_7;
		L_7 = MemberAliasMethodInfo_get_AliasedMethod_mE6D71392C2BF6D6E8DEB276007EEC701E50BA6FB_inline(L_6, NULL);
		return L_7;
	}

IL_002c:
	{
		bool L_8 = ___throwOnNotAliased1;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		MethodInfo_t* L_9 = ___methodInfo0;
		String_t* L_10;
		L_10 = MemberInfoExtensions_GetNiceName_mDD38DA7F83B59FE9217C70AB7078233F4737E787(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3D6D6129E2AA416A3AD79CDD0C93B36F3B4F3F1)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCCA4686ED2A34FD32531B43B63D30DBE5A0C258)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9_RuntimeMethod_var)));
	}

IL_004a:
	{
		MethodInfo_t* L_13 = ___methodInfo0;
		return L_13;
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
// System.Boolean Sirenix.Serialization.Utilities.PathUtilities::HasSubDirectory(System.IO.DirectoryInfo,System.IO.DirectoryInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathUtilities_HasSubDirectory_m90A04F89FA6E15BA59969EF943F2D71B4819BE28 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* ___parentDir0, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* ___subDir1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_0 = ___parentDir0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)47));
		NullCheck(L_1);
		String_t* L_5;
		L_5 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_1, L_4, NULL);
		V_0 = L_5;
		goto IL_004b;
	}

IL_001e:
	{
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_6 = ___subDir1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_6);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)47));
		NullCheck(L_7);
		String_t* L_11;
		L_11 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_7, L_10, NULL);
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		return (bool)1;
	}

IL_0043:
	{
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_14 = ___subDir1;
		NullCheck(L_14);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_15;
		L_15 = DirectoryInfo_get_Parent_m2B95E4D3CBA22F8DAA259247ED791F1411D93347(L_14, NULL);
		___subDir1 = L_15;
	}

IL_004b:
	{
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_16 = ___subDir1;
		if (L_16)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
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
// System.Boolean Sirenix.Serialization.Utilities.PropertyInfoExtensions::IsAutoProperty(System.Reflection.PropertyInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfoExtensions_IsAutoProperty_m9BB6F32BF652092ED8738DD479E4DBD0B4CD668E (PropertyInfo_t* ___propInfo0, bool ___allowVirtual1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	MethodInfo_t* V_4 = NULL;
	int32_t V_5 = 0;
	{
		PropertyInfo_t* L_0 = ___propInfo0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		PropertyInfo_t* L_2 = ___propInfo0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		bool L_4 = ___allowVirtual1;
		if (L_4)
		{
			goto IL_0051;
		}
	}
	{
		PropertyInfo_t* L_5 = ___propInfo0;
		NullCheck(L_5);
		MethodInfo_t* L_6;
		L_6 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_5, (bool)1);
		V_3 = L_6;
		PropertyInfo_t* L_7 = ___propInfo0;
		NullCheck(L_7);
		MethodInfo_t* L_8;
		L_8 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(25 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_7, (bool)1);
		V_4 = L_8;
		MethodInfo_t* L_9 = V_3;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		MethodInfo_t* L_10 = V_3;
		NullCheck(L_10);
		bool L_11;
		L_11 = MethodBase_get_IsAbstract_mBD096DC9FCDF68114928CA73690882A2F9831EF9(L_10, NULL);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		MethodInfo_t* L_12 = V_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = MethodBase_get_IsVirtual_m2C0A566F37B666FDEE3066729AEACF336B342EC2(L_12, NULL);
		if (L_13)
		{
			goto IL_004f;
		}
	}

IL_0039:
	{
		MethodInfo_t* L_14 = V_4;
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		MethodInfo_t* L_15 = V_4;
		NullCheck(L_15);
		bool L_16;
		L_16 = MethodBase_get_IsAbstract_mBD096DC9FCDF68114928CA73690882A2F9831EF9(L_15, NULL);
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
		MethodInfo_t* L_17 = V_4;
		NullCheck(L_17);
		bool L_18;
		L_18 = MethodBase_get_IsVirtual_m2C0A566F37B666FDEE3066729AEACF336B342EC2(L_17, NULL);
		if (!L_18)
		{
			goto IL_0051;
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		V_0 = ((int32_t)44);
		PropertyInfo_t* L_19 = ___propInfo0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_20, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_1 = L_21;
		PropertyInfo_t* L_22 = ___propInfo0;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_22);
		int32_t L_24 = V_0;
		NullCheck(L_23);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_25;
		L_25 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(89 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_23, L_24);
		V_2 = L_25;
		V_5 = 0;
		goto IL_0095;
	}

IL_007c:
	{
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_26 = V_2;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		FieldInfo_t* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
		String_t* L_31 = V_1;
		NullCheck(L_30);
		bool L_32;
		L_32 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_008f;
		}
	}
	{
		return (bool)1;
	}

IL_008f:
	{
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0095:
	{
		int32_t L_34 = V_5;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_35 = V_2;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.PropertyInfoExtensions::IsAliasProperty(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfoExtensions_IsAliasProperty_mD8CF86481073896B1EBBC7B2FDB0DB1BC2019B78 (PropertyInfo_t* ___propertyInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t* L_0 = ___propertyInfo0;
		return (bool)((!(((RuntimeObject*)(MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA*)((MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA*)IsInstSealed((RuntimeObject*)L_0, MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.PropertyInfoExtensions::DeAliasProperty(System.Reflection.PropertyInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE (PropertyInfo_t* ___propertyInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* V_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___propertyInfo0;
		V_0 = ((MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA*)IsInstSealed((RuntimeObject*)L_0, MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var));
		MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t* L_3;
		L_3 = MemberAliasPropertyInfo_get_AliasedProperty_m641D01DDC45E3CB59762B653EAC3982678D3CB30_inline(L_2, NULL);
		V_0 = ((MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA*)IsInstSealed((RuntimeObject*)L_3, MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* L_4 = V_0;
		NullCheck(L_4);
		PropertyInfo_t* L_5;
		L_5 = MemberAliasPropertyInfo_get_AliasedProperty_m641D01DDC45E3CB59762B653EAC3982678D3CB30_inline(L_4, NULL);
		if (((MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA*)IsInstSealed((RuntimeObject*)L_5, MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA_il2cpp_TypeInfo_var)))
		{
			goto IL_000c;
		}
	}
	{
		MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* L_6 = V_0;
		NullCheck(L_6);
		PropertyInfo_t* L_7;
		L_7 = MemberAliasPropertyInfo_get_AliasedProperty_m641D01DDC45E3CB59762B653EAC3982678D3CB30_inline(L_6, NULL);
		return L_7;
	}

IL_002c:
	{
		bool L_8 = ___throwOnNotAliased1;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		PropertyInfo_t* L_9 = ___propertyInfo0;
		String_t* L_10;
		L_10 = MemberInfoExtensions_GetNiceName_mDD38DA7F83B59FE9217C70AB7078233F4737E787(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EB2011F6A6D5DF54BEB205C0A83C64BCCBB3CE1)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCCA4686ED2A34FD32531B43B63D30DBE5A0C258)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE_RuntimeMethod_var)));
	}

IL_004a:
	{
		PropertyInfo_t* L_13 = ___propertyInfo0;
		return L_13;
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
// System.String Sirenix.Serialization.Utilities.StringExtensions::ToTitleCase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_ToTitleCase_mA4EC3E3A8A74722E89350C4DE4593AD168D84049 (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_005a;
	}

IL_000a:
	{
		String_t* L_1 = ___input0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_2 = L_3;
		Il2CppChar L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_5 = V_1;
		String_t* L_6 = ___input0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_5, 1))) >= ((int32_t)L_7)))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_8 = ___input0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		V_3 = L_10;
		Il2CppChar L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_11, NULL);
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		Il2CppChar L_13 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_15;
		L_15 = Char_ToUpper_mB770BD2F2A733A053C8BBEFA013BED3E0C37B832(L_13, L_14, NULL);
		V_3 = L_15;
	}

IL_0040:
	{
		StringBuilder_t* L_16 = V_0;
		Il2CppChar L_17 = V_3;
		NullCheck(L_16);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, L_17, NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		goto IL_0056;
	}

IL_004e:
	{
		StringBuilder_t* L_20 = V_0;
		Il2CppChar L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_21, NULL);
	}

IL_0056:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_005a:
	{
		int32_t L_24 = V_1;
		String_t* L_25 = ___input0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_000a;
		}
	}
	{
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		return L_28;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.StringExtensions::IsNullOrWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExtensions_IsNullOrWhitespace_m378C50F222D097DCF6AA6274E6B4B754A809DF71 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		V_0 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		String_t* L_2 = ___str0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_4, NULL);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___str0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}

IL_0029:
	{
		return (bool)1;
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
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetCachedNiceName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetCachedNiceName_m0D2F45BD9C2B907CBEF089A6DD094014EFBF5DFA (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___CachedNiceNames_LOCK_14;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_3 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___CachedNiceNames_15;
				Type_t* L_4 = ___type0;
				NullCheck(L_3);
				bool L_5;
				L_5 = Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_002e_1;
				}
			}
			{
				Type_t* L_6 = ___type0;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				String_t* L_7;
				L_7 = TypeExtensions_CreateNiceName_m7A0D5281F6102DCC3DBA242E98981444A0027711(L_6, NULL);
				V_0 = L_7;
				Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_8 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___CachedNiceNames_15;
				Type_t* L_9 = ___type0;
				String_t* L_10 = V_0;
				NullCheck(L_8);
				Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_8, L_9, L_10, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
			}

IL_002e_1:
			{
				goto IL_0037;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::CreateNiceName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_CreateNiceName_m7A0D5281F6102DCC3DBA242E98981444A0027711 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C52B300840D30CF95D86AED2546C77721EE5F99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF911DE1BCFD80F95D73E01E462BE47D7986598B);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Type_t* V_6 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(47 /* System.Int32 System.Type::GetArrayRank() */, L_2);
		V_4 = L_3;
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_4);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_5, NULL);
		int32_t L_7 = V_4;
		G_B2_0 = L_6;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			G_B3_0 = L_6;
			goto IL_0027;
		}
	}
	{
		G_B4_0 = _stringLiteral0C52B300840D30CF95D86AED2546C77721EE5F99;
		G_B4_1 = G_B2_0;
		goto IL_002c;
	}

IL_0027:
	{
		G_B4_0 = _stringLiteral5B4F028A4070094FCA4E7762E2C376A65E2D59C6;
		G_B4_1 = G_B3_0;
	}

IL_002c:
	{
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		return L_8;
	}

IL_0032:
	{
		Type_t* L_9 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = TypeExtensions_InheritsFrom_m246820A7A897F304D093F93B522261D153507D2B(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		Type_t* L_13 = ___type0;
		NullCheck(L_13);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14;
		L_14 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_13);
		NullCheck(L_14);
		int32_t L_15 = 0;
		Type_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, NULL);
		return L_18;
	}

IL_005c:
	{
		Type_t* L_19 = ___type0;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_19, NULL);
		if (!L_20)
		{
			goto IL_007a;
		}
	}
	{
		Type_t* L_21 = ___type0;
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_21);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEF911DE1BCFD80F95D73E01E462BE47D7986598B, L_23, NULL);
		return L_24;
	}

IL_007a:
	{
		Type_t* L_25 = ___type0;
		NullCheck(L_25);
		bool L_26;
		L_26 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_25);
		if (L_26)
		{
			goto IL_008a;
		}
	}
	{
		Type_t* L_27 = ___type0;
		NullCheck(L_27);
		bool L_28;
		L_28 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_27);
		if (L_28)
		{
			goto IL_0091;
		}
	}

IL_008a:
	{
		Type_t* L_29 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = TypeExtensions_TypeNameGauntlet_m6D103478DEDCF191B7C8DB73AD0273810BFE6D13(L_29, NULL);
		return L_30;
	}

IL_0091:
	{
		StringBuilder_t* L_31 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_31, NULL);
		V_0 = L_31;
		Type_t* L_32 = ___type0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
		V_1 = L_33;
		String_t* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_34, _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C, NULL);
		V_2 = L_35;
		int32_t L_36 = V_2;
		if ((((int32_t)L_36) == ((int32_t)(-1))))
		{
			goto IL_00bf;
		}
	}
	{
		StringBuilder_t* L_37 = V_0;
		String_t* L_38 = V_1;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		String_t* L_40;
		L_40 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_38, 0, L_39, NULL);
		NullCheck(L_37);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, L_40, NULL);
		goto IL_00c7;
	}

IL_00bf:
	{
		StringBuilder_t* L_42 = V_0;
		String_t* L_43 = V_1;
		NullCheck(L_42);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_42, L_43, NULL);
	}

IL_00c7:
	{
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_45, ((int32_t)60), NULL);
		Type_t* L_47 = ___type0;
		NullCheck(L_47);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_48;
		L_48 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_47);
		V_3 = L_48;
		V_5 = 0;
		goto IL_0106;
	}

IL_00dc:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_49 = V_3;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Type_t* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_6 = L_52;
		int32_t L_53 = V_5;
		if (!L_53)
		{
			goto IL_00f2;
		}
	}
	{
		StringBuilder_t* L_54 = V_0;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00f2:
	{
		StringBuilder_t* L_56 = V_0;
		Type_t* L_57 = V_6;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_58;
		L_58 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_57, NULL);
		NullCheck(L_56);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_56, L_58, NULL);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0106:
	{
		int32_t L_61 = V_5;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_62 = V_3;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_00dc;
		}
	}
	{
		StringBuilder_t* L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_63, ((int32_t)62), NULL);
		StringBuilder_t* L_65 = V_0;
		NullCheck(L_65);
		String_t* L_66;
		L_66 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_65);
		return L_66;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::HasCastDefined(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_HasCastDefined_m922E1CB13D9F9959303880F873CBE2120E1E9057 (Type_t* ___from0, Type_t* ___to1, bool ___requireImplicitCast2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16D1F0A83CCC58576ADEFFBBECC40559A212FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___from0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t* L_2 = ___from0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_2, NULL);
		Type_t* L_4 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = TypeExtensions_IsCastableTo_m942D3FDCED24E6A79B4EF9C689FB45D8B7D53CEA(L_3, L_4, (bool)0, NULL);
		return L_5;
	}

IL_0016:
	{
		Type_t* L_6 = ___to1;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_6);
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_8 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_8, NULL);
		Type_t* L_10 = ___from0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = TypeExtensions_IsCastableTo_m942D3FDCED24E6A79B4EF9C689FB45D8B7D53CEA(L_9, L_10, (bool)0, NULL);
		return L_11;
	}

IL_002c:
	{
		Type_t* L_12 = ___from0;
		NullCheck(L_12);
		bool L_13;
		L_13 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_12, NULL);
		if (L_13)
		{
			goto IL_003f;
		}
	}
	{
		Type_t* L_14 = ___from0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Type_t* L_15 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___VoidPointerType_16;
		if ((!(((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_15))))
		{
			goto IL_00cb;
		}
	}

IL_003f:
	{
		Type_t* L_16 = ___to1;
		NullCheck(L_16);
		bool L_17;
		L_17 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_16, NULL);
		if (L_17)
		{
			goto IL_004f;
		}
	}
	{
		Type_t* L_18 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Type_t* L_19 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___VoidPointerType_16;
		if ((!(((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_19))))
		{
			goto IL_00cb;
		}
	}

IL_004f:
	{
		bool L_20 = ___requireImplicitCast2;
		if (!L_20)
		{
			goto IL_0064;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_21 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___PrimitiveImplicitCasts_17;
		Type_t* L_22 = ___from0;
		NullCheck(L_21);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_23;
		L_23 = Dictionary_2_get_Item_mE16D1F0A83CCC58576ADEFFBBECC40559A212FAB(L_21, L_22, Dictionary_2_get_Item_mE16D1F0A83CCC58576ADEFFBBECC40559A212FAB_RuntimeMethod_var);
		Type_t* L_24 = ___to1;
		NullCheck(L_23);
		bool L_25;
		L_25 = HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D(L_23, L_24, HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		return L_25;
	}

IL_0064:
	{
		Type_t* L_26 = ___from0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_26) == ((RuntimeObject*)(Type_t*)L_28))))
		{
			goto IL_008a;
		}
	}
	{
		Type_t* L_29 = ___to1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (UIntPtr_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_29) == ((RuntimeObject*)(Type_t*)L_31))))
		{
			goto IL_0080;
		}
	}
	{
		return (bool)0;
	}

IL_0080:
	{
		Type_t* L_32 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Type_t* L_33 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___VoidPointerType_16;
		if ((!(((RuntimeObject*)(Type_t*)L_32) == ((RuntimeObject*)(Type_t*)L_33))))
		{
			goto IL_00b0;
		}
	}
	{
		return (bool)1;
	}

IL_008a:
	{
		Type_t* L_34 = ___from0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (UIntPtr_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_34) == ((RuntimeObject*)(Type_t*)L_36))))
		{
			goto IL_00b0;
		}
	}
	{
		Type_t* L_37 = ___to1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_37) == ((RuntimeObject*)(Type_t*)L_39))))
		{
			goto IL_00a6;
		}
	}
	{
		return (bool)0;
	}

IL_00a6:
	{
		Type_t* L_40 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Type_t* L_41 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___VoidPointerType_16;
		if ((!(((RuntimeObject*)(Type_t*)L_40) == ((RuntimeObject*)(Type_t*)L_41))))
		{
			goto IL_00b0;
		}
	}
	{
		return (bool)1;
	}

IL_00b0:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_42 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___ExplicitCastIntegrals_18;
		Type_t* L_43 = ___from0;
		NullCheck(L_42);
		bool L_44;
		L_44 = HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D(L_42, L_43, HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		if (!L_44)
		{
			goto IL_00c9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_45 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___ExplicitCastIntegrals_18;
		Type_t* L_46 = ___to1;
		NullCheck(L_45);
		bool L_47;
		L_47 = HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D(L_45, L_46, HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		return L_47;
	}

IL_00c9:
	{
		return (bool)0;
	}

IL_00cb:
	{
		Type_t* L_48 = ___from0;
		Type_t* L_49 = ___to1;
		bool L_50 = ___requireImplicitCast2;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		MethodInfo_t* L_51;
		L_51 = TypeExtensions_GetCastMethod_mD8F2128A0AEFD1461FCF7AE9587021F136400192(L_48, L_49, L_50, NULL);
		return (bool)((!(((RuntimeObject*)(MethodInfo_t*)L_51) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsValidIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValidIdentifier_m957DDF483E94E2AC67D54DFF077FD964FF5CCAC6 (String_t* ___identifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___identifier0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___identifier0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		String_t* L_3 = ___identifier0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)46), NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_6 = ___identifier0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_6, L_8, NULL);
		V_1 = L_9;
		V_2 = 0;
		goto IL_0040;
	}

IL_0030:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeExtensions_IsValidIdentifier_m957DDF483E94E2AC67D54DFF077FD964FF5CCAC6(L_13, NULL);
		if (L_14)
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0040:
	{
		int32_t L_16 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)1;
	}

IL_0048:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_18 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___ReservedCSharpKeywords_12;
		String_t* L_19 = ___identifier0;
		NullCheck(L_18);
		bool L_20;
		L_20 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_18, L_19, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0057:
	{
		String_t* L_21 = ___identifier0;
		NullCheck(L_21);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_21, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = TypeExtensions_IsValidIdentifierStartCharacter_mCC1057AED22B6214A78388CD49B3CE097A5046CD(L_22, NULL);
		if (L_23)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		V_3 = 1;
		goto IL_007f;
	}

IL_006b:
	{
		String_t* L_24 = ___identifier0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = TypeExtensions_IsValidIdentifierPartCharacter_m258C614DD6947BF8E3A503407B7A64A7F4823B69(L_26, NULL);
		if (L_27)
		{
			goto IL_007b;
		}
	}
	{
		return (bool)0;
	}

IL_007b:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_007f:
	{
		int32_t L_29 = V_3;
		String_t* L_30 = ___identifier0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_006b;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsValidIdentifierStartCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValidIdentifierStartCharacter_mCC1057AED22B6214A78388CD49B3CE097A5046CD (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_000a;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0025;
		}
	}

IL_000a:
	{
		Il2CppChar L_2 = ___c0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0025;
		}
	}

IL_0014:
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)95))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)64))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_6 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Char_IsLetter_m4363120285B51739DEE559E5C81E89580DDC78C0(L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsValidIdentifierPartCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValidIdentifierPartCharacter_m258C614DD6947BF8E3A503407B7A64A7F4823B69 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_000a;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)122))))
		{
			goto IL_002a;
		}
	}

IL_000a:
	{
		Il2CppChar L_2 = ___c0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)90))))
		{
			goto IL_002a;
		}
	}

IL_0014:
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)95))))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_6 = ___c0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_002a;
		}
	}

IL_0023:
	{
		Il2CppChar L_7 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Char_IsLetter_m4363120285B51739DEE559E5C81E89580DDC78C0(L_7, NULL);
		return L_8;
	}

IL_002a:
	{
		return (bool)1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsCastableTo(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsCastableTo_m942D3FDCED24E6A79B4EF9C689FB45D8B7D53CEA (Type_t* ___from0, Type_t* ___to1, bool ___requireImplicitCast2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___from0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_IsCastableTo_m942D3FDCED24E6A79B4EF9C689FB45D8B7D53CEA_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___to1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4419EF51FB63A77978E414E01AC1C9DCF20AA99)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_IsCastableTo_m942D3FDCED24E6A79B4EF9C689FB45D8B7D53CEA_RuntimeMethod_var)));
	}

IL_001c:
	{
		Type_t* L_4 = ___from0;
		Type_t* L_5 = ___to1;
		if ((!(((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)1;
	}

IL_0022:
	{
		Type_t* L_6 = ___to1;
		Type_t* L_7 = ___from0;
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_6, L_7);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		Type_t* L_9 = ___from0;
		Type_t* L_10 = ___to1;
		bool L_11 = ___requireImplicitCast2;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = TypeExtensions_HasCastDefined_m922E1CB13D9F9959303880F873CBE2120E1E9057(L_9, L_10, L_11, NULL);
		return L_12;
	}

IL_0034:
	{
		return (bool)1;
	}
}
// System.Func`2<System.Object,System.Object> Sirenix.Serialization.Utilities.TypeExtensions::GetCastMethodDelegate(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tACBF5A1656250800CE861707354491F0611F6624* TypeExtensions_GetCastMethodDelegate_mCFCB424DA729B6B2CBEE8370C5A7F0B5FF566074 (Type_t* ___from0, Type_t* ___to1, bool ___requireImplicitCast2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleLookupDictionary_3_AddInner_mE6587AA4C57DAA962350E8B0C2555841941B5CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleLookupDictionary_3_TryGetInnerValue_m403B9F6BACEF00B3AE823A9E2D4542A7FFB57EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_U3CGetCastMethodDelegateU3Eb__0_m75269A6F7FC80A9CE6B6CAD4E7CD09E8E931E004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___WeaklyTypedTypeCastDelegates_LOCK_6;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07* L_3 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___WeaklyTypedTypeCastDelegates_8;
				Type_t* L_4 = ___from0;
				Type_t* L_5 = ___to1;
				NullCheck(L_3);
				bool L_6;
				L_6 = DoubleLookupDictionary_3_TryGetInnerValue_m403B9F6BACEF00B3AE823A9E2D4542A7FFB57EA7(L_3, L_4, L_5, (&V_0), DoubleLookupDictionary_3_TryGetInnerValue_m403B9F6BACEF00B3AE823A9E2D4542A7FFB57EA7_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0053_1;
				}
			}
			{
				U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871* L_7 = (U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				U3CU3Ec__DisplayClass26_0__ctor_mD7449A332EF1223915014834C96A731F81A9D9DB(L_7, NULL);
				V_2 = L_7;
				U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871* L_8 = V_2;
				Type_t* L_9 = ___from0;
				Type_t* L_10 = ___to1;
				bool L_11 = ___requireImplicitCast2;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				MethodInfo_t* L_12;
				L_12 = TypeExtensions_GetCastMethod_mD8F2128A0AEFD1461FCF7AE9587021F136400192(L_9, L_10, L_11, NULL);
				NullCheck(L_8);
				L_8->___method_0 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&L_8->___method_0), (void*)L_12);
				U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871* L_13 = V_2;
				NullCheck(L_13);
				MethodInfo_t* L_14 = L_13->___method_0;
				if (!L_14)
				{
					goto IL_0045_1;
				}
			}
			{
				U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871* L_15 = V_2;
				Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_16 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass26_0_U3CGetCastMethodDelegateU3Eb__0_m75269A6F7FC80A9CE6B6CAD4E7CD09E8E931E004_RuntimeMethod_var), NULL);
				V_0 = L_16;
			}

IL_0045_1:
			{
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07* L_17 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___WeaklyTypedTypeCastDelegates_8;
				Type_t* L_18 = ___from0;
				Type_t* L_19 = ___to1;
				Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_20 = V_0;
				NullCheck(L_17);
				Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_21;
				L_21 = DoubleLookupDictionary_3_AddInner_mE6587AA4C57DAA962350E8B0C2555841941B5CF6(L_17, L_18, L_19, L_20, DoubleLookupDictionary_3_AddInner_mE6587AA4C57DAA962350E8B0C2555841941B5CF6_RuntimeMethod_var);
			}

IL_0053_1:
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_22 = V_0;
		return L_22;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.TypeExtensions::GetCastMethod(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetCastMethod_mD8F2128A0AEFD1461FCF7AE9587021F136400192 (Type_t* ___from0, Type_t* ___to1, bool ___requireImplicitCast2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6E90C09E43FB002DA629508AC300A0750320118);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	MethodInfo_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	MethodInfo_t* V_6 = NULL;
	{
		Type_t* L_0 = ___from0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18(L_0, ((int32_t)24), TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0056_1;
			}

IL_0012_1:
			{
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				MethodInfo_t* L_7;
				L_7 = InterfaceFuncInvoker0< MethodInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var, L_6);
				V_3 = L_7;
				MethodInfo_t* L_8 = V_3;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59, NULL);
				if (L_10)
				{
					goto IL_0040_1;
				}
			}
			{
				bool L_11 = ___requireImplicitCast2;
				if (L_11)
				{
					goto IL_0056_1;
				}
			}
			{
				MethodInfo_t* L_12 = V_3;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118, NULL);
				if (!L_14)
				{
					goto IL_0056_1;
				}
			}

IL_0040_1:
			{
				Type_t* L_15 = ___to1;
				MethodInfo_t* L_16 = V_3;
				NullCheck(L_16);
				Type_t* L_17;
				L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(41 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_16);
				NullCheck(L_15);
				bool L_18;
				L_18 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_17);
				if (!L_18)
				{
					goto IL_0056_1;
				}
			}
			{
				MethodInfo_t* L_19 = V_3;
				V_4 = L_19;
				goto IL_00e4;
			}

IL_0056_1:
			{
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		Type_t* L_22 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_23;
		L_23 = TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18(L_22, ((int32_t)24), TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18_RuntimeMethod_var);
		V_1 = L_23;
		RuntimeObject* L_24 = V_1;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var, L_24);
		V_5 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d6:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_26 = V_5;
					if (!L_26)
					{
						goto IL_00e1;
					}
				}
				{
					RuntimeObject* L_27 = V_5;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00e1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cb_1;
			}

IL_007d_1:
			{
				RuntimeObject* L_28 = V_5;
				NullCheck(L_28);
				MethodInfo_t* L_29;
				L_29 = InterfaceFuncInvoker0< MethodInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var, L_28);
				V_6 = L_29;
				MethodInfo_t* L_30 = V_6;
				NullCheck(L_30);
				String_t* L_31;
				L_31 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_30);
				bool L_32;
				L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59, NULL);
				if (L_32)
				{
					goto IL_00af_1;
				}
			}
			{
				bool L_33 = ___requireImplicitCast2;
				if (L_33)
				{
					goto IL_00cb_1;
				}
			}
			{
				MethodInfo_t* L_34 = V_6;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
				bool L_36;
				L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118, NULL);
				if (!L_36)
				{
					goto IL_00cb_1;
				}
			}

IL_00af_1:
			{
				MethodInfo_t* L_37 = V_6;
				NullCheck(L_37);
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_38;
				L_38 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_37);
				NullCheck(L_38);
				int32_t L_39 = 0;
				ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
				NullCheck(L_40);
				Type_t* L_41;
				L_41 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_40);
				Type_t* L_42 = ___from0;
				NullCheck(L_41);
				bool L_43;
				L_43 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_41, L_42);
				if (!L_43)
				{
					goto IL_00cb_1;
				}
			}
			{
				MethodInfo_t* L_44 = V_6;
				V_4 = L_44;
				goto IL_00e4;
			}

IL_00cb_1:
			{
				RuntimeObject* L_45 = V_5;
				NullCheck(L_45);
				bool L_46;
				L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_45);
				if (L_46)
				{
					goto IL_007d_1;
				}
			}
			{
				goto IL_00e2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		return (MethodInfo_t*)NULL;
	}

IL_00e4:
	{
		MethodInfo_t* L_47 = V_4;
		return L_47;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::ImplementsOrInherits(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementsOrInherits_m70C98CACCDC767DD935B807BD1B7C9042FA9C98A (Type_t* ___type0, Type_t* ___to1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___to1;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::ImplementsOpenGenericType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementsOpenGenericType_m4408290346ADBEF6770B50ADE78FFDB8305D1688 (Type_t* ___candidateType0, Type_t* ___openGenericType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___openGenericType1;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Type_t* L_2 = ___candidateType0;
		Type_t* L_3 = ___openGenericType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = TypeExtensions_ImplementsOpenGenericInterface_mA9B23B842C59B27B5CC0DF28621B67539A9BAD37(L_2, L_3, NULL);
		return L_4;
	}

IL_0010:
	{
		Type_t* L_5 = ___candidateType0;
		Type_t* L_6 = ___openGenericType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = TypeExtensions_ImplementsOpenGenericClass_m169A6AB06B4B5AE55B28F0F35E89F3C3C9869D45(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::ImplementsOpenGenericInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementsOpenGenericInterface_mA9B23B842C59B27B5CC0DF28621B67539A9BAD37 (Type_t* ___candidateType0, Type_t* ___openGenericInterfaceType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Type_t* L_0 = ___candidateType0;
		Type_t* L_1 = ___openGenericInterfaceType1;
		if ((!(((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Type_t* L_2 = ___candidateType0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_2);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_4 = ___candidateType0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_4);
		Type_t* L_6 = ___openGenericInterfaceType1;
		if ((!(((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		Type_t* L_7 = ___candidateType0;
		NullCheck(L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8;
		L_8 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type[] System.Type::GetInterfaces() */, L_7);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0035;
	}

IL_0024:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Type_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Type_t* L_13 = ___openGenericInterfaceType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeExtensions_ImplementsOpenGenericInterface_mA9B23B842C59B27B5CC0DF28621B67539A9BAD37(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0035:
	{
		int32_t L_16 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::ImplementsOpenGenericClass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementsOpenGenericClass_m169A6AB06B4B5AE55B28F0F35E89F3C3C9869D45 (Type_t* ___candidateType0, Type_t* ___openGenericType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = ___candidateType0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Type_t* L_2 = ___candidateType0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		Type_t* L_4 = ___openGenericType1;
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		Type_t* L_5 = ___candidateType0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_5);
		V_0 = L_6;
		Type_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		Type_t* L_8 = V_0;
		Type_t* L_9 = ___openGenericType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TypeExtensions_ImplementsOpenGenericClass_m169A6AB06B4B5AE55B28F0F35E89F3C3C9869D45(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Type[] Sirenix.Serialization.Utilities.TypeExtensions::GetArgumentsOfInheritedOpenGenericType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* TypeExtensions_GetArgumentsOfInheritedOpenGenericType_m2E9269CEFCB45CC148AD56857896E236177FC673 (Type_t* ___candidateType0, Type_t* ___openGenericType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___openGenericType1;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Type_t* L_2 = ___candidateType0;
		Type_t* L_3 = ___openGenericType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4;
		L_4 = TypeExtensions_GetArgumentsOfInheritedOpenGenericInterface_m9AED9C1EB9599B6903AB54B37E45214E37C5E9D6(L_2, L_3, NULL);
		return L_4;
	}

IL_0010:
	{
		Type_t* L_5 = ___candidateType0;
		Type_t* L_6 = ___openGenericType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7;
		L_7 = TypeExtensions_GetArgumentsOfInheritedOpenGenericClass_m5A4229D704A7E36F20B2D5716FE41BA0481F0DE5(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Type[] Sirenix.Serialization.Utilities.TypeExtensions::GetArgumentsOfInheritedOpenGenericClass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* TypeExtensions_GetArgumentsOfInheritedOpenGenericClass_m5A4229D704A7E36F20B2D5716FE41BA0481F0DE5 (Type_t* ___candidateType0, Type_t* ___openGenericType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = ___candidateType0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_2 = ___candidateType0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		Type_t* L_4 = ___openGenericType1;
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_5 = ___candidateType0;
		NullCheck(L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6;
		L_6 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_5);
		return L_6;
	}

IL_0018:
	{
		Type_t* L_7 = ___candidateType0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_7);
		V_0 = L_8;
		Type_t* L_9 = V_0;
		if (!L_9)
		{
			goto IL_002a;
		}
	}
	{
		Type_t* L_10 = V_0;
		Type_t* L_11 = ___openGenericType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12;
		L_12 = TypeExtensions_GetArgumentsOfInheritedOpenGenericClass_m5A4229D704A7E36F20B2D5716FE41BA0481F0DE5(L_10, L_11, NULL);
		return L_12;
	}

IL_002a:
	{
		return (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL;
	}
}
// System.Type[] Sirenix.Serialization.Utilities.TypeExtensions::GetArgumentsOfInheritedOpenGenericInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* TypeExtensions_GetArgumentsOfInheritedOpenGenericInterface_m9AED9C1EB9599B6903AB54B37E45214E37C5E9D6 (Type_t* ___candidateType0, Type_t* ___openGenericInterfaceType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	{
		Type_t* L_0 = ___openGenericInterfaceType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Type_t* L_1 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericListInterface_4;
		if ((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		Type_t* L_2 = ___openGenericInterfaceType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Type_t* L_3 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericCollectionInterface_5;
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_0028;
		}
	}

IL_0010:
	{
		Type_t* L_4 = ___candidateType0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_4, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		Type_t* L_8 = ___candidateType0;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		return L_7;
	}

IL_0028:
	{
		Type_t* L_10 = ___candidateType0;
		Type_t* L_11 = ___openGenericInterfaceType1;
		if ((!(((RuntimeObject*)(Type_t*)L_10) == ((RuntimeObject*)(Type_t*)L_11))))
		{
			goto IL_0033;
		}
	}
	{
		Type_t* L_12 = ___candidateType0;
		NullCheck(L_12);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13;
		L_13 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_12);
		return L_13;
	}

IL_0033:
	{
		Type_t* L_14 = ___candidateType0;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_14);
		if (!L_15)
		{
			goto IL_004b;
		}
	}
	{
		Type_t* L_16 = ___candidateType0;
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_16);
		Type_t* L_18 = ___openGenericInterfaceType1;
		if ((!(((RuntimeObject*)(Type_t*)L_17) == ((RuntimeObject*)(Type_t*)L_18))))
		{
			goto IL_004b;
		}
	}
	{
		Type_t* L_19 = ___candidateType0;
		NullCheck(L_19);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20;
		L_20 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_19);
		return L_20;
	}

IL_004b:
	{
		Type_t* L_21 = ___candidateType0;
		NullCheck(L_21);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22;
		L_22 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type[] System.Type::GetInterfaces() */, L_21);
		V_0 = L_22;
		V_1 = 0;
		goto IL_0073;
	}

IL_0056:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Type_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_2 = L_26;
		Type_t* L_27 = V_2;
		NullCheck(L_27);
		bool L_28;
		L_28 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_27);
		if (!L_28)
		{
			goto IL_006f;
		}
	}
	{
		Type_t* L_29 = V_2;
		Type_t* L_30 = ___openGenericInterfaceType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31;
		L_31 = TypeExtensions_GetArgumentsOfInheritedOpenGenericInterface_m9AED9C1EB9599B6903AB54B37E45214E37C5E9D6(L_29, L_30, NULL);
		V_3 = L_31;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_32 = V_3;
		if (!L_32)
		{
			goto IL_006f;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_33 = V_3;
		return L_33;
	}

IL_006f:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0073:
	{
		int32_t L_35 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_36 = V_0;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0056;
		}
	}
	{
		return (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.TypeExtensions::GetOperatorMethod(System.Type,Sirenix.Serialization.Utilities.Operator,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetOperatorMethod_m65B46B3AFAC267C4837CBC0F0ACB864BF7DA97C3 (Type_t* ___type0, int32_t ___op1, Type_t* ___leftOperand2, Type_t* ___rightOperand3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32674451B983F172BF67FC604D118D404FD19E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	MethodInfo_t* V_4 = NULL;
	{
		int32_t L_0 = ___op1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_0084;
			}
			case 5:
			{
				goto IL_008c;
			}
			case 6:
			{
				goto IL_0094;
			}
			case 7:
			{
				goto IL_009c;
			}
			case 8:
			{
				goto IL_00a4;
			}
			case 9:
			{
				goto IL_00ac;
			}
			case 10:
			{
				goto IL_00b4;
			}
			case 11:
			{
				goto IL_00bc;
			}
			case 12:
			{
				goto IL_00c4;
			}
			case 13:
			{
				goto IL_00cc;
			}
			case 14:
			{
				goto IL_00d4;
			}
			case 15:
			{
				goto IL_00dc;
			}
			case 16:
			{
				goto IL_00e4;
			}
			case 17:
			{
				goto IL_00f4;
			}
			case 18:
			{
				goto IL_00f4;
			}
			case 19:
			{
				goto IL_00ec;
			}
		}
	}
	{
		goto IL_00f6;
	}

IL_005b:
	{
		V_0 = _stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96;
		goto IL_00fc;
	}

IL_0066:
	{
		V_0 = _stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57;
		goto IL_00fc;
	}

IL_0071:
	{
		V_0 = _stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826;
		goto IL_00fc;
	}

IL_007c:
	{
		V_0 = _stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282;
		goto IL_00fc;
	}

IL_0084:
	{
		V_0 = _stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB;
		goto IL_00fc;
	}

IL_008c:
	{
		V_0 = _stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7;
		goto IL_00fc;
	}

IL_0094:
	{
		V_0 = _stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75;
		goto IL_00fc;
	}

IL_009c:
	{
		V_0 = _stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5;
		goto IL_00fc;
	}

IL_00a4:
	{
		V_0 = _stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B;
		goto IL_00fc;
	}

IL_00ac:
	{
		V_0 = _stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0;
		goto IL_00fc;
	}

IL_00b4:
	{
		V_0 = _stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E;
		goto IL_00fc;
	}

IL_00bc:
	{
		V_0 = _stringLiteralA32674451B983F172BF67FC604D118D404FD19E6;
		goto IL_00fc;
	}

IL_00c4:
	{
		V_0 = _stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE;
		goto IL_00fc;
	}

IL_00cc:
	{
		V_0 = _stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F;
		goto IL_00fc;
	}

IL_00d4:
	{
		V_0 = _stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2;
		goto IL_00fc;
	}

IL_00dc:
	{
		V_0 = _stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08;
		goto IL_00fc;
	}

IL_00e4:
	{
		V_0 = _stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD;
		goto IL_00fc;
	}

IL_00ec:
	{
		V_0 = _stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D;
		goto IL_00fc;
	}

IL_00f4:
	{
		return (MethodInfo_t*)NULL;
	}

IL_00f6:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_1 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetOperatorMethod_m65B46B3AFAC267C4837CBC0F0ACB864BF7DA97C3_RuntimeMethod_var)));
	}

IL_00fc:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___TwoLengthTypeArray_Cached_10;
		V_1 = L_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = V_1;
		V_2 = L_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = V_2;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)L_4, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013e:
			{// begin finally (depth: 1)
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = V_2;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = V_1;
				Type_t* L_7 = ___leftOperand2;
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, L_7);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_7);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = V_1;
				Type_t* L_9 = ___rightOperand3;
				NullCheck(L_8);
				ArrayElementTypeCheck (L_8, L_9);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_9);
				Type_t* L_10 = ___type0;
				String_t* L_11 = V_0;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_1;
				NullCheck(L_10);
				MethodInfo_t* L_13;
				L_13 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_10, L_11, ((int32_t)56), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_12, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
				V_3 = L_13;
				MethodInfo_t* L_14 = V_3;
				if (!L_14)
				{
					goto IL_0139_1;
				}
			}
			{
				MethodInfo_t* L_15 = V_3;
				NullCheck(L_15);
				Type_t* L_16;
				L_16 = VirtualFuncInvoker0< Type_t* >::Invoke(41 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_15);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				if ((((RuntimeObject*)(Type_t*)L_16) == ((RuntimeObject*)(Type_t*)L_18)))
				{
					goto IL_0139_1;
				}
			}
			{
				V_4 = (MethodInfo_t*)NULL;
				goto IL_0145;
			}

IL_0139_1:
			{
				MethodInfo_t* L_19 = V_3;
				V_4 = L_19;
				goto IL_0145;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0145:
	{
		MethodInfo_t* L_20 = V_4;
		return L_20;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.TypeExtensions::GetOperatorMethod(System.Type,Sirenix.Serialization.Utilities.Operator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetOperatorMethod_m22F60D9DE830F21F16ED530B5F26727D21CF4387 (Type_t* ___type0, int32_t ___op1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMethodInfo_t_m0BDE409D8B745A112F60FA3482C66D0204FB9479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass39_0_U3CGetOperatorMethodU3Eb__0_mA393C191CB9E8C63D354B95E7E6F98EE63C65613_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32674451B983F172BF67FC604D118D404FD19E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_0 = (U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass39_0__ctor_mEBC7B16B8CFFFCAF19FF511AC52088084D6941AC(L_0, NULL);
		V_0 = L_0;
		int32_t L_1 = ___op1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_00b1;
			}
			case 6:
			{
				goto IL_00c1;
			}
			case 7:
			{
				goto IL_00d1;
			}
			case 8:
			{
				goto IL_00e1;
			}
			case 9:
			{
				goto IL_00ee;
			}
			case 10:
			{
				goto IL_00fb;
			}
			case 11:
			{
				goto IL_0108;
			}
			case 12:
			{
				goto IL_0115;
			}
			case 13:
			{
				goto IL_0122;
			}
			case 14:
			{
				goto IL_012f;
			}
			case 15:
			{
				goto IL_013c;
			}
			case 16:
			{
				goto IL_0149;
			}
			case 17:
			{
				goto IL_0163;
			}
			case 18:
			{
				goto IL_0163;
			}
			case 19:
			{
				goto IL_0156;
			}
		}
	}
	{
		goto IL_0165;
	}

IL_0061:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_2 = V_0;
		NullCheck(L_2);
		L_2->___methodName_0 = _stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___methodName_0), (void*)_stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96);
		goto IL_016b;
	}

IL_0071:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_3 = V_0;
		NullCheck(L_3);
		L_3->___methodName_0 = _stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___methodName_0), (void*)_stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57);
		goto IL_016b;
	}

IL_0081:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_4 = V_0;
		NullCheck(L_4);
		L_4->___methodName_0 = _stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___methodName_0), (void*)_stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826);
		goto IL_016b;
	}

IL_0091:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_5 = V_0;
		NullCheck(L_5);
		L_5->___methodName_0 = _stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___methodName_0), (void*)_stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282);
		goto IL_016b;
	}

IL_00a1:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_6 = V_0;
		NullCheck(L_6);
		L_6->___methodName_0 = _stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___methodName_0), (void*)_stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB);
		goto IL_016b;
	}

IL_00b1:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_7 = V_0;
		NullCheck(L_7);
		L_7->___methodName_0 = _stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___methodName_0), (void*)_stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7);
		goto IL_016b;
	}

IL_00c1:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_8 = V_0;
		NullCheck(L_8);
		L_8->___methodName_0 = _stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___methodName_0), (void*)_stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75);
		goto IL_016b;
	}

IL_00d1:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_9 = V_0;
		NullCheck(L_9);
		L_9->___methodName_0 = _stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___methodName_0), (void*)_stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5);
		goto IL_016b;
	}

IL_00e1:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_10 = V_0;
		NullCheck(L_10);
		L_10->___methodName_0 = _stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___methodName_0), (void*)_stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B);
		goto IL_016b;
	}

IL_00ee:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_11 = V_0;
		NullCheck(L_11);
		L_11->___methodName_0 = _stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___methodName_0), (void*)_stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0);
		goto IL_016b;
	}

IL_00fb:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_12 = V_0;
		NullCheck(L_12);
		L_12->___methodName_0 = _stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___methodName_0), (void*)_stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E);
		goto IL_016b;
	}

IL_0108:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_13 = V_0;
		NullCheck(L_13);
		L_13->___methodName_0 = _stringLiteralA32674451B983F172BF67FC604D118D404FD19E6;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___methodName_0), (void*)_stringLiteralA32674451B983F172BF67FC604D118D404FD19E6);
		goto IL_016b;
	}

IL_0115:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_14 = V_0;
		NullCheck(L_14);
		L_14->___methodName_0 = _stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___methodName_0), (void*)_stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE);
		goto IL_016b;
	}

IL_0122:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_15 = V_0;
		NullCheck(L_15);
		L_15->___methodName_0 = _stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___methodName_0), (void*)_stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F);
		goto IL_016b;
	}

IL_012f:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_16 = V_0;
		NullCheck(L_16);
		L_16->___methodName_0 = _stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___methodName_0), (void*)_stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2);
		goto IL_016b;
	}

IL_013c:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_17 = V_0;
		NullCheck(L_17);
		L_17->___methodName_0 = _stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___methodName_0), (void*)_stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08);
		goto IL_016b;
	}

IL_0149:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_18 = V_0;
		NullCheck(L_18);
		L_18->___methodName_0 = _stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___methodName_0), (void*)_stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD);
		goto IL_016b;
	}

IL_0156:
	{
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_19 = V_0;
		NullCheck(L_19);
		L_19->___methodName_0 = _stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___methodName_0), (void*)_stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D);
		goto IL_016b;
	}

IL_0163:
	{
		return (MethodInfo_t*)NULL;
	}

IL_0165:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_20 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetOperatorMethod_m22F60D9DE830F21F16ED530B5F26727D21CF4387_RuntimeMethod_var)));
	}

IL_016b:
	{
		Type_t* L_21 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_22;
		L_22 = TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18(L_21, ((int32_t)56), TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18_RuntimeMethod_var);
		U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* L_23 = V_0;
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_24 = (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*)il2cpp_codegen_object_new(Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass39_0_U3CGetOperatorMethodU3Eb__0_mA393C191CB9E8C63D354B95E7E6F98EE63C65613_RuntimeMethod_var), NULL);
		MethodInfo_t* L_25;
		L_25 = Enumerable_FirstOrDefault_TisMethodInfo_t_m0BDE409D8B745A112F60FA3482C66D0204FB9479(L_22, L_24, Enumerable_FirstOrDefault_TisMethodInfo_t_m0BDE409D8B745A112F60FA3482C66D0204FB9479_RuntimeMethod_var);
		return L_25;
	}
}
// System.Reflection.MethodInfo[] Sirenix.Serialization.Utilities.TypeExtensions::GetOperatorMethods(System.Type,Sirenix.Serialization.Utilities.Operator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* TypeExtensions_GetOperatorMethods_m40BE04AA32E2E7B943242FE3D54D5D530BE0EC02 (Type_t* ___type0, int32_t ___op1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisMethodInfo_t_m462DC8BEFC6D07FDE58FEA1C8ECBCB9F4CC7B753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_U3CGetOperatorMethodsU3Eb__0_mDF2C9BFF7BA798E168BACD087EF14B656980E9BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32674451B983F172BF67FC604D118D404FD19E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_0 = (U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass40_0__ctor_m7831EB2C4F652473B652F350DC54AFCBA038B891(L_0, NULL);
		V_0 = L_0;
		int32_t L_1 = ___op1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_00b1;
			}
			case 6:
			{
				goto IL_00c1;
			}
			case 7:
			{
				goto IL_00d1;
			}
			case 8:
			{
				goto IL_00e1;
			}
			case 9:
			{
				goto IL_00ee;
			}
			case 10:
			{
				goto IL_00fb;
			}
			case 11:
			{
				goto IL_0108;
			}
			case 12:
			{
				goto IL_0115;
			}
			case 13:
			{
				goto IL_0122;
			}
			case 14:
			{
				goto IL_012f;
			}
			case 15:
			{
				goto IL_013c;
			}
			case 16:
			{
				goto IL_0149;
			}
			case 17:
			{
				goto IL_0163;
			}
			case 18:
			{
				goto IL_0163;
			}
			case 19:
			{
				goto IL_0156;
			}
		}
	}
	{
		goto IL_0165;
	}

IL_0061:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_2 = V_0;
		NullCheck(L_2);
		L_2->___methodName_0 = _stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___methodName_0), (void*)_stringLiteral133809702925763785FC982AE27A4E0B0C3B3D96);
		goto IL_016b;
	}

IL_0071:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_3 = V_0;
		NullCheck(L_3);
		L_3->___methodName_0 = _stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___methodName_0), (void*)_stringLiteral739573D70A64651EBA5F53303D89FAD390FA4E57);
		goto IL_016b;
	}

IL_0081:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_4 = V_0;
		NullCheck(L_4);
		L_4->___methodName_0 = _stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___methodName_0), (void*)_stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826);
		goto IL_016b;
	}

IL_0091:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_5 = V_0;
		NullCheck(L_5);
		L_5->___methodName_0 = _stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___methodName_0), (void*)_stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282);
		goto IL_016b;
	}

IL_00a1:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_6 = V_0;
		NullCheck(L_6);
		L_6->___methodName_0 = _stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___methodName_0), (void*)_stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB);
		goto IL_016b;
	}

IL_00b1:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_7 = V_0;
		NullCheck(L_7);
		L_7->___methodName_0 = _stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___methodName_0), (void*)_stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7);
		goto IL_016b;
	}

IL_00c1:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_8 = V_0;
		NullCheck(L_8);
		L_8->___methodName_0 = _stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___methodName_0), (void*)_stringLiteral0178FBA6F1599F1FF6A2F4A379C88915F1ABCC75);
		goto IL_016b;
	}

IL_00d1:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_9 = V_0;
		NullCheck(L_9);
		L_9->___methodName_0 = _stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___methodName_0), (void*)_stringLiteral5246E833B2FCB10A683BF24EBE6283A2EAF3B0D5);
		goto IL_016b;
	}

IL_00e1:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_10 = V_0;
		NullCheck(L_10);
		L_10->___methodName_0 = _stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___methodName_0), (void*)_stringLiteralE50A30DDDBE6C50B64A5E39AAB7817CEF2F0533B);
		goto IL_016b;
	}

IL_00ee:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_11 = V_0;
		NullCheck(L_11);
		L_11->___methodName_0 = _stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___methodName_0), (void*)_stringLiteral103AADF0E5BF9CDE6009B6FFD90C3FF4FB12CBC0);
		goto IL_016b;
	}

IL_00fb:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_12 = V_0;
		NullCheck(L_12);
		L_12->___methodName_0 = _stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___methodName_0), (void*)_stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E);
		goto IL_016b;
	}

IL_0108:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_13 = V_0;
		NullCheck(L_13);
		L_13->___methodName_0 = _stringLiteralA32674451B983F172BF67FC604D118D404FD19E6;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___methodName_0), (void*)_stringLiteralA32674451B983F172BF67FC604D118D404FD19E6);
		goto IL_016b;
	}

IL_0115:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_14 = V_0;
		NullCheck(L_14);
		L_14->___methodName_0 = _stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___methodName_0), (void*)_stringLiteral883FC797173DE6E4481ACED3AB6DF8180CBE30FE);
		goto IL_016b;
	}

IL_0122:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_15 = V_0;
		NullCheck(L_15);
		L_15->___methodName_0 = _stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___methodName_0), (void*)_stringLiteral5E45B13FA746077DA0275EF11A5D0C53F2FD9C5F);
		goto IL_016b;
	}

IL_012f:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_16 = V_0;
		NullCheck(L_16);
		L_16->___methodName_0 = _stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___methodName_0), (void*)_stringLiteralEE4706B7CE839A2F08582C04E05FE9ABF2925DC2);
		goto IL_016b;
	}

IL_013c:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_17 = V_0;
		NullCheck(L_17);
		L_17->___methodName_0 = _stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___methodName_0), (void*)_stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08);
		goto IL_016b;
	}

IL_0149:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_18 = V_0;
		NullCheck(L_18);
		L_18->___methodName_0 = _stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___methodName_0), (void*)_stringLiteralBFD767F0B108F9802041DE9A8880ACF19EA59ADD);
		goto IL_016b;
	}

IL_0156:
	{
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_19 = V_0;
		NullCheck(L_19);
		L_19->___methodName_0 = _stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___methodName_0), (void*)_stringLiteralB5F519095D6B47D304D98B5A21B8D8EED706635D);
		goto IL_016b;
	}

IL_0163:
	{
		return (MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*)NULL;
	}

IL_0165:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_20 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetOperatorMethods_m40BE04AA32E2E7B943242FE3D54D5D530BE0EC02_RuntimeMethod_var)));
	}

IL_016b:
	{
		Type_t* L_21 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_22;
		L_22 = TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18(L_21, ((int32_t)56), TypeExtensions_GetAllMembers_TisMethodInfo_t_m1FB67F5F75B9F9322F1AB565756ED4FA0C337B18_RuntimeMethod_var);
		U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* L_23 = V_0;
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_24 = (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*)il2cpp_codegen_object_new(Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass40_0_U3CGetOperatorMethodsU3Eb__0_mDF2C9BFF7BA798E168BACD087EF14B656980E9BA_RuntimeMethod_var), NULL);
		RuntimeObject* L_25;
		L_25 = Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD(L_22, L_24, Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD_RuntimeMethod_var);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_26;
		L_26 = Enumerable_ToArray_TisMethodInfo_t_m462DC8BEFC6D07FDE58FEA1C8ECBCB9F4CC7B753(L_25, Enumerable_ToArray_TisMethodInfo_t_m462DC8BEFC6D07FDE58FEA1C8ECBCB9F4CC7B753_RuntimeMethod_var);
		return L_26;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions::GetAllMembers(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllMembers_mEB91F0825655A28B9FF2E3AC7B481A9B8A01F40D (Type_t* ___type0, int32_t ___flags1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* L_0 = (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD*)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetAllMembersU3Ed__41__ctor_mF5AFE6D49F13AF415CAA8501540FD68BEDBAB665(L_0, ((int32_t)-2), NULL);
		U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* L_1 = L_0;
		Type_t* L_2 = ___type0;
		NullCheck(L_1);
		L_1->___U3CU3E3__type_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__type_4), (void*)L_2);
		U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* L_3 = L_1;
		int32_t L_4 = ___flags1;
		NullCheck(L_3);
		L_3->___U3CU3E3__flags_6 = L_4;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions::GetAllMembers(System.Type,System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllMembers_m74C71241CCF2870F5D295F70E7E5BB4EF42CCB40 (Type_t* ___type0, String_t* ___name1, int32_t ___flags2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_0 = (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45*)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetAllMembersU3Ed__42__ctor_mB3D1A62F734B8D3286E8D9532724757B78A8FE34(L_0, ((int32_t)-2), NULL);
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_1 = L_0;
		Type_t* L_2 = ___type0;
		NullCheck(L_1);
		L_1->___U3CU3E3__type_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__type_4), (void*)L_2);
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_3 = L_1;
		String_t* L_4 = ___name1;
		NullCheck(L_3);
		L_3->___U3CU3E3__name_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E3__name_8), (void*)L_4);
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_5 = L_3;
		int32_t L_6 = ___flags2;
		NullCheck(L_5);
		L_5->___U3CU3E3__flags_6 = L_6;
		return L_5;
	}
}
// System.Type Sirenix.Serialization.Utilities.TypeExtensions::GetGenericBaseType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeExtensions_GetGenericBaseType_m6AB9CD5DBB96517A87D8EB8E5842451C76B4339A (Type_t* ___type0, Type_t* ___baseType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___type0;
		Type_t* L_1 = ___baseType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269(L_0, L_1, (&V_0), NULL);
		return L_2;
	}
}
// System.Type Sirenix.Serialization.Utilities.TypeExtensions::GetGenericBaseType(System.Type,System.Type,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269 (Type_t* ___type0, Type_t* ___baseType1, int32_t* ___depthCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___baseType1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC986D07788FAD84AD4C91118B24FB60F06A41D34)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269_RuntimeMethod_var)));
	}

IL_001c:
	{
		Type_t* L_4 = ___baseType1;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		Type_t* L_6 = ___baseType1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49AE794C00022ECA141068DEA9531BF6E0D342B7)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB69353B06B1314407246F1AC38E57393F5AEC72E)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269_RuntimeMethod_var)));
	}

IL_003f:
	{
		Type_t* L_10 = ___type0;
		Type_t* L_11 = ___baseType1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = TypeExtensions_InheritsFrom_m246820A7A897F304D093F93B522261D153507D2B(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0083;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49AE794C00022ECA141068DEA9531BF6E0D342B7)));
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49AE794C00022ECA141068DEA9531BF6E0D342B7)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		Type_t* L_16 = ___type0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6AF94847D8333B0BCB378F091360854B8D58B6F9)));
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6AF94847D8333B0BCB378F091360854B8D58B6F9)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		Type_t* L_20 = ___baseType1;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		String_t* L_23;
		L_23 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_22, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269_RuntimeMethod_var)));
	}

IL_0083:
	{
		Type_t* L_25 = ___type0;
		V_0 = L_25;
		int32_t* L_26 = ___depthCount2;
		*((int32_t*)L_26) = (int32_t)0;
		goto IL_0097;
	}

IL_008a:
	{
		int32_t* L_27 = ___depthCount2;
		int32_t* L_28 = ___depthCount2;
		int32_t L_29 = *((int32_t*)L_28);
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1));
		Type_t* L_30 = V_0;
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_30);
		V_0 = L_31;
	}

IL_0097:
	{
		Type_t* L_32 = V_0;
		if (!L_32)
		{
			goto IL_00ab;
		}
	}
	{
		Type_t* L_33 = V_0;
		NullCheck(L_33);
		bool L_34;
		L_34 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_33);
		if (!L_34)
		{
			goto IL_008a;
		}
	}
	{
		Type_t* L_35 = V_0;
		NullCheck(L_35);
		Type_t* L_36;
		L_36 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_35);
		Type_t* L_37 = ___baseType1;
		if ((!(((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_37))))
		{
			goto IL_008a;
		}
	}

IL_00ab:
	{
		Type_t* L_38 = V_0;
		if (L_38)
		{
			goto IL_00cf;
		}
	}
	{
		Type_t* L_39 = ___type0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
		Type_t* L_41 = ___baseType1;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_41);
		String_t* L_43;
		L_43 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0998B927332BD3D3FA31ADAA179A89C9ED471F54)), L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FCB3E628798FEE20D20EC67ED09A53128D4BC2E)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_44);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_44, L_43, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericBaseType_m412659C59FBCE69D3F4A592E2253554D8F2B8269_RuntimeMethod_var)));
	}

IL_00cf:
	{
		Type_t* L_45 = V_0;
		return L_45;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions::GetBaseTypes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetBaseTypes_mEEEDC3BE219A6545990886E555DFEE11DFB417BE (Type_t* ___type0, bool ___includeSelf1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		bool L_1 = ___includeSelf1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = TypeExtensions_GetBaseClasses_mFB77894BA4CDBC0D1BF7E2CE57544C5F48CFB3C7(L_0, L_1, NULL);
		Type_t* L_3 = ___type0;
		NullCheck(L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4;
		L_4 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type[] System.Type::GetInterfaces() */, L_3);
		RuntimeObject* L_5;
		L_5 = Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A(L_2, (RuntimeObject*)L_4, Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A_RuntimeMethod_var);
		V_0 = L_5;
		bool L_6 = ___includeSelf1;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_7 = ___type0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_10;
		Type_t* L_12 = ___type0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_12);
		RuntimeObject* L_13;
		L_13 = Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A(L_9, (RuntimeObject*)L_11, Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A_RuntimeMethod_var);
	}

IL_002f:
	{
		RuntimeObject* L_14 = V_0;
		return L_14;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions::GetBaseClasses(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetBaseClasses_mFB77894BA4CDBC0D1BF7E2CE57544C5F48CFB3C7 (Type_t* ___type0, bool ___includeSelf1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* L_0 = (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817*)il2cpp_codegen_object_new(U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetBaseClassesU3Ed__47__ctor_m0607598FFE900A081E6CBC87CDE433EE2294E82B(L_0, ((int32_t)-2), NULL);
		U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* L_1 = L_0;
		Type_t* L_2 = ___type0;
		NullCheck(L_1);
		L_1->___U3CU3E3__type_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__type_4), (void*)L_2);
		U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* L_3 = L_1;
		bool L_4 = ___includeSelf1;
		NullCheck(L_3);
		L_3->___U3CU3E3__includeSelf_6 = L_4;
		return L_3;
	}
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::TypeNameGauntlet(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_TypeNameGauntlet_m6D103478DEDCF191B7C8DB73AD0273810BFE6D13 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_2;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___TypeNameAlternatives_13;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_6 = V_1;
		V_0 = L_6;
	}

IL_001e:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetNiceName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD(L_0, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_5, NULL);
		Type_t* L_7 = ___type0;
		String_t* L_8;
		L_8 = TypeExtensions_GetCachedNiceName_m0D2F45BD9C2B907CBEF089A6DD094014EFBF5DFA(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_8, NULL);
		return L_9;
	}

IL_002c:
	{
		Type_t* L_10 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = TypeExtensions_GetCachedNiceName_m0D2F45BD9C2B907CBEF089A6DD094014EFBF5DFA(L_10, NULL);
		return L_11;
	}
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetNiceFullName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetNiceFullName_m485DEE70C40BE0715AACC505B16628D1492FF26B (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD(L_0, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = TypeExtensions_GetNiceFullName_m485DEE70C40BE0715AACC505B16628D1492FF26B(L_5, NULL);
		Type_t* L_7 = ___type0;
		String_t* L_8;
		L_8 = TypeExtensions_GetCachedNiceName_m0D2F45BD9C2B907CBEF089A6DD094014EFBF5DFA(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_8, NULL);
		return L_9;
	}

IL_002c:
	{
		Type_t* L_10 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = TypeExtensions_GetCachedNiceName_m0D2F45BD9C2B907CBEF089A6DD094014EFBF5DFA(L_10, NULL);
		V_0 = L_11;
		Type_t* L_12 = ___type0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_Namespace() */, L_12);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		Type_t* L_14 = ___type0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_Namespace() */, L_14);
		String_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_15, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_16, NULL);
		V_0 = L_17;
	}

IL_004d:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetCompilableNiceName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetCompilableNiceName_m85E5050B774A719AA2A4682BACB0B8DE21D41A27 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_1, ((int32_t)60), ((int32_t)95), NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_2, ((int32_t)62), ((int32_t)95), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		NullCheck(L_3);
		String_t* L_6;
		L_6 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_3, L_5, NULL);
		return L_6;
	}
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetCompilableNiceFullName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetCompilableNiceFullName_m3F0927E9993E2A05D5217186493FFBF8B3BE571F (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = TypeExtensions_GetNiceFullName_m485DEE70C40BE0715AACC505B16628D1492FF26B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_1, ((int32_t)60), ((int32_t)95), NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_2, ((int32_t)62), ((int32_t)95), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		NullCheck(L_3);
		String_t* L_6;
		L_6 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_3, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::InheritsFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_InheritsFrom_m246820A7A897F304D093F93B522261D153507D2B (Type_t* ___type0, Type_t* ___baseType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = ___baseType1;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Type_t* L_3 = ___type0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_3, NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		Type_t* L_5 = ___baseType1;
		NullCheck(L_5);
		bool L_6;
		L_6 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_5, NULL);
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		Type_t* L_7 = ___baseType1;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_7, NULL);
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		Type_t* L_9 = ___type0;
		NullCheck(L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10;
		L_10 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type[] System.Type::GetInterfaces() */, L_9);
		Type_t* L_11 = ___baseType1;
		bool L_12;
		L_12 = Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690((RuntimeObject*)L_10, L_11, Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690_RuntimeMethod_var);
		return L_12;
	}

IL_0032:
	{
		Type_t* L_13 = ___type0;
		V_0 = L_13;
		goto IL_005e;
	}

IL_0036:
	{
		Type_t* L_14 = V_0;
		Type_t* L_15 = ___baseType1;
		if ((!(((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_15))))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		Type_t* L_16 = ___baseType1;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_16);
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		Type_t* L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_18);
		if (!L_19)
		{
			goto IL_0057;
		}
	}
	{
		Type_t* L_20 = V_0;
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_20);
		Type_t* L_22 = ___baseType1;
		if ((!(((RuntimeObject*)(Type_t*)L_21) == ((RuntimeObject*)(Type_t*)L_22))))
		{
			goto IL_0057;
		}
	}
	{
		return (bool)1;
	}

IL_0057:
	{
		Type_t* L_23 = V_0;
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_23);
		V_0 = L_24;
	}

IL_005e:
	{
		Type_t* L_25 = V_0;
		if (L_25)
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions::GetInheritanceDistance(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_GetInheritanceDistance_mF4542DD6E7EB489BBE743A396C17D055C81BB50C (Type_t* ___type0, Type_t* ___baseType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	int32_t V_3 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Type_t* L_0 = ___type0;
		Type_t* L_1 = ___baseType1;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		Type_t* L_3 = ___type0;
		V_1 = L_3;
		Type_t* L_4 = ___baseType1;
		V_0 = L_4;
		goto IL_0059;
	}

IL_000f:
	{
		Type_t* L_5 = ___baseType1;
		Type_t* L_6 = ___type0;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		Type_t* L_8 = ___baseType1;
		V_1 = L_8;
		Type_t* L_9 = ___type0;
		V_0 = L_9;
		goto IL_0059;
	}

IL_001e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8547678D958192955E69B63AFFFA701CC73DBE8)));
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8547678D958192955E69B63AFFFA701CC73DBE8)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Type_t* L_13 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var)));
		String_t* L_14;
		L_14 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F497E973411BC854B5A2BE7DA46204C7859FC6F)));
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F497E973411BC854B5A2BE7DA46204C7859FC6F)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		Type_t* L_17 = ___baseType1;
		String_t* L_18;
		L_18 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_16;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98ED1E1F1BFD6992A0B518CB20563E6381318B8F)));
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98ED1E1F1BFD6992A0B518CB20563E6381318B8F)));
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetInheritanceDistance_mF4542DD6E7EB489BBE743A396C17D055C81BB50C_RuntimeMethod_var)));
	}

IL_0059:
	{
		Type_t* L_22 = V_0;
		V_2 = L_22;
		V_3 = 0;
		Type_t* L_23 = V_1;
		NullCheck(L_23);
		bool L_24;
		L_24 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_23, NULL);
		if (!L_24)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0099;
	}

IL_0067:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		Type_t* L_26 = V_2;
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_26);
		V_2 = L_27;
		Type_t* L_28 = V_2;
		NullCheck(L_28);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_29;
		L_29 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type[] System.Type::GetInterfaces() */, L_28);
		V_4 = L_29;
		V_5 = 0;
		goto IL_0091;
	}

IL_007f:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_30 = V_4;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Type_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Type_t* L_34 = V_1;
		if ((!(((RuntimeObject*)(Type_t*)L_33) == ((RuntimeObject*)(Type_t*)L_34))))
		{
			goto IL_008b;
		}
	}
	{
		V_2 = (Type_t*)NULL;
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0091:
	{
		int32_t L_36 = V_5;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_37 = V_4;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_007f;
		}
	}

IL_0099:
	{
		Type_t* L_38 = V_2;
		if (!L_38)
		{
			goto IL_00ca;
		}
	}
	{
		Type_t* L_39 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_39) == ((RuntimeObject*)(Type_t*)L_41))))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_00ca;
	}

IL_00ab:
	{
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		Type_t* L_43 = V_2;
		NullCheck(L_43);
		Type_t* L_44;
		L_44 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_43);
		V_2 = L_44;
	}

IL_00b6:
	{
		Type_t* L_45 = V_2;
		Type_t* L_46 = V_1;
		if ((((RuntimeObject*)(Type_t*)L_45) == ((RuntimeObject*)(Type_t*)L_46)))
		{
			goto IL_00ca;
		}
	}
	{
		Type_t* L_47 = V_2;
		if (!L_47)
		{
			goto IL_00ca;
		}
	}
	{
		Type_t* L_48 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))))
		{
			goto IL_00ab;
		}
	}

IL_00ca:
	{
		int32_t L_51 = V_3;
		return L_51;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::HasParamaters(System.Reflection.MethodInfo,System.Collections.Generic.IList`1<System.Type>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_HasParamaters_mB9B2CDB3057B6A06FB1D40EEAD2B5D78788BB97D (MethodInfo_t* ___methodInfo0, RuntimeObject* ___paramTypes1, bool ___inherit2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD890B0F65ABAD0B3D3FDCE92EDC9BC15264F36B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		MethodInfo_t* L_0 = ___methodInfo0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = ___paramTypes1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Type>::get_Count() */, ICollection_1_tD890B0F65ABAD0B3D3FDCE92EDC9BC15264F36B0_il2cpp_TypeInfo_var, L_3);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((uint32_t)L_4))))
		{
			goto IL_0050;
		}
	}
	{
		V_1 = 0;
		goto IL_0048;
	}

IL_0016:
	{
		bool L_5 = ___inherit2;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_6 = ___paramTypes1;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Type_t* L_8;
		L_8 = InterfaceFuncInvoker1< Type_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Type>::get_Item(System.Int32) */, IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1_il2cpp_TypeInfo_var, L_6, L_7);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_12);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeExtensions_InheritsFrom_m246820A7A897F304D093F93B522261D153507D2B(L_8, L_13, NULL);
		if (L_14)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_18);
		RuntimeObject* L_20 = ___paramTypes1;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Type_t* L_22;
		L_22 = InterfaceFuncInvoker1< Type_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Type>::get_Item(System.Int32) */, IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1_il2cpp_TypeInfo_var, L_20, L_21);
		if ((((RuntimeObject*)(Type_t*)L_19) == ((RuntimeObject*)(Type_t*)L_22)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0048:
	{
		int32_t L_24 = V_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0050:
	{
		return (bool)0;
	}
}
// System.Type Sirenix.Serialization.Utilities.TypeExtensions::GetReturnType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeExtensions_GetReturnType_mAFEC08DC5914FBF601C5817297F5B8B352B2B667 (MemberInfo_t* ___memberInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	EventInfo_t* V_3 = NULL;
	{
		MemberInfo_t* L_0 = ___memberInfo0;
		V_0 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		FieldInfo_t* L_2 = V_0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_2);
		return L_3;
	}

IL_0011:
	{
		MemberInfo_t* L_4 = ___memberInfo0;
		V_1 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		PropertyInfo_t* L_6 = V_1;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_6);
		return L_7;
	}

IL_0022:
	{
		MemberInfo_t* L_8 = ___memberInfo0;
		V_2 = ((MethodInfo_t*)IsInstClass((RuntimeObject*)L_8, MethodInfo_t_il2cpp_TypeInfo_var));
		MethodInfo_t* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		MethodInfo_t* L_10 = V_2;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(41 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_10);
		return L_11;
	}

IL_0033:
	{
		MemberInfo_t* L_12 = ___memberInfo0;
		V_3 = ((EventInfo_t*)IsInstClass((RuntimeObject*)L_12, EventInfo_t_il2cpp_TypeInfo_var));
		EventInfo_t* L_13 = V_3;
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		EventInfo_t* L_14 = V_3;
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = VirtualFuncInvoker0< Type_t* >::Invoke(21 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, L_14);
		return L_15;
	}

IL_0044:
	{
		return (Type_t*)NULL;
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions::GetMemberValue(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetMemberValue_mE3FD3960D996E279B1724F28BC77F86001F6DDC1 (MemberInfo_t* ___member0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t* L_0 = ___member0;
		if (!((FieldInfo_t*)IsInstClass((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		MemberInfo_t* L_1 = ___member0;
		RuntimeObject* L_2 = ___obj1;
		NullCheck(((FieldInfo_t*)IsInstClass((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), L_2);
		return L_3;
	}

IL_0015:
	{
		MemberInfo_t* L_4 = ___member0;
		if (!((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0031;
		}
	}
	{
		MemberInfo_t* L_5 = ___member0;
		NullCheck(((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_5, PropertyInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t* L_6;
		L_6 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_5, PropertyInfo_t_il2cpp_TypeInfo_var)), (bool)1);
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_6, L_7, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		return L_8;
	}

IL_0031:
	{
		MemberInfo_t* L_9 = ___member0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A875C2DDB0E75D33980FFCBCC3004D425279B20)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetMemberValue_mE3FD3960D996E279B1724F28BC77F86001F6DDC1_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions_SetMemberValue_m94C32E028E6D97BEA2351CEAB11B93F6A8736F07 (MemberInfo_t* ___member0, RuntimeObject* ___obj1, RuntimeObject* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	{
		MemberInfo_t* L_0 = ___member0;
		if (!((FieldInfo_t*)IsInstClass((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		MemberInfo_t* L_1 = ___member0;
		RuntimeObject* L_2 = ___obj1;
		RuntimeObject* L_3 = ___value2;
		NullCheck(((FieldInfo_t*)IsInstClass((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(((FieldInfo_t*)IsInstClass((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var)), L_2, L_3, NULL);
		return;
	}

IL_0016:
	{
		MemberInfo_t* L_4 = ___member0;
		if (!((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		MemberInfo_t* L_5 = ___member0;
		NullCheck(((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_5, PropertyInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t* L_6;
		L_6 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(25 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_5, PropertyInfo_t_il2cpp_TypeInfo_var)), (bool)1);
		V_0 = L_6;
		MethodInfo_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		MethodInfo_t* L_8 = V_0;
		RuntimeObject* L_9 = ___obj1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		RuntimeObject* L_12 = ___value2;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		NullCheck(L_8);
		RuntimeObject* L_13;
		L_13 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_8, L_9, L_11, NULL);
		return;
	}

IL_0041:
	{
		MemberInfo_t* L_14 = ___member0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD34ED529A5E207D27C3E70E6556A1ADD9F7E4A04)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A12E14A8352046747ED2DAAB8A78C057C6AE00E)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_SetMemberValue_m94C32E028E6D97BEA2351CEAB11B93F6A8736F07_RuntimeMethod_var)));
	}

IL_005c:
	{
		MemberInfo_t* L_18 = ___member0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3B96F0508EC406F09EC368CD25C2223D68D10AC)), L_20, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_SetMemberValue_m94C32E028E6D97BEA2351CEAB11B93F6A8736F07_RuntimeMethod_var)));
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::TryInferGenericParameters(System.Type,System.Type[]&,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_TryInferGenericParameters_m99BF5CE0874F79F024E97B8EE9D5AA105CA214FC (Type_t* ___genericTypeDefinition0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** ___inferredParams1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___knownParameters2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m67D721D20F638BE7BAEC7A32D5705AD5BFE599E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_9 = NULL;
	int32_t V_10 = 0;
	Type_t* V_11 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_12 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_13 = NULL;
	int32_t V_14 = 0;
	Type_t* V_15 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_16 = NULL;
	int32_t V_17 = 0;
	Type_t* V_18 = NULL;
	Type_t* V_19 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_20 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_21 = NULL;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	{
		Type_t* L_0 = ___genericTypeDefinition0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2900020C8C73B769305C05646CF927B358E92966)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_TryInferGenericParameters_m99BF5CE0874F79F024E97B8EE9D5AA105CA214FC_RuntimeMethod_var)));
	}

IL_000e:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___knownParameters2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23998DBCE1A1F83012093E4B71C64B024670D733)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_TryInferGenericParameters_m99BF5CE0874F79F024E97B8EE9D5AA105CA214FC_RuntimeMethod_var)));
	}

IL_001c:
	{
		Type_t* L_4 = ___genericTypeDefinition0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C8F98E9633CEAA294D5E0716A7DFE13EF8CCF6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_TryInferGenericParameters_m99BF5CE0874F79F024E97B8EE9D5AA105CA214FC_RuntimeMethod_var)));
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfaction_LOCK_0;
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_8, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02a0:
			{// begin finally (depth: 1)
				RuntimeObject* L_9 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_9, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_10 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionInferredParameters_1;
				V_1 = L_10;
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_11 = V_1;
				NullCheck(L_11);
				Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A(L_11, Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A_RuntimeMethod_var);
				Type_t* L_12 = ___genericTypeDefinition0;
				NullCheck(L_12);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13;
				L_13 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_12);
				V_2 = L_13;
				Type_t* L_14 = ___genericTypeDefinition0;
				NullCheck(L_14);
				bool L_15;
				L_15 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_14);
				if (L_15)
				{
					goto IL_00fe_1;
				}
			}
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = V_2;
				V_3 = L_16;
				Type_t* L_17 = ___genericTypeDefinition0;
				NullCheck(L_17);
				Type_t* L_18;
				L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_17);
				___genericTypeDefinition0 = L_18;
				Type_t* L_19 = ___genericTypeDefinition0;
				NullCheck(L_19);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20;
				L_20 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_19);
				V_2 = L_20;
				V_4 = 0;
				V_5 = 0;
				goto IL_00af_1;
			}

IL_0072_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = V_3;
				int32_t L_22 = V_5;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				Type_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				NullCheck(L_24);
				bool L_25;
				L_25 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_24);
				if (L_25)
				{
					goto IL_00a3_1;
				}
			}
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_26 = V_3;
				int32_t L_27 = V_5;
				NullCheck(L_26);
				int32_t L_28 = L_27;
				Type_t* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
				NullCheck(L_29);
				bool L_30;
				L_30 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_29);
				if (!L_30)
				{
					goto IL_0093_1;
				}
			}
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31 = V_3;
				int32_t L_32 = V_5;
				NullCheck(L_31);
				int32_t L_33 = L_32;
				Type_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				bool L_35;
				L_35 = TypeExtensions_IsFullyConstructedGenericType_m946EB36041677E8FAD045E1B4DE186BB5395CEB4(L_34, NULL);
				if (!L_35)
				{
					goto IL_00a3_1;
				}
			}

IL_0093_1:
			{
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_36 = V_1;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_37 = V_2;
				int32_t L_38 = V_5;
				NullCheck(L_37);
				int32_t L_39 = L_38;
				Type_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_41 = V_3;
				int32_t L_42 = V_5;
				NullCheck(L_41);
				int32_t L_43 = L_42;
				Type_t* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
				NullCheck(L_36);
				Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF(L_36, L_40, L_44, Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF_RuntimeMethod_var);
				goto IL_00a9_1;
			}

IL_00a3_1:
			{
				int32_t L_45 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			}

IL_00a9_1:
			{
				int32_t L_46 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			}

IL_00af_1:
			{
				int32_t L_47 = V_5;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_48 = V_3;
				NullCheck(L_48);
				if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
				{
					goto IL_0072_1;
				}
			}
			{
				int32_t L_49 = V_4;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_50 = ___knownParameters2;
				NullCheck(L_50);
				if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))))
				{
					goto IL_00fe_1;
				}
			}
			{
				V_6 = 0;
				V_7 = 0;
				goto IL_00e3_1;
			}

IL_00c5_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_51 = V_3;
				int32_t L_52 = V_7;
				NullCheck(L_51);
				int32_t L_53 = L_52;
				Type_t* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
				NullCheck(L_54);
				bool L_55;
				L_55 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_54);
				if (!L_55)
				{
					goto IL_00dd_1;
				}
			}
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_56 = V_3;
				int32_t L_57 = V_7;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_58 = ___knownParameters2;
				int32_t L_59 = V_6;
				int32_t L_60 = L_59;
				V_6 = ((int32_t)il2cpp_codegen_add(L_60, 1));
				NullCheck(L_58);
				int32_t L_61 = L_60;
				Type_t* L_62 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
				NullCheck(L_56);
				ArrayElementTypeCheck (L_56, L_62);
				(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (Type_t*)L_62);
			}

IL_00dd_1:
			{
				int32_t L_63 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_63, 1));
			}

IL_00e3_1:
			{
				int32_t L_64 = V_7;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_65 = V_3;
				NullCheck(L_65);
				if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
				{
					goto IL_00c5_1;
				}
			}
			{
				Type_t* L_66 = ___genericTypeDefinition0;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_67 = V_3;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				bool L_68;
				L_68 = TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005(L_66, L_67, NULL);
				if (!L_68)
				{
					goto IL_00fe_1;
				}
			}
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_69 = ___inferredParams1;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_70 = V_3;
				*((RuntimeObject**)L_69) = (RuntimeObject*)L_70;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_69, (void*)(RuntimeObject*)L_70);
				V_8 = (bool)1;
				goto IL_02a7;
			}

IL_00fe_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_71 = V_2;
				NullCheck(L_71);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_72 = ___knownParameters2;
				NullCheck(L_72);
				if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
				{
					goto IL_011a_1;
				}
			}
			{
				Type_t* L_73 = ___genericTypeDefinition0;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_74 = ___knownParameters2;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				bool L_75;
				L_75 = TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005(L_73, L_74, NULL);
				if (!L_75)
				{
					goto IL_011a_1;
				}
			}
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_76 = ___inferredParams1;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_77 = ___knownParameters2;
				*((RuntimeObject**)L_76) = (RuntimeObject*)L_77;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_76, (void*)(RuntimeObject*)L_77);
				V_8 = (bool)1;
				goto IL_02a7;
			}

IL_011a_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_78 = V_2;
				V_9 = L_78;
				V_10 = 0;
				goto IL_0245_1;
			}

IL_0125_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_79 = V_9;
				int32_t L_80 = V_10;
				NullCheck(L_79);
				int32_t L_81 = L_80;
				Type_t* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
				V_11 = L_82;
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_83 = V_1;
				Type_t* L_84 = V_11;
				NullCheck(L_83);
				bool L_85;
				L_85 = Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9(L_83, L_84, Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9_RuntimeMethod_var);
				if (L_85)
				{
					goto IL_023f_1;
				}
			}
			{
				Type_t* L_86 = V_11;
				NullCheck(L_86);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_87;
				L_87 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(53 /* System.Type[] System.Type::GetGenericParameterConstraints() */, L_86);
				V_12 = L_87;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_88 = V_12;
				V_13 = L_88;
				V_14 = 0;
				goto IL_0234_1;
			}

IL_014e_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_89 = V_13;
				int32_t L_90 = V_14;
				NullCheck(L_89);
				int32_t L_91 = L_90;
				Type_t* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
				V_15 = L_92;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_93 = ___knownParameters2;
				V_16 = L_93;
				V_17 = 0;
				goto IL_0223_1;
			}

IL_0160_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_94 = V_16;
				int32_t L_95 = V_17;
				NullCheck(L_94);
				int32_t L_96 = L_95;
				Type_t* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
				V_18 = L_97;
				Type_t* L_98 = V_15;
				NullCheck(L_98);
				bool L_99;
				L_99 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_98);
				if (!L_99)
				{
					goto IL_021d_1;
				}
			}
			{
				Type_t* L_100 = V_15;
				NullCheck(L_100);
				Type_t* L_101;
				L_101 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_100);
				V_19 = L_101;
				Type_t* L_102 = V_15;
				NullCheck(L_102);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_103;
				L_103 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_102);
				V_20 = L_103;
				Type_t* L_104 = V_18;
				NullCheck(L_104);
				bool L_105;
				L_105 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_104);
				if (!L_105)
				{
					goto IL_01a4_1;
				}
			}
			{
				Type_t* L_106 = V_19;
				Type_t* L_107 = V_18;
				NullCheck(L_107);
				Type_t* L_108;
				L_108 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_107);
				if ((!(((RuntimeObject*)(Type_t*)L_106) == ((RuntimeObject*)(Type_t*)L_108))))
				{
					goto IL_01a4_1;
				}
			}
			{
				Type_t* L_109 = V_18;
				NullCheck(L_109);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_110;
				L_110 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_109);
				V_21 = L_110;
				goto IL_01e4_1;
			}

IL_01a4_1:
			{
				Type_t* L_111 = V_19;
				NullCheck(L_111);
				bool L_112;
				L_112 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_111, NULL);
				if (!L_112)
				{
					goto IL_01c5_1;
				}
			}
			{
				Type_t* L_113 = V_18;
				Type_t* L_114 = V_19;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				bool L_115;
				L_115 = TypeExtensions_ImplementsOpenGenericInterface_mA9B23B842C59B27B5CC0DF28621B67539A9BAD37(L_113, L_114, NULL);
				if (!L_115)
				{
					goto IL_01c5_1;
				}
			}
			{
				Type_t* L_116 = V_18;
				Type_t* L_117 = V_19;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_118;
				L_118 = TypeExtensions_GetArgumentsOfInheritedOpenGenericInterface_m9AED9C1EB9599B6903AB54B37E45214E37C5E9D6(L_116, L_117, NULL);
				V_21 = L_118;
				goto IL_01e4_1;
			}

IL_01c5_1:
			{
				Type_t* L_119 = V_19;
				NullCheck(L_119);
				bool L_120;
				L_120 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_119, NULL);
				if (!L_120)
				{
					goto IL_021d_1;
				}
			}
			{
				Type_t* L_121 = V_18;
				Type_t* L_122 = V_19;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				bool L_123;
				L_123 = TypeExtensions_ImplementsOpenGenericClass_m169A6AB06B4B5AE55B28F0F35E89F3C3C9869D45(L_121, L_122, NULL);
				if (!L_123)
				{
					goto IL_021d_1;
				}
			}
			{
				Type_t* L_124 = V_18;
				Type_t* L_125 = V_19;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_126;
				L_126 = TypeExtensions_GetArgumentsOfInheritedOpenGenericClass_m5A4229D704A7E36F20B2D5716FE41BA0481F0DE5(L_124, L_125, NULL);
				V_21 = L_126;
			}

IL_01e4_1:
			{
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_127 = V_1;
				Type_t* L_128 = V_11;
				Type_t* L_129 = V_18;
				NullCheck(L_127);
				Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF(L_127, L_128, L_129, Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF_RuntimeMethod_var);
				V_22 = 0;
				goto IL_0215_1;
			}

IL_01f3_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_130 = V_20;
				int32_t L_131 = V_22;
				NullCheck(L_130);
				int32_t L_132 = L_131;
				Type_t* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
				NullCheck(L_133);
				bool L_134;
				L_134 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_133);
				if (!L_134)
				{
					goto IL_020f_1;
				}
			}
			{
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_135 = V_1;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_136 = V_20;
				int32_t L_137 = V_22;
				NullCheck(L_136);
				int32_t L_138 = L_137;
				Type_t* L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_140 = V_21;
				int32_t L_141 = V_22;
				NullCheck(L_140);
				int32_t L_142 = L_141;
				Type_t* L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
				NullCheck(L_135);
				Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF(L_135, L_139, L_143, Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF_RuntimeMethod_var);
			}

IL_020f_1:
			{
				int32_t L_144 = V_22;
				V_22 = ((int32_t)il2cpp_codegen_add(L_144, 1));
			}

IL_0215_1:
			{
				int32_t L_145 = V_22;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_146 = V_20;
				NullCheck(L_146);
				if ((((int32_t)L_145) < ((int32_t)((int32_t)(((RuntimeArray*)L_146)->max_length)))))
				{
					goto IL_01f3_1;
				}
			}

IL_021d_1:
			{
				int32_t L_147 = V_17;
				V_17 = ((int32_t)il2cpp_codegen_add(L_147, 1));
			}

IL_0223_1:
			{
				int32_t L_148 = V_17;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_149 = V_16;
				NullCheck(L_149);
				if ((((int32_t)L_148) < ((int32_t)((int32_t)(((RuntimeArray*)L_149)->max_length)))))
				{
					goto IL_0160_1;
				}
			}
			{
				int32_t L_150 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_150, 1));
			}

IL_0234_1:
			{
				int32_t L_151 = V_14;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_152 = V_13;
				NullCheck(L_152);
				if ((((int32_t)L_151) < ((int32_t)((int32_t)(((RuntimeArray*)L_152)->max_length)))))
				{
					goto IL_014e_1;
				}
			}

IL_023f_1:
			{
				int32_t L_153 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_153, 1));
			}

IL_0245_1:
			{
				int32_t L_154 = V_10;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_155 = V_9;
				NullCheck(L_155);
				if ((((int32_t)L_154) < ((int32_t)((int32_t)(((RuntimeArray*)L_155)->max_length)))))
				{
					goto IL_0125_1;
				}
			}
			{
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_156 = V_1;
				NullCheck(L_156);
				int32_t L_157;
				L_157 = Dictionary_2_get_Count_m67D721D20F638BE7BAEC7A32D5705AD5BFE599E1(L_156, Dictionary_2_get_Count_m67D721D20F638BE7BAEC7A32D5705AD5BFE599E1_RuntimeMethod_var);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_158 = V_2;
				NullCheck(L_158);
				if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)(((RuntimeArray*)L_158)->max_length))))))
				{
					goto IL_0298_1;
				}
			}
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_159 = ___inferredParams1;
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_160 = V_1;
				NullCheck(L_160);
				int32_t L_161;
				L_161 = Dictionary_2_get_Count_m67D721D20F638BE7BAEC7A32D5705AD5BFE599E1(L_160, Dictionary_2_get_Count_m67D721D20F638BE7BAEC7A32D5705AD5BFE599E1_RuntimeMethod_var);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_162 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)L_161);
				*((RuntimeObject**)L_159) = (RuntimeObject*)L_162;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_159, (void*)(RuntimeObject*)L_162);
				V_23 = 0;
				goto IL_0282_1;
			}

IL_026d_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_163 = ___inferredParams1;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_164 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_163);
				int32_t L_165 = V_23;
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_166 = V_1;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_167 = V_2;
				int32_t L_168 = V_23;
				NullCheck(L_167);
				int32_t L_169 = L_168;
				Type_t* L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
				NullCheck(L_166);
				Type_t* L_171;
				L_171 = Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0(L_166, L_170, Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0_RuntimeMethod_var);
				NullCheck(L_164);
				ArrayElementTypeCheck (L_164, L_171);
				(L_164)->SetAt(static_cast<il2cpp_array_size_t>(L_165), (Type_t*)L_171);
				int32_t L_172 = V_23;
				V_23 = ((int32_t)il2cpp_codegen_add(L_172, 1));
			}

IL_0282_1:
			{
				int32_t L_173 = V_23;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_174 = V_2;
				NullCheck(L_174);
				if ((((int32_t)L_173) < ((int32_t)((int32_t)(((RuntimeArray*)L_174)->max_length)))))
				{
					goto IL_026d_1;
				}
			}
			{
				Type_t* L_175 = ___genericTypeDefinition0;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_176 = ___inferredParams1;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_177 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_176);
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				bool L_178;
				L_178 = TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005(L_175, L_177, NULL);
				if (!L_178)
				{
					goto IL_0298_1;
				}
			}
			{
				V_8 = (bool)1;
				goto IL_02a7;
			}

IL_0298_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_179 = ___inferredParams1;
				*((RuntimeObject**)L_179) = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_179, (void*)(RuntimeObject*)NULL);
				V_8 = (bool)0;
				goto IL_02a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02a7:
	{
		bool L_180 = V_8;
		return L_180;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::AreGenericConstraintsSatisfiedBy(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005 (Type_t* ___genericType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___genericType0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8E96B02CE2FCA04F04D40AA6924D3CF419BF743)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005_RuntimeMethod_var)));
	}

IL_000e:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___parameters1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005_RuntimeMethod_var)));
	}

IL_001c:
	{
		Type_t* L_4 = ___genericType0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C8F98E9633CEAA294D5E0716A7DFE13EF8CCF6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_AreGenericConstraintsSatisfiedBy_m266121D45744A53411AF70D36BCABA60756FF005_RuntimeMethod_var)));
	}

IL_002f:
	{
		Type_t* L_7 = ___genericType0;
		NullCheck(L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8;
		L_8 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TypeExtensions_AreGenericConstraintsSatisfiedBy_m6C119BBC9F17F9D3EE0300AB3890F8C4D4ABE01D(L_8, L_9, NULL);
		return L_10;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::AreGenericConstraintsSatisfiedBy(System.Reflection.MethodBase,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AreGenericConstraintsSatisfiedBy_m34EF6D8006428F1C8E9452AA48E234210C758598 (MethodBase_t* ___genericMethod0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0 = ___genericMethod0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAB2782BCFFB875073F11FC79423426C1C2B07DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_AreGenericConstraintsSatisfiedBy_m34EF6D8006428F1C8E9452AA48E234210C758598_RuntimeMethod_var)));
	}

IL_000e:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___parameters1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_AreGenericConstraintsSatisfiedBy_m34EF6D8006428F1C8E9452AA48E234210C758598_RuntimeMethod_var)));
	}

IL_001c:
	{
		MethodBase_t* L_4 = ___genericMethod0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7EB7E9CF33F38E0ED8E72FB570BC3A2AD6B8D52)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_AreGenericConstraintsSatisfiedBy_m34EF6D8006428F1C8E9452AA48E234210C758598_RuntimeMethod_var)));
	}

IL_002f:
	{
		MethodBase_t* L_7 = ___genericMethod0;
		NullCheck(L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8;
		L_8 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(29 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TypeExtensions_AreGenericConstraintsSatisfiedBy_m6C119BBC9F17F9D3EE0300AB3890F8C4D4ABE01D(L_8, L_9, NULL);
		return L_10;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::AreGenericConstraintsSatisfiedBy(System.Type[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AreGenericConstraintsSatisfiedBy_m6C119BBC9F17F9D3EE0300AB3890F8C4D4ABE01D (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___definitions0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___definitions0;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___parameters1;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfaction_LOCK_0;
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_3, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				RuntimeObject* L_4 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_5 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionResolvedMap_2;
				V_1 = L_5;
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_6 = V_1;
				NullCheck(L_6);
				Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A(L_6, Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A_RuntimeMethod_var);
				V_2 = 0;
				goto IL_0044_1;
			}

IL_0026_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = ___definitions0;
				int32_t L_8 = V_2;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				Type_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_3 = L_10;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ___parameters1;
				int32_t L_12 = V_2;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				Type_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				V_4 = L_14;
				Type_t* L_15 = V_3;
				Type_t* L_16 = V_4;
				Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_17 = V_1;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA(L_15, L_16, L_17, (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)NULL, NULL);
				if (L_18)
				{
					goto IL_0040_1;
				}
			}
			{
				V_5 = (bool)0;
				goto IL_0056;
			}

IL_0040_1:
			{
				int32_t L_19 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			}

IL_0044_1:
			{
				int32_t L_20 = V_2;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = ___definitions0;
				NullCheck(L_21);
				if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
				{
					goto IL_0026_1;
				}
			}
			{
				V_5 = (bool)1;
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		bool L_22 = V_5;
		return L_22;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::GenericParameterIsFulfilledBy(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_GenericParameterIsFulfilledBy_m00ADD19F428DF617D8D47B21E8C42A5A9BDC93DB (Type_t* ___genericParameterDefinition0, Type_t* ___parameterType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfaction_LOCK_0;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
			Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_3 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionResolvedMap_2;
			NullCheck(L_3);
			Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A(L_3, Dictionary_2_Clear_m08AC33D2F95E4D0C8C8A0BB30D9B9E1F8A09845A_RuntimeMethod_var);
			Type_t* L_4 = ___genericParameterDefinition0;
			Type_t* L_5 = ___parameterType1;
			Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_6 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionResolvedMap_2;
			bool L_7;
			L_7 = TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA(L_4, L_5, L_6, (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)NULL, NULL);
			V_1 = L_7;
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::GenericParameterIsFulfilledBy(System.Type,System.Type,System.Collections.Generic.Dictionary`2<System.Type,System.Type>,System.Collections.Generic.HashSet`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA (Type_t* ___genericParameterDefinition0, Type_t* ___parameterType1, Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___resolvedMap2, HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___processedParams3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_mD81EB8C74D5689E55D239A259003F5BAC625DAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t* V_3 = NULL;
	Type_t* V_4 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_6 = NULL;
	int32_t V_7 = 0;
	Type_t* V_8 = NULL;
	Type_t* V_9 = NULL;
	{
		Type_t* L_0 = ___genericParameterDefinition0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AB8B44988B970CC5C32DF979DCC41D9F4392F23)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___parameterType1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CB17CEF37092BF11409AA447C34F194421A10B8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA_RuntimeMethod_var)));
	}

IL_001c:
	{
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_4 = ___resolvedMap2;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral902761964D1B51BF73EA832887150DC4CD16D65B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA_RuntimeMethod_var)));
	}

IL_002a:
	{
		Type_t* L_6 = ___genericParameterDefinition0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_6);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		Type_t* L_8 = ___genericParameterDefinition0;
		Type_t* L_9 = ___parameterType1;
		if ((!(((RuntimeObject*)(Type_t*)L_8) == ((RuntimeObject*)(Type_t*)L_9))))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		Type_t* L_10 = ___genericParameterDefinition0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_10);
		if (L_11)
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_12 = ___processedParams3;
		if (L_12)
		{
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_13 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionProcessedParams_3;
		___processedParams3 = L_13;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_14 = ___processedParams3;
		NullCheck(L_14);
		HashSet_1_Clear_mD81EB8C74D5689E55D239A259003F5BAC625DAC5(L_14, HashSet_1_Clear_mD81EB8C74D5689E55D239A259003F5BAC625DAC5_RuntimeMethod_var);
	}

IL_0052:
	{
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_15 = ___processedParams3;
		Type_t* L_16 = ___genericParameterDefinition0;
		NullCheck(L_15);
		bool L_17;
		L_17 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_15, L_16, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		Type_t* L_18 = ___genericParameterDefinition0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(52 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_18);
		V_0 = L_19;
		int32_t L_20 = V_0;
		if (!L_20)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_21&8))) == ((uint32_t)8))))
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_22 = ___parameterType1;
		NullCheck(L_22);
		bool L_23;
		L_23 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_22, NULL);
		if (!L_23)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_24 = ___parameterType1;
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_24);
		if (!L_25)
		{
			goto IL_009e;
		}
	}
	{
		Type_t* L_26 = ___parameterType1;
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_26);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_27) == ((RuntimeObject*)(Type_t*)L_29))))
		{
			goto IL_009e;
		}
	}

IL_008c:
	{
		return (bool)0;
	}

IL_008e:
	{
		int32_t L_30 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_30&4))) == ((uint32_t)4))))
		{
			goto IL_009e;
		}
	}
	{
		Type_t* L_31 = ___parameterType1;
		NullCheck(L_31);
		bool L_32;
		L_32 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_31, NULL);
		if (!L_32)
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_009e:
	{
		int32_t L_33 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_33&((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_34 = ___parameterType1;
		NullCheck(L_34);
		bool L_35;
		L_35 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_34, NULL);
		if (L_35)
		{
			goto IL_00c3;
		}
	}
	{
		Type_t* L_36 = ___parameterType1;
		NullCheck(L_36);
		bool L_37;
		L_37 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_36, NULL);
		if (L_37)
		{
			goto IL_00c5;
		}
	}
	{
		Type_t* L_38 = ___parameterType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->___EmptyTypes_2;
		NullCheck(L_38);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_40;
		L_40 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_38, L_39, NULL);
		if (L_40)
		{
			goto IL_00c5;
		}
	}

IL_00c3:
	{
		return (bool)0;
	}

IL_00c5:
	{
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_41 = ___resolvedMap2;
		Type_t* L_42 = ___genericParameterDefinition0;
		NullCheck(L_41);
		bool L_43;
		L_43 = Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9(L_41, L_42, Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9_RuntimeMethod_var);
		if (!L_43)
		{
			goto IL_00df;
		}
	}
	{
		Type_t* L_44 = ___parameterType1;
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_45 = ___resolvedMap2;
		Type_t* L_46 = ___genericParameterDefinition0;
		NullCheck(L_45);
		Type_t* L_47;
		L_47 = Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0(L_45, L_46, Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0_RuntimeMethod_var);
		NullCheck(L_44);
		bool L_48;
		L_48 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_44, L_47);
		if (L_48)
		{
			goto IL_00df;
		}
	}
	{
		return (bool)0;
	}

IL_00df:
	{
		Type_t* L_49 = ___genericParameterDefinition0;
		NullCheck(L_49);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_50;
		L_50 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(53 /* System.Type[] System.Type::GetGenericParameterConstraints() */, L_49);
		V_1 = L_50;
		V_2 = 0;
		goto IL_0247;
	}

IL_00ed:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_51 = V_1;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		Type_t* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_3 = L_54;
		Type_t* L_55 = V_3;
		NullCheck(L_55);
		bool L_56;
		L_56 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_55);
		if (!L_56)
		{
			goto IL_010a;
		}
	}
	{
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_57 = ___resolvedMap2;
		Type_t* L_58 = V_3;
		NullCheck(L_57);
		bool L_59;
		L_59 = Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9(L_57, L_58, Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9_RuntimeMethod_var);
		if (!L_59)
		{
			goto IL_010a;
		}
	}
	{
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_60 = ___resolvedMap2;
		Type_t* L_61 = V_3;
		NullCheck(L_60);
		Type_t* L_62;
		L_62 = Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0(L_60, L_61, Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0_RuntimeMethod_var);
		V_3 = L_62;
	}

IL_010a:
	{
		Type_t* L_63 = V_3;
		NullCheck(L_63);
		bool L_64;
		L_64 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_63);
		if (!L_64)
		{
			goto IL_0122;
		}
	}
	{
		Type_t* L_65 = V_3;
		Type_t* L_66 = ___parameterType1;
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_67 = ___resolvedMap2;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_68 = ___processedParams3;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA(L_65, L_66, L_67, L_68, NULL);
		if (L_69)
		{
			goto IL_0243;
		}
	}
	{
		return (bool)0;
	}

IL_0122:
	{
		Type_t* L_70 = V_3;
		NullCheck(L_70);
		bool L_71;
		L_71 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_70, NULL);
		if (L_71)
		{
			goto IL_013d;
		}
	}
	{
		Type_t* L_72 = V_3;
		NullCheck(L_72);
		bool L_73;
		L_73 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_72, NULL);
		if (L_73)
		{
			goto IL_013d;
		}
	}
	{
		Type_t* L_74 = V_3;
		NullCheck(L_74);
		bool L_75;
		L_75 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_74, NULL);
		if (!L_75)
		{
			goto IL_022d;
		}
	}

IL_013d:
	{
		Type_t* L_76 = V_3;
		NullCheck(L_76);
		bool L_77;
		L_77 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_76);
		if (!L_77)
		{
			goto IL_0222;
		}
	}
	{
		Type_t* L_78 = V_3;
		NullCheck(L_78);
		Type_t* L_79;
		L_79 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_78);
		V_4 = L_79;
		Type_t* L_80 = V_3;
		NullCheck(L_80);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_81;
		L_81 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_80);
		V_5 = L_81;
		Type_t* L_82 = ___parameterType1;
		NullCheck(L_82);
		bool L_83;
		L_83 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_82);
		if (!L_83)
		{
			goto IL_0174;
		}
	}
	{
		Type_t* L_84 = V_4;
		Type_t* L_85 = ___parameterType1;
		NullCheck(L_85);
		Type_t* L_86;
		L_86 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_85);
		if ((!(((RuntimeObject*)(Type_t*)L_84) == ((RuntimeObject*)(Type_t*)L_86))))
		{
			goto IL_0174;
		}
	}
	{
		Type_t* L_87 = ___parameterType1;
		NullCheck(L_87);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_88;
		L_88 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_87);
		V_6 = L_88;
		goto IL_01ad;
	}

IL_0174:
	{
		Type_t* L_89 = V_4;
		NullCheck(L_89);
		bool L_90;
		L_90 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_89, NULL);
		if (!L_90)
		{
			goto IL_0195;
		}
	}
	{
		Type_t* L_91 = ___parameterType1;
		Type_t* L_92 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeExtensions_ImplementsOpenGenericClass_m169A6AB06B4B5AE55B28F0F35E89F3C3C9869D45(L_91, L_92, NULL);
		if (!L_93)
		{
			goto IL_0193;
		}
	}
	{
		Type_t* L_94 = ___parameterType1;
		Type_t* L_95 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_96;
		L_96 = TypeExtensions_GetArgumentsOfInheritedOpenGenericClass_m5A4229D704A7E36F20B2D5716FE41BA0481F0DE5(L_94, L_95, NULL);
		V_6 = L_96;
		goto IL_01ad;
	}

IL_0193:
	{
		return (bool)0;
	}

IL_0195:
	{
		Type_t* L_97 = ___parameterType1;
		Type_t* L_98 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_99;
		L_99 = TypeExtensions_ImplementsOpenGenericInterface_mA9B23B842C59B27B5CC0DF28621B67539A9BAD37(L_97, L_98, NULL);
		if (!L_99)
		{
			goto IL_01ab;
		}
	}
	{
		Type_t* L_100 = ___parameterType1;
		Type_t* L_101 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_102;
		L_102 = TypeExtensions_GetArgumentsOfInheritedOpenGenericInterface_m9AED9C1EB9599B6903AB54B37E45214E37C5E9D6(L_100, L_101, NULL);
		V_6 = L_102;
		goto IL_01ad;
	}

IL_01ab:
	{
		return (bool)0;
	}

IL_01ad:
	{
		V_7 = 0;
		goto IL_0218;
	}

IL_01b2:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_103 = V_5;
		int32_t L_104 = V_7;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		Type_t* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		V_8 = L_106;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_107 = V_6;
		int32_t L_108 = V_7;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		Type_t* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_9 = L_110;
		Type_t* L_111 = V_8;
		NullCheck(L_111);
		bool L_112;
		L_112 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_111);
		if (!L_112)
		{
			goto IL_01dd;
		}
	}
	{
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_113 = ___resolvedMap2;
		Type_t* L_114 = V_8;
		NullCheck(L_113);
		bool L_115;
		L_115 = Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9(L_113, L_114, Dictionary_2_ContainsKey_mC0B9D0867188881CB6B16C8D5CA39B90378FB0C9_RuntimeMethod_var);
		if (!L_115)
		{
			goto IL_01dd;
		}
	}
	{
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_116 = ___resolvedMap2;
		Type_t* L_117 = V_8;
		NullCheck(L_116);
		Type_t* L_118;
		L_118 = Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0(L_116, L_117, Dictionary_2_get_Item_m4A6386B0FB5D262F4A355864E53C582DE4DCDAB0_RuntimeMethod_var);
		V_8 = L_118;
	}

IL_01dd:
	{
		Type_t* L_119 = V_8;
		NullCheck(L_119);
		bool L_120;
		L_120 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_119);
		if (!L_120)
		{
			goto IL_01ff;
		}
	}
	{
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_121 = ___processedParams3;
		Type_t* L_122 = V_8;
		NullCheck(L_121);
		bool L_123;
		L_123 = HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D(L_121, L_122, HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		if (L_123)
		{
			goto IL_0212;
		}
	}
	{
		Type_t* L_124 = V_8;
		Type_t* L_125 = V_9;
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_126 = ___resolvedMap2;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_127 = ___processedParams3;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_128;
		L_128 = TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA(L_124, L_125, L_126, L_127, NULL);
		if (L_128)
		{
			goto IL_0212;
		}
	}
	{
		return (bool)0;
	}

IL_01ff:
	{
		Type_t* L_129 = V_8;
		Type_t* L_130 = V_9;
		if ((((RuntimeObject*)(Type_t*)L_129) == ((RuntimeObject*)(Type_t*)L_130)))
		{
			goto IL_0212;
		}
	}
	{
		Type_t* L_131 = V_8;
		Type_t* L_132 = V_9;
		NullCheck(L_131);
		bool L_133;
		L_133 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_131, L_132);
		if (L_133)
		{
			goto IL_0212;
		}
	}
	{
		return (bool)0;
	}

IL_0212:
	{
		int32_t L_134 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_134, 1));
	}

IL_0218:
	{
		int32_t L_135 = V_7;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_136 = V_5;
		NullCheck(L_136);
		if ((((int32_t)L_135) < ((int32_t)((int32_t)(((RuntimeArray*)L_136)->max_length)))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_0243;
	}

IL_0222:
	{
		Type_t* L_137 = V_3;
		Type_t* L_138 = ___parameterType1;
		NullCheck(L_137);
		bool L_139;
		L_139 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_137, L_138);
		if (L_139)
		{
			goto IL_0243;
		}
	}
	{
		return (bool)0;
	}

IL_022d:
	{
		Type_t* L_140 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var)));
		String_t* L_141;
		L_141 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_140, NULL);
		String_t* L_142;
		L_142 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2210DC84C50D37C279FE93BEDD2A7B12B749BA3B)), L_141, NULL);
		Exception_t* L_143 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_143);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_143, L_142, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GenericParameterIsFulfilledBy_mD251CBA4B7A5E1FE251E9E0584EDC1690774BDEA_RuntimeMethod_var)));
	}

IL_0243:
	{
		int32_t L_144 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_0247:
	{
		int32_t L_145 = V_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_146 = V_1;
		NullCheck(L_146);
		if ((((int32_t)L_145) < ((int32_t)((int32_t)(((RuntimeArray*)L_146)->max_length)))))
		{
			goto IL_00ed;
		}
	}
	{
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_147 = ___resolvedMap2;
		Type_t* L_148 = ___genericParameterDefinition0;
		Type_t* L_149 = ___parameterType1;
		NullCheck(L_147);
		Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF(L_147, L_148, L_149, Dictionary_2_set_Item_m9DBC8F8AD11B6FC36DF55B83EDB390D0DC0AC0CF_RuntimeMethod_var);
		return (bool)1;
	}
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetGenericConstraintsString(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetGenericConstraintsString_mD122EE5EFC14DAAA2DAED842F7DAA49C1C202C3B (Type_t* ___type0, bool ___useFullTypeNames1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t* L_0 = ___type0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericConstraintsString_mD122EE5EFC14DAAA2DAED842F7DAA49C1C202C3B_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_2);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var)));
		String_t* L_5;
		L_5 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C686C624D22B0C45E4FADFB00FA535DDDC88AD7)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D03F517F20E147CE2C2F50B69EFB70B9DBDA7E3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericConstraintsString_mD122EE5EFC14DAAA2DAED842F7DAA49C1C202C3B_RuntimeMethod_var)));
	}

IL_0031:
	{
		Type_t* L_8 = ___type0;
		NullCheck(L_8);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9;
		L_9 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_8);
		V_0 = L_9;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		V_1 = L_11;
		V_2 = 0;
		goto IL_0055;
	}

IL_0045:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		int32_t L_13 = V_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Type_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		bool L_18 = ___useFullTypeNames1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = TypeExtensions_GetGenericParameterConstraintsString_mA7237337E08913F86BC8EDCE1EF98A0B2CC13BF8(L_17, L_18, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_19);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (String_t*)L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0055:
	{
		int32_t L_21 = V_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0045;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_23, NULL);
		return L_24;
	}
}
// System.String Sirenix.Serialization.Utilities.TypeExtensions::GetGenericParameterConstraintsString(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeExtensions_GetGenericParameterConstraintsString_mA7237337E08913F86BC8EDCE1EF98A0B2CC13BF8 (Type_t* ___type0, bool ___useFullTypeNames1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24AEC96AAC2379CB03D9ED44346655AC81FAE3DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A76FCB19BBA6079C7B0AF8D9FBA28F21155CB78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB7D34E749351FF41F13FEFE203BD9A3E3133A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB5FCE33702D239DF36758E2369160F0D2A806A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6711B5838E686DD662577EF29FC942D7FBBA6AE);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t* V_5 = NULL;
	{
		Type_t* L_0 = ___type0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericParameterConstraintsString_mA7237337E08913F86BC8EDCE1EF98A0B2CC13BF8_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_2);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var)));
		String_t* L_5;
		L_5 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C686C624D22B0C45E4FADFB00FA535DDDC88AD7)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE11BCBD02DE56176C5AAB76634169ACE3251128B)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetGenericParameterConstraintsString_mA7237337E08913F86BC8EDCE1EF98A0B2CC13BF8_RuntimeMethod_var)));
	}

IL_0031:
	{
		StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_8, NULL);
		V_0 = L_8;
		V_1 = (bool)0;
		Type_t* L_9 = ___type0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(52 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_11&8))) == ((uint32_t)8))))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteralC6711B5838E686DD662577EF29FC942D7FBBA6AE, NULL);
		Type_t* L_14 = ___type0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		NullCheck(L_13);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, L_15, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral9AB5FCE33702D239DF36758E2369160F0D2A806A, NULL);
		V_1 = (bool)1;
		goto IL_0094;
	}

IL_006b:
	{
		int32_t L_18 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&4))) == ((uint32_t)4))))
		{
			goto IL_0094;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteralC6711B5838E686DD662577EF29FC942D7FBBA6AE, NULL);
		Type_t* L_21 = ___type0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		NullCheck(L_20);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, L_22, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral6A76FCB19BBA6079C7B0AF8D9FBA28F21155CB78, NULL);
		V_1 = (bool)1;
	}

IL_0094:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_25&((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00d0;
		}
	}
	{
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_00ad;
		}
	}
	{
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteral24AEC96AAC2379CB03D9ED44346655AC81FAE3DE, NULL);
		goto IL_00d0;
	}

IL_00ad:
	{
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, _stringLiteralC6711B5838E686DD662577EF29FC942D7FBBA6AE, NULL);
		Type_t* L_31 = ___type0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_31);
		NullCheck(L_30);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_32, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteral7BB7D34E749351FF41F13FEFE203BD9A3E3133A0, NULL);
		V_1 = (bool)1;
	}

IL_00d0:
	{
		Type_t* L_35 = ___type0;
		NullCheck(L_35);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_36;
		L_36 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(53 /* System.Type[] System.Type::GetGenericParameterConstraints() */, L_35);
		V_3 = L_36;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_37 = V_3;
		NullCheck(L_37);
		if (!(((RuntimeArray*)L_37)->max_length))
		{
			goto IL_0172;
		}
	}
	{
		V_4 = 0;
		goto IL_0168;
	}

IL_00e6:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_38 = V_3;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Type_t* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = L_41;
		bool L_42 = V_1;
		if (!L_42)
		{
			goto IL_011e;
		}
	}
	{
		StringBuilder_t* L_43 = V_0;
		NullCheck(L_43);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_43, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		bool L_45 = ___useFullTypeNames1;
		if (!L_45)
		{
			goto IL_010e;
		}
	}
	{
		StringBuilder_t* L_46 = V_0;
		Type_t* L_47 = V_5;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_48;
		L_48 = TypeExtensions_GetNiceFullName_m485DEE70C40BE0715AACC505B16628D1492FF26B(L_47, NULL);
		NullCheck(L_46);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, L_48, NULL);
		goto IL_0162;
	}

IL_010e:
	{
		StringBuilder_t* L_50 = V_0;
		Type_t* L_51 = V_5;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_52;
		L_52 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_51, NULL);
		NullCheck(L_50);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, L_52, NULL);
		goto IL_0162;
	}

IL_011e:
	{
		StringBuilder_t* L_54 = V_0;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteralC6711B5838E686DD662577EF29FC942D7FBBA6AE, NULL);
		Type_t* L_56 = ___type0;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_56);
		NullCheck(L_55);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_55, L_57, NULL);
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, NULL);
		bool L_60 = ___useFullTypeNames1;
		if (!L_60)
		{
			goto IL_0152;
		}
	}
	{
		StringBuilder_t* L_61 = V_0;
		Type_t* L_62 = V_5;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_63;
		L_63 = TypeExtensions_GetNiceFullName_m485DEE70C40BE0715AACC505B16628D1492FF26B(L_62, NULL);
		NullCheck(L_61);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_61, L_63, NULL);
		goto IL_0160;
	}

IL_0152:
	{
		StringBuilder_t* L_65 = V_0;
		Type_t* L_66 = V_5;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		String_t* L_67;
		L_67 = TypeExtensions_GetNiceName_mF648EB016B747612012979FC8788FA6C16D00ACB(L_66, NULL);
		NullCheck(L_65);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_65, L_67, NULL);
	}

IL_0160:
	{
		V_1 = (bool)1;
	}

IL_0162:
	{
		int32_t L_69 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0168:
	{
		int32_t L_70 = V_4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_71 = V_3;
		NullCheck(L_71);
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))))
		{
			goto IL_00e6;
		}
	}

IL_0172:
	{
		StringBuilder_t* L_72 = V_0;
		NullCheck(L_72);
		String_t* L_73;
		L_73 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_72);
		return L_73;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::GenericArgumentsContainsTypes(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_GenericArgumentsContainsTypes_m6067107736BC8CEB4D2E2DF1FF471F3FFFD5D82C (Type_t* ___type0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mF8507DFDFE2D6D67195306C62871EAB49032D3F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m4C1517D8ECA864DFE621D30E118735B407E87400_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m52ECB17AD4F33C10906F19BA7E7FE3EE73E78887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m21C5D550F6E4D7C2BC74D515C2107BDC538C46C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* V_2 = NULL;
	Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t* V_5 = NULL;
	int32_t V_6 = 0;
	Type_t* V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_11 = NULL;
	int32_t V_12 = 0;
	Type_t* V_13 = NULL;
	{
		Type_t* L_0 = ___type0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GenericArgumentsContainsTypes_m6067107736BC8CEB4D2E2DF1FF471F3FFFD5D82C_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_2);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = ___types1;
		NullCheck(L_4);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_0 = L_5;
		Type_t* L_6 = ___type0;
		NullCheck(L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7;
		L_7 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_6);
		V_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_8 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericArgumentsContainsTypes_ArgsToCheckCached_11;
		V_2 = L_8;
		Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_9 = V_2;
		V_3 = L_9;
		Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_10 = V_3;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_10, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0120:
			{// begin finally (depth: 1)
				Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_11 = V_3;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_11, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_12 = V_2;
				NullCheck(L_12);
				Stack_1_Clear_mF8507DFDFE2D6D67195306C62871EAB49032D3F0(L_12, Stack_1_Clear_mF8507DFDFE2D6D67195306C62871EAB49032D3F0_RuntimeMethod_var);
				V_4 = 0;
				goto IL_0051_1;
			}

IL_0041_1:
			{
				Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_13 = V_2;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = V_1;
				int32_t L_15 = V_4;
				NullCheck(L_14);
				int32_t L_16 = L_15;
				Type_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				NullCheck(L_13);
				Stack_1_Push_m52ECB17AD4F33C10906F19BA7E7FE3EE73E78887(L_13, L_17, Stack_1_Push_m52ECB17AD4F33C10906F19BA7E7FE3EE73E78887_RuntimeMethod_var);
				int32_t L_18 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
			}

IL_0051_1:
			{
				int32_t L_19 = V_4;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = V_1;
				NullCheck(L_20);
				if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_0112_1;
			}

IL_005d_1:
			{
				Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_21 = V_2;
				NullCheck(L_21);
				Type_t* L_22;
				L_22 = Stack_1_Pop_m4C1517D8ECA864DFE621D30E118735B407E87400(L_21, Stack_1_Pop_m4C1517D8ECA864DFE621D30E118735B407E87400_RuntimeMethod_var);
				V_5 = L_22;
				V_6 = 0;
				goto IL_00ae_1;
			}

IL_006a_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = ___types1;
				int32_t L_24 = V_6;
				NullCheck(L_23);
				int32_t L_25 = L_24;
				Type_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				V_7 = L_26;
				Type_t* L_27 = V_7;
				Type_t* L_28 = V_5;
				if ((!(((RuntimeObject*)(Type_t*)L_27) == ((RuntimeObject*)(Type_t*)L_28))))
				{
					goto IL_007d_1;
				}
			}
			{
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_29 = V_0;
				int32_t L_30 = V_6;
				NullCheck(L_29);
				(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (bool)1);
				goto IL_00a8_1;
			}

IL_007d_1:
			{
				Type_t* L_31 = V_7;
				NullCheck(L_31);
				bool L_32;
				L_32 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_31);
				if (!L_32)
				{
					goto IL_00a8_1;
				}
			}
			{
				Type_t* L_33 = V_5;
				NullCheck(L_33);
				bool L_34;
				L_34 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_33);
				if (!L_34)
				{
					goto IL_00a8_1;
				}
			}
			{
				Type_t* L_35 = V_5;
				NullCheck(L_35);
				bool L_36;
				L_36 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_35);
				if (L_36)
				{
					goto IL_00a8_1;
				}
			}
			{
				Type_t* L_37 = V_5;
				NullCheck(L_37);
				Type_t* L_38;
				L_38 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_37);
				Type_t* L_39 = V_7;
				if ((!(((RuntimeObject*)(Type_t*)L_38) == ((RuntimeObject*)(Type_t*)L_39))))
				{
					goto IL_00a8_1;
				}
			}
			{
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_40 = V_0;
				int32_t L_41 = V_6;
				NullCheck(L_40);
				(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (bool)1);
			}

IL_00a8_1:
			{
				int32_t L_42 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_00ae_1:
			{
				int32_t L_43 = V_6;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_44 = ___types1;
				NullCheck(L_44);
				if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
				{
					goto IL_006a_1;
				}
			}
			{
				V_8 = (bool)1;
				V_9 = 0;
				goto IL_00ce_1;
			}

IL_00bd_1:
			{
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_45 = V_0;
				int32_t L_46 = V_9;
				NullCheck(L_45);
				int32_t L_47 = L_46;
				uint8_t L_48 = (uint8_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
				if (L_48)
				{
					goto IL_00c8_1;
				}
			}
			{
				V_8 = (bool)0;
				goto IL_00d5_1;
			}

IL_00c8_1:
			{
				int32_t L_49 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_49, 1));
			}

IL_00ce_1:
			{
				int32_t L_50 = V_9;
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_51 = V_0;
				NullCheck(L_51);
				if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
				{
					goto IL_00bd_1;
				}
			}

IL_00d5_1:
			{
				bool L_52 = V_8;
				if (!L_52)
				{
					goto IL_00de_1;
				}
			}
			{
				V_10 = (bool)1;
				goto IL_0129;
			}

IL_00de_1:
			{
				Type_t* L_53 = V_5;
				NullCheck(L_53);
				bool L_54;
				L_54 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_53);
				if (!L_54)
				{
					goto IL_0112_1;
				}
			}
			{
				Type_t* L_55 = V_5;
				NullCheck(L_55);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_56;
				L_56 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_55);
				V_11 = L_56;
				V_12 = 0;
				goto IL_010a_1;
			}

IL_00f5_1:
			{
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_57 = V_11;
				int32_t L_58 = V_12;
				NullCheck(L_57);
				int32_t L_59 = L_58;
				Type_t* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
				V_13 = L_60;
				Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_61 = V_2;
				Type_t* L_62 = V_13;
				NullCheck(L_61);
				Stack_1_Push_m52ECB17AD4F33C10906F19BA7E7FE3EE73E78887(L_61, L_62, Stack_1_Push_m52ECB17AD4F33C10906F19BA7E7FE3EE73E78887_RuntimeMethod_var);
				int32_t L_63 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_63, 1));
			}

IL_010a_1:
			{
				int32_t L_64 = V_12;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_65 = V_11;
				NullCheck(L_65);
				if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
				{
					goto IL_00f5_1;
				}
			}

IL_0112_1:
			{
				Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_66 = V_2;
				NullCheck(L_66);
				int32_t L_67;
				L_67 = Stack_1_get_Count_m21C5D550F6E4D7C2BC74D515C2107BDC538C46C6_inline(L_66, Stack_1_get_Count_m21C5D550F6E4D7C2BC74D515C2107BDC538C46C6_RuntimeMethod_var);
				if ((((int32_t)L_67) > ((int32_t)0)))
				{
					goto IL_005d_1;
				}
			}
			{
				goto IL_0127;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0127:
	{
		return (bool)0;
	}

IL_0129:
	{
		bool L_68 = V_10;
		return L_68;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsFullyConstructedGenericType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsFullyConstructedGenericType_m946EB36041677E8FAD045E1B4DE186BB5395CEB4 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	Type_t* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t* V_3 = NULL;
	{
		Type_t* L_0 = ___type0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_IsFullyConstructedGenericType_m946EB36041677E8FAD045E1B4DE186BB5395CEB4_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_HasElementType_m44F9601E586D2EEA2EDB93FB81D1D80521C264EE(L_4, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		Type_t* L_6 = ___type0;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_6);
		V_1 = L_7;
		Type_t* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		Type_t* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = TypeExtensions_IsFullyConstructedGenericType_m946EB36041677E8FAD045E1B4DE186BB5395CEB4(L_10, NULL);
		if (L_11)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return (bool)0;
	}

IL_0039:
	{
		Type_t* L_12 = ___type0;
		NullCheck(L_12);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13;
		L_13 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_12);
		V_0 = L_13;
		V_2 = 0;
		goto IL_0060;
	}

IL_0044:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Type_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		Type_t* L_18 = V_3;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_18);
		if (!L_19)
		{
			goto IL_0052;
		}
	}
	{
		return (bool)0;
	}

IL_0052:
	{
		Type_t* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = TypeExtensions_IsFullyConstructedGenericType_m946EB36041677E8FAD045E1B4DE186BB5395CEB4(L_20, NULL);
		if (L_21)
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0060:
	{
		int32_t L_23 = V_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		Type_t* L_25 = ___type0;
		NullCheck(L_25);
		bool L_26;
		L_26 = VirtualFuncInvoker0< bool >::Invoke(41 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_25);
		return (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsNullableType_mC2F6430A4324A5D1B00BAD799D5500EA62C71B7A (Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_4);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.UInt64 Sirenix.Serialization.Utilities.TypeExtensions::GetEnumBitmask(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeExtensions_GetEnumBitmask_m125A2270971B8FB376684B6A743F6D4E8986D0FC (RuntimeObject* ___value0, Type_t* ___enumType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Type_t* L_0 = ___enumType1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD0928C03BDC2C023E2CF3BC347393F87144F9F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeExtensions_GetEnumBitmask_m125A2270971B8FB376684B6A743F6D4E8986D0FC_RuntimeMethod_var)));
	}

IL_0013:
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = Convert_ToUInt64_mA2BE4A2841686E8B79607BA469368B4FB4D40F34(L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0031;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.OverflowException)
		RuntimeObject* L_6 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var)));
		int64_t L_8;
		L_8 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(L_6, L_7, NULL);
		V_0 = L_8;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		uint64_t L_9 = V_0;
		return L_9;
	}
}
// System.Type[] Sirenix.Serialization.Utilities.TypeExtensions::SafeGetTypes(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* TypeExtensions_SafeGetTypes_mC0FD2CB2AC9BEB78257DE2C2F382D1C428B8C870 (Assembly_t* ___assembly0, const RuntimeMethod* method) 
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Assembly_t* L_0 = ___assembly0;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(16 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		V_0 = L_1;
		goto IL_0012;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.Object)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var))))->___EmptyTypes_2;
		V_0 = L_2;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0012;
	}// end catch (depth: 1)

IL_0012:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions::SafeIsDefined(System.Reflection.Assembly,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_SafeIsDefined_m135572E76BCE26831883E46218B17C790B6AA23E (Assembly_t* ___assembly0, Type_t* ___attribute1, bool ___inherit2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Assembly_t* L_0 = ___assembly0;
		Type_t* L_1 = ___attribute1;
		bool L_2 = ___inherit2;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12 /* System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.Object)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0010;
	}// end catch (depth: 1)

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.TypeExtensions::SafeGetCustomAttributes(System.Reflection.Assembly,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* TypeExtensions_SafeGetCustomAttributes_mEB257D8A651A3DBBDCE542AF1500519BC185BBB7 (Assembly_t* ___assembly0, Type_t* ___type1, bool ___inherit2, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Assembly_t* L_0 = ___assembly0;
		Type_t* L_1 = ___type1;
		bool L_2 = ___inherit2;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0015;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.Object)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)0);
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0015;
	}// end catch (depth: 1)

IL_0015:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		return L_5;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions__cctor_m012C51FA1819E981B95E2771DAD0619CB48E4FCE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0205CA2DDC8935364EA764C0B7C811D6515A1E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleLookupDictionary_3__ctor_m0090BA54CD3B486CBDBD1BEB35F8B6A387AC839A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleLookupDictionary_3__ctor_m995979C65A47F6DDE91D13D7916048B5B39DF675_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tB47DDF469B770957C5467EC2DBDED44B2DD613DB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t8C7C301DAF6E4E4DFA7504EF93E6E2C93AB33AE7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m1EE4BE944BE2ECBFD9260CFA0045C36D4A130B53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072BA90B274B502615639084DC3D7FCC63407A24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BB39DE8D1B747008B7AA481357BD906FEA90B6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE918CF589A0B3A3BDB90F0F98BCC43CDF6169E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CEBF7DFA17440E9873C47A2C1BE712F98DFA500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D78A3ACF08834A8208E9C1EAB783D9E372B0E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A9F773AF09A196B0A76B00E4B47084B3EA86D59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B6D0EA4FFAEA7868BA3D296BF046EF1266CEC55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C50918CD5619BDE9BDBED1D23983EEBAD065B57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F6FFBE5C595684B2E59EF3E0B83D1172BFA69E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral286CC02C1E7ED462D7D2D31546D5144F88661A2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A2974B55097EBB10C3D44D4452824517C0783D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D308A3610717843215FF698C5DC2B84ABDC6705);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E3ED7A81B1913E943A744C8F9E7D5EB5C672B4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E4441B58AEC6A28560FB3E17B198D20AEFBD3D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33F3CCC8C96B52CBA9D88D899779B6191CE15B79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3680357E36BF098D58315A89BD03F078921BEFD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36F26CE56BFC86CF905B1202DB5A7633261FCA47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral370CFD53E33E4EFE27924264F033C97807D3B553);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384565B8399EC9A224FB52B7078096010121FA9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B5E495CDE8B6F083E7D5ACE1D945067609680FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40238A1A323AEE2FA699BCF0BB5F71A5CCC87DA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43C759A2427665422C3C60545704071B53161510);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral532311522446D888867656699DB97A234896ECE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral541BC3E626400B590FFDBE860C1855349210E425);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E606CEDF36876109C1C2004C2DCF1B25DE95A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral581430FB5E2AB80389A430804CEF0F2382806766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B41A58E45555854EC2026B9B5F8243AA9E7ED4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CAD421923F0F10D02AFE6EA17ED4E929131E356);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DFC03B35CE1610D507097EBBBD36CF45BCB4C2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C6D968B7FE88D4B8A63934DD5685C362457520);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral679D068D573133B9C7C465FC6CF9C9D07B531421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A3D04F009CE456B611375CDCB93697F9F93314B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A7C5B87AC840B649D5115CC2F065246EA1D14D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A86BA126A7E3A6780C81DFDC4654EEDA711D881);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8C975CC62CF419550282B028FB7E3A1F591D06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D8FF8DB7E82CED1C565F940C532A5A2BB643CEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FA4C59C48F20F657EA95225B529B162ECF44EAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766E767D6A87AB03C7C3410F3665A93D03D6E9FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77BB4FFDFB178041A1B27761291B83B0B4D9CC03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C3D0F99DF1B534F06138C8CCF9638478F3E6499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83882E2E410B213AB2B2289E29DC55945FAD39F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89337E2EE35A3C198227FBA81922CE5F0C58D97F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8940E1FEA4EBF3CA20C44768AA93531C62B71B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD5428D0D7693EA23B9301AD08C2C5147DFE422);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C1D304CED4C13075109A2D82DE6D8D24A9E3678);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C231B3C1DD723D0564B3FC078E20657B6C821C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DFF4CFCB48843FA0B74F54FD72D6C945EF41953);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral934962903D946CC131DF8E5E4E575453098EEF43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral979BEF74EBFAB7697A86533A10926355727B6C8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99201352CB96CC1C32BEF52CD271CF53199FF8DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C48C24D4BF1ED95579220DFFA96B8E7E7AB87E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA041A903507FD76791B65E77B8DA1BF219158F7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA971E6F33BE8C290E391DA92D49C7B1309E3795D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9C6E7553EC8AA085F5FDB9F92B7707363BED95D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1868FA5803D4E948C556DEC84B3C733E6C6863C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E7D625DFBC9C92FA0449D5E3E0BE263DECD0EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB95AED94347EEEE80FE2B58CC6819F8D88029C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEADF129C0FBE570705EB6183DA8896AF1EE36DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF45CADC16AD267EA891B4231D162B68FDED748D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5A553F3851704DFEED79230EBCEC65739012BE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC94CA552630B8AC1ADF21BAF5252FC9092E4DDDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB2070BB5AC5DA50197474C74B7EA4D7BDEEBCB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEBC2707039661BD61D98F991B27F2B9CB160373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF55DB7CA65AEC3E52A69DAAA96E4F262E80D577);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD268E825BBBA4A484453E18A5BE5FA70EF65968B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD525221FF38EAF1A30491622A0B39D5D960A7815);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD88EC033DEAF162C44E191CE77B510F07AACCDA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF7342DCBF4F4F80F2C4D42F5991B8E851510BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC500CF01D877A89AA3F6E3447F79A733BA63FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2D76D817C414EEA0C84FDF21336CF360167A6FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5B7FB5BFBF1CF60857A40FCA10F830CC619AE16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6916006B378403522431CD9C96E6052573CE96F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE895F499BC653C0CA36FB31C5936FC768CAD263E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECC5FBBC8E0BED3B8718D6E2160AD386C9CEC212);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECE7ACD2EBE43C9753D823F423714DB870E2FDC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF13E4BFF086D4E511E68B0617B76ACC5BD5AFFE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF49AECB5A7A9C87D4D672BA9D06F6929E0895580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4E35F8C3B4DEB7662034D2DB84C95826A9E9496);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF56887477425485B59C9C4926D0FEFC2946FA21E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCBCF9082006C7AAA99359786D794609E8CEEE89);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* V_0 = NULL;
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* V_1 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfaction_LOCK_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfaction_LOCK_0), (void*)L_0);
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_1 = (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*)il2cpp_codegen_object_new(Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729(L_1, Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionInferredParameters_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionInferredParameters_1), (void*)L_1);
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_2 = (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*)il2cpp_codegen_object_new(Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729(L_2, Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionResolvedMap_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionResolvedMap_2), (void*)L_2);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_3 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_3, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionProcessedParams_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericConstraintsSatisfactionProcessedParams_3), (void*)L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (IList_1_t8C7C301DAF6E4E4DFA7504EF93E6E2C93AB33AE7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericListInterface_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericListInterface_4), (void*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ICollection_1_tB47DDF469B770957C5467EC2DBDED44B2DD613DB_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericCollectionInterface_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericCollectionInterface_5), (void*)L_7);
		RuntimeObject* L_8 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_8, NULL);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___WeaklyTypedTypeCastDelegates_LOCK_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___WeaklyTypedTypeCastDelegates_LOCK_6), (void*)L_8);
		RuntimeObject* L_9 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_9, NULL);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___StronglyTypedTypeCastDelegates_LOCK_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___StronglyTypedTypeCastDelegates_LOCK_7), (void*)L_9);
		DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07* L_10 = (DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07*)il2cpp_codegen_object_new(DoubleLookupDictionary_3_tCD7CA64F622ABA7F732E44909C05BCD6CD22DF07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		DoubleLookupDictionary_3__ctor_m995979C65A47F6DDE91D13D7916048B5B39DF675(L_10, DoubleLookupDictionary_3__ctor_m995979C65A47F6DDE91D13D7916048B5B39DF675_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___WeaklyTypedTypeCastDelegates_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___WeaklyTypedTypeCastDelegates_8), (void*)L_10);
		DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041* L_11 = (DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041*)il2cpp_codegen_object_new(DoubleLookupDictionary_3_t47E547668FEB4F042061E3BBA1B882C0AAFE0041_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DoubleLookupDictionary_3__ctor_m0090BA54CD3B486CBDBD1BEB35F8B6A387AC839A(L_11, DoubleLookupDictionary_3__ctor_m0090BA54CD3B486CBDBD1BEB35F8B6A387AC839A_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___StronglyTypedTypeCastDelegates_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___StronglyTypedTypeCastDelegates_9), (void*)L_11);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___TwoLengthTypeArray_Cached_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___TwoLengthTypeArray_Cached_10), (void*)L_12);
		Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04* L_13 = (Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04*)il2cpp_codegen_object_new(Stack_1_t1D63AA93D0CE903F492C88C5E200DF4D732CDA04_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Stack_1__ctor_m1EE4BE944BE2ECBFD9260CFA0045C36D4A130B53(L_13, Stack_1__ctor_m1EE4BE944BE2ECBFD9260CFA0045C36D4A130B53_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericArgumentsContainsTypes_ArgsToCheckCached_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___GenericArgumentsContainsTypes_ArgsToCheckCached_11), (void*)L_13);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_14 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_14, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_15 = L_14;
		NullCheck(L_15);
		bool L_16;
		L_16 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_15, _stringLiteral28A2974B55097EBB10C3D44D4452824517C0783D, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_17 = L_15;
		NullCheck(L_17);
		bool L_18;
		L_18 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_17, _stringLiteral0BB39DE8D1B747008B7AA481357BD906FEA90B6F, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_19 = L_17;
		NullCheck(L_19);
		bool L_20;
		L_20 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_19, _stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_21 = L_19;
		NullCheck(L_21);
		bool L_22;
		L_22 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_21, _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_23 = L_21;
		NullCheck(L_23);
		bool L_24;
		L_24 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_23, _stringLiteralCB2070BB5AC5DA50197474C74B7EA4D7BDEEBCB1, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_25 = L_23;
		NullCheck(L_25);
		bool L_26;
		L_26 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_25, _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_27 = L_25;
		NullCheck(L_27);
		bool L_28;
		L_28 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_27, _stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_29 = L_27;
		NullCheck(L_29);
		bool L_30;
		L_30 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_29, _stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_31 = L_29;
		NullCheck(L_31);
		bool L_32;
		L_32 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_31, _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_33 = L_31;
		NullCheck(L_33);
		bool L_34;
		L_34 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_33, _stringLiteral55E606CEDF36876109C1C2004C2DCF1B25DE95A1, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_35 = L_33;
		NullCheck(L_35);
		bool L_36;
		L_36 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_35, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_37 = L_35;
		NullCheck(L_37);
		bool L_38;
		L_38 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_37, _stringLiteral2E3ED7A81B1913E943A744C8F9E7D5EB5C672B4C, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_39 = L_37;
		NullCheck(L_39);
		bool L_40;
		L_40 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_39, _stringLiteralA041A903507FD76791B65E77B8DA1BF219158F7D, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_41 = L_39;
		NullCheck(L_41);
		bool L_42;
		L_42 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_41, _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_43 = L_41;
		NullCheck(L_43);
		bool L_44;
		L_44 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_43, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_45 = L_43;
		NullCheck(L_45);
		bool L_46;
		L_46 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_45, _stringLiteral1B6D0EA4FFAEA7868BA3D296BF046EF1266CEC55, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_47 = L_45;
		NullCheck(L_47);
		bool L_48;
		L_48 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_47, _stringLiteralF56887477425485B59C9C4926D0FEFC2946FA21E, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_49 = L_47;
		NullCheck(L_49);
		bool L_50;
		L_50 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_49, _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_51 = L_49;
		NullCheck(L_51);
		bool L_52;
		L_52 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_51, _stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_53 = L_51;
		NullCheck(L_53);
		bool L_54;
		L_54 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_53, _stringLiteral384565B8399EC9A224FB52B7078096010121FA9F, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_55 = L_53;
		NullCheck(L_55);
		bool L_56;
		L_56 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_55, _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_57 = L_55;
		NullCheck(L_57);
		bool L_58;
		L_58 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_57, _stringLiteralB1868FA5803D4E948C556DEC84B3C733E6C6863C, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_59 = L_57;
		NullCheck(L_59);
		bool L_60;
		L_60 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_59, _stringLiteral541BC3E626400B590FFDBE860C1855349210E425, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_61 = L_59;
		NullCheck(L_61);
		bool L_62;
		L_62 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_61, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_63 = L_61;
		NullCheck(L_63);
		bool L_64;
		L_64 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_63, _stringLiteral5DFC03B35CE1610D507097EBBBD36CF45BCB4C2C, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_65 = L_63;
		NullCheck(L_65);
		bool L_66;
		L_66 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_65, _stringLiteralF4E35F8C3B4DEB7662034D2DB84C95826A9E9496, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_67 = L_65;
		NullCheck(L_67);
		bool L_68;
		L_68 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_67, _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_69 = L_67;
		NullCheck(L_69);
		bool L_70;
		L_70 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_69, _stringLiteralECE7ACD2EBE43C9753D823F423714DB870E2FDC2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_71 = L_69;
		NullCheck(L_71);
		bool L_72;
		L_72 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_71, _stringLiteral3B5E495CDE8B6F083E7D5ACE1D945067609680FC, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_73 = L_71;
		NullCheck(L_73);
		bool L_74;
		L_74 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_73, _stringLiteralDFC500CF01D877A89AA3F6E3447F79A733BA63FF, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_75 = L_73;
		NullCheck(L_75);
		bool L_76;
		L_76 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_75, _stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_77 = L_75;
		NullCheck(L_77);
		bool L_78;
		L_78 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_77, _stringLiteral40238A1A323AEE2FA699BCF0BB5F71A5CCC87DA2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_79 = L_77;
		NullCheck(L_79);
		bool L_80;
		L_80 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_79, _stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_81 = L_79;
		NullCheck(L_81);
		bool L_82;
		L_82 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_81, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_83 = L_81;
		NullCheck(L_83);
		bool L_84;
		L_84 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_83, _stringLiteralF49AECB5A7A9C87D4D672BA9D06F6929E0895580, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_85 = L_83;
		NullCheck(L_85);
		bool L_86;
		L_86 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_85, _stringLiteral89337E2EE35A3C198227FBA81922CE5F0C58D97F, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_87 = L_85;
		NullCheck(L_87);
		bool L_88;
		L_88 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_87, _stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_89 = L_87;
		NullCheck(L_89);
		bool L_90;
		L_90 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_89, _stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_91 = L_89;
		NullCheck(L_91);
		bool L_92;
		L_92 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_91, _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_93 = L_91;
		NullCheck(L_93);
		bool L_94;
		L_94 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_93, _stringLiteralCEBC2707039661BD61D98F991B27F2B9CB160373, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_95 = L_93;
		NullCheck(L_95);
		bool L_96;
		L_96 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_95, _stringLiteral33F3CCC8C96B52CBA9D88D899779B6191CE15B79, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_97 = L_95;
		NullCheck(L_97);
		bool L_98;
		L_98 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_97, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_99 = L_97;
		NullCheck(L_99);
		bool L_100;
		L_100 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_99, _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_101 = L_99;
		NullCheck(L_101);
		bool L_102;
		L_102 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_101, _stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_103 = L_101;
		NullCheck(L_103);
		bool L_104;
		L_104 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_103, _stringLiteral9C48C24D4BF1ED95579220DFFA96B8E7E7AB87E0, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_105 = L_103;
		NullCheck(L_105);
		bool L_106;
		L_106 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_105, _stringLiteralDEF7342DCBF4F4F80F2C4D42F5991B8E851510BD, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_107 = L_105;
		NullCheck(L_107);
		bool L_108;
		L_108 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_107, _stringLiteral8940E1FEA4EBF3CA20C44768AA93531C62B71B4A, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_109 = L_107;
		NullCheck(L_109);
		bool L_110;
		L_110 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_109, _stringLiteral6A7C5B87AC840B649D5115CC2F065246EA1D14D2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_111 = L_109;
		NullCheck(L_111);
		bool L_112;
		L_112 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_111, _stringLiteral286CC02C1E7ED462D7D2D31546D5144F88661A2F, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_113 = L_111;
		NullCheck(L_113);
		bool L_114;
		L_114 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_113, _stringLiteral934962903D946CC131DF8E5E4E575453098EEF43, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_115 = L_113;
		NullCheck(L_115);
		bool L_116;
		L_116 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_115, _stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_117 = L_115;
		NullCheck(L_117);
		bool L_118;
		L_118 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_117, _stringLiteral5CAD421923F0F10D02AFE6EA17ED4E929131E356, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_119 = L_117;
		NullCheck(L_119);
		bool L_120;
		L_120 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_119, _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_121 = L_119;
		NullCheck(L_121);
		bool L_122;
		L_122 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_121, _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_123 = L_121;
		NullCheck(L_123);
		bool L_124;
		L_124 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_123, _stringLiteral83882E2E410B213AB2B2289E29DC55945FAD39F3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_125 = L_123;
		NullCheck(L_125);
		bool L_126;
		L_126 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_125, _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_127 = L_125;
		NullCheck(L_127);
		bool L_128;
		L_128 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_127, _stringLiteralBB95AED94347EEEE80FE2B58CC6819F8D88029C9, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_129 = L_127;
		NullCheck(L_129);
		bool L_130;
		L_130 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_129, _stringLiteralC94CA552630B8AC1ADF21BAF5252FC9092E4DDDC, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_131 = L_129;
		NullCheck(L_131);
		bool L_132;
		L_132 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_131, _stringLiteral1A9F773AF09A196B0A76B00E4B47084B3EA86D59, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_133 = L_131;
		NullCheck(L_133);
		bool L_134;
		L_134 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_133, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_135 = L_133;
		NullCheck(L_135);
		bool L_136;
		L_136 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_135, _stringLiteral766E767D6A87AB03C7C3410F3665A93D03D6E9FA, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_137 = L_135;
		NullCheck(L_137);
		bool L_138;
		L_138 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_137, _stringLiteral679D068D573133B9C7C465FC6CF9C9D07B531421, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_139 = L_137;
		NullCheck(L_139);
		bool L_140;
		L_140 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_139, _stringLiteralD525221FF38EAF1A30491622A0B39D5D960A7815, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_141 = L_139;
		NullCheck(L_141);
		bool L_142;
		L_142 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_141, _stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_143 = L_141;
		NullCheck(L_143);
		bool L_144;
		L_144 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_143, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_145 = L_143;
		NullCheck(L_145);
		bool L_146;
		L_146 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_145, _stringLiteral0CEBF7DFA17440E9873C47A2C1BE712F98DFA500, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_147 = L_145;
		NullCheck(L_147);
		bool L_148;
		L_148 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_147, _stringLiteralECC5FBBC8E0BED3B8718D6E2160AD386C9CEC212, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_149 = L_147;
		NullCheck(L_149);
		bool L_150;
		L_150 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_149, _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_151 = L_149;
		NullCheck(L_151);
		bool L_152;
		L_152 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_151, _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_153 = L_151;
		NullCheck(L_153);
		bool L_154;
		L_154 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_153, _stringLiteral0CE918CF589A0B3A3BDB90F0F98BCC43CDF6169E, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_155 = L_153;
		NullCheck(L_155);
		bool L_156;
		L_156 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_155, _stringLiteral61C6D968B7FE88D4B8A63934DD5685C362457520, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_157 = L_155;
		NullCheck(L_157);
		bool L_158;
		L_158 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_157, _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_159 = L_157;
		NullCheck(L_159);
		bool L_160;
		L_160 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_159, _stringLiteralE5B7FB5BFBF1CF60857A40FCA10F830CC619AE16, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_161 = L_159;
		NullCheck(L_161);
		bool L_162;
		L_162 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_161, _stringLiteral1A9F773AF09A196B0A76B00E4B47084B3EA86D59, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_163 = L_161;
		NullCheck(L_163);
		bool L_164;
		L_164 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_163, _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_165 = L_163;
		NullCheck(L_165);
		bool L_166;
		L_166 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_165, _stringLiteral8C1D304CED4C13075109A2D82DE6D8D24A9E3678, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_167 = L_165;
		NullCheck(L_167);
		bool L_168;
		L_168 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_167, _stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_169 = L_167;
		NullCheck(L_169);
		bool L_170;
		L_170 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_169, _stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_171 = L_169;
		NullCheck(L_171);
		bool L_172;
		L_172 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_171, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_173 = L_171;
		NullCheck(L_173);
		bool L_174;
		L_174 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_173, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_175 = L_173;
		NullCheck(L_175);
		bool L_176;
		L_176 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_175, _stringLiteral581430FB5E2AB80389A430804CEF0F2382806766, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___ReservedCSharpKeywords_12 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___ReservedCSharpKeywords_12), (void*)L_175);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_177 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_177);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_177, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_178 = L_177;
		NullCheck(L_178);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_178, _stringLiteralE895F499BC653C0CA36FB31C5936FC768CAD263E, _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_179 = L_178;
		NullCheck(L_179);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_179, _stringLiteralF13E4BFF086D4E511E68B0617B76ACC5BD5AFFE7, _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_180 = L_179;
		NullCheck(L_180);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_180, _stringLiteral6FA4C59C48F20F657EA95225B529B162ECF44EAB, _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_181 = L_180;
		NullCheck(L_181);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_181, _stringLiteral979BEF74EBFAB7697A86533A10926355727B6C8A, _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_182 = L_181;
		NullCheck(L_182);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_182, _stringLiteralDB47297909F3BD6EDB8AD67A8511975233214355, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_183 = L_182;
		NullCheck(L_183);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_183, _stringLiteralB7E7D625DFBC9C92FA0449D5E3E0BE263DECD0EA, _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_184 = L_183;
		NullCheck(L_184);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_184, _stringLiteral072BA90B274B502615639084DC3D7FCC63407A24, _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_185 = L_184;
		NullCheck(L_185);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_185, _stringLiteral3680357E36BF098D58315A89BD03F078921BEFD9, _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_186 = L_185;
		NullCheck(L_186);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_186, _stringLiteralB12933F4DC58820F9722BDF423F448FD91C0EE8A, _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_187 = L_186;
		NullCheck(L_187);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_187, _stringLiteralBF45CADC16AD267EA891B4231D162B68FDED748D, _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_188 = L_187;
		NullCheck(L_188);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_188, _stringLiteral5B41A58E45555854EC2026B9B5F8243AA9E7ED4B, _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_189 = L_188;
		NullCheck(L_189);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_189, _stringLiteralBCA7DDD073AD5DB21CC612ADB1833BF1A5D32261, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_190 = L_189;
		NullCheck(L_190);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_190, _stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E, _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_191 = L_190;
		NullCheck(L_191);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_191, _stringLiteral6C8C975CC62CF419550282B028FB7E3A1F591D06, _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_192 = L_191;
		NullCheck(L_192);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_192, _stringLiteral21F6FFBE5C595684B2E59EF3E0B83D1172BFA69E, _stringLiteralC5A553F3851704DFEED79230EBCEC65739012BE7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_193 = L_192;
		NullCheck(L_193);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_193, _stringLiteral0D78A3ACF08834A8208E9C1EAB783D9E372B0E45, _stringLiteral1C50918CD5619BDE9BDBED1D23983EEBAD065B57, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_194 = L_193;
		NullCheck(L_194);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_194, _stringLiteral370CFD53E33E4EFE27924264F033C97807D3B553, _stringLiteral8DFF4CFCB48843FA0B74F54FD72D6C945EF41953, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_195 = L_194;
		NullCheck(L_195);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_195, _stringLiteral36F26CE56BFC86CF905B1202DB5A7633261FCA47, _stringLiteral99201352CB96CC1C32BEF52CD271CF53199FF8DD, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_196 = L_195;
		NullCheck(L_196);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_196, _stringLiteral6D8FF8DB7E82CED1C565F940C532A5A2BB643CEF, _stringLiteral7C3D0F99DF1B534F06138C8CCF9638478F3E6499, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_197 = L_196;
		NullCheck(L_197);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_197, _stringLiteral532311522446D888867656699DB97A234896ECE0, _stringLiteralCF55DB7CA65AEC3E52A69DAAA96E4F262E80D577, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_198 = L_197;
		NullCheck(L_198);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_198, _stringLiteral8C231B3C1DD723D0564B3FC078E20657B6C821C7, _stringLiteral6A86BA126A7E3A6780C81DFDC4654EEDA711D881, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_199 = L_198;
		NullCheck(L_199);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_199, _stringLiteralBEADF129C0FBE570705EB6183DA8896AF1EE36DD, _stringLiteralD268E825BBBA4A484453E18A5BE5FA70EF65968B, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_200 = L_199;
		NullCheck(L_200);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_200, _stringLiteralD88EC033DEAF162C44E191CE77B510F07AACCDA5, _stringLiteral77BB4FFDFB178041A1B27761291B83B0B4D9CC03, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_201 = L_200;
		NullCheck(L_201);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_201, _stringLiteralA971E6F33BE8C290E391DA92D49C7B1309E3795D, _stringLiteral8BD5428D0D7693EA23B9301AD08C2C5147DFE422, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_202 = L_201;
		NullCheck(L_202);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_202, _stringLiteralE2D76D817C414EEA0C84FDF21336CF360167A6FC, _stringLiteralA9C6E7553EC8AA085F5FDB9F92B7707363BED95D, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_203 = L_202;
		NullCheck(L_203);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_203, _stringLiteralFCBCF9082006C7AAA99359786D794609E8CEEE89, _stringLiteralE6916006B378403522431CD9C96E6052573CE96F, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_204 = L_203;
		NullCheck(L_204);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_204, _stringLiteral2E4441B58AEC6A28560FB3E17B198D20AEFBD3D7, _stringLiteral2D308A3610717843215FF698C5DC2B84ABDC6705, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_205 = L_204;
		NullCheck(L_205);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_205, _stringLiteral6A3D04F009CE456B611375CDCB93697F9F93314B, _stringLiteral43C759A2427665422C3C60545704071B53161510, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___TypeNameAlternatives_13 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___TypeNameAlternatives_13), (void*)L_205);
		RuntimeObject* L_206 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_206);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_206, NULL);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___CachedNiceNames_LOCK_14 = L_206;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___CachedNiceNames_LOCK_14), (void*)L_206);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_207 = (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*)il2cpp_codegen_object_new(Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var);
		NullCheck(L_207);
		Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6(L_207, Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___CachedNiceNames_15 = L_207;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___CachedNiceNames_15), (void*)L_207);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_208 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		Type_t* L_209;
		L_209 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_208, NULL);
		NullCheck(L_209);
		Type_t* L_210;
		L_210 = VirtualFuncInvoker0< Type_t* >::Invoke(125 /* System.Type System.Type::MakePointerType() */, L_209);
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___VoidPointerType_16 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___VoidPointerType_16), (void*)L_210);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_211 = (Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929*)il2cpp_codegen_object_new(Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929_il2cpp_TypeInfo_var);
		NullCheck(L_211);
		Dictionary_2__ctor_m0205CA2DDC8935364EA764C0B7C811D6515A1E36(L_211, Dictionary_2__ctor_m0205CA2DDC8935364EA764C0B7C811D6515A1E36_RuntimeMethod_var);
		V_0 = L_211;
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_212 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_213 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_214;
		L_214 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_213, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_215 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_215);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_215, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_215;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_216 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_217 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_218;
		L_218 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_217, NULL);
		NullCheck(L_216);
		bool L_219;
		L_219 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_216, L_218, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_220 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		NullCheck(L_220);
		bool L_223;
		L_223 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_220, L_222, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_224 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_225 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_226;
		L_226 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_225, NULL);
		NullCheck(L_224);
		bool L_227;
		L_227 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_224, L_226, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_228 = V_1;
		NullCheck(L_212);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_212, L_214, L_228, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_229 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_230 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_231;
		L_231 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_230, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_232 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_232);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_232, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_232;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_233 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_234 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_235;
		L_235 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_234, NULL);
		NullCheck(L_233);
		bool L_236;
		L_236 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_233, L_235, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_237 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_238 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_239;
		L_239 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_238, NULL);
		NullCheck(L_237);
		bool L_240;
		L_240 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_237, L_239, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_241 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		NullCheck(L_241);
		bool L_244;
		L_244 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_241, L_243, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_245 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_246 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_247;
		L_247 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_246, NULL);
		NullCheck(L_245);
		bool L_248;
		L_248 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_245, L_247, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_249 = V_1;
		NullCheck(L_229);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_229, L_231, L_249, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_250 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_251 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_252;
		L_252 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_251, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_253 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_253);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_253, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_253;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_254 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		NullCheck(L_254);
		bool L_257;
		L_257 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_254, L_256, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_258 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_259 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_260;
		L_260 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_259, NULL);
		NullCheck(L_258);
		bool L_261;
		L_261 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_258, L_260, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_262 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_263 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_264;
		L_264 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_263, NULL);
		NullCheck(L_262);
		bool L_265;
		L_265 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_262, L_264, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_266 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_267 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_268;
		L_268 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_267, NULL);
		NullCheck(L_266);
		bool L_269;
		L_269 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_266, L_268, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_270 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_271 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_272;
		L_272 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_271, NULL);
		NullCheck(L_270);
		bool L_273;
		L_273 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_270, L_272, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_274 = V_1;
		NullCheck(L_250);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_250, L_252, L_274, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_275 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_276 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_277;
		L_277 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_276, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_278 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_278);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_278, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_278;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_279 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_280 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_281;
		L_281 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_280, NULL);
		NullCheck(L_279);
		bool L_282;
		L_282 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_279, L_281, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_283 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_284 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_285;
		L_285 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_284, NULL);
		NullCheck(L_283);
		bool L_286;
		L_286 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_283, L_285, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_287 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_288 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_289;
		L_289 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_288, NULL);
		NullCheck(L_287);
		bool L_290;
		L_290 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_287, L_289, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_291 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_292 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_293;
		L_293 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_292, NULL);
		NullCheck(L_291);
		bool L_294;
		L_294 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_291, L_293, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_295 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_296 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_297;
		L_297 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_296, NULL);
		NullCheck(L_295);
		bool L_298;
		L_298 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_295, L_297, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_299 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_300 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_301;
		L_301 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_300, NULL);
		NullCheck(L_299);
		bool L_302;
		L_302 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_299, L_301, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_303 = V_1;
		NullCheck(L_275);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_275, L_277, L_303, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_304 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_305 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_306;
		L_306 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_305, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_307 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_307);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_307, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_307;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_308 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_309 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_310;
		L_310 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_309, NULL);
		NullCheck(L_308);
		bool L_311;
		L_311 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_308, L_310, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_312 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_313 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_314;
		L_314 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_313, NULL);
		NullCheck(L_312);
		bool L_315;
		L_315 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_312, L_314, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_316 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_317 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_318;
		L_318 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_317, NULL);
		NullCheck(L_316);
		bool L_319;
		L_319 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_316, L_318, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_320 = V_1;
		NullCheck(L_304);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_304, L_306, L_320, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_321 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_322 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_323;
		L_323 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_322, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_324 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_324);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_324, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_324;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_325 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_326 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_327;
		L_327 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_326, NULL);
		NullCheck(L_325);
		bool L_328;
		L_328 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_325, L_327, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_329 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		NullCheck(L_329);
		bool L_332;
		L_332 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_329, L_331, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_333 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		NullCheck(L_333);
		bool L_336;
		L_336 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_333, L_335, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_337 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_338 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_339;
		L_339 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_338, NULL);
		NullCheck(L_337);
		bool L_340;
		L_340 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_337, L_339, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_341 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_342 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_343;
		L_343 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_342, NULL);
		NullCheck(L_341);
		bool L_344;
		L_344 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_341, L_343, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_345 = V_1;
		NullCheck(L_321);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_321, L_323, L_345, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_346 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_347 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_348;
		L_348 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_347, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_349 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_349);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_349, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_349;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_350 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_351 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_352;
		L_352 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_351, NULL);
		NullCheck(L_350);
		bool L_353;
		L_353 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_350, L_352, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_354 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_355 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_356;
		L_356 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_355, NULL);
		NullCheck(L_354);
		bool L_357;
		L_357 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_354, L_356, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_358 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_359 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_360;
		L_360 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_359, NULL);
		NullCheck(L_358);
		bool L_361;
		L_361 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_358, L_360, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_362 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_363 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_364;
		L_364 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_363, NULL);
		NullCheck(L_362);
		bool L_365;
		L_365 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_362, L_364, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_366 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_367 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_368;
		L_368 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_367, NULL);
		NullCheck(L_366);
		bool L_369;
		L_369 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_366, L_368, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_370 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_371 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_372;
		L_372 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_371, NULL);
		NullCheck(L_370);
		bool L_373;
		L_373 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_370, L_372, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_374 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_375 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_376;
		L_376 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_375, NULL);
		NullCheck(L_374);
		bool L_377;
		L_377 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_374, L_376, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_378 = V_1;
		NullCheck(L_346);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_346, L_348, L_378, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_379 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_380 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_381;
		L_381 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_380, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_382 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_382);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_382, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_382;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_383 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_384 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_385;
		L_385 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_384, NULL);
		NullCheck(L_383);
		bool L_386;
		L_386 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_383, L_385, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_387 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_388 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_389;
		L_389 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_388, NULL);
		NullCheck(L_387);
		bool L_390;
		L_390 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_387, L_389, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_391 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_392 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_393;
		L_393 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_392, NULL);
		NullCheck(L_391);
		bool L_394;
		L_394 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_391, L_393, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_395 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_396 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_397;
		L_397 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_396, NULL);
		NullCheck(L_395);
		bool L_398;
		L_398 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_395, L_397, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_399 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_400 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_401;
		L_401 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_400, NULL);
		NullCheck(L_399);
		bool L_402;
		L_402 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_399, L_401, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_403 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_404 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_405;
		L_405 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_404, NULL);
		NullCheck(L_403);
		bool L_406;
		L_406 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_403, L_405, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_407 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_408 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_409;
		L_409 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_408, NULL);
		NullCheck(L_407);
		bool L_410;
		L_410 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_407, L_409, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_411 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_412 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_413;
		L_413 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_412, NULL);
		NullCheck(L_411);
		bool L_414;
		L_414 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_411, L_413, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_415 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_416 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_417;
		L_417 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_416, NULL);
		NullCheck(L_415);
		bool L_418;
		L_418 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_415, L_417, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_419 = V_1;
		NullCheck(L_379);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_379, L_381, L_419, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_420 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_421 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_422;
		L_422 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_421, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_423 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_423);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_423, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_423;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_424 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_425 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_426;
		L_426 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_425, NULL);
		NullCheck(L_424);
		bool L_427;
		L_427 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_424, L_426, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_428 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_429 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_430;
		L_430 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_429, NULL);
		NullCheck(L_428);
		bool L_431;
		L_431 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_428, L_430, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_432 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_433 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_434;
		L_434 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_433, NULL);
		NullCheck(L_432);
		bool L_435;
		L_435 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_432, L_434, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_436 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_437 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_438;
		L_438 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_437, NULL);
		NullCheck(L_436);
		bool L_439;
		L_439 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_436, L_438, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_440 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_441 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_442;
		L_442 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_441, NULL);
		NullCheck(L_440);
		bool L_443;
		L_443 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_440, L_442, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_444 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_445 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_446;
		L_446 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_445, NULL);
		NullCheck(L_444);
		bool L_447;
		L_447 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_444, L_446, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_448 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_449 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_450;
		L_450 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_449, NULL);
		NullCheck(L_448);
		bool L_451;
		L_451 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_448, L_450, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_452 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_453 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_454;
		L_454 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_453, NULL);
		NullCheck(L_452);
		bool L_455;
		L_455 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_452, L_454, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_456 = V_1;
		NullCheck(L_420);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_420, L_422, L_456, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_457 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_458 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_459;
		L_459 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_458, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_460 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_460);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_460, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		NullCheck(L_457);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_457, L_459, L_460, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_461 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_462 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_463;
		L_463 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_462, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_464 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_464);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_464, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		NullCheck(L_461);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_461, L_463, L_464, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_465 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_466 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_467;
		L_467 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_466, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_468 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_468);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_468, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_468;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_469 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_470 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_471;
		L_471 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_470, NULL);
		NullCheck(L_469);
		bool L_472;
		L_472 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_469, L_471, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_473 = V_1;
		NullCheck(L_465);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_465, L_467, L_473, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_474 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_475 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_476;
		L_476 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_475, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_477 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_477);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_477, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		NullCheck(L_474);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_474, L_476, L_477, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_478 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_479 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		Type_t* L_480;
		L_480 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_479, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_481 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_481);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_481, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		NullCheck(L_478);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_478, L_480, L_481, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_482 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_483 = { reinterpret_cast<intptr_t> (UIntPtr_t_0_0_0_var) };
		Type_t* L_484;
		L_484 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_483, NULL);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_485 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_485);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_485, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		NullCheck(L_482);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_482, L_484, L_485, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_486 = V_0;
		Type_t* L_487 = ((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___VoidPointerType_16;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_488 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_488);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_488, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		NullCheck(L_486);
		Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3(L_486, L_487, L_488, Dictionary_2_Add_mDC847127842C3F794D536CF58EF6CA5DAC98A9A3_RuntimeMethod_var);
		Dictionary_2_tD901EC1C0BD4CF7EFE99A174D1F5018E2EC19929* L_489 = V_0;
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___PrimitiveImplicitCasts_17 = L_489;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___PrimitiveImplicitCasts_17), (void*)L_489);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_490 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_490);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_490, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		V_1 = L_490;
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_491 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_492 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_493;
		L_493 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_492, NULL);
		NullCheck(L_491);
		bool L_494;
		L_494 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_491, L_493, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_495 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_496 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_497;
		L_497 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_496, NULL);
		NullCheck(L_495);
		bool L_498;
		L_498 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_495, L_497, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_499 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_500 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_501;
		L_501 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_500, NULL);
		NullCheck(L_499);
		bool L_502;
		L_502 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_499, L_501, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_503 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_504 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_505;
		L_505 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_504, NULL);
		NullCheck(L_503);
		bool L_506;
		L_506 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_503, L_505, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_507 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_508 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_509;
		L_509 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_508, NULL);
		NullCheck(L_507);
		bool L_510;
		L_510 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_507, L_509, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_511 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		NullCheck(L_511);
		bool L_514;
		L_514 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_511, L_513, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_515 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_516 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_517;
		L_517 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_516, NULL);
		NullCheck(L_515);
		bool L_518;
		L_518 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_515, L_517, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_519 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_520 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_521;
		L_521 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_520, NULL);
		NullCheck(L_519);
		bool L_522;
		L_522 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_519, L_521, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_523 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_524 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_525;
		L_525 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_524, NULL);
		NullCheck(L_523);
		bool L_526;
		L_526 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_523, L_525, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_527 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_528 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_529;
		L_529 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_528, NULL);
		NullCheck(L_527);
		bool L_530;
		L_530 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_527, L_529, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_531 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_532 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_533;
		L_533 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_532, NULL);
		NullCheck(L_531);
		bool L_534;
		L_534 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_531, L_533, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_535 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_536 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_537;
		L_537 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_536, NULL);
		NullCheck(L_535);
		bool L_538;
		L_538 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_535, L_537, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_539 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_540 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		Type_t* L_541;
		L_541 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_540, NULL);
		NullCheck(L_539);
		bool L_542;
		L_542 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_539, L_541, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_543 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_544 = { reinterpret_cast<intptr_t> (UIntPtr_t_0_0_0_var) };
		Type_t* L_545;
		L_545 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_544, NULL);
		NullCheck(L_543);
		bool L_546;
		L_546 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_543, L_545, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_547 = V_1;
		((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___ExplicitCastIntegrals_18 = L_547;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var))->___ExplicitCastIntegrals_18), (void*)L_547);
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mD7449A332EF1223915014834C96A731F81A9D9DB (U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass26_0::<GetCastMethodDelegate>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass26_0_U3CGetCastMethodDelegateU3Eb__0_m75269A6F7FC80A9CE6B6CAD4E7CD09E8E931E004 (U3CU3Ec__DisplayClass26_0_tA670895A2CC547055D84D9D8057D43A645D85871* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = __this->___method_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, NULL, L_2, NULL);
		return L_4;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass39_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0__ctor_mEBC7B16B8CFFFCAF19FF511AC52088084D6941AC (U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass39_0::<GetOperatorMethod>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass39_0_U3CGetOperatorMethodU3Eb__0_mA393C191CB9E8C63D354B95E7E6F98EE63C65613 (U3CU3Ec__DisplayClass39_0_t107793B0CB907B3109B1163392A5F55B32782E1F* __this, MethodInfo_t* ___m0, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->___methodName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_m7831EB2C4F652473B652F350DC54AFCBA038B891 (U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass40_0::<GetOperatorMethods>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass40_0_U3CGetOperatorMethodsU3Eb__0_mDF2C9BFF7BA798E168BACD087EF14B656980E9BA (U3CU3Ec__DisplayClass40_0_tA7A91759820FF58CC51D453AF7BA2C7E70E17FDD* __this, MethodInfo_t* ___x0, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->___methodName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__41__ctor_mF5AFE6D49F13AF415CAA8501540FD68BEDBAB665 (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___U3CU3El__initialThreadId_2 = L_2;
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__41_System_IDisposable_Dispose_m82F0E09534D8FAE8FC2DF31B520B5F95C283ACAA (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__41_MoveNext_mE55EBE635AEAB6C380245B06033E4A043C3893E3 (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MemberInfo_t* V_1 = NULL;
	MemberInfo_t* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00f4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Type_t* L_2 = __this->___type_3;
		__this->___U3CcurrentTypeU3E5__1_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentTypeU3E5__1_7), (void*)L_2);
		int32_t L_3 = __this->___flags_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_3&2))) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		Type_t* L_4 = __this->___U3CcurrentTypeU3E5__1_7;
		int32_t L_5 = __this->___flags_5;
		NullCheck(L_4);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_6;
		L_6 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(93 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_4, L_5);
		__this->___U3CU3E7__wrap1_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_8), (void*)L_6);
		__this->___U3CU3E7__wrap2_9 = 0;
		goto IL_008c;
	}

IL_0059:
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_7 = __this->___U3CU3E7__wrap1_8;
		int32_t L_8 = __this->___U3CU3E7__wrap2_9;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MemberInfo_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		MemberInfo_t* L_11 = V_1;
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_12 = __this->___U3CU3E7__wrap2_9;
		__this->___U3CU3E7__wrap2_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008c:
	{
		int32_t L_13 = __this->___U3CU3E7__wrap2_9;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_14 = __this->___U3CU3E7__wrap1_8;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0059;
		}
	}
	{
		__this->___U3CU3E7__wrap1_8 = (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_8), (void*)(MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL);
		goto IL_013c;
	}

IL_00a8:
	{
		int32_t L_15 = __this->___flags_5;
		__this->___flags_5 = ((int32_t)((int32_t)L_15|2));
	}

IL_00b6:
	{
		Type_t* L_16 = __this->___U3CcurrentTypeU3E5__1_7;
		int32_t L_17 = __this->___flags_5;
		NullCheck(L_16);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_18;
		L_18 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(93 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_16, L_17);
		__this->___U3CU3E7__wrap1_8 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_8), (void*)L_18);
		__this->___U3CU3E7__wrap2_9 = 0;
		goto IL_0109;
	}

IL_00d6:
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_19 = __this->___U3CU3E7__wrap1_8;
		int32_t L_20 = __this->___U3CU3E7__wrap2_9;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MemberInfo_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		MemberInfo_t* L_23 = V_2;
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00f4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_24 = __this->___U3CU3E7__wrap2_9;
		__this->___U3CU3E7__wrap2_9 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0109:
	{
		int32_t L_25 = __this->___U3CU3E7__wrap2_9;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_26 = __this->___U3CU3E7__wrap1_8;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_00d6;
		}
	}
	{
		__this->___U3CU3E7__wrap1_8 = (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_8), (void*)(MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL);
		Type_t* L_27 = __this->___U3CcurrentTypeU3E5__1_7;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_27);
		__this->___U3CcurrentTypeU3E5__1_7 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentTypeU3E5__1_7), (void*)L_28);
		Type_t* L_29 = __this->___U3CcurrentTypeU3E5__1_7;
		if (L_29)
		{
			goto IL_00b6;
		}
	}

IL_013c:
	{
		return (bool)0;
	}
}
// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* U3CGetAllMembersU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_mEE1CF672DFCEDF653495B254B99DDADE05D9E9F1 (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__41_System_Collections_IEnumerator_Reset_mF20BF9402687D9916F1D2881724CEC1E707D348B (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllMembersU3Ed__41_System_Collections_IEnumerator_Reset_mF20BF9402687D9916F1D2881724CEC1E707D348B_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__41_System_Collections_IEnumerator_get_Current_m286B2D9AFD5580EFF9BEE91748467CBA04D8CB27 (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__41_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_mEB7B9DE5F262081A4B0FDDC04A5C8AA2A60C3F3B (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* L_4 = (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD*)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CGetAllMembersU3Ed__41__ctor_mF5AFE6D49F13AF415CAA8501540FD68BEDBAB665(L_4, 0, NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* L_5 = V_0;
		Type_t* L_6 = __this->___U3CU3E3__type_4;
		NullCheck(L_5);
		L_5->___type_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___type_3), (void*)L_6);
		U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* L_7 = V_0;
		int32_t L_8 = __this->___U3CU3E3__flags_6;
		NullCheck(L_7);
		L_7->___flags_5 = L_8;
		U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__41::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__41_System_Collections_IEnumerable_GetEnumerator_mF9C10CD00F34D01CE7B4D741EEF408E16DE2497E (U3CGetAllMembersU3Ed__41_t2F631404E88C8ECC93F875F68BAC61D827E884BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllMembersU3Ed__41_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_mEB7B9DE5F262081A4B0FDDC04A5C8AA2A60C3F3B(__this, NULL);
		return L_0;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42__ctor_mB3D1A62F734B8D3286E8D9532724757B78A8FE34 (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___U3CU3El__initialThreadId_2 = L_2;
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42_System_IDisposable_Dispose_m302A8F39BDCC85BE0202DA3704A183CF815CB80C (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetAllMembersU3Ed__42_U3CU3Em__Finally1_m20668C62FF9E0482D2E290455C3ED292F4B2ADA7(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__42_MoveNext_m5D08E3748D76D3108BEF2A8AF46FBA3FAE5725D0 (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MemberInfo_t* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0099:
			{// begin fault (depth: 1)
				U3CGetAllMembersU3Ed__42_System_IDisposable_Dispose_m302A8F39BDCC85BE0202DA3704A183CF815CB80C(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0073_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a0;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				Type_t* L_3 = __this->___type_3;
				int32_t L_4 = __this->___flags_5;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				RuntimeObject* L_5;
				L_5 = TypeExtensions_GetAllMembers_mEB91F0825655A28B9FF2E3AC7B481A9B8A01F40D(L_3, L_4, NULL);
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_9 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_9), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_007b_1;
			}

IL_0042_1:
			{
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_9;
				NullCheck(L_7);
				MemberInfo_t* L_8;
				L_8 = InterfaceFuncInvoker0< MemberInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				MemberInfo_t* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
				String_t* L_11 = __this->___name_7;
				bool L_12;
				L_12 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, L_11, NULL);
				if (L_12)
				{
					goto IL_007b_1;
				}
			}
			{
				MemberInfo_t* L_13 = V_2;
				__this->___U3CU3E2__current_1 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00a0;
			}

IL_0073_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_007b_1:
			{
				RuntimeObject* L_14 = __this->___U3CU3E7__wrap1_9;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0042_1;
				}
			}
			{
				U3CGetAllMembersU3Ed__42_U3CU3Em__Finally1_m20668C62FF9E0482D2E290455C3ED292F4B2ADA7(__this, NULL);
				__this->___U3CU3E7__wrap1_9 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_9), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42_U3CU3Em__Finally1_m20668C62FF9E0482D2E290455C3ED292F4B2ADA7 (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_9;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_9;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_m7CD917649F6C752EDC9E598B3507A8F5C2F938DA (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_Reset_mA148AA5B9980AF00EB5359D0EDC8B98EE349FFC9 (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_Reset_mA148AA5B9980AF00EB5359D0EDC8B98EE349FFC9_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__42_System_Collections_IEnumerator_get_Current_mC051A6870083AACA9CB882BEBF7F7D709A13D48F (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m88F987D199CF8814F3DCD17182A267E3165C7FB3 (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_4 = (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45*)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CGetAllMembersU3Ed__42__ctor_mB3D1A62F734B8D3286E8D9532724757B78A8FE34(L_4, 0, NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_5 = V_0;
		Type_t* L_6 = __this->___U3CU3E3__type_4;
		NullCheck(L_5);
		L_5->___type_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___type_3), (void*)L_6);
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_7 = V_0;
		String_t* L_8 = __this->___U3CU3E3__name_8;
		NullCheck(L_7);
		L_7->___name_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___name_7), (void*)L_8);
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_9 = V_0;
		int32_t L_10 = __this->___U3CU3E3__flags_6;
		NullCheck(L_9);
		L_9->___flags_5 = L_10;
		U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__42::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__42_System_Collections_IEnumerable_GetEnumerator_m01FF71FDF2A5F054772DC2AD86928F58DA2D060D (U3CGetAllMembersU3Ed__42_t1DE60542066CEA357170FAA69AA8A95DB51EFA45* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllMembersU3Ed__42_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m88F987D199CF8814F3DCD17182A267E3165C7FB3(__this, NULL);
		return L_0;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__47__ctor_m0607598FFE900A081E6CBC87CDE433EE2294E82B (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___U3CU3El__initialThreadId_2 = L_2;
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__47_System_IDisposable_Dispose_m9A28F6B93A54847EB713B80F8056777715C6FC88 (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetBaseClassesU3Ed__47_MoveNext_mB2BA4A435CBC36063BD06F506660EF2440853CF0 (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0085;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Type_t* L_2 = __this->___type_3;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		Type_t* L_3 = __this->___type_3;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_3);
		if (L_4)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return (bool)0;
	}

IL_0039:
	{
		bool L_5 = __this->___includeSelf_5;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		Type_t* L_6 = __this->___type_3;
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0056:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005d:
	{
		Type_t* L_7 = __this->___type_3;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_7);
		__this->___U3CcurrentU3E5__1_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__1_7), (void*)L_8);
		goto IL_009d;
	}

IL_0070:
	{
		Type_t* L_9 = __this->___U3CcurrentU3E5__1_7;
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0085:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Type_t* L_10 = __this->___U3CcurrentU3E5__1_7;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(114 /* System.Type System.Type::get_BaseType() */, L_10);
		__this->___U3CcurrentU3E5__1_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__1_7), (void*)L_11);
	}

IL_009d:
	{
		Type_t* L_12 = __this->___U3CcurrentU3E5__1_7;
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}
}
// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::System.Collections.Generic.IEnumerator<System.Type>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CGetBaseClassesU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_mA53D2ABA01BA01CC29A28E14F6AD7B857E810C23 (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__47_System_Collections_IEnumerator_Reset_mF766808CA430AC3F07A72758DE650BBEACD44306 (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetBaseClassesU3Ed__47_System_Collections_IEnumerator_Reset_mF766808CA430AC3F07A72758DE650BBEACD44306_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__47_System_Collections_IEnumerator_get_Current_mCB73067783E03C4071BE903CDACF953A697A70CB (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__47_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mA63A6C0B6163F13F2E21670DBAD45ABE2FDDA824 (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* L_4 = (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817*)il2cpp_codegen_object_new(U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CGetBaseClassesU3Ed__47__ctor_m0607598FFE900A081E6CBC87CDE433EE2294E82B(L_4, 0, NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* L_5 = V_0;
		Type_t* L_6 = __this->___U3CU3E3__type_4;
		NullCheck(L_5);
		L_5->___type_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___type_3), (void*)L_6);
		U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* L_7 = V_0;
		bool L_8 = __this->___U3CU3E3__includeSelf_6;
		NullCheck(L_7);
		L_7->___includeSelf_5 = L_8;
		U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__47::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__47_System_Collections_IEnumerable_GetEnumerator_m5D32E2ADD1705F588F03971049CFAAB006FDD55A (U3CGetBaseClassesU3Ed__47_tDAF491B55344665FDC5448281541B2B4C2652817* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetBaseClassesU3Ed__47_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mA63A6C0B6163F13F2E21670DBAD45ABE2FDDA824(__this, NULL);
		return L_0;
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
// System.Void Sirenix.Serialization.Utilities.UnityExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityExtensions__cctor_m296D38516B48AEE4616EB09E5AAABDB28DE639AE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		FieldInfo_t* L_2;
		L_2 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(88 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1, ((int32_t)52));
		V_0 = L_2;
		FieldInfo_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		FieldInfo_t* L_4 = V_0;
		ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* L_5;
		L_5 = EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90(L_4, EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90_RuntimeMethod_var);
		((UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0), (void*)L_5);
	}

IL_0025:
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.UnityExtensions::SafeIsUnityNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityExtensions_SafeIsUnityNull_m6E7C9703117460205E46C387FFECFB514480246A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}

IL_0005:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var);
		ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* L_1 = ((UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB27BC2DBD9E4582303E95015D30F8DB415DB3D4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityExtensions_SafeIsUnityNull_m6E7C9703117460205E46C387FFECFB514480246A_RuntimeMethod_var)));
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var);
		ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* L_3 = ((UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = ValueGetter_2_Invoke_m3398DBC4F65272B44F2BB361E081532DBB87116C_inline(L_3, (&___obj0), NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_5, L_6, NULL);
		return L_7;
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
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_Multicast(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* currentDelegate = reinterpret_cast<WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instance0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenInst(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	NullCheck(___instance0);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___instance0, method);
}
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenStatic(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___instance0, method);
}
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenStaticInvoker(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, ___instance0);
}
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_ClosedStaticInvoker(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instance0);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter__ctor_m1A26FA25BC25A32D1775B6E4CB03D9429B707EEF (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_Multicast;
}
// System.Object Sirenix.Serialization.Utilities.WeakValueGetter::Invoke(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202 (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instance0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Sirenix.Serialization.Utilities.WeakValueGetter::BeginInvoke(System.Object&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_BeginInvoke_mAAB495801A7CA3E3E1343BB07F4CF12489D7FCCB (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = *___instance0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object Sirenix.Serialization.Utilities.WeakValueGetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_EndInvoke_m93A96CB80D83B1A2F8255C10E68DA6EF5814C538 (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___instance0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_Multicast(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* currentDelegate = reinterpret_cast<WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instance0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenInst(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	NullCheck(___instance0);
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instance0, ___value1, method);
}
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenStatic(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instance0, ___value1, method);
}
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenStaticInvoker(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject**, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___instance0, ___value1);
}
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_ClosedStaticInvoker(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject**, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instance0, ___value1);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter__ctor_m625DC041A75E241CE1D7C8099550A37CACED2D34 (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_Multicast;
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter::Invoke(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instance0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Sirenix.Serialization.Utilities.WeakValueSetter::BeginInvoke(System.Object&,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueSetter_BeginInvoke_m72CDD76B20BBC3767F8B377EA8BBFF0BA59E40BE (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = *___instance0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_EndInvoke_m6AF313A78005B761B958FE40447537F0ADA11A6C (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___instance0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Sirenix.Serialization.Utilities.EmitUtilities::get_CanEmit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmitUtilities_get_CanEmit_m68C101B0002E10980F429FD2FF576533CC1F515F (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Func`1<System.Object> Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakStaticFieldGetter(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* EmitUtilities_CreateWeakStaticFieldGetter_m07C96A50F111398BA38F66E039F184D7FAEC44D4 (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m46246E138B8CBB96D56664110220DA07A8A0F3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* L_0 = (U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mEB1102BAA604D62A8CF3861EB268525984A4AC4B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* L_1 = V_0;
		FieldInfo_t* L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldGetter_m07C96A50F111398BA38F66E039F184D7FAEC44D4_RuntimeMethod_var)));
	}

IL_0020:
	{
		U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* L_6 = V_0;
		NullCheck(L_6);
		FieldInfo_t* L_7 = L_6->___fieldInfo_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_7, NULL);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldGetter_m07C96A50F111398BA38F66E039F184D7FAEC44D4_RuntimeMethod_var)));
	}

IL_0038:
	{
		U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* L_10 = V_0;
		U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* L_11 = V_0;
		NullCheck(L_11);
		FieldInfo_t* L_12 = L_11->___fieldInfo_0;
		FieldInfo_t* L_13;
		L_13 = FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72(L_12, (bool)0, NULL);
		NullCheck(L_10);
		L_10->___fieldInfo_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___fieldInfo_0), (void*)L_13);
		U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* L_14 = V_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_15 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m46246E138B8CBB96D56664110220DA07A8A0F3C0_RuntimeMethod_var), NULL);
		return L_15;
	}
}
// System.Action`1<System.Object> Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakStaticFieldSetter(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* EmitUtilities_CreateWeakStaticFieldSetter_m8FC8005D5D10F68D7C5C0096B5F9BCCAA2A04F7A (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldSetterU3Eb__0_mD568367A9CD4D3C64F9E0A392B1FB41A5C43A3C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_0 = (U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m03328FB084A7D3CBB8FB6EED127A3DC54A0EF544(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_1 = V_0;
		FieldInfo_t* L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldSetter_m8FC8005D5D10F68D7C5C0096B5F9BCCAA2A04F7A_RuntimeMethod_var)));
	}

IL_0020:
	{
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_6 = V_0;
		NullCheck(L_6);
		FieldInfo_t* L_7 = L_6->___fieldInfo_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_7, NULL);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldSetter_m8FC8005D5D10F68D7C5C0096B5F9BCCAA2A04F7A_RuntimeMethod_var)));
	}

IL_0038:
	{
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_10 = V_0;
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_11 = V_0;
		NullCheck(L_11);
		FieldInfo_t* L_12 = L_11->___fieldInfo_0;
		FieldInfo_t* L_13;
		L_13 = FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72(L_12, (bool)0, NULL);
		NullCheck(L_10);
		L_10->___fieldInfo_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___fieldInfo_0), (void*)L_13);
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_14 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldSetterU3Eb__0_mD568367A9CD4D3C64F9E0A392B1FB41A5C43A3C7_RuntimeMethod_var), NULL);
		return L_15;
	}
}
// Sirenix.Serialization.Utilities.WeakValueGetter Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstanceFieldGetter(System.Type,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B (Type_t* ___instanceType0, FieldInfo_t* ___fieldInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m97200AEA6BDF8CCEB20BDA70F0F136277CE33997_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* L_0 = (U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m998FD226EB6F1D5317F9E86D69C59FDD02EAC23A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* L_1 = V_0;
		FieldInfo_t* L_2 = ___fieldInfo1;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B_RuntimeMethod_var)));
	}

IL_0020:
	{
		Type_t* L_6 = ___instanceType0;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B_RuntimeMethod_var)));
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* L_8 = V_0;
		NullCheck(L_8);
		FieldInfo_t* L_9 = L_8->___fieldInfo_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_9, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B_RuntimeMethod_var)));
	}

IL_0046:
	{
		U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* L_12 = V_0;
		U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* L_13 = V_0;
		NullCheck(L_13);
		FieldInfo_t* L_14 = L_13->___fieldInfo_0;
		FieldInfo_t* L_15;
		L_15 = FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72(L_14, (bool)0, NULL);
		NullCheck(L_12);
		L_12->___fieldInfo_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___fieldInfo_0), (void*)L_15);
		U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* L_16 = V_0;
		WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* L_17 = (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3*)il2cpp_codegen_object_new(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WeakValueGetter__ctor_m1A26FA25BC25A32D1775B6E4CB03D9429B707EEF(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m97200AEA6BDF8CCEB20BDA70F0F136277CE33997_RuntimeMethod_var), NULL);
		return L_17;
	}
}
// Sirenix.Serialization.Utilities.WeakValueSetter Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstanceFieldSetter(System.Type,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C (Type_t* ___instanceType0, FieldInfo_t* ___fieldInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_m80F5E0B869526535E26D3A7A16C237DAAB351748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* L_0 = (U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_m42ACAD81DE123D60B9039CDD2F94790F489A9BAB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* L_1 = V_0;
		FieldInfo_t* L_2 = ___fieldInfo1;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C_RuntimeMethod_var)));
	}

IL_0020:
	{
		Type_t* L_6 = ___instanceType0;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C_RuntimeMethod_var)));
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* L_8 = V_0;
		NullCheck(L_8);
		FieldInfo_t* L_9 = L_8->___fieldInfo_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_9, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C_RuntimeMethod_var)));
	}

IL_0046:
	{
		U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* L_12 = V_0;
		U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* L_13 = V_0;
		NullCheck(L_13);
		FieldInfo_t* L_14 = L_13->___fieldInfo_0;
		FieldInfo_t* L_15;
		L_15 = FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72(L_14, (bool)0, NULL);
		NullCheck(L_12);
		L_12->___fieldInfo_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___fieldInfo_0), (void*)L_15);
		U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* L_16 = V_0;
		WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* L_17 = (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65*)il2cpp_codegen_object_new(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WeakValueSetter__ctor_m625DC041A75E241CE1D7C8099550A37CACED2D34(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_m80F5E0B869526535E26D3A7A16C237DAAB351748_RuntimeMethod_var), NULL);
		return L_17;
	}
}
// Sirenix.Serialization.Utilities.WeakValueGetter Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstancePropertyGetter(System.Type,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB (Type_t* ___instanceType0, PropertyInfo_t* ___propertyInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_mCD4AA4540DD151461327DCB9B0AB329798E4A335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* L_0 = (U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m690C6120213140ADC0786DFDCD00CA42AB3201CA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* L_1 = V_0;
		PropertyInfo_t* L_2 = ___propertyInfo1;
		NullCheck(L_1);
		L_1->___propertyInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* L_3 = V_0;
		NullCheck(L_3);
		PropertyInfo_t* L_4 = L_3->___propertyInfo_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_0020:
	{
		Type_t* L_6 = ___instanceType0;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* L_8 = V_0;
		U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* L_9 = V_0;
		NullCheck(L_9);
		PropertyInfo_t* L_10 = L_9->___propertyInfo_0;
		PropertyInfo_t* L_11;
		L_11 = PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE(L_10, (bool)0, NULL);
		NullCheck(L_8);
		L_8->___propertyInfo_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___propertyInfo_0), (void*)L_11);
		U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* L_12 = V_0;
		NullCheck(L_12);
		PropertyInfo_t* L_13 = L_12->___propertyInfo_0;
		NullCheck(L_13);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_14;
		L_14 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_13);
		NullCheck(L_14);
		if (!(((RuntimeArray*)L_14)->max_length))
		{
			goto IL_0059;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_0059:
	{
		U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* L_16 = V_0;
		NullCheck(L_16);
		PropertyInfo_t* L_17 = L_16->___propertyInfo_0;
		NullCheck(L_17);
		MethodInfo_t* L_18;
		L_18 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_17, (bool)1);
		V_1 = L_18;
		MethodInfo_t* L_19 = V_1;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85E9CE6AD4896D7DAC7FD63267FC79467CB4862F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_0074:
	{
		MethodInfo_t* L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_21, NULL);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_0087:
	{
		U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* L_24 = V_0;
		WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* L_25 = (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3*)il2cpp_codegen_object_new(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WeakValueGetter__ctor_m1A26FA25BC25A32D1775B6E4CB03D9429B707EEF(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_mCD4AA4540DD151461327DCB9B0AB329798E4A335_RuntimeMethod_var), NULL);
		return L_25;
	}
}
// Sirenix.Serialization.Utilities.WeakValueSetter Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstancePropertySetter(System.Type,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327 (Type_t* ___instanceType0, PropertyInfo_t* ___propertyInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m77C3D8039446DAC83B52D894CA305C5BF455EB56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_0 = (U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m803DDE9F6B05AD81CBD934E9D207B7D3B72AB808(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_1 = V_0;
		PropertyInfo_t* L_2 = ___propertyInfo1;
		NullCheck(L_1);
		L_1->___propertyInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_3 = V_0;
		NullCheck(L_3);
		PropertyInfo_t* L_4 = L_3->___propertyInfo_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var)));
	}

IL_0020:
	{
		Type_t* L_6 = ___instanceType0;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var)));
	}

IL_002e:
	{
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_8 = V_0;
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_9 = V_0;
		NullCheck(L_9);
		PropertyInfo_t* L_10 = L_9->___propertyInfo_0;
		PropertyInfo_t* L_11;
		L_11 = PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE(L_10, (bool)0, NULL);
		NullCheck(L_8);
		L_8->___propertyInfo_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___propertyInfo_0), (void*)L_11);
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_12 = V_0;
		NullCheck(L_12);
		PropertyInfo_t* L_13 = L_12->___propertyInfo_0;
		NullCheck(L_13);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_14;
		L_14 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_13);
		NullCheck(L_14);
		if (!(((RuntimeArray*)L_14)->max_length))
		{
			goto IL_0059;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var)));
	}

IL_0059:
	{
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_16 = V_0;
		NullCheck(L_16);
		PropertyInfo_t* L_17 = L_16->___propertyInfo_0;
		NullCheck(L_17);
		MethodInfo_t* L_18;
		L_18 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(25 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_17, (bool)1);
		V_1 = L_18;
		MethodInfo_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_19, NULL);
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var)));
	}

IL_0079:
	{
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_22 = V_0;
		WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* L_23 = (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65*)il2cpp_codegen_object_new(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WeakValueSetter__ctor_m625DC041A75E241CE1D7C8099550A37CACED2D34(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m77C3D8039446DAC83B52D894CA305C5BF455EB56_RuntimeMethod_var), NULL);
		return L_23;
	}
}
// System.Action Sirenix.Serialization.Utilities.EmitUtilities::CreateStaticMethodCaller(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24 (MethodInfo_t* ___methodInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___methodInfo0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24_RuntimeMethod_var)));
	}

IL_000e:
	{
		MethodInfo_t* L_2 = ___methodInfo0;
		NullCheck(L_2);
		bool L_3;
		L_3 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_2, NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		MethodInfo_t* L_4 = ___methodInfo0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22363B2DA57DE0197C3DC04546321A605E3FFE02)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24_RuntimeMethod_var)));
	}

IL_0031:
	{
		MethodInfo_t* L_8 = ___methodInfo0;
		NullCheck(L_8);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9;
		L_9 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_8);
		NullCheck(L_9);
		if (!(((RuntimeArray*)L_9)->max_length))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24_RuntimeMethod_var)));
	}

IL_0045:
	{
		MethodInfo_t* L_11 = ___methodInfo0;
		MethodInfo_t* L_12;
		L_12 = MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9(L_11, (bool)0, NULL);
		___methodInfo0 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		MethodInfo_t* L_15 = ___methodInfo0;
		Delegate_t* L_16;
		L_16 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_14, L_15, NULL);
		return ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_16, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
	}
}
// System.Action`1<System.Object> Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstanceMethodCaller(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC (MethodInfo_t* ___methodInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m93082FC04A79F990C18D146BF1B8FE5B2776A757_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_0 = (U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_m9D31EF15ED9FDEE6A59872E73423373F5886D937(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_1 = V_0;
		MethodInfo_t* L_2 = ___methodInfo0;
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___methodInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_3 = V_0;
		NullCheck(L_3);
		MethodInfo_t* L_4 = L_3->___methodInfo_0;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC_RuntimeMethod_var)));
	}

IL_0020:
	{
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_6 = V_0;
		NullCheck(L_6);
		MethodInfo_t* L_7 = L_6->___methodInfo_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_7, NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_9 = V_0;
		NullCheck(L_9);
		MethodInfo_t* L_10 = L_9->___methodInfo_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079)), L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90A683BBF1FEB32AEC0B5DED0CC88DD136FC5CE7)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC_RuntimeMethod_var)));
	}

IL_004d:
	{
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_14 = V_0;
		NullCheck(L_14);
		MethodInfo_t* L_15 = L_14->___methodInfo_0;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_15);
		NullCheck(L_16);
		if (!(((RuntimeArray*)L_16)->max_length))
		{
			goto IL_0066;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC_RuntimeMethod_var)));
	}

IL_0066:
	{
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_18 = V_0;
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_19 = V_0;
		NullCheck(L_19);
		MethodInfo_t* L_20 = L_19->___methodInfo_0;
		MethodInfo_t* L_21;
		L_21 = MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9(L_20, (bool)0, NULL);
		NullCheck(L_18);
		L_18->___methodInfo_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___methodInfo_0), (void*)L_21);
		U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* L_22 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m93082FC04A79F990C18D146BF1B8FE5B2776A757_RuntimeMethod_var), NULL);
		return L_23;
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mEB1102BAA604D62A8CF3861EB268525984A4AC4B (U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass3_0::<CreateWeakStaticFieldGetter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass3_0_U3CCreateWeakStaticFieldGetterU3Eb__0_m46246E138B8CBB96D56664110220DA07A8A0F3C0 (U3CU3Ec__DisplayClass3_0_t22640A3FD18E25365312F402FC4DB6C1873E1A06* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, NULL);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m03328FB084A7D3CBB8FB6EED127A3DC54A0EF544 (U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0::<CreateWeakStaticFieldSetter>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldSetterU3Eb__0_mD568367A9CD4D3C64F9E0A392B1FB41A5C43A3C7 (U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, NULL, L_1, NULL);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m998FD226EB6F1D5317F9E86D69C59FDD02EAC23A (U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass8_0::<CreateWeakInstanceFieldGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass8_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m97200AEA6BDF8CCEB20BDA70F0F136277CE33997 (U3CU3Ec__DisplayClass8_0_t146DA5F3D4AD9BB839EC2A0DABB8AE975208A543* __this, RuntimeObject** ___classInstance0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject** L_1 = ___classInstance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_2);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m42ACAD81DE123D60B9039CDD2F94790F489A9BAB (U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass11_0::<CreateWeakInstanceFieldSetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_m80F5E0B869526535E26D3A7A16C237DAAB351748 (U3CU3Ec__DisplayClass11_0_t4824759E20EC47D37990707FC7F895945F414901* __this, RuntimeObject** ___classInstance0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject** L_1 = ___classInstance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		RuntimeObject* L_3 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, L_2, L_3, NULL);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m690C6120213140ADC0786DFDCD00CA42AB3201CA (U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass12_0::<CreateWeakInstancePropertyGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass12_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_mCD4AA4540DD151461327DCB9B0AB329798E4A335 (U3CU3Ec__DisplayClass12_0_tB7CB537F82E1975B67D3272EB56BA6B78DC7D980* __this, RuntimeObject** ___classInstance0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___propertyInfo_0;
		RuntimeObject** L_1 = ___classInstance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(26 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_0, L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m803DDE9F6B05AD81CBD934E9D207B7D3B72AB808 (U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0::<CreateWeakInstancePropertySetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m77C3D8039446DAC83B52D894CA305C5BF455EB56 (U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* __this, RuntimeObject** ___classInstance0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___propertyInfo_0;
		RuntimeObject** L_1 = ___classInstance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		RuntimeObject* L_3 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(28 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_0, L_2, L_3, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m9D31EF15ED9FDEE6A59872E73423373F5886D937 (U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass21_0::<CreateWeakInstanceMethodCaller>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m93082FC04A79F990C18D146BF1B8FE5B2776A757 (U3CU3Ec__DisplayClass21_0_t291F70013CDC835A68080D92631A048E9DA9F37B* __this, RuntimeObject* ___classInstance0, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___methodInfo_0;
		RuntimeObject* L_1 = ___classInstance0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_1, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
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
// System.Boolean Sirenix.Serialization.Utilities.FastTypeComparer::Equals(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastTypeComparer_Equals_m4DD380AA88301E1313D3A25DCF166FFA3D52EF45 (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* __this, Type_t* ___x0, Type_t* ___y1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___x0;
		Type_t* L_1 = ___y1;
		if ((!(((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Type_t* L_2 = ___x0;
		Type_t* L_3 = ___y1;
		return (bool)((((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))? 1 : 0);
	}
}
// System.Int32 Sirenix.Serialization.Utilities.FastTypeComparer::GetHashCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastTypeComparer_GetHashCode_m849BA595C40F2017EDD043A0DB7DCD0CABCD3EF6 (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* __this, Type_t* ___obj0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Sirenix.Serialization.Utilities.FastTypeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__ctor_m96FDA0B2719EF764A2336C02F7A2CF573EA4C26B (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.FastTypeComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__cctor_m209448F65F511827ED78ABEB809407D1122FF771 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* L_0 = (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE*)il2cpp_codegen_object_new(FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FastTypeComparer__ctor_m96FDA0B2719EF764A2336C02F7A2CF573EA4C26B(L_0, NULL);
		((FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_StaticFields*)il2cpp_codegen_static_fields_for(FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_StaticFields*)il2cpp_codegen_static_fields_for(FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Serialization.Utilities.ImmutableList::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList__ctor_mCE912BFBB1722C1AECB7EDDB307E79CB64C73889 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___innerList0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___innerList0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18BBD42CCE9B175CCD6F5CA37762D740A0B5A5C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList__ctor_mCE912BFBB1722C1AECB7EDDB307E79CB64C73889_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___innerList0;
		__this->___innerList_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerList_0), (void*)L_2);
		return;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.ImmutableList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_get_Count_m7828BFD4F85A8442277A0501E7DCD99F91725ED4 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsFixedSize_m7FD0FC09A5D0FCAE8E50208040A4F491EDBF5788 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsReadOnly_m0FA34035647E2539F3157FCF0012EABBED98E1C6 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsSynchronized_mFB865BD5A2665BB0A517911510A5E38415BA9771 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_get_SyncRoot_m0CB0BED1C67BFAD5B7784D412B962C9875129038 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_IList_get_Item_m17EA78D79692747BE77D8B0D54A761E725CD07A5 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_set_Item_m630BA6436B91738C6891612A49B9DE607B7E3D0D (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_set_Item_m630BA6436B91738C6891612A49B9DE607B7E3D0D_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_get_Item_mB3F270642CF194A7189B3DC1BA435E256B18F5C7 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_m53DE8B16CE1ACD252E902C383F6ECB241E8D6FAF (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_m53DE8B16CE1ACD252E902C383F6ECB241E8D6FAF_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_get_Item_mFC0B7C19E77911CFF8438541F039879934843B63 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_Contains_mE28C6C42022673857E3A8028514651CF9D6B5F33 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::CopyTo(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_CopyTo_mEF23193C9393D293C38A8277763BEEA69940E7F6 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, (RuntimeArray*)L_1, L_2);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_CopyTo_mCBC0388686CC6C9E7B0E1FAF717923B2A06C4602 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.ImmutableList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_GetEnumerator_m5516440CC191369757EE85F2988C6224060663FD (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_IEnumerable_GetEnumerator_mBAA59B9C9A3481A48F54180FDF091EBA6B393C8D (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ImmutableList_GetEnumerator_m5516440CC191369757EE85F2988C6224060663FD(__this, NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m111F5CA6EF8550A6B475DB353DFD0072488B767C (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* L_0 = (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15*)il2cpp_codegen_object_new(U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mADF4798474AFAAAF22F526DB3789B94746AEC7A0(L_0, 0, NULL);
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_System_Collections_IList_Add_m5F336C9204CD98F21F7168A844DD7F219146A7ED (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Add_m5F336C9204CD98F21F7168A844DD7F219146A7ED_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Clear_m11BA43CD0772AD9CE5D71A5EC8500D04DF020EDE (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Clear_m11BA43CD0772AD9CE5D71A5EC8500D04DF020EDE_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Insert_m7E0CFAD102C4BED8BEF7F2E642DC07A8D73E654C (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Insert_m7E0CFAD102C4BED8BEF7F2E642DC07A8D73E654C_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Remove_m266092BA6380A1A595D503B415E43B0AD3C5E6EB (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Remove_m266092BA6380A1A595D503B415E43B0AD3C5E6EB_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_RemoveAt_m913C2F47C5B8B4FF044B61544E0CA3C486C07CC3 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_RemoveAt_m913C2F47C5B8B4FF044B61544E0CA3C486C07CC3_RuntimeMethod_var)));
	}
}
// System.Int32 Sirenix.Serialization.Utilities.ImmutableList::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_IndexOf_m9639B1DA370C09763887CE1E52B5E97BB0299562 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_mDC7138036F1240939E1F79DCE246044A4247CA98 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_mDC7138036F1240939E1F79DCE246044A4247CA98_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m120F4089F7A721670196CA1C703F7CA58060C017 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m120F4089F7A721670196CA1C703F7CA58060C017_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_mE968971AB6E9A412FDB6E90869E5CA8E5ACFDB50 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_mE968971AB6E9A412FDB6E90869E5CA8E5ACFDB50_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_m15AB187D9728A51EACB6E2E44B5D0B6E26009359 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_m15AB187D9728A51EACB6E2E44B5D0B6E26009359_RuntimeMethod_var)));
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m28F8A42114DE24FC6C34ED9D59F4044FF2F1CF30 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m28F8A42114DE24FC6C34ED9D59F4044FF2F1CF30_RuntimeMethod_var)));
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
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mADF4798474AFAAAF22F526DB3789B94746AEC7A0 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m32BE744D1FF1B9C0E511C6A37DCEE82A14E3CA77 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m1AFA84BE50CB992E494E23FE6A5978DB421F552B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_MoveNext_mC73EED533DB47F0D085F342EE47D069CE0635E9F (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_007f:
			{// begin fault (depth: 1)
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m32BE744D1FF1B9C0E511C6A37DCEE82A14E3CA77(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0086;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = L_4->___innerList_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				RuntimeObject* L_9 = V_3;
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0086;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0061_1:
			{
				RuntimeObject* L_10 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m1AFA84BE50CB992E494E23FE6A5978DB421F552B(__this, NULL);
				__this->___U3CU3E7__wrap1_3 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m1AFA84BE50CB992E494E23FE6A5978DB421F552B (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_3;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD86C11DD70AAE6D35B814AE61CECBBD5B0602263 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m84E0417231B60237F9966B732EA3B2F31536F54D (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m84E0417231B60237F9966B732EA3B2F31536F54D_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_get_Current_m72668B9740B67F6EB92C0D5495E99A4AE178207D (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Sirenix.Serialization.Utilities.MemberAliasFieldInfo::.ctor(System.Reflection.FieldInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo__ctor_mCB9C05B9C2293EDB24E8436D2E3F0697FE0F0B02 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, FieldInfo_t* ___field0, String_t* ___namePrefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F(__this, NULL);
		FieldInfo_t* L_0 = ___field0;
		__this->___aliasedField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedField_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		FieldInfo_t* L_2 = __this->___aliasedField_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasFieldInfo::.ctor(System.Reflection.FieldInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo__ctor_m20039287489493AF511593AA95D8A10A78C3D1E4 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, FieldInfo_t* ___field0, String_t* ___namePrefix1, String_t* ___separatorString2, const RuntimeMethod* method) 
{
	{
		FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F(__this, NULL);
		FieldInfo_t* L_0 = ___field0;
		__this->___aliasedField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedField_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		String_t* L_2 = ___separatorString2;
		FieldInfo_t* L_3 = __this->___aliasedField_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		return;
	}
}
// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_AliasedField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* MemberAliasFieldInfo_get_AliasedField_mD5DE35FBCA9EBBF8164EC578CDE3E4FCA88889CF (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		return L_0;
	}
}
// System.Reflection.Module Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_Module()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* MemberAliasFieldInfo_get_Module_m551572B9253F550AC44460F47AE7B6BD5373AE64 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* L_1;
		L_1 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* >::Invoke(11 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_0);
		return L_1;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_MetadataToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasFieldInfo_get_MetadataToken_m44EF00F7AAFA566C00AA9461CD9DF3EE5251691A (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_0);
		return L_1;
	}
}
// System.String Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasFieldInfo_get_Name_m68B29D87B16B5867543DD2D7DEC40E51564172A1 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_DeclaringType_mFB0D953603CD26525592FB585664ECF8EE35DF0E (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_ReflectedType_mB9ACE0708FDFBED4DB3A83C4852A3B9DF5BE5CD0 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_FieldType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_FieldType_m336B84E7D02EA4CDA415B3BC8C9C02993C8834CA (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_0);
		return L_1;
	}
}
// System.RuntimeFieldHandle Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_FieldHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 MemberAliasFieldInfo_get_FieldHandle_m314EBDB56AFCF5561CF318CA77026103A5F0DFBD (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_1;
		L_1 = VirtualFuncInvoker0< RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 >::Invoke(24 /* System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle() */, L_0);
		return L_1;
	}
}
// System.Reflection.FieldAttributes Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasFieldInfo_get_Attributes_m8CAFD1D8B1E8992A8C1E728A9FF1CE944AB10773 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasFieldInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasFieldInfo_GetCustomAttributes_m661DD5E88FF744737902AB7A0E7CB6E10C0AF249 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		bool L_1 = ___inherit0;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasFieldInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasFieldInfo_GetCustomAttributes_mD822ADDF91AE4FC43BEBBDBB660B12B3431FBCEB (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasFieldInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasFieldInfo_IsDefined_mA4233BE131924606F4C1DA7F38A60358A4D654BC (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Object Sirenix.Serialization.Utilities.MemberAliasFieldInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasFieldInfo_GetValue_m43B8E140281F3E57360001D21DDBCEC8708F59F5 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasFieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo_SetValue_mE758D6D1F9EF239DD43547651933E5303B8269C0 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, int32_t ___invokeAttr2, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		RuntimeObject* L_1 = ___obj0;
		RuntimeObject* L_2 = ___value1;
		int32_t L_3 = ___invokeAttr2;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_4 = ___binder3;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___culture4;
		NullCheck(L_0);
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(27 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
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
// System.Void Sirenix.Serialization.Utilities.MemberAliasMethodInfo::.ctor(System.Reflection.MethodInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasMethodInfo__ctor_mCA59A1100CC964CDA0625D20C497E6999FE83134 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, MethodInfo_t* ___method0, String_t* ___namePrefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B(__this, NULL);
		MethodInfo_t* L_0 = ___method0;
		__this->___aliasedMethod_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedMethod_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		MethodInfo_t* L_2 = __this->___aliasedMethod_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasMethodInfo::.ctor(System.Reflection.MethodInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasMethodInfo__ctor_mE3B05932400C0D2B6B9DC81C4CEBB0192555807B (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, MethodInfo_t* ___method0, String_t* ___namePrefix1, String_t* ___separatorString2, const RuntimeMethod* method) 
{
	{
		MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B(__this, NULL);
		MethodInfo_t* L_0 = ___method0;
		__this->___aliasedMethod_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedMethod_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		String_t* L_2 = ___separatorString2;
		MethodInfo_t* L_3 = __this->___aliasedMethod_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		return;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_AliasedMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasMethodInfo_get_AliasedMethod_mE6D71392C2BF6D6E8DEB276007EEC701E50BA6FB (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		return L_0;
	}
}
// System.Reflection.ICustomAttributeProvider Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_ReturnTypeCustomAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasMethodInfo_get_ReturnTypeCustomAttributes_m28BC353A550C394BB0C66784385669942CB7284C (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(45 /* System.Reflection.ICustomAttributeProvider System.Reflection.MethodInfo::get_ReturnTypeCustomAttributes() */, L_0);
		return L_1;
	}
}
// System.RuntimeMethodHandle Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_MethodHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 MemberAliasMethodInfo_get_MethodHandle_m6F6D96D0A4DE1E592BE5459ECAD7C8D993FE190F (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1;
		L_1 = VirtualFuncInvoker0< RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 >::Invoke(33 /* System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodAttributes Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasMethodInfo_get_Attributes_m480788A419382792719523A038381BD4758115B3 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_ReturnType_m8166C37E9BB530C0EDDBF42BF066E8562E618CC9 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(41 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_DeclaringType_mD833DC51CD1E9FF9965865941947734480707AF7 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.String Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasMethodInfo_get_Name_mA22598842CE369187194DC6E58FE53166246C637 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_ReflectedType_m4EB95F3FA641CCBE5FA416EE7ED6A6F340F6EDE6 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetBaseDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasMethodInfo_GetBaseDefinition_m634B30ECA3AF1630D185402E84AE797671932670 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(44 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_0);
		return L_1;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasMethodInfo_GetCustomAttributes_mD671B84DBE79A97BC2AABEA8CD1822C9E6C33DED (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		bool L_1 = ___inherit0;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasMethodInfo_GetCustomAttributes_mB27C6ED016F9E733AB9171DFEBBC0224817F14B1 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.MethodImplAttributes Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetMethodImplementationFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasMethodInfo_GetMethodImplementationFlags_mD7D0BB3F16A0D4D9281981EE007FF96EE07BC033 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.MethodImplAttributes System.Reflection.MethodBase::GetMethodImplementationFlags() */, L_0);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* MemberAliasMethodInfo_GetParameters_m9FEE47545B8E171945C25E47D4C6465FA0420F61 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		return L_1;
	}
}
// System.Object Sirenix.Serialization.Utilities.MemberAliasMethodInfo::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasMethodInfo_Invoke_mF14F5A56A3D05B70CE547EEA5970935DDEEC803A (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, RuntimeObject* ___obj0, int32_t ___invokeAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		RuntimeObject* L_1 = ___obj0;
		int32_t L_2 = ___invokeAttr1;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_3 = ___binder2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___parameters3;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___culture4;
		NullCheck(L_0);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(32 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasMethodInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasMethodInfo_IsDefined_mBCD31AFC3488C28E0D21544B5F4A0F3D39468AFF (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::.ctor(System.Reflection.PropertyInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo__ctor_m1F431189698DA5CCAF178803346125DE042EF7FD (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, PropertyInfo_t* ___prop0, String_t* ___namePrefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138(__this, NULL);
		PropertyInfo_t* L_0 = ___prop0;
		__this->___aliasedProperty_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedProperty_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		PropertyInfo_t* L_2 = __this->___aliasedProperty_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::.ctor(System.Reflection.PropertyInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo__ctor_m45CF1372243CD4F9FC8419FB1B00DC67E63EC4BA (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, PropertyInfo_t* ___prop0, String_t* ___namePrefix1, String_t* ___separatorString2, const RuntimeMethod* method) 
{
	{
		PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138(__this, NULL);
		PropertyInfo_t* L_0 = ___prop0;
		__this->___aliasedProperty_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedProperty_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		String_t* L_2 = ___separatorString2;
		PropertyInfo_t* L_3 = __this->___aliasedProperty_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		return;
	}
}
// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_AliasedProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* MemberAliasPropertyInfo_get_AliasedProperty_m641D01DDC45E3CB59762B653EAC3982678D3CB30 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		return L_0;
	}
}
// System.Reflection.Module Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_Module()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* MemberAliasPropertyInfo_get_Module_m6456A7C4EB9A9337EC6A618B8B8834ED0815D543 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* L_1;
		L_1 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* >::Invoke(11 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_0);
		return L_1;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_MetadataToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasPropertyInfo_get_MetadataToken_m00733A20AD94BF25DCA5ABCA2463750A5B41240D (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_0);
		return L_1;
	}
}
// System.String Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasPropertyInfo_get_Name_m8478561E15AA8793D5CE305C80AE102664058856 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_DeclaringType_m5EE64491B0C6FFEF0D65C00665515855C41FF510 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_ReflectedType_m6BE6A78981C3245E8D55DC42B209674006C8007E (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_PropertyType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_PropertyType_m6BDE48A5C4CDD238AE14D44D6D819E215E1DA93F (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_0);
		return L_1;
	}
}
// System.Reflection.PropertyAttributes Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasPropertyInfo_get_Attributes_m5C724055200D676BF9A56958CBF5699C91AAD48E (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_get_CanRead_mD5EA4A48BB3E4001A129C2B43271A611DAFE950B (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_get_CanWrite_m50AD61E70943222228B857C3983B632B47A9A41C (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasPropertyInfo_GetCustomAttributes_m949A7675A4879D26F731DAF7254420797EAFE7FB (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___inherit0;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasPropertyInfo_GetCustomAttributes_mD8EB32BD818620C2B99296F8FC47DC752FFF6F6D (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_IsDefined_m6067E404CF645FC7F10FF837203693FC8B45E5CB (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.MethodInfo[] Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetAccessors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* MemberAliasPropertyInfo_GetAccessors_m1D4142704FB37B90E21027CCC9C7014FFF88BF67 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, bool ___nonPublic0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___nonPublic0;
		NullCheck(L_0);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, bool >::Invoke(21 /* System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetGetMethod(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasPropertyInfo_GetGetMethod_mE61D727EEAF419D9320C9B06159BA8FFDAB6C082 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, bool ___nonPublic0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___nonPublic0;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.ParameterInfo[] Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetIndexParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* MemberAliasPropertyInfo_GetIndexParameters_m3EB47949BEFF17E00B959E919471049143FBCC1F (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetSetMethod(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasPropertyInfo_GetSetMethod_mA8B76946F16615A8F1943496E01F99CFEE184AE4 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, bool ___nonPublic0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___nonPublic0;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(25 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasPropertyInfo_GetValue_m26BCB43F2743C43620BCBB6771B015121D72F2A7 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, RuntimeObject* ___obj0, int32_t ___invokeAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___index3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		RuntimeObject* L_1 = ___obj0;
		int32_t L_2 = ___invokeAttr1;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_3 = ___binder2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___index3;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___culture4;
		NullCheck(L_0);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo_SetValue_mDF6AEF28785C28E301B8C0F3B76B5FC11ADC84B8 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, int32_t ___invokeAttr2, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___index4, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture5, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		RuntimeObject* L_1 = ___obj0;
		RuntimeObject* L_2 = ___value1;
		int32_t L_3 = ___invokeAttr2;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_4 = ___binder3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___index4;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = ___culture5;
		NullCheck(L_0);
		VirtualActionInvoker6< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
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
// System.Void Sirenix.Serialization.Utilities.UnityVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion__cctor_mA00556508979E501FCD11C98462FC44DAAF6B595 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		V_0 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5;
		L_5 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59, L_5, _stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_0036:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_9, (&((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Major_0), NULL);
		if (L_10)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19;
		L_19 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		String_t* L_21;
		L_21 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
	}

IL_007b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		bool L_25;
		L_25 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_24, (&((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Minor_1), NULL);
		if (L_25)
		{
			goto IL_00c0;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 1;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		String_t* L_34;
		L_34 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_33;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		String_t* L_36;
		L_36 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_36, NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.UnityVersion::EnsureLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion_EnsureLoaded_m7D800CCD41FE93C89A43BDE35B778DCDE79425DD (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.UnityVersion::IsVersionOrGreater(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVersion_IsVersionOrGreater_m7A0F0616FBD246D9B118F5E2CA1298CBA6E30181 (int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Major_0;
		int32_t L_1 = ___major0;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		int32_t L_2 = ((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Major_0;
		int32_t L_3 = ___major0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		int32_t L_4 = ((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Minor_1;
		int32_t L_5 = ___minor1;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
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
// System.String Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities::StringFromBytes(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtilities_StringFromBytes_m577D384ECCC0DAD912AF0A7410AA8BA412BB09C4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___charLength1, bool ___needs16BitSupport2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	uint16_t* V_6 = NULL;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Il2CppChar* V_9 = NULL;
	String_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	Il2CppChar* V_14 = NULL;
	String_t* V_15 = NULL;
	uint8_t* V_16 = NULL;
	uint8_t* V_17 = NULL;
	int32_t V_18 = 0;
	Il2CppChar* V_19 = NULL;
	String_t* V_20 = NULL;
	uint8_t* V_21 = NULL;
	uint8_t* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___needs16BitSupport2;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___charLength1;
		G_B3_0 = L_1;
		goto IL_0009;
	}

IL_0006:
	{
		int32_t L_2 = ___charLength1;
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
	}

IL_0009:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_StringFromBytes_m577D384ECCC0DAD912AF0A7410AA8BA412BB09C4_RuntimeMethod_var)));
	}

IL_002b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		int32_t L_10 = ___charLength1;
		String_t* L_11;
		L_11 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, 0, L_10, NULL);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01ba:
			{// begin finally (depth: 1)
				{
					bool L_12;
					L_12 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_12)
					{
						goto IL_01ca;
					}
				}
				{
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_01ca:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___buffer0;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14;
				L_14 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_13, 3, NULL);
				V_1 = L_14;
				bool L_15 = ___needs16BitSupport2;
				if (!L_15)
				{
					goto IL_0102_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_16 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_16)
				{
					goto IL_00a0_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009c_1:
					{// begin finally (depth: 2)
						V_4 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_17 = V_2;
						V_4 = L_17;
						String_t* L_18 = V_4;
						V_3 = (Il2CppChar*)((intptr_t)L_18);
						Il2CppChar* L_19 = V_3;
						if (!L_19)
						{
							goto IL_0062_2;
						}
					}
					{
						Il2CppChar* L_20 = V_3;
						int32_t L_21;
						L_21 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, L_21));
					}

IL_0062_2:
					{
						intptr_t L_22;
						L_22 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_22;
						void* L_23;
						L_23 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_5 = (uint16_t*)L_23;
						Il2CppChar* L_24 = V_3;
						V_6 = (uint16_t*)L_24;
						V_8 = 0;
						goto IL_0092_2;
					}

IL_007c_2:
					{
						uint16_t* L_25 = V_6;
						uint16_t* L_26 = L_25;
						V_6 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
						uint16_t* L_27 = V_5;
						uint16_t* L_28 = L_27;
						V_5 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_28, 2));
						int32_t L_29 = *((uint16_t*)L_28);
						*((int16_t*)L_26) = (int16_t)L_29;
						int32_t L_30 = V_8;
						V_8 = ((int32_t)il2cpp_codegen_add(L_30, 2));
					}

IL_0092_2:
					{
						int32_t L_31 = V_8;
						int32_t L_32 = V_0;
						if ((((int32_t)L_31) < ((int32_t)L_32)))
						{
							goto IL_007c_2;
						}
					}
					{
						goto IL_01cb;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a0_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00fe_1:
					{// begin finally (depth: 2)
						V_10 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_33 = V_2;
						V_10 = L_33;
						String_t* L_34 = V_10;
						V_9 = (Il2CppChar*)((intptr_t)L_34);
						Il2CppChar* L_35 = V_9;
						if (!L_35)
						{
							goto IL_00b7_2;
						}
					}
					{
						Il2CppChar* L_36 = V_9;
						int32_t L_37;
						L_37 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_9 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_36, L_37));
					}

IL_00b7_2:
					{
						intptr_t L_38;
						L_38 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_38;
						void* L_39;
						L_39 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_11 = (uint8_t*)L_39;
						Il2CppChar* L_40 = V_9;
						V_12 = (uint8_t*)L_40;
						V_13 = 0;
						goto IL_00f4_2;
					}

IL_00d2_2:
					{
						uint8_t* L_41 = V_12;
						uint8_t* L_42 = V_11;
						int32_t L_43 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, 1)));
						*((int8_t*)L_41) = (int8_t)L_43;
						uint8_t* L_44 = V_12;
						uint8_t* L_45 = V_11;
						int32_t L_46 = *((uint8_t*)L_45);
						*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, 1))) = (int8_t)L_46;
						uint8_t* L_47 = V_11;
						V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, 2));
						uint8_t* L_48 = V_12;
						V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, 2));
						int32_t L_49 = V_13;
						V_13 = ((int32_t)il2cpp_codegen_add(L_49, 2));
					}

IL_00f4_2:
					{
						int32_t L_50 = V_13;
						int32_t L_51 = V_0;
						if ((((int32_t)L_50) < ((int32_t)L_51)))
						{
							goto IL_00d2_2;
						}
					}
					{
						goto IL_01cb;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0102_1:
			{
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_52 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_52)
				{
					goto IL_0161_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_015d_1:
					{// begin finally (depth: 2)
						V_15 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_53 = V_2;
						V_15 = L_53;
						String_t* L_54 = V_15;
						V_14 = (Il2CppChar*)((intptr_t)L_54);
						Il2CppChar* L_55 = V_14;
						if (!L_55)
						{
							goto IL_011f_2;
						}
					}
					{
						Il2CppChar* L_56 = V_14;
						int32_t L_57;
						L_57 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_14 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_56, L_57));
					}

IL_011f_2:
					{
						intptr_t L_58;
						L_58 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_58;
						void* L_59;
						L_59 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_16 = (uint8_t*)L_59;
						Il2CppChar* L_60 = V_14;
						V_17 = (uint8_t*)L_60;
						V_18 = 0;
						goto IL_0156_2;
					}

IL_013a_2:
					{
						uint8_t* L_61 = V_17;
						uint8_t* L_62 = L_61;
						V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, 1));
						uint8_t* L_63 = V_16;
						uint8_t* L_64 = L_63;
						V_16 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_64, 1));
						int32_t L_65 = *((uint8_t*)L_64);
						*((int8_t*)L_62) = (int8_t)L_65;
						uint8_t* L_66 = V_17;
						V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_66, 1));
						int32_t L_67 = V_18;
						V_18 = ((int32_t)il2cpp_codegen_add(L_67, 1));
					}

IL_0156_2:
					{
						int32_t L_68 = V_18;
						int32_t L_69 = V_0;
						if ((((int32_t)L_68) < ((int32_t)L_69)))
						{
							goto IL_013a_2;
						}
					}
					{
						goto IL_01cb;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0161_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01b6_1:
					{// begin finally (depth: 2)
						V_20 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_70 = V_2;
						V_20 = L_70;
						String_t* L_71 = V_20;
						V_19 = (Il2CppChar*)((intptr_t)L_71);
						Il2CppChar* L_72 = V_19;
						if (!L_72)
						{
							goto IL_0178_2;
						}
					}
					{
						Il2CppChar* L_73 = V_19;
						int32_t L_74;
						L_74 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_19 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_73, L_74));
					}

IL_0178_2:
					{
						intptr_t L_75;
						L_75 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_75;
						void* L_76;
						L_76 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_21 = (uint8_t*)L_76;
						Il2CppChar* L_77 = V_19;
						V_22 = (uint8_t*)L_77;
						V_23 = 0;
						goto IL_01af_2;
					}

IL_0193_2:
					{
						uint8_t* L_78 = V_22;
						V_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, 1));
						uint8_t* L_79 = V_22;
						uint8_t* L_80 = L_79;
						V_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_80, 1));
						uint8_t* L_81 = V_21;
						uint8_t* L_82 = L_81;
						V_21 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, 1));
						int32_t L_83 = *((uint8_t*)L_82);
						*((int8_t*)L_80) = (int8_t)L_83;
						int32_t L_84 = V_23;
						V_23 = ((int32_t)il2cpp_codegen_add(L_84, 1));
					}

IL_01af_2:
					{
						int32_t L_85 = V_23;
						int32_t L_86 = V_0;
						if ((((int32_t)L_85) < ((int32_t)L_86)))
						{
							goto IL_0193_2;
						}
					}
					{
						goto IL_01cb;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01cb:
	{
		String_t* L_87 = V_2;
		return L_87;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities::StringToBytes(System.Byte[],System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilities_StringToBytes_m47C191284C1676E35355A0FD43E90D71EF16DD0F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, String_t* ___value1, bool ___needs16BitSupport2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	uint16_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Il2CppChar* V_8 = NULL;
	String_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	int32_t V_12 = 0;
	Il2CppChar* V_13 = NULL;
	String_t* V_14 = NULL;
	uint8_t* V_15 = NULL;
	uint8_t* V_16 = NULL;
	int32_t V_17 = 0;
	Il2CppChar* V_18 = NULL;
	String_t* V_19 = NULL;
	uint8_t* V_20 = NULL;
	uint8_t* V_21 = NULL;
	int32_t V_22 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___needs16BitSupport2;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___value1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000b:
	{
		String_t* L_3 = ___value1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_4, 2));
	}

IL_0013:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		NullCheck(L_5);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_StringToBytes_m47C191284C1676E35355A0FD43E90D71EF16DD0F_RuntimeMethod_var)));
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b9:
			{// begin finally (depth: 1)
				{
					bool L_12;
					L_12 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_12)
					{
						goto IL_01c9;
					}
				}
				{
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_01c9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___buffer0;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14;
				L_14 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_13, 3, NULL);
				V_1 = L_14;
				bool L_15 = ___needs16BitSupport2;
				if (!L_15)
				{
					goto IL_0101_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_16 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_16)
				{
					goto IL_009f_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009c_1:
					{// begin finally (depth: 2)
						V_3 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_17 = ___value1;
						V_3 = L_17;
						String_t* L_18 = V_3;
						V_2 = (Il2CppChar*)((intptr_t)L_18);
						Il2CppChar* L_19 = V_2;
						if (!L_19)
						{
							goto IL_0062_2;
						}
					}
					{
						Il2CppChar* L_20 = V_2;
						int32_t L_21;
						L_21 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_20, L_21));
					}

IL_0062_2:
					{
						Il2CppChar* L_22 = V_2;
						V_4 = (uint16_t*)L_22;
						intptr_t L_23;
						L_23 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_23;
						void* L_24;
						L_24 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_5 = (uint16_t*)L_24;
						V_7 = 0;
						goto IL_0092_2;
					}

IL_007c_2:
					{
						uint16_t* L_25 = V_5;
						uint16_t* L_26 = L_25;
						V_5 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
						uint16_t* L_27 = V_4;
						uint16_t* L_28 = L_27;
						V_4 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_28, 2));
						int32_t L_29 = *((uint16_t*)L_28);
						*((int16_t*)L_26) = (int16_t)L_29;
						int32_t L_30 = V_7;
						V_7 = ((int32_t)il2cpp_codegen_add(L_30, 2));
					}

IL_0092_2:
					{
						int32_t L_31 = V_7;
						int32_t L_32 = V_0;
						if ((((int32_t)L_31) < ((int32_t)L_32)))
						{
							goto IL_007c_2;
						}
					}
					{
						goto IL_01ca;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_009f_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00fd_1:
					{// begin finally (depth: 2)
						V_9 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_33 = ___value1;
						V_9 = L_33;
						String_t* L_34 = V_9;
						V_8 = (Il2CppChar*)((intptr_t)L_34);
						Il2CppChar* L_35 = V_8;
						if (!L_35)
						{
							goto IL_00b6_2;
						}
					}
					{
						Il2CppChar* L_36 = V_8;
						int32_t L_37;
						L_37 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_8 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_36, L_37));
					}

IL_00b6_2:
					{
						Il2CppChar* L_38 = V_8;
						V_10 = (uint8_t*)L_38;
						intptr_t L_39;
						L_39 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_39;
						void* L_40;
						L_40 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_11 = (uint8_t*)L_40;
						V_12 = 0;
						goto IL_00f3_2;
					}

IL_00d1_2:
					{
						uint8_t* L_41 = V_11;
						uint8_t* L_42 = V_10;
						int32_t L_43 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, 1)));
						*((int8_t*)L_41) = (int8_t)L_43;
						uint8_t* L_44 = V_11;
						uint8_t* L_45 = V_10;
						int32_t L_46 = *((uint8_t*)L_45);
						*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, 1))) = (int8_t)L_46;
						uint8_t* L_47 = V_10;
						V_10 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, 2));
						uint8_t* L_48 = V_11;
						V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, 2));
						int32_t L_49 = V_12;
						V_12 = ((int32_t)il2cpp_codegen_add(L_49, 2));
					}

IL_00f3_2:
					{
						int32_t L_50 = V_12;
						int32_t L_51 = V_0;
						if ((((int32_t)L_50) < ((int32_t)L_51)))
						{
							goto IL_00d1_2;
						}
					}
					{
						goto IL_01ca;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0101_1:
			{
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_52 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_52)
				{
					goto IL_0160_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_015c_1:
					{// begin finally (depth: 2)
						V_14 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_53 = ___value1;
						V_14 = L_53;
						String_t* L_54 = V_14;
						V_13 = (Il2CppChar*)((intptr_t)L_54);
						Il2CppChar* L_55 = V_13;
						if (!L_55)
						{
							goto IL_011e_2;
						}
					}
					{
						Il2CppChar* L_56 = V_13;
						int32_t L_57;
						L_57 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_13 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_56, L_57));
					}

IL_011e_2:
					{
						Il2CppChar* L_58 = V_13;
						V_15 = (uint8_t*)L_58;
						intptr_t L_59;
						L_59 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_59;
						void* L_60;
						L_60 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_16 = (uint8_t*)L_60;
						V_17 = 0;
						goto IL_0155_2;
					}

IL_0139_2:
					{
						uint8_t* L_61 = V_15;
						V_15 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, 1));
						uint8_t* L_62 = V_16;
						uint8_t* L_63 = L_62;
						V_16 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, 1));
						uint8_t* L_64 = V_15;
						uint8_t* L_65 = L_64;
						V_15 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_65, 1));
						int32_t L_66 = *((uint8_t*)L_65);
						*((int8_t*)L_63) = (int8_t)L_66;
						int32_t L_67 = V_17;
						V_17 = ((int32_t)il2cpp_codegen_add(L_67, 1));
					}

IL_0155_2:
					{
						int32_t L_68 = V_17;
						int32_t L_69 = V_0;
						if ((((int32_t)L_68) < ((int32_t)L_69)))
						{
							goto IL_0139_2;
						}
					}
					{
						goto IL_01ca;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0160_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01b5_1:
					{// begin finally (depth: 2)
						V_19 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_70 = ___value1;
						V_19 = L_70;
						String_t* L_71 = V_19;
						V_18 = (Il2CppChar*)((intptr_t)L_71);
						Il2CppChar* L_72 = V_18;
						if (!L_72)
						{
							goto IL_0177_2;
						}
					}
					{
						Il2CppChar* L_73 = V_18;
						int32_t L_74;
						L_74 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_18 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_73, L_74));
					}

IL_0177_2:
					{
						Il2CppChar* L_75 = V_18;
						V_20 = (uint8_t*)L_75;
						intptr_t L_76;
						L_76 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_76;
						void* L_77;
						L_77 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_21 = (uint8_t*)L_77;
						V_22 = 0;
						goto IL_01ae_2;
					}

IL_0192_2:
					{
						uint8_t* L_78 = V_21;
						uint8_t* L_79 = L_78;
						V_21 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, 1));
						uint8_t* L_80 = V_20;
						uint8_t* L_81 = L_80;
						V_20 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, 1));
						int32_t L_82 = *((uint8_t*)L_81);
						*((int8_t*)L_79) = (int8_t)L_82;
						uint8_t* L_83 = V_20;
						V_20 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_83, 1));
						int32_t L_84 = V_22;
						V_22 = ((int32_t)il2cpp_codegen_add(L_84, 1));
					}

IL_01ae_2:
					{
						int32_t L_85 = V_22;
						int32_t L_86 = V_0;
						if ((((int32_t)L_85) < ((int32_t)L_86)))
						{
							goto IL_0192_2;
						}
					}
					{
						goto IL_01ca;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ca:
	{
		int32_t L_87 = V_0;
		return L_87;
	}
}
// System.Void Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_m1D9E410C2CF82F3FD52B7CB894F4258FB4EBEB89 (void* ___from0, void* ___to1, int32_t ___bytes2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* V_1 = NULL;
	Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* V_5 = NULL;
	{
		void* L_0 = ___to1;
		int32_t L_1 = ___bytes2;
		V_0 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_1));
		void* L_2 = ___from0;
		V_1 = (Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)L_2;
		void* L_3 = ___to1;
		V_2 = (Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)L_3;
		goto IL_0032;
	}

IL_000a:
	{
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_4 = V_2;
		V_5 = L_4;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_5 = V_5;
		uint32_t L_6 = sizeof(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A);
		V_2 = ((Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6));
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_7 = V_5;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_8 = V_1;
		V_5 = L_8;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_9 = V_5;
		uint32_t L_10 = sizeof(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A);
		V_1 = ((Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)L_10));
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_11 = V_5;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A L_12 = (*(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)L_11);
		*(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)L_7 = L_12;
	}

IL_0032:
	{
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_13 = V_2;
		uint32_t L_14 = sizeof(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A);
		uint8_t* L_15 = V_0;
		if ((!(((uintptr_t)((Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)il2cpp_codegen_add((intptr_t)L_13, (int32_t)L_14))) > ((uintptr_t)L_15))))
		{
			goto IL_000a;
		}
	}
	{
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_16 = V_1;
		V_3 = (uint8_t*)L_16;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_17 = V_2;
		V_4 = (uint8_t*)L_17;
		goto IL_0052;
	}

IL_0044:
	{
		uint8_t* L_18 = V_4;
		uint8_t* L_19 = L_18;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, 1));
		uint8_t* L_20 = V_3;
		uint8_t* L_21 = L_20;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 1));
		int32_t L_22 = *((uint8_t*)L_21);
		*((int8_t*)L_19) = (int8_t)L_22;
	}

IL_0052:
	{
		uint8_t* L_23 = V_4;
		uint8_t* L_24 = V_0;
		if ((!(((uintptr_t)L_23) >= ((uintptr_t)L_24))))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Object,System.Object,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_m2FF651B6F23D59D8D9D29A6BFEA30DFD75278F76 (RuntimeObject* ___from0, RuntimeObject* ___to1, int32_t ___byteCount2, int32_t ___fromByteOffset3, int32_t ___toByteOffset4, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t* V_6 = NULL;
	uint64_t* V_7 = NULL;
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	int32_t V_12 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		int32_t L_0 = ___fromByteOffset3;
		if (((int32_t)(L_0%8)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___toByteOffset4;
		if (!((int32_t)(L_1%8)))
		{
			goto IL_0036;
		}
	}

IL_001b:
	{
		int32_t L_2 = 8;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45E91B775C05667BB0C4313D3AF0298D560E3F90)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F530C05EDCBF7716458575421F02CF2C179352F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_MemoryCopy_m2FF651B6F23D59D8D9D29A6BFEA30DFD75278F76_RuntimeMethod_var)));
	}

IL_0036:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ec:
			{// begin finally (depth: 1)
				{
					bool L_6;
					L_6 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_0), NULL);
					if (!L_6)
					{
						goto IL_00fc;
					}
				}
				{
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
				}

IL_00fc:
				{
					bool L_7;
					L_7 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_7)
					{
						goto IL_010c;
					}
				}
				{
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_010c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_8 = ___byteCount2;
				V_2 = ((int32_t)(L_8%8));
				int32_t L_9 = ___byteCount2;
				int32_t L_10 = V_2;
				V_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_9, L_10))/8));
				int32_t L_11 = ___fromByteOffset3;
				V_4 = ((int32_t)(L_11/8));
				int32_t L_12 = ___toByteOffset4;
				V_5 = ((int32_t)(L_12/8));
				RuntimeObject* L_13 = ___from0;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14;
				L_14 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_13, 3, NULL);
				V_0 = L_14;
				RuntimeObject* L_15 = ___to1;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_16;
				L_16 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_15, 3, NULL);
				V_1 = L_16;
				intptr_t L_17;
				L_17 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
				V_8 = L_17;
				void* L_18;
				L_18 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_8), NULL);
				V_6 = (uint64_t*)L_18;
				intptr_t L_19;
				L_19 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
				V_8 = L_19;
				void* L_20;
				L_20 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_8), NULL);
				V_7 = (uint64_t*)L_20;
				int32_t L_21 = V_4;
				if ((((int32_t)L_21) <= ((int32_t)0)))
				{
					goto IL_008f_1;
				}
			}
			{
				uint64_t* L_22 = V_6;
				int32_t L_23 = V_4;
				V_6 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 8))));
			}

IL_008f_1:
			{
				int32_t L_24 = V_5;
				if ((((int32_t)L_24) <= ((int32_t)0)))
				{
					goto IL_009e_1;
				}
			}
			{
				uint64_t* L_25 = V_7;
				int32_t L_26 = V_5;
				V_7 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 8))));
			}

IL_009e_1:
			{
				V_9 = 0;
				goto IL_00b9_1;
			}

IL_00a3_1:
			{
				uint64_t* L_27 = V_7;
				uint64_t* L_28 = L_27;
				V_7 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_28, 8));
				uint64_t* L_29 = V_6;
				uint64_t* L_30 = L_29;
				V_6 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_30, 8));
				int64_t L_31 = *((int64_t*)L_30);
				*((int64_t*)L_28) = (int64_t)L_31;
				int32_t L_32 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_32, 1));
			}

IL_00b9_1:
			{
				int32_t L_33 = V_9;
				int32_t L_34 = V_3;
				if ((((int32_t)L_33) < ((int32_t)L_34)))
				{
					goto IL_00a3_1;
				}
			}
			{
				int32_t L_35 = V_2;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00ea_1;
				}
			}
			{
				uint64_t* L_36 = V_6;
				V_10 = (uint8_t*)L_36;
				uint64_t* L_37 = V_7;
				V_11 = (uint8_t*)L_37;
				V_12 = 0;
				goto IL_00e5_1;
			}

IL_00cf_1:
			{
				uint8_t* L_38 = V_11;
				uint8_t* L_39 = L_38;
				V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, 1));
				uint8_t* L_40 = V_10;
				uint8_t* L_41 = L_40;
				V_10 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_41, 1));
				int32_t L_42 = *((uint8_t*)L_41);
				*((int8_t*)L_39) = (int8_t)L_42;
				int32_t L_43 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_43, 1));
			}

IL_00e5_1:
			{
				int32_t L_44 = V_12;
				int32_t L_45 = V_2;
				if ((((int32_t)L_44) < ((int32_t)L_45)))
				{
					goto IL_00cf_1;
				}
			}

IL_00ea_1:
			{
				goto IL_010d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010d:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m236049CB8A5159920740B89C4E7391F2DC338FE6 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldInfo_t* MemberAliasFieldInfo_get_AliasedField_mD5DE35FBCA9EBBF8164EC578CDE3E4FCA88889CF_inline (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t* MemberAliasPropertyInfo_get_AliasedProperty_m641D01DDC45E3CB59762B653EAC3982678D3CB30_inline (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasMethodInfo_get_AliasedMethod_mE6D71392C2BF6D6E8DEB276007EEC701E50BA6FB_inline (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ValueGetter_2_Invoke_mC6FDDFB9939D99C3A2312F88394AAED91B0984BC_gshared_inline (ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414* __this, RuntimeObject** ___instance0, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instance0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
