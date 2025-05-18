﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Exception,System.Object>
struct Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07;
// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object>
struct Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551;
// System.Buffers.IMemoryOwner`1<System.Byte>
struct IMemoryOwner_1_t1B649D339D50B96147E58E2190B273754E1956D6;
// System.Threading.Tasks.Sources.IValueTaskSource`1<System.IO.Pipelines.FlushResult>
struct IValueTaskSource_1_tCD323CACC40B8B7BC1D52A894243FA5F53796A1F;
// System.Threading.Tasks.Sources.IValueTaskSource`1<System.IO.Pipelines.ReadResult>
struct IValueTaskSource_1_t3F84730F50D722482B6FFAE2814A3C27F0A53FC7;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B;
// System.Collections.Generic.List`1<System.Threading.IAsyncLocal>
struct List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>
struct List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3;
// System.Buffers.MemoryPool`1<System.Byte>
struct MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Buffers.ReadOnlySequenceSegment`1<System.Byte>
struct ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.Tasks.TaskFactory`1<System.IO.Pipelines.ReadResult>
struct TaskFactory_1_t947023137BB140CC89E42C92DCE579190BCA4526;
// System.Threading.Tasks.Task`1<System.IO.Pipelines.FlushResult>
struct Task_1_tB31D86779B7CCD322C7C37457181626B2C7CA5DB;
// System.Threading.Tasks.Task`1<System.IO.Pipelines.ReadResult>
struct Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187;
// System.Tuple`2<System.Action`1<System.Object>,System.Object>
struct Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.IO.Pipelines.PipeCompletionCallback[]
struct PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType[]
struct SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.IO.Pipelines.BufferSegment
struct BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED;
// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_tCD284380F0121D65D21BA117E2D6574EBB2365CD;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t3861DEE5A3E64E6BA44F4E5DAF468405529015A9;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.Runtime.Remoting.Messaging.IllogicalCallContext
struct IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5;
// System.IO.Pipelines.InlineScheduler
struct InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t3AADE74296B2EE527CDCF3E7FF1C16A719488E92;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_tA06B79E13977733430E5CF539FA2B128E89AE69A;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tC675B1966CF35FA975B179C5A24E31FEF9AD1F78;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t2E4991B692AC8D3DCC35754DFB2BFD42E0FA7630;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t0D1FC933B843F81952D272094F4A9750490DDAC1;
// System.IO.Pipelines.Pipe
struct Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED;
// System.IO.Pipelines.PipeCompletionCallbacks
struct PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D;
// System.IO.Pipelines.PipeOptions
struct PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5;
// System.IO.Pipelines.PipeReader
struct PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135;
// System.IO.Pipelines.PipeScheduler
struct PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8;
// System.IO.Pipelines.PipeWriter
struct PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8;
// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_t008419E43F83E17AAB213CEC20594EA6F43A3513;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.IO.Pipelines.ThreadPoolScheduler
struct ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931;
// System.Type
struct Type_t;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510;
// System.IO.Pipelines.Pipe/<>c
struct U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143;
// System.IO.Pipelines.Pipe/DefaultPipeReader
struct DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5;
// System.IO.Pipelines.Pipe/DefaultPipeWriter
struct DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE;
// System.IO.Pipelines.PipeAwaitable/SchedulingContext
struct SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.IO.Pipelines.ThreadPoolScheduler/<>c
struct U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t3C408D098C5252B53AB341FA1AEFBD51083D3F17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemoryOwner_1_t1B649D339D50B96147E58E2190B273754E1956D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral035B148982D5A742B2D0D91F84B875E581D514CC;
IL2CPP_EXTERN_C String_t* _stringLiteral1F39F88BE4FF6C66634BA34AAA7495A2A18243AE;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE6EA0880C54858BC3F5E785A6C2C328C94CBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral44F9DB9B44384462C74432D2375D3D8E1C964BE4;
IL2CPP_EXTERN_C String_t* _stringLiteral4C26551FA3A2996DE499577BD207FD6121130D28;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC5DE89EB3C64D378C96D8271F7CAC87988DAB6;
IL2CPP_EXTERN_C String_t* _stringLiteral6BCF7DD9EBFA93CAF0C5039BF18BE68B20513C80;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6;
IL2CPP_EXTERN_C String_t* _stringLiteralD06A2175494A75BCA35782C11977EA005DE6E0B3;
IL2CPP_EXTERN_C String_t* _stringLiteralE413266BEA683ECEA0AC3196898A978430405FD3;
IL2CPP_EXTERN_C String_t* _stringLiteralF5BC345FC82A0E5D579DBB69B9825CEFF3A1FBF4;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisSegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_mAA9FFF578D9CE23FCACA7B1803156EA5DEC40548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BuffersExtensions_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m580BC994AF77A9E56F26BEEF8A039088A67FF2A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA3E96E178A183FF2A77D2D2416A61C89B69C8994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m153C30A6621EAA40DCB034B9570D2F85D4F16E79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m95A6F25EC14A8041B97D9929825AC0B1978A9BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFB65FC26138A60A746CBE77A6DC92F0F1E380AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PipeCompletionCallbacks_Execute_mCAA6A897096D03BD69ECFBD284AFEC57E5DC7BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pipe_ExecuteWithExecutionContext_m463E3B03575513E5669C2E6D358A5CEE6670290E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pipe_ExecuteWithoutExecutionContext_mCE022A08AAE43B1BDA4CBBDCCBD38070EE46F794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_CopyTo_m636823FFDFBA21CBEB9482D32A178A058377DE87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequenceSegment_1__ctor_mE797DC2CAB0C7E2A04FF7DC3B1339247CB94321F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequenceSegment_1_get_Next_m2D0399C1974F8C84EC006630E4CA359EC2A30497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySequence_1__ctor_m74DC3FF576D92A17557DE1331315148047B9F9C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCanceled_TisReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_m4644A697A1AD4F64A092EA3F7A86ADF51D5136D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_m9FF2C61D01B45E18204A5BCE701802D97C1F9D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_AdvanceToInvalidCursor_mC800A30BF62F718FEC7B0F98FD5878BCFC68E73C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_GetResultNotCompleted_m68687070E4FAC351F1D818D97EF44432AC9BDDCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_InvalidExaminedOrConsumedPosition_m603884FB87ABE71205CE6CB2DF53D1227C37D5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_InvalidExaminedPosition_mABA820684341FF9D6D6C3BFB0DBA21738AADA32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_NoReadToComplete_m784A80383D9030FC7C40A6EC6006BF538FD1EBCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_NoReadingAllowed_mFD0ED21F5A03F9232D4592DEE3E90E1BC43E695F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_NoWritingAllowed_m9EE7C1DDF70E86F4BD14DEEF4F769A2387CF4695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m8EE9690D63602500CB421876A29C083C1A948835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m8C35776EFFA9FB3C7A564460C2B7BF43AF056CA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CScheduleU3Eb__0_0_m8DE599E6515E96355D79A8C204194D4D9D669F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__100_0_m0B9CD51A833F602BBB92A1964F7F1400F66D7D38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__100_1_m58CED838F7E6B1475523D8F7C046AC86392DF68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__100_2_mF08D33EE71918EAAEBCD49685CEAE2425CF5CB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1__ctor_m27DF3B298A1EAE300EC3C960D227B95CAAD2B06A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1__ctor_m757F3F4A97F75BF5632ED28A48C0D8282A7FEA22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1__ctor_mE440709E14F82653B50641151ADF98E61B0ED598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTask_1__ctor_mEADE5004D872062262E9A9FEF711B559E9A3A57A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t9E34EF668F492B49AE15054E29B579DB11FB9B6A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var;
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389;;
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com;
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com;;
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke;
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke;;
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED;;
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com;
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com;;
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke;
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510;;
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com;
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com;;
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke;
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7;
struct SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA68C56BA69F67ECCD5F9C0E12287C6AB50C95113 
{
};

// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ____items_1;
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

// System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>
struct List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Buffers.MemoryManager`1<System.Byte>
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};

// System.Buffers.MemoryPool`1<System.Byte>
struct MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F  : public RuntimeObject
{
};

// System.Tuple`2<System.Action`1<System.Object>,System.Object>
struct Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Threading.CancellationTokenExtensions
struct CancellationTokenExtensions_t2542E5FF7491BFAE54383725E1BC8253053E3972  : public RuntimeObject
{
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710  : public RuntimeObject
{
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContext_0;
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContextNoFlow
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContextNoFlow_1;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Threading.ExecutionContext::_logicalCallContext
	LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E* ____logicalCallContext_2;
	// System.Runtime.Remoting.Messaging.IllogicalCallContext System.Threading.ExecutionContext::_illogicalCallContext
	IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5* ____illogicalCallContext_3;
	// System.Threading.ExecutionContext/Flags System.Threading.ExecutionContext::_flags
	int32_t ____flags_4;
	// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object> System.Threading.ExecutionContext::_localValues
	Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494* ____localValues_5;
	// System.Collections.Generic.List`1<System.Threading.IAsyncLocal> System.Threading.ExecutionContext::_localChangeNotifications
	List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0* ____localChangeNotifications_6;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.IO.Pipelines.PipeCompletionCallbacks
struct PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback> System.IO.Pipelines.PipeCompletionCallbacks::_callbacks
	List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* ____callbacks_0;
	// System.Exception System.IO.Pipelines.PipeCompletionCallbacks::_exception
	Exception_t* ____exception_1;
};

// System.IO.Pipelines.PipeOptions
struct PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5  : public RuntimeObject
{
	// System.Boolean System.IO.Pipelines.PipeOptions::<UseSynchronizationContext>k__BackingField
	bool ___U3CUseSynchronizationContextU3Ek__BackingField_2;
	// System.Int64 System.IO.Pipelines.PipeOptions::<PauseWriterThreshold>k__BackingField
	int64_t ___U3CPauseWriterThresholdU3Ek__BackingField_3;
	// System.Int64 System.IO.Pipelines.PipeOptions::<ResumeWriterThreshold>k__BackingField
	int64_t ___U3CResumeWriterThresholdU3Ek__BackingField_4;
	// System.Int32 System.IO.Pipelines.PipeOptions::<MinimumSegmentSize>k__BackingField
	int32_t ___U3CMinimumSegmentSizeU3Ek__BackingField_5;
	// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeOptions::<WriterScheduler>k__BackingField
	PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___U3CWriterSchedulerU3Ek__BackingField_6;
	// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeOptions::<ReaderScheduler>k__BackingField
	PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___U3CReaderSchedulerU3Ek__BackingField_7;
	// System.Buffers.MemoryPool`1<System.Byte> System.IO.Pipelines.PipeOptions::<Pool>k__BackingField
	MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* ___U3CPoolU3Ek__BackingField_8;
	// System.Boolean System.IO.Pipelines.PipeOptions::<IsDefaultSharedMemoryPool>k__BackingField
	bool ___U3CIsDefaultSharedMemoryPoolU3Ek__BackingField_9;
	// System.Int32 System.IO.Pipelines.PipeOptions::<InitialSegmentPoolSize>k__BackingField
	int32_t ___U3CInitialSegmentPoolSizeU3Ek__BackingField_10;
	// System.Int32 System.IO.Pipelines.PipeOptions::<MaxSegmentPoolSize>k__BackingField
	int32_t ___U3CMaxSegmentPoolSizeU3Ek__BackingField_11;
};

// System.IO.Pipelines.PipeReader
struct PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135  : public RuntimeObject
{
};

// System.IO.Pipelines.PipeScheduler
struct PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8  : public RuntimeObject
{
};

// System.IO.Pipelines.PipeWriter
struct PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8  : public RuntimeObject
{
};

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t* ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t* ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t* ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t* ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;
};

// FxResources.System.IO.Pipelines.SR
struct SR_t9E34EF668F492B49AE15054E29B579DB11FB9B6A  : public RuntimeObject
{
};

// System.SR
struct SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.IO.Pipelines.ThrowHelper
struct ThrowHelper_t457873F3FD566412375049CB9B2482A8CFCA217A  : public RuntimeObject
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

// System.IO.Pipelines.Pipe/<>c
struct U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143  : public RuntimeObject
{
};

// System.IO.Pipelines.PipeAwaitable/SchedulingContext
struct SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72  : public RuntimeObject
{
	// System.Threading.SynchronizationContext System.IO.Pipelines.PipeAwaitable/SchedulingContext::<SynchronizationContext>k__BackingField
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CSynchronizationContextU3Ek__BackingField_0;
	// System.Threading.ExecutionContext System.IO.Pipelines.PipeAwaitable/SchedulingContext::<ExecutionContext>k__BackingField
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___U3CExecutionContextU3Ek__BackingField_1;
};

// System.IO.Pipelines.ThreadPoolScheduler/<>c
struct U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE  : public RuntimeObject
{
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A 
{
	// System.Object System.Buffers.ReadOnlySequence`1::_startObject
	RuntimeObject* ____startObject_0;
	// System.Object System.Buffers.ReadOnlySequence`1::_endObject
	RuntimeObject* ____endObject_1;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_startInteger
	int32_t ____startInteger_2;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_endInteger
	int32_t ____endInteger_3;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.IO.Pipelines.BufferSegmentStack
struct BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3 
{
	// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType[] System.IO.Pipelines.BufferSegmentStack::_array
	SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* ____array_0;
	// System.Int32 System.IO.Pipelines.BufferSegmentStack::_size
	int32_t ____size_1;
};
// Native definition for P/Invoke marshalling of System.IO.Pipelines.BufferSegmentStack
struct BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshaled_pinvoke
{
	SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke* ____array_0;
	int32_t ____size_1;
};
// Native definition for COM marshalling of System.IO.Pipelines.BufferSegmentStack
struct BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshaled_com
{
	SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com* ____array_0;
	int32_t ____size_1;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.IO.Pipelines.CompletionData
struct CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C 
{
	// System.Action`1<System.Object> System.IO.Pipelines.CompletionData::<Completion>k__BackingField
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CCompletionU3Ek__BackingField_0;
	// System.Object System.IO.Pipelines.CompletionData::<CompletionState>k__BackingField
	RuntimeObject* ___U3CCompletionStateU3Ek__BackingField_1;
	// System.Threading.ExecutionContext System.IO.Pipelines.CompletionData::<ExecutionContext>k__BackingField
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___U3CExecutionContextU3Ek__BackingField_2;
	// System.Threading.SynchronizationContext System.IO.Pipelines.CompletionData::<SynchronizationContext>k__BackingField
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CSynchronizationContextU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of System.IO.Pipelines.CompletionData
struct CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3CCompletionU3Ek__BackingField_0;
	Il2CppIUnknown* ___U3CCompletionStateU3Ek__BackingField_1;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___U3CExecutionContextU3Ek__BackingField_2;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CSynchronizationContextU3Ek__BackingField_3;
};
// Native definition for COM marshalling of System.IO.Pipelines.CompletionData
struct CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshaled_com
{
	Il2CppMethodPointer ___U3CCompletionU3Ek__BackingField_0;
	Il2CppIUnknown* ___U3CCompletionStateU3Ek__BackingField_1;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___U3CExecutionContextU3Ek__BackingField_2;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CSynchronizationContextU3Ek__BackingField_3;
};

// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_tCD284380F0121D65D21BA117E2D6574EBB2365CD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t3861DEE5A3E64E6BA44F4E5DAF468405529015A9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.IO.Pipelines.FlushResult
struct FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E 
{
	// System.IO.Pipelines.ResultFlags System.IO.Pipelines.FlushResult::_resultFlags
	uint8_t ____resultFlags_0;
};

// System.IO.Pipelines.InlineScheduler
struct InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838  : public PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t3AADE74296B2EE527CDCF3E7FF1C16A719488E92  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_tA06B79E13977733430E5CF539FA2B128E89AE69A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tC675B1966CF35FA975B179C5A24E31FEF9AD1F78  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t2E4991B692AC8D3DCC35754DFB2BFD42E0FA7630  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t0D1FC933B843F81952D272094F4A9750490DDAC1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;
};

// System.IO.Pipelines.PipeCompletion
struct PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848 
{
	// System.Object System.IO.Pipelines.PipeCompletion::_state
	RuntimeObject* ____state_1;
	// System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback> System.IO.Pipelines.PipeCompletion::_callbacks
	List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* ____callbacks_2;
};
// Native definition for P/Invoke marshalling of System.IO.Pipelines.PipeCompletion
struct PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshaled_pinvoke
{
	Il2CppIUnknown* ____state_1;
	List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* ____callbacks_2;
};
// Native definition for COM marshalling of System.IO.Pipelines.PipeCompletion
struct PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshaled_com
{
	Il2CppIUnknown* ____state_1;
	List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* ____callbacks_2;
};

// System.IO.Pipelines.PipeCompletionCallback
struct PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 
{
	// System.Action`2<System.Exception,System.Object> System.IO.Pipelines.PipeCompletionCallback::Callback
	Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___Callback_0;
	// System.Object System.IO.Pipelines.PipeCompletionCallback::State
	RuntimeObject* ___State_1;
};
// Native definition for P/Invoke marshalling of System.IO.Pipelines.PipeCompletionCallback
struct PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshaled_pinvoke
{
	Il2CppMethodPointer ___Callback_0;
	Il2CppIUnknown* ___State_1;
};
// Native definition for COM marshalling of System.IO.Pipelines.PipeCompletionCallback
struct PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshaled_com
{
	Il2CppMethodPointer ___Callback_0;
	Il2CppIUnknown* ___State_1;
};

// System.IO.Pipelines.PipeOperationState
struct PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325 
{
	// System.IO.Pipelines.PipeOperationState/State System.IO.Pipelines.PipeOperationState::_state
	uint8_t ____state_0;
};

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_t008419E43F83E17AAB213CEC20594EA6F43A3513  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 System.Runtime.CompilerServices.RefSafetyRulesAttribute::Version
	int32_t ___Version_0;
};

// System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 
{
	// System.Object System.SequencePosition::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;
};
// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.IO.Pipelines.ThreadPoolScheduler
struct ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931  : public PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8
{
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

// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 
{
	// System.IO.Pipelines.BufferSegment System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType::_value
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ____value_0;
};
// Native definition for P/Invoke marshalling of System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke
{
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ____value_0;
};
// Native definition for COM marshalling of System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType
struct SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com
{
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ____value_0;
};

// System.IO.Pipelines.Pipe/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C 
{
	// System.IO.Pipelines.BufferSegment System.IO.Pipelines.Pipe/<>c__DisplayClass67_0::returnEnd
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___returnEnd_0;
	// System.IO.Pipelines.Pipe System.IO.Pipelines.Pipe/<>c__DisplayClass67_0::<>4__this
	Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* ___U3CU3E4__this_1;
};

// System.IO.Pipelines.Pipe/DefaultPipeReader
struct DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5  : public PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135
{
	// System.IO.Pipelines.Pipe System.IO.Pipelines.Pipe/DefaultPipeReader::_pipe
	Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* ____pipe_0;
};

// System.IO.Pipelines.Pipe/DefaultPipeWriter
struct DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE  : public PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8
{
	// System.IO.Pipelines.Pipe System.IO.Pipelines.Pipe/DefaultPipeWriter::_pipe
	Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* ____pipe_0;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Buffers.ReadOnlySequenceSegment`1<System.Byte>
struct ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839  : public RuntimeObject
{
	// System.ReadOnlyMemory`1<T> System.Buffers.ReadOnlySequenceSegment`1::<Memory>k__BackingField
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___U3CMemoryU3Ek__BackingField_0;
	// System.Buffers.ReadOnlySequenceSegment`1<T> System.Buffers.ReadOnlySequenceSegment`1::<Next>k__BackingField
	ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ___U3CNextU3Ek__BackingField_1;
	// System.Int64 System.Buffers.ReadOnlySequenceSegment`1::<RunningIndex>k__BackingField
	int64_t ___U3CRunningIndexU3Ek__BackingField_2;
};

// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>
struct ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
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

// System.IO.Pipelines.ReadResult
struct ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 
{
	// System.Buffers.ReadOnlySequence`1<System.Byte> System.IO.Pipelines.ReadResult::_resultBuffer
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____resultBuffer_0;
	// System.IO.Pipelines.ResultFlags System.IO.Pipelines.ReadResult::_resultFlags
	uint8_t ____resultFlags_1;
};
// Native definition for P/Invoke marshalling of System.IO.Pipelines.ReadResult
struct ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshaled_pinvoke
{
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____resultBuffer_0;
	uint8_t ____resultFlags_1;
};
// Native definition for COM marshalling of System.IO.Pipelines.ReadResult
struct ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshaled_com
{
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____resultBuffer_0;
	uint8_t ____resultFlags_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Threading.Tasks.Task`1<System.IO.Pipelines.ReadResult>
struct Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 ___m_result_38;
};

// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>
struct ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// System.IO.Pipelines.BufferSegment
struct BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373  : public ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839
{
	// System.Buffers.IMemoryOwner`1<System.Byte> System.IO.Pipelines.BufferSegment::_memoryOwner
	RuntimeObject* ____memoryOwner_3;
	// System.Byte[] System.IO.Pipelines.BufferSegment::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_4;
	// System.IO.Pipelines.BufferSegment System.IO.Pipelines.BufferSegment::_next
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ____next_5;
	// System.Int32 System.IO.Pipelines.BufferSegment::_end
	int32_t ____end_6;
	// System.Memory`1<System.Byte> System.IO.Pipelines.BufferSegment::<AvailableMemory>k__BackingField
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___U3CAvailableMemoryU3Ek__BackingField_7;
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

// System.IO.Pipelines.PipeAwaitable
struct PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE 
{
	// System.IO.Pipelines.PipeAwaitable/AwaitableState System.IO.Pipelines.PipeAwaitable::_awaitableState
	int32_t ____awaitableState_0;
	// System.Action`1<System.Object> System.IO.Pipelines.PipeAwaitable::_completion
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____completion_1;
	// System.Object System.IO.Pipelines.PipeAwaitable::_completionState
	RuntimeObject* ____completionState_2;
	// System.IO.Pipelines.PipeAwaitable/SchedulingContext System.IO.Pipelines.PipeAwaitable::_schedulingContext
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* ____schedulingContext_3;
	// System.Threading.CancellationTokenRegistration System.IO.Pipelines.PipeAwaitable::_cancellationTokenRegistration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ____cancellationTokenRegistration_4;
	// System.Threading.CancellationToken System.IO.Pipelines.PipeAwaitable::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_5;
};
// Native definition for P/Invoke marshalling of System.IO.Pipelines.PipeAwaitable
struct PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshaled_pinvoke
{
	int32_t ____awaitableState_0;
	Il2CppMethodPointer ____completion_1;
	Il2CppIUnknown* ____completionState_2;
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* ____schedulingContext_3;
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke ____cancellationTokenRegistration_4;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ____cancellationToken_5;
};
// Native definition for COM marshalling of System.IO.Pipelines.PipeAwaitable
struct PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshaled_com
{
	int32_t ____awaitableState_0;
	Il2CppMethodPointer ____completion_1;
	Il2CppIUnknown* ____completionState_2;
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* ____schedulingContext_3;
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com ____cancellationTokenRegistration_4;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ____cancellationToken_5;
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<System.Exception,System.Object>
struct Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.Pipelines.Pipe
struct Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED  : public RuntimeObject
{
	// System.IO.Pipelines.BufferSegmentStack System.IO.Pipelines.Pipe::_bufferSegmentPool
	BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3 ____bufferSegmentPool_7;
	// System.IO.Pipelines.Pipe/DefaultPipeReader System.IO.Pipelines.Pipe::_reader
	DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* ____reader_8;
	// System.IO.Pipelines.Pipe/DefaultPipeWriter System.IO.Pipelines.Pipe::_writer
	DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* ____writer_9;
	// System.IO.Pipelines.PipeOptions System.IO.Pipelines.Pipe::_options
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* ____options_10;
	// System.Object System.IO.Pipelines.Pipe::_sync
	RuntimeObject* ____sync_11;
	// System.Int64 System.IO.Pipelines.Pipe::_unconsumedBytes
	int64_t ____unconsumedBytes_12;
	// System.Int64 System.IO.Pipelines.Pipe::_unflushedBytes
	int64_t ____unflushedBytes_13;
	// System.IO.Pipelines.PipeAwaitable System.IO.Pipelines.Pipe::_readerAwaitable
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE ____readerAwaitable_14;
	// System.IO.Pipelines.PipeAwaitable System.IO.Pipelines.Pipe::_writerAwaitable
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE ____writerAwaitable_15;
	// System.IO.Pipelines.PipeCompletion System.IO.Pipelines.Pipe::_writerCompletion
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848 ____writerCompletion_16;
	// System.IO.Pipelines.PipeCompletion System.IO.Pipelines.Pipe::_readerCompletion
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848 ____readerCompletion_17;
	// System.Int64 System.IO.Pipelines.Pipe::_lastExaminedIndex
	int64_t ____lastExaminedIndex_18;
	// System.IO.Pipelines.BufferSegment System.IO.Pipelines.Pipe::_readHead
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ____readHead_19;
	// System.Int32 System.IO.Pipelines.Pipe::_readHeadIndex
	int32_t ____readHeadIndex_20;
	// System.Boolean System.IO.Pipelines.Pipe::_disposed
	bool ____disposed_21;
	// System.IO.Pipelines.BufferSegment System.IO.Pipelines.Pipe::_readTail
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ____readTail_22;
	// System.Int32 System.IO.Pipelines.Pipe::_readTailIndex
	int32_t ____readTailIndex_23;
	// System.Int32 System.IO.Pipelines.Pipe::_minimumReadBytes
	int32_t ____minimumReadBytes_24;
	// System.IO.Pipelines.BufferSegment System.IO.Pipelines.Pipe::_writingHead
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ____writingHead_25;
	// System.Memory`1<System.Byte> System.IO.Pipelines.Pipe::_writingHeadMemory
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ____writingHeadMemory_26;
	// System.Int32 System.IO.Pipelines.Pipe::_writingHeadBytesBuffered
	int32_t ____writingHeadBytesBuffered_27;
	// System.IO.Pipelines.PipeOperationState System.IO.Pipelines.Pipe::_operationState
	PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325 ____operationState_28;
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// <Module>

// <Module>

// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields
{
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::<Shared>k__BackingField
	ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ___U3CSharedU3Ek__BackingField_0;
};

// System.Buffers.ArrayPool`1<System.Byte>

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Exception>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>
struct List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>

// System.Buffers.MemoryManager`1<System.Byte>

// System.Buffers.MemoryManager`1<System.Byte>

// System.Buffers.MemoryPool`1<System.Byte>
struct MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F_StaticFields
{
	// System.Buffers.MemoryPool`1<T> System.Buffers.MemoryPool`1::s_shared
	MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* ___s_shared_0;
};

// System.Buffers.MemoryPool`1<System.Byte>

// System.Tuple`2<System.Action`1<System.Object>,System.Object>

// System.Tuple`2<System.Action`1<System.Object>,System.Object>

// System.Tuple`2<System.Object,System.Object>

// System.Tuple`2<System.Object,System.Object>

// System.Attribute

// System.Attribute

// System.Threading.CancellationTokenExtensions

// System.Threading.CancellationTokenExtensions

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticFields
{
	// System.Threading.ExecutionContext System.Threading.ExecutionContext::s_dummyDefaultEC
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___s_dummyDefaultEC_7;
	// System.Threading.ExecutionContext System.Threading.ExecutionContext::Default
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___Default_8;
};

// System.Threading.ExecutionContext

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.IO.Pipelines.PipeCompletionCallbacks

// System.IO.Pipelines.PipeCompletionCallbacks

// System.IO.Pipelines.PipeOptions
struct PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_StaticFields
{
	// System.IO.Pipelines.PipeOptions System.IO.Pipelines.PipeOptions::<Default>k__BackingField
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* ___U3CDefaultU3Ek__BackingField_1;
};

// System.IO.Pipelines.PipeOptions

// System.IO.Pipelines.PipeReader

// System.IO.Pipelines.PipeReader

// System.IO.Pipelines.PipeScheduler
struct PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_StaticFields
{
	// System.IO.Pipelines.ThreadPoolScheduler System.IO.Pipelines.PipeScheduler::s_threadPoolScheduler
	ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931* ___s_threadPoolScheduler_0;
	// System.IO.Pipelines.InlineScheduler System.IO.Pipelines.PipeScheduler::s_inlineScheduler
	InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838* ___s_inlineScheduler_1;
};

// System.IO.Pipelines.PipeScheduler

// System.IO.Pipelines.PipeWriter

// System.IO.Pipelines.PipeWriter

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t* ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;
};

// System.Resources.ResourceManager

// FxResources.System.IO.Pipelines.SR

// FxResources.System.IO.Pipelines.SR

// System.SR
struct SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_StaticFields
{
	// System.Boolean System.SR::s_usingResourceKeys
	bool ___s_usingResourceKeys_0;
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager_1;
};

// System.SR

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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.IO.Pipelines.ThrowHelper

// System.IO.Pipelines.ThrowHelper

// System.ValueType

// System.ValueType

// System.IO.Pipelines.Pipe/<>c
struct U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_StaticFields
{
	// System.IO.Pipelines.Pipe/<>c System.IO.Pipelines.Pipe/<>c::<>9
	U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* ___U3CU3E9_0;
};

// System.IO.Pipelines.Pipe/<>c

// System.IO.Pipelines.PipeAwaitable/SchedulingContext

// System.IO.Pipelines.PipeAwaitable/SchedulingContext

// System.IO.Pipelines.ThreadPoolScheduler/<>c
struct U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_StaticFields
{
	// System.IO.Pipelines.ThreadPoolScheduler/<>c System.IO.Pipelines.ThreadPoolScheduler/<>c::<>9
	U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE* ___U3CU3E9_0;
	// System.Threading.WaitCallback System.IO.Pipelines.ThreadPoolScheduler/<>c::<>9__0_0
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___U3CU3E9__0_0_1;
};

// System.IO.Pipelines.ThreadPoolScheduler/<>c

// System.Memory`1<System.Byte>

// System.Memory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A_StaticFields
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___Empty_4;
};

// System.Buffers.ReadOnlySequence`1<System.Byte>

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.IO.Pipelines.BufferSegmentStack

// System.IO.Pipelines.BufferSegmentStack

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.IO.Pipelines.CompletionData

// System.IO.Pipelines.CompletionData

// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute

// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.IO.Pipelines.FlushResult

// System.IO.Pipelines.FlushResult

// System.IO.Pipelines.InlineScheduler

// System.IO.Pipelines.InlineScheduler

// System.Int16

// System.Int16

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

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute

// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute

// System.IO.Pipelines.PipeCompletion
struct PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_StaticFields
{
	// System.Object System.IO.Pipelines.PipeCompletion::s_completedSuccessfully
	RuntimeObject* ___s_completedSuccessfully_0;
};

// System.IO.Pipelines.PipeCompletion

// System.IO.Pipelines.PipeCompletionCallback

// System.IO.Pipelines.PipeCompletionCallback

// System.IO.Pipelines.PipeOperationState

// System.IO.Pipelines.PipeOperationState

// System.Runtime.CompilerServices.RefSafetyRulesAttribute

// System.Runtime.CompilerServices.RefSafetyRulesAttribute

// System.SequencePosition

// System.SequencePosition

// System.IO.Pipelines.ThreadPoolScheduler

// System.IO.Pipelines.ThreadPoolScheduler

// System.Void

// System.Void

// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType

// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType

// System.IO.Pipelines.Pipe/<>c__DisplayClass67_0

// System.IO.Pipelines.Pipe/<>c__DisplayClass67_0

// System.IO.Pipelines.Pipe/DefaultPipeReader

// System.IO.Pipelines.Pipe/DefaultPipeReader

// System.IO.Pipelines.Pipe/DefaultPipeWriter

// System.IO.Pipelines.Pipe/DefaultPipeWriter

// System.ByReference`1<System.Byte>

// System.ByReference`1<System.Byte>

// System.Buffers.ReadOnlySequenceSegment`1<System.Byte>

// System.Buffers.ReadOnlySequenceSegment`1<System.Byte>

// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>
struct ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_tB31D86779B7CCD322C7C37457181626B2C7CA5DB* ___s_canceledTask_0;
};

// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>

// System.Threading.CancellationTokenRegistration

// System.Threading.CancellationTokenRegistration

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.Pipelines.ReadResult

// System.IO.Pipelines.ReadResult

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Array/RawData

// System.Array/RawData

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.Byte>

// System.Span`1<System.Byte>

// System.Span`1<System.Byte>

// System.Threading.Tasks.Task`1<System.IO.Pipelines.ReadResult>
struct Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t947023137BB140CC89E42C92DCE579190BCA4526* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.IO.Pipelines.ReadResult>

// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>
struct ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* ___s_canceledTask_0;
};

// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>

// System.AggregateException

// System.AggregateException

// System.IO.Pipelines.BufferSegment

// System.IO.Pipelines.BufferSegment

// System.MulticastDelegate

// System.MulticastDelegate

// System.IO.Pipelines.PipeAwaitable

// System.IO.Pipelines.PipeAwaitable

// System.SystemException

// System.SystemException

// System.Type
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

// System.Type

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`2<System.Exception,System.Object>

// System.Action`2<System.Exception,System.Object>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.Object,System.Object>

// System.ArgumentException

// System.ArgumentException

// System.Threading.ContextCallback

// System.Threading.ContextCallback

// System.InvalidOperationException

// System.InvalidOperationException

// System.Resources.MissingManifestResourceException

// System.Resources.MissingManifestResourceException

// System.IO.Pipelines.Pipe
struct Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields
{
	// System.Action`1<System.Object> System.IO.Pipelines.Pipe::s_signalReaderAwaitable
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_signalReaderAwaitable_0;
	// System.Action`1<System.Object> System.IO.Pipelines.Pipe::s_signalWriterAwaitable
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_signalWriterAwaitable_1;
	// System.Action`1<System.Object> System.IO.Pipelines.Pipe::s_invokeCompletionCallbacks
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_invokeCompletionCallbacks_2;
	// System.Threading.ContextCallback System.IO.Pipelines.Pipe::s_executionContextRawCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_executionContextRawCallback_3;
	// System.Threading.SendOrPostCallback System.IO.Pipelines.Pipe::s_syncContextExecutionContextCallback
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_syncContextExecutionContextCallback_4;
	// System.Threading.SendOrPostCallback System.IO.Pipelines.Pipe::s_syncContextExecuteWithoutExecutionContextCallback
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_syncContextExecuteWithoutExecutionContextCallback_5;
	// System.Action`1<System.Object> System.IO.Pipelines.Pipe::s_scheduleWithExecutionContextCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_scheduleWithExecutionContextCallback_6;
};

// System.IO.Pipelines.Pipe

// System.Threading.SendOrPostCallback

// System.Threading.SendOrPostCallback

// System.Threading.WaitCallback

// System.Threading.WaitCallback

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType[]
struct SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264  : public RuntimeArray
{
	ALIGN_FIELD (8) SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 m_Items[1];

	inline SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_0), (void*)NULL);
	}
	inline SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_0), (void*)NULL);
	}
};
// System.IO.Pipelines.PipeCompletionCallback[]
struct PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7  : public RuntimeArray
{
	ALIGN_FIELD (8) PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 m_Items[1];

	inline PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Callback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___State_1), (void*)NULL);
		#endif
	}
	inline PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Callback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___State_1), (void*)NULL);
		#endif
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

IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_pinvoke(const SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510& unmarshaled, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_pinvoke_back(const SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke& marshaled, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510& unmarshaled);
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_pinvoke_cleanup(SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_com(const SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510& unmarshaled, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_com_back(const SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com& marshaled, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510& unmarshaled);
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_com_cleanup(SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke(const CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389& unmarshaled, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back(const CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke& marshaled, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389& unmarshaled);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke(const CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED& unmarshaled, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back(const CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke& marshaled, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED& unmarshaled);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_com(const CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389& unmarshaled, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_com_back(const CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com& marshaled, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389& unmarshaled);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_com_cleanup(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_com(const CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED& unmarshaled, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_com_back(const CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com& marshaled, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED& unmarshaled);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_com_cleanup(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com& marshaled);

// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.ReadOnlyMemory`1<T> System.Memory`1<System.Byte>::op_Implicit(System.Memory`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_memory, const RuntimeMethod* method) ;
// System.Void System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::set_Memory(System.ReadOnlyMemory`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::set_Next(System.Buffers.ReadOnlySequenceSegment`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ___0_value, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Void System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::set_RunningIndex(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Byte>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) ;
// System.Int64 System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::get_RunningIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, const RuntimeMethod* method) ;
// System.Buffers.ReadOnlySequenceSegment`1<T> System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ReadOnlySequenceSegment_1_get_Next_m2D0399C1974F8C84EC006630E4CA359EC2A30497_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySequenceSegment_1__ctor_mE797DC2CAB0C7E2A04FF7DC3B1339247CB94321F_gshared (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisSegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_mAA9FFF578D9CE23FCACA7B1803156EA5DEC40548_gshared (SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// System.Span`1<T> System.Memory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Int32 System.Memory`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::.ctor(TResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_gshared_inline (ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* __this, FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E ___0_result, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::.ctor(System.Threading.Tasks.Sources.IValueTaskSource`1<TResult>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m757F3F4A97F75BF5632ED28A48C0D8282A7FEA22_gshared_inline (ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<System.IO.Pipelines.ReadResult>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* Task_FromCanceled_TisReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_m4644A697A1AD4F64A092EA3F7A86ADF51D5136D8_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_mE440709E14F82653B50641151ADF98E61B0ED598_gshared_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* ___0_task, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>::.ctor(TResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m27DF3B298A1EAE300EC3C960D227B95CAAD2B06A_gshared_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 ___0_result, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>::.ctor(System.Threading.Tasks.Sources.IValueTaskSource`1<TResult>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_mEADE5004D872062262E9A9FEF711B559E9A3A57A_gshared_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
// System.Void System.Buffers.ReadOnlySequence`1<System.Byte>::.ctor(System.Buffers.ReadOnlySequenceSegment`1<T>,System.Int32,System.Buffers.ReadOnlySequenceSegment`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySequence_1__ctor_m74DC3FF576D92A17557DE1331315148047B9F9C0_gshared (ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A* __this, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ___0_startSegment, int32_t ___1_startIndex, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ___2_endSegment, int32_t ___3_endIndex, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlyMemory`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlyMemory`1<System.Byte>::CopyTo(System.Memory`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyMemory_1_CopyTo_m636823FFDFBA21CBEB9482D32A178A058377DE87_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_destination, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlyMemory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m153C30A6621EAA40DCB034B9570D2F85D4F16E79_gshared (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA3E96E178A183FF2A77D2D2416A61C89B69C8994_gshared_inline (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m95A6F25EC14A8041B97D9929825AC0B1978A9BAA_gshared_inline (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 List_1_get_Item_mFB65FC26138A60A746CBE77A6DC92F0F1E380AE7_gshared (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Buffers.MemoryPool`1<T> System.Buffers.MemoryPool`1<System.Byte>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Buffers.BuffersExtensions::Write<System.Byte>(System.Buffers.IBufferWriter`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuffersExtensions_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m580BC994AF77A9E56F26BEEF8A039088A67FF2A1_gshared_inline (RuntimeObject* ___0_writer, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* Tuple_Create_TisRuntimeObject_TisRuntimeObject_mB9E45EDC3450763C550051587640A39E730AF094_gshared (RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB7D0ADFAA6A7B6C848EB81367A9263569856ECC6_inline (const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m623C95771AC4937F036FFD79CBF44A8C23EC6554 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___0_resourceSource, const RuntimeMethod* method) ;
// System.String System.SR::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1 (String_t* ___0_resourceKey, const RuntimeMethod* method) ;
// System.Boolean System.AppContext::TryGetSwitch(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78 (String_t* ___0_switchName, bool* ___1_isEnabled, const RuntimeMethod* method) ;
// System.Memory`1<System.Byte> System.IO.Pipelines.BufferSegment::get_AvailableMemory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 BufferSegment_get_AvailableMemory_mCC8FDB9B97D16405DC1FC731E346B8D7AE823F20_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, int32_t, int32_t, const RuntimeMethod*))Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.ReadOnlyMemory`1<T> System.Memory`1<System.Byte>::op_Implicit(System.Memory`1<T>)
inline ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_memory, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, const RuntimeMethod*))Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_gshared)(___0_memory, method);
}
// System.Void System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::set_Memory(System.ReadOnlyMemory`1<T>)
inline void ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399, const RuntimeMethod*))ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_gshared_inline)(__this, ___0_value, method);
}
// System.Void System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::set_Next(System.Buffers.ReadOnlySequenceSegment`1<T>)
inline void ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, const RuntimeMethod*))ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_gshared_inline)(__this, ___0_value, method);
}
// System.Void System.IO.Pipelines.BufferSegment::set_AvailableMemory(System.Memory`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferSegment_set_AvailableMemory_m17969125D03B14BB2B2729AA58A69FF2D9A278D6_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_value, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::op_Implicit(T[])
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_gshared)(___0_array, method);
}
// System.Void System.IO.Pipelines.BufferSegment::ResetMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_ResetMemory_m0703A585E27D21A9F7BB2CF7641312705D5D4CEB (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::set_RunningIndex(System.Int64)
inline void ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, int64_t, const RuntimeMethod*))ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_gshared_inline)(__this, ___0_value, method);
}
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Byte>::get_Shared()
inline ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline)(method);
}
// System.Int32 System.IO.Pipelines.BufferSegment::get_End()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BufferSegment_get_End_m273C21B558B88E92EB1B8B3B6EE5EF00B405900B_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegment::set_NextSegment(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_set_NextSegment_mE4696A6F2608ACCB7FD29CF328805E80666A0307 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_value, const RuntimeMethod* method) ;
// System.IO.Pipelines.BufferSegment System.IO.Pipelines.BufferSegment::get_NextSegment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* BufferSegment_get_NextSegment_m59FAA272F7120524F4D2E806A7541FBD0D6EFFA5_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) ;
// System.Int64 System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::get_RunningIndex()
inline int64_t ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, const RuntimeMethod*))ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_gshared_inline)(__this, method);
}
// System.Int32 System.IO.Pipelines.BufferSegment::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferSegment_get_Length_m50DFF642D8E228B9E7A6B25F54B3D6FF9F7C3E35 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) ;
// System.Buffers.ReadOnlySequenceSegment`1<T> System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::get_Next()
inline ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ReadOnlySequenceSegment_1_get_Next_m2D0399C1974F8C84EC006630E4CA359EC2A30497_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* (*) (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, const RuntimeMethod*))ReadOnlySequenceSegment_1_get_Next_m2D0399C1974F8C84EC006630E4CA359EC2A30497_gshared_inline)(__this, method);
}
// System.Void System.Buffers.ReadOnlySequenceSegment`1<System.Byte>::.ctor()
inline void ReadOnlySequenceSegment_1__ctor_mE797DC2CAB0C7E2A04FF7DC3B1339247CB94321F (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, const RuntimeMethod*))ReadOnlySequenceSegment_1__ctor_mE797DC2CAB0C7E2A04FF7DC3B1339247CB94321F_gshared)(__this, method);
}
// System.Action`1<System.Object> System.IO.Pipelines.CompletionData::get_Completion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* CompletionData_get_Completion_m38CE7CBB6C0D0387BDA92B1705244ADBDC9008EE_inline (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) ;
// System.Object System.IO.Pipelines.CompletionData::get_CompletionState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompletionData_get_CompletionState_mD9C390FC5F9C9FA139BFB1E0003A3003F95E78B9_inline (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) ;
// System.Threading.ExecutionContext System.IO.Pipelines.CompletionData::get_ExecutionContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5_inline (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.IO.Pipelines.CompletionData::get_SynchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_inline (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.CompletionData::.ctor(System.Action`1<System.Object>,System.Object,System.Threading.ExecutionContext,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionData__ctor_mD47C730410F38D7A6A7FB44E8F0E6DD803679C21 (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_completion, RuntimeObject* ___1_completionState, ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___2_executionContext, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___3_synchronizationContext, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.FlushResult::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlushResult__ctor_m7CEA5006A3A100B4DF694881A0B3BF2E458B6119 (FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* __this, bool ___0_isCanceled, bool ___1_isCompleted, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.FlushResult::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlushResult_get_IsCanceled_m7AECD5F4B712F3240F03483323975095F2984C9E (FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.FlushResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlushResult_get_IsCompleted_m713E197FA03EE8BCF40ECA88AE4A0AB21A7B35D4 (FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.IO.Pipelines.PipeScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeScheduler__ctor_m1EF6FC23D210C406CF13FF7F212B76A9167D8155 (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegmentStack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegmentStack__ctor_m6B0CB1F33A6F6892A4DEDD20ACD08F12CEDF8857 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Int32 System.IO.Pipelines.BufferSegmentStack::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BufferSegmentStack_get_Count_mFA3C00771FF9C4346612D3840AF63892208D1132_inline (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.BufferSegment System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType::op_Implicit(System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* SegmentAsValueType_op_Implicit_m8D9E2F250374B8B841CAFC04DDDFA4A692861103_inline (SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.BufferSegmentStack::TryPop(System.IO.Pipelines.BufferSegment&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSegmentStack_TryPop_m508E947D9D93CE6C685EE7CB8360EFB48BEE4A20 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373** ___0_result, const RuntimeMethod* method) ;
// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType::op_Implicit(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 SegmentAsValueType_op_Implicit_m4930EA901EA4A7E1F8759497C478431E8119C760 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_s, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegmentStack::PushWithResize(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BufferSegmentStack_PushWithResize_mCD9B583854946730061DBFF2601C98B184F69B37 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_item, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegmentStack::Push(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegmentStack_Push_m0E2ED133262877B9AFB20BB47766D870ED958282 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType>(T[]&,System.Int32)
inline void Array_Resize_TisSegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_mAA9FFF578D9CE23FCACA7B1803156EA5DEC40548 (SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264**, int32_t, const RuntimeMethod*))Array_Resize_TisSegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_mAA9FFF578D9CE23FCACA7B1803156EA5DEC40548_gshared)(___0_array, ___1_newSize, method);
}
// System.Void System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType::.ctor(System.IO.Pipelines.BufferSegment)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SegmentAsValueType__ctor_m6C6C805C59D12B3FEDC1304B5A9A65C88B24AD52_inline (SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.PipeOptions::get_UseSynchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PipeOptions_get_UseSynchronizationContext_mE4473BB3D5B22B4BC1AD4E8FDBB5A4D7E8FDFCB1_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Pipelines.PipeOptions::get_MinimumSegmentSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PipeOptions_get_MinimumSegmentSize_mC52E83372686C446536A4EEC660CCA1C15192D56_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.Pipelines.PipeOptions::get_PauseWriterThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t PipeOptions_get_PauseWriterThreshold_mB2E58F62CE58F61DE69BCB7DA3A211051E73CA14_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.Pipelines.PipeOptions::get_ResumeWriterThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t PipeOptions_get_ResumeWriterThreshold_m963B128EE85A5D936A37673D2CF46F82F7305101_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeOptions::get_ReaderScheduler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeOptions_get_ReaderScheduler_m7E646B44166427E661F7FD3074E63C43EE36C950_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeOptions::get_WriterScheduler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeOptions_get_WriterScheduler_mE50E05A9D4CA43B26672BD254CAEF913B5BE91FB_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeOptions System.IO.Pipelines.PipeOptions::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* PipeOptions_get_Default_mAAE5981997B15A561A035FB1EC79278E0B1AB77F_inline (const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::.ctor(System.IO.Pipelines.PipeOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe__ctor_m143CFE985AF52035E032586DDC6990ACBC73FC69 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* ___0_options, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowArgumentNullException(System.IO.Pipelines.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m9FF2C61D01B45E18204A5BCE701802D97C1F9D09 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Int32 System.IO.Pipelines.PipeOptions::get_InitialSegmentPoolSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PipeOptions_get_InitialSegmentPoolSize_m84ED99D156FC807255008132BAAEF4828EC17C53_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.Pipe::get_UseSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pipe_get_UseSynchronizationContext_m6DB7F97095470663FC478129BB08B7AE042D8622 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable__ctor_m303BB55BB1630B1BA62055D31355A4E4134172A1 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, bool ___0_completed, bool ___1_useSynchronizationContext, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe/DefaultPipeReader::.ctor(System.IO.Pipelines.Pipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeReader__ctor_mA2C0F15F3E2BE52CCE4EC06CCC3D9A41506B4881 (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* ___0_pipe, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe/DefaultPipeWriter::.ctor(System.IO.Pipelines.Pipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeWriter__ctor_mBD4595C12F96E1334D7FBCB72221411CA5D24444 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* ___0_pipe, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.PipeCompletion::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_NoWritingAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_NoWritingAllowed_m9EE7C1DDF70E86F4BD14DEEF4F769A2387CF4695 (const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowArgumentOutOfRangeException(System.IO.Pipelines.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::AllocateWriteHeadIfNeeded(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pipe_AllocateWriteHeadIfNeeded_mD1A291629EFE7085BB2A6F97406E5C9A5BCA70BA_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
// System.Span`1<T> System.Memory`1<System.Byte>::get_Span()
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline)(__this, method);
}
// System.Boolean System.IO.Pipelines.PipeOperationState::get_IsWritingActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeOperationState_get_IsWritingActive_mBF1D9C8EBC2FA5CDE6AA16E260C16DC3EE06A38D (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) ;
// System.Int32 System.Memory`1<System.Byte>::get_Length()
inline int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared)(__this, method);
}
// System.Void System.IO.Pipelines.Pipe::AllocateWriteHeadSynchronized(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AllocateWriteHeadSynchronized_m25DFA2C95E8EBEE7396839928509F26FEC5C3412 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
// System.Object System.IO.Pipelines.Pipe::get_SyncObj()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeOperationState::BeginWrite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_BeginWrite_m8ED11EFAC957474574A405906E0160A8022E43D5_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.BufferSegment System.IO.Pipelines.Pipe::AllocateSegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* Pipe_AllocateSegment_mD51EC425B57FB53B5A3D9C00A853464E39B18284 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegment::set_End(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_set_End_m23C3EC2B76C81B8C5B28FDA3AE6160A0549DA8F9 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::RentMemory(System.IO.Pipelines.BufferSegment,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_RentMemory_m023517A287706AE60272CCF753F85D5F8A6414C1 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_segment, int32_t ___1_sizeHint, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegment::SetNext(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_SetNext_m6ED747816806BDD709C5F3EB080472471171FC65 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_segment, const RuntimeMethod* method) ;
// System.IO.Pipelines.BufferSegment System.IO.Pipelines.Pipe::CreateSegmentUnsynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* Pipe_CreateSegmentUnsynchronized_m5DB2499DBCDD4081BDE551E4BFDA9ED547D568A9 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.PipeOptions::get_IsDefaultSharedMemoryPool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PipeOptions_get_IsDefaultSharedMemoryPool_m5B6BF0FEAA3A5F4F5FCE956AB2A34A7FCCD62F3B_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.Buffers.MemoryPool`1<System.Byte> System.IO.Pipelines.PipeOptions::get_Pool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* PipeOptions_get_Pool_mD6F269C640738791A4AF66BE42F36954EE05A90A_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Pipelines.Pipe::GetSegmentSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pipe_GetSegmentSize_m3A41C023722CB01BD2183A443C39910D1687FFCD (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, int32_t ___1_maxBufferSize, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegment::SetOwnedMemory(System.Buffers.IMemoryOwner`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_SetOwnedMemory_mC619C987D489F72B2DD08EFCD5263E96D4189DA2 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, RuntimeObject* ___0_memoryOwner, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegment::SetOwnedMemory(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_SetOwnedMemory_m9E25E86377C83DD338466393AD356CE352B09E3E (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arrayPoolBuffer, const RuntimeMethod* method) ;
// System.Int32 System.IO.Pipelines.Pipe::get_MinimumSegmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pipe_get_MinimumSegmentSize_m5BC3487FB54A1756AACB31A165ED12C68EEE0100 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment__ctor_m81ED5E7AB21B06E6D783AD347EE827FBC628B58D (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Pipelines.PipeOptions::get_MaxSegmentPoolSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PipeOptions_get_MaxSegmentPoolSize_m30B3C81768DC026E9399385494CAA79A22E16F8E_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeOperationState::EndWrite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_EndWrite_m1A6546DCAF0D062B08D8A451AEC6E64927D2D110_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.Pipelines.Pipe::get_PauseWriterThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Pipe_get_PauseWriterThreshold_m0008D494F56460C0AD7E5518FD79E6E712588EBC (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable::SetUncompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeAwaitable_SetUncompleted_mC3B615F389C96AFA5C9D9E63856E4F187E4E520D_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::AdvanceCore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pipe_AdvanceCore_m0D648E24601E1FB21F02B02470B2F28203EB6E0D_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_bytesWritten, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Memory`1<System.Byte>::Slice(System.Int32)
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, int32_t, const RuntimeMethod*))Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_gshared_inline)(__this, ___0_start, method);
}
// System.Void System.IO.Pipelines.Pipe::PrepareFlushUnsynchronized(System.IO.Pipelines.CompletionData&,System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>&,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_PrepareFlushUnsynchronized_m15AAEA817EC6B229CF2648D144AEA61D45C2008A (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* ___1_result, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.Pipe::get_ReaderScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::TrySchedule(System.IO.Pipelines.PipeScheduler,System.IO.Pipelines.CompletionData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___0_scheduler, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___1_completionData, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.Pipe::CommitUnsynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pipe_CommitUnsynchronized_m19023C238F5B601ADC0F8EEC6F2FAF2BF68400D9 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable::BeginOperation(System.Threading.CancellationToken,System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeAwaitable_BeginOperation_mA7883C5AEBE4BFC6F844C8E9554D611FDEFC9612_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.PipeAwaitable::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::GetFlushResult(System.IO.Pipelines.FlushResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_GetFlushResult_m2E157B376EBFFA65B0250C4DFD3238EE59DF7C08 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::.ctor(TResult)
inline void ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_inline (ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* __this, FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E ___0_result, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4*, FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E, const RuntimeMethod*))ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_gshared_inline)(__this, ___0_result, method);
}
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>::.ctor(System.Threading.Tasks.Sources.IValueTaskSource`1<TResult>,System.Int16)
inline void ValueTask_1__ctor_m757F3F4A97F75BF5632ED28A48C0D8282A7FEA22_inline (ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4*, RuntimeObject*, int16_t, const RuntimeMethod*))ValueTask_1__ctor_m757F3F4A97F75BF5632ED28A48C0D8282A7FEA22_gshared_inline)(__this, ___0_source, ___1_token, method);
}
// System.Void System.IO.Pipelines.PipeAwaitable::Complete(System.IO.Pipelines.CompletionData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeCompletionCallbacks System.IO.Pipelines.PipeCompletion::TryComplete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_TryComplete_m5B8D597F7946C1711C8BFE7A5A8F932B6588EFC8 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::CompletePipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CompletePipe_m98F43F3512B52D256FB6DBA7F1029E458A7FF609 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::ScheduleCallbacks(System.IO.Pipelines.PipeScheduler,System.IO.Pipelines.PipeCompletionCallbacks)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_ScheduleCallbacks_mEEC18B3DEDA42F96760ECEC8625D2E32E28F33E3 (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___0_scheduler, PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* ___1_completionCallbacks, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::AdvanceReader(System.SequencePosition&,System.SequencePosition&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AdvanceReader_mFB33553F0AE7B4E1FA38098FABCD5359E80EBE00 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* ___0_consumed, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* ___1_examined, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_NoReadingAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_NoReadingAllowed_mFD0ED21F5A03F9232D4592DEE3E90E1BC43E695F (const RuntimeMethod* method) ;
// System.Object System.SequencePosition::GetObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m04F459B1FE3E46A74C1AB83B9CEE47B0B3969789_inline (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, const RuntimeMethod* method) ;
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mC0CBD9B4F6DF6205A30F76497C27C063AA7C3D0B_inline (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::AdvanceReader(System.IO.Pipelines.BufferSegment,System.Int32,System.IO.Pipelines.BufferSegment,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AdvanceReader_m4F784E1E64B429E88C3E52F29C6D4B8C13DD303B (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_consumedSegment, int32_t ___1_consumedIndex, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___2_examinedSegment, int32_t ___3_examinedIndex, const RuntimeMethod* method) ;
// System.Int64 System.IO.Pipelines.BufferSegment::GetLength(System.IO.Pipelines.BufferSegment,System.Int32,System.IO.Pipelines.BufferSegment,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BufferSegment_GetLength_mB95FA15C589777E586F870EA9D34DBD1EC3B61AB_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_startSegment, int32_t ___1_startIndex, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___2_endSegment, int32_t ___3_endIndex, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_InvalidExaminedOrConsumedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidExaminedOrConsumedPosition_m603884FB87ABE71205CE6CB2DF53D1227C37D5D4 (const RuntimeMethod* method) ;
// System.Int64 System.IO.Pipelines.BufferSegment::GetLength(System.Int64,System.IO.Pipelines.BufferSegment,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BufferSegment_GetLength_m129BF3AB9FB45C20EA8E55849DB74BD4C902B08E_inline (int64_t ___0_startPosition, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___1_endSegment, int32_t ___2_endIndex, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_InvalidExaminedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidExaminedPosition_mABA820684341FF9D6D6C3BFB0DBA21738AADA32C (const RuntimeMethod* method) ;
// System.Int64 System.IO.Pipelines.Pipe::get_ResumeWriterThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Pipe_get_ResumeWriterThreshold_m1E3B9BD5C95B12AD1CE32C4306E3FA60919CF6A2 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_AdvanceToInvalidCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_AdvanceToInvalidCursor_mC800A30BF62F718FEC7B0F98FD5878BCFC68E73C (const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::<AdvanceReader>g__MoveReturnEndToNextBlock|67_0(System.IO.Pipelines.Pipe/<>c__DisplayClass67_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_U3CAdvanceReaderU3Eg__MoveReturnEndToNextBlockU7C67_0_m1AC19462597E4CBB982E5FC31303B8A39890D7E1 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C* ___0_p, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.BufferSegment::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_Reset_m37BBCF32F50BAF795C7BF21EAA89CC314F13BE47 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::ReturnSegmentUnsynchronized(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_ReturnSegmentUnsynchronized_mD4CCCF3C58AC4CA2CB2F98BB34B8AE9760D5C7E1 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_segment, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeOperationState::EndRead()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_EndRead_m592D8ECEEF5BD6E0E527C028B0618E13AC20A17B_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.Pipe::get_WriterScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.PipeOperationState::get_IsReadingActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeOperationState_get_IsReadingActive_m61DD1F887EAFBB136FCFC46CE7928EF2367B6F34 (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeCompletionCallbacks System.IO.Pipelines.PipeCompletion::AddCallback(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_AddCallback_m77D9C6DAAF928586211719529948DB8B00DD5CC7 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable::Cancel(System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_Cancel_m0734BDB32F8210AA45ED03460148B6A12E2ED29F (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<System.IO.Pipelines.ReadResult>(System.Threading.CancellationToken)
inline Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* Task_FromCanceled_TisReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_m4644A697A1AD4F64A092EA3F7A86ADF51D5136D8 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_FromCanceled_TisReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_m4644A697A1AD4F64A092EA3F7A86ADF51D5136D8_gshared)(___0_cancellationToken, method);
}
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void ValueTask_1__ctor_mE440709E14F82653B50641151ADF98E61B0ED598_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA*, Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187*, const RuntimeMethod*))ValueTask_1__ctor_mE440709E14F82653B50641151ADF98E61B0ED598_gshared_inline)(__this, ___0_task, method);
}
// System.Void System.IO.Pipelines.Pipe::GetReadResult(System.IO.Pipelines.ReadResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_GetReadResult_mE381A634DAC41A4DC5B2A469FE74168B7827DDC1 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>::.ctor(TResult)
inline void ValueTask_1__ctor_m27DF3B298A1EAE300EC3C960D227B95CAAD2B06A_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA*, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644, const RuntimeMethod*))ValueTask_1__ctor_m27DF3B298A1EAE300EC3C960D227B95CAAD2B06A_gshared_inline)(__this, ___0_result, method);
}
// System.Void System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult>::.ctor(System.Threading.Tasks.Sources.IValueTaskSource`1<TResult>,System.Int16)
inline void ValueTask_1__ctor_mEADE5004D872062262E9A9FEF711B559E9A3A57A_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA*, RuntimeObject*, int16_t, const RuntimeMethod*))ValueTask_1__ctor_mEADE5004D872062262E9A9FEF711B559E9A3A57A_gshared_inline)(__this, ___0_source, ___1_token, method);
}
// System.Boolean System.IO.Pipelines.PipeAwaitable::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeAwaitable_get_IsRunning_m785D828B5D168DF3640E49A3A053C3DCB93F06CA (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_AlreadyReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF (const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeOperationState::BeginReadTentative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_BeginReadTentative_mDF3FDE2C7FBEA5B5A576420DCC399C670253316B_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::ScheduleWithContext(System.IO.Pipelines.PipeScheduler,System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Pipe_ScheduleWithContext_m80969848A1D8D1E22B1051D5B7790D6BD080C7D9 (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___0_scheduler, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___1_completionData, const RuntimeMethod* method) ;
// System.Void System.Threading.ExecutionContext::Run(System.Threading.ExecutionContext,System.Threading.ContextCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_Run_m9C6E6249D96EA4974FD420E5FF141C221C9C1BE5 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.PipeCompletion::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeCompletion_get_IsFaulted_m2F255C9CFC47565457BF3694836741D706BBDE8A (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable::OnCompleted(System.Action`1<System.Object>,System.Object,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags,System.IO.Pipelines.CompletionData&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_OnCompleted_m281E875FBB8A8BB3BDAE663FCCB6D8850EC64C89 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int32_t ___2_flags, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___3_completionData, bool* ___4_doubleCompletion, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeWriter System.IO.Pipelines.Pipe::get_Writer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8* Pipe_get_Writer_mD442001BC04EE87D78C2B27E2987ADAAFBE8A0D5_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_NoConcurrentOperation()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_NoConcurrentOperation_m1C7F04504CA2B6F2E31342929B771D426BC53C80 (const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_GetResultNotCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_GetResultNotCompleted_m68687070E4FAC351F1D818D97EF44432AC9BDDCD (const RuntimeMethod* method) ;
// System.Threading.CancellationTokenRegistration System.IO.Pipelines.PipeAwaitable::ReleaseCancellationTokenRegistration(System.Threading.CancellationToken&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 PipeAwaitable_ReleaseCancellationTokenRegistration_m8439D89D7A06A4B86DB060A279B2A43648DB8505_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.ReadResult::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadResult_get_IsCanceled_m03BDA3AA806DFEF700B726CB9FF4B3134A3EC974 (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.PipeCompletion::IsCompletedOrThrow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PipeCompletion_IsCompletedOrThrow_m119F9ECC0F21F2999A76CD762E8BB45EDCFA031F_inline (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.PipeAwaitable::ObserveCancellation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PipeAwaitable_ObserveCancellation_m1A6012106CF7DFEB8D6CD3155C7EF727D4A40BED_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.ReadOnlySequence`1<System.Byte>::.ctor(System.Buffers.ReadOnlySequenceSegment`1<T>,System.Int32,System.Buffers.ReadOnlySequenceSegment`1<T>,System.Int32)
inline void ReadOnlySequence_1__ctor_m74DC3FF576D92A17557DE1331315148047B9F9C0 (ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A* __this, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ___0_startSegment, int32_t ___1_startIndex, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ___2_endSegment, int32_t ___3_endIndex, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A*, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, int32_t, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*, int32_t, const RuntimeMethod*))ReadOnlySequence_1__ctor_m74DC3FF576D92A17557DE1331315148047B9F9C0_gshared)(__this, ___0_startSegment, ___1_startIndex, ___2_endSegment, ___3_endIndex, method);
}
// System.Void System.IO.Pipelines.ReadResult::.ctor(System.Buffers.ReadOnlySequence`1<System.Byte>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadResult__ctor_m7AC1F674D50780D7B40EDF84B685699A6633F269 (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___0_buffer, bool ___1_isCanceled, bool ___2_isCompleted, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeOperationState::BeginRead()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_BeginRead_mEC431AD546BABA74218A38691A958B0C88FE39AA_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlyMemory`1<System.Byte>::get_Length()
inline int32_t ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, const RuntimeMethod*))ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_gshared)(__this, method);
}
// System.Void System.ReadOnlyMemory`1<System.Byte>::CopyTo(System.Memory`1<T>)
inline void ReadOnlyMemory_1_CopyTo_m636823FFDFBA21CBEB9482D32A178A058377DE87 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, const RuntimeMethod*))ReadOnlyMemory_1_CopyTo_m636823FFDFBA21CBEB9482D32A178A058377DE87_gshared)(__this, ___0_destination, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlyMemory`1<System.Byte>::get_Span()
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, const RuntimeMethod*))ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline)(__this, method);
}
// System.Void System.IO.Pipelines.Pipe::WriteMultiSegment(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_WriteMultiSegment_mDAFFA035F90B24DB8342353D23271B67A0E21B47 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared)(__this, ___0_destination, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___0_start, method);
}
// System.IO.Pipelines.PipeReader System.IO.Pipelines.Pipe::get_Reader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135* Pipe_get_Reader_mC3B7234B16037A59B3719BD059A977BF2C3153C9_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable::CancellationTokenFired(System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_CancellationTokenFired_m0472E73439597ACFF16C1B3507F16716DDC77BBD (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Threading.ContextCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback__ctor_mE29213BA3FC5DDDBF194D6D58A4E51F309FD98FA (ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeReader__ctor_mAEFF56D3E0D6F1E1150CF0D0ED95A497408B5078 (PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.Pipe::TryRead(System.IO.Pipelines.ReadResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pipe_TryRead_m7BE95545BB7685F9E3FBB5ED84EA2CBC586FDA60 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* ___0_result, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult> System.IO.Pipelines.Pipe::ReadAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA Pipe_ReadAsync_mFF8EC5336168A98DEB518FBDA04E8631E6135A53 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_token, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::AdvanceReader(System.SequencePosition&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AdvanceReader_m834BDFD19E42C65B6A24845D43ADE3F3FE04F65C (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* ___0_consumed, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::CancelPendingRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CancelPendingRead_mD01B0070C7532DD9877991BCCBFEECF9E653921A (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::CompleteReader(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CompleteReader_m1BDDF7322D2DCDF8553994304DE25BB74B69AC0F (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::OnWriterCompleted(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_OnWriterCompleted_m82DB33DF1D4BDFD2A21C265F6CFE6EA99F65AAA8 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Threading.Tasks.Sources.ValueTaskSourceStatus System.IO.Pipelines.Pipe::GetReadAsyncStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pipe_GetReadAsyncStatus_mC9660F294FE13F6C6C6DBFF5FB2F7EB9CFAF5100 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.ReadResult System.IO.Pipelines.Pipe::GetReadAsyncResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 Pipe_GetReadAsyncResult_m545D93975494BF9F8F4D3E120C13C055D52EB725 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::OnReadAsyncCompleted(System.Action`1<System.Object>,System.Object,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_OnReadAsyncCompleted_m3F480015C17CCD7A1A68AA980E2A79E63DA790A5 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int32_t ___2_flags, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeWriter__ctor_m1714F183C14A6E33FD4F53327B640BFE5C0C3C50 (PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::CompleteWriter(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CompleteWriter_m098E7A23D08352B3CED1911AC2AF7C4E667E5553 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::CancelPendingFlush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CancelPendingFlush_mA8A6724542CE64736535B318DEFD00282345D328 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::OnReaderCompleted(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_OnReaderCompleted_mB4BB37450BC5E108DAC02AF7FDC68B3703FA313A (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.Pipe::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 Pipe_FlushAsync_mCF7F7C094F0CE64BBB853AD02E2BB00B09C5EAC3 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_Advance_m1EE7BB0BB6B2485D4C6E33D7A668D04B704774EF (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
// System.Memory`1<System.Byte> System.IO.Pipelines.Pipe::GetMemory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Pipe_GetMemory_m495FEA0DF901A0727BA3298F2C766F7020FE6706 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
// System.Span`1<System.Byte> System.IO.Pipelines.Pipe::GetSpan(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Pipe_GetSpan_mF7CF8E66E41F9568D15899981E5B843430AB6425 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
// System.Threading.Tasks.Sources.ValueTaskSourceStatus System.IO.Pipelines.Pipe::GetFlushAsyncStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pipe_GetFlushAsyncStatus_m7973C183D3F3818C52E8B1BF50179B64F5F876A3 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.IO.Pipelines.FlushResult System.IO.Pipelines.Pipe::GetFlushAsyncResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E Pipe_GetFlushAsyncResult_mFD447A9A765EA159CE118089A0705208DDED4027 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::OnFlushAsyncCompleted(System.Action`1<System.Object>,System.Object,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_OnFlushAsyncCompleted_m5FC7040B9B22781F788D5C7D81B7FC0B28D6AF50 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int32_t ___2_flags, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.Pipe::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 Pipe_WriteAsync_m0FB6B53C2C140C218267E648B49E9FD0CE9CF022 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEDE51E1BBED58AB9951747FB73E6EB7CA1FDDAA1 (U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::ReaderCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_ReaderCancellationRequested_m2FBB1812D8FBF6C5FFBCA11A9007ADFFD5E7915A (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.Pipe::WriterCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_WriterCancellationRequested_mAA88238E010CD60F97A8731DD5A955FC9277B159 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeCompletionCallbacks::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletionCallbacks_Execute_mCAA6A897096D03BD69ECFBD284AFEC57E5DC7BCD (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.IO.Pipelines.PipeAwaitable::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED PipeAwaitable_get_CancellationToken_mF64DF2BF00761E71C099B47BF9FB766C38F61C21_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenExtensions::UnsafeRegister(System.Threading.CancellationToken,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationTokenExtensions_UnsafeRegister_m5DC52D726331A0941041962243118F2864A7D277 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationTokenRegistration::op_Equality(System.Threading.CancellationTokenRegistration,System.Threading.CancellationTokenRegistration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationTokenRegistration_op_Equality_m3065B0BF864E200DEF5E730A284E8CF07B755FBE (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___0_left, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___1_right, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable::ExtractCompletion(System.IO.Pipelines.CompletionData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeAwaitable_ExtractCompletion_mF3441339276A5F9205F753A687629255D8718257_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) ;
// System.Threading.ExecutionContext System.IO.Pipelines.PipeAwaitable/SchedulingContext::get_ExecutionContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* SchedulingContext_get_ExecutionContext_mAC0B4BACB8A4F02BB3F96180FFD67E77F3DEA2BD_inline (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.IO.Pipelines.PipeAwaitable/SchedulingContext::get_SynchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SchedulingContext_get_SynchronizationContext_m54BD83B94570F8D15827BF93F1459FFCBCE32344_inline (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable/SchedulingContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulingContext__ctor_m50BF10A0E460DA5E17ABFCA3B577F3006E5E34AA (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable/SchedulingContext::set_SynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchedulingContext_set_SynchronizationContext_m50C6F4B4C2DED193662E298CF49C60DFF34C5CF5_inline (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) ;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F (const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeAwaitable/SchedulingContext::set_ExecutionContext(System.Threading.ExecutionContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchedulingContext_set_ExecutionContext_mBB5425998CCCAD4D39356A222294303ECAFF825F_inline (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_value, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
// System.IO.Pipelines.PipeCompletionCallbacks System.IO.Pipelines.PipeCompletion::GetCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_GetCallbacks_mD3E3E1146A2B6C0C0E98FB71604C5CFE5F0BD938 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>::.ctor()
inline void List_1__ctor_m153C30A6621EAA40DCB034B9570D2F85D4F16E79 (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3*, const RuntimeMethod*))List_1__ctor_m153C30A6621EAA40DCB034B9570D2F85D4F16E79_gshared)(__this, method);
}
// System.Void System.IO.Pipelines.PipeCompletionCallback::.ctor(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletionCallback__ctor_mC5FA5B719FD78F82FE4BB4A3AFBEC9A752A7C5A8 (PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>::Add(T)
inline void List_1_Add_mA3E96E178A183FF2A77D2D2416A61C89B69C8994_inline (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3*, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467, const RuntimeMethod*))List_1_Add_mA3E96E178A183FF2A77D2D2416A61C89B69C8994_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeCompletionCallbacks::.ctor(System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>,System.Runtime.ExceptionServices.ExceptionDispatchInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletionCallbacks__ctor_m6BBA375FDE18C8BE7F9B111AE5E95A41FFE2BF4F (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* __this, List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* ___0_callbacks, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___1_edi, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String System.IO.Pipelines.PipeCompletion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PipeCompletion_ToString_m4C75B72EDC7B72EF7427CA9939C11A54915A0EB3 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) ;
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>::get_Count()
inline int32_t List_1_get_Count_m95A6F25EC14A8041B97D9929825AC0B1978A9BAA_inline (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3*, const RuntimeMethod*))List_1_get_Count_m95A6F25EC14A8041B97D9929825AC0B1978A9BAA_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>::get_Item(System.Int32)
inline PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 List_1_get_Item_mFB65FC26138A60A746CBE77A6DC92F0F1E380AE7 (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 (*) (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3*, int32_t, const RuntimeMethod*))List_1_get_Item_mFB65FC26138A60A746CBE77A6DC92F0F1E380AE7_gshared)(__this, ___0_index, method);
}
// System.Void System.IO.Pipelines.PipeCompletionCallbacks::Execute(System.IO.Pipelines.PipeCompletionCallback,System.Collections.Generic.List`1<System.Exception>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletionCallbacks_Execute_mBC649D3C719115EDA524201362D6ABCF10D9BF1C (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* __this, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 ___0_callback, List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B** ___1_exceptions, const RuntimeMethod* method) ;
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, RuntimeObject* ___0_innerExceptions, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Exception,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_m6E35FD558216D33795953798127D7867CCDDB285_inline (Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* __this, Exception_t* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645*, Exception_t*, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
inline void List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
inline void List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, Exception_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, Exception_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Buffers.MemoryPool`1<T> System.Buffers.MemoryPool`1<System.Byte>::get_Shared()
inline MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_inline (const RuntimeMethod* method)
{
	return ((  MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* (*) (const RuntimeMethod*))MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_gshared_inline)(method);
}
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeScheduler::get_ThreadPool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeScheduler_get_ThreadPool_m229EDC30FFBFE817F0B1083103985531C7633838_inline (const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.PipeOptions::.ctor(System.Buffers.MemoryPool`1<System.Byte>,System.IO.Pipelines.PipeScheduler,System.IO.Pipelines.PipeScheduler,System.Int64,System.Int64,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeOptions__ctor_m418D5B51703288FEB02D86E5624B903807ABF7BA (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* ___0_pool, PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___1_readerScheduler, PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___2_writerScheduler, int64_t ___3_pauseWriterThreshold, int64_t ___4_resumeWriterThreshold, int32_t ___5_minimumSegmentSize, bool ___6_useSynchronizationContext, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_NoReadToComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_NoReadToComplete_m784A80383D9030FC7C40A6EC6006BF538FD1EBCF (const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThreadPoolScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler__ctor_m57748AB9CC417057AEEC2312B60C19D178AAD353 (ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.InlineScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineScheduler__ctor_m6349295046DFCFE24C8F74E61B90257BFC7B6178 (InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.BuffersExtensions::Write<System.Byte>(System.Buffers.IBufferWriter`1<T>,System.ReadOnlySpan`1<T>)
inline void BuffersExtensions_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m580BC994AF77A9E56F26BEEF8A039088A67FF2A1_inline (RuntimeObject* ___0_writer, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))BuffersExtensions_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m580BC994AF77A9E56F26BEEF8A039088A67FF2A1_gshared_inline)(___0_writer, ___1_value, method);
}
// System.Buffers.ReadOnlySequence`1<System.Byte> System.IO.Pipelines.ReadResult::get_Buffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ReadResult_get_Buffer_m0D4097DA5018BAC20BD1FF7C5D86650F3E185A6E_inline (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Pipelines.ReadResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadResult_get_IsCompleted_mFF89177467C735987A481F1C335DBB09FDA682D7 (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateArgumentOutOfRangeException(System.IO.Pipelines.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_m914D4E8D95E2454E2EF6216675E91B3C2349E948 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateArgumentNullException(System.IO.Pipelines.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentNullException_mD80A525F65B7CB7C4C92562A2969B78E19813C24 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_AlreadyReading()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_AlreadyReading_m5E5F558728DBBE5C40CD46864382171B924CF095 (const RuntimeMethod* method) ;
// System.String System.SR::get_ReadingIsInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ReadingIsInProgress_m4B0A425DCA2ABC82002EEDA241451D27D5D3BAB1 (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_NoReadToComplete()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_NoReadToComplete_m8C7C1169D8D39F882138DD49AC162B47903C8639 (const RuntimeMethod* method) ;
// System.String System.SR::get_NoReadingOperationToComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NoReadingOperationToComplete_m20875E51812772224BC85B5138C86C97D7674B4A (const RuntimeMethod* method) ;
// System.String System.SR::get_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ConcurrentOperationsNotSupported_m2D14731C8250E35A40DA23696EC4A8D1D318A1D6 (const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_GetResultNotCompleted()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_GetResultNotCompleted_m7A488488F249BF24135B383384A6A4679B005D74 (const RuntimeMethod* method) ;
// System.String System.SR::get_GetResultBeforeCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_GetResultBeforeCompleted_m57338EEAAAB2D2788A8C19DA51FCD85BA548BBC1 (const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_NoWritingAllowed()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_NoWritingAllowed_m40D642D1F1F574B6F7EA1D037853DE4E7A0FCCDF (const RuntimeMethod* method) ;
// System.String System.SR::get_WritingAfterCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_WritingAfterCompleted_m32023D8FDC565232B0EDC0D59A5382E5CC8850D6 (const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_NoReadingAllowed()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_NoReadingAllowed_mFCD244CE1D6DB2B59EBB9A0A9CFD347F044B52C6 (const RuntimeMethod* method) ;
// System.String System.SR::get_ReadingAfterCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ReadingAfterCompleted_m42DCCD19AF88FCE51084AE674CB52DEFF1883A7A (const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_InvalidExaminedPosition()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_InvalidExaminedPosition_m7CB62E9BB216E5C27390EE42EDA1193EE780458B (const RuntimeMethod* method) ;
// System.String System.SR::get_InvalidExaminedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidExaminedPosition_mF50D6EF1F5E0E107B8D55E1DF7B1179A8C155AF9 (const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_InvalidExaminedOrConsumedPosition()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_InvalidExaminedOrConsumedPosition_mC1E322A2A254D400CE1A4B6E5E1AA9818CD2C9F0 (const RuntimeMethod* method) ;
// System.String System.SR::get_InvalidExaminedOrConsumedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidExaminedOrConsumedPosition_m52513C37F8E6F52A874D09D7F20613330CA31729 (const RuntimeMethod* method) ;
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_AdvanceToInvalidCursor()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_AdvanceToInvalidCursor_mC7ED4BF5907AD1C5AD50F9222281070E1C9C82A6 (const RuntimeMethod* method) ;
// System.String System.SR::get_AdvanceToInvalidCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_AdvanceToInvalidCursor_m541FD316F410045743697676207B8FCC4D27E0C7 (const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Action`1<System.Object>,System.Object>(T1,T2)
inline Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method)
{
	return ((  Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisRuntimeObject_mB9E45EDC3450763C550051587640A39E730AF094_gshared)(___0_item1, ___1_item2, method);
}
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void System.IO.Pipelines.ThreadPoolScheduler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5144C3D7F061E4187274ACC43C85F8093DEFDD5A (U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Action`1<System.Object>,System.Object>::get_Item1()
inline Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* Tuple_2_get_Item1_m8EE9690D63602500CB421876A29C083C1A948835_inline (Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* __this, const RuntimeMethod* method)
{
	return ((  Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* (*) (Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<System.Action`1<System.Object>,System.Object>::get_Item2()
inline RuntimeObject* Tuple_2_get_Item2_m8C35776EFFA9FB3C7A564460C2B7BF43AF056CA2_inline (Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Void System.Memory`1<System.Byte>::.ctor(System.Object,System.Int32,System.Int32)
inline void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline)(__this, ___0_obj, ___1_start, ___2_length, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mDE4506476FEA7F1FB5D1D59EF6CC3082C2DD2344 (EmbeddedAttribute_t3861DEE5A3E64E6BA44F4E5DAF468405529015A9* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m27BBC7D62D30FE97EDAB39E8978F2E5C4E5DFA94 (IsReadOnlyAttribute_t3AADE74296B2EE527CDCF3E7FF1C16A719488E92* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m14831736E55CB0A9E689D3D79FF104008A66D8B3 (NullableAttribute_tC675B1966CF35FA975B179C5A24E31FEF9AD1F78* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m2E1DB728C2949B07E19C047744DE53E1937D369C (NullableAttribute_tC675B1966CF35FA975B179C5A24E31FEF9AD1F78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		__this->___NullableFlags_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_0);
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
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_mCD684606E2C697D9139F3B0E5EBEB06729F4D1C0 (NullableContextAttribute_t2E4991B692AC8D3DCC35754DFB2BFD42E0FA7630* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag_0 = L_0;
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
// System.Void System.Runtime.CompilerServices.NullablePublicOnlyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_mA31E34FF5F7A4EED3C052F7B81960E3D110BA06C (NullablePublicOnlyAttribute_t0D1FC933B843F81952D272094F4A9750490DDAC1* __this, bool ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___0_p;
		__this->___IncludesInternals_0 = L_0;
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
// System.Void System.Runtime.CompilerServices.RefSafetyRulesAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_m0ADDD673E3EDB4F05900C71D76C06FA22D5416AD (RefSafetyRulesAttribute_t008419E43F83E17AAB213CEC20594EA6F43A3513* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_p;
		__this->___Version_0 = L_0;
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
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB7D0ADFAA6A7B6C848EB81367A9263569856ECC6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
// System.String System.SR::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1 (String_t* ___0_resourceKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB7D0ADFAA6A7B6C848EB81367A9263569856ECC6_inline(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___0_resourceKey;
		return L_1;
	}

IL_0009:
	{
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_2;
		L_2 = SR_get_ResourceManager_m623C95771AC4937F036FFD79CBF44A8C23EC6554(NULL);
		String_t* L_3 = ___0_resourceKey;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_2, L_3);
		V_0 = L_4;
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m623C95771AC4937F036FFD79CBF44A8C23EC6554 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t9E34EF668F492B49AE15054E29B579DB11FB9B6A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var))->___s_resourceManager_1;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_t9E34EF668F492B49AE15054E29B579DB11FB9B6A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		((SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var))->___s_resourceManager_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var))->___s_resourceManager_1), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_AdvanceToInvalidCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_AdvanceToInvalidCursor_m541FD316F410045743697676207B8FCC4D27E0C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5BC345FC82A0E5D579DBB69B9825CEFF3A1FBF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteralF5BC345FC82A0E5D579DBB69B9825CEFF3A1FBF4, NULL);
		return L_0;
	}
}
// System.String System.SR::get_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ConcurrentOperationsNotSupported_m2D14731C8250E35A40DA23696EC4A8D1D318A1D6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BCF7DD9EBFA93CAF0C5039BF18BE68B20513C80);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteral6BCF7DD9EBFA93CAF0C5039BF18BE68B20513C80, NULL);
		return L_0;
	}
}
// System.String System.SR::get_GetResultBeforeCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_GetResultBeforeCompleted_m57338EEAAAB2D2788A8C19DA51FCD85BA548BBC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AE6EA0880C54858BC3F5E785A6C2C328C94CBF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteral3AE6EA0880C54858BC3F5E785A6C2C328C94CBF1, NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidExaminedOrConsumedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidExaminedOrConsumedPosition_m52513C37F8E6F52A874D09D7F20613330CA31729 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral035B148982D5A742B2D0D91F84B875E581D514CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteral035B148982D5A742B2D0D91F84B875E581D514CC, NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidExaminedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidExaminedPosition_mF50D6EF1F5E0E107B8D55E1DF7B1179A8C155AF9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C26551FA3A2996DE499577BD207FD6121130D28);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteral4C26551FA3A2996DE499577BD207FD6121130D28, NULL);
		return L_0;
	}
}
// System.String System.SR::get_NoReadingOperationToComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NoReadingOperationToComplete_m20875E51812772224BC85B5138C86C97D7674B4A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE413266BEA683ECEA0AC3196898A978430405FD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteralE413266BEA683ECEA0AC3196898A978430405FD3, NULL);
		return L_0;
	}
}
// System.String System.SR::get_ReadingAfterCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ReadingAfterCompleted_m42DCCD19AF88FCE51084AE674CB52DEFF1883A7A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CC5DE89EB3C64D378C96D8271F7CAC87988DAB6);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteral5CC5DE89EB3C64D378C96D8271F7CAC87988DAB6, NULL);
		return L_0;
	}
}
// System.String System.SR::get_ReadingIsInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ReadingIsInProgress_m4B0A425DCA2ABC82002EEDA241451D27D5D3BAB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F39F88BE4FF6C66634BA34AAA7495A2A18243AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteral1F39F88BE4FF6C66634BA34AAA7495A2A18243AE, NULL);
		return L_0;
	}
}
// System.String System.SR::get_WritingAfterCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_WritingAfterCompleted_m32023D8FDC565232B0EDC0D59A5382E5CC8850D6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD06A2175494A75BCA35782C11977EA005DE6E0B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m9190D86BEDE6849F9710E7FD3A16FC81D9A5D6E1(_stringLiteralD06A2175494A75BCA35782C11977EA005DE6E0B3, NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m69081FAD86BABFE66FD249305C0973E42C460AD4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78(_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6, (&V_0), NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		bool L_1 = V_0;
		G_B3_0 = ((int32_t)(L_1));
	}

IL_0012:
	{
		((SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0 = (bool)G_B3_0;
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullWhenAttribute__ctor_mAF7FD6D13E617AC1E132502734D46F1BD1713E8A (NotNullWhenAttribute_tA06B79E13977733430E5CF539FA2B128E89AE69A* __this, bool ___0_returnValue, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___0_returnValue;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnAttribute__ctor_m0658DDEC60CDE9CD76AB3FEE76C75D5316F899EB (DoesNotReturnAttribute_tCD284380F0121D65D21BA117E2D6574EBB2365CD* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Int32 System.IO.Pipelines.BufferSegment::get_End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferSegment_get_End_m273C21B558B88E92EB1B8B3B6EE5EF00B405900B (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____end_6;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.BufferSegment::set_End(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_set_End_m23C3EC2B76C81B8C5B28FDA3AE6160A0549DA8F9 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_value;
		__this->____end_6 = L_0;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_1;
		L_1 = BufferSegment_get_AvailableMemory_mCC8FDB9B97D16405DC1FC731E346B8D7AE823F20_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_value;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_3;
		L_3 = Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_inline((&V_0), 0, L_2, Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_RuntimeMethod_var);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_4;
		L_4 = Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD(L_3, Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD_RuntimeMethod_var);
		ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_inline(__this, L_4, ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_RuntimeMethod_var);
		return;
	}
}
// System.IO.Pipelines.BufferSegment System.IO.Pipelines.BufferSegment::get_NextSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* BufferSegment_get_NextSegment_m59FAA272F7120524F4D2E806A7541FBD0D6EFFA5 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = __this->____next_5;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.BufferSegment::set_NextSegment(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_set_NextSegment_mE4696A6F2608ACCB7FD29CF328805E80666A0307 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___0_value;
		ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_inline(__this, L_0, ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_RuntimeMethod_var);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_1 = ___0_value;
		__this->____next_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_5), (void*)L_1);
		return;
	}
}
// System.Void System.IO.Pipelines.BufferSegment::SetOwnedMemory(System.Buffers.IMemoryOwner`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_SetOwnedMemory_mC619C987D489F72B2DD08EFCD5263E96D4189DA2 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, RuntimeObject* ___0_memoryOwner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemoryOwner_1_t1B649D339D50B96147E58E2190B273754E1956D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_memoryOwner;
		__this->____memoryOwner_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____memoryOwner_3), (void*)L_0);
		RuntimeObject* L_1 = ___0_memoryOwner;
		NullCheck(L_1);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_2;
		L_2 = InterfaceFuncInvoker0< Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 >::Invoke(0 /* System.Memory`1<T> System.Buffers.IMemoryOwner`1<System.Byte>::get_Memory() */, IMemoryOwner_1_t1B649D339D50B96147E58E2190B273754E1956D6_il2cpp_TypeInfo_var, L_1);
		BufferSegment_set_AvailableMemory_m17969125D03B14BB2B2729AA58A69FF2D9A278D6_inline(__this, L_2, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.BufferSegment::SetOwnedMemory(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_SetOwnedMemory_m9E25E86377C83DD338466393AD356CE352B09E3E (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_arrayPoolBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_arrayPoolBuffer;
		__this->____array_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_4), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_arrayPoolBuffer;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_2;
		L_2 = Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C(L_1, Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C_RuntimeMethod_var);
		BufferSegment_set_AvailableMemory_m17969125D03B14BB2B2729AA58A69FF2D9A278D6_inline(__this, L_2, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.BufferSegment::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_Reset_m37BBCF32F50BAF795C7BF21EAA89CC314F13BE47 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferSegment_ResetMemory_m0703A585E27D21A9F7BB2CF7641312705D5D4CEB(__this, NULL);
		ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_inline(__this, (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*)NULL, ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_RuntimeMethod_var);
		ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_inline(__this, ((int64_t)0), ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_RuntimeMethod_var);
		__this->____next_5 = (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_5), (void*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.BufferSegment::ResetMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_ResetMemory_m0703A585E27D21A9F7BB2CF7641312705D5D4CEB (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->____memoryOwner_3;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		__this->____memoryOwner_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____memoryOwner_3), (void*)(RuntimeObject*)NULL);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
		goto IL_0031;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_3;
		L_3 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____array_4;
		NullCheck(L_3);
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(T[],System.Boolean) */, L_3, L_4, (bool)0);
		__this->____array_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_0031:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399));
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_5 = V_1;
		ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_inline(__this, L_5, ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_RuntimeMethod_var);
		__this->____end_6 = 0;
		il2cpp_codegen_initobj((&V_2), sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6 = V_2;
		BufferSegment_set_AvailableMemory_m17969125D03B14BB2B2729AA58A69FF2D9A278D6_inline(__this, L_6, NULL);
		return;
	}
}
// System.Memory`1<System.Byte> System.IO.Pipelines.BufferSegment::get_AvailableMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 BufferSegment_get_AvailableMemory_mCC8FDB9B97D16405DC1FC731E346B8D7AE823F20 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = __this->___U3CAvailableMemoryU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.BufferSegment::set_AvailableMemory(System.Memory`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_set_AvailableMemory_m17969125D03B14BB2B2729AA58A69FF2D9A278D6 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_value, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = ___0_value;
		__this->___U3CAvailableMemoryU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CAvailableMemoryU3Ek__BackingField_7))->____object_0), (void*)NULL);
		return;
	}
}
// System.Int32 System.IO.Pipelines.BufferSegment::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferSegment_get_Length_m50DFF642D8E228B9E7A6B25F54B3D6FF9F7C3E35 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = BufferSegment_get_End_m273C21B558B88E92EB1B8B3B6EE5EF00B405900B_inline(__this, NULL);
		return L_0;
	}
}
// System.Void System.IO.Pipelines.BufferSegment::SetNext(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment_SetNext_m6ED747816806BDD709C5F3EB080472471171FC65 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_segment, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_get_Next_m2D0399C1974F8C84EC006630E4CA359EC2A30497_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___0_segment;
		BufferSegment_set_NextSegment_mE4696A6F2608ACCB7FD29CF328805E80666A0307(__this, L_0, NULL);
		___0_segment = __this;
		goto IL_002d;
	}

