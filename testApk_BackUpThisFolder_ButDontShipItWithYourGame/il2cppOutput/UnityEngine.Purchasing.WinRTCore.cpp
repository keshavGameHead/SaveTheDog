#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.String
struct String_t;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD6FDA2B63599E8B234C0F9A81D759867223B4A4E 
{
};
struct Il2CppArrayBounds;

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

// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, bool ___value0, const RuntimeMethod* method) ;
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
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_platformSpecificID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_platformSpecificID_m2BE91A33BDA885A944E6ABB82BF7F9900F287E67 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public string platformSpecificID { get; private set; }
		String_t* L_0 = __this->___U3CplatformSpecificIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string platformSpecificID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CplatformSpecificIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_price()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_price_m4C5A6EFC3A06202BD15D1FAEC9CC7539D0CAAA64 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public string price { get; private set; }
		String_t* L_0 = __this->___U3CpriceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string price { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CpriceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpriceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_title_m8AFD9BCF98434179779C1DE859B9E39BE6C73D05 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public string title { get; private set; }
		String_t* L_0 = __this->___U3CtitleU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string title { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CtitleU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtitleU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_description_m6147401DA122F5EF3FC17E7DBD745E000D72A9AF (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public string description { get; private set; }
		String_t* L_0 = __this->___U3CdescriptionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string description { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CdescriptionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdescriptionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_ISOCurrencyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_ISOCurrencyCode_m9D640896DCB8F9D361C1AE27F731D6A539431BC0 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public string ISOCurrencyCode { get; private set; }
		String_t* L_0 = __this->___U3CISOCurrencyCodeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ISOCurrencyCode { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CISOCurrencyCodeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::get_priceDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F WinProductDescription_get_priceDecimal_m6BA7AC2066EE2118C85BB3AC926060A3A1905C8B (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public decimal priceDecimal { get; private set; }
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = __this->___U3CpriceDecimalU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	{
		// public decimal priceDecimal { get; private set; }
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		__this->___U3CpriceDecimalU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_receipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_receipt_m76168F7E15F726357D5EDF7EEAFF9B0362224866 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public string receipt { get; private set; }
		String_t* L_0 = __this->___U3CreceiptU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string receipt { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CreceiptU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceiptU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_transactionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_transactionID_mD13D83227295190127566968BC9704214363E7D4 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public string transactionID { get; private set; }
		String_t* L_0 = __this->___U3CtransactionIDU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string transactionID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CtransactionIDU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransactionIDU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::get_consumable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinProductDescription_get_consumable_m1AE9A49AEB6879C29DDB7AF4CB5A2D67D3D3BD85 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	{
		// public bool consumable { get; private set; }
		bool L_0 = __this->___U3CconsumableU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool consumable { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CconsumableU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_mF87A63C34788D1FE9140FB82C0B6357D57712F79 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method) 
{
	{
		// public WinProductDescription(string id, string price, string title, string description,
		//                            string isoCode, decimal priceD, string receipt = null, string transactionId = null, bool consumable = false)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// platformSpecificID = id;
		String_t* L_0 = ___id0;
		WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_inline(__this, L_0, NULL);
		// this.price = price;
		String_t* L_1 = ___price1;
		WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_inline(__this, L_1, NULL);
		// this.title = title;
		String_t* L_2 = ___title2;
		WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_inline(__this, L_2, NULL);
		// this.description = description;
		String_t* L_3 = ___description3;
		WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_inline(__this, L_3, NULL);
		// ISOCurrencyCode = isoCode;
		String_t* L_4 = ___isoCode4;
		WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_inline(__this, L_4, NULL);
		// priceDecimal = priceD;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = ___priceD5;
		WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_inline(__this, L_5, NULL);
		// this.receipt = receipt;
		String_t* L_6 = ___receipt6;
		WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_inline(__this, L_6, NULL);
		// transactionID = transactionId;
		String_t* L_7 = ___transactionId7;
		WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_inline(__this, L_7, NULL);
		// this.consumable = consumable;
		bool L_8 = ___consumable8;
		WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_inline(__this, L_8, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string platformSpecificID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CplatformSpecificIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string price { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CpriceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpriceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string title { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CtitleU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtitleU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string description { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CdescriptionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdescriptionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ISOCurrencyCode { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CISOCurrencyCodeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	{
		// public decimal priceDecimal { get; private set; }
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		__this->___U3CpriceDecimalU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string receipt { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CreceiptU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceiptU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string transactionID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CtransactionIDU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransactionIDU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool consumable { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CconsumableU3Ek__BackingField_8 = L_0;
		return;
	}
}
