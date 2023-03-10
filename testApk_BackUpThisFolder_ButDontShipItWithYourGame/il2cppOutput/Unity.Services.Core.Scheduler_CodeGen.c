#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Int32 Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::CompareTo(Unity.Services.Core.Scheduler.Internal.ScheduledInvocation)
extern void ScheduledInvocation_CompareTo_m37F08AED1838A2BE049CAFBD36017B72A9C576EF (void);
// 0x00000002 System.Void Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::.ctor()
extern void ScheduledInvocation__ctor_mB7D79780A933DBF3A750A1FABB2DAA45852513BD (void);
// 0x00000003 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor()
extern void ActionScheduler__ctor_m65721521873C0894B75820E4DC934F47E068495D (void);
// 0x00000004 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor(Unity.Services.Core.Scheduler.Internal.ITimeProvider)
extern void ActionScheduler__ctor_m3F34A80C3965C10463085599131EA2A7A488C0AF (void);
// 0x00000005 System.Int64 Unity.Services.Core.Scheduler.Internal.ActionScheduler::ScheduleAction(System.Action,System.Double)
extern void ActionScheduler_ScheduleAction_m6D586ADFCCA974FEBA1D7E23AA3D3DBBA517F8CD (void);
// 0x00000006 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::CancelAction(System.Int64)
extern void ActionScheduler_CancelAction_mDC93985AECBE933318100A3BC5530E1D63F37875 (void);
// 0x00000007 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::ExecuteExpiredActions()
extern void ActionScheduler_ExecuteExpiredActions_mB683F55950DD543D90A479DF7E68539969F2B48C (void);
// 0x00000008 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::UpdateSubSystemList(System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>,UnityEngine.LowLevel.PlayerLoopSystem)
extern void ActionScheduler_UpdateSubSystemList_m6ADBF46147851853585D17ADB4F6524389B836C1 (void);
// 0x00000009 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::JoinPlayerLoopSystem()
extern void ActionScheduler_JoinPlayerLoopSystem_mB998001E51285B4DF2406DE197A3A5377BD62892 (void);
// 0x0000000A System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::get_Count()
// 0x0000000B T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::get_Min()
// 0x0000000C System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::.ctor(System.Int32)
// 0x0000000D System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Insert(T)
// 0x0000000E System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::IncreaseHeapCapacityWhenFull()
// 0x0000000F System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Remove(T)
// 0x00000010 T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::ExtractMin()
// 0x00000011 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::DecreaseHeapCapacityWhenSpare()
// 0x00000012 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::GetKey(T)
// 0x00000013 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::MinHeapify(System.Int32)
// 0x00000014 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Swap(T&,T&)
// 0x00000015 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Parent(System.Int32)
// 0x00000016 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::LeftChild(System.Int32)
// 0x00000017 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::RightChild(System.Int32)
// 0x00000018 System.DateTime Unity.Services.Core.Scheduler.Internal.ITimeProvider::get_Now()
// 0x00000019 System.DateTime Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::get_Now()
extern void UtcTimeProvider_get_Now_m2BBC0DB7893BDC8457768D897F441264BA779A3F (void);
// 0x0000001A System.Void Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::.ctor()
extern void UtcTimeProvider__ctor_m0B5F5EE010F7BDBED40E139D11D931E90D82DFE2 (void);
static Il2CppMethodPointer s_methodPointers[26] = 
{
	ScheduledInvocation_CompareTo_m37F08AED1838A2BE049CAFBD36017B72A9C576EF,
	ScheduledInvocation__ctor_mB7D79780A933DBF3A750A1FABB2DAA45852513BD,
	ActionScheduler__ctor_m65721521873C0894B75820E4DC934F47E068495D,
	ActionScheduler__ctor_m3F34A80C3965C10463085599131EA2A7A488C0AF,
	ActionScheduler_ScheduleAction_m6D586ADFCCA974FEBA1D7E23AA3D3DBBA517F8CD,
	ActionScheduler_CancelAction_mDC93985AECBE933318100A3BC5530E1D63F37875,
	ActionScheduler_ExecuteExpiredActions_mB683F55950DD543D90A479DF7E68539969F2B48C,
	ActionScheduler_UpdateSubSystemList_m6ADBF46147851853585D17ADB4F6524389B836C1,
	ActionScheduler_JoinPlayerLoopSystem_mB998001E51285B4DF2406DE197A3A5377BD62892,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UtcTimeProvider_get_Now_m2BBC0DB7893BDC8457768D897F441264BA779A3F,
	UtcTimeProvider__ctor_m0B5F5EE010F7BDBED40E139D11D931E90D82DFE2,
};
static const int32_t s_InvokerIndices[26] = 
{
	4858,
	7118,
	7118,
	5726,
	2566,
	5697,
	7118,
	10502,
	7118,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6908,
	7118,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000004, { 0, 16 } },
};
extern const uint32_t g_rgctx_TU5BU5D_t65C250DB0F0FAE0321F9134BF5AC9A8878BF4EAE;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_IncreaseHeapCapacityWhenFull_mDFB8DD3B67384018DD1CD42098CC409E2881E019;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_Parent_m572510087511B9B447FD65DF801AA4921A0B7523;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_tAE8A44D159438805EBA81C4D10A74006C6254908;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_Swap_mC0D94006763E0516180AFB13BE6B142ED236837B;
extern const uint32_t g_rgctx_T_tCFFC03C1364E25C2328A320EF410AB74F0782511;
extern const uint32_t g_rgctx_IComparable_1_t59D94140751C6945D224BBEEF0C42FAF811B5FE7;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tCFFC03C1364E25C2328A320EF410AB74F0782511_IComparable_1_CompareTo_m39C99CE742B1DE6F1DC5195A771FF87CD1F426C2;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_get_Count_m5AD784ADCB546F17609BD8140FAF243EC6B03D6B;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_GetKey_m552E5365A2C47BD8D783A0306214E7D1E00CC07C;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_ExtractMin_m0C940A8A3FF13C3BAEE8D7177AA8EC4D3D1928E0;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_MinHeapify_m857768BAC376F3248F05040D2CCF4A2EAB324759;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_DecreaseHeapCapacityWhenSpare_mD8B5D7DBB5C49DE9554D305C7A6E8CC772A09A93;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tCFFC03C1364E25C2328A320EF410AB74F0782511_Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_LeftChild_m28D272DEB39509BFACDE633D274C2CE49B379254;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_RightChild_mADEE3E7738AC41583D11C972529F23D840CDF131;
static const Il2CppRGCTXDefinition s_rgctxValues[16] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t65C250DB0F0FAE0321F9134BF5AC9A8878BF4EAE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_IncreaseHeapCapacityWhenFull_mDFB8DD3B67384018DD1CD42098CC409E2881E019 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_Parent_m572510087511B9B447FD65DF801AA4921A0B7523 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_MinimumBinaryHeap_1_tAE8A44D159438805EBA81C4D10A74006C6254908 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_Swap_mC0D94006763E0516180AFB13BE6B142ED236837B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tCFFC03C1364E25C2328A320EF410AB74F0782511 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IComparable_1_t59D94140751C6945D224BBEEF0C42FAF811B5FE7 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tCFFC03C1364E25C2328A320EF410AB74F0782511_IComparable_1_CompareTo_m39C99CE742B1DE6F1DC5195A771FF87CD1F426C2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_get_Count_m5AD784ADCB546F17609BD8140FAF243EC6B03D6B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_GetKey_m552E5365A2C47BD8D783A0306214E7D1E00CC07C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_ExtractMin_m0C940A8A3FF13C3BAEE8D7177AA8EC4D3D1928E0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_MinHeapify_m857768BAC376F3248F05040D2CCF4A2EAB324759 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_DecreaseHeapCapacityWhenSpare_mD8B5D7DBB5C49DE9554D305C7A6E8CC772A09A93 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tCFFC03C1364E25C2328A320EF410AB74F0782511_Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_LeftChild_m28D272DEB39509BFACDE633D274C2CE49B379254 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MinimumBinaryHeap_1_RightChild_mADEE3E7738AC41583D11C972529F23D840CDF131 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_Scheduler_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_Scheduler_CodeGenModule = 
{
	"Unity.Services.Core.Scheduler.dll",
	26,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	16,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