IL_000c:
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_1 = ___0_segment;
		NullCheck(L_1);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_2;
		L_2 = BufferSegment_get_NextSegment_m59FAA272F7120524F4D2E806A7541FBD0D6EFFA5_inline(L_1, NULL);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_3 = ___0_segment;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline(L_3, ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_5 = ___0_segment;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BufferSegment_get_Length_m50DFF642D8E228B9E7A6B25F54B3D6FF9F7C3E35(L_5, NULL);
		NullCheck(L_2);
		ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_inline(L_2, ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)L_6))), ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_RuntimeMethod_var);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_7 = ___0_segment;
		NullCheck(L_7);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_8;
		L_8 = BufferSegment_get_NextSegment_m59FAA272F7120524F4D2E806A7541FBD0D6EFFA5_inline(L_7, NULL);
		___0_segment = L_8;
	}

IL_002d:
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_9 = ___0_segment;
		NullCheck(L_9);
		ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* L_10;
		L_10 = ReadOnlySequenceSegment_1_get_Next_m2D0399C1974F8C84EC006630E4CA359EC2A30497_inline(L_9, ReadOnlySequenceSegment_1_get_Next_m2D0399C1974F8C84EC006630E4CA359EC2A30497_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Int64 System.IO.Pipelines.BufferSegment::GetLength(System.IO.Pipelines.BufferSegment,System.Int32,System.IO.Pipelines.BufferSegment,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BufferSegment_GetLength_mB95FA15C589777E586F870EA9D34DBD1EC3B61AB (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_startSegment, int32_t ___1_startIndex, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___2_endSegment, int32_t ___3_endIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___2_endSegment;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline(L_0, ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		int32_t L_2 = ___3_endIndex;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_3 = ___0_startSegment;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline(L_3, ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		int32_t L_5 = ___1_startIndex;
		return ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(L_1, ((int64_t)(uint64_t)((uint32_t)L_2)))), ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)(uint64_t)((uint32_t)L_5))))));
	}
}
// System.Int64 System.IO.Pipelines.BufferSegment::GetLength(System.Int64,System.IO.Pipelines.BufferSegment,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BufferSegment_GetLength_m129BF3AB9FB45C20EA8E55849DB74BD4C902B08E (int64_t ___0_startPosition, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___1_endSegment, int32_t ___2_endIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___1_endSegment;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline(L_0, ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		int32_t L_2 = ___2_endIndex;
		int64_t L_3 = ___0_startPosition;
		return ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(L_1, ((int64_t)(uint64_t)((uint32_t)L_2)))), L_3));
	}
}
// System.Void System.IO.Pipelines.BufferSegment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegment__ctor_m81ED5E7AB21B06E6D783AD347EE827FBC628B58D (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1__ctor_mE797DC2CAB0C7E2A04FF7DC3B1339247CB94321F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySequenceSegment_1__ctor_mE797DC2CAB0C7E2A04FF7DC3B1339247CB94321F(__this, ReadOnlySequenceSegment_1__ctor_mE797DC2CAB0C7E2A04FF7DC3B1339247CB94321F_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.IO.Pipelines.CompletionData
IL2CPP_EXTERN_C void CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshal_pinvoke(const CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C& unmarshaled, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CExecutionContextU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ExecutionContext>k__BackingField' of type 'CompletionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CExecutionContextU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshal_pinvoke_back(const CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshaled_pinvoke& marshaled, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C& unmarshaled)
{
	Exception_t* ___U3CExecutionContextU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ExecutionContext>k__BackingField' of type 'CompletionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CExecutionContextU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.CompletionData
IL2CPP_EXTERN_C void CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshal_pinvoke_cleanup(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.IO.Pipelines.CompletionData
IL2CPP_EXTERN_C void CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshal_com(const CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C& unmarshaled, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshaled_com& marshaled)
{
	Exception_t* ___U3CExecutionContextU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ExecutionContext>k__BackingField' of type 'CompletionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CExecutionContextU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshal_com_back(const CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshaled_com& marshaled, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C& unmarshaled)
{
	Exception_t* ___U3CExecutionContextU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ExecutionContext>k__BackingField' of type 'CompletionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CExecutionContextU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.CompletionData
IL2CPP_EXTERN_C void CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshal_com_cleanup(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_marshaled_com& marshaled)
{
}
// System.Action`1<System.Object> System.IO.Pipelines.CompletionData::get_Completion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* CompletionData_get_Completion_m38CE7CBB6C0D0387BDA92B1705244ADBDC9008EE (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->___U3CCompletionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* CompletionData_get_Completion_m38CE7CBB6C0D0387BDA92B1705244ADBDC9008EE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*>(__this + _offset);
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* _returnValue;
	_returnValue = CompletionData_get_Completion_m38CE7CBB6C0D0387BDA92B1705244ADBDC9008EE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Object System.IO.Pipelines.CompletionData::get_CompletionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompletionData_get_CompletionState_mD9C390FC5F9C9FA139BFB1E0003A3003F95E78B9 (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCompletionStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* CompletionData_get_CompletionState_mD9C390FC5F9C9FA139BFB1E0003A3003F95E78B9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = CompletionData_get_CompletionState_mD9C390FC5F9C9FA139BFB1E0003A3003F95E78B9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Threading.ExecutionContext System.IO.Pipelines.CompletionData::get_ExecutionContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5 (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) 
{
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_0 = __this->___U3CExecutionContextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*>(__this + _offset);
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* _returnValue;
	_returnValue = CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Threading.SynchronizationContext System.IO.Pipelines.CompletionData::get_SynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3 (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) 
{
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___U3CSynchronizationContextU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*>(__this + _offset);
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* _returnValue;
	_returnValue = CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.IO.Pipelines.CompletionData::.ctor(System.Action`1<System.Object>,System.Object,System.Threading.ExecutionContext,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionData__ctor_mD47C730410F38D7A6A7FB44E8F0E6DD803679C21 (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_completion, RuntimeObject* ___1_completionState, ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___2_executionContext, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___3_synchronizationContext, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_completion;
		__this->___U3CCompletionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCompletionU3Ek__BackingField_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_completionState;
		__this->___U3CCompletionStateU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCompletionStateU3Ek__BackingField_1), (void*)L_1);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_2 = ___2_executionContext;
		__this->___U3CExecutionContextU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExecutionContextU3Ek__BackingField_2), (void*)L_2);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = ___3_synchronizationContext;
		__this->___U3CSynchronizationContextU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSynchronizationContextU3Ek__BackingField_3), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void CompletionData__ctor_mD47C730410F38D7A6A7FB44E8F0E6DD803679C21_AdjustorThunk (RuntimeObject* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_completion, RuntimeObject* ___1_completionState, ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___2_executionContext, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___3_synchronizationContext, const RuntimeMethod* method)
{
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*>(__this + _offset);
	CompletionData__ctor_mD47C730410F38D7A6A7FB44E8F0E6DD803679C21(_thisAdjusted, ___0_completion, ___1_completionState, ___2_executionContext, ___3_synchronizationContext, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Pipelines.FlushResult::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlushResult__ctor_m7CEA5006A3A100B4DF694881A0B3BF2E458B6119 (FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* __this, bool ___0_isCanceled, bool ___1_isCompleted, const RuntimeMethod* method) 
{
	{
		__this->____resultFlags_0 = 0;
		bool L_0 = ___0_isCanceled;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		uint8_t L_1 = __this->____resultFlags_0;
		__this->____resultFlags_0 = ((int32_t)((int32_t)L_1|1));
	}

IL_0018:
	{
		bool L_2 = ___1_isCompleted;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		uint8_t L_3 = __this->____resultFlags_0;
		__this->____resultFlags_0 = ((int32_t)((int32_t)L_3|2));
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void FlushResult__ctor_m7CEA5006A3A100B4DF694881A0B3BF2E458B6119_AdjustorThunk (RuntimeObject* __this, bool ___0_isCanceled, bool ___1_isCompleted, const RuntimeMethod* method)
{
	FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E*>(__this + _offset);
	FlushResult__ctor_m7CEA5006A3A100B4DF694881A0B3BF2E458B6119(_thisAdjusted, ___0_isCanceled, ___1_isCompleted, method);
}
// System.Boolean System.IO.Pipelines.FlushResult::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlushResult_get_IsCanceled_m7AECD5F4B712F3240F03483323975095F2984C9E (FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____resultFlags_0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FlushResult_get_IsCanceled_m7AECD5F4B712F3240F03483323975095F2984C9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FlushResult_get_IsCanceled_m7AECD5F4B712F3240F03483323975095F2984C9E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.IO.Pipelines.FlushResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlushResult_get_IsCompleted_m713E197FA03EE8BCF40ECA88AE4A0AB21A7B35D4 (FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____resultFlags_0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FlushResult_get_IsCompleted_m713E197FA03EE8BCF40ECA88AE4A0AB21A7B35D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E*>(__this + _offset);
	bool _returnValue;
	_returnValue = FlushResult_get_IsCompleted_m713E197FA03EE8BCF40ECA88AE4A0AB21A7B35D4(_thisAdjusted, method);
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
// System.Void System.IO.Pipelines.InlineScheduler::Schedule(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineScheduler_Schedule_mC5B21D5FA9763A2548F58835D2549615396E9E9C (InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_action;
		RuntimeObject* L_1 = ___1_state;
		NullCheck(L_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.InlineScheduler::UnsafeSchedule(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineScheduler_UnsafeSchedule_m04DD5C288A91ADCEA9E05AAD04326F14DBA8A453 (InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_action;
		RuntimeObject* L_1 = ___1_state;
		NullCheck(L_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.InlineScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineScheduler__ctor_m6349295046DFCFE24C8F74E61B90257BFC7B6178 (InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		PipeScheduler__ctor_m1EF6FC23D210C406CF13FF7F212B76A9167D8155(__this, NULL);
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


// Conversion methods for marshalling of: System.IO.Pipelines.BufferSegmentStack
IL2CPP_EXTERN_C void BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshal_pinvoke(const BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3& unmarshaled, BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshaled_pinvoke& marshaled)
{
	Exception_t* ____array_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_array' of type 'BufferSegmentStack'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____array_0Exception, NULL);
}
IL2CPP_EXTERN_C void BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshal_pinvoke_back(const BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshaled_pinvoke& marshaled, BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3& unmarshaled)
{
	Exception_t* ____array_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_array' of type 'BufferSegmentStack'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____array_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.BufferSegmentStack
IL2CPP_EXTERN_C void BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshal_pinvoke_cleanup(BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.IO.Pipelines.BufferSegmentStack
IL2CPP_EXTERN_C void BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshal_com(const BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3& unmarshaled, BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshaled_com& marshaled)
{
	Exception_t* ____array_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_array' of type 'BufferSegmentStack'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____array_0Exception, NULL);
}
IL2CPP_EXTERN_C void BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshal_com_back(const BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshaled_com& marshaled, BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3& unmarshaled)
{
	Exception_t* ____array_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_array' of type 'BufferSegmentStack'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____array_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.BufferSegmentStack
IL2CPP_EXTERN_C void BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshal_com_cleanup(BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3_marshaled_com& marshaled)
{
}
// System.Void System.IO.Pipelines.BufferSegmentStack::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegmentStack__ctor_m6B0CB1F33A6F6892A4DEDD20ACD08F12CEDF8857 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_size;
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_1 = (SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264*)(SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264*)SZArrayNew(SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____array_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_0), (void*)L_1);
		__this->____size_1 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSegmentStack__ctor_m6B0CB1F33A6F6892A4DEDD20ACD08F12CEDF8857_AdjustorThunk (RuntimeObject* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3*>(__this + _offset);
	BufferSegmentStack__ctor_m6B0CB1F33A6F6892A4DEDD20ACD08F12CEDF8857(_thisAdjusted, ___0_size, method);
}
// System.Int32 System.IO.Pipelines.BufferSegmentStack::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferSegmentStack_get_Count_mFA3C00771FF9C4346612D3840AF63892208D1132 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BufferSegmentStack_get_Count_mFA3C00771FF9C4346612D3840AF63892208D1132_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BufferSegmentStack_get_Count_mFA3C00771FF9C4346612D3840AF63892208D1132_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.IO.Pipelines.BufferSegmentStack::TryPop(System.IO.Pipelines.BufferSegment&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferSegmentStack_TryPop_m508E947D9D93CE6C685EE7CB8360EFB48BEE4A20 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373** ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* V_1 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_1 = __this->____array_0;
		V_1 = L_1;
		int32_t L_2 = V_0;
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373** L_4 = ___0_result;
		*((RuntimeObject**)L_4) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		__this->____size_1 = L_5;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373** L_6 = ___0_result;
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_11;
		L_11 = SegmentAsValueType_op_Implicit_m8D9E2F250374B8B841CAFC04DDDFA4A692861103_inline(L_10, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_11);
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_12 = V_1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		il2cpp_codegen_initobj(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), sizeof(SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool BufferSegmentStack_TryPop_m508E947D9D93CE6C685EE7CB8360EFB48BEE4A20_AdjustorThunk (RuntimeObject* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373** ___0_result, const RuntimeMethod* method)
{
	BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = BufferSegmentStack_TryPop_m508E947D9D93CE6C685EE7CB8360EFB48BEE4A20(_thisAdjusted, ___0_result, method);
	return _returnValue;
}
// System.Void System.IO.Pipelines.BufferSegmentStack::Push(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSegmentStack_Push_m0E2ED133262877B9AFB20BB47766D870ED958282 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* V_1 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		V_0 = L_0;
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_1 = __this->____array_0;
		V_1 = L_1;
		int32_t L_2 = V_0;
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_3 = V_1;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_4 = V_1;
		int32_t L_5 = V_0;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_6 = ___0_item;
		SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 L_7;
		L_7 = SegmentAsValueType_op_Implicit_m4930EA901EA4A7E1F8759497C478431E8119C760(L_6, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510)L_7);
		int32_t L_8 = V_0;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_002b:
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_9 = ___0_item;
		BufferSegmentStack_PushWithResize_mCD9B583854946730061DBFF2601C98B184F69B37(__this, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSegmentStack_Push_m0E2ED133262877B9AFB20BB47766D870ED958282_AdjustorThunk (RuntimeObject* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_item, const RuntimeMethod* method)
{
	BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3*>(__this + _offset);
	BufferSegmentStack_Push_m0E2ED133262877B9AFB20BB47766D870ED958282(_thisAdjusted, ___0_item, method);
}
// System.Void System.IO.Pipelines.BufferSegmentStack::PushWithResize(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BufferSegmentStack_PushWithResize_mCD9B583854946730061DBFF2601C98B184F69B37 (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisSegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_mAA9FFF578D9CE23FCACA7B1803156EA5DEC40548_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264** L_0 = (&__this->____array_0);
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_1 = __this->____array_0;
		NullCheck(L_1);
		Array_Resize_TisSegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_mAA9FFF578D9CE23FCACA7B1803156EA5DEC40548(L_0, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_1)->max_length)))), Array_Resize_TisSegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_mAA9FFF578D9CE23FCACA7B1803156EA5DEC40548_RuntimeMethod_var);
		SegmentAsValueTypeU5BU5D_t8848578549344AF793134D0900941A195CFF9264* L_2 = __this->____array_0;
		int32_t L_3 = __this->____size_1;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_4 = ___0_item;
		SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 L_5;
		L_5 = SegmentAsValueType_op_Implicit_m4930EA901EA4A7E1F8759497C478431E8119C760(L_4, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510)L_5);
		int32_t L_6 = __this->____size_1;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void BufferSegmentStack_PushWithResize_mCD9B583854946730061DBFF2601C98B184F69B37_AdjustorThunk (RuntimeObject* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_item, const RuntimeMethod* method)
{
	BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3*>(__this + _offset);
	BufferSegmentStack_PushWithResize_mCD9B583854946730061DBFF2601C98B184F69B37(_thisAdjusted, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_pinvoke(const SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510& unmarshaled, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke& marshaled)
{
	Exception_t* ____value_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'SegmentAsValueType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_0Exception, NULL);
}
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_pinvoke_back(const SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke& marshaled, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510& unmarshaled)
{
	Exception_t* ____value_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'SegmentAsValueType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_pinvoke_cleanup(SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_com(const SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510& unmarshaled, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com& marshaled)
{
	Exception_t* ____value_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'SegmentAsValueType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_0Exception, NULL);
}
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_com_back(const SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com& marshaled, SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510& unmarshaled)
{
	Exception_t* ____value_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'SegmentAsValueType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType
IL2CPP_EXTERN_C void SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshal_com_cleanup(SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510_marshaled_com& marshaled)
{
}
// System.Void System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType::.ctor(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SegmentAsValueType__ctor_m6C6C805C59D12B3FEDC1304B5A9A65C88B24AD52 (SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_value, const RuntimeMethod* method) 
{
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___0_value;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void SegmentAsValueType__ctor_m6C6C805C59D12B3FEDC1304B5A9A65C88B24AD52_AdjustorThunk (RuntimeObject* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_value, const RuntimeMethod* method)
{
	SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510*>(__this + _offset);
	SegmentAsValueType__ctor_m6C6C805C59D12B3FEDC1304B5A9A65C88B24AD52_inline(_thisAdjusted, ___0_value, method);
}
// System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType::op_Implicit(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 SegmentAsValueType_op_Implicit_m4930EA901EA4A7E1F8759497C478431E8119C760 (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_s, const RuntimeMethod* method) 
{
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___0_s;
		SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 L_1;
		memset((&L_1), 0, sizeof(L_1));
		SegmentAsValueType__ctor_m6C6C805C59D12B3FEDC1304B5A9A65C88B24AD52_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IO.Pipelines.BufferSegment System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType::op_Implicit(System.IO.Pipelines.BufferSegmentStack/SegmentAsValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* SegmentAsValueType_op_Implicit_m8D9E2F250374B8B841CAFC04DDDFA4A692861103 (SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 ___0_s, const RuntimeMethod* method) 
{
	{
		SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 L_0 = ___0_s;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_1 = L_0.____value_0;
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
// System.Boolean System.IO.Pipelines.Pipe::get_UseSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pipe_get_UseSynchronizationContext_m6DB7F97095470663FC478129BB08B7AE042D8622 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = __this->____options_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = PipeOptions_get_UseSynchronizationContext_mE4473BB3D5B22B4BC1AD4E8FDBB5A4D7E8FDFCB1_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int32 System.IO.Pipelines.Pipe::get_MinimumSegmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pipe_get_MinimumSegmentSize_m5BC3487FB54A1756AACB31A165ED12C68EEE0100 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = __this->____options_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PipeOptions_get_MinimumSegmentSize_mC52E83372686C446536A4EEC660CCA1C15192D56_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int64 System.IO.Pipelines.Pipe::get_PauseWriterThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Pipe_get_PauseWriterThreshold_m0008D494F56460C0AD7E5518FD79E6E712588EBC (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = __this->____options_10;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = PipeOptions_get_PauseWriterThreshold_mB2E58F62CE58F61DE69BCB7DA3A211051E73CA14_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int64 System.IO.Pipelines.Pipe::get_ResumeWriterThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Pipe_get_ResumeWriterThreshold_m1E3B9BD5C95B12AD1CE32C4306E3FA60919CF6A2 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = __this->____options_10;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = PipeOptions_get_ResumeWriterThreshold_m963B128EE85A5D936A37673D2CF46F82F7305101_inline(L_0, NULL);
		return L_1;
	}
}
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.Pipe::get_ReaderScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = __this->____options_10;
		NullCheck(L_0);
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_1;
		L_1 = PipeOptions_get_ReaderScheduler_m7E646B44166427E661F7FD3074E63C43EE36C950_inline(L_0, NULL);
		return L_1;
	}
}
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.Pipe::get_WriterScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = __this->____options_10;
		NullCheck(L_0);
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_1;
		L_1 = PipeOptions_get_WriterScheduler_mE50E05A9D4CA43B26672BD254CAEF913B5BE91FB_inline(L_0, NULL);
		return L_1;
	}
}
// System.Object System.IO.Pipelines.Pipe::get_SyncObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____sync_11;
		return L_0;
	}
}
// System.Int64 System.IO.Pipelines.Pipe::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Pipe_get_Length_mF1F67226AFABEBE98259EDDD2D21E01AE6A7DA9E (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____unconsumedBytes_12;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.Pipe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe__ctor_m1E766F44E0C2C6B7FA695DBEFF2F6E3DD964BB09 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var);
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0;
		L_0 = PipeOptions_get_Default_mAAE5981997B15A561A035FB1EC79278E0B1AB77F_inline(NULL);
		Pipe__ctor_m143CFE985AF52035E032586DDC6990ACBC73FC69(__this, L_0, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::.ctor(System.IO.Pipelines.PipeOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe__ctor_m143CFE985AF52035E032586DDC6990ACBC73FC69 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____sync_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sync_11), (void*)L_0);
		__this->____lastExaminedIndex_18 = ((int64_t)(-1));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_1 = ___0_options;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m9FF2C61D01B45E18204A5BCE701802D97C1F9D09(3, NULL);
	}

IL_0022:
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_2 = ___0_options;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PipeOptions_get_InitialSegmentPoolSize_m84ED99D156FC807255008132BAAEF4828EC17C53_inline(L_2, NULL);
		BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		BufferSegmentStack__ctor_m6B0CB1F33A6F6892A4DEDD20ACD08F12CEDF8857((&L_4), L_3, /*hidden argument*/NULL);
		__this->____bufferSegmentPool_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____bufferSegmentPool_7))->____array_0), (void*)NULL);
		PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_5 = (&__this->____operationState_28);
		il2cpp_codegen_initobj(L_5, sizeof(PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325));
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_6 = (&__this->____readerCompletion_17);
		il2cpp_codegen_initobj(L_6, sizeof(PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848));
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_7 = (&__this->____writerCompletion_16);
		il2cpp_codegen_initobj(L_7, sizeof(PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848));
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_8 = ___0_options;
		__this->____options_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____options_10), (void*)L_8);
		bool L_9;
		L_9 = Pipe_get_UseSynchronizationContext_m6DB7F97095470663FC478129BB08B7AE042D8622(__this, NULL);
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE L_10;
		memset((&L_10), 0, sizeof(L_10));
		PipeAwaitable__ctor_m303BB55BB1630B1BA62055D31355A4E4134172A1((&L_10), (bool)0, L_9, /*hidden argument*/NULL);
		__this->____readerAwaitable_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____readerAwaitable_14))->____completion_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____readerAwaitable_14))->____completionState_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____readerAwaitable_14))->____schedulingContext_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->____readerAwaitable_14))->____cancellationTokenRegistration_4))->___m_callbackInfo_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->____readerAwaitable_14))->____cancellationTokenRegistration_4))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->____readerAwaitable_14))->____cancellationToken_5))->____source_0), (void*)NULL);
		#endif
		bool L_11;
		L_11 = Pipe_get_UseSynchronizationContext_m6DB7F97095470663FC478129BB08B7AE042D8622(__this, NULL);
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE L_12;
		memset((&L_12), 0, sizeof(L_12));
		PipeAwaitable__ctor_m303BB55BB1630B1BA62055D31355A4E4134172A1((&L_12), (bool)1, L_11, /*hidden argument*/NULL);
		__this->____writerAwaitable_15 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____writerAwaitable_15))->____completion_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____writerAwaitable_15))->____completionState_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____writerAwaitable_15))->____schedulingContext_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->____writerAwaitable_15))->____cancellationTokenRegistration_4))->___m_callbackInfo_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->____writerAwaitable_15))->____cancellationTokenRegistration_4))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->____writerAwaitable_15))->____cancellationToken_5))->____source_0), (void*)NULL);
		#endif
		DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* L_13 = (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5*)il2cpp_codegen_object_new(DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		DefaultPipeReader__ctor_mA2C0F15F3E2BE52CCE4EC06CCC3D9A41506B4881(L_13, __this, NULL);
		__this->____reader_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_8), (void*)L_13);
		DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* L_14 = (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE*)il2cpp_codegen_object_new(DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DefaultPipeWriter__ctor_mBD4595C12F96E1334D7FBCB72221411CA5D24444(L_14, __this, NULL);
		__this->____writer_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_9), (void*)L_14);
		return;
	}
}
// System.Memory`1<System.Byte> System.IO.Pipelines.Pipe::GetMemory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Pipe_GetMemory_m495FEA0DF901A0727BA3298F2C766F7020FE6706 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_0 = (&__this->____writerCompletion_16);
		bool L_1;
		L_1 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NoWritingAllowed_m9EE7C1DDF70E86F4BD14DEEF4F769A2387CF4695(NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_sizeHint;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7(0, NULL);
	}

IL_001c:
	{
		int32_t L_3 = ___0_sizeHint;
		Pipe_AllocateWriteHeadIfNeeded_mD1A291629EFE7085BB2A6F97406E5C9A5BCA70BA_inline(__this, L_3, NULL);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_4 = __this->____writingHeadMemory_26;
		return L_4;
	}
}
// System.Span`1<System.Byte> System.IO.Pipelines.Pipe::GetSpan(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Pipe_GetSpan_mF7CF8E66E41F9568D15899981E5B843430AB6425 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_0 = (&__this->____writerCompletion_16);
		bool L_1;
		L_1 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NoWritingAllowed_m9EE7C1DDF70E86F4BD14DEEF4F769A2387CF4695(NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_sizeHint;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7(0, NULL);
	}

IL_001c:
	{
		int32_t L_3 = ___0_sizeHint;
		Pipe_AllocateWriteHeadIfNeeded_mD1A291629EFE7085BB2A6F97406E5C9A5BCA70BA_inline(__this, L_3, NULL);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (&__this->____writingHeadMemory_26);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_4, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void System.IO.Pipelines.Pipe::AllocateWriteHeadIfNeeded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AllocateWriteHeadIfNeeded_mD1A291629EFE7085BB2A6F97406E5C9A5BCA70BA (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_0 = (&__this->____operationState_28);
		bool L_1;
		L_1 = PipeOperationState_get_IsWritingActive_mBF1D9C8EBC2FA5CDE6AA16E260C16DC3EE06A38D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_2 = (&__this->____writingHeadMemory_26);
		int32_t L_3;
		L_3 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_2, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (&__this->____writingHeadMemory_26);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6 = ___0_sizeHint;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}

IL_0028:
	{
		int32_t L_7 = ___0_sizeHint;
		Pipe_AllocateWriteHeadSynchronized_m25DFA2C95E8EBEE7396839928509F26FEC5C3412(__this, L_7, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::AllocateWriteHeadSynchronized(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AllocateWriteHeadSynchronized_m25DFA2C95E8EBEE7396839928509F26FEC5C3412 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_2 = NULL;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_3 = NULL;
	int32_t V_4 = 0;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_5 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00e0;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00e0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_4 = (&__this->____operationState_28);
				PipeOperationState_BeginWrite_m8ED11EFAC957474574A405906E0160A8022E43D5_inline(L_4, NULL);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_5 = __this->____writingHead_25;
				if (L_5)
				{
					goto IL_0052_1;
				}
			}
			{
				int32_t L_6 = ___0_sizeHint;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_7;
				L_7 = Pipe_AllocateSegment_mD51EC425B57FB53B5A3D9C00A853464E39B18284(__this, L_6, NULL);
				V_2 = L_7;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_8 = V_2;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_9 = L_8;
				V_3 = L_9;
				__this->____readTail_22 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____readTail_22), (void*)L_9);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_10 = V_3;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_11 = L_10;
				V_3 = L_11;
				__this->____readHead_19 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____readHead_19), (void*)L_11);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_12 = V_3;
				__this->____writingHead_25 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____writingHead_25), (void*)L_12);
				__this->____lastExaminedIndex_18 = ((int64_t)0);
				goto IL_00e1;
			}

IL_0052_1:
			{
				Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_13 = (&__this->____writingHeadMemory_26);
				int32_t L_14;
				L_14 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_13, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
				V_4 = L_14;
				int32_t L_15 = V_4;
				if (!L_15)
				{
					goto IL_0068_1;
				}
			}
			{
				int32_t L_16 = V_4;
				int32_t L_17 = ___0_sizeHint;
				if ((((int32_t)L_16) >= ((int32_t)L_17)))
				{
					goto IL_00d5_1;
				}
			}

IL_0068_1:
			{
				int32_t L_18 = __this->____writingHeadBytesBuffered_27;
				if ((((int32_t)L_18) <= ((int32_t)0)))
				{
					goto IL_0090_1;
				}
			}
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_19 = __this->____writingHead_25;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_20 = L_19;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = BufferSegment_get_End_m273C21B558B88E92EB1B8B3B6EE5EF00B405900B_inline(L_20, NULL);
				int32_t L_22 = __this->____writingHeadBytesBuffered_27;
				NullCheck(L_20);
				BufferSegment_set_End_m23C3EC2B76C81B8C5B28FDA3AE6160A0549DA8F9(L_20, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
				__this->____writingHeadBytesBuffered_27 = 0;
			}

IL_0090_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_23 = __this->____writingHead_25;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = BufferSegment_get_Length_m50DFF642D8E228B9E7A6B25F54B3D6FF9F7C3E35(L_23, NULL);
				if (L_24)
				{
					goto IL_00b7_1;
				}
			}
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_25 = __this->____writingHead_25;
				NullCheck(L_25);
				BufferSegment_ResetMemory_m0703A585E27D21A9F7BB2CF7641312705D5D4CEB(L_25, NULL);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_26 = __this->____writingHead_25;
				int32_t L_27 = ___0_sizeHint;
				Pipe_RentMemory_m023517A287706AE60272CCF753F85D5F8A6414C1(__this, L_26, L_27, NULL);
				goto IL_00e1;
			}

IL_00b7_1:
			{
				int32_t L_28 = ___0_sizeHint;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_29;
				L_29 = Pipe_AllocateSegment_mD51EC425B57FB53B5A3D9C00A853464E39B18284(__this, L_28, NULL);
				V_5 = L_29;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_30 = __this->____writingHead_25;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_31 = V_5;
				NullCheck(L_30);
				BufferSegment_SetNext_m6ED747816806BDD709C5F3EB080472471171FC65(L_30, L_31, NULL);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_32 = V_5;
				__this->____writingHead_25 = L_32;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____writingHead_25), (void*)L_32);
			}

IL_00d5_1:
			{
				goto IL_00e1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e1:
	{
		return;
	}
}
// System.IO.Pipelines.BufferSegment System.IO.Pipelines.Pipe::AllocateSegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* Pipe_AllocateSegment_mD51EC425B57FB53B5A3D9C00A853464E39B18284 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_0 = NULL;
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0;
		L_0 = Pipe_CreateSegmentUnsynchronized_m5DB2499DBCDD4081BDE551E4BFDA9ED547D568A9(__this, NULL);
		V_0 = L_0;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_1 = V_0;
		int32_t L_2 = ___0_sizeHint;
		Pipe_RentMemory_m023517A287706AE60272CCF753F85D5F8A6414C1(__this, L_1, L_2, NULL);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_3 = V_0;
		return L_3;
	}
}
// System.Void System.IO.Pipelines.Pipe::RentMemory(System.IO.Pipelines.BufferSegment,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_RentMemory_m023517A287706AE60272CCF753F85D5F8A6414C1 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_segment, int32_t ___1_sizeHint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F*)NULL;
		V_1 = (-1);
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = __this->____options_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = PipeOptions_get_IsDefaultSharedMemoryPool_m5B6BF0FEAA3A5F4F5FCE956AB2A34A7FCCD62F3B_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_2 = __this->____options_10;
		NullCheck(L_2);
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_3;
		L_3 = PipeOptions_get_Pool_mD6F269C640738791A4AF66BE42F36954EE05A90A_inline(L_2, NULL);
		V_0 = L_3;
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Buffers.MemoryPool`1<System.Byte>::get_MaxBufferSize() */, L_4);
		V_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = ___1_sizeHint;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_8 = ___0_segment;
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_9 = V_0;
		int32_t L_10 = ___1_sizeHint;
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = Pipe_GetSegmentSize_m3A41C023722CB01BD2183A443C39910D1687FFCD(__this, L_10, L_11, NULL);
		NullCheck(L_9);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(5 /* System.Buffers.IMemoryOwner`1<T> System.Buffers.MemoryPool`1<System.Byte>::Rent(System.Int32) */, L_9, L_12);
		NullCheck(L_8);
		BufferSegment_SetOwnedMemory_mC619C987D489F72B2DD08EFCD5263E96D4189DA2(L_8, L_13, NULL);
		goto IL_005c;
	}

IL_003e:
	{
		int32_t L_14 = ___1_sizeHint;
		int32_t L_15;
		L_15 = Pipe_GetSegmentSize_m3A41C023722CB01BD2183A443C39910D1687FFCD(__this, L_14, ((int32_t)2147483647LL), NULL);
		V_2 = L_15;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_16 = ___0_segment;
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_17;
		L_17 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_17, L_18);
		NullCheck(L_16);
		BufferSegment_SetOwnedMemory_m9E25E86377C83DD338466393AD356CE352B09E3E(L_16, L_19, NULL);
	}

IL_005c:
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_20 = ___0_segment;
		NullCheck(L_20);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_21;
		L_21 = BufferSegment_get_AvailableMemory_mCC8FDB9B97D16405DC1FC731E346B8D7AE823F20_inline(L_20, NULL);
		__this->____writingHeadMemory_26 = L_21;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____writingHeadMemory_26))->____object_0), (void*)NULL);
		return;
	}
}
// System.Int32 System.IO.Pipelines.Pipe::GetSegmentSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pipe_GetSegmentSize_m3A41C023722CB01BD2183A443C39910D1687FFCD (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, int32_t ___1_maxBufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Pipe_get_MinimumSegmentSize_m5BC3487FB54A1756AACB31A165ED12C68EEE0100(__this, NULL);
		int32_t L_1 = ___0_sizeHint;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, L_1, NULL);
		___0_sizeHint = L_2;
		int32_t L_3 = ___1_maxBufferSize;
		int32_t L_4 = ___0_sizeHint;
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.IO.Pipelines.BufferSegment System.IO.Pipelines.Pipe::CreateSegmentUnsynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* Pipe_CreateSegmentUnsynchronized_m5DB2499DBCDD4081BDE551E4BFDA9ED547D568A9 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_0 = NULL;
	{
		BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* L_0 = (&__this->____bufferSegmentPool_7);
		bool L_1;
		L_1 = BufferSegmentStack_TryPop_m508E947D9D93CE6C685EE7CB8360EFB48BEE4A20(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_2 = V_0;
		return L_2;
	}

IL_0011:
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_3 = (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)il2cpp_codegen_object_new(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BufferSegment__ctor_m81ED5E7AB21B06E6D783AD347EE827FBC628B58D(L_3, NULL);
		return L_3;
	}
}
// System.Void System.IO.Pipelines.Pipe::ReturnSegmentUnsynchronized(System.IO.Pipelines.BufferSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_ReturnSegmentUnsynchronized_mD4CCCF3C58AC4CA2CB2F98BB34B8AE9760D5C7E1 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_segment, const RuntimeMethod* method) 
{
	{
		BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* L_0 = (&__this->____bufferSegmentPool_7);
		int32_t L_1;
		L_1 = BufferSegmentStack_get_Count_mFA3C00771FF9C4346612D3840AF63892208D1132_inline(L_0, NULL);
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_2 = __this->____options_10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PipeOptions_get_MaxSegmentPoolSize_m30B3C81768DC026E9399385494CAA79A22E16F8E_inline(L_2, NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* L_4 = (&__this->____bufferSegmentPool_7);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_5 = ___0_segment;
		BufferSegmentStack_Push_m0E2ED133262877B9AFB20BB47766D870ED958282(L_4, L_5, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean System.IO.Pipelines.Pipe::CommitUnsynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pipe_CommitUnsynchronized_m19023C238F5B601ADC0F8EEC6F2FAF2BF68400D9 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_0 = (&__this->____operationState_28);
		PipeOperationState_EndWrite_m1A6546DCAF0D062B08D8A451AEC6E64927D2D110_inline(L_0, NULL);
		int64_t L_1 = __this->____unflushedBytes_13;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_2 = __this->____writingHead_25;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BufferSegment_get_End_m273C21B558B88E92EB1B8B3B6EE5EF00B405900B_inline(L_3, NULL);
		int32_t L_5 = __this->____writingHeadBytesBuffered_27;
		NullCheck(L_3);
		BufferSegment_set_End_m23C3EC2B76C81B8C5B28FDA3AE6160A0549DA8F9(L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_6 = __this->____writingHead_25;
		__this->____readTail_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____readTail_22), (void*)L_6);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_7 = __this->____writingHead_25;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = BufferSegment_get_End_m273C21B558B88E92EB1B8B3B6EE5EF00B405900B_inline(L_7, NULL);
		__this->____readTailIndex_23 = L_8;
		int64_t L_9 = __this->____unconsumedBytes_12;
		V_0 = L_9;
		int64_t L_10 = __this->____unconsumedBytes_12;
		int64_t L_11 = __this->____unflushedBytes_13;
		__this->____unconsumedBytes_12 = ((int64_t)il2cpp_codegen_add(L_10, L_11));
		V_1 = (bool)1;
		int64_t L_12 = __this->____unconsumedBytes_12;
		int32_t L_13 = __this->____minimumReadBytes_24;
		if ((((int64_t)L_12) >= ((int64_t)((int64_t)L_13))))
		{
			goto IL_0079;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00b2;
	}

IL_0079:
	{
		int64_t L_14;
		L_14 = Pipe_get_PauseWriterThreshold_m0008D494F56460C0AD7E5518FD79E6E712588EBC(__this, NULL);
		if ((((int64_t)L_14) <= ((int64_t)((int64_t)0))))
		{
			goto IL_00b2;
		}
	}
	{
		int64_t L_15 = V_0;
		int64_t L_16;
		L_16 = Pipe_get_PauseWriterThreshold_m0008D494F56460C0AD7E5518FD79E6E712588EBC(__this, NULL);
		if ((((int64_t)L_15) >= ((int64_t)L_16)))
		{
			goto IL_00b2;
		}
	}
	{
		int64_t L_17 = __this->____unconsumedBytes_12;
		int64_t L_18;
		L_18 = Pipe_get_PauseWriterThreshold_m0008D494F56460C0AD7E5518FD79E6E712588EBC(__this, NULL);
		if ((((int64_t)L_17) < ((int64_t)L_18)))
		{
			goto IL_00b2;
		}
	}
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_19 = (&__this->____readerCompletion_17);
		bool L_20;
		L_20 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_19, NULL);
		if (L_20)
		{
			goto IL_00b2;
		}
	}
	{
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_21 = (&__this->____writerAwaitable_15);
		PipeAwaitable_SetUncompleted_mC3B615F389C96AFA5C9D9E63856E4F187E4E520D_inline(L_21, NULL);
	}

IL_00b2:
	{
		__this->____unflushedBytes_13 = ((int64_t)0);
		__this->____writingHeadBytesBuffered_27 = 0;
		bool L_22 = V_1;
		return L_22;
	}
}
// System.Void System.IO.Pipelines.Pipe::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_Advance_m1EE7BB0BB6B2485D4C6E33D7A668D04B704774EF (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0046;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0046:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = ___0_bytes;
				Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (&__this->____writingHeadMemory_26);
				int32_t L_6;
				L_6 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_5, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
				if ((!(((uint32_t)L_4) > ((uint32_t)L_6))))
				{
					goto IL_0025_1;
				}
			}
			{
				ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7(1, NULL);
			}

IL_0025_1:
			{
				PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_7 = (&__this->____readerCompletion_17);
				bool L_8;
				L_8 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_7, NULL);
				if (!L_8)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_0047;
			}

IL_0034_1:
			{
				int32_t L_9 = ___0_bytes;
				Pipe_AdvanceCore_m0D648E24601E1FB21F02B02470B2F28203EB6E0D_inline(__this, L_9, NULL);
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::AdvanceCore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AdvanceCore_m0D648E24601E1FB21F02B02470B2F28203EB6E0D (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = __this->____unflushedBytes_13;
		int32_t L_1 = ___0_bytesWritten;
		__this->____unflushedBytes_13 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_1)));
		int32_t L_2 = __this->____writingHeadBytesBuffered_27;
		int32_t L_3 = ___0_bytesWritten;
		__this->____writingHeadBytesBuffered_27 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (&__this->____writingHeadMemory_26);
		int32_t L_5 = ___0_bytesWritten;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6;
		L_6 = Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_inline(L_4, L_5, Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_RuntimeMethod_var);
		__this->____writingHeadMemory_26 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____writingHeadMemory_26))->____object_0), (void*)NULL);
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.Pipe::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 Pipe_FlushAsync_mCF7F7C094F0CE64BBB853AD02E2BB00B09C5EAC3 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_2 = L_0;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_3;
					if (!L_1)
					{
						goto IL_0027;
					}
				}
				{
					RuntimeObject* L_2 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0027:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_3), NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___0_cancellationToken;
			Pipe_PrepareFlushUnsynchronized_m15AAEA817EC6B229CF2648D144AEA61D45C2008A(__this, (&V_0), (&V_1), L_4, NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_5;
		L_5 = Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_5, (&V_0), NULL);
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 L_6 = V_1;
		return L_6;
	}
}
// System.Void System.IO.Pipelines.Pipe::PrepareFlushUnsynchronized(System.IO.Pipelines.CompletionData&,System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult>&,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_PrepareFlushUnsynchronized_m15AAEA817EC6B229CF2648D144AEA61D45C2008A (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* ___1_result, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1__ctor_m757F3F4A97F75BF5632ED28A48C0D8282A7FEA22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = Pipe_CommitUnsynchronized_m19023C238F5B601ADC0F8EEC6F2FAF2BF68400D9(__this, NULL);
		V_0 = L_0;
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_1 = (&__this->____writerAwaitable_15);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_signalWriterAwaitable_1;
		PipeAwaitable_BeginOperation_mA7883C5AEBE4BFC6F844C8E9554D611FDEFC9612_inline(L_1, L_2, L_3, __this, NULL);
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____writerAwaitable_15);
		bool L_5;
		L_5 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(L_4, NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E));
		Pipe_GetFlushResult_m2E157B376EBFFA65B0250C4DFD3238EE59DF7C08(__this, (&V_1), NULL);
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* L_6 = ___1_result;
		FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E L_7 = V_1;
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_inline((&L_8), L_7, /*hidden argument*/ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_RuntimeMethod_var);
		*(ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4*)L_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4*)L_6)->____obj_1), (void*)NULL);
		goto IL_0056;
	}

IL_0044:
	{
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* L_9 = ___1_result;
		DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* L_10 = __this->____writer_9;
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ValueTask_1__ctor_m757F3F4A97F75BF5632ED28A48C0D8282A7FEA22_inline((&L_11), L_10, (int16_t)0, /*hidden argument*/ValueTask_1__ctor_m757F3F4A97F75BF5632ED28A48C0D8282A7FEA22_RuntimeMethod_var);
		*(ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4*)L_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4*)L_9)->____obj_1), (void*)NULL);
	}

IL_0056:
	{
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_13 = (&__this->____readerAwaitable_14);
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_14 = ___0_completionData;
		PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227_inline(L_13, L_14, NULL);
		return;
	}

IL_0066:
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_15 = ___0_completionData;
		il2cpp_codegen_initobj(L_15, sizeof(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C));
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::CompleteWriter(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CompleteWriter_m098E7A23D08352B3CED1911AC2AF7C4E667E5553 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_3 = L_0;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_4;
					if (!L_1)
					{
						goto IL_004b;
					}
				}
				{
					RuntimeObject* L_2 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_4), NULL);
			bool L_4;
			L_4 = Pipe_CommitUnsynchronized_m19023C238F5B601ADC0F8EEC6F2FAF2BF68400D9(__this, NULL);
			PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_5 = (&__this->____writerCompletion_16);
			Exception_t* L_6 = ___0_exception;
			PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_7;
			L_7 = PipeCompletion_TryComplete_m5B8D597F7946C1711C8BFE7A5A8F932B6588EFC8(L_5, L_6, NULL);
			V_1 = L_7;
			PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_8 = (&__this->____readerAwaitable_14);
			PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227_inline(L_8, (&V_0), NULL);
			PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_9 = (&__this->____readerCompletion_17);
			bool L_10;
			L_10 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_9, NULL);
			V_2 = L_10;
			goto IL_004c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		Pipe_CompletePipe_m98F43F3512B52D256FB6DBA7F1029E458A7FF609(__this, NULL);
	}

IL_0055:
	{
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_13;
		L_13 = Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F(__this, NULL);
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_ScheduleCallbacks_mEEC18B3DEDA42F96760ECEC8625D2E32E28F33E3(L_13, L_14, NULL);
	}

IL_0064:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_15;
		L_15 = Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_15, (&V_0), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::AdvanceReader(System.SequencePosition&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AdvanceReader_m834BDFD19E42C65B6A24845D43ADE3F3FE04F65C (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* ___0_consumed, const RuntimeMethod* method) 
{
	{
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* L_0 = ___0_consumed;
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* L_1 = ___0_consumed;
		Pipe_AdvanceReader_mFB33553F0AE7B4E1FA38098FABCD5359E80EBE00(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::AdvanceReader(System.SequencePosition&,System.SequencePosition&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AdvanceReader_mFB33553F0AE7B4E1FA38098FABCD5359E80EBE00 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* ___0_consumed, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* ___1_examined, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_0 = (&__this->____readerCompletion_17);
		bool L_1;
		L_1 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NoReadingAllowed_mFD0ED21F5A03F9232D4592DEE3E90E1BC43E695F(NULL);
	}

IL_0012:
	{
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* L_2 = ___0_consumed;
		RuntimeObject* L_3;
		L_3 = SequencePosition_GetObject_m04F459B1FE3E46A74C1AB83B9CEE47B0B3969789_inline(L_2, NULL);
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* L_4 = ___0_consumed;
		int32_t L_5;
		L_5 = SequencePosition_GetInteger_mC0CBD9B4F6DF6205A30F76497C27C063AA7C3D0B_inline(L_4, NULL);
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* L_6 = ___1_examined;
		RuntimeObject* L_7;
		L_7 = SequencePosition_GetObject_m04F459B1FE3E46A74C1AB83B9CEE47B0B3969789_inline(L_6, NULL);
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* L_8 = ___1_examined;
		int32_t L_9;
		L_9 = SequencePosition_GetInteger_mC0CBD9B4F6DF6205A30F76497C27C063AA7C3D0B_inline(L_8, NULL);
		Pipe_AdvanceReader_m4F784E1E64B429E88C3E52F29C6D4B8C13DD303B(__this, ((BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)CastclassSealed((RuntimeObject*)L_3, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373_il2cpp_TypeInfo_var)), L_5, ((BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)CastclassSealed((RuntimeObject*)L_7, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373_il2cpp_TypeInfo_var)), L_9, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::AdvanceReader(System.IO.Pipelines.BufferSegment,System.Int32,System.IO.Pipelines.BufferSegment,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_AdvanceReader_m4F784E1E64B429E88C3E52F29C6D4B8C13DD303B (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_consumedSegment, int32_t ___1_consumedIndex, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___2_examinedSegment, int32_t ___3_examinedIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_1 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_8 = NULL;
	{
		(&V_0)->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_1), (void*)__this);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___0_consumedSegment;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_1 = ___2_examinedSegment;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_2 = ___0_consumedSegment;
		int32_t L_3 = ___1_consumedIndex;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_4 = ___2_examinedSegment;
		int32_t L_5 = ___3_examinedIndex;
		int64_t L_6;
		L_6 = BufferSegment_GetLength_mB95FA15C589777E586F870EA9D34DBD1EC3B61AB_inline(L_2, L_3, L_4, L_5, NULL);
		if ((((int64_t)L_6) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0021;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidExaminedOrConsumedPosition_m603884FB87ABE71205CE6CB2DF53D1227C37D5D4(NULL);
	}

IL_0021:
	{
		V_1 = (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL;
		(&V_0)->___returnEnd_0 = (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___returnEnd_0), (void*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C));
		RuntimeObject* L_7;
		L_7 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_3 = L_7;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01bd:
			{// begin finally (depth: 1)
				{
					bool L_8 = V_4;
					if (!L_8)
					{
						goto IL_01c7;
					}
				}
				{
					RuntimeObject* L_9 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_9, NULL);
				}

IL_01c7:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_10 = V_3;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_10, (&V_4), NULL);
				V_5 = (bool)0;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_11 = ___2_examinedSegment;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_12 = __this->____readTail_22;
				if ((!(((RuntimeObject*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)L_11) == ((RuntimeObject*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)L_12))))
				{
					goto IL_005d_1;
				}
			}
			{
				int32_t L_13 = ___3_examinedIndex;
				int32_t L_14 = __this->____readTailIndex_23;
				V_5 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
			}

IL_005d_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_15 = ___2_examinedSegment;
				if (!L_15)
				{
					goto IL_00d1_1;
				}
			}
			{
				int64_t L_16 = __this->____lastExaminedIndex_18;
				if ((((int64_t)L_16) < ((int64_t)((int64_t)0))))
				{
					goto IL_00d1_1;
				}
			}
			{
				int64_t L_17 = __this->____lastExaminedIndex_18;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_18 = ___2_examinedSegment;
				int32_t L_19 = ___3_examinedIndex;
				int64_t L_20;
				L_20 = BufferSegment_GetLength_m129BF3AB9FB45C20EA8E55849DB74BD4C902B08E_inline(L_17, L_18, L_19, NULL);
				V_6 = L_20;
				int64_t L_21 = __this->____unconsumedBytes_12;
				V_7 = L_21;
				int64_t L_22 = V_6;
				if ((((int64_t)L_22) >= ((int64_t)((int64_t)0))))
				{
					goto IL_008d_1;
				}
			}
			{
				ThrowHelper_ThrowInvalidOperationException_InvalidExaminedPosition_mABA820684341FF9D6D6C3BFB0DBA21738AADA32C(NULL);
			}

IL_008d_1:
			{
				int64_t L_23 = __this->____unconsumedBytes_12;
				int64_t L_24 = V_6;
				__this->____unconsumedBytes_12 = ((int64_t)il2cpp_codegen_subtract(L_23, L_24));
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_25 = ___2_examinedSegment;
				NullCheck(L_25);
				int64_t L_26;
				L_26 = ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline(L_25, ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
				int32_t L_27 = ___3_examinedIndex;
				__this->____lastExaminedIndex_18 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)L_27)));
				int64_t L_28 = V_7;
				int64_t L_29;
				L_29 = Pipe_get_ResumeWriterThreshold_m1E3B9BD5C95B12AD1CE32C4306E3FA60919CF6A2(__this, NULL);
				if ((((int64_t)L_28) < ((int64_t)L_29)))
				{
					goto IL_00d1_1;
				}
			}
			{
				int64_t L_30 = __this->____unconsumedBytes_12;
				int64_t L_31;
				L_31 = Pipe_get_ResumeWriterThreshold_m1E3B9BD5C95B12AD1CE32C4306E3FA60919CF6A2(__this, NULL);
				if ((((int64_t)L_30) >= ((int64_t)L_31)))
				{
					goto IL_00d1_1;
				}
			}
			{
				PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_32 = (&__this->____writerAwaitable_15);
				PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227_inline(L_32, (&V_2), NULL);
			}

IL_00d1_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_33 = ___0_consumedSegment;
				if (!L_33)
				{
					goto IL_016e_1;
				}
			}
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_34 = __this->____readHead_19;
				if (L_34)
				{
					goto IL_00e9_1;
				}
			}
			{
				ThrowHelper_ThrowInvalidOperationException_AdvanceToInvalidCursor_mC800A30BF62F718FEC7B0F98FD5878BCFC68E73C(NULL);
				goto IL_01d5;
			}

IL_00e9_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_35 = __this->____readHead_19;
				V_1 = L_35;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_36 = ___0_consumedSegment;
				(&V_0)->___returnEnd_0 = L_36;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___returnEnd_0), (void*)L_36);
				int32_t L_37 = ___1_consumedIndex;
				U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C L_38 = V_0;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_39 = L_38.___returnEnd_0;
				NullCheck(L_39);
				int32_t L_40;
				L_40 = BufferSegment_get_Length_m50DFF642D8E228B9E7A6B25F54B3D6FF9F7C3E35(L_39, NULL);
				if ((!(((uint32_t)L_37) == ((uint32_t)L_40))))
				{
					goto IL_0160_1;
				}
			}
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_41 = __this->____writingHead_25;
				U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C L_42 = V_0;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_43 = L_42.___returnEnd_0;
				if ((((RuntimeObject*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)L_41) == ((RuntimeObject*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)L_43)))
				{
					goto IL_011e_1;
				}
			}
			{
				Pipe_U3CAdvanceReaderU3Eg__MoveReturnEndToNextBlockU7C67_0_m1AC19462597E4CBB982E5FC31303B8A39890D7E1(__this, (&V_0), NULL);
				goto IL_016e_1;
			}

IL_011e_1:
			{
				int32_t L_44 = __this->____writingHeadBytesBuffered_27;
				if (L_44)
				{
					goto IL_0150_1;
				}
			}
			{
				PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_45 = (&__this->____operationState_28);
				bool L_46;
				L_46 = PipeOperationState_get_IsWritingActive_mBF1D9C8EBC2FA5CDE6AA16E260C16DC3EE06A38D(L_45, NULL);
				if (L_46)
				{
					goto IL_0150_1;
				}
			}
			{
				__this->____writingHead_25 = (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____writingHead_25), (void*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL);
				Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_47 = (&__this->____writingHeadMemory_26);
				il2cpp_codegen_initobj(L_47, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
				Pipe_U3CAdvanceReaderU3Eg__MoveReturnEndToNextBlockU7C67_0_m1AC19462597E4CBB982E5FC31303B8A39890D7E1(__this, (&V_0), NULL);
				goto IL_016e_1;
			}

IL_0150_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_48 = ___0_consumedSegment;
				__this->____readHead_19 = L_48;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____readHead_19), (void*)L_48);
				int32_t L_49 = ___1_consumedIndex;
				__this->____readHeadIndex_20 = L_49;
				goto IL_016e_1;
			}

IL_0160_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_50 = ___0_consumedSegment;
				__this->____readHead_19 = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____readHead_19), (void*)L_50);
				int32_t L_51 = ___1_consumedIndex;
				__this->____readHeadIndex_20 = L_51;
			}

IL_016e_1:
			{
				bool L_52 = V_5;
				if (!L_52)
				{
					goto IL_01a4_1;
				}
			}
			{
				PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_53 = (&__this->____writerCompletion_16);
				bool L_54;
				L_54 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_53, NULL);
				if (L_54)
				{
					goto IL_01a4_1;
				}
			}
			{
				PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_55 = (&__this->____readerAwaitable_14);
				PipeAwaitable_SetUncompleted_mC3B615F389C96AFA5C9D9E63856E4F187E4E520D_inline(L_55, NULL);
				goto IL_01a4_1;
			}

IL_018c_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_56 = V_1;
				NullCheck(L_56);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_57;
				L_57 = BufferSegment_get_NextSegment_m59FAA272F7120524F4D2E806A7541FBD0D6EFFA5_inline(L_56, NULL);
				V_8 = L_57;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_58 = V_1;
				NullCheck(L_58);
				BufferSegment_Reset_m37BBCF32F50BAF795C7BF21EAA89CC314F13BE47(L_58, NULL);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_59 = V_1;
				Pipe_ReturnSegmentUnsynchronized_mD4CCCF3C58AC4CA2CB2F98BB34B8AE9760D5C7E1(__this, L_59, NULL);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_60 = V_8;
				V_1 = L_60;
			}

IL_01a4_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_61 = V_1;
				if (!L_61)
				{
					goto IL_01b0_1;
				}
			}
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_62 = V_1;
				U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C L_63 = V_0;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_64 = L_63.___returnEnd_0;
				if ((!(((RuntimeObject*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)L_62) == ((RuntimeObject*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)L_64))))
				{
					goto IL_018c_1;
				}
			}

IL_01b0_1:
			{
				PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_65 = (&__this->____operationState_28);
				PipeOperationState_EndRead_m592D8ECEEF5BD6E0E527C028B0618E13AC20A17B_inline(L_65, NULL);
				goto IL_01c8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c8:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_66;
		L_66 = Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_66, (&V_2), NULL);
	}

IL_01d5:
	{
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::CompleteReader(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CompleteReader_m1BDDF7322D2DCDF8553994304DE25BB74B69AC0F (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* V_0 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_3 = L_0;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_4;
					if (!L_1)
					{
						goto IL_005c;
					}
				}
				{
					RuntimeObject* L_2 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_3;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_4), NULL);
				PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_4 = (&__this->____operationState_28);
				bool L_5;
				L_5 = PipeOperationState_get_IsReadingActive_m61DD1F887EAFBB136FCFC46CE7928EF2367B6F34(L_4, NULL);
				if (!L_5)
				{
					goto IL_002a_1;
				}
			}
			{
				PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_6 = (&__this->____operationState_28);
				PipeOperationState_EndRead_m592D8ECEEF5BD6E0E527C028B0618E13AC20A17B_inline(L_6, NULL);
			}

IL_002a_1:
			{
				PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_7 = (&__this->____readerCompletion_17);
				Exception_t* L_8 = ___0_exception;
				PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_9;
				L_9 = PipeCompletion_TryComplete_m5B8D597F7946C1711C8BFE7A5A8F932B6588EFC8(L_7, L_8, NULL);
				V_0 = L_9;
				PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_10 = (&__this->____writerAwaitable_15);
				PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227_inline(L_10, (&V_1), NULL);
				PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_11 = (&__this->____writerCompletion_16);
				bool L_12;
				L_12 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_11, NULL);
				V_2 = L_12;
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		Pipe_CompletePipe_m98F43F3512B52D256FB6DBA7F1029E458A7FF609(__this, NULL);
	}

IL_0066:
	{
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_15;
		L_15 = Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E(__this, NULL);
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_ScheduleCallbacks_mEEC18B3DEDA42F96760ECEC8625D2E32E28F33E3(L_15, L_16, NULL);
	}

IL_0075:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_17;
		L_17 = Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_17, (&V_1), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::OnWriterCompleted(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_OnWriterCompleted_m82DB33DF1D4BDFD2A21C265F6CFE6EA99F65AAA8 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_0 = ___0_callback;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m9FF2C61D01B45E18204A5BCE701802D97C1F9D09(2, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1;
		L_1 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0033;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0033:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
			PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_5 = (&__this->____writerCompletion_16);
			Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_6 = ___0_callback;
			RuntimeObject* L_7 = ___1_state;
			PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_8;
			L_8 = PipeCompletion_AddCallback_m77D9C6DAAF928586211719529948DB8B00DD5CC7(L_5, L_6, L_7, NULL);
			V_0 = L_8;
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_10;
		L_10 = Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F(__this, NULL);
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_ScheduleCallbacks_mEEC18B3DEDA42F96760ECEC8625D2E32E28F33E3(L_10, L_11, NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::CancelPendingRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CancelPendingRead_mD01B0070C7532DD9877991BCCBFEECF9E653921A (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
			PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____readerAwaitable_14);
			PipeAwaitable_Cancel_m0734BDB32F8210AA45ED03460148B6A12E2ED29F(L_4, (&V_0), NULL);
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_5;
		L_5 = Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_5, (&V_0), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::CancelPendingFlush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CancelPendingFlush_mA8A6724542CE64736535B318DEFD00282345D328 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
			PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____writerAwaitable_15);
			PipeAwaitable_Cancel_m0734BDB32F8210AA45ED03460148B6A12E2ED29F(L_4, (&V_0), NULL);
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_5;
		L_5 = Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_5, (&V_0), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::OnReaderCompleted(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_OnReaderCompleted_mB4BB37450BC5E108DAC02AF7FDC68B3703FA313A (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_0 = ___0_callback;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m9FF2C61D01B45E18204A5BCE701802D97C1F9D09(2, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1;
		L_1 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0033;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0033:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
			PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_5 = (&__this->____readerCompletion_17);
			Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_6 = ___0_callback;
			RuntimeObject* L_7 = ___1_state;
			PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_8;
			L_8 = PipeCompletion_AddCallback_m77D9C6DAAF928586211719529948DB8B00DD5CC7(L_5, L_6, L_7, NULL);
			V_0 = L_8;
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_10;
		L_10 = Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E(__this, NULL);
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_ScheduleCallbacks_mEEC18B3DEDA42F96760ECEC8625D2E32E28F33E3(L_10, L_11, NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult> System.IO.Pipelines.Pipe::ReadAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA Pipe_ReadAsync_mFF8EC5336168A98DEB518FBDA04E8631E6135A53 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromCanceled_TisReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_m4644A697A1AD4F64A092EA3F7A86ADF51D5136D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1__ctor_m27DF3B298A1EAE300EC3C960D227B95CAAD2B06A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1__ctor_mE440709E14F82653B50641151ADF98E61B0ED598_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1__ctor_mEADE5004D872062262E9A9FEF711B559E9A3A57A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_0 = (&__this->____readerCompletion_17);
		bool L_1;
		L_1 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NoReadingAllowed_mFD0ED21F5A03F9232D4592DEE3E90E1BC43E695F(NULL);
	}

IL_0012:
	{
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_token), NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_token;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* L_4;
		L_4 = Task_FromCanceled_TisReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_m4644A697A1AD4F64A092EA3F7A86ADF51D5136D8(L_3, Task_FromCanceled_TisReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_m4644A697A1AD4F64A092EA3F7A86ADF51D5136D8_RuntimeMethod_var);
		ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA L_5;
		memset((&L_5), 0, sizeof(L_5));
		ValueTask_1__ctor_mE440709E14F82653B50641151ADF98E61B0ED598_inline((&L_5), L_4, /*hidden argument*/ValueTask_1__ctor_mE440709E14F82653B50641151ADF98E61B0ED598_RuntimeMethod_var);
		return L_5;
	}

IL_0027:
	{
		RuntimeObject* L_6;
		L_6 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_1 = L_6;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				{
					bool L_7 = V_2;
					if (!L_7)
					{
						goto IL_0080;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_8, NULL);
				}

IL_0080:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_9 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_9, (&V_2), NULL);
				PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_10 = (&__this->____readerAwaitable_14);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___0_token;
				il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_signalReaderAwaitable_0;
				PipeAwaitable_BeginOperation_mA7883C5AEBE4BFC6F844C8E9554D611FDEFC9612_inline(L_10, L_11, L_12, __this, NULL);
				PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_13 = (&__this->____readerAwaitable_14);
				bool L_14;
				L_14 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(L_13, NULL);
				if (!L_14)
				{
					goto IL_0068_1;
				}
			}
			{
				Pipe_GetReadResult_mE381A634DAC41A4DC5B2A469FE74168B7827DDC1(__this, (&V_3), NULL);
				ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 L_15 = V_3;
				ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA L_16;
				memset((&L_16), 0, sizeof(L_16));
				ValueTask_1__ctor_m27DF3B298A1EAE300EC3C960D227B95CAAD2B06A_inline((&L_16), L_15, /*hidden argument*/ValueTask_1__ctor_m27DF3B298A1EAE300EC3C960D227B95CAAD2B06A_RuntimeMethod_var);
				V_0 = L_16;
				goto IL_0081;
			}

IL_0068_1:
			{
				DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* L_17 = __this->____reader_8;
				ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA L_18;
				memset((&L_18), 0, sizeof(L_18));
				ValueTask_1__ctor_mEADE5004D872062262E9A9FEF711B559E9A3A57A_inline((&L_18), L_17, (int16_t)0, /*hidden argument*/ValueTask_1__ctor_mEADE5004D872062262E9A9FEF711B559E9A3A57A_RuntimeMethod_var);
				V_0 = L_18;
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA L_19 = V_0;
		return L_19;
	}
}
// System.Boolean System.IO.Pipelines.Pipe::TryRead(System.IO.Pipelines.ReadResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pipe_TryRead_m7BE95545BB7685F9E3FBB5ED84EA2CBC586FDA60 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0076;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0076:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_4 = (&__this->____readerCompletion_17);
				bool L_5;
				L_5 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_4, NULL);
				if (!L_5)
				{
					goto IL_0023_1;
				}
			}
			{
				ThrowHelper_ThrowInvalidOperationException_NoReadingAllowed_mFD0ED21F5A03F9232D4592DEE3E90E1BC43E695F(NULL);
			}

IL_0023_1:
			{
				int64_t L_6 = __this->____unconsumedBytes_12;
				if ((((int64_t)L_6) > ((int64_t)((int64_t)0))))
				{
					goto IL_003a_1;
				}
			}
			{
				PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_7 = (&__this->____readerAwaitable_14);
				bool L_8;
				L_8 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(L_7, NULL);
				if (!L_8)
				{
					goto IL_0045_1;
				}
			}

IL_003a_1:
			{
				ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* L_9 = ___0_result;
				Pipe_GetReadResult_mE381A634DAC41A4DC5B2A469FE74168B7827DDC1(__this, L_9, NULL);
				V_2 = (bool)1;
				goto IL_0077;
			}

IL_0045_1:
			{
				PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_10 = (&__this->____readerAwaitable_14);
				bool L_11;
				L_11 = PipeAwaitable_get_IsRunning_m785D828B5D168DF3640E49A3A053C3DCB93F06CA(L_10, NULL);
				if (!L_11)
				{
					goto IL_0057_1;
				}
			}
			{
				ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF(NULL);
			}

IL_0057_1:
			{
				PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_12 = (&__this->____operationState_28);
				PipeOperationState_BeginReadTentative_mDF3FDE2C7FBEA5B5A576420DCC399C670253316B_inline(L_12, NULL);
				ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* L_13 = ___0_result;
				il2cpp_codegen_initobj(L_13, sizeof(ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644));
				V_2 = (bool)0;
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void System.IO.Pipelines.Pipe::ScheduleCallbacks(System.IO.Pipelines.PipeScheduler,System.IO.Pipelines.PipeCompletionCallbacks)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_ScheduleCallbacks_mEEC18B3DEDA42F96760ECEC8625D2E32E28F33E3 (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___0_scheduler, PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* ___1_completionCallbacks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_0 = ___0_scheduler;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_invokeCompletionCallbacks_2;
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_2 = ___1_completionCallbacks;
		NullCheck(L_0);
		VirtualActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(5 /* System.Void System.IO.Pipelines.PipeScheduler::UnsafeSchedule(System.Action`1<System.Object>,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::TrySchedule(System.IO.Pipelines.PipeScheduler,System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___0_scheduler, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___1_completionData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_0 = ___1_completionData;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1;
		L_1 = CompletionData_get_Completion_m38CE7CBB6C0D0387BDA92B1705244ADBDC9008EE_inline(L_0, NULL);
		V_0 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_3 = ___1_completionData;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_4;
		L_4 = CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_5 = ___1_completionData;
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6;
		L_6 = CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_7 = ___0_scheduler;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_9 = ___1_completionData;
		RuntimeObject* L_10;
		L_10 = CompletionData_get_CompletionState_mD9C390FC5F9C9FA139BFB1E0003A3003F95E78B9_inline(L_9, NULL);
		NullCheck(L_7);
		VirtualActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(5 /* System.Void System.IO.Pipelines.PipeScheduler::UnsafeSchedule(System.Action`1<System.Object>,System.Object) */, L_7, L_8, L_10);
		return;
	}

