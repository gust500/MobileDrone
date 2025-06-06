﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { &p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3*, T4*, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5 p5)
	{
		void* params[5] = { p1, &p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1, T2, T3, T4*, T5, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4, T5 p5, T6* p6)
	{
		void* params[6] = { &p1, &p2, &p3, p4, &p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2, T3, T4, T5*, T6, T7*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6 p6, T7* p7)
	{
		void* params[7] = { p1, &p2, &p3, &p4, p5, &p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.WebRTC.RTCStatsReport>
struct Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C;
// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F;
// System.Action`2<Unity.WebRTC.RTCErrorType,System.String>
struct Action_2_t7EF488960820B12EED4789F882AE94B43F35042F;
// System.Action`4<System.Int32Enum,System.Object,System.Int32Enum,System.Object>
struct Action_4_t702E420CFD4BC843DFDC38F609F03BE97A705FF2;
// System.Action`4<Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String>
struct Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>
struct ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.CreateSessionDescriptionObserver>
struct Dictionary_2_t6C2A6D2F50B04878141106312AC2959FE77E9685;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.RTCStatsCollectorCallback>
struct Dictionary_2_t0156089E42479D6FB761A7410B15912523AFADE3;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.SetSessionDescriptionObserver>
struct Dictionary_2_tF04CFD307AEA3892DBE8D5C020079FB0E94AA471;
// System.Collections.Generic.Dictionary`2<System.String,Unity.WebRTC.RTCStats>
struct Dictionary_2_t88D75784F0AAA9D4004B273F35E693EAF8FC3EF8;
// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09;
// System.Func`2<System.IntPtr,Unity.WebRTC.RTCStatsReport>
struct Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905;
// System.Collections.Generic.HashSet`1<Unity.WebRTC.MediaStreamTrack>
struct HashSet_1_t760682EF2616B098599332862590C1607FFFAE42;
// System.Collections.Generic.ICollection`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct ICollection_1_t8E3814FB2524FE9B6CB8AA37F25750B817964F34;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.IEnumerator`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct IEnumerator_1_t9BA6700041E904E1EAAF35024EA57FFDB87C25F1;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t0C62219A7981BC3254B9E9404B17F934FE7D7908;
// System.Collections.Generic.IReadOnlyList`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>
struct IReadOnlyList_1_t15588057AC9BCEEBD1DD4C534E459E408DB3125B;
// System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>
struct List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unity.WebRTC.ExecutableUnitySynchronizationContext/WorkRequest>
struct List_1_t917326D943B6ABD4F208957B7F643D3A6FCFD6DF;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct Tables_tA006B024DE3BFCC6D1A1D1629952991C4FDD0CB2;
// System.Tuple`2<System.Action,System.Single>
struct Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B;
// System.Tuple`2<System.Object,System.Single>
struct Tuple_2_t1C12C1C5166B19972122FDA1517889C5C1547CF6;
// System.Tuple`2<UnityEngine.Object,System.Single>
struct Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>
struct WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB;
// System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>
struct WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>[]
struct KeyValuePair_2U5BU5D_t675B15393F60D1C169569E9BBC189685520E9392;
// System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>[]
struct WeakReference_1U5BU5D_t64ED4A0B23C0553EC96AC47F2219B3056F2C6511;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.WebRTC.RTCIceServer[]
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.WebRTC.AsyncOperationBase
struct AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4;
// Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// Unity.WebRTC.Context
struct Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3;
// Unity.WebRTC.CreateSessionDescriptionObserver
struct CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// Unity.WebRTC.DelegateAudioReceive
struct DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6;
// Unity.WebRTC.DelegateCollectStats
struct DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390;
// Unity.WebRTC.DelegateCreateGetStats
struct DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.WebRTC.DelegateDebugLog
struct DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7;
// Unity.WebRTC.DelegateNativeCreateSessionDesc
struct DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC;
// Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack
struct DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D;
// Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack
struct DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61;
// Unity.WebRTC.DelegateNativeOnClose
struct DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6;
// Unity.WebRTC.DelegateNativeOnConnectionStateChange
struct DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899;
// Unity.WebRTC.DelegateNativeOnDataChannel
struct DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F;
// Unity.WebRTC.DelegateNativeOnIceCandidate
struct DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740;
// Unity.WebRTC.DelegateNativeOnIceConnectionChange
struct DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3;
// Unity.WebRTC.DelegateNativeOnIceGatheringChange
struct DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699;
// Unity.WebRTC.DelegateNativeOnMessage
struct DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7;
// Unity.WebRTC.DelegateNativeOnNegotiationNeeded
struct DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B;
// Unity.WebRTC.DelegateNativeOnOpen
struct DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64;
// Unity.WebRTC.DelegateNativeOnRemoveTrack
struct DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945;
// Unity.WebRTC.DelegateNativeOnTrack
struct DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE;
// Unity.WebRTC.DelegateOnConnectionStateChange
struct DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698;
// Unity.WebRTC.DelegateOnDataChannel
struct DelegateOnDataChannel_t51552F3ED53B6722654F04B70118D0674754AAA8;
// Unity.WebRTC.DelegateOnIceCandidate
struct DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D;
// Unity.WebRTC.DelegateOnIceConnectionChange
struct DelegateOnIceConnectionChange_tFB1664A52CE8214A21F6CC32AD78600EE4DE27E2;
// Unity.WebRTC.DelegateOnIceGatheringStateChange
struct DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4;
// Unity.WebRTC.DelegateOnNegotiationNeeded
struct DelegateOnNegotiationNeeded_t89583A830AB8849F5B439A8804A7F0E9B5914202;
// Unity.WebRTC.DelegateOnTrack
struct DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF;
// Unity.WebRTC.DelegateSetLocalDescription
struct DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79;
// Unity.WebRTC.DelegateSetRemoteDescription
struct DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1;
// Unity.WebRTC.DelegateVideoFrameResize
struct DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A;
// Unity.WebRTC.ExecutableUnitySynchronizationContext
struct ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.WebRTC.OnVideoReceived
struct OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF;
// Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF;
// Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B;
// Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B;
// Unity.WebRTC.RTCPeerConnection
struct RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2;
// Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04;
// Unity.WebRTC.RTCSessionDescriptionAsyncOperation
struct RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C;
// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation
struct RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49;
// Unity.WebRTC.RTCStatsCollectorCallback
struct RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF;
// Unity.WebRTC.RTCStatsReport
struct RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448;
// Unity.WebRTC.RTCStatsReportAsyncOperation
struct RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// Unity.WebRTC.SetSessionDescriptionObserver
struct SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// Unity.WebRTC.UnityVideoRenderer
struct UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C;
// Unity.WebRTC.VideoStreamTrack
struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B;
// Unity.WebRTC.VideoTrackSource
struct VideoTrackSource_tF200221BAF0F918B2D8E13703E311341F766B772;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// Unity.WebRTC.WeakReferenceTable
struct WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370;
// Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9D1016FEA01FFF35972F0B752612F7AE79CFABD2;
// Unity.WebRTC.WebRTC/<>c
struct U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9;
// Unity.WebRTC.WebRTC/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6;
// Unity.WebRTC.WebRTC/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE;
// Unity.WebRTC.WebRTC/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F;
// Unity.WebRTC.WebRTC/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B;
// Unity.WebRTC.WebRTC/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035;
// Unity.WebRTC.WebRTC/<Update>d__6
struct U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C;
// Unity.WebRTC.WebRTC/CallbackObject
struct CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7EF488960820B12EED4789F882AE94B43F35042F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t75C6BEB987E141931D2E0B129829C72C79814833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9BA6700041E904E1EAAF35024EA57FFDB87C25F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceConnectionState_t739AA726AE89EB18629763D57281E0103006136D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09051B81EC25F8E7F64AFE6C3812B99D9A133E8D;
IL2CPP_EXTERN_C String_t* _stringLiteral092CDF51B5C84276467036F17F0DB713EAF0C81B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B4326BACCF2317265C95FED87F70B8D46E3CA0A;
IL2CPP_EXTERN_C String_t* _stringLiteral5EBDF4678FD2BE65475A94ABED34948037A94C0B;
IL2CPP_EXTERN_C String_t* _stringLiteral64EC9BE731DDB549A5C4DB84B4547ECA651C97D0;
IL2CPP_EXTERN_C String_t* _stringLiteral68C2F698C8AF279878725F92A0810B517004C294;
IL2CPP_EXTERN_C String_t* _stringLiteral85D634311AED4DCFE4023F6211B3F7CAC4410846;
IL2CPP_EXTERN_C String_t* _stringLiteralA28091DB9A11A94195F9CE19C1402CB23C180F34;
IL2CPP_EXTERN_C String_t* _stringLiteralE9C6C73BA81D9EFF5425E9CD5CD4EA21A535580C;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3E11FD3F2BCB62028EE5056F85A7C7D26302D2;
IL2CPP_EXTERN_C String_t* _stringLiteralF041C7691EEA971C55765F8DF52C0DD5C4E53278;
IL2CPP_EXTERN_C String_t* _stringLiteralFDE19F2939B48A58502D79091F8DBF25C5ABA6F7;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mFECA73FEE23A5DDF23CD364D77E15A2AD6B977C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_mE422638B395B90434A8B80B5093454E425817288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCPeerConnection_FindObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m97F45CDD68330CEA8CE48398CD556EE4C0AB5C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCPeerConnection_FindObserver_TisSetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_m0AEF39144C13BD169B1EA7AD2AFA77231724F653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCPeerConnection_RemoveObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m03D0237B88306474726F5B853C2663A3C3621EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCSessionDescriptionAsyncOperation_OnCreateSessionDescription_m697D188244DB8387C49AA951EDD477B7D2EED99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCSetSessionDescriptionAsyncOperation_OnSetSessionDescription_m4AED647283B18B4803C5A93F4FC869ABDC8CCF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RTCStatsReportAsyncOperation_OnStatsDelivered_m53F3451F658A25DF2BFE8DF837E9871D93DF3EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m962CB786A8BA9B87A7036765B61D02EED0FF1EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m85A39A000D95BC0AF3132135DF9B5378090A582A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m69ADBF3AA294F739E635BC5A136D30EAD4685D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4CC2105192476F3A0C170E75270B730745E30854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnCollectStatsCallbackU3Eb__34_1_m05286A46B28107712123EB7D65A163571DED4876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CDelayActionU3Eb__0_mC3DB3E0F4C629FF8F061D1FCA281BA70F5A47FEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3COnSetLocalDescriptionU3Eb__0_mE47B8E0A63BD507BA39FEB9A199A487862337328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3COnSetRemoteDescriptionU3Eb__0_m51B97913B8DC8D916E104ADAA4D0EE6B1E8FEB51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3COnCreateSessionDescriptionU3Eb__0_mC67E59E05B794BE0A827E01BF09119617D25B5D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3COnCollectStatsCallbackU3Eb__0_mA3EF985F9AB849767E608CE539FE864E6AD68335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateU3Ed__6_System_Collections_IEnumerator_Reset_m49E006E9A614A6DC67F8DB4A70F6595812970500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_DebugLog_m02648DBBEBE55B23CAFE5966A09202B7097FED29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_DelayAction_mAA8B2D8336A00FD4C4E8F581C6E63A24FDFB3341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_DestroyImmediate_mA08ED101986113F76C294B300DB842346EF86952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_DestroyOnMainThread_mCF8375FB70A513CE4BE8ADAF1EE8F8ACDD28275D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_Destroy_m7B95C87240F7FC2849564566B0EB1404808D0A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_FindOrCreate_TisRTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448_mDE4EE6183E0FB2437EC94F938F25971B70E54AE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_GetSupportedGraphicsFormat_m59205D7EF10D5B31BE34BF220418DBE1A74CCFE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_InitializeInternal_m55EE7A80EEE6FCC0B8A05E168737A07279542259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_OnCollectStatsCallback_m74A606E07AF78A1149C8CD261CE17A590260598F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_OnCreateSessionDescription_m5CE28E67A12E3D161D1787F38C6521F8F3FE1EC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_OnSetLocalDescription_mF5A13B3B5348A49DB11F2C32DAF3E4F55054AB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_OnSetRemoteDescription_m78DFBA03C6BDA1C5BD93452B72D1A6DBBF4B176D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_SendOrPostCallback_mFF1E55B27196151A13376F127E49C93D014305C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTC_ValidateGraphicsFormat_mCACF2A1B1ED9972977962CB15261DF416331D87C_RuntimeMethod_var;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5;;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke;
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF;;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke;
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke;;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B;;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke;
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke;;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B;;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com;;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke;
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke;;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04;;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke;
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tA006B024DE3BFCC6D1A1D1629952991C4FDD0CB2* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t675B15393F60D1C169569E9BBC189685520E9392* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>
struct List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WeakReference_1U5BU5D_t64ED4A0B23C0553EC96AC47F2219B3056F2C6511* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Tuple`2<System.Action,System.Single>
struct Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	float ___m_Item2_1;
};

// System.Tuple`2<UnityEngine.Object,System.Single>
struct Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	float ___m_Item2_1;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// Unity.WebRTC.NativeMethods
struct NativeMethods_tA36545FA30A0BAFE4574DE60BF7A1E37DD49078B  : public RuntimeObject
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

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
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

// Unity.WebRTC.VideoDecoderMethods
struct VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F  : public RuntimeObject
{
};

// Unity.WebRTC.VideoEncoderMethods
struct VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC  : public RuntimeObject
{
};

// Unity.WebRTC.WeakReferenceExtension
struct WeakReferenceExtension_tBE43363F011865A4B721E446AE89B321E2BB799A  : public RuntimeObject
{
};

// Unity.WebRTC.WeakReferenceTable
struct WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370  : public RuntimeObject
{
	// System.Collections.Hashtable Unity.WebRTC.WeakReferenceTable::m_table
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___m_table_0;
};

// Unity.WebRTC.WebRTC
struct WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Unity.WebRTC.WebRTC/<>c
struct U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9  : public RuntimeObject
{
};

// Unity.WebRTC.WebRTC/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6  : public RuntimeObject
{
	// System.Single Unity.WebRTC.WebRTC/<>c__DisplayClass27_0::delay
	float ___delay_0;
	// System.Action Unity.WebRTC.WebRTC/<>c__DisplayClass27_0::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_1;
};

// Unity.WebRTC.WebRTC/<Update>d__6
struct U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C  : public RuntimeObject
{
	// System.Int32 Unity.WebRTC.WebRTC/<Update>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.WebRTC.WebRTC/<Update>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.WaitForEndOfFrame Unity.WebRTC.WebRTC/<Update>d__6::<instruction>5__1
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___U3CinstructionU3E5__1_2;
	// UnityEngine.RenderTexture Unity.WebRTC.WebRTC/<Update>d__6::<tempTextureActive>5__2
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3CtempTextureActiveU3E5__2_3;
	// System.Collections.Generic.IEnumerator`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>> Unity.WebRTC.WebRTC/<Update>d__6::<>s__3
	RuntimeObject* ___U3CU3Es__3_4;
	// System.WeakReference`1<Unity.WebRTC.VideoStreamTrack> Unity.WebRTC.WebRTC/<Update>d__6::<reference>5__4
	WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* ___U3CreferenceU3E5__4_5;
	// Unity.WebRTC.VideoStreamTrack Unity.WebRTC.WebRTC/<Update>d__6::<track>5__5
	VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* ___U3CtrackU3E5__5_6;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Unity.WebRTC.RTCBundlePolicy>
struct Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Unity.WebRTC.RTCIceTransportPolicy>
struct Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 
{
	// System.String Unity.WebRTC.CandidateInternal::candidate
	String_t* ___candidate_0;
	// Unity.WebRTC.RTCIceComponent Unity.WebRTC.CandidateInternal::component
	int32_t ___component_1;
	// System.String Unity.WebRTC.CandidateInternal::foundation
	String_t* ___foundation_2;
	// System.String Unity.WebRTC.CandidateInternal::ip
	String_t* ___ip_3;
	// System.UInt16 Unity.WebRTC.CandidateInternal::port
	uint16_t ___port_4;
	// System.UInt32 Unity.WebRTC.CandidateInternal::priority
	uint32_t ___priority_5;
	// System.String Unity.WebRTC.CandidateInternal::address
	String_t* ___address_6;
	// System.String Unity.WebRTC.CandidateInternal::protocol
	String_t* ___protocol_7;
	// System.String Unity.WebRTC.CandidateInternal::relatedAddress
	String_t* ___relatedAddress_8;
	// System.UInt16 Unity.WebRTC.CandidateInternal::relatedPort
	uint16_t ___relatedPort_9;
	// System.String Unity.WebRTC.CandidateInternal::tcpType
	String_t* ___tcpType_10;
	// System.String Unity.WebRTC.CandidateInternal::type
	String_t* ___type_11;
	// System.String Unity.WebRTC.CandidateInternal::usernameFragment
	String_t* ___usernameFragment_12;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};
// Native definition for COM marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_com
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.WebRTC.ExecutableUnitySynchronizationContext
struct ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D  : public SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0
{
	// System.Collections.Generic.List`1<Unity.WebRTC.ExecutableUnitySynchronizationContext/WorkRequest> Unity.WebRTC.ExecutableUnitySynchronizationContext::m_AsyncWorkQueue
	List_1_t917326D943B6ABD4F208957B7F643D3A6FCFD6DF* ___m_AsyncWorkQueue_8;
	// System.Collections.Generic.List`1<Unity.WebRTC.ExecutableUnitySynchronizationContext/WorkRequest> Unity.WebRTC.ExecutableUnitySynchronizationContext::m_CurrentFrameWork
	List_1_t917326D943B6ABD4F208957B7F643D3A6FCFD6DF* ___m_CurrentFrameWork_9;
	// System.Int32 Unity.WebRTC.ExecutableUnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_10;
	// System.Int32 Unity.WebRTC.ExecutableUnitySynchronizationContext::m_TrackedCount
	int32_t ___m_TrackedCount_11;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// Unity.WebRTC.OptionalBool
struct OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 
{
	// System.Boolean Unity.WebRTC.OptionalBool::hasValue
	bool ___hasValue_0;
	// System.Boolean Unity.WebRTC.OptionalBool::value
	bool ___value_1;
};

// Unity.WebRTC.OptionalInt
struct OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 
{
	// System.Boolean Unity.WebRTC.OptionalInt::hasValue
	bool ___hasValue_0;
	// System.Int32 Unity.WebRTC.OptionalInt::value
	int32_t ___value_1;
};

// Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E 
{
	// Unity.WebRTC.RTCErrorType Unity.WebRTC.RTCError::errorType
	int32_t ___errorType_0;
	// System.String Unity.WebRTC.RTCError::message
	String_t* ___message_1;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke
{
	int32_t ___errorType_0;
	char* ___message_1;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCError
struct RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com
{
	int32_t ___errorType_0;
	Il2CppChar* ___message_1;
};

// Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B 
{
	// System.String Unity.WebRTC.RTCIceCandidateInitInternal::candidate
	String_t* ___candidate_0;
	// System.String Unity.WebRTC.RTCIceCandidateInitInternal::sdpMid
	String_t* ___sdpMid_1;
	// System.Int32 Unity.WebRTC.RTCIceCandidateInitInternal::sdpMLineIndex
	int32_t ___sdpMLineIndex_2;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke
{
	char* ___candidate_0;
	char* ___sdpMid_1;
	int32_t ___sdpMLineIndex_2;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCIceCandidateInitInternal
struct RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_com
{
	char* ___candidate_0;
	char* ___sdpMid_1;
	int32_t ___sdpMLineIndex_2;
};

// Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B 
{
	// System.String Unity.WebRTC.RTCIceServer::credential
	String_t* ___credential_0;
	// Unity.WebRTC.RTCIceCredentialType Unity.WebRTC.RTCIceServer::credentialType
	int32_t ___credentialType_1;
	// System.String[] Unity.WebRTC.RTCIceServer::urls
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___urls_2;
	// System.String Unity.WebRTC.RTCIceServer::username
	String_t* ___username_3;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke
{
	char* ___credential_0;
	int32_t ___credentialType_1;
	char** ___urls_2;
	char* ___username_3;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCIceServer
struct RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com
{
	Il2CppChar* ___credential_0;
	int32_t ___credentialType_1;
	Il2CppChar** ___urls_2;
	Il2CppChar* ___username_3;
};

// Unity.WebRTC.RTCOfferAnswerOptions
struct RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F 
{
	// System.Boolean Unity.WebRTC.RTCOfferAnswerOptions::iceRestart
	bool ___iceRestart_1;
	// System.Boolean Unity.WebRTC.RTCOfferAnswerOptions::voiceActivityDetection
	bool ___voiceActivityDetection_2;
};

// Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 
{
	// Unity.WebRTC.RTCSdpType Unity.WebRTC.RTCSessionDescription::type
	int32_t ___type_0;
	// System.String Unity.WebRTC.RTCSessionDescription::sdp
	String_t* ___sdp_1;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___sdp_1;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com
{
	int32_t ___type_0;
	char* ___sdp_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// Unity.WebRTC.MarshallingArray`1<System.IntPtr>
struct MarshallingArray_1_t201C4D66026887C428830F15CDC5D30E0168F857 
{
	// System.Int32 Unity.WebRTC.MarshallingArray`1::length
	int32_t ___length_0;
	// System.IntPtr Unity.WebRTC.MarshallingArray`1::ptr
	intptr_t ___ptr_1;
};

// Unity.WebRTC.MarshallingArray`1<Unity.WebRTC.RTCRtpEncodingParametersInternal>
struct MarshallingArray_1_t376555BAE71EEC27AAA84D82B4B195A45F1A96E6 
{
	// System.Int32 Unity.WebRTC.MarshallingArray`1::length
	int32_t ___length_0;
	// System.IntPtr Unity.WebRTC.MarshallingArray`1::ptr
	intptr_t ___ptr_1;
};

// Unity.WebRTC.AsyncOperationBase
struct AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Unity.WebRTC.RTCError Unity.WebRTC.AsyncOperationBase::<Error>k__BackingField
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___U3CErrorU3Ek__BackingField_0;
	// System.Boolean Unity.WebRTC.AsyncOperationBase::<IsError>k__BackingField
	bool ___U3CIsErrorU3Ek__BackingField_1;
	// System.Boolean Unity.WebRTC.AsyncOperationBase::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_2;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Unity.WebRTC.Context
struct Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.Context::self
	intptr_t ___self_0;
	// Unity.WebRTC.WeakReferenceTable Unity.WebRTC.Context::table
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* ___table_1;
	// System.Boolean Unity.WebRTC.Context::limitTextureSize
	bool ___limitTextureSize_2;
	// System.Int32 Unity.WebRTC.Context::id
	int32_t ___id_3;
	// System.Boolean Unity.WebRTC.Context::disposed
	bool ___disposed_4;
	// System.IntPtr Unity.WebRTC.Context::renderFunction
	intptr_t ___renderFunction_5;
	// System.IntPtr Unity.WebRTC.Context::releaseBuffersFunction
	intptr_t ___releaseBuffersFunction_6;
	// System.IntPtr Unity.WebRTC.Context::textureUpdateFunction
	intptr_t ___textureUpdateFunction_7;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839 
{
	// Unity.WebRTC.RTCIceServer[] Unity.WebRTC.RTCConfiguration::iceServers
	RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* ___iceServers_0;
	// System.Nullable`1<Unity.WebRTC.RTCIceTransportPolicy> Unity.WebRTC.RTCConfiguration::iceTransportPolicy
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	// System.Nullable`1<Unity.WebRTC.RTCBundlePolicy> Unity.WebRTC.RTCConfiguration::bundlePolicy
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	// System.Nullable`1<System.Int32> Unity.WebRTC.RTCConfiguration::iceCandidatePoolSize
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
	// System.Nullable`1<System.Boolean> Unity.WebRTC.RTCConfiguration::enableDtlsSrtp
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___enableDtlsSrtp_4;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke* ___iceServers_0;
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___enableDtlsSrtp_4;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCConfiguration
struct RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com* ___iceServers_0;
	Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___iceTransportPolicy_1;
	Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___bundlePolicy_2;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___iceCandidatePoolSize_3;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___enableDtlsSrtp_4;
};

// Unity.WebRTC.RTCConfigurationInternal
struct RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 
{
	// Unity.WebRTC.RTCIceServer[] Unity.WebRTC.RTCConfigurationInternal::iceServers
	RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* ___iceServers_0;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCConfigurationInternal::iceTransportPolicy
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceTransportPolicy_1;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCConfigurationInternal::bundlePolicy
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___bundlePolicy_2;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCConfigurationInternal::iceCandidatePoolSize
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceCandidatePoolSize_3;
	// Unity.WebRTC.OptionalBool Unity.WebRTC.RTCConfigurationInternal::enableDtlsSrtp
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___enableDtlsSrtp_4;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCConfigurationInternal
struct RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_pinvoke
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke* ___iceServers_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceTransportPolicy_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___bundlePolicy_2;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceCandidatePoolSize_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___enableDtlsSrtp_4;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCConfigurationInternal
struct RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_com
{
	RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com* ___iceServers_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceTransportPolicy_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___bundlePolicy_2;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___iceCandidatePoolSize_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___enableDtlsSrtp_4;
};

// Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF 
{
	// Unity.WebRTC.OptionalBool Unity.WebRTC.RTCDataChannelInitInternal::ordered
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::maxRetransmitTime
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::maxRetransmits
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	// System.String Unity.WebRTC.RTCDataChannelInitInternal::protocol
	String_t* ___protocol_3;
	// Unity.WebRTC.OptionalBool Unity.WebRTC.RTCDataChannelInitInternal::negotiated
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	// Unity.WebRTC.OptionalInt Unity.WebRTC.RTCDataChannelInitInternal::id
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke
{
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	char* ___protocol_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCDataChannelInitInternal
struct RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_com
{
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___ordered_0;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmitTime_1;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___maxRetransmits_2;
	char* ___protocol_3;
	OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___negotiated_4;
	OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___id_5;
};

// Unity.WebRTC.RTCPeerConnection
struct RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RTCPeerConnection::self
	intptr_t ___self_0;
	// System.Collections.Generic.HashSet`1<Unity.WebRTC.MediaStreamTrack> Unity.WebRTC.RTCPeerConnection::cacheTracks
	HashSet_1_t760682EF2616B098599332862590C1607FFFAE42* ___cacheTracks_1;
	// System.Boolean Unity.WebRTC.RTCPeerConnection::disposed
	bool ___disposed_2;
	// Unity.WebRTC.DelegateOnIceConnectionChange Unity.WebRTC.RTCPeerConnection::<OnIceConnectionChange>k__BackingField
	DelegateOnIceConnectionChange_tFB1664A52CE8214A21F6CC32AD78600EE4DE27E2* ___U3COnIceConnectionChangeU3Ek__BackingField_3;
	// Unity.WebRTC.DelegateOnConnectionStateChange Unity.WebRTC.RTCPeerConnection::<OnConnectionStateChange>k__BackingField
	DelegateOnConnectionStateChange_tA6BED3B12FD5C91527A2302DA776A253827FE698* ___U3COnConnectionStateChangeU3Ek__BackingField_4;
	// Unity.WebRTC.DelegateOnIceGatheringStateChange Unity.WebRTC.RTCPeerConnection::<OnIceGatheringStateChange>k__BackingField
	DelegateOnIceGatheringStateChange_t1B24BDB2BE17E504B037D49A5393447E4604BAC4* ___U3COnIceGatheringStateChangeU3Ek__BackingField_5;
	// Unity.WebRTC.DelegateOnIceCandidate Unity.WebRTC.RTCPeerConnection::<OnIceCandidate>k__BackingField
	DelegateOnIceCandidate_tDAEDCD6006EF84842D32A716C955A486C4820C7D* ___U3COnIceCandidateU3Ek__BackingField_6;
	// Unity.WebRTC.DelegateOnDataChannel Unity.WebRTC.RTCPeerConnection::<OnDataChannel>k__BackingField
	DelegateOnDataChannel_t51552F3ED53B6722654F04B70118D0674754AAA8* ___U3COnDataChannelU3Ek__BackingField_7;
	// Unity.WebRTC.DelegateOnNegotiationNeeded Unity.WebRTC.RTCPeerConnection::<OnNegotiationNeeded>k__BackingField
	DelegateOnNegotiationNeeded_t89583A830AB8849F5B439A8804A7F0E9B5914202* ___U3COnNegotiationNeededU3Ek__BackingField_8;
	// Unity.WebRTC.DelegateOnTrack Unity.WebRTC.RTCPeerConnection::<OnTrack>k__BackingField
	DelegateOnTrack_t274AA48A2E8C802AE101CF2A09192E35DD1127BF* ___U3COnTrackU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.SetSessionDescriptionObserver> Unity.WebRTC.RTCPeerConnection::dictSetSessionDescriptionObserver
	Dictionary_2_tF04CFD307AEA3892DBE8D5C020079FB0E94AA471* ___dictSetSessionDescriptionObserver_10;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.CreateSessionDescriptionObserver> Unity.WebRTC.RTCPeerConnection::dictCreateSessionDescriptionObserver
	Dictionary_2_t6C2A6D2F50B04878141106312AC2959FE77E9685* ___dictCreateSessionDescriptionObserver_11;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Unity.WebRTC.RTCStatsCollectorCallback> Unity.WebRTC.RTCPeerConnection::dictCollectStatsCallback
	Dictionary_2_t0156089E42479D6FB761A7410B15912523AFADE3* ___dictCollectStatsCallback_12;
};

// Unity.WebRTC.RTCStatsReport
struct RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RTCStatsReport::self
	intptr_t ___self_0;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.WebRTC.RTCStats> Unity.WebRTC.RTCStatsReport::m_dictStats
	Dictionary_2_t88D75784F0AAA9D4004B273F35E693EAF8FC3EF8* ___m_dictStats_1;
	// System.Boolean Unity.WebRTC.RTCStatsReport::disposed
	bool ___disposed_2;
};

// Unity.WebRTC.RefCountedObject
struct RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RefCountedObject::self
	intptr_t ___self_0;
	// System.Boolean Unity.WebRTC.RefCountedObject::disposed
	bool ___disposed_1;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// Unity.WebRTC.UnityVideoRenderer
struct UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.UnityVideoRenderer::self
	intptr_t ___self_0;
	// Unity.WebRTC.VideoStreamTrack Unity.WebRTC.UnityVideoRenderer::track
	VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* ___track_1;
	// System.Boolean Unity.WebRTC.UnityVideoRenderer::disposed
	bool ___disposed_2;
	// UnityEngine.Texture Unity.WebRTC.UnityVideoRenderer::<Texture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CTextureU3Ek__BackingField_3;
};

// Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9D1016FEA01FFF35972F0B752612F7AE79CFABD2  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::ptrRenderer
	intptr_t ___ptrRenderer_0;
	// System.Int32 Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::width
	int32_t ___width_1;
	// System.Int32 Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::height
	int32_t ___height_2;
};

// Unity.WebRTC.WebRTC/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass31_0::ptr
	intptr_t ___ptr_0;
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass31_0::ptrObserver
	intptr_t ___ptrObserver_1;
	// Unity.WebRTC.RTCErrorType Unity.WebRTC.WebRTC/<>c__DisplayClass31_0::type
	int32_t ___type_2;
	// System.String Unity.WebRTC.WebRTC/<>c__DisplayClass31_0::message
	String_t* ___message_3;
};

// Unity.WebRTC.WebRTC/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass32_0::ptr
	intptr_t ___ptr_0;
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass32_0::ptrObserver
	intptr_t ___ptrObserver_1;
	// Unity.WebRTC.RTCErrorType Unity.WebRTC.WebRTC/<>c__DisplayClass32_0::type
	int32_t ___type_2;
	// System.String Unity.WebRTC.WebRTC/<>c__DisplayClass32_0::message
	String_t* ___message_3;
};

// Unity.WebRTC.WebRTC/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::ptr
	intptr_t ___ptr_0;
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::ptrObserver
	intptr_t ___ptrObserver_1;
	// Unity.WebRTC.RTCSdpType Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::type
	int32_t ___type_2;
	// System.String Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::sdp
	String_t* ___sdp_3;
	// Unity.WebRTC.RTCErrorType Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::errorType
	int32_t ___errorType_4;
	// System.String Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::message
	String_t* ___message_5;
};

// Unity.WebRTC.WebRTC/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass34_0::ptrReport
	intptr_t ___ptrReport_0;
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass34_0::ptr
	intptr_t ___ptr_1;
	// System.IntPtr Unity.WebRTC.WebRTC/<>c__DisplayClass34_0::ptrCallback
	intptr_t ___ptrCallback_2;
};

// Unity.WebRTC.WebRTC/CallbackObject
struct CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.WebRTC/CallbackObject::ptr
	intptr_t ___ptr_0;
	// System.Action Unity.WebRTC.WebRTC/CallbackObject::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_1;
};

// System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>
struct WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>
struct WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// Unity.WebRTC.CreateSessionDescriptionObserver
struct CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.Action`4<Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String> Unity.WebRTC.CreateSessionDescriptionObserver::onCreateSessionDescription
	Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928* ___onCreateSessionDescription_6;
};

// Unity.WebRTC.MediaStreamTrack
struct MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6  : public RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC
{
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

// Unity.WebRTC.RTCRtpTransceiverInitInternal
struct RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558 
{
	// Unity.WebRTC.RTCRtpTransceiverDirection Unity.WebRTC.RTCRtpTransceiverInitInternal::direction
	int32_t ___direction_0;
	// Unity.WebRTC.MarshallingArray`1<Unity.WebRTC.RTCRtpEncodingParametersInternal> Unity.WebRTC.RTCRtpTransceiverInitInternal::sendEncodings
	MarshallingArray_1_t376555BAE71EEC27AAA84D82B4B195A45F1A96E6 ___sendEncodings_1;
	// Unity.WebRTC.MarshallingArray`1<System.IntPtr> Unity.WebRTC.RTCRtpTransceiverInitInternal::streams
	MarshallingArray_1_t201C4D66026887C428830F15CDC5D30E0168F857 ___streams_2;
};

// Unity.WebRTC.RTCSessionDescriptionAsyncOperation
struct RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C  : public AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4
{
	// Unity.WebRTC.RTCSessionDescription Unity.WebRTC.RTCSessionDescriptionAsyncOperation::<Desc>k__BackingField
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___U3CDescU3Ek__BackingField_3;
};

// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation
struct RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49  : public AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4
{
};

// Unity.WebRTC.RTCStatsCollectorCallback
struct RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.Action`1<Unity.WebRTC.RTCStatsReport> Unity.WebRTC.RTCStatsCollectorCallback::onStatsDelivered
	Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C* ___onStatsDelivered_6;
};

// Unity.WebRTC.RTCStatsReportAsyncOperation
struct RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264  : public AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4
{
	// Unity.WebRTC.RTCStatsReport Unity.WebRTC.RTCStatsReportAsyncOperation::<Value>k__BackingField
	RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___U3CValueU3Ek__BackingField_3;
};

// Unity.WebRTC.SetSessionDescriptionObserver
struct SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
	// System.Action`2<Unity.WebRTC.RTCErrorType,System.String> Unity.WebRTC.SetSessionDescriptionObserver::onSetSessionDescription
	Action_2_t7EF488960820B12EED4789F882AE94B43F35042F* ___onSetSessionDescription_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<Unity.WebRTC.RTCStatsReport>
struct Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.WebRTC.RTCErrorType,System.String>
struct Action_2_t7EF488960820B12EED4789F882AE94B43F35042F  : public MulticastDelegate_t
{
};

// System.Action`4<Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String>
struct Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,Unity.WebRTC.RTCStatsReport>
struct Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905  : public MulticastDelegate_t
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateAudioReceive
struct DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateCollectStats
struct DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateCreateGetStats
struct DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateDebugLog
struct DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeCreateSessionDesc
struct DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack
struct DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack
struct DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnClose
struct DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnConnectionStateChange
struct DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnDataChannel
struct DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceCandidate
struct DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceConnectionChange
struct DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnIceGatheringChange
struct DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnMessage
struct DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnNegotiationNeeded
struct DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnOpen
struct DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnRemoveTrack
struct DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateNativeOnTrack
struct DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateSetLocalDescription
struct DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateSetRemoteDescription
struct DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1  : public MulticastDelegate_t
{
};

// Unity.WebRTC.DelegateVideoFrameResize
struct DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// Unity.WebRTC.VideoStreamTrack
struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B  : public MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6
{
	// Unity.WebRTC.UnityVideoRenderer Unity.WebRTC.VideoStreamTrack::m_renderer
	UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* ___m_renderer_3;
	// Unity.WebRTC.VideoTrackSource Unity.WebRTC.VideoStreamTrack::m_source
	VideoTrackSource_tF200221BAF0F918B2D8E13703E311341F766B772* ___m_source_4;
	// Unity.WebRTC.OnVideoReceived Unity.WebRTC.VideoStreamTrack::OnVideoReceived
	OnVideoReceived_t80CCCD0B7FCFF0CBA7DC86AD9C22E7EFADC4EACF* ___OnVideoReceived_5;
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>
struct ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_9;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>

// System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>
struct List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WeakReference_1U5BU5D_t64ED4A0B23C0553EC96AC47F2219B3056F2C6511* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Tuple`2<System.Action,System.Single>

// System.Tuple`2<System.Action,System.Single>

// System.Tuple`2<UnityEngine.Object,System.Single>

// System.Tuple`2<UnityEngine.Object,System.Single>

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// Unity.WebRTC.NativeMethods

// Unity.WebRTC.NativeMethods

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.SynchronizationContext

// Unity.WebRTC.VideoDecoderMethods
struct VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields
{
	// UnityEngine.Rendering.CommandBuffer Unity.WebRTC.VideoDecoderMethods::_command
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____command_0;
};

// Unity.WebRTC.VideoDecoderMethods

// Unity.WebRTC.VideoEncoderMethods
struct VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields
{
	// UnityEngine.Rendering.CommandBuffer Unity.WebRTC.VideoEncoderMethods::_command
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____command_0;
};

// Unity.WebRTC.VideoEncoderMethods

// Unity.WebRTC.WeakReferenceExtension

// Unity.WebRTC.WeakReferenceExtension

// Unity.WebRTC.WeakReferenceTable

// Unity.WebRTC.WeakReferenceTable

// Unity.WebRTC.WebRTC
struct WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields
{
	// Unity.WebRTC.Context Unity.WebRTC.WebRTC::s_context
	Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* ___s_context_1;
	// System.Threading.SynchronizationContext Unity.WebRTC.WebRTC::s_syncContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___s_syncContext_2;
};

// Unity.WebRTC.WebRTC

// Unity.WebRTC.WebRTC/<>c
struct U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_StaticFields
{
	// Unity.WebRTC.WebRTC/<>c Unity.WebRTC.WebRTC/<>c::<>9
	U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9* ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Unity.WebRTC.RTCStatsReport> Unity.WebRTC.WebRTC/<>c::<>9__34_1
	Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* ___U3CU3E9__34_1_1;
};

// Unity.WebRTC.WebRTC/<>c

// Unity.WebRTC.WebRTC/<>c__DisplayClass27_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass27_0

// Unity.WebRTC.WebRTC/<Update>d__6

// Unity.WebRTC.WebRTC/<Update>d__6

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<Unity.WebRTC.RTCBundlePolicy>

// System.Nullable`1<Unity.WebRTC.RTCBundlePolicy>

// System.Nullable`1<Unity.WebRTC.RTCIceTransportPolicy>

// System.Nullable`1<Unity.WebRTC.RTCIceTransportPolicy>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// Unity.WebRTC.CandidateInternal

// Unity.WebRTC.CandidateInternal

// System.Double

// System.Double

// Unity.WebRTC.ExecutableUnitySynchronizationContext
struct ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_StaticFields
{
	// System.Threading.SynchronizationContext Unity.WebRTC.ExecutableUnitySynchronizationContext::s_MainThreadContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___s_MainThreadContext_7;
};

// Unity.WebRTC.ExecutableUnitySynchronizationContext

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// Unity.WebRTC.OptionalBool

// Unity.WebRTC.OptionalBool

// Unity.WebRTC.OptionalInt

// Unity.WebRTC.OptionalInt

// Unity.WebRTC.RTCError

// Unity.WebRTC.RTCError

// Unity.WebRTC.RTCIceCandidateInitInternal

// Unity.WebRTC.RTCIceCandidateInitInternal

// Unity.WebRTC.RTCIceServer

// Unity.WebRTC.RTCIceServer

// Unity.WebRTC.RTCOfferAnswerOptions
struct RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_StaticFields
{
	// Unity.WebRTC.RTCOfferAnswerOptions Unity.WebRTC.RTCOfferAnswerOptions::Default
	RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F ___Default_0;
};

// Unity.WebRTC.RTCOfferAnswerOptions

// Unity.WebRTC.RTCSessionDescription

// Unity.WebRTC.RTCSessionDescription

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// Unity.WebRTC.AsyncOperationBase

// Unity.WebRTC.AsyncOperationBase

// UnityEngine.Rendering.CommandBuffer

// UnityEngine.Rendering.CommandBuffer

// Unity.WebRTC.Context

// Unity.WebRTC.Context

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.WebRTC.RTCConfiguration

// Unity.WebRTC.RTCConfiguration

// Unity.WebRTC.RTCConfigurationInternal

// Unity.WebRTC.RTCConfigurationInternal

// Unity.WebRTC.RTCDataChannelInitInternal

// Unity.WebRTC.RTCDataChannelInitInternal

// Unity.WebRTC.RTCPeerConnection

// Unity.WebRTC.RTCPeerConnection

// Unity.WebRTC.RTCStatsReport

// Unity.WebRTC.RTCStatsReport

// System.Runtime.InteropServices.SafeHandle

// System.Runtime.InteropServices.SafeHandle

// Unity.WebRTC.UnityVideoRenderer

// Unity.WebRTC.UnityVideoRenderer

// Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0

// Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass31_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass31_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass32_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass32_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass33_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass33_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass34_0

// Unity.WebRTC.WebRTC/<>c__DisplayClass34_0

// Unity.WebRTC.WebRTC/CallbackObject

// Unity.WebRTC.WebRTC/CallbackObject

// System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>

// System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>

// System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>

// System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>

// Unity.WebRTC.CreateSessionDescriptionObserver

// Unity.WebRTC.CreateSessionDescriptionObserver

// Unity.WebRTC.RTCRtpTransceiverInitInternal

// Unity.WebRTC.RTCRtpTransceiverInitInternal

// Unity.WebRTC.RTCSessionDescriptionAsyncOperation

// Unity.WebRTC.RTCSessionDescriptionAsyncOperation

// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation

// Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation

// Unity.WebRTC.RTCStatsCollectorCallback

// Unity.WebRTC.RTCStatsCollectorCallback

// Unity.WebRTC.RTCStatsReportAsyncOperation

// Unity.WebRTC.RTCStatsReportAsyncOperation

// Unity.WebRTC.SetSessionDescriptionObserver

// Unity.WebRTC.SetSessionDescriptionObserver

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.WeakReference

// System.WeakReference

// System.Action`1<Unity.WebRTC.RTCStatsReport>

// System.Action`1<Unity.WebRTC.RTCStatsReport>

// System.Action`2<Unity.WebRTC.RTCErrorType,System.String>

// System.Action`2<Unity.WebRTC.RTCErrorType,System.String>

// System.Action`4<Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String>

// System.Action`4<Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String>

// System.Func`2<System.IntPtr,Unity.WebRTC.RTCStatsReport>

// System.Func`2<System.IntPtr,Unity.WebRTC.RTCStatsReport>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// Unity.WebRTC.DelegateAudioReceive

// Unity.WebRTC.DelegateAudioReceive

// Unity.WebRTC.DelegateCollectStats

// Unity.WebRTC.DelegateCollectStats

// Unity.WebRTC.DelegateCreateGetStats

// Unity.WebRTC.DelegateCreateGetStats

// Unity.WebRTC.DelegateDebugLog

// Unity.WebRTC.DelegateDebugLog

// Unity.WebRTC.DelegateNativeCreateSessionDesc

// Unity.WebRTC.DelegateNativeCreateSessionDesc

// Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack

// Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack

// Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack

// Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack

// Unity.WebRTC.DelegateNativeOnClose

// Unity.WebRTC.DelegateNativeOnClose

// Unity.WebRTC.DelegateNativeOnConnectionStateChange

// Unity.WebRTC.DelegateNativeOnConnectionStateChange

// Unity.WebRTC.DelegateNativeOnDataChannel

// Unity.WebRTC.DelegateNativeOnDataChannel

// Unity.WebRTC.DelegateNativeOnIceCandidate

// Unity.WebRTC.DelegateNativeOnIceCandidate

// Unity.WebRTC.DelegateNativeOnIceConnectionChange

// Unity.WebRTC.DelegateNativeOnIceConnectionChange

// Unity.WebRTC.DelegateNativeOnIceGatheringChange

// Unity.WebRTC.DelegateNativeOnIceGatheringChange

// Unity.WebRTC.DelegateNativeOnMessage

// Unity.WebRTC.DelegateNativeOnMessage

// Unity.WebRTC.DelegateNativeOnNegotiationNeeded

// Unity.WebRTC.DelegateNativeOnNegotiationNeeded

// Unity.WebRTC.DelegateNativeOnOpen

// Unity.WebRTC.DelegateNativeOnOpen

// Unity.WebRTC.DelegateNativeOnRemoveTrack

// Unity.WebRTC.DelegateNativeOnRemoveTrack

// Unity.WebRTC.DelegateNativeOnTrack

// Unity.WebRTC.DelegateNativeOnTrack

// Unity.WebRTC.DelegateSetLocalDescription

// Unity.WebRTC.DelegateSetLocalDescription

// Unity.WebRTC.DelegateSetRemoteDescription

// Unity.WebRTC.DelegateSetRemoteDescription

// Unity.WebRTC.DelegateVideoFrameResize

// Unity.WebRTC.DelegateVideoFrameResize

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// System.Threading.SendOrPostCallback

// System.Threading.SendOrPostCallback

// Unity.WebRTC.VideoStreamTrack
struct VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>> Unity.WebRTC.VideoStreamTrack::s_tracks
	ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E* ___s_tracks_2;
};

// Unity.WebRTC.VideoStreamTrack

// System.Threading.WaitCallback

// System.Threading.WaitCallback
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Unity.WebRTC.RTCIceServer[]
struct RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5  : public RuntimeArray
{
	ALIGN_FIELD (8) RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B m_Items[1];

	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___credential_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___urls_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___username_3), (void*)NULL);
		#endif
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___credential_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___urls_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___username_3), (void*)NULL);
		#endif
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke_back(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke_cleanup(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com_back(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled);
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com_cleanup(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke(const RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF& unmarshaled, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_back(const RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF& unmarshaled);
IL2CPP_EXTERN_C void RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_cleanup(RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled);
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke(const RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B& unmarshaled, RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_back(const RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled, RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B& unmarshaled);
IL2CPP_EXTERN_C void RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_cleanup(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke(const CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5& unmarshaled, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_back(const CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5& unmarshaled);
IL2CPP_EXTERN_C void CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_cleanup(CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke& marshaled);

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`4<System.Int32Enum,System.Object,System.Int32Enum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_m69BD018353B4921BE60227D107E008BBD40F2F42_gshared (Action_4_t702E420CFD4BC843DFDC38F609F03BE97A705FF2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mCAAE199274CB859466485ECBAE0128A25C8BBAAE_gshared (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Nullable`1<T> Unity.WebRTC.OptionalInt::AsEnum<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 OptionalInt_AsEnum_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m6AE386DA95BA41152CB593F2E575EC1B7795B24D_gshared (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* __this, const RuntimeMethod* method) ;
// Unity.WebRTC.OptionalInt Unity.WebRTC.OptionalInt::FromEnum<System.Int32Enum>(System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 OptionalInt_FromEnum_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7734D75F3FCD564E0B4CE2B853D22602930BD6B8_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 ___0_a, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Single>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t1C12C1C5166B19972122FDA1517889C5C1547CF6* Tuple_Create_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m550F16E9905E3002D55073C4E7E96CFE9733ABDC_gshared (RuntimeObject* ___0_item1, float ___1_item2, const RuntimeMethod* method) ;
// System.Void System.TupleExtensions::Deconstruct<System.Object,System.Single>(System.Tuple`2<T1,T2>,T1&,T2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TupleExtensions_Deconstruct_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA81E01B98C022B40E14D550D67CDD3CC8A2BA043_gshared (Tuple_2_t1C12C1C5166B19972122FDA1517889C5C1547CF6* ___0_value, RuntimeObject** ___1_item1, float* ___2_item2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Values_m842F58B0480D255CFE6C36AA08B98156A887D0CD_gshared (ConcurrentDictionary_2_t211FFBACF3ECB80F94746F5D14A5187C12AC7E96* __this, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___0_target, const RuntimeMethod* method) ;
// T Unity.WebRTC.RTCPeerConnection::FindObserver<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RTCPeerConnection_FindObserver_TisRuntimeObject_mF02EE6E9984AB1AB905C2412C94A7E90F573F985_gshared (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::RemoveObserver<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCPeerConnection_RemoveObserver_TisRuntimeObject_m17D0206BA7D6BBA0D64F2ECA0A49E870F008CD63_gshared (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, RuntimeObject* ___0_observer, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.IntPtr,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mAFAD1CF4C74CF3EE710FB79F7B75A5B0F394B597_gshared (Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T Unity.WebRTC.WebRTC::FindOrCreate<System.Object>(System.IntPtr,System.Func`2<System.IntPtr,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRTC_FindOrCreate_TisRuntimeObject_m86C0B3612BA40549A222444A25B278AF5860C5B0_gshared (intptr_t ___0_ptr, Func_2_t2F4DF8DD55CA5B1EB10C3305B321F7A809BAEC09* ___1_constructor, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Unity.WebRTC.WeakReferenceTable Unity.WebRTC.WebRTC::get_Table()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737 (const RuntimeMethod* method) ;
// System.Object Unity.WebRTC.WeakReferenceTable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.UnityVideoRenderer::OnVideoFrameResizeInternal(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVideoRenderer_OnVideoFrameResizeInternal_mFD8DAB07859B9B14BFDA580DB0E6C4EBB76A66A9 (UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Object Unity.WebRTC.WeakReferenceExtension::NullOrValue(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceExtension_NullOrValue_mCCB47813C25920250758BDFD491EDD481840AAD9 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___0_reference, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_mF6A8073F1C481299FDAECC91751DB74E26B139CC_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::set_IsDone(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsDone_mCDCE05088AFBCB4DC0BCCC2E94554E34F7E3BF49_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.WebRTC.RTCStatsReport>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE563E2DC69E24CDE51F52FD67CF0B2A09EC2DE9B (Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Unity.WebRTC.RTCStatsReportAsyncOperation::set_Value(Unity.WebRTC.RTCStatsReport)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation_set_Value_mCE15A3F7377BE14D2CD1CE8C90DC244E19B224B8_inline (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::set_IsError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.AsyncOperationBase::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`4<Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_mA6755A075D1B0C7331238B0C2521C5ED0062D336 (Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_4__ctor_m69BD018353B4921BE60227D107E008BBD40F2F42_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Unity.WebRTC.AsyncOperationBase::set_Error(Unity.WebRTC.RTCError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCSessionDescriptionAsyncOperation::set_Desc(Unity.WebRTC.RTCSessionDescription)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCSessionDescriptionAsyncOperation_set_Desc_m63FD708E5421DB16773B1A3A216834550C0F4F54_inline (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`2<Unity.WebRTC.RTCErrorType,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF68D0319788EC0F1CB3F2EC24EF4CCBBA08EF7AD (Action_2_t7EF488960820B12EED4789F882AE94B43F35042F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7EF488960820B12EED4789F882AE94B43F35042F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mCAAE199274CB859466485ECBAE0128A25C8BBAAE_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Nullable`1<T> Unity.WebRTC.OptionalInt::AsEnum<Unity.WebRTC.RTCIceTransportPolicy>()
inline Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 (*) (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409*, const RuntimeMethod*))OptionalInt_AsEnum_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m6AE386DA95BA41152CB593F2E575EC1B7795B24D_gshared)(__this, method);
}
// System.Nullable`1<T> Unity.WebRTC.OptionalInt::AsEnum<Unity.WebRTC.RTCBundlePolicy>()
inline Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07 (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 (*) (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409*, const RuntimeMethod*))OptionalInt_AsEnum_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m6AE386DA95BA41152CB593F2E575EC1B7795B24D_gshared)(__this, method);
}
// System.Nullable`1<System.Int32> Unity.WebRTC.OptionalInt::op_Implicit(Unity.WebRTC.OptionalInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 OptionalInt_op_Implicit_m259CFA089069B9DF1EAD390421CA881B207328DB (OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 ___0_a, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Unity.WebRTC.OptionalBool::op_Implicit(Unity.WebRTC.OptionalBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 OptionalBool_op_Implicit_mBE6DB6F6015AF67BD62DFC4316FF2C4AEE5ABE51 (OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 ___0_a, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCConfiguration::.ctor(Unity.WebRTC.RTCConfigurationInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCConfiguration__ctor_mC1C8302BB76A1C7184F219CFB7F7C7780EC77253 (RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* __this, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* ___0_v, const RuntimeMethod* method) ;
// Unity.WebRTC.OptionalInt Unity.WebRTC.OptionalInt::FromEnum<Unity.WebRTC.RTCIceTransportPolicy>(System.Nullable`1<T>)
inline OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_mE422638B395B90434A8B80B5093454E425817288 (Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 ___0_a, const RuntimeMethod* method)
{
	return ((  OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 (*) (Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67, const RuntimeMethod*))OptionalInt_FromEnum_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7734D75F3FCD564E0B4CE2B853D22602930BD6B8_gshared)(___0_a, method);
}
// Unity.WebRTC.OptionalInt Unity.WebRTC.OptionalInt::FromEnum<Unity.WebRTC.RTCBundlePolicy>(System.Nullable`1<T>)
inline OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mFECA73FEE23A5DDF23CD364D77E15A2AD6B977C5 (Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 ___0_a, const RuntimeMethod* method)
{
	return ((  OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 (*) (Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319, const RuntimeMethod*))OptionalInt_FromEnum_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7734D75F3FCD564E0B4CE2B853D22602930BD6B8_gshared)(___0_a, method);
}
// Unity.WebRTC.OptionalInt Unity.WebRTC.OptionalInt::op_Implicit(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 OptionalInt_op_Implicit_m9362D68641B85EA74EDF815796FAE1513C6D23D6 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_a, const RuntimeMethod* method) ;
// Unity.WebRTC.OptionalBool Unity.WebRTC.OptionalBool::op_Implicit(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 OptionalBool_op_Implicit_mE09FCC9C594638A58B725BA5439D101FDA8383BB (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_a, const RuntimeMethod* method) ;
// Unity.WebRTC.RTCConfigurationInternal Unity.WebRTC.RTCConfiguration::Cast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 RTCConfiguration_Cast_mD3A14BFF319BC3F441654EC5AE18A2C7D5BAE309 (RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC::DebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DebugLog_m02648DBBEBE55B23CAFE5966A09202B7097FED29 (String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC::OnSetLocalDescription(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_OnSetLocalDescription_mF5A13B3B5348A49DB11F2C32DAF3E4F55054AB5D (intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC::OnSetRemoteDescription(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_OnSetRemoteDescription_m78DFBA03C6BDA1C5BD93452B72D1A6DBBF4B176D (intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC::OnCreateSessionDescription(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_OnCreateSessionDescription_m5CE28E67A12E3D161D1787F38C6521F8F3FE1EC0 (intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC::OnCollectStatsCallback(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_OnCollectStatsCallback_m74A606E07AF78A1149C8CD261CE17A590260598F (intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_ptrReport, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.ExecutableUnitySynchronizationContext::.ctor(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutableUnitySynchronizationContext__ctor_mF06438C745A18C6488B00F77924CB58397F3FBCB (ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* __this, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_context, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateDebugLog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateDebugLog__ctor_m1414D159BF6B233BF3FE9DDD9089953CA39BB43D (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.NativeMethods::RegisterDebugLog(Unity.WebRTC.DelegateDebugLog,System.Boolean,Unity.WebRTC.NativeLoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_RegisterDebugLog_m7DC610118783E426B611E1502F1A591E3D9A83F5 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* ___0_func, bool ___1_enableNativeLog, int32_t ___2_nativeLoggingSeverity, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateCollectStats::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCollectStats__ctor_mDBC2DECA89282C655DE7B6D6E79D4BA29DE87177 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.NativeMethods::StatsCollectorRegisterCallback(Unity.WebRTC.DelegateCollectStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_StatsCollectorRegisterCallback_mBA80B37C60A9C983C9D9A9DD022252D4883CB084 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* ___0_onCollectStats, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateNativeCreateSessionDesc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeCreateSessionDesc__ctor_m13F24F4DE75A7E506F3A6FE41375AE084914F2A6 (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.NativeMethods::CreateSessionDescriptionObserverRegisterCallback(Unity.WebRTC.DelegateNativeCreateSessionDesc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_CreateSessionDescriptionObserverRegisterCallback_mB92BC2E18C603C9B6054B068B57D2265537BC1E1 (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* ___0_callback, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateSetLocalDescription::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetLocalDescription__ctor_mCBB54C6F60897A1D4BC3FDC0138436DA3F9C5379 (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.NativeMethods::SetLocalDescriptionObserverRegisterCallback(Unity.WebRTC.DelegateSetLocalDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetLocalDescriptionObserverRegisterCallback_m5AA1122F90FD11E1C945B812C1987ADDC42054B2 (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* ___0_callback, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateSetRemoteDescription::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetRemoteDescription__ctor_m1724BF83CD9014EB26D16D61368C03DF3696D8A6 (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.NativeMethods::SetRemoteDescriptionObserverRegisterCallback(Unity.WebRTC.DelegateSetRemoteDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetRemoteDescriptionObserverRegisterCallback_m58D71BE187F45AB466F8DE17DB37A37C9627E7E4 (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* ___0_callback, const RuntimeMethod* method) ;
// Unity.WebRTC.Context Unity.WebRTC.Context::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* Context_Create_mFF7B25EE94DC5910D1796AC75DD0B9E1A89DEB9B (int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.NativeMethods::SetCurrentContext(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetCurrentContext_mDBB7B2ACECCE37E4D2E59BB17D98A7F457C7784B (intptr_t ___0_context, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<Update>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__6__ctor_mA63FA1407735301248BC325C3243CADC32978D48 (U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.ExecutableUnitySynchronizationContext::ExecutePendingTasks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecutableUnitySynchronizationContext_ExecutePendingTasks_mD3D99C61F54F1E7BDE1A9D2F3E9F866F30CB5467 (ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* __this, int64_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.Context::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context_Dispose_mF3D351BD72BBBB0D85DC2CC9FFC5C4DD341A1289 (Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.WebRTC::NvEncSupportedPlatdorm(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTC_NvEncSupportedPlatdorm_m10622BBEDED5036BD762EAF5E77E53E1EA70915D (int32_t ___0_platform, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat Unity.WebRTC.WebRTC::GetSupportedGraphicsFormat(UnityEngine.Rendering.GraphicsDeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTC_GetSupportedGraphicsFormat_m59205D7EF10D5B31BE34BF220418DBE1A74CCFE8 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5 (int32_t ___0_format, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetTextureFormat_mBFDD045E2526CDF13BC3C34D8E342F4797D467F4 (int32_t ___0_format, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<UnityEngine.Object,System.Single>(T1,T2)
inline Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A* Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4CC2105192476F3A0C170E75270B730745E30854 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_item1, float ___1_item2, const RuntimeMethod* method)
{
	return ((  Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A* (*) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, float, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m550F16E9905E3002D55073C4E7E96CFE9733ABDC_gshared)(___0_item1, ___1_item2, method);
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Action,System.Single>(T1,T2)
inline Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B* Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m69ADBF3AA294F739E635BC5A136D30EAD4685D81 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item1, float ___1_item2, const RuntimeMethod* method)
{
	return ((  Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B* (*) (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, float, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m550F16E9905E3002D55073C4E7E96CFE9733ABDC_gshared)(___0_item1, ___1_item2, method);
}
// System.Void Unity.WebRTC.WebRTC/CallbackObject::.ctor(System.IntPtr,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackObject__ctor_m7C2A7B197E50D2A739B0CBF3A2C84D4D902CFFC3 (CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* __this, intptr_t ___0_ptr, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean Unity.WebRTC.WeakReferenceTable::ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReferenceTable_ContainsKey_m8823F9AE88C9A1784AA624FE6BE23A07DC1D1337 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.TupleExtensions::Deconstruct<UnityEngine.Object,System.Single>(System.Tuple`2<T1,T2>,T1&,T2&)
inline void TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m85A39A000D95BC0AF3132135DF9B5378090A582A (Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A* ___0_value, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___1_item1, float* ___2_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, float*, const RuntimeMethod*))TupleExtensions_Deconstruct_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA81E01B98C022B40E14D550D67CDD3CC8A2BA043_gshared)(___0_value, ___1_item1, ___2_item2, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m0F5D123019758589A5D386468D8A59E7702FBB4E (U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6* __this, const RuntimeMethod* method) ;
// System.Void System.TupleExtensions::Deconstruct<System.Action,System.Single>(System.Tuple`2<T1,T2>,T1&,T2&)
inline void TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m962CB786A8BA9B87A7036765B61D02EED0FF1EBB (Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B* ___0_value, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** ___1_item1, float* ___2_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**, float*, const RuntimeMethod*))TupleExtensions_Deconstruct_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA81E01B98C022B40E14D550D67CDD3CC8A2BA043_gshared)(___0_value, ___1_item1, ___2_item2, method);
}
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m24B9C1887DBABE1F408E31475AF15B9B9A08854D (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m0E18068606A3737D8513B1FB3C9EB7992F3D3540 (U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC::Sync(System.IntPtr,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Sync_m571146E350E2692F216D7AC93C417873D7D21473 (intptr_t ___0_ptr, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m69D64FB4A2DCC19008A8212540E9D7158EA6B1A2 (U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mFD1704B5BF3B4C5CC60D870EF5B6F04D36EFB6DC (U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m594FB7120950A08AD80EC2AB4B1284550AAAE10E (U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>::.ctor()
inline void List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD (List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.ICollection Unity.WebRTC.WeakReferenceTable::get_CopiedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceTable_get_CopiedValues_m2DAEF7C7602D0F4A83F9DD8C6F0CF31B5FA0B2AE (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>::.ctor(T)
inline void WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348 (WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB* __this, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* ___0_target, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB*, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*, const RuntimeMethod*))WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared)(__this, ___0_target, method);
}
// System.Void System.Collections.Generic.List`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>>::Add(T)
inline void List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_inline (List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* __this, WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887*, WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>::get_Values()
inline RuntimeObject* ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392 (ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E*, const RuntimeMethod*))ConcurrentDictionary_2_get_Values_m842F58B0480D255CFE6C36AA08B98156A887D0CD_gshared)(__this, method);
}
// System.Boolean System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>::TryGetTarget(T&)
inline bool WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8 (WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* __this, VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B** ___0_target, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31*, VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B**, const RuntimeMethod*))WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared)(__this, ___0_target, method);
}
// System.Void Unity.WebRTC.VideoStreamTrack::UpdateSendTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoStreamTrack_UpdateSendTexture_m61BA118B3E588ED03B37032E03CDC284584ABC0F (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.VideoStreamTrack::UpdateReceiveTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoStreamTrack_UpdateReceiveTexture_m94AA8A04CEB096F5D0C8A97A30536E04C5385F1C (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// T Unity.WebRTC.RTCPeerConnection::FindObserver<Unity.WebRTC.SetSessionDescriptionObserver>(System.IntPtr)
inline SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* RTCPeerConnection_FindObserver_TisSetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_m0AEF39144C13BD169B1EA7AD2AFA77231724F653 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	return ((  SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* (*) (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*, intptr_t, const RuntimeMethod*))RTCPeerConnection_FindObserver_TisRuntimeObject_mF02EE6E9984AB1AB905C2412C94A7E90F573F985_gshared)(__this, ___0_ptr, method);
}
// System.Void Unity.WebRTC.RTCPeerConnection::RemoveObserver(Unity.WebRTC.SetSessionDescriptionObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCPeerConnection_RemoveObserver_m1A698B749FAA5F7DCA1525863E1D5141377DA2D7 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* ___0_observer, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.SetSessionDescriptionObserver::Invoke(Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSessionDescriptionObserver_Invoke_m64E83262C6F6808D401512CFC931BE40C287DB42 (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* __this, int32_t ___0_type, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// T Unity.WebRTC.RTCPeerConnection::FindObserver<Unity.WebRTC.CreateSessionDescriptionObserver>(System.IntPtr)
inline CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* RTCPeerConnection_FindObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m97F45CDD68330CEA8CE48398CD556EE4C0AB5C31 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	return ((  CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* (*) (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*, intptr_t, const RuntimeMethod*))RTCPeerConnection_FindObserver_TisRuntimeObject_mF02EE6E9984AB1AB905C2412C94A7E90F573F985_gshared)(__this, ___0_ptr, method);
}
// System.Void Unity.WebRTC.RTCPeerConnection::RemoveObserver<Unity.WebRTC.CreateSessionDescriptionObserver>(T)
inline void RTCPeerConnection_RemoveObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m03D0237B88306474726F5B853C2663A3C3621EC8 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* ___0_observer, const RuntimeMethod* method)
{
	((  void (*) (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*, CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38*, const RuntimeMethod*))RTCPeerConnection_RemoveObserver_TisRuntimeObject_m17D0206BA7D6BBA0D64F2ECA0A49E870F008CD63_gshared)(__this, ___0_observer, method);
}
// System.Void Unity.WebRTC.CreateSessionDescriptionObserver::Invoke(Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionDescriptionObserver_Invoke_m0C3EB83FABA76F9F268F867673D73D21551AB9B6 (CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* __this, int32_t ___0_type, String_t* ___1_sdp, int32_t ___2_errorType, String_t* ___3_message, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.IntPtr,Unity.WebRTC.RTCStatsReport>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCCB12086B6A368A15FE4FC0F3CB12E2DE81B4D52 (Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mAFAD1CF4C74CF3EE710FB79F7B75A5B0F394B597_gshared)(__this, ___0_object, ___1_method, method);
}
// T Unity.WebRTC.WebRTC::FindOrCreate<Unity.WebRTC.RTCStatsReport>(System.IntPtr,System.Func`2<System.IntPtr,T>)
inline RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* WebRTC_FindOrCreate_TisRTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448_mDE4EE6183E0FB2437EC94F938F25971B70E54AE4 (intptr_t ___0_ptr, Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* ___1_constructor, const RuntimeMethod* method)
{
	return ((  RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* (*) (intptr_t, Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905*, const RuntimeMethod*))WebRTC_FindOrCreate_TisRuntimeObject_m86C0B3612BA40549A222444A25B278AF5860C5B0_gshared)(___0_ptr, ___1_constructor, method);
}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.RTCPeerConnection::FindCollectStatsCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* RTCPeerConnection_FindCollectStatsCallback_m13ECB54B1852F9CCCBB0FC923E176CA584923774 (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCPeerConnection::RemoveCollectStatsCallback(Unity.WebRTC.RTCStatsCollectorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCPeerConnection_RemoveCollectStatsCallback_m52492D89DF37270A390DE550247AD9DF5331251C (RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* __this, RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* ___0_callback, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCStatsCollectorCallback::Invoke(Unity.WebRTC.RTCStatsReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsCollectorCallback_Invoke_m71E46F4BFCBE80CBBF3503B1005C73311C42DD87 (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___0_report, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.WebRTC/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m38F5BF7974FE71370451C536CB0385C31732EF80 (U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCStatsReport::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsReport__ctor_m30C5D705DBB7A98D49DD48EA21C70FFD12A367B4 (RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.CreateSessionDescriptionObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateSessionDescriptionObserver__ctor_m2D56A3A957F1C8445D20B0EA9F999F526DF78C3E (CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.SetSessionDescriptionObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSessionDescriptionObserver__ctor_mF66B1C7AAB7588F311BED5096560516E1CE2FFB9 (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCStatsCollectorCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132 (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventAndData(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, intptr_t ___0_callback, int32_t ___1_eventID, intptr_t ___2_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginCustomTextureUpdateV2(System.IntPtr,UnityEngine.Texture,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_IssuePluginCustomTextureUpdateV2_m2F0FCB75B743412D3AD504F7A95DE4D854A8D601 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, intptr_t ___0_callback, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_targetTexture, uint32_t ___2_userData, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RegisterDebugLog(Il2CppMethodPointer, uint8_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreate(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDestroy(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreatePeerConnection(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreatePeerConnectionWithConfig(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeletePeerConnection(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionClose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRestartIce(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSetConfiguration(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateDataChannel(intptr_t, intptr_t, char*, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteDataChannel(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrackSource(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateVideoTrackSource(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateVideoTrack(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrack(intptr_t, char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextStopMediaStreamTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextGetStatsList(intptr_t, intptr_t, uint64_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteStatsReport(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextAddRefPtr(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteRefPtr(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetConfiguration(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionCreateOffer(intptr_t, intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionCreateAnswer(intptr_t, intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL StatsCollectorRegisterCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL CreateSessionDescriptionObserverRegisterCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetLocalDescriptionObserverRegisterCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetRemoteDescriptionObserverRegisterCallback(Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterIceConnectionChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterConnectionStateChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterIceGatheringChange(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnIceCandidate(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSetLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, int32_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSetLocalDescriptionWithoutDescription(intptr_t, int32_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSetRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, int32_t*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionGetStats(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionSenderGetStats(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextGetSenderCapabilities(intptr_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextGetReceiverCapabilities(intptr_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void* DEFAULT_CALL PeerConnectionReceiverGetStats(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetPendingLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetPendingRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetCurrentLocalDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionGetCurrentRemoteDescription(intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionAddTrack(intptr_t, intptr_t, char*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithInit(intptr_t, intptr_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithType(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionAddTransceiverWithTypeAndInit(intptr_t, int32_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionRemoveTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL PeerConnectionAddIceCandidate(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CreateIceCandidate(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DeleteIceCandidate(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL IceCandidateGetCandidate(intptr_t, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL IceCandidateGetSdpLineIndex(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL IceCandidateGetSdp(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL IceCandidateGetSdpMid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetReceivers(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetSenders(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL PeerConnectionGetTransceivers(intptr_t, intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionIceConditionState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionSignalingState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL PeerConnectionIceGatheringState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnDataChannel(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnRenegotiationNeeded(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnTrack(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL PeerConnectionRegisterOnRemoveTrack(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL TransceiverGetCurrentDirection(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverStop(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetMid(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverGetDirection(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverSetDirection(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TransceiverSetCodecPreferences(intptr_t, intptr_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetReceiver(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TransceiverGetSender(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL SenderGetTrack(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SenderGetParameters(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SenderSetParameters(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL SenderReplaceTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ReceiverGetTrack(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ReceiverGetStreams(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DataChannelGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL DataChannelGetLabel(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL DataChannelGetProtocol(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint16_t DEFAULT_CALL DataChannelGetMaxRetransmits(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint16_t DEFAULT_CALL DataChannelGetMaxRetransmitTime(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL DataChannelGetOrdered(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL DataChannelGetBufferedAmount(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL DataChannelGetNegotiated(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL DataChannelGetReadyState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelSend(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelSendBinary(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelClose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnMessage(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnOpen(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DataChannelRegisterOnClose(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateMediaStream(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextRegisterMediaStreamObserver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextUnRegisterMediaStreamObserver(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL ContextCreateAudioTrackSink(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ContextDeleteAudioTrackSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackAddSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackRemoveSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioTrackSinkProcessAudio(intptr_t, float*, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamAddTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamRemoveTrack(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetVideoTracks(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetAudioTracks(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamRegisterOnAddTrack(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamRegisterOnRemoveTrack(intptr_t, intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MediaStreamTrackGetKind(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MediaStreamTrackGetReadyState(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL MediaStreamTrackGetID(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL MediaStreamTrackGetEnabled(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MediaStreamTrackSetEnabled(intptr_t, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL CreateVideoRenderer(intptr_t, Il2CppMethodPointer, uint8_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL GetVideoRendererId(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL DeleteVideoRenderer(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL VideoTrackAddOrUpdateSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL VideoTrackRemoveSink(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetCurrentContext(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetRenderEventFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetReleaseBuffersFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetUpdateTextureFunc(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AudioSourceProcessLocalAudio(intptr_t, intptr_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetJson(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetId(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsGetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL StatsGetTimestamp(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsGetMembers(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetName(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsMemberGetType(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL StatsMemberIsDefined(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL StatsMemberGetBool(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StatsMemberGetInt(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL StatsMemberGetUnsignedInt(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C int64_t DEFAULT_CALL StatsMemberGetLong(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C uint64_t DEFAULT_CALL StatsMemberGetUnsignedLong(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C double DEFAULT_CALL StatsMemberGetDouble(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetString(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetBoolArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetIntArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetUnsignedIntArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetLongArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetUnsignedLongArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetDoubleArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetStringArray(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetMapStringUint64(intptr_t, intptr_t*, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL StatsMemberGetMapStringDouble(intptr_t, intptr_t*, uint64_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m86F262D0E4401D88322FB044F0BEDD8677EDBDFD (U3CU3Ec__DisplayClass14_0_t9D1016FEA01FFF35972F0B752612F7AE79CFABD2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.WebRTC.UnityVideoRenderer/<>c__DisplayClass14_0::<OnVideoFrameResize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3COnVideoFrameResizeU3Eb__0_m46A707B142A7A706FB3C62980C272A6360B41032 (U3CU3Ec__DisplayClass14_0_t9D1016FEA01FFF35972F0B752612F7AE79CFABD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* V_0 = NULL;
	bool V_1 = false;
	{
		// if (WebRTC.Table[ptrRenderer] is UnityVideoRenderer renderer)
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_0;
		L_0 = WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737(NULL);
		intptr_t L_1 = __this->___ptrRenderer_0;
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91(L_0, L_3, NULL);
		V_0 = ((UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C*)IsInstClass((RuntimeObject*)L_4, UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C_il2cpp_TypeInfo_var));
		UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* L_5 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// renderer.OnVideoFrameResizeInternal(width, height);
		UnityVideoRenderer_t24E641A8728BE1567E68D6935ED16BA11567123C* L_7 = V_0;
		int32_t L_8 = __this->___width_1;
		int32_t L_9 = __this->___height_2;
		NullCheck(L_7);
		UnityVideoRenderer_OnVideoFrameResizeInternal_mFD8DAB07859B9B14BFDA580DB0E6C4EBB76A66A9(L_7, L_8, L_9, NULL);
	}

IL_0039:
	{
		// });
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
// System.Object Unity.WebRTC.WeakReferenceExtension::NullOrValue(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceExtension_NullOrValue_mCCB47813C25920250758BDFD491EDD481840AAD9 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___0_reference, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// return reference.IsAlive ? reference.Target : null;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_0 = ___0_reference;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_0);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = NULL;
		goto IL_0012;
	}

IL_000c:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = ___0_reference;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_2);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject* L_4 = V_0;
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
// System.Void Unity.WebRTC.WeakReferenceTable::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReferenceTable_Add_mB5ACAF4D38DF254FA79ED0754F555836D1A42F2C (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_table.Add(key, new WeakReference(value));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		RuntimeObject* L_1 = ___0_key;
		RuntimeObject* L_2 = ___1_value;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_3, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_0, L_1, L_3);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WeakReferenceTable::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReferenceTable_Remove_mC6B05133FA6FEBDFBFB19D29DE3D1DCB4FE5CA7A (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		// m_table.Remove(key);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		RuntimeObject* L_1 = ___0_key;
		NullCheck(L_0);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(40 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_0, L_1);
		// }
		return;
	}
}
// System.Object Unity.WebRTC.WeakReferenceTable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// WeakReference reference = m_table[key] as WeakReference;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		RuntimeObject* L_1 = ___0_key;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)IsInstClass((RuntimeObject*)L_2, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var));
		// return reference.NullOrValue();
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = WeakReferenceExtension_NullOrValue_mCCB47813C25920250758BDFD491EDD481840AAD9(L_3, NULL);
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// System.Collections.ICollection Unity.WebRTC.WeakReferenceTable::get_CopiedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakReferenceTable_get_CopiedValues_m2DAEF7C7602D0F4A83F9DD8C6F0CF31B5FA0B2AE (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var array = new object[m_table.Count];
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// int i = 0;
		V_1 = 0;
		// foreach (var value in m_table.Values)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->___m_table_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(39 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_4);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_2;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_5;
					if (!L_7)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_8 = V_5;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0028_1:
			{
				// foreach (var value in m_table.Values)
				RuntimeObject* L_9 = V_2;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_3 = L_10;
				// var reference = value as WeakReference;
				RuntimeObject* L_11 = V_3;
				V_4 = ((WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)IsInstClass((RuntimeObject*)L_11, WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var));
				// array[i] = reference.NullOrValue();
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
				int32_t L_13 = V_1;
				WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_14 = V_4;
				RuntimeObject* L_15;
				L_15 = WeakReferenceExtension_NullOrValue_mCCB47813C25920250758BDFD491EDD481840AAD9(L_14, NULL);
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_15);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_15);
				// i++;
				int32_t L_16 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_0047_1:
			{
				// foreach (var value in m_table.Values)
				RuntimeObject* L_17 = V_2;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// return array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		V_6 = (RuntimeObject*)L_19;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		RuntimeObject* L_20 = V_6;
		return L_20;
	}
}
// System.Void Unity.WebRTC.WeakReferenceTable::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReferenceTable_Clear_m80522C8CA06BF8EB66787518A9E716B3F750D115 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, const RuntimeMethod* method) 
{
	{
		// m_table.Clear();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(24 /* System.Void System.Collections.Hashtable::Clear() */, L_0);
		// }
		return;
	}
}
// System.Boolean Unity.WebRTC.WeakReferenceTable::ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReferenceTable_ContainsKey_m8823F9AE88C9A1784AA624FE6BE23A07DC1D1337 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return m_table.ContainsKey(key);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___m_table_0;
		RuntimeObject* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.WebRTC.WeakReferenceTable::TryGetValue(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReferenceTable_TryGetValue_m86712ACC628475D32755BBDE8C9611990B4B04D9 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// value = null;
		RuntimeObject** L_0 = ___1_value;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (!m_table.ContainsKey(key))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->___m_table_0;
		RuntimeObject* L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_1, L_2);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0028;
	}

IL_001b:
	{
		// value = this[key];
		RuntimeObject** L_5 = ___1_value;
		RuntimeObject* L_6 = ___0_key;
		RuntimeObject* L_7;
		L_7 = WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91(__this, L_6, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		// return true;
		V_1 = (bool)1;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void Unity.WebRTC.WeakReferenceTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReferenceTable__ctor_m25ECF2CACC1CFE254ED9B7B1BA9D8396DC4321C3 (WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable m_table = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		__this->___m_table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_table_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.WebRTC.RTCError Unity.WebRTC.AsyncOperationBase::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E AsyncOperationBase_get_Error_m8D2265FF78156B2BCF8334F6CEAC5C53BE7D0C98 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public RTCError Error { get; internal set; }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_0 = __this->___U3CErrorU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::set_Error(Unity.WebRTC.RTCError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___0_value, const RuntimeMethod* method) 
{
	{
		// public RTCError Error { get; internal set; }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CErrorU3Ek__BackingField_0))->___message_1), (void*)NULL);
		return;
	}
}
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsError_mE62C0F4F75BDBCB7B4ED590CBC38C0F0B1AE494A (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsError { get; internal set; }
		bool L_0 = __this->___U3CIsErrorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::set_IsError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsError { get; internal set; }
		bool L_0 = ___0_value;
		__this->___U3CIsErrorU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_mF6A8073F1C481299FDAECC91751DB74E26B139CC (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; internal set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::set_IsDone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsDone_mCDCE05088AFBCB4DC0BCCC2E94554E34F7E3BF49 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; internal set; }
		bool L_0 = ___0_value;
		__this->___U3CIsDoneU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Unity.WebRTC.AsyncOperationBase::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_keepWaiting_mD0FB396CD0D44F4D9D4F940558080E418F5C8A4C (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperationBase_get_IsDone_mF6A8073F1C481299FDAECC91751DB74E26B139CC_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0015;
	}

IL_0010:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// IsDone = true;
		AsyncOperationBase_set_IsDone_mCDCE05088AFBCB4DC0BCCC2E94554E34F7E3BF49_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.AsyncOperationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11 (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
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
// Unity.WebRTC.RTCStatsReport Unity.WebRTC.RTCStatsReportAsyncOperation::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* RTCStatsReportAsyncOperation_get_Value_m44FB14690ABC8E18FA3690AACCB0CC72D9706094 (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, const RuntimeMethod* method) 
{
	{
		// public RTCStatsReport Value { get; private set; }
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_0 = __this->___U3CValueU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.WebRTC.RTCStatsReportAsyncOperation::set_Value(Unity.WebRTC.RTCStatsReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation_set_Value_mCE15A3F7377BE14D2CD1CE8C90DC244E19B224B8 (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___0_value, const RuntimeMethod* method) 
{
	{
		// public RTCStatsReport Value { get; private set; }
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Unity.WebRTC.RTCStatsReportAsyncOperation::.ctor(Unity.WebRTC.RTCStatsCollectorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation__ctor_m0D5C8D10A06A72ADF519C1543E5226D6F974FFB6 (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsReportAsyncOperation_OnStatsDelivered_m53F3451F658A25DF2BFE8DF837E9871D93DF3EF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal RTCStatsReportAsyncOperation(RTCStatsCollectorCallback callback)
		AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11(__this, NULL);
		// callback.onStatsDelivered = OnStatsDelivered;
		RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* L_0 = ___0_callback;
		Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C* L_1 = (Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C*)il2cpp_codegen_object_new(Action_1_t5E27505BE25F1611D34BBA35D45F74016498EB0C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mE563E2DC69E24CDE51F52FD67CF0B2A09EC2DE9B(L_1, __this, (intptr_t)((void*)RTCStatsReportAsyncOperation_OnStatsDelivered_m53F3451F658A25DF2BFE8DF837E9871D93DF3EF7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		L_0->___onStatsDelivered_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___onStatsDelivered_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.RTCStatsReportAsyncOperation::OnStatsDelivered(Unity.WebRTC.RTCStatsReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation_OnStatsDelivered_m53F3451F658A25DF2BFE8DF837E9871D93DF3EF7 (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___0_report, const RuntimeMethod* method) 
{
	{
		// Value = report;
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_0 = ___0_report;
		RTCStatsReportAsyncOperation_set_Value_mCE15A3F7377BE14D2CD1CE8C90DC244E19B224B8_inline(__this, L_0, NULL);
		// IsError = false;
		AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline(__this, (bool)0, NULL);
		// this.Done();
		AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC(__this, NULL);
		// }
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
// Unity.WebRTC.RTCSessionDescription Unity.WebRTC.RTCSessionDescriptionAsyncOperation::get_Desc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 RTCSessionDescriptionAsyncOperation_get_Desc_m6B2EF7D9EF0737D24C05B0D40BA83E6746FA1F04 (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, const RuntimeMethod* method) 
{
	{
		// public RTCSessionDescription Desc { get; internal set; }
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_0 = __this->___U3CDescU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.WebRTC.RTCSessionDescriptionAsyncOperation::set_Desc(Unity.WebRTC.RTCSessionDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSessionDescriptionAsyncOperation_set_Desc_m63FD708E5421DB16773B1A3A216834550C0F4F54 (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RTCSessionDescription Desc { get; internal set; }
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_0 = ___0_value;
		__this->___U3CDescU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CDescU3Ek__BackingField_3))->___sdp_1), (void*)NULL);
		return;
	}
}
// System.Void Unity.WebRTC.RTCSessionDescriptionAsyncOperation::.ctor(Unity.WebRTC.CreateSessionDescriptionObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSessionDescriptionAsyncOperation__ctor_mDD02671B39647410C8645380EE1639C34B5D2F70 (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* ___0_observer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSessionDescriptionAsyncOperation_OnCreateSessionDescription_m697D188244DB8387C49AA951EDD477B7D2EED99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal RTCSessionDescriptionAsyncOperation(CreateSessionDescriptionObserver observer)
		AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11(__this, NULL);
		// observer.onCreateSessionDescription = OnCreateSessionDescription;
		CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* L_0 = ___0_observer;
		Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928* L_1 = (Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928*)il2cpp_codegen_object_new(Action_4_tC3127EC703F3016A73EB7897E1E46A1389968928_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_4__ctor_mA6755A075D1B0C7331238B0C2521C5ED0062D336(L_1, __this, (intptr_t)((void*)RTCSessionDescriptionAsyncOperation_OnCreateSessionDescription_m697D188244DB8387C49AA951EDD477B7D2EED99E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		L_0->___onCreateSessionDescription_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___onCreateSessionDescription_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.RTCSessionDescriptionAsyncOperation::OnCreateSessionDescription(Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSessionDescriptionAsyncOperation_OnCreateSessionDescription_m697D188244DB8387C49AA951EDD477B7D2EED99E (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, int32_t ___0_type, String_t* ___1_sdp, int32_t ___2_errorType, String_t* ___3_error, const RuntimeMethod* method) 
{
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IsError = errorType != RTCErrorType.None;
		int32_t L_0 = ___2_errorType;
		AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline(__this, (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0), NULL);
		// Error = new RTCError() { errorType = errorType, message = error };
		il2cpp_codegen_initobj((&V_0), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		int32_t L_1 = ___2_errorType;
		(&V_0)->___errorType_0 = L_1;
		String_t* L_2 = ___3_error;
		(&V_0)->___message_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___message_1), (void*)L_2);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_3 = V_0;
		AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C_inline(__this, L_3, NULL);
		// Desc = new RTCSessionDescription() { type = type, sdp = sdp};
		il2cpp_codegen_initobj((&V_1), sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04));
		int32_t L_4 = ___0_type;
		(&V_1)->___type_0 = L_4;
		String_t* L_5 = ___1_sdp;
		(&V_1)->___sdp_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___sdp_1), (void*)L_5);
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_6 = V_1;
		RTCSessionDescriptionAsyncOperation_set_Desc_m63FD708E5421DB16773B1A3A216834550C0F4F54_inline(__this, L_6, NULL);
		// this.Done();
		AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC(__this, NULL);
		// }
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
// System.Void Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation::.ctor(Unity.WebRTC.SetSessionDescriptionObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSetSessionDescriptionAsyncOperation__ctor_m951BDBAC6FC48EB9770817866190FCF5389E3912 (RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* __this, SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* ___0_observer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t7EF488960820B12EED4789F882AE94B43F35042F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSetSessionDescriptionAsyncOperation_OnSetSessionDescription_m4AED647283B18B4803C5A93F4FC869ABDC8CCF7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal RTCSetSessionDescriptionAsyncOperation(SetSessionDescriptionObserver observer)
		AsyncOperationBase__ctor_m283A38517A586BC083C71C4F0A863FE8D1B5CE11(__this, NULL);
		// observer.onSetSessionDescription = OnSetSessionDescription;
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_0 = ___0_observer;
		Action_2_t7EF488960820B12EED4789F882AE94B43F35042F* L_1 = (Action_2_t7EF488960820B12EED4789F882AE94B43F35042F*)il2cpp_codegen_object_new(Action_2_t7EF488960820B12EED4789F882AE94B43F35042F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_2__ctor_mF68D0319788EC0F1CB3F2EC24EF4CCBBA08EF7AD(L_1, __this, (intptr_t)((void*)RTCSetSessionDescriptionAsyncOperation_OnSetSessionDescription_m4AED647283B18B4803C5A93F4FC869ABDC8CCF7B_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		L_0->___onSetSessionDescription_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___onSetSessionDescription_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.RTCSetSessionDescriptionAsyncOperation::OnSetSessionDescription(Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCSetSessionDescriptionAsyncOperation_OnSetSessionDescription_m4AED647283B18B4803C5A93F4FC869ABDC8CCF7B (RTCSetSessionDescriptionAsyncOperation_tE38F53D957F4D3E384ADD061AD0186CE9EEDAA49* __this, int32_t ___0_errorType, String_t* ___1_error, const RuntimeMethod* method) 
{
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IsError = errorType != RTCErrorType.None;
		int32_t L_0 = ___0_errorType;
		AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline(__this, (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0), NULL);
		// Error = new RTCError() { errorType = errorType, message = error };
		il2cpp_codegen_initobj((&V_0), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		int32_t L_1 = ___0_errorType;
		(&V_0)->___errorType_0 = L_1;
		String_t* L_2 = ___1_error;
		(&V_0)->___message_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___message_1), (void*)L_2);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_3 = V_0;
		AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C_inline(__this, L_3, NULL);
		// this.Done();
		AsyncOperationBase_Done_m504268896F3B4C9F1DD13D4BECD4D9449D99CBCC(__this, NULL);
		// }
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
// Conversion methods for marshalling of: Unity.WebRTC.RTCError
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_pinvoke(const RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E& unmarshaled, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke& marshaled)
{
	marshaled.___errorType_0 = unmarshaled.___errorType_0;
	marshaled.___message_1 = il2cpp_codegen_marshal_string(unmarshaled.___message_1);
}
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_pinvoke_back(const RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke& marshaled, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E& unmarshaled)
{
	int32_t unmarshalederrorType_temp_0 = 0;
	unmarshalederrorType_temp_0 = marshaled.___errorType_0;
	unmarshaled.___errorType_0 = unmarshalederrorType_temp_0;
	unmarshaled.___message_1 = il2cpp_codegen_marshal_string_result(marshaled.___message_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___message_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCError
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_pinvoke_cleanup(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
// Conversion methods for marshalling of: Unity.WebRTC.RTCError
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_com(const RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E& unmarshaled, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com& marshaled)
{
	marshaled.___errorType_0 = unmarshaled.___errorType_0;
	marshaled.___message_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___message_1);
}
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_com_back(const RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com& marshaled, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E& unmarshaled)
{
	int32_t unmarshalederrorType_temp_0 = 0;
	unmarshalederrorType_temp_0 = marshaled.___errorType_0;
	unmarshaled.___errorType_0 = unmarshalederrorType_temp_0;
	unmarshaled.___message_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___message_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___message_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___message_1));
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCError
IL2CPP_EXTERN_C void RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshal_com_cleanup(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___message_1);
	marshaled.___message_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.WebRTC.RTCSessionDescription
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___sdp_1 = il2cpp_codegen_marshal_string(unmarshaled.___sdp_1);
}
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled)
{
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	unmarshaled.___sdp_1 = il2cpp_codegen_marshal_string_result(marshaled.___sdp_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___sdp_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___sdp_1));
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCSessionDescription
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___sdp_1);
	marshaled.___sdp_1 = NULL;
}
// Conversion methods for marshalling of: Unity.WebRTC.RTCSessionDescription
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_com(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___sdp_1 = il2cpp_codegen_marshal_string(unmarshaled.___sdp_1);
}
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_com_back(const RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com& marshaled, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04& unmarshaled)
{
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	unmarshaled.___sdp_1 = il2cpp_codegen_marshal_string_result(marshaled.___sdp_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___sdp_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___sdp_1));
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCSessionDescription
IL2CPP_EXTERN_C void RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_com_cleanup(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___sdp_1);
	marshaled.___sdp_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.WebRTC.RTCOfferAnswerOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCOfferAnswerOptions__cctor_m6CC356BE15154A2FA1E7B71C801FC2FEAD259A5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static RTCOfferAnswerOptions Default =
		//     new RTCOfferAnswerOptions { iceRestart = false, voiceActivityDetection = true };
		il2cpp_codegen_initobj((&V_0), sizeof(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F));
		(&V_0)->___iceRestart_1 = (bool)0;
		(&V_0)->___voiceActivityDetection_2 = (bool)1;
		RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F L_0 = V_0;
		((RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_StaticFields*)il2cpp_codegen_static_fields_for(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F_il2cpp_TypeInfo_var))->___Default_0 = L_0;
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
// Conversion methods for marshalling of: Unity.WebRTC.RTCIceServer
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___urls_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'urls' of type 'RTCIceServer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___urls_2Exception, NULL);
}
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke_back(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled)
{
	Exception_t* ___urls_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'urls' of type 'RTCIceServer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___urls_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCIceServer
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_pinvoke_cleanup(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.WebRTC.RTCIceServer
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled)
{
	Exception_t* ___urls_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'urls' of type 'RTCIceServer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___urls_2Exception, NULL);
}
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com_back(const RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled, RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B& unmarshaled)
{
	Exception_t* ___urls_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'urls' of type 'RTCIceServer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___urls_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCIceServer
IL2CPP_EXTERN_C void RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshal_com_cleanup(RTCIceServer_t548B7A7F1BF0F7C29275974C129920AA55208D0B_marshaled_com& marshaled)
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


// Conversion methods for marshalling of: Unity.WebRTC.RTCConfiguration
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_pinvoke(const RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839& unmarshaled, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke& marshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_pinvoke_back(const RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke& marshaled, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839& unmarshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCConfiguration
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_pinvoke_cleanup(RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.WebRTC.RTCConfiguration
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_com(const RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839& unmarshaled, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com& marshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_com_back(const RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com& marshaled, RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839& unmarshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCConfiguration
IL2CPP_EXTERN_C void RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshal_com_cleanup(RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839_marshaled_com& marshaled)
{
}
// System.Void Unity.WebRTC.RTCConfiguration::.ctor(Unity.WebRTC.RTCConfigurationInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCConfiguration__ctor_mC1C8302BB76A1C7184F219CFB7F7C7780EC77253 (RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* __this, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iceServers = v.iceServers;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_0 = ___0_v;
		RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* L_1 = L_0->___iceServers_0;
		__this->___iceServers_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iceServers_0), (void*)L_1);
		// iceTransportPolicy = v.iceTransportPolicy.AsEnum<RTCIceTransportPolicy>();
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_2 = ___0_v;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* L_3 = (&L_2->___iceTransportPolicy_1);
		Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 L_4;
		L_4 = OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D(L_3, OptionalInt_AsEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_m9A8894CA41502F8807912307B311001C88D2E27D_RuntimeMethod_var);
		__this->___iceTransportPolicy_1 = L_4;
		// bundlePolicy = v.bundlePolicy.AsEnum<RTCBundlePolicy>();
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_5 = ___0_v;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409* L_6 = (&L_5->___bundlePolicy_2);
		Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 L_7;
		L_7 = OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07(L_6, OptionalInt_AsEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_m555BD04BBAEF879D69124AB7317F77B9EADF1C07_RuntimeMethod_var);
		__this->___bundlePolicy_2 = L_7;
		// iceCandidatePoolSize = v.iceCandidatePoolSize;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_8 = ___0_v;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 L_9 = L_8->___iceCandidatePoolSize_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10;
		L_10 = OptionalInt_op_Implicit_m259CFA089069B9DF1EAD390421CA881B207328DB(L_9, NULL);
		__this->___iceCandidatePoolSize_3 = L_10;
		// enableDtlsSrtp = v.enableDtlsSrtp;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* L_11 = ___0_v;
		OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 L_12 = L_11->___enableDtlsSrtp_4;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_13;
		L_13 = OptionalBool_op_Implicit_mBE6DB6F6015AF67BD62DFC4316FF2C4AEE5ABE51(L_12, NULL);
		__this->___enableDtlsSrtp_4 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RTCConfiguration__ctor_mC1C8302BB76A1C7184F219CFB7F7C7780EC77253_AdjustorThunk (RuntimeObject* __this, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27* ___0_v, const RuntimeMethod* method)
{
	RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839*>(__this + _offset);
	RTCConfiguration__ctor_mC1C8302BB76A1C7184F219CFB7F7C7780EC77253(_thisAdjusted, ___0_v, method);
}
// Unity.WebRTC.RTCConfigurationInternal Unity.WebRTC.RTCConfiguration::Cast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 RTCConfiguration_Cast_mD3A14BFF319BC3F441654EC5AE18A2C7D5BAE309 (RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mFECA73FEE23A5DDF23CD364D77E15A2AD6B977C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_mE422638B395B90434A8B80B5093454E425817288_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//             RTCConfigurationInternal instance = new RTCConfigurationInternal
		//             {
		//                 iceServers = this.iceServers,
		//                 iceTransportPolicy = OptionalInt.FromEnum(this.iceTransportPolicy),
		//                 bundlePolicy = OptionalInt.FromEnum(this.bundlePolicy),
		//                 iceCandidatePoolSize = this.iceCandidatePoolSize,
		// #pragma warning disable 0612
		//                 enableDtlsSrtp = this.enableDtlsSrtp
		// #pragma warning restore 0612
		//             };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27));
		RTCIceServerU5BU5D_t13301352D5F5F78D0D702CC03B8EA75523D31FE5* L_0 = __this->___iceServers_0;
		(&V_1)->___iceServers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___iceServers_0), (void*)L_0);
		Nullable_1_t2ABD27635F598DF58E8238F5861F0C0432565A67 L_1 = __this->___iceTransportPolicy_1;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 L_2;
		L_2 = OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_mE422638B395B90434A8B80B5093454E425817288(L_1, OptionalInt_FromEnum_TisRTCIceTransportPolicy_tC92A0E544B9A80DBA994267C078FE0C2C9FCF1FE_mE422638B395B90434A8B80B5093454E425817288_RuntimeMethod_var);
		(&V_1)->___iceTransportPolicy_1 = L_2;
		Nullable_1_t92C447D11BC502800C8ABE6E39D16A91CAD45319 L_3 = __this->___bundlePolicy_2;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 L_4;
		L_4 = OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mFECA73FEE23A5DDF23CD364D77E15A2AD6B977C5(L_3, OptionalInt_FromEnum_TisRTCBundlePolicy_t8769C3E40D2DEA064F67EF90FBDB353CBD237894_mFECA73FEE23A5DDF23CD364D77E15A2AD6B977C5_RuntimeMethod_var);
		(&V_1)->___bundlePolicy_2 = L_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = __this->___iceCandidatePoolSize_3;
		OptionalInt_t1F83BF72222C7A75C3C6B57DB0D9EB57D933C409 L_6;
		L_6 = OptionalInt_op_Implicit_m9362D68641B85EA74EDF815796FAE1513C6D23D6(L_5, NULL);
		(&V_1)->___iceCandidatePoolSize_3 = L_6;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_7 = __this->___enableDtlsSrtp_4;
		OptionalBool_tA3C3F7E84CC0BA08A359491867238304FDEBEC54 L_8;
		L_8 = OptionalBool_op_Implicit_mE09FCC9C594638A58B725BA5439D101FDA8383BB(L_7, NULL);
		(&V_1)->___enableDtlsSrtp_4 = L_8;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 L_9 = V_1;
		V_0 = L_9;
		// return instance;
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 L_10 = V_0;
		V_2 = L_10;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C  RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 RTCConfiguration_Cast_mD3A14BFF319BC3F441654EC5AE18A2C7D5BAE309_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RTCConfiguration_t7D74CAE450A2A9A4A190FC7016BF7B95C71E6839*>(__this + _offset);
	RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27 _returnValue;
	_returnValue = RTCConfiguration_Cast_mD3A14BFF319BC3F441654EC5AE18A2C7D5BAE309(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.WebRTC.RTCConfigurationInternal
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_pinvoke(const RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27& unmarshaled, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_pinvoke& marshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfigurationInternal'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_pinvoke_back(const RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_pinvoke& marshaled, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27& unmarshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfigurationInternal'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCConfigurationInternal
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_pinvoke_cleanup(RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.WebRTC.RTCConfigurationInternal
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_com(const RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27& unmarshaled, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_com& marshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfigurationInternal'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_com_back(const RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_com& marshaled, RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27& unmarshaled)
{
	Exception_t* ___iceServers_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'iceServers' of type 'RTCConfigurationInternal'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___iceServers_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.WebRTC.RTCConfigurationInternal
IL2CPP_EXTERN_C void RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshal_com_cleanup(RTCConfigurationInternal_t5183EFA6DB92DA8FDB6C8E57171BEB55A8FB0F27_marshaled_com& marshaled)
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
extern "C" void CDECL ReversePInvokeWrapper_WebRTC_DebugLog_m02648DBBEBE55B23CAFE5966A09202B7097FED29(char* ___0_str)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___0_str' to managed representation
	String_t* ____0_str_unmarshaled = NULL;
	____0_str_unmarshaled = il2cpp_codegen_marshal_string_result(___0_str);

	// Managed method invocation
	WebRTC_DebugLog_m02648DBBEBE55B23CAFE5966A09202B7097FED29(____0_str_unmarshaled, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_WebRTC_OnSetLocalDescription_mF5A13B3B5348A49DB11F2C32DAF3E4F55054AB5D(intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, char* ___3_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___3_message' to managed representation
	String_t* ____3_message_unmarshaled = NULL;
	____3_message_unmarshaled = il2cpp_codegen_marshal_string_result(___3_message);

	// Managed method invocation
	WebRTC_OnSetLocalDescription_mF5A13B3B5348A49DB11F2C32DAF3E4F55054AB5D(___0_ptr, ___1_ptrObserver, ___2_type, ____3_message_unmarshaled, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_WebRTC_OnSetRemoteDescription_m78DFBA03C6BDA1C5BD93452B72D1A6DBBF4B176D(intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, char* ___3_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___3_message' to managed representation
	String_t* ____3_message_unmarshaled = NULL;
	____3_message_unmarshaled = il2cpp_codegen_marshal_string_result(___3_message);

	// Managed method invocation
	WebRTC_OnSetRemoteDescription_m78DFBA03C6BDA1C5BD93452B72D1A6DBBF4B176D(___0_ptr, ___1_ptrObserver, ___2_type, ____3_message_unmarshaled, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_WebRTC_OnCreateSessionDescription_m5CE28E67A12E3D161D1787F38C6521F8F3FE1EC0(intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, char* ___3_sdp, int32_t ___4_errorType, char* ___5_message)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___3_sdp' to managed representation
	String_t* ____3_sdp_unmarshaled = NULL;
	____3_sdp_unmarshaled = il2cpp_codegen_marshal_string_result(___3_sdp);

	// Marshaling of parameter '___5_message' to managed representation
	String_t* ____5_message_unmarshaled = NULL;
	____5_message_unmarshaled = il2cpp_codegen_marshal_string_result(___5_message);

	// Managed method invocation
	WebRTC_OnCreateSessionDescription_m5CE28E67A12E3D161D1787F38C6521F8F3FE1EC0(___0_ptr, ___1_ptrObserver, ___2_type, ____3_sdp_unmarshaled, ___4_errorType, ____5_message_unmarshaled, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_WebRTC_OnCollectStatsCallback_m74A606E07AF78A1149C8CD261CE17A590260598F(intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_ptrReport)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebRTC_OnCollectStatsCallback_m74A606E07AF78A1149C8CD261CE17A590260598F(___0_ptr, ___1_ptrCallback, ___2_ptrReport, NULL);

}
// System.Void Unity.WebRTC.WebRTC::Initialize(System.Boolean,System.Boolean,Unity.WebRTC.NativeLoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Initialize_mD79110DF1000DC3AEDC14B128A6619C9BEA5048F (bool ___0_limitTextureSize, bool ___1_enableNativeLog, int32_t ___2_nativeLoggingSeverity, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::RuntimeInitializeOnLoadMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_RuntimeInitializeOnLoadMethod_mBC6B89BF02C3F468EACA940B94BB46DDB85E002B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_syncContext = new ExecutableUnitySynchronizationContext(SynchronizationContext.Current);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0;
		L_0 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* L_1 = (ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D*)il2cpp_codegen_object_new(ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExecutableUnitySynchronizationContext__ctor_mF06438C745A18C6488B00F77924CB58397F3FBCB(L_1, L_0, NULL);
		((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::InitializeInternal(System.Boolean,System.Boolean,Unity.WebRTC.NativeLoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_InitializeInternal_m55EE7A80EEE6FCC0B8A05E168737A07279542259 (bool ___0_limitTextureSize, bool ___1_enableNativeLog, int32_t ___2_nativeLoggingSeverity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_DebugLog_m02648DBBEBE55B23CAFE5966A09202B7097FED29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_OnCollectStatsCallback_m74A606E07AF78A1149C8CD261CE17A590260598F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_OnCreateSessionDescription_m5CE28E67A12E3D161D1787F38C6521F8F3FE1EC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_OnSetLocalDescription_mF5A13B3B5348A49DB11F2C32DAF3E4F55054AB5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_OnSetRemoteDescription_m78DFBA03C6BDA1C5BD93452B72D1A6DBBF4B176D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (s_context != null)
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		V_0 = (bool)((!(((RuntimeObject*)(Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new InvalidOperationException("Already initialized WebRTC.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85D634311AED4DCFE4023F6211B3F7CAC4410846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_InitializeInternal_m55EE7A80EEE6FCC0B8A05E168737A07279542259_RuntimeMethod_var)));
	}

IL_0018:
	{
		// NativeMethods.RegisterDebugLog(DebugLog, enableNativeLog, nativeLoggingSeverity);
		DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* L_3 = (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7*)il2cpp_codegen_object_new(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DelegateDebugLog__ctor_m1414D159BF6B233BF3FE9DDD9089953CA39BB43D(L_3, NULL, (intptr_t)((void*)WebRTC_DebugLog_m02648DBBEBE55B23CAFE5966A09202B7097FED29_RuntimeMethod_var), NULL);
		bool L_4 = ___1_enableNativeLog;
		int32_t L_5 = ___2_nativeLoggingSeverity;
		NativeMethods_RegisterDebugLog_m7DC610118783E426B611E1502F1A591E3D9A83F5(L_3, L_4, L_5, NULL);
		// NativeMethods.StatsCollectorRegisterCallback(OnCollectStatsCallback);
		DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* L_6 = (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390*)il2cpp_codegen_object_new(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DelegateCollectStats__ctor_mDBC2DECA89282C655DE7B6D6E79D4BA29DE87177(L_6, NULL, (intptr_t)((void*)WebRTC_OnCollectStatsCallback_m74A606E07AF78A1149C8CD261CE17A590260598F_RuntimeMethod_var), NULL);
		NativeMethods_StatsCollectorRegisterCallback_mBA80B37C60A9C983C9D9A9DD022252D4883CB084(L_6, NULL);
		// NativeMethods.CreateSessionDescriptionObserverRegisterCallback(OnCreateSessionDescription);
		DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* L_7 = (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC*)il2cpp_codegen_object_new(DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		DelegateNativeCreateSessionDesc__ctor_m13F24F4DE75A7E506F3A6FE41375AE084914F2A6(L_7, NULL, (intptr_t)((void*)WebRTC_OnCreateSessionDescription_m5CE28E67A12E3D161D1787F38C6521F8F3FE1EC0_RuntimeMethod_var), NULL);
		NativeMethods_CreateSessionDescriptionObserverRegisterCallback_mB92BC2E18C603C9B6054B068B57D2265537BC1E1(L_7, NULL);
		// NativeMethods.SetLocalDescriptionObserverRegisterCallback(OnSetLocalDescription);
		DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* L_8 = (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79*)il2cpp_codegen_object_new(DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		DelegateSetLocalDescription__ctor_mCBB54C6F60897A1D4BC3FDC0138436DA3F9C5379(L_8, NULL, (intptr_t)((void*)WebRTC_OnSetLocalDescription_mF5A13B3B5348A49DB11F2C32DAF3E4F55054AB5D_RuntimeMethod_var), NULL);
		NativeMethods_SetLocalDescriptionObserverRegisterCallback_m5AA1122F90FD11E1C945B812C1987ADDC42054B2(L_8, NULL);
		// NativeMethods.SetRemoteDescriptionObserverRegisterCallback(OnSetRemoteDescription);
		DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* L_9 = (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1*)il2cpp_codegen_object_new(DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		DelegateSetRemoteDescription__ctor_m1724BF83CD9014EB26D16D61368C03DF3696D8A6(L_9, NULL, (intptr_t)((void*)WebRTC_OnSetRemoteDescription_m78DFBA03C6BDA1C5BD93452B72D1A6DBBF4B176D_RuntimeMethod_var), NULL);
		NativeMethods_SetRemoteDescriptionObserverRegisterCallback_m58D71BE187F45AB466F8DE17DB37A37C9627E7E4(L_9, NULL);
		// s_context = Context.Create();
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_10;
		L_10 = Context_Create_mFF7B25EE94DC5910D1796AC75DD0B9E1A89DEB9B(0, NULL);
		((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1), (void*)L_10);
		// s_context.limitTextureSize = limitTextureSize;
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_11 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		bool L_12 = ___0_limitTextureSize;
		NullCheck(L_11);
		L_11->___limitTextureSize_2 = L_12;
		// NativeMethods.SetCurrentContext(s_context.self);
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_13 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		NullCheck(L_13);
		intptr_t L_14 = L_13->___self_0;
		NativeMethods_SetCurrentContext_mDBB7B2ACECCE37E4D2E59BB17D98A7F457C7784B(L_14, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unity.WebRTC.WebRTC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRTC_Update_mDC3FE52572BFC486A7E3A6BFAEC091CDB2093977 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C* L_0 = (U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C*)il2cpp_codegen_object_new(U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateU3Ed__6__ctor_mA63FA1407735301248BC325C3243CADC32978D48(L_0, 0, NULL);
		return L_0;
	}
}
// System.Boolean Unity.WebRTC.WebRTC::ExecutePendingTasks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTC_ExecutePendingTasks_mF0F38B4C7955B1E9991B205EA7057BAF5ABF4120 (int32_t ___0_millisecondTimeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (s_syncContext is ExecutableUnitySynchronizationContext executableContext)
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		V_0 = ((ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D*)IsInstClass((RuntimeObject*)L_0, ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D_il2cpp_TypeInfo_var));
		ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return executableContext.ExecutePendingTasks(millisecondTimeout);
		ExecutableUnitySynchronizationContext_t4021EEF1CC9B72CA6DD81FB3CC9E87B2FFA1055D* L_3 = V_0;
		int32_t L_4 = ___0_millisecondTimeout;
		NullCheck(L_3);
		bool L_5;
		L_5 = ExecutableUnitySynchronizationContext_ExecutePendingTasks_mD3D99C61F54F1E7BDE1A9D2F3E9F866F30CB5467(L_3, ((int64_t)L_4), NULL);
		V_2 = L_5;
		goto IL_0024;
	}

IL_0020:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Boolean Unity.WebRTC.WebRTC::get_enableLimitTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTC_get_enableLimitTextureSize_m0EF2CFCDDA51E7125375CC019C4C6AA69C2E9129 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return s_context.limitTextureSize; }
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		NullCheck(L_0);
		bool L_1 = L_0->___limitTextureSize_2;
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// get { return s_context.limitTextureSize; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.WebRTC.WebRTC::set_enableLimitTextureSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_set_enableLimitTextureSize_m647D96DE694AD6F5E6017EA80D0080AF49F1D0C6 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { s_context.limitTextureSize = value; }
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___limitTextureSize_2 = L_1;
		// set { s_context.limitTextureSize = value; }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Dispose_m00620DEA440A9A8FC3DDB3C9F51D79D4E3DBDA60 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DisposeInternal_mF6CF6540C2CEC9077367FC588E5745A17BA5FD59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (s_context != null)
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		V_0 = (bool)((!(((RuntimeObject*)(Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// s_context.Dispose();
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_2 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		NullCheck(L_2);
		Context_Dispose_mF3D351BD72BBBB0D85DC2CC9FFC5C4DD341A1289(L_2, NULL);
		// s_context = null;
		((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1 = (Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1), (void*)(Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3*)NULL);
	}

IL_0020:
	{
		// NativeMethods.RegisterDebugLog(null, false, NativeLoggingSeverity.Info);
		NativeMethods_RegisterDebugLog_m7DC610118783E426B611E1502F1A591E3D9A83F5((DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7*)NULL, (bool)0, 1, NULL);
		// }
		return;
	}
}
// Unity.WebRTC.RTCError Unity.WebRTC.WebRTC::ValidateTextureSize(System.Int32,System.Int32,UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E WebRTC_ValidateTextureSize_mA8B550D56113268A5D6E276F35A90BD898E6F42C (int32_t ___0_width, int32_t ___1_height, int32_t ___2_platform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09051B81EC25F8E7F64AFE6C3812B99D9A133E8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral092CDF51B5C84276467036F17F0DB713EAF0C81B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B4326BACCF2317265C95FED87F70B8D46E3CA0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EC9BE731DDB549A5C4DB84B4547ECA651C97D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9C6C73BA81D9EFF5425E9CD5CD4EA21A535580C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3E11FD3F2BCB62028EE5056F85A7C7D26302D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDE19F2939B48A58502D79091F8DBF25C5ABA6F7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E V_1;
	memset((&V_1), 0, sizeof(V_1));
	RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!s_context.limitTextureSize)
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		NullCheck(L_0);
		bool L_1 = L_0->___limitTextureSize_2;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// return new RTCError { errorType = RTCErrorType.None };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 0;
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_3 = V_1;
		V_2 = L_3;
		goto IL_019a;
	}

IL_002a:
	{
		// if (width * height > maxPixelCount)
		int32_t L_4 = ___0_width;
		int32_t L_5 = ___1_height;
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply(L_4, L_5))) > ((int32_t)((int32_t)8294400)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		// return new RTCError
		// {
		//     errorType = RTCErrorType.InvalidRange,
		//     message = $"Texture pixel count is invalid. " +
		//               $"width:{width} x height:{height} is over 4k pixel count ({maxPixelCount})."
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 4;
		int32_t L_7 = ___0_width;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = ___1_height;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = ((int32_t)8294400);
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralE9C6C73BA81D9EFF5425E9CD5CD4EA21A535580C, L_9, L_12, L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B4326BACCF2317265C95FED87F70B8D46E3CA0A, L_15, NULL);
		(&V_1)->___message_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___message_1), (void*)L_16);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_17 = V_1;
		V_2 = L_17;
		goto IL_019a;
	}

IL_0081:
	{
		// if (NvEncSupportedPlatdorm(platform))
		int32_t L_18 = ___2_platform;
		bool L_19;
		L_19 = WebRTC_NvEncSupportedPlatdorm_m10622BBEDED5036BD762EAF5E77E53E1EA70915D(L_18, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_012d;
		}
	}
	{
		// if (width < minWidth || maxWidth < width ||
		//     height < minHeight || maxHeight < height)
		int32_t L_21 = ___0_width;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)145))))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_22 = ___0_width;
		if ((((int32_t)((int32_t)4096)) < ((int32_t)L_22)))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_23 = ___1_height;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)49))))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_24 = ___1_height;
		G_B10_0 = ((((int32_t)((int32_t)4096)) < ((int32_t)L_24))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B10_0 = 1;
	}

IL_00b1:
	{
		V_5 = (bool)G_B10_0;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_012c;
		}
	}
	{
		// return new RTCError
		// {
		//     errorType = RTCErrorType.InvalidRange,
		//     message = $"Texture size is invalid. " +
		//               $"minWidth:{minWidth}, maxWidth:{maxWidth} " +
		//               $"minHeight:{minHeight}, maxHeight:{maxHeight} " +
		//               $"current size width:{width} height:{height}"
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 4;
		int32_t L_26 = ((int32_t)145);
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		int32_t L_28 = ((int32_t)4096);
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral09051B81EC25F8E7F64AFE6C3812B99D9A133E8D, L_27, L_29, NULL);
		int32_t L_31 = ((int32_t)49);
		RuntimeObject* L_32 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_31);
		int32_t L_33 = ((int32_t)4096);
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral092CDF51B5C84276467036F17F0DB713EAF0C81B, L_32, L_34, NULL);
		int32_t L_36 = ___0_width;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_37);
		int32_t L_39 = ___1_height;
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42;
		L_42 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralEB3E11FD3F2BCB62028EE5056F85A7C7D26302D2, L_38, L_41, NULL);
		String_t* L_43;
		L_43 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral64EC9BE731DDB549A5C4DB84B4547ECA651C97D0, L_30, L_35, L_42, NULL);
		(&V_1)->___message_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___message_1), (void*)L_43);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_44 = V_1;
		V_2 = L_44;
		goto IL_019a;
	}

IL_012c:
	{
	}

IL_012d:
	{
		// if (platform == RuntimePlatform.Android)
		int32_t L_45 = ___2_platform;
		V_6 = (bool)((((int32_t)L_45) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_46 = V_6;
		if (!L_46)
		{
			goto IL_0186;
		}
	}
	{
		// if (width < minimumTextureSize || height < minimumTextureSize)
		int32_t L_47 = ___0_width;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)114))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_48 = ___1_height;
		G_B17_0 = ((((int32_t)L_48) < ((int32_t)((int32_t)114)))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B17_0 = 1;
	}

IL_0146:
	{
		V_7 = (bool)G_B17_0;
		bool L_49 = V_7;
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		// return new RTCError
		// {
		//     errorType = RTCErrorType.InvalidRange,
		//     message =
		//         $"Texture size need {minimumTextureSize}, current size width:{width} height:{height}"
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 4;
		int32_t L_50 = ((int32_t)114);
		RuntimeObject* L_51 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_50);
		int32_t L_52 = ___0_width;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_53);
		int32_t L_55 = ___1_height;
		int32_t L_56 = L_55;
		RuntimeObject* L_57 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_56);
		String_t* L_58;
		L_58 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralFDE19F2939B48A58502D79091F8DBF25C5ABA6F7, L_51, L_54, L_57, NULL);
		(&V_1)->___message_1 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___message_1), (void*)L_58);
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_59 = V_1;
		V_2 = L_59;
		goto IL_019a;
	}

IL_0185:
	{
	}

IL_0186:
	{
		// return new RTCError { errorType = RTCErrorType.None };
		il2cpp_codegen_initobj((&V_1), sizeof(RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E));
		(&V_1)->___errorType_0 = 0;
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_60 = V_1;
		V_2 = L_60;
		goto IL_019a;
	}

IL_019a:
	{
		// }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_61 = V_2;
		return L_61;
	}
}
// System.Void Unity.WebRTC.WebRTC::ValidateGraphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_ValidateGraphicsFormat_mCACF2A1B1ED9972977962CB15261DF416331D87C (int32_t ___0_format, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if ((int)format == LegacyARGB32_sRGB || (int)format == LegacyARGB32_UNorm)
		int32_t L_0 = ___0_format;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)87))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_format;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)88)))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0048;
	}

IL_0015:
	{
		// GraphicsFormat supportedFormat = GetSupportedGraphicsFormat(SystemInfo.graphicsDeviceType);
		int32_t L_3;
		L_3 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		int32_t L_4;
		L_4 = WebRTC_GetSupportedGraphicsFormat_m59205D7EF10D5B31BE34BF220418DBE1A74CCFE8(L_3, NULL);
		V_0 = L_4;
		// if (format != supportedFormat)
		int32_t L_5 = ___0_format;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// throw new ArgumentException(
		//     $"This graphics format {format} is not supported for streaming, please use supportedFormat: {supportedFormat}");
		int32_t L_8 = ___0_format;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var)), &L_9);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713_il2cpp_TypeInfo_var)), &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68C2F698C8AF279878725F92A0810B517004C294)), L_10, L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_ValidateGraphicsFormat_mCACF2A1B1ED9972977962CB15261DF416331D87C_RuntimeMethod_var)));
	}

IL_0048:
	{
		// }
		return;
	}
}
// UnityEngine.RenderTextureFormat Unity.WebRTC.WebRTC::GetSupportedRenderTextureFormat(UnityEngine.Rendering.GraphicsDeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTC_GetSupportedRenderTextureFormat_m29BCCBE34B07826C971920493D5D3B1B9FC4098A (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var graphicsFormat = GetSupportedGraphicsFormat(type);
		int32_t L_0 = ___0_type;
		int32_t L_1;
		L_1 = WebRTC_GetSupportedGraphicsFormat_m59205D7EF10D5B31BE34BF220418DBE1A74CCFE8(L_0, NULL);
		V_0 = L_1;
		// return GraphicsFormatUtility.GetRenderTextureFormat(graphicsFormat);
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5(L_2, NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat Unity.WebRTC.WebRTC::GetSupportedGraphicsFormat(UnityEngine.Rendering.GraphicsDeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTC_GetSupportedGraphicsFormat_m59205D7EF10D5B31BE34BF220418DBE1A74CCFE8 (int32_t ___0_type, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (QualitySettings.activeColorSpace == ColorSpace.Linear)
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// switch (type)
		int32_t L_2 = ___0_type;
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)8)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)11))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)16))))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_005a;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_004c;
			}
		}
	}
	{
		goto IL_005a;
	}

IL_004c:
	{
		// return GraphicsFormat.B8G8R8A8_SRGB;
		V_3 = ((int32_t)57);
		goto IL_00c9;
	}

IL_0051:
	{
		// return GraphicsFormat.R8G8B8A8_SRGB;
		V_3 = 4;
		goto IL_00c9;
	}

IL_0055:
	{
		// return GraphicsFormat.B8G8R8A8_SRGB;
		V_3 = ((int32_t)57);
		goto IL_00c9;
	}

IL_005a:
	{
		goto IL_00b3;
	}

IL_005d:
	{
		// switch (type)
		int32_t L_9 = ___0_type;
		V_5 = L_9;
		int32_t L_10 = V_5;
		V_4 = L_10;
		int32_t L_11 = V_4;
		if ((((int32_t)L_11) > ((int32_t)8)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_0071;
	}

IL_0071:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)8)))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00b2;
	}

IL_0078:
	{
		int32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_0080;
	}

IL_0080:
	{
		int32_t L_15 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, ((int32_t)16))))
		{
			case 0:
			{
				goto IL_00ad;
			}
			case 1:
			{
				goto IL_00a9;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00b2;
			}
			case 4:
			{
				goto IL_00b2;
			}
			case 5:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_00b2;
	}

IL_00a4:
	{
		// return GraphicsFormat.B8G8R8A8_UNorm;
		V_3 = ((int32_t)59);
		goto IL_00c9;
	}

IL_00a9:
	{
		// return GraphicsFormat.R8G8B8A8_UNorm;
		V_3 = 8;
		goto IL_00c9;
	}

IL_00ad:
	{
		// return GraphicsFormat.B8G8R8A8_UNorm;
		V_3 = ((int32_t)59);
		goto IL_00c9;
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		// throw new ArgumentException($"Graphics device type {type} not supported");
		int32_t L_16 = ___0_type;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsDeviceType_t65150C9055D1BC1E377E894972629BF22BA2CBF5_il2cpp_TypeInfo_var)), &L_17);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5EBDF4678FD2BE65475A94ABED34948037A94C0B)), L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_GetSupportedGraphicsFormat_m59205D7EF10D5B31BE34BF220418DBE1A74CCFE8_RuntimeMethod_var)));
	}

IL_00c9:
	{
		// }
		int32_t L_21 = V_3;
		return L_21;
	}
}
// UnityEngine.TextureFormat Unity.WebRTC.WebRTC::GetSupportedTextureFormat(UnityEngine.Rendering.GraphicsDeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTC_GetSupportedTextureFormat_m6CC32FD2725CA056D3C87D16B68CA3994E9095AA (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var graphicsFormat = GetSupportedGraphicsFormat(type);
		int32_t L_0 = ___0_type;
		int32_t L_1;
		L_1 = WebRTC_GetSupportedGraphicsFormat_m59205D7EF10D5B31BE34BF220418DBE1A74CCFE8(L_0, NULL);
		V_0 = L_1;
		// return GraphicsFormatUtility.GetTextureFormat(graphicsFormat);
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = GraphicsFormatUtility_GetTextureFormat_mBFDD045E2526CDF13BC3C34D8E342F4797D467F4(L_2, NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Unity.WebRTC.WebRTC::NvEncSupportedPlatdorm(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTC_NvEncSupportedPlatdorm_m10622BBEDED5036BD762EAF5E77E53E1EA70915D (int32_t ___0_platform, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (platform)
		int32_t L_0 = ___0_platform;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)7)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)7)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0027;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)16))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0027;
	}

IL_0023:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_002b;
	}

IL_0027:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void Unity.WebRTC.WebRTC::DestroyOnMainThread(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DestroyOnMainThread_mCF8375FB70A513CE4BE8ADAF1EE8F8ACDD28275D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4CC2105192476F3A0C170E75270B730745E30854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_DestroyImmediate_mA08ED101986113F76C294B300DB842346EF86952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_Destroy_m7B95C87240F7FC2849564566B0EB1404808D0A9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (delay < 0f)
		float L_0 = ___1_delay;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// throw new ArgumentException($"The delay value is smaller than zero. delay:{delay}");
		float L_2 = ___1_delay;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA28091DB9A11A94195F9CE19C1402CB23C180F34)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRTC_DestroyOnMainThread_mCF8375FB70A513CE4BE8ADAF1EE8F8ACDD28275D_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (Mathf.Approximately(delay, 0f))
		float L_7 = ___1_delay;
		bool L_8;
		L_8 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_7, (0.0f), NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// s_syncContext.Post(DestroyImmediate, obj);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_10 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_11 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_11, NULL, (intptr_t)((void*)WebRTC_DestroyImmediate_mA08ED101986113F76C294B300DB842346EF86952_RuntimeMethod_var), NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_12 = ___0_obj;
		NullCheck(L_10);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_10, L_11, L_12);
		goto IL_006a;
	}

IL_004c:
	{
		// s_syncContext.Post(Destroy, Tuple.Create(obj, delay));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_14 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_14, NULL, (intptr_t)((void*)WebRTC_Destroy_m7B95C87240F7FC2849564566B0EB1404808D0A9B_RuntimeMethod_var), NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15 = ___0_obj;
		float L_16 = ___1_delay;
		Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A* L_17;
		L_17 = Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4CC2105192476F3A0C170E75270B730745E30854(L_15, L_16, Tuple_Create_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m4CC2105192476F3A0C170E75270B730745E30854_RuntimeMethod_var);
		NullCheck(L_13);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_13, L_14, L_17);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DelayActionOnMainThread(System.Action,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DelayActionOnMainThread_m1731BDA66CCB4C10F21D4E06CA222CECE5437CF5 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_callback, float ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m69ADBF3AA294F739E635BC5A136D30EAD4685D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_DelayAction_mAA8B2D8336A00FD4C4E8F581C6E63A24FDFB3341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_syncContext.Post(DelayAction, Tuple.Create(callback, delay));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_1, NULL, (intptr_t)((void*)WebRTC_DelayAction_mAA8B2D8336A00FD4C4E8F581C6E63A24FDFB3341_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_callback;
		float L_3 = ___1_delay;
		Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B* L_4;
		L_4 = Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m69ADBF3AA294F739E635BC5A136D30EAD4685D81(L_2, L_3, Tuple_Create_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m69ADBF3AA294F739E635BC5A136D30EAD4685D81_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_0, L_1, L_4);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::Sync(System.IntPtr,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Sync_m571146E350E2692F216D7AC93C417873D7D21473 (intptr_t ___0_ptr, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_SendOrPostCallback_mFF1E55B27196151A13376F127E49C93D014305C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_syncContext.Post(SendOrPostCallback, new CallbackObject(ptr, callback));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_syncContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_1, NULL, (intptr_t)((void*)WebRTC_SendOrPostCallback_mFF1E55B27196151A13376F127E49C93D014305C9_RuntimeMethod_var), NULL);
		intptr_t L_2 = ___0_ptr;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___1_callback;
		CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* L_4 = (CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47*)il2cpp_codegen_object_new(CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CallbackObject__ctor_m7C2A7B197E50D2A739B0CBF3A2C84D4D902CFFC3(L_4, L_2, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_0, L_1, L_4);
		// }
		return;
	}
}
// System.String Unity.WebRTC.WebRTC::GetModuleName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRTC_GetModuleName_m48902CBBD14A3192881C8AA427533974BD25F6FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF041C7691EEA971C55765F8DF52C0DD5C4E53278);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return System.IO.Path.GetFileName(Lib);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(_stringLiteralF041C7691EEA971C55765F8DF52C0DD5C4E53278, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.WebRTC.WebRTC::SendOrPostCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_SendOrPostCallback_mFF1E55B27196151A13376F127E49C93D014305C9 (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var obj = state as CallbackObject;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47*)IsInstClass((RuntimeObject*)L_0, CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47_il2cpp_TypeInfo_var));
		// if (s_context == null || !Table.ContainsKey(obj.ptr))
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_1 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_2;
		L_2 = WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737(NULL);
		CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* L_3 = V_0;
		NullCheck(L_3);
		intptr_t L_4 = L_3->___ptr_0;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		bool L_7;
		L_7 = WeakReferenceTable_ContainsKey_m8823F9AE88C9A1784AA624FE6BE23A07DC1D1337(L_2, L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_1 = (bool)G_B3_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		goto IL_003d;
	}

IL_0031:
	{
		// obj.callback();
		CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* L_9 = V_0;
		NullCheck(L_9);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = L_9->___callback_1;
		NullCheck(L_10);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_10, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DestroyImmediate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DestroyImmediate_mA08ED101986113F76C294B300DB842346EF86952 (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		// var obj = state as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		// UnityEngine.Object.DestroyImmediate(obj);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::Destroy(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_Destroy_m7B95C87240F7FC2849564566B0EB1404808D0A9B (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m85A39A000D95BC0AF3132135DF9B5378090A582A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_2 = NULL;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		// (UnityEngine.Object obj, float delay) = state as Tuple<UnityEngine.Object, float>;
		RuntimeObject* L_0 = ___0_state;
		TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m85A39A000D95BC0AF3132135DF9B5378090A582A(((Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A*)IsInstClass((RuntimeObject*)L_0, Tuple_2_tDC984B5E73877A7FC731DC48D1D7FE8ACEC5312A_il2cpp_TypeInfo_var)), (&V_2), (&V_3), TupleExtensions_Deconstruct_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m85A39A000D95BC0AF3132135DF9B5378090A582A_RuntimeMethod_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_2;
		V_0 = L_1;
		float L_2 = V_3;
		V_1 = L_2;
		// if (!Application.isPlaying)
		bool L_3;
		L_3 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_4 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// UnityEngine.Object.DestroyImmediate(obj);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
		// return;
		goto IL_0035;
	}

IL_002d:
	{
		// UnityEngine.Object.Destroy(obj, delay);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = V_0;
		float L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_6, L_7, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DelayAction(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DelayAction_mAA8B2D8336A00FD4C4E8F581C6E63A24FDFB3341 (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m962CB786A8BA9B87A7036765B61D02EED0FF1EBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CDelayActionU3Eb__0_mC3DB3E0F4C629FF8F061D1FCA281BA70F5A47FEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	float V_2 = 0.0f;
	{
		U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6* L_0 = (U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass27_0__ctor_m0F5D123019758589A5D386468D8A59E7702FBB4E(L_0, NULL);
		V_0 = L_0;
		// (Action callback, float delay) = state as Tuple<Action, float>;
		RuntimeObject* L_1 = ___0_state;
		TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m962CB786A8BA9B87A7036765B61D02EED0FF1EBB(((Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B*)IsInstClass((RuntimeObject*)L_1, Tuple_2_t4DACCB3E8575E2E43E2B32FF88D196E2B1394F9B_il2cpp_TypeInfo_var)), (&V_1), (&V_2), TupleExtensions_Deconstruct_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m962CB786A8BA9B87A7036765B61D02EED0FF1EBB_RuntimeMethod_var);
		U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6* L_2 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_1;
		NullCheck(L_2);
		L_2->___callback_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_1), (void*)L_3);
		U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6* L_4 = V_0;
		float L_5 = V_2;
		NullCheck(L_4);
		L_4->___delay_0 = L_5;
		// ThreadPool.QueueUserWorkItem(_ =>
		// {
		//     int milliseconds = (int)(delay * 1000f);
		//     Thread.Sleep(milliseconds);
		//     callback();
		// });
		U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6* L_6 = V_0;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_7 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass27_0_U3CDelayActionU3Eb__0_mC3DB3E0F4C629FF8F061D1FCA281BA70F5A47FEF_RuntimeMethod_var), NULL);
		bool L_8;
		L_8 = ThreadPool_QueueUserWorkItem_m24B9C1887DBABE1F408E31475AF15B9B9A08854D(L_7, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::DebugLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_DebugLog_m02648DBBEBE55B23CAFE5966A09202B7097FED29 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(str);
		String_t* L_0 = ___0_str;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::OnSetLocalDescription(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_OnSetLocalDescription_mF5A13B3B5348A49DB11F2C32DAF3E4F55054AB5D (intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3COnSetLocalDescriptionU3Eb__0_mE47B8E0A63BD507BA39FEB9A199A487862337328_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* L_0 = (U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_m0E18068606A3737D8513B1FB3C9EB7992F3D3540(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* L_1 = V_0;
		intptr_t L_2 = ___0_ptr;
		NullCheck(L_1);
		L_1->___ptr_0 = L_2;
		U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* L_3 = V_0;
		intptr_t L_4 = ___1_ptrObserver;
		NullCheck(L_3);
		L_3->___ptrObserver_1 = L_4;
		U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* L_5 = V_0;
		int32_t L_6 = ___2_type;
		NullCheck(L_5);
		L_5->___type_2 = L_6;
		U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* L_7 = V_0;
		String_t* L_8 = ___3_message;
		NullCheck(L_7);
		L_7->___message_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___message_3), (void*)L_8);
		// Sync(ptr, () =>
		// {
		//     if (Table[ptr] is RTCPeerConnection connection)
		//     {
		//         var observer = connection.FindObserver<SetSessionDescriptionObserver>(ptrObserver);
		//         if (observer == null)
		//             return;
		//         connection.RemoveObserver(observer);
		//         observer.Invoke(type, message);
		//         observer.Dispose();
		//     }
		// });
		U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* L_9 = V_0;
		NullCheck(L_9);
		intptr_t L_10 = L_9->___ptr_0;
		U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3COnSetLocalDescriptionU3Eb__0_mE47B8E0A63BD507BA39FEB9A199A487862337328_RuntimeMethod_var), NULL);
		WebRTC_Sync_m571146E350E2692F216D7AC93C417873D7D21473(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::OnSetRemoteDescription(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_OnSetRemoteDescription_m78DFBA03C6BDA1C5BD93452B72D1A6DBBF4B176D (intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3COnSetRemoteDescriptionU3Eb__0_m51B97913B8DC8D916E104ADAA4D0EE6B1E8FEB51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* L_0 = (U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass32_0__ctor_m69D64FB4A2DCC19008A8212540E9D7158EA6B1A2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* L_1 = V_0;
		intptr_t L_2 = ___0_ptr;
		NullCheck(L_1);
		L_1->___ptr_0 = L_2;
		U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* L_3 = V_0;
		intptr_t L_4 = ___1_ptrObserver;
		NullCheck(L_3);
		L_3->___ptrObserver_1 = L_4;
		U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* L_5 = V_0;
		int32_t L_6 = ___2_type;
		NullCheck(L_5);
		L_5->___type_2 = L_6;
		U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* L_7 = V_0;
		String_t* L_8 = ___3_message;
		NullCheck(L_7);
		L_7->___message_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___message_3), (void*)L_8);
		// Sync(ptr, () =>
		// {
		//     if (Table[ptr] is RTCPeerConnection connection)
		//     {
		//         var observer = connection.FindObserver<SetSessionDescriptionObserver>(ptrObserver);
		//         if (observer == null)
		//             return;
		//         connection.RemoveObserver(observer);
		//         observer.Invoke(type, message);
		//         observer.Dispose();
		//     }
		// });
		U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* L_9 = V_0;
		NullCheck(L_9);
		intptr_t L_10 = L_9->___ptr_0;
		U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass32_0_U3COnSetRemoteDescriptionU3Eb__0_m51B97913B8DC8D916E104ADAA4D0EE6B1E8FEB51_RuntimeMethod_var), NULL);
		WebRTC_Sync_m571146E350E2692F216D7AC93C417873D7D21473(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::OnCreateSessionDescription(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_OnCreateSessionDescription_m5CE28E67A12E3D161D1787F38C6521F8F3FE1EC0 (intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3COnCreateSessionDescriptionU3Eb__0_mC67E59E05B794BE0A827E01BF09119617D25B5D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_0 = (U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass33_0__ctor_mFD1704B5BF3B4C5CC60D870EF5B6F04D36EFB6DC(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_1 = V_0;
		intptr_t L_2 = ___0_ptr;
		NullCheck(L_1);
		L_1->___ptr_0 = L_2;
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_3 = V_0;
		intptr_t L_4 = ___1_ptrObserver;
		NullCheck(L_3);
		L_3->___ptrObserver_1 = L_4;
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_5 = V_0;
		int32_t L_6 = ___2_type;
		NullCheck(L_5);
		L_5->___type_2 = L_6;
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_7 = V_0;
		String_t* L_8 = ___3_sdp;
		NullCheck(L_7);
		L_7->___sdp_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___sdp_3), (void*)L_8);
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_9 = V_0;
		int32_t L_10 = ___4_errorType;
		NullCheck(L_9);
		L_9->___errorType_4 = L_10;
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_11 = V_0;
		String_t* L_12 = ___5_message;
		NullCheck(L_11);
		L_11->___message_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___message_5), (void*)L_12);
		// Sync(ptr, () =>
		// {
		//     if (Table[ptr] is RTCPeerConnection connection)
		//     {
		//         var observer = connection.FindObserver<CreateSessionDescriptionObserver>(ptrObserver);
		//         if (observer == null)
		//             return;
		//         connection.RemoveObserver(observer);
		//         observer.Invoke(type, sdp, errorType, message);
		//         observer.Dispose();
		//     }
		// });
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_13 = V_0;
		NullCheck(L_13);
		intptr_t L_14 = L_13->___ptr_0;
		U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* L_15 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3COnCreateSessionDescriptionU3Eb__0_mC67E59E05B794BE0A827E01BF09119617D25B5D5_RuntimeMethod_var), NULL);
		WebRTC_Sync_m571146E350E2692F216D7AC93C417873D7D21473(L_14, L_16, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC::OnCollectStatsCallback(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTC_OnCollectStatsCallback_m74A606E07AF78A1149C8CD261CE17A590260598F (intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_ptrReport, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3COnCollectStatsCallbackU3Eb__0_mA3EF985F9AB849767E608CE539FE864E6AD68335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* L_0 = (U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass34_0__ctor_m594FB7120950A08AD80EC2AB4B1284550AAAE10E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* L_1 = V_0;
		intptr_t L_2 = ___2_ptrReport;
		NullCheck(L_1);
		L_1->___ptrReport_0 = L_2;
		U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* L_3 = V_0;
		intptr_t L_4 = ___0_ptr;
		NullCheck(L_3);
		L_3->___ptr_1 = L_4;
		U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* L_5 = V_0;
		intptr_t L_6 = ___1_ptrCallback;
		NullCheck(L_5);
		L_5->___ptrCallback_2 = L_6;
		// Sync(ptr, () =>
		// {
		//     RTCStatsReport report = WebRTC.FindOrCreate(ptrReport, ptr_ => new RTCStatsReport(ptr_));
		//     if (Table[ptr] is RTCPeerConnection connection)
		//     {
		//         RTCStatsCollectorCallback callback = connection.FindCollectStatsCallback(ptrCallback);
		//         if (callback == null)
		//             return;
		//         connection.RemoveCollectStatsCallback(callback);
		//         callback.Invoke(report);
		//         callback.Dispose();
		//     }
		// });
		U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* L_7 = V_0;
		NullCheck(L_7);
		intptr_t L_8 = L_7->___ptr_1;
		U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3COnCollectStatsCallbackU3Eb__0_mA3EF985F9AB849767E608CE539FE864E6AD68335_RuntimeMethod_var), NULL);
		WebRTC_Sync_m571146E350E2692F216D7AC93C417873D7D21473(L_8, L_10, NULL);
		// }
		return;
	}
}
// Unity.WebRTC.Context Unity.WebRTC.WebRTC::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* WebRTC_get_Context_m41BFE7C5D5FDE90CA0A7C045AD3B7F4143079CEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* V_0 = NULL;
	{
		// internal static Context Context { get { return s_context; } }
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// internal static Context Context { get { return s_context; } }
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_1 = V_0;
		return L_1;
	}
}
// Unity.WebRTC.WeakReferenceTable Unity.WebRTC.WebRTC::get_Table()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* V_0 = NULL;
	Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* G_B2_0 = NULL;
	Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* G_B1_0 = NULL;
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* G_B3_0 = NULL;
	{
		// internal static WeakReferenceTable Table { get { return s_context?.table; } }
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_0 = ((WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_StaticFields*)il2cpp_codegen_static_fields_for(WebRTC_tD7A866A833D32FBEC77818639BD8E285074C3228_il2cpp_TypeInfo_var))->___s_context_1;
		Context_t7B815D66FA544C220FA9C90764CCDB80AAF21AA3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_2 = G_B2_0->___table_1;
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// internal static WeakReferenceTable Table { get { return s_context?.table; } }
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.WeakReference`1<Unity.WebRTC.RTCPeerConnection>> Unity.WebRTC.WebRTC::get_PeerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebRTC_get_PeerList_m852E06E9088729F4EF332CD334C636EEF3266A3F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* G_B2_0 = NULL;
	WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// var list = new List<WeakReference<RTCPeerConnection>>();
		List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* L_0 = (List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887*)il2cpp_codegen_object_new(List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD(L_0, List_1__ctor_mC82D08B02BDAC653EBA764E76160A75D5759DDFD_RuntimeMethod_var);
		V_0 = L_0;
		// var values = Table?.CopiedValues;
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_1;
		L_1 = WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737(NULL);
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_3;
		L_3 = WeakReferenceTable_get_CopiedValues_m2DAEF7C7602D0F4A83F9DD8C6F0CF31B5FA0B2AE(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0018:
	{
		V_1 = G_B3_0;
		// if (values != null)
		RuntimeObject* L_4 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_007e;
		}
	}
	{
		// foreach (var value in values)
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_3;
					V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_9 = V_7;
					if (!L_9)
					{
						goto IL_0078;
					}
				}
				{
					RuntimeObject* L_10 = V_7;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0078:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005a_1;
			}

IL_002c_1:
			{
				// foreach (var value in values)
				RuntimeObject* L_11 = V_3;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				V_4 = L_12;
				// if (value is RTCPeerConnection peer)
				RuntimeObject* L_13 = V_4;
				V_5 = ((RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)IsInstClass((RuntimeObject*)L_13, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var));
				RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_14 = V_5;
				V_6 = (bool)((!(((RuntimeObject*)(RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_15 = V_6;
				if (!L_15)
				{
					goto IL_0059_1;
				}
			}
			{
				// list.Add(new WeakReference<RTCPeerConnection>(peer));
				List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* L_16 = V_0;
				RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_17 = V_5;
				WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB* L_18 = (WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB*)il2cpp_codegen_object_new(WeakReference_1_tC19743E2B8234648F9F6FF2887B59BF28949A0BB_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348(L_18, L_17, WeakReference_1__ctor_m49EF049042EA20582681C99AD2FEB6C60F1C9348_RuntimeMethod_var);
				NullCheck(L_16);
				List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_inline(L_16, L_18, List_1_Add_m233C5F09F92C6EFF9458CE707EC0A67AB36D7066_RuntimeMethod_var);
			}

IL_0059_1:
			{
			}

IL_005a_1:
			{
				// foreach (var value in values)
				RuntimeObject* L_19 = V_3;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		// return list;
		List_1_t014445DEAA75802DFC31DB5F10D9A4BA6A3C0887* L_21 = V_0;
		V_8 = L_21;
		goto IL_0083;
	}

IL_007e:
	{
		// return null;
		V_8 = (RuntimeObject*)NULL;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		RuntimeObject* L_22 = V_8;
		return L_22;
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
// System.Void Unity.WebRTC.WebRTC/CallbackObject::.ctor(System.IntPtr,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackObject__ctor_m7C2A7B197E50D2A739B0CBF3A2C84D4D902CFFC3 (CallbackObject_t1F49ADC01AFF2ECA7F789F6C4E38E974E4D0FA47* __this, intptr_t ___0_ptr, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, const RuntimeMethod* method) 
{
	{
		// public CallbackObject(IntPtr ptr, Action callback)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.ptr = ptr;
		intptr_t L_0 = ___0_ptr;
		__this->___ptr_0 = L_0;
		// this.callback = callback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___1_callback;
		__this->___callback_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_1), (void*)L_1);
		// }
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
// System.Void Unity.WebRTC.WebRTC/<Update>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__6__ctor_mA63FA1407735301248BC325C3243CADC32978D48 (U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<Update>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__6_System_IDisposable_Dispose_m090C4C42611B8B3A4A14B1F29CC5286B5D09DA65 (U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Unity.WebRTC.WebRTC/<Update>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateU3Ed__6_MoveNext_m1BF77E11DE4C4D39809D91C6A2BA598A02068F91 (U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t75C6BEB987E141931D2E0B129829C72C79814833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9BA6700041E904E1EAAF35024EA57FFDB87C25F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0046;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var instruction = new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CinstructionU3E5__1_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstructionU3E5__1_2), (void*)L_3);
		goto IL_010b;
	}

IL_0030:
	{
		// yield return instruction;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = __this->___U3CinstructionU3E5__1_2;
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var tempTextureActive = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		__this->___U3CtempTextureActiveU3E5__2_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtempTextureActiveU3E5__2_3), (void*)L_5);
		// RenderTexture.active = null;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// foreach (var reference in VideoStreamTrack.s_tracks.Values)
		il2cpp_codegen_runtime_class_init_inline(VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_t1309BDCB030C5D269298B73222D4954C79437D0E* L_6 = ((VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_StaticFields*)il2cpp_codegen_static_fields_for(VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B_il2cpp_TypeInfo_var))->___s_tracks_2;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392(L_6, ConcurrentDictionary_2_get_Values_mF3D662422EB3DD9AC9C12BA87C5F73904A7D6392_RuntimeMethod_var);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>::GetEnumerator() */, IEnumerable_1_t75C6BEB987E141931D2E0B129829C72C79814833_il2cpp_TypeInfo_var, L_7);
		__this->___U3CU3Es__3_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_4), (void*)L_8);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00da:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = __this->___U3CU3Es__3_4;
					if (!L_9)
					{
						goto IL_00ee;
					}
				}
				{
					RuntimeObject* L_10 = __this->___U3CU3Es__3_4;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00ee:
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

IL_0078_1:
			{
				// foreach (var reference in VideoStreamTrack.s_tracks.Values)
				RuntimeObject* L_11 = __this->___U3CU3Es__3_4;
				NullCheck(L_11);
				WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* L_12;
				L_12 = InterfaceFuncInvoker0< WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.WeakReference`1<Unity.WebRTC.VideoStreamTrack>>::get_Current() */, IEnumerator_1_t9BA6700041E904E1EAAF35024EA57FFDB87C25F1_il2cpp_TypeInfo_var, L_11);
				__this->___U3CreferenceU3E5__4_5 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreferenceU3E5__4_5), (void*)L_12);
				// if (!reference.TryGetTarget(out var track))
				WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31* L_13 = __this->___U3CreferenceU3E5__4_5;
				VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B** L_14 = (&__this->___U3CtrackU3E5__5_6);
				NullCheck(L_13);
				bool L_15;
				L_15 = WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8(L_13, L_14, WeakReference_1_TryGetTarget_m87949C83D6F8B103A5836BB25CFE7B96ED808EF8_RuntimeMethod_var);
				V_1 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
				bool L_16 = V_1;
				if (!L_16)
				{
					goto IL_00a4_1;
				}
			}
			{
				// continue;
				goto IL_00cb_1;
			}

IL_00a4_1:
			{
				// track.UpdateSendTexture();
				VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_17 = __this->___U3CtrackU3E5__5_6;
				NullCheck(L_17);
				VideoStreamTrack_UpdateSendTexture_m61BA118B3E588ED03B37032E03CDC284584ABC0F(L_17, NULL);
				// track.UpdateReceiveTexture();
				VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B* L_18 = __this->___U3CtrackU3E5__5_6;
				NullCheck(L_18);
				VideoStreamTrack_UpdateReceiveTexture_m94AA8A04CEB096F5D0C8A97A30536E04C5385F1C(L_18, NULL);
				__this->___U3CtrackU3E5__5_6 = (VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackU3E5__5_6), (void*)(VideoStreamTrack_t8213B62F6CF337898786C7EB2AE8F0B9B9328E8B*)NULL);
				__this->___U3CreferenceU3E5__4_5 = (WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreferenceU3E5__4_5), (void*)(WeakReference_1_tF603D605A9F12BF4360B47DD03FB1B87A4BC7E31*)NULL);
			}

IL_00cb_1:
			{
				// foreach (var reference in VideoStreamTrack.s_tracks.Values)
				RuntimeObject* L_19 = __this->___U3CU3Es__3_4;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0078_1;
				}
			}
			{
				goto IL_00ef;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ef:
	{
		__this->___U3CU3Es__3_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_4), (void*)(RuntimeObject*)NULL);
		// RenderTexture.active = tempTextureActive;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = __this->___U3CtempTextureActiveU3E5__2_3;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_21, NULL);
		__this->___U3CtempTextureActiveU3E5__2_3 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtempTextureActiveU3E5__2_3), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_010b:
	{
		// while (true)
		V_2 = (bool)1;
		goto IL_0030;
	}
}
// System.Object Unity.WebRTC.WebRTC/<Update>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7D11074C9BA6DA17D65F2E4153EF4C57BCBC8B09 (U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Unity.WebRTC.WebRTC/<Update>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__6_System_Collections_IEnumerator_Reset_m49E006E9A614A6DC67F8DB4A70F6595812970500 (U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateU3Ed__6_System_Collections_IEnumerator_Reset_m49E006E9A614A6DC67F8DB4A70F6595812970500_RuntimeMethod_var)));
	}
}
// System.Object Unity.WebRTC.WebRTC/<Update>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateU3Ed__6_System_Collections_IEnumerator_get_Current_mDB9B2EB3AED7EC03F02F0FD4D3E948A63E1A8B93 (U3CUpdateU3Ed__6_t9BAE4261BD8760973FCA5B525298D5251049A27C* __this, const RuntimeMethod* method) 
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
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m0F5D123019758589A5D386468D8A59E7702FBB4E (U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass27_0::<DelayAction>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CDelayActionU3Eb__0_mC3DB3E0F4C629FF8F061D1FCA281BA70F5A47FEF (U3CU3Ec__DisplayClass27_0_t201E22A532B6B15B172CA4960A62EFF8659D9DE6* __this, RuntimeObject* ___0__, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int milliseconds = (int)(delay * 1000f);
		float L_0 = __this->___delay_0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_0, (1000.0f))));
		// Thread.Sleep(milliseconds);
		int32_t L_1 = V_0;
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(L_1, NULL);
		// callback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___callback_1;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		// });
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
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m0E18068606A3737D8513B1FB3C9EB7992F3D3540 (U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass31_0::<OnSetLocalDescription>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3COnSetLocalDescriptionU3Eb__0_mE47B8E0A63BD507BA39FEB9A199A487862337328 (U3CU3Ec__DisplayClass31_0_t78CEE0CCD7335855EB153310BF58A1D80B30FEDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_FindObserver_TisSetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_m0AEF39144C13BD169B1EA7AD2AFA77231724F653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* V_0 = NULL;
	bool V_1 = false;
	SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* V_2 = NULL;
	bool V_3 = false;
	{
		// if (Table[ptr] is RTCPeerConnection connection)
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_0;
		L_0 = WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737(NULL);
		intptr_t L_1 = __this->___ptr_0;
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91(L_0, L_3, NULL);
		V_0 = ((RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)IsInstClass((RuntimeObject*)L_4, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var));
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_5 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// var observer = connection.FindObserver<SetSessionDescriptionObserver>(ptrObserver);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_7 = V_0;
		intptr_t L_8 = __this->___ptrObserver_1;
		NullCheck(L_7);
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_9;
		L_9 = RTCPeerConnection_FindObserver_TisSetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_m0AEF39144C13BD169B1EA7AD2AFA77231724F653(L_7, L_8, RTCPeerConnection_FindObserver_TisSetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_m0AEF39144C13BD169B1EA7AD2AFA77231724F653_RuntimeMethod_var);
		V_2 = L_9;
		// if (observer == null)
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_10 = V_2;
		V_3 = (bool)((((RuntimeObject*)(SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		goto IL_005f;
	}

IL_003c:
	{
		// connection.RemoveObserver(observer);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_12 = V_0;
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_13 = V_2;
		NullCheck(L_12);
		RTCPeerConnection_RemoveObserver_m1A698B749FAA5F7DCA1525863E1D5141377DA2D7(L_12, L_13, NULL);
		// observer.Invoke(type, message);
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_14 = V_2;
		int32_t L_15 = __this->___type_2;
		String_t* L_16 = __this->___message_3;
		NullCheck(L_14);
		SetSessionDescriptionObserver_Invoke_m64E83262C6F6808D401512CFC931BE40C287DB42(L_14, L_15, L_16, NULL);
		// observer.Dispose();
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_17 = V_2;
		NullCheck(L_17);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_17, NULL);
	}

IL_005f:
	{
		// });
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
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m69D64FB4A2DCC19008A8212540E9D7158EA6B1A2 (U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass32_0::<OnSetRemoteDescription>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3COnSetRemoteDescriptionU3Eb__0_m51B97913B8DC8D916E104ADAA4D0EE6B1E8FEB51 (U3CU3Ec__DisplayClass32_0_t10343A3C1A4571397067970CF8526F8829425E6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_FindObserver_TisSetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_m0AEF39144C13BD169B1EA7AD2AFA77231724F653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* V_0 = NULL;
	bool V_1 = false;
	SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* V_2 = NULL;
	bool V_3 = false;
	{
		// if (Table[ptr] is RTCPeerConnection connection)
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_0;
		L_0 = WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737(NULL);
		intptr_t L_1 = __this->___ptr_0;
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91(L_0, L_3, NULL);
		V_0 = ((RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)IsInstClass((RuntimeObject*)L_4, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var));
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_5 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// var observer = connection.FindObserver<SetSessionDescriptionObserver>(ptrObserver);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_7 = V_0;
		intptr_t L_8 = __this->___ptrObserver_1;
		NullCheck(L_7);
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_9;
		L_9 = RTCPeerConnection_FindObserver_TisSetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_m0AEF39144C13BD169B1EA7AD2AFA77231724F653(L_7, L_8, RTCPeerConnection_FindObserver_TisSetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_m0AEF39144C13BD169B1EA7AD2AFA77231724F653_RuntimeMethod_var);
		V_2 = L_9;
		// if (observer == null)
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_10 = V_2;
		V_3 = (bool)((((RuntimeObject*)(SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		goto IL_005f;
	}

IL_003c:
	{
		// connection.RemoveObserver(observer);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_12 = V_0;
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_13 = V_2;
		NullCheck(L_12);
		RTCPeerConnection_RemoveObserver_m1A698B749FAA5F7DCA1525863E1D5141377DA2D7(L_12, L_13, NULL);
		// observer.Invoke(type, message);
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_14 = V_2;
		int32_t L_15 = __this->___type_2;
		String_t* L_16 = __this->___message_3;
		NullCheck(L_14);
		SetSessionDescriptionObserver_Invoke_m64E83262C6F6808D401512CFC931BE40C287DB42(L_14, L_15, L_16, NULL);
		// observer.Dispose();
		SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* L_17 = V_2;
		NullCheck(L_17);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_17, NULL);
	}

IL_005f:
	{
		// });
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
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mFD1704B5BF3B4C5CC60D870EF5B6F04D36EFB6DC (U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass33_0::<OnCreateSessionDescription>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3COnCreateSessionDescriptionU3Eb__0_mC67E59E05B794BE0A827E01BF09119617D25B5D5 (U3CU3Ec__DisplayClass33_0_t6A5FCE0A70ED1744AA6249506D252BC33CA9E68B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_FindObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m97F45CDD68330CEA8CE48398CD556EE4C0AB5C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_RemoveObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m03D0237B88306474726F5B853C2663A3C3621EC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* V_0 = NULL;
	bool V_1 = false;
	CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* V_2 = NULL;
	bool V_3 = false;
	{
		// if (Table[ptr] is RTCPeerConnection connection)
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_0;
		L_0 = WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737(NULL);
		intptr_t L_1 = __this->___ptr_0;
		intptr_t L_2 = L_1;
		RuntimeObject* L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91(L_0, L_3, NULL);
		V_0 = ((RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)IsInstClass((RuntimeObject*)L_4, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var));
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_5 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		// var observer = connection.FindObserver<CreateSessionDescriptionObserver>(ptrObserver);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_7 = V_0;
		intptr_t L_8 = __this->___ptrObserver_1;
		NullCheck(L_7);
		CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* L_9;
		L_9 = RTCPeerConnection_FindObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m97F45CDD68330CEA8CE48398CD556EE4C0AB5C31(L_7, L_8, RTCPeerConnection_FindObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m97F45CDD68330CEA8CE48398CD556EE4C0AB5C31_RuntimeMethod_var);
		V_2 = L_9;
		// if (observer == null)
		CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* L_10 = V_2;
		V_3 = (bool)((((RuntimeObject*)(CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		goto IL_006b;
	}

IL_003c:
	{
		// connection.RemoveObserver(observer);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_12 = V_0;
		CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* L_13 = V_2;
		NullCheck(L_12);
		RTCPeerConnection_RemoveObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m03D0237B88306474726F5B853C2663A3C3621EC8(L_12, L_13, RTCPeerConnection_RemoveObserver_TisCreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_m03D0237B88306474726F5B853C2663A3C3621EC8_RuntimeMethod_var);
		// observer.Invoke(type, sdp, errorType, message);
		CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* L_14 = V_2;
		int32_t L_15 = __this->___type_2;
		String_t* L_16 = __this->___sdp_3;
		int32_t L_17 = __this->___errorType_4;
		String_t* L_18 = __this->___message_5;
		NullCheck(L_14);
		CreateSessionDescriptionObserver_Invoke_m0C3EB83FABA76F9F268F867673D73D21551AB9B6(L_14, L_15, L_16, L_17, L_18, NULL);
		// observer.Dispose();
		CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* L_19 = V_2;
		NullCheck(L_19);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_19, NULL);
	}

IL_006b:
	{
		// });
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
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m594FB7120950A08AD80EC2AB4B1284550AAAE10E (U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<>c__DisplayClass34_0::<OnCollectStatsCallback>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3COnCollectStatsCallbackU3Eb__0_mA3EF985F9AB849767E608CE539FE864E6AD68335 (U3CU3Ec__DisplayClass34_0_t33DB9E03EDB4ED4455F3B1CE5B84CA7E50C6B035* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnCollectStatsCallbackU3Eb__34_1_m05286A46B28107712123EB7D65A163571DED4876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRTC_FindOrCreate_TisRTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448_mDE4EE6183E0FB2437EC94F938F25971B70E54AE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* V_0 = NULL;
	RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* V_1 = NULL;
	bool V_2 = false;
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* V_3 = NULL;
	bool V_4 = false;
	Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		// RTCStatsReport report = WebRTC.FindOrCreate(ptrReport, ptr_ => new RTCStatsReport(ptr_));
		intptr_t L_0 = __this->___ptrReport_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var);
		Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* L_1 = ((U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var))->___U3CU3E9__34_1_1;
		Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var);
		U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9* L_3 = ((U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* L_4 = (Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905*)il2cpp_codegen_object_new(Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mCCB12086B6A368A15FE4FC0F3CB12E2DE81B4D52(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3COnCollectStatsCallbackU3Eb__34_1_m05286A46B28107712123EB7D65A163571DED4876_RuntimeMethod_var), NULL);
		Func_2_tA30D7C0772809327DCBBDDE5AA0199EE4DCA4905* L_5 = L_4;
		((U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var))->___U3CU3E9__34_1_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var))->___U3CU3E9__34_1_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_6;
		L_6 = WebRTC_FindOrCreate_TisRTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448_mDE4EE6183E0FB2437EC94F938F25971B70E54AE4(G_B2_1, G_B2_0, WebRTC_FindOrCreate_TisRTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448_mDE4EE6183E0FB2437EC94F938F25971B70E54AE4_RuntimeMethod_var);
		V_0 = L_6;
		// if (Table[ptr] is RTCPeerConnection connection)
		WeakReferenceTable_tD578C93C19440913D79B6EDBFED064A51F58E370* L_7;
		L_7 = WebRTC_get_Table_m8B1354E08FECA1775C45E41D16EC3AF7717F8737(NULL);
		intptr_t L_8 = __this->___ptr_1;
		intptr_t L_9 = L_8;
		RuntimeObject* L_10 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		RuntimeObject* L_11;
		L_11 = WeakReferenceTable_get_Item_m8133E787B2371D157BE53E69E660DC3507793F91(L_7, L_10, NULL);
		V_1 = ((RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)IsInstClass((RuntimeObject*)L_11, RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2_il2cpp_TypeInfo_var));
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_12 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		// RTCStatsCollectorCallback callback = connection.FindCollectStatsCallback(ptrCallback);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_14 = V_1;
		intptr_t L_15 = __this->___ptrCallback_2;
		NullCheck(L_14);
		RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* L_16;
		L_16 = RTCPeerConnection_FindCollectStatsCallback_m13ECB54B1852F9CCCBB0FC923E176CA584923774(L_14, L_15, NULL);
		V_3 = L_16;
		// if (callback == null)
		RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* L_17 = V_3;
		V_4 = (bool)((((RuntimeObject*)(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		// return;
		goto IL_0081;
	}

IL_0069:
	{
		// connection.RemoveCollectStatsCallback(callback);
		RTCPeerConnection_t3C85171063B36E61FD20824BB0C5EA016F355DD2* L_19 = V_1;
		RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* L_20 = V_3;
		NullCheck(L_19);
		RTCPeerConnection_RemoveCollectStatsCallback_m52492D89DF37270A390DE550247AD9DF5331251C(L_19, L_20, NULL);
		// callback.Invoke(report);
		RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* L_21 = V_3;
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_22 = V_0;
		NullCheck(L_21);
		RTCStatsCollectorCallback_Invoke_m71E46F4BFCBE80CBBF3503B1005C73311C42DD87(L_21, L_22, NULL);
		// callback.Dispose();
		RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* L_23 = V_3;
		NullCheck(L_23);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_23, NULL);
	}

IL_0081:
	{
		// });
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
// System.Void Unity.WebRTC.WebRTC/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3124361E2B2D0E03432DA9AB9FF156D2184F67BB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9* L_0 = (U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9*)il2cpp_codegen_object_new(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m38F5BF7974FE71370451C536CB0385C31732EF80(L_0, NULL);
		((U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.WebRTC.WebRTC/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m38F5BF7974FE71370451C536CB0385C31732EF80 (U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Unity.WebRTC.RTCStatsReport Unity.WebRTC.WebRTC/<>c::<OnCollectStatsCallback>b__34_1(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* U3CU3Ec_U3COnCollectStatsCallbackU3Eb__34_1_m05286A46B28107712123EB7D65A163571DED4876 (U3CU3Ec_tEB482C1FAD595BD51A47BEA4EDB9F1CF1D9085E9* __this, intptr_t ___0_ptr_, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RTCStatsReport report = WebRTC.FindOrCreate(ptrReport, ptr_ => new RTCStatsReport(ptr_));
		intptr_t L_0 = ___0_ptr_;
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_1 = (RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448*)il2cpp_codegen_object_new(RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RTCStatsReport__ctor_m30C5D705DBB7A98D49DD48EA21C70FFD12A367B4(L_1, L_0, NULL);
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
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_Multicast(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___0_str, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* currentDelegate = reinterpret_cast<DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_str, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_OpenInst(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___0_str, const RuntimeMethod* method)
{
	NullCheck(___0_str);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_str, method);
}
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_OpenStatic(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___0_str, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_str, method);
}
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_OpenStaticInvoker(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___0_str, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_str);
}
void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_ClosedStaticInvoker(DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___0_str, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_str);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___0_str, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_str' to native representation
	char* ____0_str_marshaled = NULL;
	____0_str_marshaled = il2cpp_codegen_marshal_string(___0_str);

	// Native function invocation
	il2cppPInvokeFunc(____0_str_marshaled);

	// Marshaling cleanup of parameter '___0_str' native representation
	il2cpp_codegen_marshal_free(____0_str_marshaled);
	____0_str_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateDebugLog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateDebugLog__ctor_m1414D159BF6B233BF3FE9DDD9089953CA39BB43D (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824_Multicast;
}
// System.Void Unity.WebRTC.DelegateDebugLog::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateDebugLog_Invoke_m7CF04E7704D52C0987FE5BE7A0B9DF4E6B74F824 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_str, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateDebugLog::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateDebugLog_BeginInvoke_m0BEF86638EAD4352D3E86118BE21D2ED3F16B8B8 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, String_t* ___0_str, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_str;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Unity.WebRTC.DelegateDebugLog::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateDebugLog_EndInvoke_m9004F6C4BCA465E60CBBE1BE874215981E2B45E7 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_Multicast(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_reportPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* currentDelegate = reinterpret_cast<DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_ptrCallback, ___2_reportPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_OpenInst(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_reportPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrCallback, ___2_reportPtr, method);
}
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_OpenStatic(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_reportPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrCallback, ___2_reportPtr, method);
}
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_OpenStaticInvoker(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_reportPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_ptrCallback, ___2_reportPtr);
}
void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_ClosedStaticInvoker(DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_reportPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_ptrCallback, ___2_reportPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_reportPtr, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_ptrCallback, ___2_reportPtr);

}
// System.Void Unity.WebRTC.DelegateCollectStats::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCollectStats__ctor_mDBC2DECA89282C655DE7B6D6E79D4BA29DE87177 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77_Multicast;
}
// System.Void Unity.WebRTC.DelegateCollectStats::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCollectStats_Invoke_mB35A287542166C3581541808AAADAB6819FBCF77 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_reportPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_ptrCallback, ___2_reportPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateCollectStats::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateCollectStats_BeginInvoke_m3498B489BA931A0ECDE4CACB5917FB61E40049EC (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, intptr_t ___0_ptr, intptr_t ___1_ptrCallback, intptr_t ___2_reportPtr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_ptrCallback);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_reportPtr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Unity.WebRTC.DelegateCollectStats::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCollectStats_EndInvoke_m8B16194C073E0EC3C52780F9CFA73BD96630750C (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_Multicast(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___0_ptr, int32_t ___1_type, String_t* ___2_sdp, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* currentDelegate = reinterpret_cast<DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_type, ___2_sdp, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_OpenInst(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___0_ptr, int32_t ___1_type, String_t* ___2_sdp, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_type, ___2_sdp, method);
}
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_OpenStatic(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___0_ptr, int32_t ___1_type, String_t* ___2_sdp, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_type, ___2_sdp, method);
}
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_OpenStaticInvoker(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___0_ptr, int32_t ___1_type, String_t* ___2_sdp, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_type, ___2_sdp);
}
void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_ClosedStaticInvoker(DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___0_ptr, int32_t ___1_type, String_t* ___2_sdp, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_type, ___2_sdp);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68 (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___0_ptr, int32_t ___1_type, String_t* ___2_sdp, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___2_sdp' to native representation
	char* ____2_sdp_marshaled = NULL;
	____2_sdp_marshaled = il2cpp_codegen_marshal_string(___2_sdp);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_type, ____2_sdp_marshaled);

	// Marshaling cleanup of parameter '___2_sdp' native representation
	il2cpp_codegen_marshal_free(____2_sdp_marshaled);
	____2_sdp_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateCreateGetStats::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateGetStats__ctor_m38151F7A7B6933121DCBCC2B556E321D01CF8296 (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511_Multicast;
}
// System.Void Unity.WebRTC.DelegateCreateGetStats::Invoke(System.IntPtr,Unity.WebRTC.RTCSdpType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateGetStats_Invoke_m5639824B62AD4039DEFFF400340BFF6E9C2F0511 (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___0_ptr, int32_t ___1_type, String_t* ___2_sdp, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_type, ___2_sdp, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateCreateGetStats::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCSdpType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateCreateGetStats_BeginInvoke_mF7D60D6DBEB4C5F40B3A6E084FD53842FEBF615A (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, intptr_t ___0_ptr, int32_t ___1_type, String_t* ___2_sdp, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var, &___1_type);
	__d_args[2] = ___2_sdp;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Unity.WebRTC.DelegateCreateGetStats::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCreateGetStats_EndInvoke_mC0DCE8C2AAF91AD4DCB657D79BF1C0BE7F2E7544 (DelegateCreateGetStats_tED38BDA67C130C20E3ADC111DDB9B3EBD8CD6D68* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_Multicast(DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* currentDelegate = reinterpret_cast<DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_sdp, ___4_errorType, ___5_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_OpenInst(DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrObserver, ___2_type, ___3_sdp, ___4_errorType, ___5_message, method);
}
void DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_OpenStatic(DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrObserver, ___2_type, ___3_sdp, ___4_errorType, ___5_message, method);
}
void DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_OpenStaticInvoker(DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method)
{
	InvokerActionInvoker6< intptr_t, intptr_t, int32_t, String_t*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_sdp, ___4_errorType, ___5_message);
}
void DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_ClosedStaticInvoker(DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_sdp, ___4_errorType, ___5_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, int32_t, char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___3_sdp' to native representation
	char* ____3_sdp_marshaled = NULL;
	____3_sdp_marshaled = il2cpp_codegen_marshal_string(___3_sdp);

	// Marshaling of parameter '___5_message' to native representation
	char* ____5_message_marshaled = NULL;
	____5_message_marshaled = il2cpp_codegen_marshal_string(___5_message);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_ptrObserver, ___2_type, ____3_sdp_marshaled, ___4_errorType, ____5_message_marshaled);

	// Marshaling cleanup of parameter '___3_sdp' native representation
	il2cpp_codegen_marshal_free(____3_sdp_marshaled);
	____3_sdp_marshaled = NULL;

	// Marshaling cleanup of parameter '___5_message' native representation
	il2cpp_codegen_marshal_free(____5_message_marshaled);
	____5_message_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateNativeCreateSessionDesc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeCreateSessionDesc__ctor_m13F24F4DE75A7E506F3A6FE41375AE084914F2A6 (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeCreateSessionDesc::Invoke(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeCreateSessionDesc_Invoke_m2691AF926F8E5A2CD404E929443668E2192B2A54 (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_sdp, ___4_errorType, ___5_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeCreateSessionDesc::BeginInvoke(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCSdpType,System.String,Unity.WebRTC.RTCErrorType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeCreateSessionDesc_BeginInvoke_mDFAB0E4E182FB5B470E4D3862EF7BCB6CA511148 (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_sdp, int32_t ___4_errorType, String_t* ___5_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_ptrObserver);
	__d_args[2] = Box(RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893_il2cpp_TypeInfo_var, &___2_type);
	__d_args[3] = ___3_sdp;
	__d_args[4] = Box(RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var, &___4_errorType);
	__d_args[5] = ___5_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
// System.Void Unity.WebRTC.DelegateNativeCreateSessionDesc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeCreateSessionDesc_EndInvoke_mEF22688BBA90747A9ED023304B7DEB2917AED018 (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_Multicast(DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* currentDelegate = reinterpret_cast<DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_OpenInst(DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrObserver, ___2_type, ___3_message, method);
}
void DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_OpenStatic(DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrObserver, ___2_type, ___3_message, method);
}
void DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_OpenStaticInvoker(DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_message);
}
void DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_ClosedStaticInvoker(DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79 (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___3_message' to native representation
	char* ____3_message_marshaled = NULL;
	____3_message_marshaled = il2cpp_codegen_marshal_string(___3_message);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_ptrObserver, ___2_type, ____3_message_marshaled);

	// Marshaling cleanup of parameter '___3_message' native representation
	il2cpp_codegen_marshal_free(____3_message_marshaled);
	____3_message_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateSetLocalDescription::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetLocalDescription__ctor_mCBB54C6F60897A1D4BC3FDC0138436DA3F9C5379 (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC_Multicast;
}
// System.Void Unity.WebRTC.DelegateSetLocalDescription::Invoke(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetLocalDescription_Invoke_m27521A31C55BE1CBF2D43943363B71E4E4FC9DAC (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateSetLocalDescription::BeginInvoke(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCErrorType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateSetLocalDescription_BeginInvoke_m532C5BB57A8DEE08DA3F5F01E7B69343C3524721 (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_ptrObserver);
	__d_args[2] = Box(RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var, &___2_type);
	__d_args[3] = ___3_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void Unity.WebRTC.DelegateSetLocalDescription::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetLocalDescription_EndInvoke_m0D44F97086737501E7719BD31B7AFB5A15D0C953 (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_Multicast(DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* currentDelegate = reinterpret_cast<DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_OpenInst(DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrObserver, ___2_type, ___3_message, method);
}
void DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_OpenStatic(DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrObserver, ___2_type, ___3_message, method);
}
void DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_OpenStaticInvoker(DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_message);
}
void DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_ClosedStaticInvoker(DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, intptr_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1 (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___3_message' to native representation
	char* ____3_message_marshaled = NULL;
	____3_message_marshaled = il2cpp_codegen_marshal_string(___3_message);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_ptrObserver, ___2_type, ____3_message_marshaled);

	// Marshaling cleanup of parameter '___3_message' native representation
	il2cpp_codegen_marshal_free(____3_message_marshaled);
	____3_message_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateSetRemoteDescription::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetRemoteDescription__ctor_m1724BF83CD9014EB26D16D61368C03DF3696D8A6 (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194_Multicast;
}
// System.Void Unity.WebRTC.DelegateSetRemoteDescription::Invoke(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetRemoteDescription_Invoke_mDBCFD0A95BFAF7F968FBD684C02C03D338E3D194 (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_ptrObserver, ___2_type, ___3_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateSetRemoteDescription::BeginInvoke(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCErrorType,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateSetRemoteDescription_BeginInvoke_m8C7525AF9EE07ADBAB175981B54ACABBD518007D (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, intptr_t ___0_ptr, intptr_t ___1_ptrObserver, int32_t ___2_type, String_t* ___3_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_ptrObserver);
	__d_args[2] = Box(RTCErrorType_tA63BC2B3B304F41D5993064D1A0250ED84E61F8E_il2cpp_TypeInfo_var, &___2_type);
	__d_args[3] = ___3_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void Unity.WebRTC.DelegateSetRemoteDescription::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateSetRemoteDescription_EndInvoke_m204E9BA677BF1BEB1D605A766F879F0B48BF078E (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_Multicast(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* currentDelegate = reinterpret_cast<DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_state, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_OpenInst(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_state, method);
}
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_OpenStatic(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_state, method);
}
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_OpenStaticInvoker(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_state);
}
void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_ClosedStaticInvoker(DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_state);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3 (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_state);

}
// System.Void Unity.WebRTC.DelegateNativeOnIceConnectionChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceConnectionChange__ctor_m4BCD380FB7CD510E9BC8DDBBE234BCACAD834CA9 (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnIceConnectionChange::Invoke(System.IntPtr,Unity.WebRTC.RTCIceConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceConnectionChange_Invoke_mE596CB302C97BE509F1A69B9C109279E46883520 (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnIceConnectionChange::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCIceConnectionState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnIceConnectionChange_BeginInvoke_m3093AE097CFFDBC5C50B8262418E7FD54D501D98 (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, intptr_t ___0_ptr, int32_t ___1_state, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceConnectionState_t739AA726AE89EB18629763D57281E0103006136D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(RTCIceConnectionState_t739AA726AE89EB18629763D57281E0103006136D_il2cpp_TypeInfo_var, &___1_state);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnIceConnectionChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceConnectionChange_EndInvoke_m1707EE30A372576228EBAFE64879342558F6582E (DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_Multicast(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* currentDelegate = reinterpret_cast<DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_state, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_OpenInst(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_state, method);
}
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_OpenStatic(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_state, method);
}
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_OpenStaticInvoker(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_state);
}
void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_ClosedStaticInvoker(DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_state);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899 (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_state);

}
// System.Void Unity.WebRTC.DelegateNativeOnConnectionStateChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnConnectionStateChange__ctor_m9FEB31A2F7F71CD627A1A64003953FD3BDE79506 (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnConnectionStateChange::Invoke(System.IntPtr,Unity.WebRTC.RTCPeerConnectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnConnectionStateChange_Invoke_m33BD7FAEE8BF79DA18FEDB2DF17E37518C1E6E0E (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnConnectionStateChange::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCPeerConnectionState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnConnectionStateChange_BeginInvoke_m370631963F1D92CE4D65D5F4E0BF0FCE686263E2 (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, intptr_t ___0_ptr, int32_t ___1_state, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(RTCPeerConnectionState_tD7B4F28FA237069661C9E3B0C7CBC096D87E7045_il2cpp_TypeInfo_var, &___1_state);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnConnectionStateChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnConnectionStateChange_EndInvoke_m1EA677778BEB100A404B98862454B0996DAC4627 (DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_Multicast(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* currentDelegate = reinterpret_cast<DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_state, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_OpenInst(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_state, method);
}
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_OpenStatic(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_state, method);
}
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_OpenStaticInvoker(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_state);
}
void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_ClosedStaticInvoker(DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_state);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699 (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_state);

}
// System.Void Unity.WebRTC.DelegateNativeOnIceGatheringChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceGatheringChange__ctor_m4C7C7171F6553D9FC1DA61BCCD93E2270AD2ACB5 (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnIceGatheringChange::Invoke(System.IntPtr,Unity.WebRTC.RTCIceGatheringState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceGatheringChange_Invoke_m4E9D26843069CC883A4BB268028F3882D0B0F75E (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___0_ptr, int32_t ___1_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnIceGatheringChange::BeginInvoke(System.IntPtr,Unity.WebRTC.RTCIceGatheringState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnIceGatheringChange_BeginInvoke_m1208A52A49905F471626858E553DE65D174C4B24 (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, intptr_t ___0_ptr, int32_t ___1_state, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(RTCIceGatheringState_tF89E9CB08B1E3016730EA6336FB556DB230B8B6B_il2cpp_TypeInfo_var, &___1_state);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnIceGatheringChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceGatheringChange_EndInvoke_m4FC65047BC634A94CC5C4218B14E982EA82C61B7 (DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_Multicast(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___0_ptr, String_t* ___1_candidate, String_t* ___2_sdpMid, int32_t ___3_sdpMlineIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* currentDelegate = reinterpret_cast<DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_candidate, ___2_sdpMid, ___3_sdpMlineIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_OpenInst(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___0_ptr, String_t* ___1_candidate, String_t* ___2_sdpMid, int32_t ___3_sdpMlineIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_candidate, ___2_sdpMid, ___3_sdpMlineIndex, method);
}
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_OpenStatic(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___0_ptr, String_t* ___1_candidate, String_t* ___2_sdpMid, int32_t ___3_sdpMlineIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_candidate, ___2_sdpMid, ___3_sdpMlineIndex, method);
}
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_OpenStaticInvoker(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___0_ptr, String_t* ___1_candidate, String_t* ___2_sdpMid, int32_t ___3_sdpMlineIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker4< intptr_t, String_t*, String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_candidate, ___2_sdpMid, ___3_sdpMlineIndex);
}
void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_ClosedStaticInvoker(DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___0_ptr, String_t* ___1_candidate, String_t* ___2_sdpMid, int32_t ___3_sdpMlineIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, intptr_t, String_t*, String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_candidate, ___2_sdpMid, ___3_sdpMlineIndex);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740 (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___0_ptr, String_t* ___1_candidate, String_t* ___2_sdpMid, int32_t ___3_sdpMlineIndex, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, char*, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_candidate' to native representation
	char* ____1_candidate_marshaled = NULL;
	____1_candidate_marshaled = il2cpp_codegen_marshal_string(___1_candidate);

	// Marshaling of parameter '___2_sdpMid' to native representation
	char* ____2_sdpMid_marshaled = NULL;
	____2_sdpMid_marshaled = il2cpp_codegen_marshal_string(___2_sdpMid);

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ____1_candidate_marshaled, ____2_sdpMid_marshaled, ___3_sdpMlineIndex);

	// Marshaling cleanup of parameter '___1_candidate' native representation
	il2cpp_codegen_marshal_free(____1_candidate_marshaled);
	____1_candidate_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_sdpMid' native representation
	il2cpp_codegen_marshal_free(____2_sdpMid_marshaled);
	____2_sdpMid_marshaled = NULL;

}
// System.Void Unity.WebRTC.DelegateNativeOnIceCandidate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceCandidate__ctor_m269222E55BD7C4FDD020E986E2912B0420AC6B1D (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnIceCandidate::Invoke(System.IntPtr,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceCandidate_Invoke_m155897A7DBD9198D1FC9FA75A34D79DE57B93AEB (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___0_ptr, String_t* ___1_candidate, String_t* ___2_sdpMid, int32_t ___3_sdpMlineIndex, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_candidate, ___2_sdpMid, ___3_sdpMlineIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnIceCandidate::BeginInvoke(System.IntPtr,System.String,System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnIceCandidate_BeginInvoke_m684B25CE9D00D4FDFEE02FBB62F72AEEAD1E0FD2 (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, intptr_t ___0_ptr, String_t* ___1_candidate, String_t* ___2_sdpMid, int32_t ___3_sdpMlineIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = ___1_candidate;
	__d_args[2] = ___2_sdpMid;
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___3_sdpMlineIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnIceCandidate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnIceCandidate_EndInvoke_mF81E0F16326ACF4A752533DE747C489CCC84C5C6 (DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_Multicast(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* currentDelegate = reinterpret_cast<DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_OpenInst(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_OpenStatic(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_OpenStaticInvoker(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr);
}
void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_ClosedStaticInvoker(DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr);

}
// System.Void Unity.WebRTC.DelegateNativeOnNegotiationNeeded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnNegotiationNeeded__ctor_m41621F2D43ED3C0C7659CF88CF81714B31DC7EBA (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnNegotiationNeeded::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnNegotiationNeeded_Invoke_m91409C15E7345788192DBE924EDC10E5D3A7B759 (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnNegotiationNeeded::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnNegotiationNeeded_BeginInvoke_m4B4857974956C23CD99D10749602A0F2858F5CE0 (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, intptr_t ___0_ptr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnNegotiationNeeded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnNegotiationNeeded_EndInvoke_m11BF492D3E66C8CAB4E4A975989A6F7F7EB7D649 (DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_Multicast(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___0_ptr, intptr_t ___1_transceiver, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* currentDelegate = reinterpret_cast<DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_transceiver, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenInst(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___0_ptr, intptr_t ___1_transceiver, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_transceiver, method);
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStatic(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___0_ptr, intptr_t ___1_transceiver, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_transceiver, method);
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStaticInvoker(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___0_ptr, intptr_t ___1_transceiver, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_transceiver);
}
void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_ClosedStaticInvoker(DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___0_ptr, intptr_t ___1_transceiver, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_transceiver);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___0_ptr, intptr_t ___1_transceiver, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_transceiver);

}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack__ctor_m47056A97B0871B742ACD347F208DC32B36E126CA (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack_Invoke_mD4FB47C35F97BA078DA6911EFB1492C13E668216 (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___0_ptr, intptr_t ___1_transceiver, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_transceiver, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnTrack_BeginInvoke_m03FFFA749E53FE4B0AC7C2ABDD04D7710EB7E70E (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, intptr_t ___0_ptr, intptr_t ___1_transceiver, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_transceiver);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnTrack_EndInvoke_m3DBD36F1B6129EA3A909B67BA1A5376411C02917 (DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_Multicast(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___0_ptr, intptr_t ___1_receiver, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* currentDelegate = reinterpret_cast<DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_receiver, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenInst(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___0_ptr, intptr_t ___1_receiver, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_receiver, method);
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStatic(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___0_ptr, intptr_t ___1_receiver, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_receiver, method);
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStaticInvoker(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___0_ptr, intptr_t ___1_receiver, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_receiver);
}
void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_ClosedStaticInvoker(DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___0_ptr, intptr_t ___1_receiver, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_receiver);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___0_ptr, intptr_t ___1_receiver, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_receiver);

}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack__ctor_mB9FB6CB542C1021447637E9E67746D887A409BD4 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack_Invoke_m953196F47D4ACE8E9B3E5FEAE836EAEEC9ECA6F5 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___0_ptr, intptr_t ___1_receiver, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_receiver, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnRemoveTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnRemoveTrack_BeginInvoke_m86C23C0AF07E5D014D0560848892B6029EE2CBBE (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, intptr_t ___0_ptr, intptr_t ___1_receiver, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_receiver);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnRemoveTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnRemoveTrack_EndInvoke_m3ECC8E1A88E0920B7601029D7BC76B2E52122E37 (DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_Multicast(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___0_ptr, intptr_t ___1_ptrChannel, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* currentDelegate = reinterpret_cast<DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_ptrChannel, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenInst(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___0_ptr, intptr_t ___1_ptrChannel, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrChannel, method);
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStatic(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___0_ptr, intptr_t ___1_ptrChannel, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_ptrChannel, method);
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStaticInvoker(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___0_ptr, intptr_t ___1_ptrChannel, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_ptrChannel);
}
void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_ClosedStaticInvoker(DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___0_ptr, intptr_t ___1_ptrChannel, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_ptrChannel);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___0_ptr, intptr_t ___1_ptrChannel, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ___1_ptrChannel);

}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel__ctor_mD85099C816FD19FB8DA33753EABF229DBCA51810 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel_Invoke_m2ACC3980E7220CF23CDD96D0D5B69B39B3BE15CF (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___0_ptr, intptr_t ___1_ptrChannel, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_ptrChannel, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnDataChannel::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnDataChannel_BeginInvoke_m5B4DC70AF82BB0D344DCBF7DEFEAA091CFBE6A44 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, intptr_t ___0_ptr, intptr_t ___1_ptrChannel, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_ptrChannel);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnDataChannel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnDataChannel_EndInvoke_m9181E12C8F9CB50F830187DBC3F9B291986B51F1 (DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_Multicast(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* currentDelegate = reinterpret_cast<DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, ___1_bytes, ___2_size, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenInst(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_bytes, ___2_size, method);
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStatic(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, ___1_bytes, ___2_size, method);
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStaticInvoker(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr, ___1_bytes, ___2_size);
}
void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_ClosedStaticInvoker(DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr, ___1_bytes, ___2_size);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7 (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, uint8_t*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___0_ptr, ____1_bytes_marshaled, ___2_size);

}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage__ctor_mDC0BA1638683D1CA50A9FAD1C9916A19D5F0A7AC (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::Invoke(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage_Invoke_mADA73F1C4A05E8E3796F78DA300664A4BBF8D0CC (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, ___1_bytes, ___2_size, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnMessage::BeginInvoke(System.IntPtr,System.Byte[],System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnMessage_BeginInvoke_mE6487A51993B6513FDE655B3930FF8C3BF85F153 (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	__d_args[1] = ___1_bytes;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_size);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnMessage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnMessage_EndInvoke_mBD5677736D5EA005695111DD753E2FF44D3C383D (DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_Multicast(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* currentDelegate = reinterpret_cast<DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenInst(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStatic(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStaticInvoker(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr);
}
void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_ClosedStaticInvoker(DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr);

}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen__ctor_m7FDEC8A2FE403BE1133D2D773EE76EAD28C57A4C (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen_Invoke_m3255EC82FBD28D2738E8A91F94CB9FFE1AA2A0F9 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnOpen::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnOpen_BeginInvoke_mF41873E277FE3E588DB41597233E6CEA5F6F20A2 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, intptr_t ___0_ptr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnOpen::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnOpen_EndInvoke_m197CE104CFAF0D1692FAC0F461C578BEC03F4422 (DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_Multicast(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* currentDelegate = reinterpret_cast<DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenInst(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStatic(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStaticInvoker(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr);
}
void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_ClosedStaticInvoker(DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr);

}
// System.Void Unity.WebRTC.DelegateNativeOnClose::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose__ctor_mE1825C6D5DE868080605690C54D134109DD1444A (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeOnClose::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose_Invoke_mCDEF23B0167F3FA885C444B5864BE4E834B305E2 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeOnClose::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeOnClose_BeginInvoke_mA2CB1C2949154940B0F12721494E65C4F67DA865 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, intptr_t ___0_ptr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Unity.WebRTC.DelegateNativeOnClose::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeOnClose_EndInvoke_m479500EAB9405B5ACC05B13151B10350EF17DB99 (DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_Multicast(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* currentDelegate = reinterpret_cast<DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_stream, ___1_track, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenInst(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_stream, ___1_track, method);
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStatic(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_stream, ___1_track, method);
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStaticInvoker(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_stream, ___1_track);
}
void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_ClosedStaticInvoker(DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_stream, ___1_track);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_stream, ___1_track);

}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack__ctor_m00F884CE57B600F498C40417477A328CFE9EF823 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack_Invoke_m4CFFF0105790CDDEAF0724F19D5FE90391198569 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_stream, ___1_track, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeMediaStreamOnAddTrack_BeginInvoke_mFFF7F04A85D0DB24AAB60347C103C1CEF6094CFA (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, intptr_t ___0_stream, intptr_t ___1_track, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_stream);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_track);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnAddTrack_EndInvoke_m9BE48AC29DA2456202C740C38BBE3CFD633180C3 (DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_Multicast(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* currentDelegate = reinterpret_cast<DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_stream, ___1_track, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenInst(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_stream, ___1_track, method);
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStatic(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_stream, ___1_track, method);
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStaticInvoker(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_stream, ___1_track);
}
void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_ClosedStaticInvoker(DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_stream, ___1_track);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61 (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_stream, ___1_track);

}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack__ctor_mF8A24BB890D3035452460B7C7A9DEFF090708E80 (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB_Multicast;
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack_Invoke_mF05EEC216E42483A700BE0195C04042BB72034BB (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_stream, ___1_track, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateNativeMediaStreamOnRemoveTrack_BeginInvoke_m99D80682B8C44FA29B087FD5D7C68A6692F17AAA (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, intptr_t ___0_stream, intptr_t ___1_track, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_stream);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_track);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateNativeMediaStreamOnRemoveTrack_EndInvoke_m660A6B6D063DF8F15E96A09DD59A59B3ADBA6F6A (DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_Multicast(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* currentDelegate = reinterpret_cast<DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenInst(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStatic(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ptr, method);
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStaticInvoker(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker1< intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ptr);
}
void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_ClosedStaticInvoker(DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ptr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___0_ptr, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ptr);

}
// System.Void Unity.WebRTC.DelegateAudioReceive::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive__ctor_m64A6738AB0AB1FB2588DC669D88055FA40E39D57 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7_Multicast;
}
// System.Void Unity.WebRTC.DelegateAudioReceive::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive_Invoke_mEA659F628138BEF28408404B7A72E3F6DB2320F7 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ptr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateAudioReceive::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateAudioReceive_BeginInvoke_mE61859B36B68B0D0D7013F79F483A51BCB004797 (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, intptr_t ___0_ptr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_ptr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Unity.WebRTC.DelegateAudioReceive::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateAudioReceive_EndInvoke_mEF1DAA7DB38057E46D0EC0944458E35422223C7D (DelegateAudioReceive_t615E5BE7540624D1D4CB17A9F353E786947A24C6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_Multicast(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___0_renderer, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* currentDelegate = reinterpret_cast<DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_renderer, ___1_width, ___2_height, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenInst(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___0_renderer, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_renderer, ___1_width, ___2_height, method);
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStatic(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___0_renderer, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_renderer, ___1_width, ___2_height, method);
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStaticInvoker(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___0_renderer, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_renderer, ___1_width, ___2_height);
}
void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_ClosedStaticInvoker(DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___0_renderer, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_renderer, ___1_width, ___2_height);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___0_renderer, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_renderer, ___1_width, ___2_height);

}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize__ctor_m181F101B051F0F0A2EB76857BC48127BC2ED7727 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032_Multicast;
}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize_Invoke_m0D60640F3D2ADE6984C9D084D57F3E3088734032 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___0_renderer, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_renderer, ___1_width, ___2_height, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.WebRTC.DelegateVideoFrameResize::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelegateVideoFrameResize_BeginInvoke_m5AD454D0DFC4E713BF32E49A944D82CD6B39CAA0 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, intptr_t ___0_renderer, int32_t ___1_width, int32_t ___2_height, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_renderer);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_width);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_height);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Unity.WebRTC.DelegateVideoFrameResize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateVideoFrameResize_EndInvoke_m54B644ED4C97A7C02EEA2D8F98F5154437F34013 (DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.WebRTC.NativeMethods::RegisterDebugLog(Unity.WebRTC.DelegateDebugLog,System.Boolean,Unity.WebRTC.NativeLoggingSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_RegisterDebugLog_m7DC610118783E426B611E1502F1A591E3D9A83F5 (DelegateDebugLog_t937D5ACEC8C364CA21DD028007B516DC64FD80B7* ___0_func, bool ___1_enableNativeLog, int32_t ___2_nativeLoggingSeverity, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, uint8_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 1 + 3 + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "RegisterDebugLog", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_func' to native representation
	Il2CppMethodPointer ____0_func_marshaled = NULL;
	____0_func_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_func));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(RegisterDebugLog)(____0_func_marshaled, static_cast<uint8_t>(___1_enableNativeLog), ___2_nativeLoggingSeverity);
	#else
	il2cppPInvokeFunc(____0_func_marshaled, static_cast<uint8_t>(___1_enableNativeLog), ___2_nativeLoggingSeverity);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreate_m1A953B60429F23083C9C0145128D346C309E3661 (int32_t ___0_uid, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreate)(___0_uid);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_uid);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDestroy_m2370DA055BBABB00823E5B9C8126C775A11BF87A (int32_t ___0_uid, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDestroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDestroy)(___0_uid);
	#else
	il2cppPInvokeFunc(___0_uid);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreatePeerConnection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreatePeerConnection_m97CE9950A3AC2205769F05CAAE7796BE518B1C77 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreatePeerConnection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreatePeerConnection)(___0_ptr);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreatePeerConnectionWithConfig(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreatePeerConnectionWithConfig_m685F67255E7779F8BD4CAEEDB69328C272DC3F9B (intptr_t ___0_ptr, String_t* ___1_conf, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreatePeerConnectionWithConfig", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_conf' to native representation
	char* ____1_conf_marshaled = NULL;
	____1_conf_marshaled = il2cpp_codegen_marshal_string(___1_conf);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreatePeerConnectionWithConfig)(___0_ptr, ____1_conf_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_conf_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_conf' native representation
	il2cpp_codegen_marshal_free(____1_conf_marshaled);
	____1_conf_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeletePeerConnection(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeletePeerConnection_m4F794822330F184A92F08C6836446A878A95E948 (intptr_t ___0_ptr, intptr_t ___1_ptrPeerConnection, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeletePeerConnection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeletePeerConnection)(___0_ptr, ___1_ptrPeerConnection);
	#else
	il2cppPInvokeFunc(___0_ptr, ___1_ptrPeerConnection);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionClose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionClose_m89D4590E184EFB47898429DE354A8BF7E2BC4C52 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionClose)(___0_ptr);
	#else
	il2cppPInvokeFunc(___0_ptr);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRestartIce(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRestartIce_mDFC1862227D7C275F7A33E3D3E48812F4BFCF0C1 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRestartIce", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRestartIce)(___0_ptr);
	#else
	il2cppPInvokeFunc(___0_ptr);
	#endif

}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionSetConfiguration(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSetConfiguration_m0EAFFE4BF5E0840CE2E9B52BB3857611C4226FC3 (intptr_t ___0_ptr, String_t* ___1_conf, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetConfiguration", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_conf' to native representation
	char* ____1_conf_marshaled = NULL;
	____1_conf_marshaled = il2cpp_codegen_marshal_string(___1_conf);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetConfiguration)(___0_ptr, ____1_conf_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_conf_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_conf' native representation
	il2cpp_codegen_marshal_free(____1_conf_marshaled);
	____1_conf_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateDataChannel(System.IntPtr,System.IntPtr,System.String,Unity.WebRTC.RTCDataChannelInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateDataChannel_m32FD92567F1EB9B766CFE21954EA3E8250F9D2E5 (intptr_t ___0_ptr, intptr_t ___1_ptrPeer, String_t* ___2_label, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF* ___3_options, const RuntimeMethod* method) 
{


	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, char*, RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*) + sizeof(RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_label' to native representation
	char* ____2_label_marshaled = NULL;
	____2_label_marshaled = il2cpp_codegen_marshal_string(___2_label);

	// Marshaling of parameter '___3_options' to native representation
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke* ____3_options_marshaled = NULL;
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshaled_pinvoke ____3_options_marshaled_dereferenced = {};
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke(*___3_options, ____3_options_marshaled_dereferenced);
	____3_options_marshaled = &____3_options_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateDataChannel)(___0_ptr, ___1_ptrPeer, ____2_label_marshaled, ____3_options_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr, ___1_ptrPeer, ____2_label_marshaled, ____3_options_marshaled);
	#endif

	// Marshaling cleanup of parameter '___2_label' native representation
	il2cpp_codegen_marshal_free(____2_label_marshaled);
	____2_label_marshaled = NULL;

	// Marshaling of parameter '___3_options' back from native representation
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF _____3_options_marshaled_unmarshaled_dereferenced;
	memset((&_____3_options_marshaled_unmarshaled_dereferenced), 0, sizeof(_____3_options_marshaled_unmarshaled_dereferenced));
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_back(*____3_options_marshaled, _____3_options_marshaled_unmarshaled_dereferenced);
	RTCDataChannelInitInternal_tE38BD90FDB9C06E7E3D4145006B7DA011B163FCF_marshal_pinvoke_cleanup(*____3_options_marshaled);
	*___3_options = _____3_options_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___3_options)->___protocol_3), (void*)NULL);

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteDataChannel(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteDataChannel_m1687E835182098C7D9F0DF4BF31C054F88F1C63F (intptr_t ___0_ptr, intptr_t ___1_ptrChannel, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteDataChannel)(___0_ptr, ___1_ptrChannel);
	#else
	il2cppPInvokeFunc(___0_ptr, ___1_ptrChannel);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrackSource(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrackSource_mB56BE65FC2E24C3EB817ABBF088F517982D5B9F0 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrackSource", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrackSource)(___0_ptr);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateVideoTrackSource(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateVideoTrackSource_mFEA91ED814223D48A39B95B695D75D9C42DE23E8 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateVideoTrackSource", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateVideoTrackSource)(___0_ptr);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateVideoTrack(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateVideoTrack_m2D52DCB8AEC172DCC47CE67E0A4C923331AC4745 (intptr_t ___0_ptr, String_t* ___1_label, intptr_t ___2_trackSource, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateVideoTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_label' to native representation
	char* ____1_label_marshaled = NULL;
	____1_label_marshaled = il2cpp_codegen_marshal_string(___1_label);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateVideoTrack)(___0_ptr, ____1_label_marshaled, ___2_trackSource);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_label_marshaled, ___2_trackSource);
	#endif

	// Marshaling cleanup of parameter '___1_label' native representation
	il2cpp_codegen_marshal_free(____1_label_marshaled);
	____1_label_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrack(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrack_m58DEA7EED6829B4C5DCD4F0EE45958B85124950F (intptr_t ___0_ptr, String_t* ___1_label, intptr_t ___2_trackSource, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_label' to native representation
	char* ____1_label_marshaled = NULL;
	____1_label_marshaled = il2cpp_codegen_marshal_string(___1_label);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrack)(___0_ptr, ____1_label_marshaled, ___2_trackSource);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_label_marshaled, ___2_trackSource);
	#endif

	// Marshaling cleanup of parameter '___1_label' native representation
	il2cpp_codegen_marshal_free(____1_label_marshaled);
	____1_label_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextStopMediaStreamTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextStopMediaStreamTrack_m7225BF0DD7044BE706DB4CB20F48C5AF0328C43B (intptr_t ___0_context, intptr_t ___1_track, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextStopMediaStreamTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextStopMediaStreamTrack)(___0_context, ___1_track);
	#else
	il2cppPInvokeFunc(___0_context, ___1_track);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextGetStatsList(System.IntPtr,System.IntPtr,System.UInt64&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextGetStatsList_mADE4293F783F88BB86159A8C3FCEA7A373CC2798 (intptr_t ___0_context, intptr_t ___1_report, uint64_t* ___2_length, intptr_t* ___3_types, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetStatsList", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextGetStatsList)(___0_context, ___1_report, ___2_length, ___3_types);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context, ___1_report, ___2_length, ___3_types);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteStatsReport(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteStatsReport_m38A3D3F5F19B36F94C9BE791BBA7DA6E5AA9C803 (intptr_t ___0_context, intptr_t ___1_report, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteStatsReport", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteStatsReport)(___0_context, ___1_report);
	#else
	il2cppPInvokeFunc(___0_context, ___1_report);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextAddRefPtr(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextAddRefPtr_m9EA68383DFECA768F66B74CFA1B3758A0383006B (intptr_t ___0_context, intptr_t ___1_ptr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextAddRefPtr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextAddRefPtr)(___0_context, ___1_ptr);
	#else
	il2cppPInvokeFunc(___0_context, ___1_ptr);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteRefPtr(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteRefPtr_m2B4315BDDFD525F59A11FBF841CF432EEDCB253D (intptr_t ___0_context, intptr_t ___1_ptr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteRefPtr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteRefPtr)(___0_context, ___1_ptr);
	#else
	il2cppPInvokeFunc(___0_context, ___1_ptr);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetConfiguration(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetConfiguration_m74878C2DC0EDFAC5A60C26FD2FBA433FD0D6CA76 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetConfiguration", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetConfiguration)(___0_ptr);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// Unity.WebRTC.CreateSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionCreateOffer(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCOfferAnswerOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* NativeMethods_PeerConnectionCreateOffer_m51D188900F274DCA3821777895C41E5042D36E4D (intptr_t ___0_context, intptr_t ___1_ptr, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionCreateOffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionCreateOffer)(___0_context, ___1_ptr, ___2_options);
	#else
	void* returnValue = il2cppPInvokeFunc(___0_context, ___1_ptr, ___2_options);
	#endif

	// Marshaling of return value back from native representation
	CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* _returnValue_unmarshaled = (CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38*)il2cpp_codegen_object_new(CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var);
	CreateSessionDescriptionObserver__ctor_m2D56A3A957F1C8445D20B0EA9F999F526DF78C3E(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.CreateSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionCreateAnswer(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCOfferAnswerOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* NativeMethods_PeerConnectionCreateAnswer_m7E5B9007D25CA1558D8F465B30A6A9FFD2C45748 (intptr_t ___0_context, intptr_t ___1_ptr, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(RTCOfferAnswerOptions_t3B5F343B6C091817B7167808D75112A134E4791F*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionCreateAnswer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionCreateAnswer)(___0_context, ___1_ptr, ___2_options);
	#else
	void* returnValue = il2cppPInvokeFunc(___0_context, ___1_ptr, ___2_options);
	#endif

	// Marshaling of return value back from native representation
	CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38* _returnValue_unmarshaled = (CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38*)il2cpp_codegen_object_new(CreateSessionDescriptionObserver_tAD6FB11DF62C894316AD7105428BC22C76807C38_il2cpp_TypeInfo_var);
	CreateSessionDescriptionObserver__ctor_m2D56A3A957F1C8445D20B0EA9F999F526DF78C3E(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Void Unity.WebRTC.NativeMethods::StatsCollectorRegisterCallback(Unity.WebRTC.DelegateCollectStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_StatsCollectorRegisterCallback_mBA80B37C60A9C983C9D9A9DD022252D4883CB084 (DelegateCollectStats_tE7F0DD748DEEC61A5AEA12C58C21F474B5AF8390* ___0_onCollectStats, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsCollectorRegisterCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_onCollectStats' to native representation
	Il2CppMethodPointer ____0_onCollectStats_marshaled = NULL;
	____0_onCollectStats_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_onCollectStats));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(StatsCollectorRegisterCallback)(____0_onCollectStats_marshaled);
	#else
	il2cppPInvokeFunc(____0_onCollectStats_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::CreateSessionDescriptionObserverRegisterCallback(Unity.WebRTC.DelegateNativeCreateSessionDesc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_CreateSessionDescriptionObserverRegisterCallback_mB92BC2E18C603C9B6054B068B57D2265537BC1E1 (DelegateNativeCreateSessionDesc_t2477AA107089ABF96AF40017154392001A2945EC* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "CreateSessionDescriptionObserverRegisterCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(CreateSessionDescriptionObserverRegisterCallback)(____0_callback_marshaled);
	#else
	il2cppPInvokeFunc(____0_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::SetLocalDescriptionObserverRegisterCallback(Unity.WebRTC.DelegateSetLocalDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetLocalDescriptionObserverRegisterCallback_m5AA1122F90FD11E1C945B812C1987ADDC42054B2 (DelegateSetLocalDescription_tE95D2A05F7B742A796FB5A3ACD5BC69E72B0AB79* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SetLocalDescriptionObserverRegisterCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetLocalDescriptionObserverRegisterCallback)(____0_callback_marshaled);
	#else
	il2cppPInvokeFunc(____0_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::SetRemoteDescriptionObserverRegisterCallback(Unity.WebRTC.DelegateSetRemoteDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetRemoteDescriptionObserverRegisterCallback_m58D71BE187F45AB466F8DE17DB37A37C9627E7E4 (DelegateSetRemoteDescription_t974E7D3557F64693E25CC7ACCA96AA75A9AC20D1* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SetRemoteDescriptionObserverRegisterCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetRemoteDescriptionObserverRegisterCallback)(____0_callback_marshaled);
	#else
	il2cppPInvokeFunc(____0_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterIceConnectionChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceConnectionChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterIceConnectionChange_m61F363B2D9229924F22E487B74113AEDBB350908 (intptr_t ___0_ptr, DelegateNativeOnIceConnectionChange_t37F836D9DD2E6E154260A2585A69AA9E126645B3* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterIceConnectionChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterIceConnectionChange)(___0_ptr, ____1_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterConnectionStateChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnConnectionStateChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterConnectionStateChange_m95C3E07B58E615597055AB6C26F5C33CAFBCE0BA (intptr_t ___0_ptr, DelegateNativeOnConnectionStateChange_t8686B6DD3CA1741108BCDA6FE5A789B7D895B899* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterConnectionStateChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterConnectionStateChange)(___0_ptr, ____1_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterIceGatheringChange(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceGatheringChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterIceGatheringChange_mEC86B46A402DD3B6B03E5937E9F378F903BDAD4F (intptr_t ___0_ptr, DelegateNativeOnIceGatheringChange_t8707573990D71C7C2765A69CCB14C74C14B5C699* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterIceGatheringChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterIceGatheringChange)(___0_ptr, ____1_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnIceCandidate(System.IntPtr,Unity.WebRTC.DelegateNativeOnIceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnIceCandidate_mE92C3E72033FA4B2CA16A427D6660843CF330471 (intptr_t ___0_ptr, DelegateNativeOnIceCandidate_tD18816944F1428BFEEDF5838089F7844B8931740* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnIceCandidate)(___0_ptr, ____1_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_callback_marshaled);
	#endif

}
// Unity.WebRTC.SetSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionSetLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&,Unity.WebRTC.RTCErrorType&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* NativeMethods_PeerConnectionSetLocalDescription_m283E54A78B4873A6A5172C4B39C0D336A168BE47 (intptr_t ___0_ptr, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___1_desc, int32_t* ___2_errorType, intptr_t* ___3_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}


	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, int32_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*) + sizeof(int32_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_desc' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____1_desc_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____1_desc_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___1_desc, ____1_desc_marshaled_dereferenced);
	____1_desc_marshaled = &____1_desc_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetLocalDescription)(___0_ptr, ____1_desc_marshaled, ___2_errorType, ___3_error);
	#else
	void* returnValue = il2cppPInvokeFunc(___0_ptr, ____1_desc_marshaled, ___2_errorType, ___3_error);
	#endif

	// Marshaling of return value back from native representation
	SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* _returnValue_unmarshaled = (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22*)il2cpp_codegen_object_new(SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
	SetSessionDescriptionObserver__ctor_mF66B1C7AAB7588F311BED5096560516E1CE2FFB9(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	// Marshaling of parameter '___1_desc' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____1_desc_marshaled_unmarshaled_dereferenced;
	memset((&_____1_desc_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_desc_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____1_desc_marshaled, _____1_desc_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____1_desc_marshaled);
	*___1_desc = _____1_desc_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_desc)->___sdp_1), (void*)NULL);

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.SetSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionSetLocalDescriptionWithoutDescription(System.IntPtr,Unity.WebRTC.RTCErrorType&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* NativeMethods_PeerConnectionSetLocalDescriptionWithoutDescription_mF1455B73869A6806C12A55D0C4E31EFB15A157B3 (intptr_t ___0_ptr, int32_t* ___1_errorType, intptr_t* ___2_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetLocalDescriptionWithoutDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetLocalDescriptionWithoutDescription)(___0_ptr, ___1_errorType, ___2_error);
	#else
	void* returnValue = il2cppPInvokeFunc(___0_ptr, ___1_errorType, ___2_error);
	#endif

	// Marshaling of return value back from native representation
	SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* _returnValue_unmarshaled = (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22*)il2cpp_codegen_object_new(SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
	SetSessionDescriptionObserver__ctor_mF66B1C7AAB7588F311BED5096560516E1CE2FFB9(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.SetSessionDescriptionObserver Unity.WebRTC.NativeMethods::PeerConnectionSetRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&,Unity.WebRTC.RTCErrorType&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* NativeMethods_PeerConnectionSetRemoteDescription_mC9DEA901A82096650C9AB9C4B040C59F06AC135C (intptr_t ___0_ptr, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___1_desc, int32_t* ___2_errorType, intptr_t* ___3_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}


	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*, int32_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*) + sizeof(int32_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSetRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_desc' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____1_desc_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____1_desc_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___1_desc, ____1_desc_marshaled_dereferenced);
	____1_desc_marshaled = &____1_desc_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSetRemoteDescription)(___0_ptr, ____1_desc_marshaled, ___2_errorType, ___3_error);
	#else
	void* returnValue = il2cppPInvokeFunc(___0_ptr, ____1_desc_marshaled, ___2_errorType, ___3_error);
	#endif

	// Marshaling of return value back from native representation
	SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22* _returnValue_unmarshaled = (SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22*)il2cpp_codegen_object_new(SetSessionDescriptionObserver_tA3E0319C5675340DFEF5469DBF9BC1CBE8864E22_il2cpp_TypeInfo_var);
	SetSessionDescriptionObserver__ctor_mF66B1C7AAB7588F311BED5096560516E1CE2FFB9(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	// Marshaling of parameter '___1_desc' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____1_desc_marshaled_unmarshaled_dereferenced;
	memset((&_____1_desc_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_desc_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____1_desc_marshaled, _____1_desc_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____1_desc_marshaled);
	*___1_desc = _____1_desc_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_desc)->___sdp_1), (void*)NULL);

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionGetStats(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionGetStats_m955364BE38072F630F7EF49DB3029A6EDEC2550B (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetStats)(___0_ptr);
	#else
	void* returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionSenderGetStats(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionSenderGetStats_m69A9C4785E08A5053D581FD0679AD46D20B786A5 (intptr_t ___0_ptr, intptr_t ___1_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSenderGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSenderGetStats)(___0_ptr, ___1_sender);
	#else
	void* returnValue = il2cppPInvokeFunc(___0_ptr, ___1_sender);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Void Unity.WebRTC.NativeMethods::ContextGetSenderCapabilities(System.IntPtr,Unity.WebRTC.TrackKind,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextGetSenderCapabilities_m887B6A8295D2F3DD9FFEA19AF0C9F346040F7CC3 (intptr_t ___0_context, int32_t ___1_kind, intptr_t* ___2_capabilities, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetSenderCapabilities", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextGetSenderCapabilities)(___0_context, ___1_kind, ___2_capabilities);
	#else
	il2cppPInvokeFunc(___0_context, ___1_kind, ___2_capabilities);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextGetReceiverCapabilities(System.IntPtr,Unity.WebRTC.TrackKind,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextGetReceiverCapabilities_m36D03A0D0543C010D49C89E07718AEA5536DB09F (intptr_t ___0_context, int32_t ___1_kind, intptr_t* ___2_capabilities, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextGetReceiverCapabilities", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextGetReceiverCapabilities)(___0_context, ___1_kind, ___2_capabilities);
	#else
	il2cppPInvokeFunc(___0_context, ___1_kind, ___2_capabilities);
	#endif

}
// Unity.WebRTC.RTCStatsCollectorCallback Unity.WebRTC.NativeMethods::PeerConnectionReceiverGetStats(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* NativeMethods_PeerConnectionReceiverGetStats_mCEFCDC0554EA501F2D40E8697637025F1DB77D17 (intptr_t ___0_sender, intptr_t ___1_receiver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionReceiverGetStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	void* returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionReceiverGetStats)(___0_sender, ___1_receiver);
	#else
	void* returnValue = il2cppPInvokeFunc(___0_sender, ___1_receiver);
	#endif

	// Marshaling of return value back from native representation
	RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF* _returnValue_unmarshaled = (RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF*)il2cpp_codegen_object_new(RTCStatsCollectorCallback_t6938FE1720677A24A266BA876A783A287A0417DF_il2cpp_TypeInfo_var);
	RTCStatsCollectorCallback__ctor_m2DEEA83EAC7E927BA42B769146369246ED5C8132(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetLocalDescription_m3F32770936BF9ECFB93FDFAA5849B285519CA3C3 (intptr_t ___0_ptr, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___1_desc, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_desc' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____1_desc_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____1_desc_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___1_desc, ____1_desc_marshaled_dereferenced);
	____1_desc_marshaled = &____1_desc_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetLocalDescription)(___0_ptr, ____1_desc_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_desc_marshaled);
	#endif

	// Marshaling of parameter '___1_desc' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____1_desc_marshaled_unmarshaled_dereferenced;
	memset((&_____1_desc_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_desc_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____1_desc_marshaled, _____1_desc_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____1_desc_marshaled);
	*___1_desc = _____1_desc_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_desc)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetRemoteDescription_mCA44B5F7C5A58ECD9377E227B18836AE77425334 (intptr_t ___0_ptr, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___1_desc, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_desc' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____1_desc_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____1_desc_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___1_desc, ____1_desc_marshaled_dereferenced);
	____1_desc_marshaled = &____1_desc_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetRemoteDescription)(___0_ptr, ____1_desc_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_desc_marshaled);
	#endif

	// Marshaling of parameter '___1_desc' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____1_desc_marshaled_unmarshaled_dereferenced;
	memset((&_____1_desc_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_desc_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____1_desc_marshaled, _____1_desc_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____1_desc_marshaled);
	*___1_desc = _____1_desc_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_desc)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetPendingLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetPendingLocalDescription_mF1ADBA817D405891892941323108ED12D7811F2F (intptr_t ___0_ptr, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___1_desc, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetPendingLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_desc' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____1_desc_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____1_desc_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___1_desc, ____1_desc_marshaled_dereferenced);
	____1_desc_marshaled = &____1_desc_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetPendingLocalDescription)(___0_ptr, ____1_desc_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_desc_marshaled);
	#endif

	// Marshaling of parameter '___1_desc' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____1_desc_marshaled_unmarshaled_dereferenced;
	memset((&_____1_desc_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_desc_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____1_desc_marshaled, _____1_desc_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____1_desc_marshaled);
	*___1_desc = _____1_desc_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_desc)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetPendingRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetPendingRemoteDescription_mC4319288A8738072258AE9B33B559319B9E4FBA6 (intptr_t ___0_ptr, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___1_desc, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetPendingRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_desc' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____1_desc_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____1_desc_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___1_desc, ____1_desc_marshaled_dereferenced);
	____1_desc_marshaled = &____1_desc_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetPendingRemoteDescription)(___0_ptr, ____1_desc_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_desc_marshaled);
	#endif

	// Marshaling of parameter '___1_desc' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____1_desc_marshaled_unmarshaled_dereferenced;
	memset((&_____1_desc_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_desc_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____1_desc_marshaled, _____1_desc_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____1_desc_marshaled);
	*___1_desc = _____1_desc_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_desc)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetCurrentLocalDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetCurrentLocalDescription_mE55716D7C4093BEA5FCDBDFBDE8841F13BABDABC (intptr_t ___0_ptr, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___1_desc, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetCurrentLocalDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_desc' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____1_desc_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____1_desc_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___1_desc, ____1_desc_marshaled_dereferenced);
	____1_desc_marshaled = &____1_desc_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetCurrentLocalDescription)(___0_ptr, ____1_desc_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_desc_marshaled);
	#endif

	// Marshaling of parameter '___1_desc' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____1_desc_marshaled_unmarshaled_dereferenced;
	memset((&_____1_desc_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_desc_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____1_desc_marshaled, _____1_desc_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____1_desc_marshaled);
	*___1_desc = _____1_desc_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_desc)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionGetCurrentRemoteDescription(System.IntPtr,Unity.WebRTC.RTCSessionDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionGetCurrentRemoteDescription_mCF473DFE0DF3707D22C8AEBE5C76B399291B559A (intptr_t ___0_ptr, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04* ___1_desc, const RuntimeMethod* method) 
{


	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetCurrentRemoteDescription", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_desc' to native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke* ____1_desc_marshaled = NULL;
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke ____1_desc_marshaled_dereferenced = {};
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke(*___1_desc, ____1_desc_marshaled_dereferenced);
	____1_desc_marshaled = &____1_desc_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetCurrentRemoteDescription)(___0_ptr, ____1_desc_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr, ____1_desc_marshaled);
	#endif

	// Marshaling of parameter '___1_desc' back from native representation
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 _____1_desc_marshaled_unmarshaled_dereferenced;
	memset((&_____1_desc_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_desc_marshaled_unmarshaled_dereferenced));
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_back(*____1_desc_marshaled, _____1_desc_marshaled_unmarshaled_dereferenced);
	RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshal_pinvoke_cleanup(*____1_desc_marshaled);
	*___1_desc = _____1_desc_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_desc)->___sdp_1), (void*)NULL);

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionAddTrack(System.IntPtr,System.IntPtr,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionAddTrack_m7D4637B01BDB7461F69133D553AA4FE463E95CCA (intptr_t ___0_pc, intptr_t ___1_track, String_t* ___2_streamId, intptr_t* ___3_sender, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, char*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_streamId' to native representation
	char* ____2_streamId_marshaled = NULL;
	____2_streamId_marshaled = il2cpp_codegen_marshal_string(___2_streamId);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTrack)(___0_pc, ___1_track, ____2_streamId_marshaled, ___3_sender);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_pc, ___1_track, ____2_streamId_marshaled, ___3_sender);
	#endif

	// Marshaling cleanup of parameter '___2_streamId' native representation
	il2cpp_codegen_marshal_free(____2_streamId_marshaled);
	____2_streamId_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiver_m9689584DB022D2E96E0D8E02D79B8013EF7A340B (intptr_t ___0_pc, intptr_t ___1_track, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiver)(___0_pc, ___1_track);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_pc, ___1_track);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithInit(System.IntPtr,System.IntPtr,Unity.WebRTC.RTCRtpTransceiverInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithInit_m04739A3773AD9DCDE4B0C4ACE430DA62E303AE34 (intptr_t ___0_pc, intptr_t ___1_track, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558* ___2_init, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithInit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithInit)(___0_pc, ___1_track, ___2_init);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_pc, ___1_track, ___2_init);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithType(System.IntPtr,Unity.WebRTC.TrackKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithType_mC34513A567925AFC255F1C062D44A687BF241D5A (intptr_t ___0_pc, int32_t ___1_kind, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithType)(___0_pc, ___1_kind);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_pc, ___1_kind);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionAddTransceiverWithTypeAndInit(System.IntPtr,Unity.WebRTC.TrackKind,Unity.WebRTC.RTCRtpTransceiverInitInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionAddTransceiverWithTypeAndInit_mADB247EDE97A6D188E59AE3C3A46446852646F76 (intptr_t ___0_pc, int32_t ___1_kind, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558* ___2_init, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(RTCRtpTransceiverInitInternal_tDC6F6FE487128ECA3D84929028D6A4D248DBE558*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddTransceiverWithTypeAndInit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddTransceiverWithTypeAndInit)(___0_pc, ___1_kind, ___2_init);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_pc, ___1_kind, ___2_init);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::PeerConnectionRemoveTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionRemoveTrack_m2013EE524CF7FA10D6902E84DA50A572F7A1D895 (intptr_t ___0_pc, intptr_t ___1_sender, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionRemoveTrack)(___0_pc, ___1_sender);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_pc, ___1_sender);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::PeerConnectionAddIceCandidate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_PeerConnectionAddIceCandidate_m0DD9B094D356D95A55B61311F0539008C2CDA7B6 (intptr_t ___0_ptr, intptr_t ___1_candidate, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionAddIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionAddIceCandidate)(___0_ptr, ___1_candidate);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr, ___1_candidate);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::CreateIceCandidate(Unity.WebRTC.RTCIceCandidateInitInternal&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_CreateIceCandidate_m6046A47C89F116BE0D68B31F323DDF60A90A4125 (RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B* ___0_options, intptr_t* ___1_candidate, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "CreateIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_options' to native representation
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke* ____0_options_marshaled = NULL;
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshaled_pinvoke ____0_options_marshaled_dereferenced = {};
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke(*___0_options, ____0_options_marshaled_dereferenced);
	____0_options_marshaled = &____0_options_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CreateIceCandidate)(____0_options_marshaled, ___1_candidate);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_options_marshaled, ___1_candidate);
	#endif

	// Marshaling of parameter '___0_options' back from native representation
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B _____0_options_marshaled_unmarshaled_dereferenced;
	memset((&_____0_options_marshaled_unmarshaled_dereferenced), 0, sizeof(_____0_options_marshaled_unmarshaled_dereferenced));
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_back(*____0_options_marshaled, _____0_options_marshaled_unmarshaled_dereferenced);
	RTCIceCandidateInitInternal_t38E693EFDC926DBBB98EF37A7267DE72B774594B_marshal_pinvoke_cleanup(*____0_options_marshaled);
	*___0_options = _____0_options_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___0_options)->___candidate_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___0_options)->___sdpMid_1), (void*)NULL);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::DeleteIceCandidate(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DeleteIceCandidate_m51EE35F039C8B3DBAA62AB610A8C75D3FCCF5EC2 (intptr_t ___0_candidate, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DeleteIceCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DeleteIceCandidate)(___0_candidate);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_candidate);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::IceCandidateGetCandidate(System.IntPtr,Unity.WebRTC.CandidateInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_IceCandidateGetCandidate_m20FBFAFBF40F6D12DE6AFBBC2BB21F8D1465D4B5 (intptr_t ___0_candidate, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5* ___1_dst, const RuntimeMethod* method) 
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetCandidate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_dst' to native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke ____1_dst_empty = {};
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke* ____1_dst_marshaled = &____1_dst_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(IceCandidateGetCandidate)(___0_candidate, ____1_dst_marshaled);
	#else
	il2cppPInvokeFunc(___0_candidate, ____1_dst_marshaled);
	#endif

	// Marshaling of parameter '___1_dst' back from native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 _____1_dst_marshaled_unmarshaled_dereferenced;
	memset((&_____1_dst_marshaled_unmarshaled_dereferenced), 0, sizeof(_____1_dst_marshaled_unmarshaled_dereferenced));
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_back(*____1_dst_marshaled, _____1_dst_marshaled_unmarshaled_dereferenced);
	*___1_dst = _____1_dst_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___candidate_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___foundation_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___ip_3), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___address_6), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___protocol_7), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___relatedAddress_8), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___tcpType_10), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___type_11), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___1_dst)->___usernameFragment_12), (void*)NULL);
	#endif

	// Marshaling cleanup of parameter '___1_dst' native representation
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshal_pinvoke_cleanup(*____1_dst_marshaled);

}
// System.Int32 Unity.WebRTC.NativeMethods::IceCandidateGetSdpLineIndex(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_IceCandidateGetSdpLineIndex_m77FC48194CE90881AB34D8DC27159339B7B5134E (intptr_t ___0_candidate, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdpLineIndex", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdpLineIndex)(___0_candidate);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_candidate);
	#endif

	return returnValue;
}
// System.String Unity.WebRTC.NativeMethods::IceCandidateGetSdp(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeMethods_IceCandidateGetSdp_mCFDF61DC2C2F295483C14143D12E9574F3E82AE8 (intptr_t ___0_candidate, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdp)(___0_candidate);
	#else
	char* returnValue = il2cppPInvokeFunc(___0_candidate);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Unity.WebRTC.NativeMethods::IceCandidateGetSdpMid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeMethods_IceCandidateGetSdpMid_m08ED0F4061E99DEF3CDEEEEC0CC18C0443C22A88 (intptr_t ___0_candidate, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "IceCandidateGetSdpMid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(IceCandidateGetSdpMid)(___0_candidate);
	#else
	char* returnValue = il2cppPInvokeFunc(___0_candidate);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// Unity.WebRTC.RTCPeerConnectionState Unity.WebRTC.NativeMethods::PeerConnectionState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionState_m57F4844754EE1128A474BCB4D0FA39D1336114B5 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionState)(___0_ptr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetReceivers(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetReceivers_m9B5A646570A2A6654BBAF68259D0642A949174D4 (intptr_t ___0_context, intptr_t ___1_ptr, uint64_t* ___2_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetReceivers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetReceivers)(___0_context, ___1_ptr, ___2_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context, ___1_ptr, ___2_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetSenders(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetSenders_m8AA74112B885095969E0E263A7552A58B5EB8952 (intptr_t ___0_context, intptr_t ___1_ptr, uint64_t* ___2_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetSenders", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetSenders)(___0_context, ___1_ptr, ___2_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context, ___1_ptr, ___2_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::PeerConnectionGetTransceivers(System.IntPtr,System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_PeerConnectionGetTransceivers_mCC516BDA7CA5A1A7E0B7524276E1F30BCE51461B (intptr_t ___0_context, intptr_t ___1_ptr, uint64_t* ___2_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionGetTransceivers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionGetTransceivers)(___0_context, ___1_ptr, ___2_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context, ___1_ptr, ___2_length);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCIceConnectionState Unity.WebRTC.NativeMethods::PeerConnectionIceConditionState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionIceConditionState_mDA6E7F956874BA3BC233018FBCAF193ACE610599 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionIceConditionState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionIceConditionState)(___0_ptr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCSignalingState Unity.WebRTC.NativeMethods::PeerConnectionSignalingState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionSignalingState_m38608AC66D91BEFB9426BCFDD7AD3C232E617D96 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionSignalingState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionSignalingState)(___0_ptr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCIceGatheringState Unity.WebRTC.NativeMethods::PeerConnectionIceGatheringState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_PeerConnectionIceGatheringState_m5613467FB4729B87DCD4B7D0FDB915A5ABBC0DC4 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionIceGatheringState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PeerConnectionIceGatheringState)(___0_ptr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnDataChannel(System.IntPtr,Unity.WebRTC.DelegateNativeOnDataChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnDataChannel_m3622463CBF8AB1C16525E3647DEB137A6B06178C (intptr_t ___0_ptr, DelegateNativeOnDataChannel_tCE37121B57F3BE94193C531A4A638EC3D0D8065F* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnDataChannel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnDataChannel)(___0_ptr, ____1_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnRenegotiationNeeded(System.IntPtr,Unity.WebRTC.DelegateNativeOnNegotiationNeeded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnRenegotiationNeeded_mCFAEF0D6516046661ED4C8BFE8888808BD13E3ED (intptr_t ___0_ptr, DelegateNativeOnNegotiationNeeded_t3554AC9886937B4BA427C3AB4C7D4ED094162B3B* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnRenegotiationNeeded", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnRenegotiationNeeded)(___0_ptr, ____1_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnTrack(System.IntPtr,Unity.WebRTC.DelegateNativeOnTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnTrack_mAA616B480F804DBA452F2974747F4706C5210744 (intptr_t ___0_ptr, DelegateNativeOnTrack_t42788B826E227FB6F62B61BEF65549948EDCE2EE* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnTrack)(___0_ptr, ____1_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::PeerConnectionRegisterOnRemoveTrack(System.IntPtr,Unity.WebRTC.DelegateNativeOnRemoveTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_PeerConnectionRegisterOnRemoveTrack_m85E6F7E6207AF3C9920133816D485233A88C86CC (intptr_t ___0_ptr, DelegateNativeOnRemoveTrack_t23BA64D8C071163F734C843292EBEA97B1B31945* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "PeerConnectionRegisterOnRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(PeerConnectionRegisterOnRemoveTrack)(___0_ptr, ____1_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_callback_marshaled);
	#endif

}
// System.Boolean Unity.WebRTC.NativeMethods::TransceiverGetCurrentDirection(System.IntPtr,Unity.WebRTC.RTCRtpTransceiverDirection&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_TransceiverGetCurrentDirection_mCE1C67F76110528E2FA67990ECA9F5E398D20475 (intptr_t ___0_transceiver, int32_t* ___1_direction, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetCurrentDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetCurrentDirection)(___0_transceiver, ___1_direction);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_transceiver, ___1_direction);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverStop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverStop_mF2DF8B8AD322CCB7A411F32638E4CE92C7FA3606 (intptr_t ___0_transceiver, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverStop", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverStop)(___0_transceiver);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_transceiver);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetMid(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetMid_m72ADB104FFD7CD25B777DD9105995527708C77C9 (intptr_t ___0_transceiver, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetMid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetMid)(___0_transceiver);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_transceiver);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCRtpTransceiverDirection Unity.WebRTC.NativeMethods::TransceiverGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverGetDirection_m0158B94252D8F68A730D59F4663658B283F34AD4 (intptr_t ___0_transceiver, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetDirection)(___0_transceiver);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_transceiver);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverSetDirection(System.IntPtr,Unity.WebRTC.RTCRtpTransceiverDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverSetDirection_m4FF2215B35DE7B3273EAFF58FFD2570A9BE061AE (intptr_t ___0_transceiver, int32_t ___1_direction, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverSetDirection", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverSetDirection)(___0_transceiver, ___1_direction);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_transceiver, ___1_direction);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::TransceiverSetCodecPreferences(System.IntPtr,System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_TransceiverSetCodecPreferences_m7CE8931ADDA637545708D2FBFD395D7F5564975C (intptr_t ___0_transceiver, intptr_t ___1_capabilities, int64_t ___2_length, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverSetCodecPreferences", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverSetCodecPreferences)(___0_transceiver, ___1_capabilities, ___2_length);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_transceiver, ___1_capabilities, ___2_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetReceiver(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetReceiver_m9DEFA59A48EDC7F07E11717CF72E15ECD5A329D6 (intptr_t ___0_transceiver, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetReceiver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetReceiver)(___0_transceiver);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_transceiver);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::TransceiverGetSender(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_TransceiverGetSender_m7D199C9D7323D72D72E22F19BB8F8A30A43BFB49 (intptr_t ___0_transceiver, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "TransceiverGetSender", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TransceiverGetSender)(___0_transceiver);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_transceiver);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::SenderGetTrack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_SenderGetTrack_m91849D91EB13450D6D0AE8C538EE4D9AD5959800 (intptr_t ___0_sender, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderGetTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(SenderGetTrack)(___0_sender);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_sender);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::SenderGetParameters(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SenderGetParameters_m775042DDCBBD716EDB9B1A8B769B32C5758260ED (intptr_t ___0_sender, intptr_t* ___1_parameters, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderGetParameters", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SenderGetParameters)(___0_sender, ___1_parameters);
	#else
	il2cppPInvokeFunc(___0_sender, ___1_parameters);
	#endif

}
// Unity.WebRTC.RTCErrorType Unity.WebRTC.NativeMethods::SenderSetParameters(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SenderSetParameters_m89AEE2F75220B8537C7F2214326D788F821639D0 (intptr_t ___0_sender, intptr_t ___1_parameters, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderSetParameters", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SenderSetParameters)(___0_sender, ___1_parameters);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_sender, ___1_parameters);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::SenderReplaceTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SenderReplaceTrack_m2B246CE8F1CEE8E690DB2B380FFC020403EE44A4 (intptr_t ___0_sender, intptr_t ___1_track, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SenderReplaceTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(SenderReplaceTrack)(___0_sender, ___1_track);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_sender, ___1_track);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Unity.WebRTC.NativeMethods::ReceiverGetTrack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ReceiverGetTrack_m4B251892A2B56026F2192662A505B5B392500BE7 (intptr_t ___0_receiver, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ReceiverGetTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ReceiverGetTrack)(___0_receiver);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_receiver);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::ReceiverGetStreams(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ReceiverGetStreams_m24CAF985D88418A61537860FB2CACAEDAA0A7D5C (intptr_t ___0_receiver, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ReceiverGetStreams", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ReceiverGetStreams)(___0_receiver, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_receiver, ___1_length);
	#endif

	return returnValue;
}
// System.Int32 Unity.WebRTC.NativeMethods::DataChannelGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DataChannelGetID_mE4E2279367F5F44F48840DDF2B27100F69BCF066 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetID)(___0_ptr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::DataChannelGetLabel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_DataChannelGetLabel_mFC25938EBC00EDC2E1859DC6E0ABCDB0C74B77D7 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetLabel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetLabel)(___0_ptr);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::DataChannelGetProtocol(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_DataChannelGetProtocol_m02179994F4CD369DB59D8D650085141EB28FCF10 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetProtocol", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetProtocol)(___0_ptr);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.UInt16 Unity.WebRTC.NativeMethods::DataChannelGetMaxRetransmits(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeMethods_DataChannelGetMaxRetransmits_mDD794DE853B323B84BCA185BA40450A2131F1DAE (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef uint16_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetMaxRetransmits", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint16_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetMaxRetransmits)(___0_ptr);
	#else
	uint16_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.UInt16 Unity.WebRTC.NativeMethods::DataChannelGetMaxRetransmitTime(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeMethods_DataChannelGetMaxRetransmitTime_m18F7FB960F26F48B61FC7EB4D1B1C143A5C88ABD (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef uint16_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetMaxRetransmitTime", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint16_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetMaxRetransmitTime)(___0_ptr);
	#else
	uint16_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::DataChannelGetOrdered(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_DataChannelGetOrdered_mFEAC0C445F46D3575DC73DF5CCB4DC91552879AE (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetOrdered", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetOrdered)(___0_ptr);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return static_cast<bool>(returnValue);
}
// System.UInt64 Unity.WebRTC.NativeMethods::DataChannelGetBufferedAmount(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeMethods_DataChannelGetBufferedAmount_mA95A0F41E3D4B5E9AEF7FA4D16DE23BA1D090FA6 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetBufferedAmount", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetBufferedAmount)(___0_ptr);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::DataChannelGetNegotiated(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_DataChannelGetNegotiated_m424BDC16D9E917C2943EA72BC8448B1A7A4FD07F (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetNegotiated", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetNegotiated)(___0_ptr);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.WebRTC.RTCDataChannelState Unity.WebRTC.NativeMethods::DataChannelGetReadyState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_DataChannelGetReadyState_m46CA21EA7483A62E03C37F3C8126FB06923D91A4 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelGetReadyState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(DataChannelGetReadyState)(___0_ptr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_ptr);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSend(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSend_mCDFA53E04C4C4B922FDBAFDCB7DB08A4C4121551 (intptr_t ___0_ptr, String_t* ___1_msg, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSend", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_msg' to native representation
	char* ____1_msg_marshaled = NULL;
	____1_msg_marshaled = il2cpp_codegen_marshal_string(___1_msg);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSend)(___0_ptr, ____1_msg_marshaled);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_msg_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_msg' native representation
	il2cpp_codegen_marshal_free(____1_msg_marshaled);
	____1_msg_marshaled = NULL;

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSendPtr(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSendPtr_mF4C1F2B5DFD4AFC9D7D77922503616BE97EEC33B (intptr_t ___0_ptr, intptr_t ___1_dataPtr, int32_t ___2_size, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSendBinary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSendBinary)(___0_ptr, ___1_dataPtr, ___2_size);
	#else
	il2cppPInvokeFunc(___0_ptr, ___1_dataPtr, ___2_size);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelSendBinary(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelSendBinary_m61EEA2BC3BA160D566D99F2D04B7D26CF9FF3811 (intptr_t ___0_ptr, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_size, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelSendBinary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_bytes' to native representation
	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelSendBinary)(___0_ptr, ____1_bytes_marshaled, ___2_size);
	#else
	il2cppPInvokeFunc(___0_ptr, ____1_bytes_marshaled, ___2_size);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelClose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelClose_m4E4E747F6BB9F161B7234F51299FAD86A28D2058 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelClose)(___0_ptr);
	#else
	il2cppPInvokeFunc(___0_ptr);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnMessage(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnMessage_mA2CE77296009615FD67D539ADC0384C55C08ED2A (intptr_t ___0_ctx, intptr_t ___1_ptr, DelegateNativeOnMessage_t0C9DF7D46D5D2D1A0E730AD4145AA9BD139BF4C7* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_callback' to native representation
	Il2CppMethodPointer ____2_callback_marshaled = NULL;
	____2_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnMessage)(___0_ctx, ___1_ptr, ____2_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ctx, ___1_ptr, ____2_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnOpen(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnOpen)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnOpen_m985CC37FC3131EF5F33CA43E63D45E84CC3A5C0B (intptr_t ___0_ctx, intptr_t ___1_ptr, DelegateNativeOnOpen_tB37FE305AE1266E2CEA32A7F2EC77C8C00EFEE64* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnOpen", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_callback' to native representation
	Il2CppMethodPointer ____2_callback_marshaled = NULL;
	____2_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnOpen)(___0_ctx, ___1_ptr, ____2_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ctx, ___1_ptr, ____2_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::DataChannelRegisterOnClose(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeOnClose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DataChannelRegisterOnClose_mAD5F313E2404B9BD12E45D2F9A9F825650032953 (intptr_t ___0_ctx, intptr_t ___1_ptr, DelegateNativeOnClose_t3C4A173948AC1105D747FB300BEBAC54C9C50DF6* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DataChannelRegisterOnClose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_callback' to native representation
	Il2CppMethodPointer ____2_callback_marshaled = NULL;
	____2_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DataChannelRegisterOnClose)(___0_ctx, ___1_ptr, ____2_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_ctx, ___1_ptr, ____2_callback_marshaled);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateMediaStream(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateMediaStream_mE7F58B238F4F9ED4A1C7B6936F87F235D2853C50 (intptr_t ___0_ctx, String_t* ___1_label, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateMediaStream", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_label' to native representation
	char* ____1_label_marshaled = NULL;
	____1_label_marshaled = il2cpp_codegen_marshal_string(___1_label);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateMediaStream)(___0_ctx, ____1_label_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_ctx, ____1_label_marshaled);
	#endif

	// Marshaling cleanup of parameter '___1_label' native representation
	il2cpp_codegen_marshal_free(____1_label_marshaled);
	____1_label_marshaled = NULL;

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextRegisterMediaStreamObserver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextRegisterMediaStreamObserver_m3239750F28D294CF7D97E35AC578B11E7B6CC0BF (intptr_t ___0_ctx, intptr_t ___1_stream, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextRegisterMediaStreamObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextRegisterMediaStreamObserver)(___0_ctx, ___1_stream);
	#else
	il2cppPInvokeFunc(___0_ctx, ___1_stream);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::ContextUnRegisterMediaStreamObserver(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextUnRegisterMediaStreamObserver_mBB22C1266339FE954F8DDB7C772EEB70A516A852 (intptr_t ___0_ctx, intptr_t ___1_stream, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextUnRegisterMediaStreamObserver", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextUnRegisterMediaStreamObserver)(___0_ctx, ___1_stream);
	#else
	il2cppPInvokeFunc(___0_ctx, ___1_stream);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::ContextCreateAudioTrackSink(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_ContextCreateAudioTrackSink_m3219A9D37C741B06B00735D207D429E5206FD488 (intptr_t ___0_context, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextCreateAudioTrackSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(ContextCreateAudioTrackSink)(___0_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::ContextDeleteAudioTrackSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_ContextDeleteAudioTrackSink_mFA680BDB81D00D4CAFA389B4153043F836CEE944 (intptr_t ___0_context, intptr_t ___1_sink, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "ContextDeleteAudioTrackSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(ContextDeleteAudioTrackSink)(___0_context, ___1_sink);
	#else
	il2cppPInvokeFunc(___0_context, ___1_sink);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackAddSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackAddSink_m270BFE92ABC449BC9D3ADA1E4CD0BD81E0FFC133 (intptr_t ___0_track, intptr_t ___1_sink, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackAddSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackAddSink)(___0_track, ___1_sink);
	#else
	il2cppPInvokeFunc(___0_track, ___1_sink);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackRemoveSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackRemoveSink_mB7FC44B687214EA9099C61CC7BEFF4D4ECC433A4 (intptr_t ___0_track, intptr_t ___1_sink, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackRemoveSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackRemoveSink)(___0_track, ___1_sink);
	#else
	il2cppPInvokeFunc(___0_track, ___1_sink);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::AudioTrackSinkProcessAudio(System.IntPtr,System.Single[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioTrackSinkProcessAudio_mEFA5F0FAD5D02EF010F76EC1C15E92382982F48C (intptr_t ___0_sink, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_length, int32_t ___3_channels, int32_t ___4_sampleRate, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioTrackSinkProcessAudio", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	float* ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		____1_data_marshaled = reinterpret_cast<float*>((___1_data)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioTrackSinkProcessAudio)(___0_sink, ____1_data_marshaled, ___2_length, ___3_channels, ___4_sampleRate);
	#else
	il2cppPInvokeFunc(___0_sink, ____1_data_marshaled, ___2_length, ___3_channels, ___4_sampleRate);
	#endif

}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamAddTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamAddTrack_m9F2769205EF18C3C6D4A1D028AFF66A16A2011C7 (intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamAddTrack)(___0_stream, ___1_track);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_stream, ___1_track);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamRemoveTrack(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamRemoveTrack_m4823C9AC6D923B0F10EAC750834FF429FC87E9A6 (intptr_t ___0_stream, intptr_t ___1_track, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamRemoveTrack)(___0_stream, ___1_track);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_stream, ___1_track);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetVideoTracks(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetVideoTracks_mAEE865CEBBF9ABD51E566BB238ECE14B205A1002 (intptr_t ___0_stream, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetVideoTracks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetVideoTracks)(___0_stream, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stream, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetAudioTracks(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetAudioTracks_mE215E43B5CFAB94830AA6DD770B3FB480B8511AE (intptr_t ___0_stream, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetAudioTracks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetAudioTracks)(___0_stream, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stream, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamGetID_m3727C3A37C20D75575AF58FA58212F248A1FF2DA (intptr_t ___0_stream, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamGetID)(___0_stream);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stream);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamRegisterOnAddTrack(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeMediaStreamOnAddTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamRegisterOnAddTrack_m7531F0539C9CAEE33E89231700AADCD9D9B9EDB0 (intptr_t ___0_context, intptr_t ___1_stream, DelegateNativeMediaStreamOnAddTrack_t58C6FD5B673C18D04A2A0C30204D0785E0D51A0D* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRegisterOnAddTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_callback' to native representation
	Il2CppMethodPointer ____2_callback_marshaled = NULL;
	____2_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamRegisterOnAddTrack)(___0_context, ___1_stream, ____2_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_context, ___1_stream, ____2_callback_marshaled);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamRegisterOnRemoveTrack(System.IntPtr,System.IntPtr,Unity.WebRTC.DelegateNativeMediaStreamOnRemoveTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamRegisterOnRemoveTrack_m98D81A6B7841AE47C9D806C52F403907F75E2AAD (intptr_t ___0_context, intptr_t ___1_stream, DelegateNativeMediaStreamOnRemoveTrack_tAA530A45B71D364E85FBB6CE064A010C5AE30E61* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamRegisterOnRemoveTrack", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_callback' to native representation
	Il2CppMethodPointer ____2_callback_marshaled = NULL;
	____2_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamRegisterOnRemoveTrack)(___0_context, ___1_stream, ____2_callback_marshaled);
	#else
	il2cppPInvokeFunc(___0_context, ___1_stream, ____2_callback_marshaled);
	#endif

}
// Unity.WebRTC.TrackKind Unity.WebRTC.NativeMethods::MediaStreamTrackGetKind(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_MediaStreamTrackGetKind_m6B3C01D70723C20620EECC0B86E4D16E791C73FC (intptr_t ___0_track, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetKind", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetKind)(___0_track);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_track);
	#endif

	return returnValue;
}
// Unity.WebRTC.TrackState Unity.WebRTC.NativeMethods::MediaStreamTrackGetReadyState(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_MediaStreamTrackGetReadyState_m4F34F87D8C5B2D4C55647AF7B1AC93B5F44131D7 (intptr_t ___0_track, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetReadyState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetReadyState)(___0_track);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_track);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::MediaStreamTrackGetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_MediaStreamTrackGetID_m5C3C86FF65017316C69A93CF3B2C6A4B9C93FF07 (intptr_t ___0_track, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetID", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetID)(___0_track);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_track);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::MediaStreamTrackGetEnabled(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_MediaStreamTrackGetEnabled_m387841A5355FF5D9DFFE0559E38B25D49F9D79D2 (intptr_t ___0_track, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackGetEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(MediaStreamTrackGetEnabled)(___0_track);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_track);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.WebRTC.NativeMethods::MediaStreamTrackSetEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_MediaStreamTrackSetEnabled_mA72A1C1DD2C00B15C8C839CBEC166698A5909C2C (intptr_t ___0_track, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 1 + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "MediaStreamTrackSetEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(MediaStreamTrackSetEnabled)(___0_track, static_cast<uint8_t>(___1_enabled));
	#else
	il2cppPInvokeFunc(___0_track, static_cast<uint8_t>(___1_enabled));
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::CreateVideoRenderer(System.IntPtr,Unity.WebRTC.DelegateVideoFrameResize,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_CreateVideoRenderer_m4128D531EEB84F91C20EE35BC21261BF426F4B27 (intptr_t ___0_context, DelegateVideoFrameResize_t79201165B78933370E9B14E544E3349FA8B8015A* ___1_callback, bool ___2_needFlip, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, uint8_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + 1 + 3;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "CreateVideoRenderer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_callback' to native representation
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(CreateVideoRenderer)(___0_context, ____1_callback_marshaled, static_cast<uint8_t>(___2_needFlip));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context, ____1_callback_marshaled, static_cast<uint8_t>(___2_needFlip));
	#endif

	return returnValue;
}
// System.UInt32 Unity.WebRTC.NativeMethods::GetVideoRendererId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_GetVideoRendererId_m4AC0EF6286D26BA246A898875E49DA914B513E2C (intptr_t ___0_sink, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetVideoRendererId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(GetVideoRendererId)(___0_sink);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_sink);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::DeleteVideoRenderer(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_DeleteVideoRenderer_m0F62B76B92C86A4CB95E6BFC82CAED3BD55D7B37 (intptr_t ___0_context, intptr_t ___1_sink, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "DeleteVideoRenderer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(DeleteVideoRenderer)(___0_context, ___1_sink);
	#else
	il2cppPInvokeFunc(___0_context, ___1_sink);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::VideoTrackAddOrUpdateSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_VideoTrackAddOrUpdateSink_m20AE36342E78D8A4050918055E5CE31317ED96CE (intptr_t ___0_track, intptr_t ___1_sink, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "VideoTrackAddOrUpdateSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(VideoTrackAddOrUpdateSink)(___0_track, ___1_sink);
	#else
	il2cppPInvokeFunc(___0_track, ___1_sink);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::VideoTrackRemoveSink(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_VideoTrackRemoveSink_mDEBD6AB58A88E76A4FD943D7AFE13BAAD60C050D (intptr_t ___0_track, intptr_t ___1_sink, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "VideoTrackRemoveSink", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(VideoTrackRemoveSink)(___0_track, ___1_sink);
	#else
	il2cppPInvokeFunc(___0_track, ___1_sink);
	#endif

}
// System.Void Unity.WebRTC.NativeMethods::SetCurrentContext(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetCurrentContext_mDBB7B2ACECCE37E4D2E59BB17D98A7F457C7784B (intptr_t ___0_context, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "SetCurrentContext", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetCurrentContext)(___0_context);
	#else
	il2cppPInvokeFunc(___0_context);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::GetRenderEventFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetRenderEventFunc_m13D0A78CC2861C302A07E1C7D777D71D281F3B72 (intptr_t ___0_context, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetRenderEventFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetRenderEventFunc)(___0_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::GetReleaseBuffersFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetReleaseBuffersFunc_m274A34474B50C1ED4C180E1175BAD7C9DF9F20BF (intptr_t ___0_context, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetReleaseBuffersFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetReleaseBuffersFunc)(___0_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::GetUpdateTextureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetUpdateTextureFunc_m7DD45A2EDCD706BD267379366497E321485EDDD6 (intptr_t ___0_context, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "GetUpdateTextureFunc", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetUpdateTextureFunc)(___0_context);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_context);
	#endif

	return returnValue;
}
// System.Void Unity.WebRTC.NativeMethods::AudioSourceProcessLocalAudio(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_AudioSourceProcessLocalAudio_m607DE54A735AC0F49BE6C05CFA2BE2F11B24E2F1 (intptr_t ___0_source, intptr_t ___1_array, int32_t ___2_sampleRate, int32_t ___3_channels, int32_t ___4_frames, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "AudioSourceProcessLocalAudio", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	reinterpret_cast<PInvokeFunc>(AudioSourceProcessLocalAudio)(___0_source, ___1_array, ___2_sampleRate, ___3_channels, ___4_frames);
	#else
	il2cppPInvokeFunc(___0_source, ___1_array, ___2_sampleRate, ___3_channels, ___4_frames);
	#endif

}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetJson(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetJson_m94F6FA8ED9F15073BECB1E4F6E0A9BE775B3FA6E (intptr_t ___0_stats, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetJson", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetJson)(___0_stats);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stats);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetId_m03AB59CC9285ED6AA4F130596DA32909505A40E3 (intptr_t ___0_stats, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetId)(___0_stats);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stats);
	#endif

	return returnValue;
}
// Unity.WebRTC.RTCStatsType Unity.WebRTC.NativeMethods::StatsGetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsGetType_m33A4C9391518A9A489E47D2C8474DF9F2E9922DA (intptr_t ___0_stats, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetType)(___0_stats);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_stats);
	#endif

	return returnValue;
}
// System.Int64 Unity.WebRTC.NativeMethods::StatsGetTimestamp(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_StatsGetTimestamp_m8EA6A2403C30C92C8D2F0EF9BF3FB945A4A11E4C (intptr_t ___0_stats, const RuntimeMethod* method) 
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetTimestamp", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetTimestamp)(___0_stats);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___0_stats);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsGetMembers(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsGetMembers_m145862B3F844659C46FE0F802E3CD05D7687EECF (intptr_t ___0_stats, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsGetMembers", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsGetMembers)(___0_stats, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_stats, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetName_m239BBF4DF2C79A5D3DCE616CD7EDF7E30D446D32 (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetName)(___0_member);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return returnValue;
}
// Unity.WebRTC.StatsMemberType Unity.WebRTC.NativeMethods::StatsMemberGetType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsMemberGetType_m09F052EA0FB048260010430F8B3B48BADCD88CE1 (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetType)(___0_member);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return returnValue;
}
// System.Boolean Unity.WebRTC.NativeMethods::StatsMemberIsDefined(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_StatsMemberIsDefined_m348391F44C32ABD7ED68DCAF5CB5B99B41533A1B (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberIsDefined", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberIsDefined)(___0_member);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.WebRTC.NativeMethods::StatsMemberGetBool(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_StatsMemberGetBool_m2BE980400FB8122A83FAA19B6216F156F8CDD194 (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetBool", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetBool)(___0_member);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int32 Unity.WebRTC.NativeMethods::StatsMemberGetInt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_StatsMemberGetInt_m389B770D756A83DC7DBCBBF320BB12F798E267E5 (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetInt)(___0_member);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return returnValue;
}
// System.UInt32 Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedInt(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeMethods_StatsMemberGetUnsignedInt_m826DAD0D2E3BA9ADFC19CAF1AA3030616F23EBD4 (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedInt)(___0_member);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return returnValue;
}
// System.Int64 Unity.WebRTC.NativeMethods::StatsMemberGetLong(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeMethods_StatsMemberGetLong_mCE0071BDD881B0EB7C43544A2D10B4594FB50844 (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetLong", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetLong)(___0_member);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return returnValue;
}
// System.UInt64 Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedLong(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NativeMethods_StatsMemberGetUnsignedLong_mA284E8DA58A96138DF27B59B0FD70A4B47B2325B (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef uint64_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedLong", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	uint64_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedLong)(___0_member);
	#else
	uint64_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return returnValue;
}
// System.Double Unity.WebRTC.NativeMethods::StatsMemberGetDouble(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeMethods_StatsMemberGetDouble_mF0BF8A0AA894CD1E90846BB9A190C0B8D6279558 (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef double (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetDouble", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetDouble)(___0_member);
	#else
	double returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetString_m884171AAA370ED79D22CB163CB232D685FAB3C80 (intptr_t ___0_member, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetString", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetString)(___0_member);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetBoolArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetBoolArray_m26C62FB9064C0C0E13608D80CF7BB3F4C148E9F0 (intptr_t ___0_member, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetBoolArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetBoolArray)(___0_member, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetIntArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetIntArray_m952EB49FEEC1CD2C8FF7301BC50095946DA2A40A (intptr_t ___0_member, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetIntArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetIntArray)(___0_member, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedIntArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetUnsignedIntArray_m71A174EA044426E4A094F201E5C995EEEAC89803 (intptr_t ___0_member, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedIntArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedIntArray)(___0_member, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetLongArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetLongArray_mBE31B45AB549FE3B98CC1F3CFBA671A22DCA9337 (intptr_t ___0_member, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetLongArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetLongArray)(___0_member, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetUnsignedLongArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetUnsignedLongArray_m850AC88D0AC4ADD5D8DABF313B29206FC5597F1F (intptr_t ___0_member, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetUnsignedLongArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetUnsignedLongArray)(___0_member, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetDoubleArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetDoubleArray_mB3BA2A0CF5E21B8E81F8EE80A2CDB403C820B5D8 (intptr_t ___0_member, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetDoubleArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetDoubleArray)(___0_member, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetStringArray(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetStringArray_m58A104CF6540ACF8618FE8270E85CC4F71CF9F50 (intptr_t ___0_member, uint64_t* ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetStringArray", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetStringArray)(___0_member, ___1_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetMapStringUint64(System.IntPtr,System.IntPtr&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetMapStringUint64_m37E51483AEE939FB3BA665A1427B8CBFF286658B (intptr_t ___0_member, intptr_t* ___1_values, uint64_t* ___2_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetMapStringUint64", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetMapStringUint64)(___0_member, ___1_values, ___2_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_values, ___2_length);
	#endif

	return returnValue;
}
// System.IntPtr Unity.WebRTC.NativeMethods::StatsMemberGetMapStringDouble(System.IntPtr,System.IntPtr&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_StatsMemberGetMapStringDouble_mC96BF60290C5B3ABB97BAA230678653C6D5A0749 (intptr_t ___0_member, intptr_t* ___1_values, uint64_t* ___2_length, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_webrtc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc"), "StatsMemberGetMapStringDouble", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_webrtc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(StatsMemberGetMapStringDouble)(___0_member, ___1_values, ___2_length);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_member, ___1_values, ___2_length);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.WebRTC.VideoEncoderMethods::Encode(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods_Encode_m40C7443F8475E15A5838CEE06C2A143E4773F823 (intptr_t ___0_callback, intptr_t ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginEventAndData(callback, 0, data);
		il2cpp_codegen_runtime_class_init_inline(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___0_callback;
		intptr_t L_2 = ___1_data;
		NullCheck(L_0);
		CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C(L_0, L_1, 0, L_2, NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9(L_3, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_4 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_4);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoEncoderMethods::ReleaseBuffers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods_ReleaseBuffers_m4F4010BF84D6360B45206A920419CDFD6178FB8D (intptr_t ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginEventAndData(callback, 0, IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___0_callback;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		NullCheck(L_0);
		CommandBuffer_IssuePluginEventAndData_m6218AC6654E29A7245DBB8F739FE99F6804FBB0C(L_0, L_1, 0, L_2, NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9(L_3, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_4 = ((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_4);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoEncoderMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoEncoderMethods__cctor_m522BB9B03FCEA34C77770BAC3ABD36AF3E9C12A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static CommandBuffer _command = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_0, NULL);
		((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_StaticFields*)il2cpp_codegen_static_fields_for(VideoEncoderMethods_t69074D02B99BC71D166A1DB1A65663718B9841EC_il2cpp_TypeInfo_var))->____command_0), (void*)L_0);
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
// System.Void Unity.WebRTC.VideoDecoderMethods::UpdateRendererTexture(System.IntPtr,UnityEngine.Texture,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDecoderMethods_UpdateRendererTexture_m914E16A838EDD7B425F21516A5D32057536447CE (intptr_t ___0_callback, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_texture, uint32_t ___2_rendererId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _command.IssuePluginCustomTextureUpdateV2(callback, texture, rendererId);
		il2cpp_codegen_runtime_class_init_inline(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		intptr_t L_1 = ___0_callback;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_texture;
		uint32_t L_3 = ___2_rendererId;
		NullCheck(L_0);
		CommandBuffer_IssuePluginCustomTextureUpdateV2_m2F0FCB75B743412D3AD504F7A95DE4D854A8D601(L_0, L_1, L_2, L_3, NULL);
		// Graphics.ExecuteCommandBuffer(_command);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_4 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9(L_4, NULL);
		// _command.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_5 = ((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0;
		NullCheck(L_5);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.WebRTC.VideoDecoderMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoDecoderMethods__cctor_m4DB7AB8448167955FBBCA1A28BAFA982B2F5D732 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static UnityEngine.Rendering.CommandBuffer _command = new UnityEngine.Rendering.CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_0, NULL);
		((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_StaticFields*)il2cpp_codegen_static_fields_for(VideoDecoderMethods_t552F1278C5D847B05DC4BE2D6D49C9D2A1B20D3F_il2cpp_TypeInfo_var))->____command_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_mF6A8073F1C481299FDAECC91751DB74E26B139CC_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; internal set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsDone_mCDCE05088AFBCB4DC0BCCC2E94554E34F7E3BF49_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; internal set; }
		bool L_0 = ___0_value;
		__this->___U3CIsDoneU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCStatsReportAsyncOperation_set_Value_mCE15A3F7377BE14D2CD1CE8C90DC244E19B224B8_inline (RTCStatsReportAsyncOperation_t6AFC8F941C85A86FD398C321CF410F16F722B264* __this, RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* ___0_value, const RuntimeMethod* method) 
{
	{
		// public RTCStatsReport Value { get; private set; }
		RTCStatsReport_t7BD55F20184C1A6A805C54DC536D320213C27448* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_IsError_mCA54B9AB580B70429E544558DB93A6AFE5D0B7E1_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsError { get; internal set; }
		bool L_0 = ___0_value;
		__this->___U3CIsErrorU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_set_Error_m9BDAA2316E843D95CD5F76EA9571F4255B1F352C_inline (AsyncOperationBase_t89FB94C53F54B88DDA074A41F098354CE17B8AC4* __this, RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E ___0_value, const RuntimeMethod* method) 
{
	{
		// public RTCError Error { get; internal set; }
		RTCError_t4DF7C824CA08C2DC6B0A205432DBA25679DABE9E L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CErrorU3Ek__BackingField_0))->___message_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RTCSessionDescriptionAsyncOperation_set_Desc_m63FD708E5421DB16773B1A3A216834550C0F4F54_inline (RTCSessionDescriptionAsyncOperation_tE5DC0F88E854C6F584CDE1DD5428598E4A1DE12C* __this, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RTCSessionDescription Desc { get; internal set; }
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_0 = ___0_value;
		__this->___U3CDescU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CDescU3Ek__BackingField_3))->___sdp_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