IL_0029:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_11 = ___0_scheduler;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_12 = ___1_completionData;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_ScheduleWithContext_m80969848A1D8D1E22B1051D5B7790D6BD080C7D9(L_11, L_12, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::ScheduleWithContext(System.IO.Pipelines.PipeScheduler,System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Pipe_ScheduleWithContext_m80969848A1D8D1E22B1051D5B7790D6BD080C7D9 (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___0_scheduler, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___1_completionData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_0 = ___1_completionData;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_1;
		L_1 = CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_2 = ___0_scheduler;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_scheduleWithExecutionContextCallback_6;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_4 = ___1_completionData;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_5 = (*(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)L_4);
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_6 = L_5;
		RuntimeObject* L_7 = Box(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_2);
		VirtualActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(5 /* System.Void System.IO.Pipelines.PipeScheduler::UnsafeSchedule(System.Action`1<System.Object>,System.Object) */, L_2, L_3, L_7);
		return;
	}

IL_001f:
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_8 = ___1_completionData;
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_9;
		L_9 = CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0043;
		}
	}
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_10 = ___1_completionData;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_11;
		L_11 = CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_12 = ((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_syncContextExecuteWithoutExecutionContextCallback_5;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_13 = ___1_completionData;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_14 = (*(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)L_13);
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_15 = L_14;
		RuntimeObject* L_16 = Box(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_11);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_11, L_12, L_16);
		return;
	}

IL_0043:
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_17 = ___1_completionData;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_18;
		L_18 = CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_inline(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_19 = ((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_syncContextExecutionContextCallback_4;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_20 = ___1_completionData;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_21 = (*(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)L_20);
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_22 = L_21;
		RuntimeObject* L_23 = Box(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_18);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_18, L_19, L_23);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::ExecuteWithoutExecutionContext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_ExecuteWithoutExecutionContext_mCE022A08AAE43B1BDA4CBBDCCBD38070EE46F794 (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((*(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)UnBox(L_0, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var))));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1;
		L_1 = CompletionData_get_Completion_m38CE7CBB6C0D0387BDA92B1705244ADBDC9008EE_inline((&V_0), NULL);
		RuntimeObject* L_2;
		L_2 = CompletionData_get_CompletionState_mD9C390FC5F9C9FA139BFB1E0003A3003F95E78B9_inline((&V_0), NULL);
		NullCheck(L_1);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_1, L_2, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::ExecuteWithExecutionContext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_ExecuteWithExecutionContext_m463E3B03575513E5669C2E6D358A5CEE6670290E (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((*(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)UnBox(L_0, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C_il2cpp_TypeInfo_var))));
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_1;
		L_1 = CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* L_2 = ((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_executionContextRawCallback_3;
		RuntimeObject* L_3 = ___0_state;
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		ExecutionContext_Run_m9C6E6249D96EA4974FD420E5FF141C221C9C1BE5(L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::CompletePipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_CompletePipe_m98F43F3512B52D256FB6DBA7F1029E458A7FF609 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_2 = NULL;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_3 = NULL;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* G_B5_0 = NULL;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* G_B4_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_007b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_007b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				bool L_4 = __this->____disposed_21;
				if (!L_4)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_007c;
			}

IL_001b_1:
			{
				__this->____disposed_21 = (bool)1;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_5 = __this->____readHead_19;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_6 = L_5;
				G_B4_0 = L_6;
				if (L_6)
				{
					G_B5_0 = L_6;
					goto IL_0032_1;
				}
			}
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_7 = __this->____readTail_22;
				G_B5_0 = L_7;
			}

IL_0032_1:
			{
				V_2 = G_B5_0;
				goto IL_0044_1;
			}

IL_0035_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_8 = V_2;
				V_3 = L_8;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_9 = V_2;
				NullCheck(L_9);
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_10;
				L_10 = BufferSegment_get_NextSegment_m59FAA272F7120524F4D2E806A7541FBD0D6EFFA5_inline(L_9, NULL);
				V_2 = L_10;
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_11 = V_3;
				NullCheck(L_11);
				BufferSegment_Reset_m37BBCF32F50BAF795C7BF21EAA89CC314F13BE47(L_11, NULL);
			}

IL_0044_1:
			{
				BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_12 = V_2;
				if (L_12)
				{
					goto IL_0035_1;
				}
			}
			{
				__this->____writingHead_25 = (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____writingHead_25), (void*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL);
				Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_13 = (&__this->____writingHeadMemory_26);
				il2cpp_codegen_initobj(L_13, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
				__this->____readHead_19 = (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____readHead_19), (void*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL);
				__this->____readTail_22 = (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____readTail_22), (void*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)NULL);
				__this->____lastExaminedIndex_18 = ((int64_t)(-1));
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		return;
	}
}
// System.Threading.Tasks.Sources.ValueTaskSourceStatus System.IO.Pipelines.Pipe::GetReadAsyncStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pipe_GetReadAsyncStatus_mC9660F294FE13F6C6C6DBFF5FB2F7EB9CFAF5100 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_0 = (&__this->____readerAwaitable_14);
		bool L_1;
		L_1 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_2 = (&__this->____writerCompletion_16);
		bool L_3;
		L_3 = PipeCompletion_get_IsFaulted_m2F255C9CFC47565457BF3694836741D706BBDE8A(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_001c:
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		return (int32_t)(0);
	}
}
// System.Void System.IO.Pipelines.Pipe::OnReadAsyncCompleted(System.Action`1<System.Object>,System.Object,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_OnReadAsyncCompleted_m3F480015C17CCD7A1A68AA980E2A79E63DA790A5 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_2 = L_0;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_3;
					if (!L_1)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_2 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_3), NULL);
			PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____readerAwaitable_14);
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
			RuntimeObject* L_6 = ___1_state;
			int32_t L_7 = ___2_flags;
			PipeAwaitable_OnCompleted_m281E875FBB8A8BB3BDAE663FCCB6D8850EC64C89(L_4, L_5, L_6, L_7, (&V_0), (&V_1), NULL);
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8* L_9;
		L_9 = Pipe_get_Writer_mD442001BC04EE87D78C2B27E2987ADAAFBE8A0D5_inline(__this, NULL);
		Exception_t* L_10;
		L_10 = ThrowHelper_CreateInvalidOperationException_NoConcurrentOperation_m1C7F04504CA2B6F2E31342929B771D426BC53C80(NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Exception_t* >::Invoke(6 /* System.Void System.IO.Pipelines.PipeWriter::Complete(System.Exception) */, L_9, L_10);
	}

IL_0042:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_11;
		L_11 = Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_11, (&V_0), NULL);
		return;
	}
}
// System.IO.Pipelines.ReadResult System.IO.Pipelines.Pipe::GetReadAsyncResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 Pipe_GetReadAsyncResult_m545D93975494BF9F8F4D3E120C13C055D52EB725 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 V_0;
	memset((&V_0), 0, sizeof(V_0));
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_1;
	memset((&V_1), 0, sizeof(V_1));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389));
		il2cpp_codegen_initobj((&V_2), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_0;
				L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
				V_3 = L_0;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_004c_1:
					{// begin finally (depth: 2)
						{
							bool L_1 = V_4;
							if (!L_1)
							{
								goto IL_0056_1;
							}
						}
						{
							RuntimeObject* L_2 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
						}

IL_0056_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_3 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_4), NULL);
						PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____readerAwaitable_14);
						bool L_5;
						L_5 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(L_4, NULL);
						if (L_5)
						{
							goto IL_0034_2;
						}
					}
					{
						ThrowHelper_ThrowInvalidOperationException_GetResultNotCompleted_m68687070E4FAC351F1D818D97EF44432AC9BDDCD(NULL);
					}

IL_0034_2:
					{
						PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_6 = (&__this->____readerAwaitable_14);
						CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_7;
						L_7 = PipeAwaitable_ReleaseCancellationTokenRegistration_m8439D89D7A06A4B86DB060A279B2A43648DB8505_inline(L_6, (&V_2), NULL);
						V_1 = L_7;
						Pipe_GetReadResult_mE381A634DAC41A4DC5B2A469FE74168B7827DDC1(__this, (&V_0), NULL);
						goto IL_005f;
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

IL_005f:
	{
		bool L_8;
		L_8 = ReadResult_get_IsCanceled_m03BDA3AA806DFEF700B726CB9FF4B3134A3EC974((&V_0), NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&V_2), NULL);
	}

IL_006f:
	{
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 L_9 = V_0;
		return L_9;
	}
}
// System.Void System.IO.Pipelines.Pipe::GetReadResult(System.IO.Pipelines.ReadResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_GetReadResult_mE381A634DAC41A4DC5B2A469FE74168B7827DDC1 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequence_1__ctor_m74DC3FF576D92A17557DE1331315148047B9F9C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_2 = NULL;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A V_3;
	memset((&V_3), 0, sizeof(V_3));
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_0 = (&__this->____writerCompletion_16);
		bool L_1;
		L_1 = PipeCompletion_IsCompletedOrThrow_m119F9ECC0F21F2999A76CD762E8BB45EDCFA031F_inline(L_0, NULL);
		V_0 = L_1;
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_2 = (&__this->____readerAwaitable_14);
		bool L_3;
		L_3 = PipeAwaitable_ObserveCancellation_m1A6012106CF7DFEB8D6CD3155C7EF727D4A40BED_inline(L_2, NULL);
		V_1 = L_3;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_4 = __this->____readHead_19;
		V_2 = L_4;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_5 = V_2;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_6 = V_2;
		int32_t L_7 = __this->____readHeadIndex_20;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_8 = __this->____readTail_22;
		int32_t L_9 = __this->____readTailIndex_23;
		ReadOnlySequence_1__ctor_m74DC3FF576D92A17557DE1331315148047B9F9C0((&V_3), L_6, L_7, L_8, L_9, ReadOnlySequence_1__ctor_m74DC3FF576D92A17557DE1331315148047B9F9C0_RuntimeMethod_var);
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* L_10 = ___0_result;
		ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A L_11 = V_3;
		bool L_12 = V_1;
		bool L_13 = V_0;
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ReadResult__ctor_m7AC1F674D50780D7B40EDF84B685699A6633F269((&L_14), L_11, L_12, L_13, /*hidden argument*/NULL);
		*(ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*)L_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*)L_10)->____resultBuffer_0))->____startObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*)L_10)->____resultBuffer_0))->____endObject_1), (void*)NULL);
		#endif
		goto IL_0063;
	}

IL_004c:
	{
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* L_15 = ___0_result;
		il2cpp_codegen_initobj((&V_4), sizeof(ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A));
		ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A L_16 = V_4;
		bool L_17 = V_1;
		bool L_18 = V_0;
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 L_19;
		memset((&L_19), 0, sizeof(L_19));
		ReadResult__ctor_m7AC1F674D50780D7B40EDF84B685699A6633F269((&L_19), L_16, L_17, L_18, /*hidden argument*/NULL);
		*(ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*)L_15 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*)L_15)->____resultBuffer_0))->____startObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*)L_15)->____resultBuffer_0))->____endObject_1), (void*)NULL);
		#endif
	}

IL_0063:
	{
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_0073;
		}
	}
	{
		PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_21 = (&__this->____operationState_28);
		PipeOperationState_BeginReadTentative_mDF3FDE2C7FBEA5B5A576420DCC399C670253316B_inline(L_21, NULL);
		goto IL_007e;
	}

IL_0073:
	{
		PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_22 = (&__this->____operationState_28);
		PipeOperationState_BeginRead_mEC431AD546BABA74218A38691A958B0C88FE39AA_inline(L_22, NULL);
	}

IL_007e:
	{
		__this->____minimumReadBytes_24 = 0;
		return;
	}
}
// System.Threading.Tasks.Sources.ValueTaskSourceStatus System.IO.Pipelines.Pipe::GetFlushAsyncStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pipe_GetFlushAsyncStatus_m7973C183D3F3818C52E8B1BF50179B64F5F876A3 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_0 = (&__this->____writerAwaitable_15);
		bool L_1;
		L_1 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_2 = (&__this->____readerCompletion_17);
		bool L_3;
		L_3 = PipeCompletion_get_IsFaulted_m2F255C9CFC47565457BF3694836741D706BBDE8A(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_001c:
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		return (int32_t)(0);
	}
}
// System.IO.Pipelines.FlushResult System.IO.Pipelines.Pipe::GetFlushAsyncResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E Pipe_GetFlushAsyncResult_mFD447A9A765EA159CE118089A0705208DDED4027 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E V_0;
	memset((&V_0), 0, sizeof(V_0));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_1;
	memset((&V_1), 0, sizeof(V_1));
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E));
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		il2cpp_codegen_initobj((&V_2), sizeof(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((&V_2), NULL);
				CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_0;
				L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
				V_3 = L_0;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0054_1:
					{// begin finally (depth: 2)
						{
							bool L_1 = V_4;
							if (!L_1)
							{
								goto IL_005e_1;
							}
						}
						{
							RuntimeObject* L_2 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
						}

IL_005e_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_3 = V_3;
						Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_4), NULL);
						PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____writerAwaitable_15);
						bool L_5;
						L_5 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(L_4, NULL);
						if (L_5)
						{
							goto IL_003c_2;
						}
					}
					{
						ThrowHelper_ThrowInvalidOperationException_GetResultNotCompleted_m68687070E4FAC351F1D818D97EF44432AC9BDDCD(NULL);
					}

IL_003c_2:
					{
						Pipe_GetFlushResult_m2E157B376EBFFA65B0250C4DFD3238EE59DF7C08(__this, (&V_0), NULL);
						PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_6 = (&__this->____writerAwaitable_15);
						CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_7;
						L_7 = PipeAwaitable_ReleaseCancellationTokenRegistration_m8439D89D7A06A4B86DB060A279B2A43648DB8505_inline(L_6, (&V_1), NULL);
						V_2 = L_7;
						goto IL_006e;
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

IL_006e:
	{
		FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E L_8 = V_0;
		return L_8;
	}
}
// System.Void System.IO.Pipelines.Pipe::GetFlushResult(System.IO.Pipelines.FlushResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_GetFlushResult_m2E157B376EBFFA65B0250C4DFD3238EE59DF7C08 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* ___0_result, const RuntimeMethod* method) 
{
	{
		PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_0 = (&__this->____writerAwaitable_15);
		bool L_1;
		L_1 = PipeAwaitable_ObserveCancellation_m1A6012106CF7DFEB8D6CD3155C7EF727D4A40BED_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* L_2 = ___0_result;
		uint8_t* L_3 = (&L_2->____resultFlags_0);
		uint8_t* L_4 = L_3;
		int32_t L_5 = *((uint8_t*)L_4);
		*((int8_t*)L_4) = (int8_t)((int32_t)(L_5|1));
	}

IL_0018:
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_6 = (&__this->____readerCompletion_17);
		bool L_7;
		L_7 = PipeCompletion_IsCompletedOrThrow_m119F9ECC0F21F2999A76CD762E8BB45EDCFA031F_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* L_8 = ___0_result;
		uint8_t* L_9 = (&L_8->____resultFlags_0);
		uint8_t* L_10 = L_9;
		int32_t L_11 = *((uint8_t*)L_10);
		*((int8_t*)L_10) = (int8_t)((int32_t)(L_11|2));
	}

IL_0030:
	{
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.Pipe::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 Pipe_WriteAsync_m0FB6B53C2C140C218267E648B49E9FD0CE9CF022 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_CopyTo_m636823FFDFBA21CBEB9482D32A178A058377DE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_0 = (&__this->____writerCompletion_16);
		bool L_1;
		L_1 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NoWritingAllowed_m9EE7C1DDF70E86F4BD14DEEF4F769A2387CF4695(NULL);
	}

IL_0012:
	{
		PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* L_2 = (&__this->____readerCompletion_17);
		bool L_3;
		L_3 = PipeCompletion_IsCompletedOrThrow_m119F9ECC0F21F2999A76CD762E8BB45EDCFA031F_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E L_4;
		memset((&L_4), 0, sizeof(L_4));
		FlushResult__ctor_m7CEA5006A3A100B4DF694881A0B3BF2E458B6119((&L_4), (bool)0, (bool)1, /*hidden argument*/NULL);
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_inline((&L_5), L_4, /*hidden argument*/ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_RuntimeMethod_var);
		return L_5;
	}

IL_002c:
	{
		RuntimeObject* L_6;
		L_6 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_2 = L_6;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{// begin finally (depth: 1)
				{
					bool L_7 = V_3;
					if (!L_7)
					{
						goto IL_0097;
					}
				}
				{
					RuntimeObject* L_8 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_8, NULL);
				}

IL_0097:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_9 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_9, (&V_3), NULL);
				Pipe_AllocateWriteHeadIfNeeded_mD1A291629EFE7085BB2A6F97406E5C9A5BCA70BA_inline(__this, 0, NULL);
				int32_t L_10;
				L_10 = ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392((&___0_source), ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
				Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_11 = (&__this->____writingHeadMemory_26);
				int32_t L_12;
				L_12 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_11, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
				if ((((int32_t)L_10) > ((int32_t)L_12)))
				{
					goto IL_0074_1;
				}
			}
			{
				Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_13 = __this->____writingHeadMemory_26;
				ReadOnlyMemory_1_CopyTo_m636823FFDFBA21CBEB9482D32A178A058377DE87((&___0_source), L_13, ReadOnlyMemory_1_CopyTo_m636823FFDFBA21CBEB9482D32A178A058377DE87_RuntimeMethod_var);
				int32_t L_14;
				L_14 = ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392((&___0_source), ReadOnlyMemory_1_get_Length_m2E20B5DC76A91D078F8827624C654EB90EFD5392_RuntimeMethod_var);
				Pipe_AdvanceCore_m0D648E24601E1FB21F02B02470B2F28203EB6E0D_inline(__this, L_14, NULL);
				goto IL_0081_1;
			}

IL_0074_1:
			{
				ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_15;
				L_15 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline((&___0_source), ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
				Pipe_WriteMultiSegment_mDAFFA035F90B24DB8342353D23271B67A0E21B47(__this, L_15, NULL);
			}

IL_0081_1:
			{
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = ___1_cancellationToken;
				Pipe_PrepareFlushUnsynchronized_m15AAEA817EC6B229CF2648D144AEA61D45C2008A(__this, (&V_0), (&V_1), L_16, NULL);
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_17;
		L_17 = Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_17, (&V_0), NULL);
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 L_18 = V_1;
		return L_18;
	}
}
// System.Void System.IO.Pipelines.Pipe::WriteMultiSegment(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_WriteMultiSegment_mDAFFA035F90B24DB8342353D23271B67A0E21B47 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_2 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (&__this->____writingHeadMemory_26);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_0, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	{
		int32_t L_2;
		L_2 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&V_0), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		int32_t L_3;
		L_3 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&___0_source), 0, L_5, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		V_3 = L_6;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7 = V_0;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_3), L_7, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_8 = V_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_9;
		L_9 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___0_source), L_8, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___0_source = L_9;
		int32_t L_10 = V_1;
		Pipe_AdvanceCore_m0D648E24601E1FB21F02B02470B2F28203EB6E0D_inline(__this, L_10, NULL);
		int32_t L_11;
		L_11 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_12 = __this->____writingHead_25;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BufferSegment_get_End_m273C21B558B88E92EB1B8B3B6EE5EF00B405900B_inline(L_13, NULL);
		int32_t L_15 = __this->____writingHeadBytesBuffered_27;
		NullCheck(L_13);
		BufferSegment_set_End_m23C3EC2B76C81B8C5B28FDA3AE6160A0549DA8F9(L_13, ((int32_t)il2cpp_codegen_add(L_14, L_15)), NULL);
		__this->____writingHeadBytesBuffered_27 = 0;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_16;
		L_16 = Pipe_AllocateSegment_mD51EC425B57FB53B5A3D9C00A853464E39B18284(__this, 0, NULL);
		V_2 = L_16;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_17 = __this->____writingHead_25;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_18 = V_2;
		NullCheck(L_17);
		BufferSegment_SetNext_m6ED747816806BDD709C5F3EB080472471171FC65(L_17, L_18, NULL);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_19 = V_2;
		__this->____writingHead_25 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writingHead_25), (void*)L_19);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_20 = (&__this->____writingHeadMemory_26);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_20, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_21;
		goto IL_000c;
	}

IL_0097:
	{
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::OnFlushAsyncCompleted(System.Action`1<System.Object>,System.Object,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_OnFlushAsyncCompleted_m5FC7040B9B22781F788D5C7D81B7FC0B28D6AF50 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_2 = L_0;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_3;
					if (!L_1)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_2 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_2;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_3), NULL);
			PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____writerAwaitable_15);
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
			RuntimeObject* L_6 = ___1_state;
			int32_t L_7 = ___2_flags;
			PipeAwaitable_OnCompleted_m281E875FBB8A8BB3BDAE663FCCB6D8850EC64C89(L_4, L_5, L_6, L_7, (&V_0), (&V_1), NULL);
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135* L_9;
		L_9 = Pipe_get_Reader_mC3B7234B16037A59B3719BD059A977BF2C3153C9_inline(__this, NULL);
		Exception_t* L_10;
		L_10 = ThrowHelper_CreateInvalidOperationException_NoConcurrentOperation_m1C7F04504CA2B6F2E31342929B771D426BC53C80(NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void System.IO.Pipelines.PipeReader::Complete(System.Exception) */, L_9, L_10);
	}

IL_0042:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_11;
		L_11 = Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_11, (&V_0), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::ReaderCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_ReaderCancellationRequested_m2FBB1812D8FBF6C5FFBCA11A9007ADFFD5E7915A (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
			PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____readerAwaitable_14);
			PipeAwaitable_CancellationTokenFired_m0472E73439597ACFF16C1B3507F16716DDC77BBD(L_4, (&V_0), NULL);
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_5;
		L_5 = Pipe_get_ReaderScheduler_m38C64EFD07C5A05BE44071A8B0EE0AE847772A4F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_5, (&V_0), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::WriterCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_WriterCancellationRequested_mAA88238E010CD60F97A8731DD5A955FC9277B159 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0;
		L_0 = Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline(__this, NULL);
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
			PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* L_4 = (&__this->____writerAwaitable_15);
			PipeAwaitable_CancellationTokenFired_m0472E73439597ACFF16C1B3507F16716DDC77BBD(L_4, (&V_0), NULL);
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_5;
		L_5 = Pipe_get_WriterScheduler_m42E84DF46B1693678AECCFE6FE505A9A7983A79E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline(L_5, (&V_0), NULL);
		return;
	}
}
// System.IO.Pipelines.PipeReader System.IO.Pipelines.Pipe::get_Reader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135* Pipe_get_Reader_mC3B7234B16037A59B3719BD059A977BF2C3153C9 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* L_0 = __this->____reader_8;
		return L_0;
	}
}
// System.IO.Pipelines.PipeWriter System.IO.Pipelines.Pipe::get_Writer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8* Pipe_get_Writer_mD442001BC04EE87D78C2B27E2987ADAAFBE8A0D5 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* L_0 = __this->____writer_9;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.Pipe::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe__cctor_mE8142960AB2DDF85C609E927F63E7DE8891F927C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_ExecuteWithExecutionContext_m463E3B03575513E5669C2E6D358A5CEE6670290E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_ExecuteWithoutExecutionContext_mCE022A08AAE43B1BDA4CBBDCCBD38070EE46F794_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__100_0_m0B9CD51A833F602BBB92A1964F7F1400F66D7D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__100_1_m58CED838F7E6B1475523D8F7C046AC86392DF68F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__100_2_mF08D33EE71918EAAEBCD49685CEAE2425CF5CB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var);
		U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* L_0 = ((U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__100_0_m0B9CD51A833F602BBB92A1964F7F1400F66D7D38_RuntimeMethod_var), NULL);
		((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_signalReaderAwaitable_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_signalReaderAwaitable_0), (void*)L_1);
		U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* L_2 = ((U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__100_1_m58CED838F7E6B1475523D8F7C046AC86392DF68F_RuntimeMethod_var), NULL);
		((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_signalWriterAwaitable_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_signalWriterAwaitable_1), (void*)L_3);
		U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* L_4 = ((U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__100_2_mF08D33EE71918EAAEBCD49685CEAE2425CF5CB7A_RuntimeMethod_var), NULL);
		((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_invokeCompletionCallbacks_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_invokeCompletionCallbacks_2), (void*)L_5);
		ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* L_6 = (ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007*)il2cpp_codegen_object_new(ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ContextCallback__ctor_mE29213BA3FC5DDDBF194D6D58A4E51F309FD98FA(L_6, NULL, (intptr_t)((void*)Pipe_ExecuteWithoutExecutionContext_mCE022A08AAE43B1BDA4CBBDCCBD38070EE46F794_RuntimeMethod_var), NULL);
		((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_executionContextRawCallback_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_executionContextRawCallback_3), (void*)L_6);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_7 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_7, NULL, (intptr_t)((void*)Pipe_ExecuteWithExecutionContext_m463E3B03575513E5669C2E6D358A5CEE6670290E_RuntimeMethod_var), NULL);
		((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_syncContextExecutionContextCallback_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_syncContextExecutionContextCallback_4), (void*)L_7);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_8 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_8, NULL, (intptr_t)((void*)Pipe_ExecuteWithoutExecutionContext_mCE022A08AAE43B1BDA4CBBDCCBD38070EE46F794_RuntimeMethod_var), NULL);
		((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_syncContextExecuteWithoutExecutionContextCallback_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_syncContextExecuteWithoutExecutionContextCallback_5), (void*)L_8);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_9, NULL, (intptr_t)((void*)Pipe_ExecuteWithExecutionContext_m463E3B03575513E5669C2E6D358A5CEE6670290E_RuntimeMethod_var), NULL);
		((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_scheduleWithExecutionContextCallback_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_StaticFields*)il2cpp_codegen_static_fields_for(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var))->___s_scheduleWithExecutionContextCallback_6), (void*)L_9);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe::<AdvanceReader>g__MoveReturnEndToNextBlock|67_0(System.IO.Pipelines.Pipe/<>c__DisplayClass67_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipe_U3CAdvanceReaderU3Eg__MoveReturnEndToNextBlockU7C67_0_m1AC19462597E4CBB982E5FC31303B8A39890D7E1 (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C* ___0_p, const RuntimeMethod* method) 
{
	BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C* L_0 = ___0_p;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_1 = L_0->___returnEnd_0;
		NullCheck(L_1);
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_2;
		L_2 = BufferSegment_get_NextSegment_m59FAA272F7120524F4D2E806A7541FBD0D6EFFA5_inline(L_1, NULL);
		V_0 = L_2;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_3 = __this->____readTail_22;
		U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C* L_4 = ___0_p;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_5 = L_4->___returnEnd_0;
		if ((!(((RuntimeObject*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)L_3) == ((RuntimeObject*)(BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373*)L_5))))
		{
			goto IL_0028;
		}
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_6 = V_0;
		__this->____readTail_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____readTail_22), (void*)L_6);
		__this->____readTailIndex_23 = 0;
	}

IL_0028:
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_7 = V_0;
		__this->____readHead_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____readHead_19), (void*)L_7);
		__this->____readHeadIndex_20 = 0;
		U3CU3Ec__DisplayClass67_0_tDD7FF7D1DF0032D2CAE4642FD92309865A761B7C* L_8 = ___0_p;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_9 = V_0;
		L_8->___returnEnd_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___returnEnd_0), (void*)L_9);
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
// System.Void System.IO.Pipelines.Pipe/DefaultPipeReader::.ctor(System.IO.Pipelines.Pipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeReader__ctor_mA2C0F15F3E2BE52CCE4EC06CCC3D9A41506B4881 (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* ___0_pipe, const RuntimeMethod* method) 
{
	{
		PipeReader__ctor_mAEFF56D3E0D6F1E1150CF0D0ED95A497408B5078(__this, NULL);
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = ___0_pipe;
		__this->____pipe_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pipe_0), (void*)L_0);
		return;
	}
}
// System.Boolean System.IO.Pipelines.Pipe/DefaultPipeReader::TryRead(System.IO.Pipelines.ReadResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultPipeReader_TryRead_mBA8D17F00C98808F5C2A62D804E924C7C7F581B1 (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* ___0_result, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* L_1 = ___0_result;
		NullCheck(L_0);
		bool L_2;
		L_2 = Pipe_TryRead_m7BE95545BB7685F9E3FBB5ED84EA2CBC586FDA60(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.ReadResult> System.IO.Pipelines.Pipe/DefaultPipeReader::ReadAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA DefaultPipeReader_ReadAsync_m22E625358F617A6D6B30304F66630F6C6B9556E0 (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancellationToken;
		NullCheck(L_0);
		ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA L_2;
		L_2 = Pipe_ReadAsync_mFF8EC5336168A98DEB518FBDA04E8631E6135A53(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeReader::AdvanceTo(System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeReader_AdvanceTo_mC3C1499600779F019A8AD55EE176DEFFE6B262D8 (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ___0_consumed, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		NullCheck(L_0);
		Pipe_AdvanceReader_m834BDFD19E42C65B6A24845D43ADE3F3FE04F65C(L_0, (&___0_consumed), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeReader::AdvanceTo(System.SequencePosition,System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeReader_AdvanceTo_m75132DCD77C30004F126F32E51CD39B18221F58A (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ___0_consumed, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ___1_examined, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		NullCheck(L_0);
		Pipe_AdvanceReader_mFB33553F0AE7B4E1FA38098FABCD5359E80EBE00(L_0, (&___0_consumed), (&___1_examined), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeReader::CancelPendingRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeReader_CancelPendingRead_m7415D47721B56891CECA4F531A43829433F8C9DC (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		NullCheck(L_0);
		Pipe_CancelPendingRead_mD01B0070C7532DD9877991BCCBFEECF9E653921A(L_0, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeReader::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeReader_Complete_m6CC5886CAA470476B882E803950DE5AEB3316C0C (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		Exception_t* L_1 = ___0_exception;
		NullCheck(L_0);
		Pipe_CompleteReader_m1BDDF7322D2DCDF8553994304DE25BB74B69AC0F(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeReader::OnWriterCompleted(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeReader_OnWriterCompleted_m60F03A2C484F45FEDE7E88F3B05CECADB140CDB4 (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_1 = ___0_callback;
		RuntimeObject* L_2 = ___1_state;
		NullCheck(L_0);
		Pipe_OnWriterCompleted_m82DB33DF1D4BDFD2A21C265F6CFE6EA99F65AAA8(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Threading.Tasks.Sources.ValueTaskSourceStatus System.IO.Pipelines.Pipe/DefaultPipeReader::GetStatus(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultPipeReader_GetStatus_mBDEFC28DE280E073E09D6616C1ABB4647611B9F3 (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Pipe_GetReadAsyncStatus_mC9660F294FE13F6C6C6DBFF5FB2F7EB9CFAF5100(L_0, NULL);
		return L_1;
	}
}
// System.IO.Pipelines.ReadResult System.IO.Pipelines.Pipe/DefaultPipeReader::GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 DefaultPipeReader_GetResult_m9946D357CE5959B1F201E0BEF517DDB983BD9C3D (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		NullCheck(L_0);
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 L_1;
		L_1 = Pipe_GetReadAsyncResult_m545D93975494BF9F8F4D3E120C13C055D52EB725(L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeReader::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeReader_OnCompleted_m26AC5A05F6C398B27563E28AD8D85779A832AD7F (DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___0_continuation;
		RuntimeObject* L_2 = ___1_state;
		int32_t L_3 = ___3_flags;
		NullCheck(L_0);
		Pipe_OnReadAsyncCompleted_m3F480015C17CCD7A1A68AA980E2A79E63DA790A5(L_0, L_1, L_2, L_3, NULL);
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
// System.Void System.IO.Pipelines.Pipe/DefaultPipeWriter::.ctor(System.IO.Pipelines.Pipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeWriter__ctor_mBD4595C12F96E1334D7FBCB72221411CA5D24444 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* ___0_pipe, const RuntimeMethod* method) 
{
	{
		PipeWriter__ctor_m1714F183C14A6E33FD4F53327B640BFE5C0C3C50(__this, NULL);
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = ___0_pipe;
		__this->____pipe_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pipe_0), (void*)L_0);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeWriter::Complete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeWriter_Complete_m29CABF46EB5EB1A4D3DCE743ECE46EF6C0D18AA3 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		Exception_t* L_1 = ___0_exception;
		NullCheck(L_0);
		Pipe_CompleteWriter_m098E7A23D08352B3CED1911AC2AF7C4E667E5553(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeWriter::CancelPendingFlush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeWriter_CancelPendingFlush_m5B2E53F461B6A6774342A09D6BF85A96109CB7CC (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		NullCheck(L_0);
		Pipe_CancelPendingFlush_mA8A6724542CE64736535B318DEFD00282345D328(L_0, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeWriter::OnReaderCompleted(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeWriter_OnReaderCompleted_mEDBE59567C420D44A0C3A61AF744E1F727ECE432 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_1 = ___0_callback;
		RuntimeObject* L_2 = ___1_state;
		NullCheck(L_0);
		Pipe_OnReaderCompleted_mB4BB37450BC5E108DAC02AF7FDC68B3703FA313A(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.Pipe/DefaultPipeWriter::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 DefaultPipeWriter_FlushAsync_mBCC2C2BF63F60E176B75EE6553D8576511E8EB41 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancellationToken;
		NullCheck(L_0);
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 L_2;
		L_2 = Pipe_FlushAsync_mCF7F7C094F0CE64BBB853AD02E2BB00B09C5EAC3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeWriter::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeWriter_Advance_m4F8F88F14DE5FC69F87C6FCA0A27C3DEE1E73A41 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		int32_t L_1 = ___0_bytes;
		NullCheck(L_0);
		Pipe_Advance_m1EE7BB0BB6B2485D4C6E33D7A668D04B704774EF(L_0, L_1, NULL);
		return;
	}
}
// System.Memory`1<System.Byte> System.IO.Pipelines.Pipe/DefaultPipeWriter::GetMemory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 DefaultPipeWriter_GetMemory_m9BC319761BAD3EE6A077E9B16B27CA6804825EEB (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		int32_t L_1 = ___0_sizeHint;
		NullCheck(L_0);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_2;
		L_2 = Pipe_GetMemory_m495FEA0DF901A0727BA3298F2C766F7020FE6706(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Span`1<System.Byte> System.IO.Pipelines.Pipe/DefaultPipeWriter::GetSpan(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 DefaultPipeWriter_GetSpan_m77301D8AD4EAE02719E16E21F4A98BB1141BA282 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		int32_t L_1 = ___0_sizeHint;
		NullCheck(L_0);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Pipe_GetSpan_mF7CF8E66E41F9568D15899981E5B843430AB6425(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Sources.ValueTaskSourceStatus System.IO.Pipelines.Pipe/DefaultPipeWriter::GetStatus(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultPipeWriter_GetStatus_mFF2D710E680B486B298A77D8AAE48B88CE151254 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Pipe_GetFlushAsyncStatus_m7973C183D3F3818C52E8B1BF50179B64F5F876A3(L_0, NULL);
		return L_1;
	}
}
// System.IO.Pipelines.FlushResult System.IO.Pipelines.Pipe/DefaultPipeWriter::GetResult(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E DefaultPipeWriter_GetResult_mEB72F8FDEA8C5A986A793EDD5BA4BEBFA79C6778 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		NullCheck(L_0);
		FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E L_1;
		L_1 = Pipe_GetFlushAsyncResult_mFD447A9A765EA159CE118089A0705208DDED4027(L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.Pipe/DefaultPipeWriter::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPipeWriter_OnCompleted_m9E68030DF9BE111E6AF622F7B1B70269ED543797 (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = ___0_continuation;
		RuntimeObject* L_2 = ___1_state;
		int32_t L_3 = ___3_flags;
		NullCheck(L_0);
		Pipe_OnFlushAsyncCompleted_m5FC7040B9B22781F788D5C7D81B7FC0B28D6AF50(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.Pipe/DefaultPipeWriter::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 DefaultPipeWriter_WriteAsync_mC5893E363733C19716C3FF029C57FEC8CABCFC0F (DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* L_0 = __this->____pipe_0;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_1 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___1_cancellationToken;
		NullCheck(L_0);
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 L_3;
		L_3 = Pipe_WriteAsync_m0FB6B53C2C140C218267E648B49E9FD0CE9CF022(L_0, L_1, L_2, NULL);
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
// System.Void System.IO.Pipelines.Pipe/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m49F15760F8DBC211635C1EC0CD3A5F6C5DED3AB7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* L_0 = (U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143*)il2cpp_codegen_object_new(U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEDE51E1BBED58AB9951747FB73E6EB7CA1FDDAA1(L_0, NULL);
		((U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEDE51E1BBED58AB9951747FB73E6EB7CA1FDDAA1 (U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/<>c::<.cctor>b__100_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__100_0_m0B9CD51A833F602BBB92A1964F7F1400F66D7D38 (U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_state;
		NullCheck(((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED*)CastclassSealed((RuntimeObject*)L_0, Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var)));
		Pipe_ReaderCancellationRequested_m2FBB1812D8FBF6C5FFBCA11A9007ADFFD5E7915A(((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED*)CastclassSealed((RuntimeObject*)L_0, Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/<>c::<.cctor>b__100_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__100_1_m58CED838F7E6B1475523D8F7C046AC86392DF68F (U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_state;
		NullCheck(((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED*)CastclassSealed((RuntimeObject*)L_0, Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var)));
		Pipe_WriterCancellationRequested_mAA88238E010CD60F97A8731DD5A955FC9277B159(((Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED*)CastclassSealed((RuntimeObject*)L_0, Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.Pipe/<>c::<.cctor>b__100_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__100_2_mF08D33EE71918EAAEBCD49685CEAE2425CF5CB7A (U3CU3Ec_tCC82A7EFCA3C4A501559F0205EE34F23F9932143* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_state;
		NullCheck(((PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D*)CastclassSealed((RuntimeObject*)L_0, PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D_il2cpp_TypeInfo_var)));
		PipeCompletionCallbacks_Execute_mCAA6A897096D03BD69ECFBD284AFEC57E5DC7BCD(((PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D*)CastclassSealed((RuntimeObject*)L_0, PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D_il2cpp_TypeInfo_var)), NULL);
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




// Conversion methods for marshalling of: System.IO.Pipelines.PipeAwaitable
IL2CPP_EXTERN_C void PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshal_pinvoke(const PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE& unmarshaled, PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshaled_pinvoke& marshaled)
{
	Exception_t* ____schedulingContext_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_schedulingContext' of type 'PipeAwaitable': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____schedulingContext_3Exception, NULL);
}
IL2CPP_EXTERN_C void PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshal_pinvoke_back(const PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshaled_pinvoke& marshaled, PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE& unmarshaled)
{
	Exception_t* ____schedulingContext_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_schedulingContext' of type 'PipeAwaitable': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____schedulingContext_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.PipeAwaitable
IL2CPP_EXTERN_C void PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshal_pinvoke_cleanup(PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshaled_pinvoke& marshaled)
{
}




// Conversion methods for marshalling of: System.IO.Pipelines.PipeAwaitable
IL2CPP_EXTERN_C void PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshal_com(const PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE& unmarshaled, PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshaled_com& marshaled)
{
	Exception_t* ____schedulingContext_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_schedulingContext' of type 'PipeAwaitable': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____schedulingContext_3Exception, NULL);
}
IL2CPP_EXTERN_C void PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshal_com_back(const PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshaled_com& marshaled, PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE& unmarshaled)
{
	Exception_t* ____schedulingContext_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_schedulingContext' of type 'PipeAwaitable': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____schedulingContext_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.PipeAwaitable
IL2CPP_EXTERN_C void PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshal_com_cleanup(PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE_marshaled_com& marshaled)
{
}
// System.Threading.CancellationToken System.IO.Pipelines.PipeAwaitable::get_CancellationToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED PipeAwaitable_get_CancellationToken_mF64DF2BF00761E71C099B47BF9FB766C38F61C21 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED PipeAwaitable_get_CancellationToken_mF64DF2BF00761E71C099B47BF9FB766C38F61C21_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED _returnValue;
	_returnValue = PipeAwaitable_get_CancellationToken_mF64DF2BF00761E71C099B47BF9FB766C38F61C21_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.IO.Pipelines.PipeAwaitable::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable__ctor_m303BB55BB1630B1BA62055D31355A4E4134172A1 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, bool ___0_completed, bool ___1_useSynchronizationContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* G_B2_0 = NULL;
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* G_B6_2 = NULL;
	{
		bool L_0 = ___0_completed;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		bool L_1 = ___1_useSynchronizationContext;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_1)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_000e;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_000f;
	}

IL_000e:
	{
		G_B6_0 = 8;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_000f:
	{
		G_B6_2->____awaitableState_0 = ((int32_t)(G_B6_1|G_B6_0));
		__this->____completion_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completion_1), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____completionState_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completionState_2), (void*)NULL);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_2 = (&__this->____cancellationTokenRegistration_4);
		il2cpp_codegen_initobj(L_2, sizeof(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389));
		__this->____schedulingContext_3 = (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____schedulingContext_3), (void*)(SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72*)NULL);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		__this->____cancellationToken_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____cancellationToken_5))->____source_0), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PipeAwaitable__ctor_m303BB55BB1630B1BA62055D31355A4E4134172A1_AdjustorThunk (RuntimeObject* __this, bool ___0_completed, bool ___1_useSynchronizationContext, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	PipeAwaitable__ctor_m303BB55BB1630B1BA62055D31355A4E4134172A1(_thisAdjusted, ___0_completed, ___1_useSynchronizationContext, method);
}
// System.Boolean System.IO.Pipelines.PipeAwaitable::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____awaitableState_0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&5))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	bool _returnValue;
	_returnValue = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.IO.Pipelines.PipeAwaitable::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeAwaitable_get_IsRunning_m785D828B5D168DF3640E49A3A053C3DCB93F06CA (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____awaitableState_0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PipeAwaitable_get_IsRunning_m785D828B5D168DF3640E49A3A053C3DCB93F06CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	bool _returnValue;
	_returnValue = PipeAwaitable_get_IsRunning_m785D828B5D168DF3640E49A3A053C3DCB93F06CA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.IO.Pipelines.PipeAwaitable::BeginOperation(System.Threading.CancellationToken,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_BeginOperation_mA7883C5AEBE4BFC6F844C8E9554D611FDEFC9612 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) 
{
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&___0_cancellationToken), NULL);
		bool L_0;
		L_0 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___0_cancellationToken), NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		bool L_1;
		L_1 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(__this, NULL);
		if (L_1)
		{
			goto IL_004a;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___0_cancellationToken;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___1_callback;
		RuntimeObject* L_4 = ___2_state;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5;
		L_5 = CancellationTokenExtensions_UnsafeRegister_m5DC52D726331A0941041962243118F2864A7D277(L_2, L_3, L_4, NULL);
		__this->____cancellationTokenRegistration_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____cancellationTokenRegistration_4))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->____cancellationTokenRegistration_4))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6 = __this->____cancellationTokenRegistration_4;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389));
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_7 = V_0;
		bool L_8;
		L_8 = CancellationTokenRegistration_op_Equality_m3065B0BF864E200DEF5E730A284E8CF07B755FBE(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&___0_cancellationToken), NULL);
	}

IL_0043:
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___0_cancellationToken;
		__this->____cancellationToken_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____cancellationToken_5))->____source_0), (void*)NULL);
	}

IL_004a:
	{
		int32_t L_10 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_10|2));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeAwaitable_BeginOperation_mA7883C5AEBE4BFC6F844C8E9554D611FDEFC9612_AdjustorThunk (RuntimeObject* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	PipeAwaitable_BeginOperation_mA7883C5AEBE4BFC6F844C8E9554D611FDEFC9612_inline(_thisAdjusted, ___0_cancellationToken, ___1_callback, ___2_state, method);
}
// System.Void System.IO.Pipelines.PipeAwaitable::Complete(System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) 
{
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_0 = ___0_completionData;
		PipeAwaitable_ExtractCompletion_mF3441339276A5F9205F753A687629255D8718257_inline(__this, L_0, NULL);
		int32_t L_1 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_1|1));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227_AdjustorThunk (RuntimeObject* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227_inline(_thisAdjusted, ___0_completionData, method);
}
// System.Void System.IO.Pipelines.PipeAwaitable::ExtractCompletion(System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_ExtractCompletion_mF3441339276A5F9205F753A687629255D8718257 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* V_2 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* V_3 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_4 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_5;
	memset((&V_5), 0, sizeof(V_5));
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B3_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B6_0 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B8_0 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B7_0 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B9_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->____completion_1;
		V_0 = L_0;
		RuntimeObject* L_1 = __this->____completionState_2;
		V_1 = L_1;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_2 = __this->____schedulingContext_3;
		V_2 = L_2;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_3 = V_2;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)(NULL));
		goto IL_0021;
	}

IL_001b:
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_4 = V_2;
		NullCheck(L_4);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5;
		L_5 = SchedulingContext_get_ExecutionContext_mAC0B4BACB8A4F02BB3F96180FFD67E77F3DEA2BD_inline(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0021:
	{
		V_3 = G_B3_0;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_6 = V_2;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		G_B6_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)(NULL));
		goto IL_002e;
	}

IL_0028:
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_7 = V_2;
		NullCheck(L_7);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8;
		L_8 = SchedulingContext_get_SynchronizationContext_m54BD83B94570F8D15827BF93F1459FFCBCE32344_inline(L_7, NULL);
		G_B6_0 = L_8;
	}

IL_002e:
	{
		V_4 = G_B6_0;
		__this->____completion_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completion_1), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____completionState_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completionState_2), (void*)NULL);
		__this->____schedulingContext_3 = (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____schedulingContext_3), (void*)(SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72*)NULL);
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_9 = ___0_completionData;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_10 = V_0;
		G_B7_0 = L_9;
		if (L_10)
		{
			G_B8_0 = L_9;
			goto IL_0055;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C));
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_11 = V_5;
		G_B9_0 = L_11;
		G_B9_1 = G_B7_0;
		goto IL_005f;
	}

IL_0055:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = V_0;
		RuntimeObject* L_13 = V_1;
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_14 = V_3;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_15 = V_4;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_16;
		memset((&L_16), 0, sizeof(L_16));
		CompletionData__ctor_mD47C730410F38D7A6A7FB44E8F0E6DD803679C21((&L_16), L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		G_B9_0 = L_16;
		G_B9_1 = G_B8_0;
	}

IL_005f:
	{
		*(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1)->___U3CCompletionU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1)->___U3CCompletionStateU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1)->___U3CExecutionContextU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1)->___U3CSynchronizationContextU3Ek__BackingField_3), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_EXTERN_C  void PipeAwaitable_ExtractCompletion_mF3441339276A5F9205F753A687629255D8718257_AdjustorThunk (RuntimeObject* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	PipeAwaitable_ExtractCompletion_mF3441339276A5F9205F753A687629255D8718257_inline(_thisAdjusted, ___0_completionData, method);
}
// System.Void System.IO.Pipelines.PipeAwaitable::SetUncompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_SetUncompleted_mC3B615F389C96AFA5C9D9E63856E4F187E4E520D (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_0&((int32_t)-2)));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeAwaitable_SetUncompleted_mC3B615F389C96AFA5C9D9E63856E4F187E4E520D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	PipeAwaitable_SetUncompleted_mC3B615F389C96AFA5C9D9E63856E4F187E4E520D_inline(_thisAdjusted, method);
}
// System.Void System.IO.Pipelines.PipeAwaitable::OnCompleted(System.Action`1<System.Object>,System.Object,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags,System.IO.Pipelines.CompletionData&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_OnCompleted_m281E875FBB8A8BB3BDAE663FCCB6D8850EC64C89 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int32_t ___2_flags, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___3_completionData, bool* ___4_doubleCompletion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_2 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B3_3 = NULL;
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B2_2 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B2_3 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_2 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B4_3 = NULL;
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_3 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B6_4 = NULL;
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* G_B5_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B5_3 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B5_4 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B7_3 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B7_4 = NULL;
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_0 = ___3_completionData;
		il2cpp_codegen_initobj(L_0, sizeof(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C));
		bool* L_1 = ___4_doubleCompletion;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = __this->____completion_1;
		*((int8_t*)L_1) = (int8_t)((((int32_t)((((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3;
		L_3 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(__this, NULL);
		bool* L_4 = ___4_doubleCompletion;
		int32_t L_5 = *((uint8_t*)L_4);
		if (!((int32_t)((int32_t)L_3|L_5)))
		{
			goto IL_0056;
		}
	}
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_6 = ___3_completionData;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_7 = ___0_continuation;
		RuntimeObject* L_8 = ___1_state;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_9 = __this->____schedulingContext_3;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_10 = L_9;
		G_B2_0 = L_10;
		G_B2_1 = L_8;
		G_B2_2 = L_7;
		G_B2_3 = L_6;
		if (L_10)
		{
			G_B3_0 = L_10;
			G_B3_1 = L_8;
			G_B3_2 = L_7;
			G_B3_3 = L_6;
			goto IL_0034;
		}
	}
	{
		G_B4_0 = ((ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0039;
	}

IL_0034:
	{
		NullCheck(G_B3_0);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_11;
		L_11 = SchedulingContext_get_ExecutionContext_mAC0B4BACB8A4F02BB3F96180FFD67E77F3DEA2BD_inline(G_B3_0, NULL);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0039:
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_12 = __this->____schedulingContext_3;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_13 = L_12;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
		if (L_13)
		{
			G_B6_0 = L_13;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			G_B6_3 = G_B4_2;
			G_B6_4 = G_B4_3;
			goto IL_0046;
		}
	}
	{
		G_B7_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)(NULL));
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		G_B7_4 = G_B5_4;
		goto IL_004b;
	}

IL_0046:
	{
		NullCheck(G_B6_0);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_14;
		L_14 = SchedulingContext_get_SynchronizationContext_m54BD83B94570F8D15827BF93F1459FFCBCE32344_inline(G_B6_0, NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
		G_B7_4 = G_B6_4;
	}

IL_004b:
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_15;
		memset((&L_15), 0, sizeof(L_15));
		CompletionData__ctor_mD47C730410F38D7A6A7FB44E8F0E6DD803679C21((&L_15), G_B7_3, G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		*(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B7_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B7_4)->___U3CCompletionU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B7_4)->___U3CCompletionStateU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B7_4)->___U3CExecutionContextU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B7_4)->___U3CSynchronizationContextU3Ek__BackingField_3), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_16 = ___0_continuation;
		__this->____completion_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completion_1), (void*)L_16);
		RuntimeObject* L_17 = ___1_state;
		__this->____completionState_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completionState_2), (void*)L_17);
		int32_t L_18 = __this->____awaitableState_0;
		if (!((int32_t)((int32_t)L_18&8)))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_19 = ___2_flags;
		if (!((int32_t)((int32_t)L_19&1)))
		{
			goto IL_00b2;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_20;
		L_20 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_0 = L_20;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_21 = V_0;
		if (!L_21)
		{
			goto IL_00b2;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_22 = V_0;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00b2;
		}
	}
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_27 = __this->____schedulingContext_3;
		if (L_27)
		{
			goto IL_00a6;
		}
	}
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_28 = (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72*)il2cpp_codegen_object_new(SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		SchedulingContext__ctor_m50BF10A0E460DA5E17ABFCA3B577F3006E5E34AA(L_28, NULL);
		__this->____schedulingContext_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____schedulingContext_3), (void*)L_28);
	}

IL_00a6:
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_29 = __this->____schedulingContext_3;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_0;
		NullCheck(L_29);
		SchedulingContext_set_SynchronizationContext_m50C6F4B4C2DED193662E298CF49C60DFF34C5CF5_inline(L_29, L_30, NULL);
	}

IL_00b2:
	{
		int32_t L_31 = ___2_flags;
		if (!((int32_t)((int32_t)L_31&2)))
		{
			goto IL_00da;
		}
	}
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_32 = __this->____schedulingContext_3;
		if (L_32)
		{
			goto IL_00ca;
		}
	}
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_33 = (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72*)il2cpp_codegen_object_new(SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		SchedulingContext__ctor_m50BF10A0E460DA5E17ABFCA3B577F3006E5E34AA(L_33, NULL);
		__this->____schedulingContext_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____schedulingContext_3), (void*)L_33);
	}

IL_00ca:
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_34 = __this->____schedulingContext_3;
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_35;
		L_35 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		NullCheck(L_34);
		SchedulingContext_set_ExecutionContext_mBB5425998CCCAD4D39356A222294303ECAFF825F_inline(L_34, L_35, NULL);
	}

IL_00da:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void PipeAwaitable_OnCompleted_m281E875FBB8A8BB3BDAE663FCCB6D8850EC64C89_AdjustorThunk (RuntimeObject* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int32_t ___2_flags, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___3_completionData, bool* ___4_doubleCompletion, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	PipeAwaitable_OnCompleted_m281E875FBB8A8BB3BDAE663FCCB6D8850EC64C89(_thisAdjusted, ___0_continuation, ___1_state, ___2_flags, ___3_completionData, ___4_doubleCompletion, method);
}
// System.Void System.IO.Pipelines.PipeAwaitable::Cancel(System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_Cancel_m0734BDB32F8210AA45ED03460148B6A12E2ED29F (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) 
{
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_0 = ___0_completionData;
		PipeAwaitable_ExtractCompletion_mF3441339276A5F9205F753A687629255D8718257_inline(__this, L_0, NULL);
		int32_t L_1 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_1|4));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeAwaitable_Cancel_m0734BDB32F8210AA45ED03460148B6A12E2ED29F_AdjustorThunk (RuntimeObject* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	PipeAwaitable_Cancel_m0734BDB32F8210AA45ED03460148B6A12E2ED29F(_thisAdjusted, ___0_completionData, method);
}
// System.Void System.IO.Pipelines.PipeAwaitable::CancellationTokenFired(System.IO.Pipelines.CompletionData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeAwaitable_CancellationTokenFired_m0472E73439597ACFF16C1B3507F16716DDC77BBD (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0;
		L_0 = PipeAwaitable_get_CancellationToken_mF64DF2BF00761E71C099B47BF9FB766C38F61C21_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_2 = ___0_completionData;
		PipeAwaitable_Cancel_m0734BDB32F8210AA45ED03460148B6A12E2ED29F(__this, L_2, NULL);
		return;
	}

IL_0018:
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_3 = ___0_completionData;
		il2cpp_codegen_initobj(L_3, sizeof(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeAwaitable_CancellationTokenFired_m0472E73439597ACFF16C1B3507F16716DDC77BBD_AdjustorThunk (RuntimeObject* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	PipeAwaitable_CancellationTokenFired_m0472E73439597ACFF16C1B3507F16716DDC77BBD(_thisAdjusted, ___0_completionData, method);
}
// System.Boolean System.IO.Pipelines.PipeAwaitable::ObserveCancellation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeAwaitable_ObserveCancellation_m1A6012106CF7DFEB8D6CD3155C7EF727D4A40BED (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->____awaitableState_0;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&4))) == ((int32_t)4))? 1 : 0);
		int32_t L_1 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_1&((int32_t)-7)));
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool PipeAwaitable_ObserveCancellation_m1A6012106CF7DFEB8D6CD3155C7EF727D4A40BED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	bool _returnValue;
	_returnValue = PipeAwaitable_ObserveCancellation_m1A6012106CF7DFEB8D6CD3155C7EF727D4A40BED_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Threading.CancellationTokenRegistration System.IO.Pipelines.PipeAwaitable::ReleaseCancellationTokenRegistration(System.Threading.CancellationToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 PipeAwaitable_ReleaseCancellationTokenRegistration_m8439D89D7A06A4B86DB060A279B2A43648DB8505 (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* ___0_cancellationToken, const RuntimeMethod* method) 
{
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = ___0_cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = PipeAwaitable_get_CancellationToken_mF64DF2BF00761E71C099B47BF9FB766C38F61C21_inline(__this, NULL);
		*(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)L_0)->____source_0), (void*)NULL);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_2 = __this->____cancellationTokenRegistration_4;
		V_0 = L_2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_3 = (&__this->____cancellationToken_5);
		il2cpp_codegen_initobj(L_3, sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_4 = (&__this->____cancellationTokenRegistration_4);
		il2cpp_codegen_initobj(L_4, sizeof(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389));
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 PipeAwaitable_ReleaseCancellationTokenRegistration_m8439D89D7A06A4B86DB060A279B2A43648DB8505_AdjustorThunk (RuntimeObject* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* ___0_cancellationToken, const RuntimeMethod* method)
{
	PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE*>(__this + _offset);
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 _returnValue;
	_returnValue = PipeAwaitable_ReleaseCancellationTokenRegistration_m8439D89D7A06A4B86DB060A279B2A43648DB8505_inline(_thisAdjusted, ___0_cancellationToken, method);
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
// System.Threading.SynchronizationContext System.IO.Pipelines.PipeAwaitable/SchedulingContext::get_SynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SchedulingContext_get_SynchronizationContext_m54BD83B94570F8D15827BF93F1459FFCBCE32344 (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, const RuntimeMethod* method) 
{
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___U3CSynchronizationContextU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.PipeAwaitable/SchedulingContext::set_SynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulingContext_set_SynchronizationContext_m50C6F4B4C2DED193662E298CF49C60DFF34C5CF5 (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		__this->___U3CSynchronizationContextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSynchronizationContextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Threading.ExecutionContext System.IO.Pipelines.PipeAwaitable/SchedulingContext::get_ExecutionContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* SchedulingContext_get_ExecutionContext_mAC0B4BACB8A4F02BB3F96180FFD67E77F3DEA2BD (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, const RuntimeMethod* method) 
{
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_0 = __this->___U3CExecutionContextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.PipeAwaitable/SchedulingContext::set_ExecutionContext(System.Threading.ExecutionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulingContext_set_ExecutionContext_mBB5425998CCCAD4D39356A222294303ECAFF825F (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_value, const RuntimeMethod* method) 
{
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_0 = ___0_value;
		__this->___U3CExecutionContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExecutionContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void System.IO.Pipelines.PipeAwaitable/SchedulingContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulingContext__ctor_m50BF10A0E460DA5E17ABFCA3B577F3006E5E34AA (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, const RuntimeMethod* method) 
{
	{
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
// Conversion methods for marshalling of: System.IO.Pipelines.PipeCompletion
IL2CPP_EXTERN_C void PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshal_pinvoke(const PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848& unmarshaled, PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshaled_pinvoke& marshaled)
{
	Exception_t* ____callbacks_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_callbacks' of type 'PipeCompletion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____callbacks_2Exception, NULL);
}
IL2CPP_EXTERN_C void PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshal_pinvoke_back(const PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshaled_pinvoke& marshaled, PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848& unmarshaled)
{
	Exception_t* ____callbacks_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_callbacks' of type 'PipeCompletion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____callbacks_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.PipeCompletion
IL2CPP_EXTERN_C void PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshal_pinvoke_cleanup(PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.IO.Pipelines.PipeCompletion
IL2CPP_EXTERN_C void PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshal_com(const PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848& unmarshaled, PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshaled_com& marshaled)
{
	Exception_t* ____callbacks_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_callbacks' of type 'PipeCompletion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____callbacks_2Exception, NULL);
}
IL2CPP_EXTERN_C void PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshal_com_back(const PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshaled_com& marshaled, PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848& unmarshaled)
{
	Exception_t* ____callbacks_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_callbacks' of type 'PipeCompletion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____callbacks_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.PipeCompletion
IL2CPP_EXTERN_C void PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshal_com_cleanup(PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_marshaled_com& marshaled)
{
}
// System.Boolean System.IO.Pipelines.PipeCompletion::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____state_1;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848*>(__this + _offset);
	bool _returnValue;
	_returnValue = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.IO.Pipelines.PipeCompletion::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeCompletion_get_IsFaulted_m2F255C9CFC47565457BF3694836741D706BBDE8A (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____state_1;
		return (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)IsInstSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PipeCompletion_get_IsFaulted_m2F255C9CFC47565457BF3694836741D706BBDE8A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848*>(__this + _offset);
	bool _returnValue;
	_returnValue = PipeCompletion_get_IsFaulted_m2F255C9CFC47565457BF3694836741D706BBDE8A(_thisAdjusted, method);
	return _returnValue;
}
// System.IO.Pipelines.PipeCompletionCallbacks System.IO.Pipelines.PipeCompletion::TryComplete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_TryComplete_m5B8D597F7946C1711C8BFE7A5A8F932B6588EFC8 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____state_1;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		Exception_t* L_1 = ___0_exception;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3;
		L_3 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_2, NULL);
		__this->____state_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_1), (void*)L_3);
		goto IL_0024;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_StaticFields*)il2cpp_codegen_static_fields_for(PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_il2cpp_TypeInfo_var))->___s_completedSuccessfully_0;
		__this->____state_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_1), (void*)L_4);
	}

IL_0024:
	{
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_5;
		L_5 = PipeCompletion_GetCallbacks_mD3E3E1146A2B6C0C0E98FB71604C5CFE5F0BD938(__this, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_TryComplete_m5B8D597F7946C1711C8BFE7A5A8F932B6588EFC8_AdjustorThunk (RuntimeObject* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848*>(__this + _offset);
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* _returnValue;
	_returnValue = PipeCompletion_TryComplete_m5B8D597F7946C1711C8BFE7A5A8F932B6588EFC8(_thisAdjusted, ___0_exception, method);
	return _returnValue;
}
// System.IO.Pipelines.PipeCompletionCallbacks System.IO.Pipelines.PipeCompletion::AddCallback(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_AddCallback_m77D9C6DAAF928586211719529948DB8B00DD5CC7 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA3E96E178A183FF2A77D2D2416A61C89B69C8994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m153C30A6621EAA40DCB034B9570D2F85D4F16E79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_0 = __this->____callbacks_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_1 = (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3*)il2cpp_codegen_object_new(List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m153C30A6621EAA40DCB034B9570D2F85D4F16E79(L_1, List_1__ctor_m153C30A6621EAA40DCB034B9570D2F85D4F16E79_RuntimeMethod_var);
		__this->____callbacks_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbacks_2), (void*)L_1);
	}

IL_0013:
	{
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_2 = __this->____callbacks_2;
		Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_3 = ___0_callback;
		RuntimeObject* L_4 = ___1_state;
		PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 L_5;
		memset((&L_5), 0, sizeof(L_5));
		PipeCompletionCallback__ctor_mC5FA5B719FD78F82FE4BB4A3AFBEC9A752A7C5A8((&L_5), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_mA3E96E178A183FF2A77D2D2416A61C89B69C8994_inline(L_2, L_5, List_1_Add_mA3E96E178A183FF2A77D2D2416A61C89B69C8994_RuntimeMethod_var);
		bool L_6;
		L_6 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(__this, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_7;
		L_7 = PipeCompletion_GetCallbacks_mD3E3E1146A2B6C0C0E98FB71604C5CFE5F0BD938(__this, NULL);
		return L_7;
	}

IL_0034:
	{
		return (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D*)NULL;
	}
}
IL2CPP_EXTERN_C  PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_AddCallback_m77D9C6DAAF928586211719529948DB8B00DD5CC7_AdjustorThunk (RuntimeObject* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848*>(__this + _offset);
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* _returnValue;
	_returnValue = PipeCompletion_AddCallback_m77D9C6DAAF928586211719529948DB8B00DD5CC7(_thisAdjusted, ___0_callback, ___1_state, method);
	return _returnValue;
}
// System.Boolean System.IO.Pipelines.PipeCompletion::IsCompletedOrThrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeCompletion_IsCompletedOrThrow_m119F9ECC0F21F2999A76CD762E8BB45EDCFA031F (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* V_0 = NULL;
	{
		bool L_0;
		L_0 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____state_1;
		V_0 = ((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)IsInstSealed((RuntimeObject*)L_1, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var));
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = V_0;
		NullCheck(L_3);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_3, NULL);
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool PipeCompletion_IsCompletedOrThrow_m119F9ECC0F21F2999A76CD762E8BB45EDCFA031F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848*>(__this + _offset);
	bool _returnValue;
	_returnValue = PipeCompletion_IsCompletedOrThrow_m119F9ECC0F21F2999A76CD762E8BB45EDCFA031F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IO.Pipelines.PipeCompletionCallbacks System.IO.Pipelines.PipeCompletion::GetCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_GetCallbacks_mD3E3E1146A2B6C0C0E98FB71604C5CFE5F0BD938 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* V_0 = NULL;
	{
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_0 = __this->____callbacks_2;
		V_0 = L_0;
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D*)NULL;
	}

IL_000c:
	{
		__this->____callbacks_2 = (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbacks_2), (void*)(List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3*)NULL);
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_2 = V_0;
		RuntimeObject* L_3 = __this->____state_1;
		PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* L_4 = (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D*)il2cpp_codegen_object_new(PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PipeCompletionCallbacks__ctor_m6BBA375FDE18C8BE7F9B111AE5E95A41FFE2BF4F(L_4, L_2, ((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)IsInstSealed((RuntimeObject*)L_3, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var)), NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* PipeCompletion_GetCallbacks_mD3E3E1146A2B6C0C0E98FB71604C5CFE5F0BD938_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848*>(__this + _offset);
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* _returnValue;
	_returnValue = PipeCompletion_GetCallbacks_mD3E3E1146A2B6C0C0E98FB71604C5CFE5F0BD938(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.IO.Pipelines.PipeCompletion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PipeCompletion_ToString_m4C75B72EDC7B72EF7427CA9939C11A54915A0EB3 (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F9DB9B44384462C74432D2375D3D8E1C964BE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(__this, NULL);
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, _stringLiteral44F9DB9B44384462C74432D2375D3D8E1C964BE4, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* PipeCompletion_ToString_m4C75B72EDC7B72EF7427CA9939C11A54915A0EB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PipeCompletion_ToString_m4C75B72EDC7B72EF7427CA9939C11A54915A0EB3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.IO.Pipelines.PipeCompletion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletion__cctor_m50AB8C326CB179F105514F612B2F059CFA184776 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_StaticFields*)il2cpp_codegen_static_fields_for(PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_il2cpp_TypeInfo_var))->___s_completedSuccessfully_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_StaticFields*)il2cpp_codegen_static_fields_for(PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848_il2cpp_TypeInfo_var))->___s_completedSuccessfully_0), (void*)L_0);
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
// Conversion methods for marshalling of: System.IO.Pipelines.PipeCompletionCallback
IL2CPP_EXTERN_C void PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshal_pinvoke(const PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467& unmarshaled, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshaled_pinvoke& marshaled)
{
	marshaled.___Callback_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Callback_0));
	if (unmarshaled.___State_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___State_1))
		{
			marshaled.___State_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___State_1));
			(marshaled.___State_1)->AddRef();
		}
		else
		{
			marshaled.___State_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___State_1);
		}
	}
	else
	{
		marshaled.___State_1 = NULL;
	}
}
IL2CPP_EXTERN_C void PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshal_pinvoke_back(const PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshaled_pinvoke& marshaled, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Callback_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645>(marshaled.___Callback_0, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Callback_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645>(marshaled.___Callback_0, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645_il2cpp_TypeInfo_var));
	if (marshaled.___State_1 != NULL)
	{
		unmarshaled.___State_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___State_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___State_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___State_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___State_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___State_1), Il2CppIUnknown::IID, marshaled.___State_1);
		}
	}
	else
	{
		unmarshaled.___State_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___State_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.PipeCompletionCallback
IL2CPP_EXTERN_C void PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshal_pinvoke_cleanup(PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshaled_pinvoke& marshaled)
{
	if (marshaled.___State_1 != NULL)
	{
		(marshaled.___State_1)->Release();
		marshaled.___State_1 = NULL;
	}
}
// Conversion methods for marshalling of: System.IO.Pipelines.PipeCompletionCallback
IL2CPP_EXTERN_C void PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshal_com(const PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467& unmarshaled, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshaled_com& marshaled)
{
	marshaled.___Callback_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Callback_0));
	if (unmarshaled.___State_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___State_1))
		{
			marshaled.___State_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___State_1));
			(marshaled.___State_1)->AddRef();
		}
		else
		{
			marshaled.___State_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___State_1);
		}
	}
	else
	{
		marshaled.___State_1 = NULL;
	}
}
IL2CPP_EXTERN_C void PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshal_com_back(const PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshaled_com& marshaled, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Callback_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645>(marshaled.___Callback_0, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Callback_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645>(marshaled.___Callback_0, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645_il2cpp_TypeInfo_var));
	if (marshaled.___State_1 != NULL)
	{
		unmarshaled.___State_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___State_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___State_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___State_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___State_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___State_1), Il2CppIUnknown::IID, marshaled.___State_1);
		}
	}
	else
	{
		unmarshaled.___State_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___State_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.PipeCompletionCallback
IL2CPP_EXTERN_C void PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshal_com_cleanup(PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467_marshaled_com& marshaled)
{
	if (marshaled.___State_1 != NULL)
	{
		(marshaled.___State_1)->Release();
		marshaled.___State_1 = NULL;
	}
}
// System.Void System.IO.Pipelines.PipeCompletionCallback::.ctor(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletionCallback__ctor_mC5FA5B719FD78F82FE4BB4A3AFBEC9A752A7C5A8 (PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	{
		Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_0 = ___0_callback;
		__this->___Callback_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Callback_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_state;
		__this->___State_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___State_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void PipeCompletionCallback__ctor_mC5FA5B719FD78F82FE4BB4A3AFBEC9A752A7C5A8_AdjustorThunk (RuntimeObject* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467*>(__this + _offset);
	PipeCompletionCallback__ctor_mC5FA5B719FD78F82FE4BB4A3AFBEC9A752A7C5A8(_thisAdjusted, ___0_callback, ___1_state, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.Pipelines.PipeCompletionCallbacks::.ctor(System.Collections.Generic.List`1<System.IO.Pipelines.PipeCompletionCallback>,System.Runtime.ExceptionServices.ExceptionDispatchInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletionCallbacks__ctor_m6BBA375FDE18C8BE7F9B111AE5E95A41FFE2BF4F (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* __this, List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* ___0_callbacks, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___1_edi, const RuntimeMethod* method) 
{
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* G_B2_0 = NULL;
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* G_B1_0 = NULL;
	Exception_t* G_B3_0 = NULL;
	PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_0 = ___0_callbacks;
		__this->____callbacks_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbacks_0), (void*)L_0);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1 = ___1_edi;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((Exception_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = ___1_edi;
		NullCheck(L_2);
		Exception_t* L_3;
		L_3 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		G_B3_1->____exception_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____exception_1), (void*)G_B3_0);
		return;
	}
}
// System.Void System.IO.Pipelines.PipeCompletionCallbacks::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletionCallbacks_Execute_mCAA6A897096D03BD69ECFBD284AFEC57E5DC7BCD (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m95A6F25EC14A8041B97D9929825AC0B1978A9BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFB65FC26138A60A746CBE77A6DC92F0F1E380AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* V_1 = NULL;
	int32_t V_2 = 0;
	PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_0 = __this->____callbacks_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m95A6F25EC14A8041B97D9929825AC0B1978A9BAA_inline(L_0, List_1_get_Count_m95A6F25EC14A8041B97D9929825AC0B1978A9BAA_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		V_1 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)NULL;
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_3 = __this->____callbacks_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		V_2 = 0;
		goto IL_0038;
	}

IL_001e:
	{
		List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* L_4 = __this->____callbacks_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 L_6;
		L_6 = List_1_get_Item_mFB65FC26138A60A746CBE77A6DC92F0F1E380AE7(L_4, L_5, List_1_get_Item_mFB65FC26138A60A746CBE77A6DC92F0F1E380AE7_RuntimeMethod_var);
		V_3 = L_6;
		PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 L_7 = V_3;
		PipeCompletionCallbacks_Execute_mBC649D3C719115EDA524201362D6ABCF10D9BF1C(__this, L_7, (&V_1), NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0038:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_001e;
		}
	}

IL_003c:
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_11 = V_1;
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_12 = V_1;
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_13 = (AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PipeCompletionCallbacks_Execute_mCAA6A897096D03BD69ECFBD284AFEC57E5DC7BCD_RuntimeMethod_var)));
	}

IL_0046:
	{
		return;
	}
}
// System.Void System.IO.Pipelines.PipeCompletionCallbacks::Execute(System.IO.Pipelines.PipeCompletionCallback,System.Collections.Generic.List`1<System.Exception>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeCompletionCallbacks_Execute_mBC649D3C719115EDA524201362D6ABCF10D9BF1C (PipeCompletionCallbacks_t2A951EA7F2947FB2A0721972B42B43629718EC8D* __this, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 ___0_callback, List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B** ___1_exceptions, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 L_0 = ___0_callback;
		Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* L_1 = L_0.___Callback_0;
		Exception_t* L_2 = __this->____exception_1;
		PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 L_3 = ___0_callback;
		RuntimeObject* L_4 = L_3.___State_1;
		NullCheck(L_1);
		Action_2_Invoke_m6E35FD558216D33795953798127D7867CCDDB285_inline(L_1, L_2, L_4, NULL);
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		{
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B** L_5 = ___1_exceptions;
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_6 = *((List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B**)L_5);
			if (L_6)
			{
				goto IL_0025;
			}
		}
		{
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B** L_7 = ___1_exceptions;
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_8 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var)));
			NullCheck(L_8);
			List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var)));
			*((RuntimeObject**)L_7) = (RuntimeObject*)L_8;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_8);
		}

IL_0025:
		{
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B** L_9 = ___1_exceptions;
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_10 = *((List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B**)L_9);
			Exception_t* L_11 = V_0;
			NullCheck(L_10);
			List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline(L_10, L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_002f;
		}
	}// end catch (depth: 1)

IL_002f:
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
// System.IO.Pipelines.PipeOptions System.IO.Pipelines.PipeOptions::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* PipeOptions_get_Default_mAAE5981997B15A561A035FB1EC79278E0B1AB77F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var);
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = ((PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_StaticFields*)il2cpp_codegen_static_fields_for(PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.PipeOptions::.ctor(System.Buffers.MemoryPool`1<System.Byte>,System.IO.Pipelines.PipeScheduler,System.IO.Pipelines.PipeScheduler,System.Int64,System.Int64,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeOptions__ctor_m418D5B51703288FEB02D86E5624B903807ABF7BA (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* ___0_pool, PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___1_readerScheduler, PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___2_writerScheduler, int64_t ___3_pauseWriterThreshold, int64_t ___4_resumeWriterThreshold, int32_t ___5_minimumSegmentSize, bool ___6_useSynchronizationContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B2_0 = NULL;
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B3_1 = NULL;
	MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* G_B14_0 = NULL;
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B14_1 = NULL;
	MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* G_B13_0 = NULL;
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B13_1 = NULL;
	PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* G_B16_0 = NULL;
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B16_1 = NULL;
	PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* G_B15_0 = NULL;
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B15_1 = NULL;
	PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* G_B18_0 = NULL;
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B18_1 = NULL;
	PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* G_B17_0 = NULL;
	PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* G_B17_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___5_minimumSegmentSize;
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			G_B2_0 = __this;
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___5_minimumSegmentSize;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = ((int32_t)4096);
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->___U3CMinimumSegmentSizeU3Ek__BackingField_5 = G_B3_0;
		__this->___U3CInitialSegmentPoolSizeU3Ek__BackingField_10 = 4;
		__this->___U3CMaxSegmentPoolSizeU3Ek__BackingField_11 = ((int32_t)256);
		int64_t L_2 = ___3_pauseWriterThreshold;
		if ((!(((uint64_t)L_2) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_003c;
		}
	}
	{
		___3_pauseWriterThreshold = ((int64_t)((int32_t)65536));
		goto IL_0048;
	}

IL_003c:
	{
		int64_t L_3 = ___3_pauseWriterThreshold;
		if ((((int64_t)L_3) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0048;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7(4, NULL);
	}

IL_0048:
	{
		int64_t L_4 = ___4_resumeWriterThreshold;
		if ((!(((uint64_t)L_4) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_0058;
		}
	}
	{
		___4_resumeWriterThreshold = ((int64_t)((int32_t)32768));
		goto IL_006a;
	}

IL_0058:
	{
		int64_t L_5 = ___4_resumeWriterThreshold;
		if ((((int64_t)L_5) < ((int64_t)((int64_t)0))))
		{
			goto IL_0064;
		}
	}
	{
		int64_t L_6 = ___4_resumeWriterThreshold;
		int64_t L_7 = ___3_pauseWriterThreshold;
		if ((((int64_t)L_6) <= ((int64_t)L_7)))
		{
			goto IL_006a;
		}
	}

IL_0064:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7(5, NULL);
	}

IL_006a:
	{
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_8 = ___0_pool;
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_9 = L_8;
		G_B13_0 = L_9;
		G_B13_1 = __this;
		if (L_9)
		{
			G_B14_0 = L_9;
			G_B14_1 = __this;
			goto IL_0075;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F_il2cpp_TypeInfo_var);
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_10;
		L_10 = MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_inline(MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_RuntimeMethod_var);
		G_B14_0 = L_10;
		G_B14_1 = G_B13_1;
	}

IL_0075:
	{
		NullCheck(G_B14_1);
		G_B14_1->___U3CPoolU3Ek__BackingField_8 = G_B14_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_1->___U3CPoolU3Ek__BackingField_8), (void*)G_B14_0);
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_11;
		L_11 = PipeOptions_get_Pool_mD6F269C640738791A4AF66BE42F36954EE05A90A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F_il2cpp_TypeInfo_var);
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_12;
		L_12 = MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_inline(MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_RuntimeMethod_var);
		__this->___U3CIsDefaultSharedMemoryPoolU3Ek__BackingField_9 = (bool)((((RuntimeObject*)(MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F*)L_11) == ((RuntimeObject*)(MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F*)L_12))? 1 : 0);
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_13 = ___1_readerScheduler;
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_14 = L_13;
		G_B15_0 = L_14;
		G_B15_1 = __this;
		if (L_14)
		{
			G_B16_0 = L_14;
			G_B16_1 = __this;
			goto IL_0098;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_15;
		L_15 = PipeScheduler_get_ThreadPool_m229EDC30FFBFE817F0B1083103985531C7633838_inline(NULL);
		G_B16_0 = L_15;
		G_B16_1 = G_B15_1;
	}

IL_0098:
	{
		NullCheck(G_B16_1);
		G_B16_1->___U3CReaderSchedulerU3Ek__BackingField_7 = G_B16_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___U3CReaderSchedulerU3Ek__BackingField_7), (void*)G_B16_0);
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_16 = ___2_writerScheduler;
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_17 = L_16;
		G_B17_0 = L_17;
		G_B17_1 = __this;
		if (L_17)
		{
			G_B18_0 = L_17;
			G_B18_1 = __this;
			goto IL_00a8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_18;
		L_18 = PipeScheduler_get_ThreadPool_m229EDC30FFBFE817F0B1083103985531C7633838_inline(NULL);
		G_B18_0 = L_18;
		G_B18_1 = G_B17_1;
	}

IL_00a8:
	{
		NullCheck(G_B18_1);
		G_B18_1->___U3CWriterSchedulerU3Ek__BackingField_6 = G_B18_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B18_1->___U3CWriterSchedulerU3Ek__BackingField_6), (void*)G_B18_0);
		int64_t L_19 = ___3_pauseWriterThreshold;
		__this->___U3CPauseWriterThresholdU3Ek__BackingField_3 = L_19;
		int64_t L_20 = ___4_resumeWriterThreshold;
		__this->___U3CResumeWriterThresholdU3Ek__BackingField_4 = L_20;
		bool L_21 = ___6_useSynchronizationContext;
		__this->___U3CUseSynchronizationContextU3Ek__BackingField_2 = L_21;
		return;
	}
}
// System.Boolean System.IO.Pipelines.PipeOptions::get_UseSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeOptions_get_UseSynchronizationContext_mE4473BB3D5B22B4BC1AD4E8FDBB5A4D7E8FDFCB1 (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUseSynchronizationContextU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Int64 System.IO.Pipelines.PipeOptions::get_PauseWriterThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PipeOptions_get_PauseWriterThreshold_mB2E58F62CE58F61DE69BCB7DA3A211051E73CA14 (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CPauseWriterThresholdU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Int64 System.IO.Pipelines.PipeOptions::get_ResumeWriterThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PipeOptions_get_ResumeWriterThreshold_m963B128EE85A5D936A37673D2CF46F82F7305101 (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CResumeWriterThresholdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Int32 System.IO.Pipelines.PipeOptions::get_MinimumSegmentSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PipeOptions_get_MinimumSegmentSize_mC52E83372686C446536A4EEC660CCA1C15192D56 (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMinimumSegmentSizeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeOptions::get_WriterScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeOptions_get_WriterScheduler_mE50E05A9D4CA43B26672BD254CAEF913B5BE91FB (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_0 = __this->___U3CWriterSchedulerU3Ek__BackingField_6;
		return L_0;
	}
}
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeOptions::get_ReaderScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeOptions_get_ReaderScheduler_m7E646B44166427E661F7FD3074E63C43EE36C950 (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_0 = __this->___U3CReaderSchedulerU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Buffers.MemoryPool`1<System.Byte> System.IO.Pipelines.PipeOptions::get_Pool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* PipeOptions_get_Pool_mD6F269C640738791A4AF66BE42F36954EE05A90A (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_0 = __this->___U3CPoolU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Boolean System.IO.Pipelines.PipeOptions::get_IsDefaultSharedMemoryPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeOptions_get_IsDefaultSharedMemoryPool_m5B6BF0FEAA3A5F4F5FCE956AB2A34A7FCCD62F3B (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDefaultSharedMemoryPoolU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Int32 System.IO.Pipelines.PipeOptions::get_InitialSegmentPoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PipeOptions_get_InitialSegmentPoolSize_m84ED99D156FC807255008132BAAEF4828EC17C53 (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInitialSegmentPoolSizeU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Int32 System.IO.Pipelines.PipeOptions::get_MaxSegmentPoolSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PipeOptions_get_MaxSegmentPoolSize_m30B3C81768DC026E9399385494CAA79A22E16F8E (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaxSegmentPoolSizeU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.PipeOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeOptions__cctor_m717D75BFF7D06616FF4C485A8315B76AF550F7D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5*)il2cpp_codegen_object_new(PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PipeOptions__ctor_m418D5B51703288FEB02D86E5624B903807ABF7BA(L_0, (MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F*)NULL, (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8*)NULL, (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8*)NULL, ((int64_t)(-1)), ((int64_t)(-1)), (-1), (bool)1, NULL);
		((PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_StaticFields*)il2cpp_codegen_static_fields_for(PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_StaticFields*)il2cpp_codegen_static_fields_for(PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1), (void*)L_0);
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
// System.Void System.IO.Pipelines.PipeReader::OnWriterCompleted(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeReader_OnWriterCompleted_m12B017E999CD2627591F28C00781E1487F3F541F (PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.IO.Pipelines.PipeReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeReader__ctor_mAEFF56D3E0D6F1E1150CF0D0ED95A497408B5078 (PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void System.IO.Pipelines.PipeOperationState::BeginRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeOperationState_BeginRead_mEC431AD546BABA74218A38691A958B0C88FE39AA (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&1))) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF(NULL);
	}

IL_0010:
	{
		uint8_t L_1 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_1|1));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeOperationState_BeginRead_mEC431AD546BABA74218A38691A958B0C88FE39AA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325*>(__this + _offset);
	PipeOperationState_BeginRead_mEC431AD546BABA74218A38691A958B0C88FE39AA_inline(_thisAdjusted, method);
}
// System.Void System.IO.Pipelines.PipeOperationState::BeginReadTentative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeOperationState_BeginReadTentative_mDF3FDE2C7FBEA5B5A576420DCC399C670253316B (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&1))) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF(NULL);
	}

IL_0010:
	{
		uint8_t L_1 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_1|2));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeOperationState_BeginReadTentative_mDF3FDE2C7FBEA5B5A576420DCC399C670253316B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325*>(__this + _offset);
	PipeOperationState_BeginReadTentative_mDF3FDE2C7FBEA5B5A576420DCC399C670253316B_inline(_thisAdjusted, method);
}
// System.Void System.IO.Pipelines.PipeOperationState::EndRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeOperationState_EndRead_m592D8ECEEF5BD6E0E527C028B0618E13AC20A17B (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		if ((((int32_t)((int32_t)((int32_t)L_0&1))) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_1 = __this->____state_0;
		if ((((int32_t)((int32_t)((int32_t)L_1&2))) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NoReadToComplete_m784A80383D9030FC7C40A6EC6006BF538FD1EBCF(NULL);
	}

IL_001b:
	{
		uint8_t L_2 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_2&((int32_t)252)));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeOperationState_EndRead_m592D8ECEEF5BD6E0E527C028B0618E13AC20A17B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325*>(__this + _offset);
	PipeOperationState_EndRead_m592D8ECEEF5BD6E0E527C028B0618E13AC20A17B_inline(_thisAdjusted, method);
}
// System.Void System.IO.Pipelines.PipeOperationState::BeginWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeOperationState_BeginWrite_m8ED11EFAC957474574A405906E0160A8022E43D5 (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_0|4));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeOperationState_BeginWrite_m8ED11EFAC957474574A405906E0160A8022E43D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325*>(__this + _offset);
	PipeOperationState_BeginWrite_m8ED11EFAC957474574A405906E0160A8022E43D5_inline(_thisAdjusted, method);
}
// System.Void System.IO.Pipelines.PipeOperationState::EndWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeOperationState_EndWrite_m1A6546DCAF0D062B08D8A451AEC6E64927D2D110 (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_0&((int32_t)251)));
		return;
	}
}
IL2CPP_EXTERN_C  void PipeOperationState_EndWrite_m1A6546DCAF0D062B08D8A451AEC6E64927D2D110_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325*>(__this + _offset);
	PipeOperationState_EndWrite_m1A6546DCAF0D062B08D8A451AEC6E64927D2D110_inline(_thisAdjusted, method);
}
// System.Boolean System.IO.Pipelines.PipeOperationState::get_IsWritingActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeOperationState_get_IsWritingActive_mBF1D9C8EBC2FA5CDE6AA16E260C16DC3EE06A38D (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&4))) == ((int32_t)4))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PipeOperationState_get_IsWritingActive_mBF1D9C8EBC2FA5CDE6AA16E260C16DC3EE06A38D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325*>(__this + _offset);
	bool _returnValue;
	_returnValue = PipeOperationState_get_IsWritingActive_mBF1D9C8EBC2FA5CDE6AA16E260C16DC3EE06A38D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.IO.Pipelines.PipeOperationState::get_IsReadingActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipeOperationState_get_IsReadingActive_m61DD1F887EAFBB136FCFC46CE7928EF2367B6F34 (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&1))) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool PipeOperationState_get_IsReadingActive_m61DD1F887EAFBB136FCFC46CE7928EF2367B6F34_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325*>(__this + _offset);
	bool _returnValue;
	_returnValue = PipeOperationState_get_IsReadingActive_m61DD1F887EAFBB136FCFC46CE7928EF2367B6F34(_thisAdjusted, method);
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
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeScheduler::get_ThreadPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeScheduler_get_ThreadPool_m229EDC30FFBFE817F0B1083103985531C7633838 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931* L_0 = ((PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_StaticFields*)il2cpp_codegen_static_fields_for(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var))->___s_threadPoolScheduler_0;
		return L_0;
	}
}
// System.IO.Pipelines.PipeScheduler System.IO.Pipelines.PipeScheduler::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeScheduler_get_Inline_m905FF99D3A9419E070B525A7BD8B0B195DBAC152 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838* L_0 = ((PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_StaticFields*)il2cpp_codegen_static_fields_for(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var))->___s_inlineScheduler_1;
		return L_0;
	}
}
// System.Void System.IO.Pipelines.PipeScheduler::UnsafeSchedule(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeScheduler_UnsafeSchedule_mFE001BEB4B54A5E6B12A5E942DC4FCBB09AAA0D4 (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_action;
		RuntimeObject* L_1 = ___1_state;
		VirtualActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(4 /* System.Void System.IO.Pipelines.PipeScheduler::Schedule(System.Action`1<System.Object>,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Void System.IO.Pipelines.PipeScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeScheduler__ctor_m1EF6FC23D210C406CF13FF7F212B76A9167D8155 (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.PipeScheduler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeScheduler__cctor_m7A316BF17EFE1914D237E4B60A49047008E165BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931* L_0 = (ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931*)il2cpp_codegen_object_new(ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ThreadPoolScheduler__ctor_m57748AB9CC417057AEEC2312B60C19D178AAD353(L_0, NULL);
		((PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_StaticFields*)il2cpp_codegen_static_fields_for(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var))->___s_threadPoolScheduler_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_StaticFields*)il2cpp_codegen_static_fields_for(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var))->___s_threadPoolScheduler_0), (void*)L_0);
		InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838* L_1 = (InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838*)il2cpp_codegen_object_new(InlineScheduler_t3BFA7C72B6FBB4B9D7140F51E39697815B9BC838_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InlineScheduler__ctor_m6349295046DFCFE24C8F74E61B90257BFC7B6178(L_1, NULL);
		((PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_StaticFields*)il2cpp_codegen_static_fields_for(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var))->___s_inlineScheduler_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_StaticFields*)il2cpp_codegen_static_fields_for(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var))->___s_inlineScheduler_1), (void*)L_1);
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
// System.Void System.IO.Pipelines.PipeWriter::OnReaderCompleted(System.Action`2<System.Exception,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeWriter_OnReaderCompleted_m144675503A76780CDF637C71D9034B464A3E2C6B (PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8* __this, Action_2_t01FC6B69B2327611426DAE9A525D63494DF89645* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.PipeWriter::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 PipeWriter_WriteAsync_m7FE9F2C1A9956225C78EB55C037DF9463D201625 (PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuffersExtensions_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m580BC994AF77A9E56F26BEEF8A039088A67FF2A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_inline((&___0_source), ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_RuntimeMethod_var);
		BuffersExtensions_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m580BC994AF77A9E56F26BEEF8A039088A67FF2A1_inline(__this, L_0, BuffersExtensions_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m580BC994AF77A9E56F26BEEF8A039088A67FF2A1_RuntimeMethod_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4 L_2;
		L_2 = VirtualFuncInvoker1< ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(9 /* System.Threading.Tasks.ValueTask`1<System.IO.Pipelines.FlushResult> System.IO.Pipelines.PipeWriter::FlushAsync(System.Threading.CancellationToken) */, __this, L_1);
		return L_2;
	}
}
// System.Void System.IO.Pipelines.PipeWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeWriter__ctor_m1714F183C14A6E33FD4F53327B640BFE5C0C3C50 (PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8* __this, const RuntimeMethod* method) 
{
	{
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
// Conversion methods for marshalling of: System.IO.Pipelines.ReadResult
IL2CPP_EXTERN_C void ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshal_pinvoke(const ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644& unmarshaled, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshaled_pinvoke& marshaled)
{
	Exception_t* ____resultBuffer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_resultBuffer' of type 'ReadResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____resultBuffer_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshal_pinvoke_back(const ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshaled_pinvoke& marshaled, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644& unmarshaled)
{
	Exception_t* ____resultBuffer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_resultBuffer' of type 'ReadResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____resultBuffer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.ReadResult
IL2CPP_EXTERN_C void ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshal_pinvoke_cleanup(ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.IO.Pipelines.ReadResult
IL2CPP_EXTERN_C void ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshal_com(const ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644& unmarshaled, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshaled_com& marshaled)
{
	Exception_t* ____resultBuffer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_resultBuffer' of type 'ReadResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____resultBuffer_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshal_com_back(const ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshaled_com& marshaled, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644& unmarshaled)
{
	Exception_t* ____resultBuffer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_resultBuffer' of type 'ReadResult'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____resultBuffer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.IO.Pipelines.ReadResult
IL2CPP_EXTERN_C void ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshal_com_cleanup(ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644_marshaled_com& marshaled)
{
}
// System.Void System.IO.Pipelines.ReadResult::.ctor(System.Buffers.ReadOnlySequence`1<System.Byte>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadResult__ctor_m7AC1F674D50780D7B40EDF84B685699A6633F269 (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___0_buffer, bool ___1_isCanceled, bool ___2_isCompleted, const RuntimeMethod* method) 
{
	{
		ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A L_0 = ___0_buffer;
		__this->____resultBuffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____resultBuffer_0))->____startObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____resultBuffer_0))->____endObject_1), (void*)NULL);
		#endif
		__this->____resultFlags_1 = 0;
		bool L_1 = ___2_isCompleted;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		uint8_t L_2 = __this->____resultFlags_1;
		__this->____resultFlags_1 = ((int32_t)((int32_t)L_2|2));
	}

IL_001f:
	{
		bool L_3 = ___1_isCanceled;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t L_4 = __this->____resultFlags_1;
		__this->____resultFlags_1 = ((int32_t)((int32_t)L_4|1));
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ReadResult__ctor_m7AC1F674D50780D7B40EDF84B685699A6633F269_AdjustorThunk (RuntimeObject* __this, ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___0_buffer, bool ___1_isCanceled, bool ___2_isCompleted, const RuntimeMethod* method)
{
	ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*>(__this + _offset);
	ReadResult__ctor_m7AC1F674D50780D7B40EDF84B685699A6633F269(_thisAdjusted, ___0_buffer, ___1_isCanceled, ___2_isCompleted, method);
}
// System.Buffers.ReadOnlySequence`1<System.Byte> System.IO.Pipelines.ReadResult::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ReadResult_get_Buffer_m0D4097DA5018BAC20BD1FF7C5D86650F3E185A6E (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A L_0 = __this->____resultBuffer_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ReadResult_get_Buffer_m0D4097DA5018BAC20BD1FF7C5D86650F3E185A6E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*>(__this + _offset);
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A _returnValue;
	_returnValue = ReadResult_get_Buffer_m0D4097DA5018BAC20BD1FF7C5D86650F3E185A6E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.IO.Pipelines.ReadResult::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadResult_get_IsCanceled_m03BDA3AA806DFEF700B726CB9FF4B3134A3EC974 (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____resultFlags_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ReadResult_get_IsCanceled_m03BDA3AA806DFEF700B726CB9FF4B3134A3EC974_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReadResult_get_IsCanceled_m03BDA3AA806DFEF700B726CB9FF4B3134A3EC974(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.IO.Pipelines.ReadResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadResult_get_IsCompleted_mFF89177467C735987A481F1C335DBB09FDA682D7 (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____resultFlags_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ReadResult_get_IsCompleted_mFF89177467C735987A481F1C335DBB09FDA682D7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReadResult_get_IsCompleted_mFF89177467C735987A481F1C335DBB09FDA682D7(_thisAdjusted, method);
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
// System.Void System.IO.Pipelines.ThrowHelper::ThrowArgumentOutOfRangeException(System.IO.Pipelines.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7 (int32_t ___0_argument, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_argument;
		Exception_t* L_1;
		L_1 = ThrowHelper_CreateArgumentOutOfRangeException_m914D4E8D95E2454E2EF6216675E91B3C2349E948(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m2664096C133F7E38F6B1F58312A82CAE427739D7_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateArgumentOutOfRangeException(System.IO.Pipelines.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentOutOfRangeException_m914D4E8D95E2454E2EF6216675E91B3C2349E948 (int32_t ___0_argument, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t3C408D098C5252B53AB341FA1AEFBD51083D3F17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_t3C408D098C5252B53AB341FA1AEFBD51083D3F17_il2cpp_TypeInfo_var, (&___0_argument));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowArgumentNullException(System.IO.Pipelines.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m9FF2C61D01B45E18204A5BCE701802D97C1F9D09 (int32_t ___0_argument, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_argument;
		Exception_t* L_1;
		L_1 = ThrowHelper_CreateArgumentNullException_mD80A525F65B7CB7C4C92562A2969B78E19813C24(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_m9FF2C61D01B45E18204A5BCE701802D97C1F9D09_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateArgumentNullException(System.IO.Pipelines.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateArgumentNullException_mD80A525F65B7CB7C4C92562A2969B78E19813C24 (int32_t ___0_argument, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t3C408D098C5252B53AB341FA1AEFBD51083D3F17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_t3C408D098C5252B53AB341FA1AEFBD51083D3F17_il2cpp_TypeInfo_var, (&___0_argument));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_AlreadyReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_AlreadyReading_m5E5F558728DBBE5C40CD46864382171B924CF095(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_AlreadyReading()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_AlreadyReading_m5E5F558728DBBE5C40CD46864382171B924CF095 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_ReadingIsInProgress_m4B0A425DCA2ABC82002EEDA241451D27D5D3BAB1(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_NoReadToComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_NoReadToComplete_m784A80383D9030FC7C40A6EC6006BF538FD1EBCF (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_NoReadToComplete_m8C7C1169D8D39F882138DD49AC162B47903C8639(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_NoReadToComplete_m784A80383D9030FC7C40A6EC6006BF538FD1EBCF_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_NoReadToComplete()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_NoReadToComplete_m8C7C1169D8D39F882138DD49AC162B47903C8639 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_NoReadingOperationToComplete_m20875E51812772224BC85B5138C86C97D7674B4A(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_NoConcurrentOperation()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_NoConcurrentOperation_m1C7F04504CA2B6F2E31342929B771D426BC53C80 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_ConcurrentOperationsNotSupported_m2D14731C8250E35A40DA23696EC4A8D1D318A1D6(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_GetResultNotCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_GetResultNotCompleted_m68687070E4FAC351F1D818D97EF44432AC9BDDCD (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_GetResultNotCompleted_m7A488488F249BF24135B383384A6A4679B005D74(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_GetResultNotCompleted_m68687070E4FAC351F1D818D97EF44432AC9BDDCD_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_GetResultNotCompleted()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_GetResultNotCompleted_m7A488488F249BF24135B383384A6A4679B005D74 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_GetResultBeforeCompleted_m57338EEAAAB2D2788A8C19DA51FCD85BA548BBC1(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_NoWritingAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_NoWritingAllowed_m9EE7C1DDF70E86F4BD14DEEF4F769A2387CF4695 (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_NoWritingAllowed_m40D642D1F1F574B6F7EA1D037853DE4E7A0FCCDF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_NoWritingAllowed_m9EE7C1DDF70E86F4BD14DEEF4F769A2387CF4695_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_NoWritingAllowed()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_NoWritingAllowed_m40D642D1F1F574B6F7EA1D037853DE4E7A0FCCDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_WritingAfterCompleted_m32023D8FDC565232B0EDC0D59A5382E5CC8850D6(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_NoReadingAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_NoReadingAllowed_mFD0ED21F5A03F9232D4592DEE3E90E1BC43E695F (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_NoReadingAllowed_mFCD244CE1D6DB2B59EBB9A0A9CFD347F044B52C6(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_NoReadingAllowed_mFD0ED21F5A03F9232D4592DEE3E90E1BC43E695F_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_NoReadingAllowed()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_NoReadingAllowed_mFCD244CE1D6DB2B59EBB9A0A9CFD347F044B52C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_ReadingAfterCompleted_m42DCCD19AF88FCE51084AE674CB52DEFF1883A7A(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_InvalidExaminedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidExaminedPosition_mABA820684341FF9D6D6C3BFB0DBA21738AADA32C (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_InvalidExaminedPosition_m7CB62E9BB216E5C27390EE42EDA1193EE780458B(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_InvalidExaminedPosition_mABA820684341FF9D6D6C3BFB0DBA21738AADA32C_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_InvalidExaminedPosition()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_InvalidExaminedPosition_m7CB62E9BB216E5C27390EE42EDA1193EE780458B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_InvalidExaminedPosition_mF50D6EF1F5E0E107B8D55E1DF7B1179A8C155AF9(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_InvalidExaminedOrConsumedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidExaminedOrConsumedPosition_m603884FB87ABE71205CE6CB2DF53D1227C37D5D4 (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_InvalidExaminedOrConsumedPosition_mC1E322A2A254D400CE1A4B6E5E1AA9818CD2C9F0(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_InvalidExaminedOrConsumedPosition_m603884FB87ABE71205CE6CB2DF53D1227C37D5D4_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_InvalidExaminedOrConsumedPosition()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_InvalidExaminedOrConsumedPosition_mC1E322A2A254D400CE1A4B6E5E1AA9818CD2C9F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_InvalidExaminedOrConsumedPosition_m52513C37F8E6F52A874D09D7F20613330CA31729(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.Pipelines.ThrowHelper::ThrowInvalidOperationException_AdvanceToInvalidCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_AdvanceToInvalidCursor_mC800A30BF62F718FEC7B0F98FD5878BCFC68E73C (const RuntimeMethod* method) 
{
	{
		Exception_t* L_0;
		L_0 = ThrowHelper_CreateInvalidOperationException_AdvanceToInvalidCursor_mC7ED4BF5907AD1C5AD50F9222281070E1C9C82A6(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_AdvanceToInvalidCursor_mC800A30BF62F718FEC7B0F98FD5878BCFC68E73C_RuntimeMethod_var)));
	}
}
// System.Exception System.IO.Pipelines.ThrowHelper::CreateInvalidOperationException_AdvanceToInvalidCursor()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Exception_t* ThrowHelper_CreateInvalidOperationException_AdvanceToInvalidCursor_mC7ED4BF5907AD1C5AD50F9222281070E1C9C82A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_AdvanceToInvalidCursor_m541FD316F410045743697676207B8FCC4D27E0C7(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
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
// System.Void System.IO.Pipelines.ThreadPoolScheduler::Schedule(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler_Schedule_m6CC6044FD986FDFCAE0544EB57D2602ED5A91BA4 (ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CScheduleU3Eb__0_0_m8DE599E6515E96355D79A8C204194D4D9D669F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* G_B2_0 = NULL;
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_0 = ((U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var);
		U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE* L_2 = ((U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_3 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CScheduleU3Eb__0_0_m8DE599E6515E96355D79A8C204194D4D9D669F4A_RuntimeMethod_var), NULL);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_4 = L_3;
		((U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_action;
		RuntimeObject* L_6 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_7;
		L_7 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_5, L_6, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		bool L_8;
		L_8 = ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB(G_B2_0, L_7, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.ThreadPoolScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler__ctor_m57748AB9CC417057AEEC2312B60C19D178AAD353 (ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		PipeScheduler__ctor_m1EF6FC23D210C406CF13FF7F212B76A9167D8155(__this, NULL);
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
// System.Void System.IO.Pipelines.ThreadPoolScheduler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0146F1A5BE45C065F5BF825D23F620F78D12E48F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE* L_0 = (U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE*)il2cpp_codegen_object_new(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5144C3D7F061E4187274ACC43C85F8093DEFDD5A(L_0, NULL);
		((U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.IO.Pipelines.ThreadPoolScheduler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5144C3D7F061E4187274ACC43C85F8093DEFDD5A (U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.IO.Pipelines.ThreadPoolScheduler/<>c::<Schedule>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CScheduleU3Eb__0_0_m8DE599E6515E96355D79A8C204194D4D9D669F4A (U3CU3Ec_t466254E2B75C98A2AB58EEB41C97C9CCA088CDBE* __this, RuntimeObject* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m8EE9690D63602500CB421876A29C083C1A948835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m8C35776EFFA9FB3C7A564460C2B7BF43AF056CA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_s;
		V_0 = ((Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1*)CastclassClass((RuntimeObject*)L_0, Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1_il2cpp_TypeInfo_var));
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_1 = V_0;
		NullCheck(L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2;
		L_2 = Tuple_2_get_Item1_m8EE9690D63602500CB421876A29C083C1A948835_inline(L_1, Tuple_2_get_Item1_m8EE9690D63602500CB421876A29C083C1A948835_RuntimeMethod_var);
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Tuple_2_get_Item2_m8C35776EFFA9FB3C7A564460C2B7BF43AF056CA2_inline(L_3, Tuple_2_get_Item2_m8C35776EFFA9FB3C7A564460C2B7BF43AF056CA2_RuntimeMethod_var);
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_4, NULL);
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
// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenExtensions::UnsafeRegister(System.Threading.CancellationToken,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationTokenExtensions_UnsafeRegister_m5DC52D726331A0941041962243118F2864A7D277 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___1_callback;
		RuntimeObject* L_1 = ___2_state;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_2;
		L_2 = CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859((&___0_cancellationToken), L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB7D0ADFAA6A7B6C848EB81367A9263569856ECC6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_StaticFields*)il2cpp_codegen_static_fields_for(SR_tBDA05831C94CFF87172E659B9FFCE05DE1B099DE_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 BufferSegment_get_AvailableMemory_mCC8FDB9B97D16405DC1FC731E346B8D7AE823F20_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = __this->___U3CAvailableMemoryU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BufferSegment_set_AvailableMemory_m17969125D03B14BB2B2729AA58A69FF2D9A278D6_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_value, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = ___0_value;
		__this->___U3CAvailableMemoryU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CAvailableMemoryU3Ek__BackingField_7))->____object_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BufferSegment_get_End_m273C21B558B88E92EB1B8B3B6EE5EF00B405900B_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____end_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* BufferSegment_get_NextSegment_m59FAA272F7120524F4D2E806A7541FBD0D6EFFA5_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* __this, const RuntimeMethod* method) 
{
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = __this->____next_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* CompletionData_get_Completion_m38CE7CBB6C0D0387BDA92B1705244ADBDC9008EE_inline (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->___U3CCompletionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompletionData_get_CompletionState_mD9C390FC5F9C9FA139BFB1E0003A3003F95E78B9_inline (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCompletionStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5_inline (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) 
{
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_0 = __this->___U3CExecutionContextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_inline (CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* __this, const RuntimeMethod* method) 
{
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___U3CSynchronizationContextU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BufferSegmentStack_get_Count_mFA3C00771FF9C4346612D3840AF63892208D1132_inline (BufferSegmentStack_t6EE7B9D9F78441231C7512702246617A104401B3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* SegmentAsValueType_op_Implicit_m8D9E2F250374B8B841CAFC04DDDFA4A692861103_inline (SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 ___0_s, const RuntimeMethod* method) 
{
	{
		SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510 L_0 = ___0_s;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_1 = L_0.____value_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SegmentAsValueType__ctor_m6C6C805C59D12B3FEDC1304B5A9A65C88B24AD52_inline (SegmentAsValueType_t992CB04322D67E6B99B27539969C941A702B4510* __this, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_value, const RuntimeMethod* method) 
{
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___0_value;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PipeOptions_get_UseSynchronizationContext_mE4473BB3D5B22B4BC1AD4E8FDBB5A4D7E8FDFCB1_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUseSynchronizationContextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PipeOptions_get_MinimumSegmentSize_mC52E83372686C446536A4EEC660CCA1C15192D56_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMinimumSegmentSizeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t PipeOptions_get_PauseWriterThreshold_mB2E58F62CE58F61DE69BCB7DA3A211051E73CA14_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CPauseWriterThresholdU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t PipeOptions_get_ResumeWriterThreshold_m963B128EE85A5D936A37673D2CF46F82F7305101_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CResumeWriterThresholdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeOptions_get_ReaderScheduler_m7E646B44166427E661F7FD3074E63C43EE36C950_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_0 = __this->___U3CReaderSchedulerU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeOptions_get_WriterScheduler_mE50E05A9D4CA43B26672BD254CAEF913B5BE91FB_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_0 = __this->___U3CWriterSchedulerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* PipeOptions_get_Default_mAAE5981997B15A561A035FB1EC79278E0B1AB77F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var);
		PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* L_0 = ((PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_StaticFields*)il2cpp_codegen_static_fields_for(PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PipeOptions_get_InitialSegmentPoolSize_m84ED99D156FC807255008132BAAEF4828EC17C53_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInitialSegmentPoolSizeU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pipe_AllocateWriteHeadIfNeeded_mD1A291629EFE7085BB2A6F97406E5C9A5BCA70BA_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* L_0 = (&__this->____operationState_28);
		bool L_1;
		L_1 = PipeOperationState_get_IsWritingActive_mBF1D9C8EBC2FA5CDE6AA16E260C16DC3EE06A38D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_2 = (&__this->____writingHeadMemory_26);
		int32_t L_3;
		L_3 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_2, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (&__this->____writingHeadMemory_26);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6 = ___0_sizeHint;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}

IL_0028:
	{
		int32_t L_7 = ___0_sizeHint;
		Pipe_AllocateWriteHeadSynchronized_m25DFA2C95E8EBEE7396839928509F26FEC5C3412(__this, L_7, NULL);
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Pipe_get_SyncObj_mC764A1EA3B16CBF6AB125274C26C9625E757714E_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____sync_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_BeginWrite_m8ED11EFAC957474574A405906E0160A8022E43D5_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_0|4));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PipeOptions_get_IsDefaultSharedMemoryPool_m5B6BF0FEAA3A5F4F5FCE956AB2A34A7FCCD62F3B_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDefaultSharedMemoryPoolU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* PipeOptions_get_Pool_mD6F269C640738791A4AF66BE42F36954EE05A90A_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_0 = __this->___U3CPoolU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PipeOptions_get_MaxSegmentPoolSize_m30B3C81768DC026E9399385494CAA79A22E16F8E_inline (PipeOptions_t1189571D8BEDF3322B4334609AB430506417F9D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMaxSegmentPoolSizeU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_EndWrite_m1A6546DCAF0D062B08D8A451AEC6E64927D2D110_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_0&((int32_t)251)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeAwaitable_SetUncompleted_mC3B615F389C96AFA5C9D9E63856E4F187E4E520D_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_0&((int32_t)-2)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pipe_AdvanceCore_m0D648E24601E1FB21F02B02470B2F28203EB6E0D_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, int32_t ___0_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = __this->____unflushedBytes_13;
		int32_t L_1 = ___0_bytesWritten;
		__this->____unflushedBytes_13 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)L_1)));
		int32_t L_2 = __this->____writingHeadBytesBuffered_27;
		int32_t L_3 = ___0_bytesWritten;
		__this->____writingHeadBytesBuffered_27 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (&__this->____writingHeadMemory_26);
		int32_t L_5 = ___0_bytesWritten;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6;
		L_6 = Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_inline(L_4, L_5, Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_RuntimeMethod_var);
		__this->____writingHeadMemory_26 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____writingHeadMemory_26))->____object_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pipe_TrySchedule_m053B240484995D4ADEF243ADC9A02EAB00A01D6C_inline (PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* ___0_scheduler, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___1_completionData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_0 = ___1_completionData;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1;
		L_1 = CompletionData_get_Completion_m38CE7CBB6C0D0387BDA92B1705244ADBDC9008EE_inline(L_0, NULL);
		V_0 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_3 = ___1_completionData;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_4;
		L_4 = CompletionData_get_SynchronizationContext_mBB6E9E3A46A275A30ACE86A4C9E1BA89B8D785C3_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_5 = ___1_completionData;
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6;
		L_6 = CompletionData_get_ExecutionContext_mE0F3A9C91A29316ADAFE0F0DAE9A2DD6DDF0C3B5_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_7 = ___0_scheduler;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = V_0;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_9 = ___1_completionData;
		RuntimeObject* L_10;
		L_10 = CompletionData_get_CompletionState_mD9C390FC5F9C9FA139BFB1E0003A3003F95E78B9_inline(L_9, NULL);
		NullCheck(L_7);
		VirtualActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(5 /* System.Void System.IO.Pipelines.PipeScheduler::UnsafeSchedule(System.Action`1<System.Object>,System.Object) */, L_7, L_8, L_10);
		return;
	}

IL_0029:
	{
		PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* L_11 = ___0_scheduler;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_12 = ___1_completionData;
		il2cpp_codegen_runtime_class_init_inline(Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED_il2cpp_TypeInfo_var);
		Pipe_ScheduleWithContext_m80969848A1D8D1E22B1051D5B7790D6BD080C7D9(L_11, L_12, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeAwaitable_BeginOperation_mA7883C5AEBE4BFC6F844C8E9554D611FDEFC9612_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) 
{
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&___0_cancellationToken), NULL);
		bool L_0;
		L_0 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___0_cancellationToken), NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		bool L_1;
		L_1 = PipeAwaitable_get_IsCompleted_m3DE993B4E056D842968269A3B550AE2BF5456CBF(__this, NULL);
		if (L_1)
		{
			goto IL_004a;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___0_cancellationToken;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___1_callback;
		RuntimeObject* L_4 = ___2_state;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5;
		L_5 = CancellationTokenExtensions_UnsafeRegister_m5DC52D726331A0941041962243118F2864A7D277(L_2, L_3, L_4, NULL);
		__this->____cancellationTokenRegistration_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____cancellationTokenRegistration_4))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->____cancellationTokenRegistration_4))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6 = __this->____cancellationTokenRegistration_4;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389));
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_7 = V_0;
		bool L_8;
		L_8 = CancellationTokenRegistration_op_Equality_m3065B0BF864E200DEF5E730A284E8CF07B755FBE(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&___0_cancellationToken), NULL);
	}

IL_0043:
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___0_cancellationToken;
		__this->____cancellationToken_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____cancellationToken_5))->____source_0), (void*)NULL);
	}

IL_004a:
	{
		int32_t L_10 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_10|2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeAwaitable_Complete_mCD976D74FF4AA8B2D65AF1F3131F53085B679227_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) 
{
	{
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_0 = ___0_completionData;
		PipeAwaitable_ExtractCompletion_mF3441339276A5F9205F753A687629255D8718257_inline(__this, L_0, NULL);
		int32_t L_1 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_1|1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m04F459B1FE3E46A74C1AB83B9CEE47B0B3969789_inline (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____object_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mC0CBD9B4F6DF6205A30F76497C27C063AA7C3D0B_inline (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____integer_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BufferSegment_GetLength_mB95FA15C589777E586F870EA9D34DBD1EC3B61AB_inline (BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___0_startSegment, int32_t ___1_startIndex, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___2_endSegment, int32_t ___3_endIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___2_endSegment;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline(L_0, ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		int32_t L_2 = ___3_endIndex;
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_3 = ___0_startSegment;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline(L_3, ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		int32_t L_5 = ___1_startIndex;
		return ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(L_1, ((int64_t)(uint64_t)((uint32_t)L_2)))), ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)(uint64_t)((uint32_t)L_5))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BufferSegment_GetLength_m129BF3AB9FB45C20EA8E55849DB74BD4C902B08E_inline (int64_t ___0_startPosition, BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* ___1_endSegment, int32_t ___2_endIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferSegment_t8402FB1D4C33151DAC1ED8B1492A9BD386224373* L_0 = ___1_endSegment;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_inline(L_0, ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_RuntimeMethod_var);
		int32_t L_2 = ___2_endIndex;
		int64_t L_3 = ___0_startPosition;
		return ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(L_1, ((int64_t)(uint64_t)((uint32_t)L_2)))), L_3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_EndRead_m592D8ECEEF5BD6E0E527C028B0618E13AC20A17B_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		if ((((int32_t)((int32_t)((int32_t)L_0&1))) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_1 = __this->____state_0;
		if ((((int32_t)((int32_t)((int32_t)L_1&2))) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NoReadToComplete_m784A80383D9030FC7C40A6EC6006BF538FD1EBCF(NULL);
	}

IL_001b:
	{
		uint8_t L_2 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_2&((int32_t)252)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_BeginReadTentative_mDF3FDE2C7FBEA5B5A576420DCC399C670253316B_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&1))) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF(NULL);
	}

IL_0010:
	{
		uint8_t L_1 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_1|2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeWriter_t8C65BF91E091116DDA778E1B1D591F53A9EE9AE8* Pipe_get_Writer_mD442001BC04EE87D78C2B27E2987ADAAFBE8A0D5_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		DefaultPipeWriter_tDD0E166FC683C9817BD2CF9DE504778C31E374DE* L_0 = __this->____writer_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 PipeAwaitable_ReleaseCancellationTokenRegistration_m8439D89D7A06A4B86DB060A279B2A43648DB8505_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* ___0_cancellationToken, const RuntimeMethod* method) 
{
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = ___0_cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = PipeAwaitable_get_CancellationToken_mF64DF2BF00761E71C099B47BF9FB766C38F61C21_inline(__this, NULL);
		*(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)L_0)->____source_0), (void*)NULL);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_2 = __this->____cancellationTokenRegistration_4;
		V_0 = L_2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_3 = (&__this->____cancellationToken_5);
		il2cpp_codegen_initobj(L_3, sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_4 = (&__this->____cancellationTokenRegistration_4);
		il2cpp_codegen_initobj(L_4, sizeof(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389));
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PipeCompletion_IsCompletedOrThrow_m119F9ECC0F21F2999A76CD762E8BB45EDCFA031F_inline (PipeCompletion_t4D0BFCFAFD54514A1406634F89B9077E54702848* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* V_0 = NULL;
	{
		bool L_0;
		L_0 = PipeCompletion_get_IsCompleted_m1A2216E4286B87B45DD8AFEE159B328062BE9F79(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____state_1;
		V_0 = ((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)IsInstSealed((RuntimeObject*)L_1, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var));
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = V_0;
		NullCheck(L_3);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_3, NULL);
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PipeAwaitable_ObserveCancellation_m1A6012106CF7DFEB8D6CD3155C7EF727D4A40BED_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->____awaitableState_0;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&4))) == ((int32_t)4))? 1 : 0);
		int32_t L_1 = __this->____awaitableState_0;
		__this->____awaitableState_0 = ((int32_t)((int32_t)L_1&((int32_t)-7)));
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeOperationState_BeginRead_mEC431AD546BABA74218A38691A958B0C88FE39AA_inline (PipeOperationState_t00BBB1EDE2E82F3ED67A0290494096B3A587E325* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->____state_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&1))) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_AlreadyReading_m7A2313D007C4961F96CCC48DD3519E7A30F24BCF(NULL);
	}

IL_0010:
	{
		uint8_t L_1 = __this->____state_0;
		__this->____state_0 = ((int32_t)((int32_t)L_1|1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeReader_tABBBF1E4EF90C8D3ACA83EF639183982FC219135* Pipe_get_Reader_mC3B7234B16037A59B3719BD059A977BF2C3153C9_inline (Pipe_tC347D1B1656618ADDE5D79937D1FAF9A80D225ED* __this, const RuntimeMethod* method) 
{
	{
		DefaultPipeReader_tE23717FFBD5BEA2B4A56E5F4F0A6B71688E5F3D5* L_0 = __this->____reader_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED PipeAwaitable_get_CancellationToken_mF64DF2BF00761E71C099B47BF9FB766C38F61C21_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PipeAwaitable_ExtractCompletion_mF3441339276A5F9205F753A687629255D8718257_inline (PipeAwaitable_tCDAF4E520A7FA1E04D8CD12468288E3C44E61ECE* __this, CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* ___0_completionData, const RuntimeMethod* method) 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* V_2 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* V_3 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_4 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C V_5;
	memset((&V_5), 0, sizeof(V_5));
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B3_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B6_0 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B8_0 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B7_0 = NULL;
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* G_B9_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->____completion_1;
		V_0 = L_0;
		RuntimeObject* L_1 = __this->____completionState_2;
		V_1 = L_1;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_2 = __this->____schedulingContext_3;
		V_2 = L_2;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_3 = V_2;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)(NULL));
		goto IL_0021;
	}

IL_001b:
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_4 = V_2;
		NullCheck(L_4);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5;
		L_5 = SchedulingContext_get_ExecutionContext_mAC0B4BACB8A4F02BB3F96180FFD67E77F3DEA2BD_inline(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0021:
	{
		V_3 = G_B3_0;
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_6 = V_2;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		G_B6_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)(NULL));
		goto IL_002e;
	}

IL_0028:
	{
		SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* L_7 = V_2;
		NullCheck(L_7);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8;
		L_8 = SchedulingContext_get_SynchronizationContext_m54BD83B94570F8D15827BF93F1459FFCBCE32344_inline(L_7, NULL);
		G_B6_0 = L_8;
	}

IL_002e:
	{
		V_4 = G_B6_0;
		__this->____completion_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completion_1), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____completionState_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____completionState_2), (void*)NULL);
		__this->____schedulingContext_3 = (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____schedulingContext_3), (void*)(SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72*)NULL);
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C* L_9 = ___0_completionData;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_10 = V_0;
		G_B7_0 = L_9;
		if (L_10)
		{
			G_B8_0 = L_9;
			goto IL_0055;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C));
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_11 = V_5;
		G_B9_0 = L_11;
		G_B9_1 = G_B7_0;
		goto IL_005f;
	}

IL_0055:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = V_0;
		RuntimeObject* L_13 = V_1;
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_14 = V_3;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_15 = V_4;
		CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C L_16;
		memset((&L_16), 0, sizeof(L_16));
		CompletionData__ctor_mD47C730410F38D7A6A7FB44E8F0E6DD803679C21((&L_16), L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		G_B9_0 = L_16;
		G_B9_1 = G_B8_0;
	}

IL_005f:
	{
		*(CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1)->___U3CCompletionU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1)->___U3CCompletionStateU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1)->___U3CExecutionContextU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CompletionData_t35C2FDAB6685BFC8F3091EC46BCEAEF99A158F2C*)G_B9_1)->___U3CSynchronizationContextU3Ek__BackingField_3), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* SchedulingContext_get_ExecutionContext_mAC0B4BACB8A4F02BB3F96180FFD67E77F3DEA2BD_inline (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, const RuntimeMethod* method) 
{
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_0 = __this->___U3CExecutionContextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SchedulingContext_get_SynchronizationContext_m54BD83B94570F8D15827BF93F1459FFCBCE32344_inline (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, const RuntimeMethod* method) 
{
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___U3CSynchronizationContextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchedulingContext_set_SynchronizationContext_m50C6F4B4C2DED193662E298CF49C60DFF34C5CF5_inline (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		__this->___U3CSynchronizationContextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSynchronizationContextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SchedulingContext_set_ExecutionContext_mBB5425998CCCAD4D39356A222294303ECAFF825F_inline (SchedulingContext_t737B9FC0D4B7889393F39118F02211BBC5227C72* __this, ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_value, const RuntimeMethod* method) 
{
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_0 = ___0_value;
		__this->___U3CExecutionContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExecutionContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___m_Exception_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8* PipeScheduler_get_ThreadPool_m229EDC30FFBFE817F0B1083103985531C7633838_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var);
		ThreadPoolScheduler_t15B4B38A503104AB179E1BB9368698A32E545931* L_0 = ((PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_StaticFields*)il2cpp_codegen_static_fields_for(PipeScheduler_t074366BD2A9BE3379DA6334FD2AB025E90E6CCF8_il2cpp_TypeInfo_var))->___s_threadPoolScheduler_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ReadResult_get_Buffer_m0D4097DA5018BAC20BD1FF7C5D86650F3E185A6E_inline (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A L_0 = __this->____resultBuffer_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m0C6108D3F3915D5A00D0B8E9B322CDF1490FC4EC_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___1_length;
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_start;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))))))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001e:
	{
		RuntimeObject* L_7 = (RuntimeObject*)__this->____object_0;
		int32_t L_8 = (int32_t)__this->____index_1;
		int32_t L_9 = ___0_start;
		int32_t L_10 = ___1_length;
		int32_t L_11 = V_0;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_inline((&L_12), L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), ((int32_t)(L_10|((int32_t)(L_11&((int32_t)-2147483648LL))))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySequenceSegment_1_set_Memory_mF5AAC98D98765D68B95E3D4297B283CE4F312E97_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_value, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_0 = ___0_value;
		__this->___U3CMemoryU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CMemoryU3Ek__BackingField_0))->____object_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySequenceSegment_1_set_Next_m7DBA786E08FBDCA45A6DFC39584EED41CA2E2BA4_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ___0_value, const RuntimeMethod* method) 
{
	{
		ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* L_0 = ___0_value;
		__this->___U3CNextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySequenceSegment_1_set_RunningIndex_m435B596F834A3FF1BFF4B76549B24746E19A7C99_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CRunningIndexU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_0 = ((ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CSharedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ReadOnlySequenceSegment_1_get_RunningIndex_mC1F25977D805187711D9ED4801A2E6B3B31371AC_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (int64_t)__this->___U3CRunningIndexU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* ReadOnlySequenceSegment_1_get_Next_m2D0399C1974F8C84EC006630E4CA359EC2A30497_gshared_inline (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839* L_0 = (ReadOnlySequenceSegment_1_tAF47A6AEF56219CC87A7C361B7F1D927BE339839*)__this->___U3CNextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____index_1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->____object_0;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(8 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))));
		V_0 = L_2;
		int32_t L_3 = (int32_t)__this->____index_1;
		int32_t L_4 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_5;
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->____object_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_13 = V_1;
		NullCheck(L_13);
		Il2CppChar* L_14;
		L_14 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_13, NULL);
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_as_ref<uint8_t>(L_14);
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_18), L_15, L_17, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		V_0 = L_18;
		int32_t L_19 = (int32_t)__this->____index_1;
		int32_t L_20 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return L_21;
	}

IL_0089:
	{
		RuntimeObject* L_22 = (RuntimeObject*)__this->____object_0;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_23 = (RuntimeObject*)__this->____object_0;
		int32_t L_24 = (int32_t)__this->____index_1;
		int32_t L_25 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_26), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13))), L_24, ((int32_t)(L_25&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_26;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27 = V_0;
		return L_27;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_Slice_m3CDAF3B48A5E1B8C970AB66EF679FB716ACFE3D4_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____length_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)24), NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____object_0;
		int32_t L_5 = (int32_t)__this->____index_1;
		int32_t L_6 = ___0_start;
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_start;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_inline((&L_9), L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m243E68215B893231083320C217D92B47D16A718E_gshared_inline (ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* __this, FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E ___0_result, const RuntimeMethod* method) 
{
	{
		FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E L_0 = ___0_result;
		__this->____result_2 = L_0;
		__this->____obj_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)NULL);
		__this->____continueOnCapturedContext_4 = (bool)1;
		__this->____token_3 = (int16_t)0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m757F3F4A97F75BF5632ED28A48C0D8282A7FEA22_gshared_inline (ValueTask_1_t783ACBFF10EDF26789EE6FF837AD72199FDC85D4* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)39), NULL);
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_source;
		__this->____obj_1 = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)(RuntimeObject*)L_1);
		int16_t L_2 = ___1_token;
		__this->____token_3 = L_2;
		FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E* L_3 = (FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E*)(&__this->____result_2);
		il2cpp_codegen_initobj(L_3, sizeof(FlushResult_tAFD4CB255169BCE70CC802106311C6A2393A320E));
		__this->____continueOnCapturedContext_4 = (bool)1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_mE440709E14F82653B50641151ADF98E61B0ED598_gshared_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* ___0_task, const RuntimeMethod* method) 
{
	{
		Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* L_0 = ___0_task;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)38), NULL);
	}

IL_000a:
	{
		Task_1_tEA8586AA037A5DCBF26DC92AD34434ED217FD187* L_1 = ___0_task;
		__this->____obj_1 = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)(RuntimeObject*)L_1);
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* L_2 = (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*)(&__this->____result_2);
		il2cpp_codegen_initobj(L_2, sizeof(ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644));
		__this->____continueOnCapturedContext_4 = (bool)1;
		__this->____token_3 = (int16_t)0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m27DF3B298A1EAE300EC3C960D227B95CAAD2B06A_gshared_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 ___0_result, const RuntimeMethod* method) 
{
	{
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644 L_0 = ___0_result;
		__this->____result_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->____result_2))->____resultBuffer_0))->____startObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->____result_2))->____resultBuffer_0))->____endObject_1), (void*)NULL);
		#endif
		__this->____obj_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)NULL);
		__this->____continueOnCapturedContext_4 = (bool)1;
		__this->____token_3 = (int16_t)0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1__ctor_mEADE5004D872062262E9A9FEF711B559E9A3A57A_gshared_inline (ValueTask_1_t5102E701BAD39A11A02E994DA3FECCC08BF0C0AA* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)39), NULL);
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_source;
		__this->____obj_1 = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_1), (void*)(RuntimeObject*)L_1);
		int16_t L_2 = ___1_token;
		__this->____token_3 = L_2;
		ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644* L_3 = (ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644*)(&__this->____result_2);
		il2cpp_codegen_initobj(L_3, sizeof(ReadResult_tD16C044BDE497136BE54CE0E6A2BDB1DAD127644));
		__this->____continueOnCapturedContext_4 = (bool)1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = (int32_t)__this->____index_1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->____object_0;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(8 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
		V_0 = L_2;
		int32_t L_3 = (int32_t)__this->____index_1;
		int32_t L_4 = (int32_t)__this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_6;
	}

IL_0039:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_12 = (RuntimeObject*)__this->____object_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var));
		String_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		Il2CppChar* L_15;
		L_15 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		String_t* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_19;
		memset((&L_19), 0, sizeof(L_19));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_19), L_16, L_18, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		V_2 = L_19;
		int32_t L_20 = (int32_t)__this->____index_1;
		int32_t L_21 = (int32_t)__this->____length_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22;
		L_22 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&V_2), L_20, L_21, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_22;
	}

IL_008e:
	{
		RuntimeObject* L_23 = (RuntimeObject*)__this->____object_0;
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_24 = (RuntimeObject*)__this->____object_0;
		int32_t L_25 = (int32_t)__this->____index_1;
		int32_t L_26 = (int32_t)__this->____length_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_27;
		memset((&L_27), 0, sizeof(L_27));
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_27), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14))), L_25, ((int32_t)(L_26&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_27;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_28 = V_2;
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA3E96E178A183FF2A77D2D2416A61C89B69C8994_gshared_inline (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 ___0_item, const RuntimeMethod* method) 
{
	PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7* L_1 = (PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PipeCompletionCallbackU5BU5D_t3403623AE3B6E86F36471135135E59621CD65BF7* L_6 = V_0;
		int32_t L_7 = V_1;
		PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467)L_8);
		return;
	}

IL_0034:
	{
		PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467 L_9 = ___0_item;
		((  void (*) (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3*, PipeCompletionCallback_tFE8F56E78FE3E5883472A5CF49AEAB50098D0467, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m95A6F25EC14A8041B97D9929825AC0B1978A9BAA_gshared_inline (List_1_t060F803F4B56330F63AB0D7445215EABA1930CD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* MemoryPool_1_get_Shared_m41EB8807E544C2F44656CCECA266E20DF8AA7F82_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F* L_0 = ((MemoryPool_1_t69010D684A118E2AAC884F486259FA9C8CA8BF9F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___s_shared_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuffersExtensions_Write_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m580BC994AF77A9E56F26BEEF8A039088A67FF2A1_gshared_inline (RuntimeObject* ___0_writer, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) 
{
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_writer;
		NullCheck(L_0);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		L_1 = InterfaceFuncInvoker1< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, int32_t >::Invoke(1 /* System.Span`1<T> System.Buffers.IBufferWriter`1<System.Byte>::GetSpan(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_0, 0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_value), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_3;
		L_3 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4 = V_0;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___1_value), L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_5 = ___0_writer;
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_value), il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void System.Buffers.IBufferWriter`1<System.Byte>::Advance(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_5, L_6);
		return;
	}

IL_002e:
	{
		RuntimeObject* L_7 = ___0_writer;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = V_0;
		((  void (*) (RuntimeObject*, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_7, (&___1_value), L_8, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item2_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mBE9F7C56DD796E618D01C0184E9455EBC02690AA_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____object_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object_0), (void*)L_0);
		int32_t L_1 = ___1_start;
		__this->____index_1 = L_1;
		int32_t L_2 = ___2_length;
		__this->____length_2 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		int32_t L_17 = ___1_start;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___2_length;
		__this->____length_1 = L_20;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = ___1_start;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, L_11);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___2_length;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
