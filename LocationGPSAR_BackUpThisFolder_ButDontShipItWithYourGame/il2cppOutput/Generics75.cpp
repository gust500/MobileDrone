#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InterfaceFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceFuncInvoker9
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InterfaceFuncInvoker10
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.WeakReference>
struct ConcurrentDictionary_2_t57450B156F906C97792AFB99872897C14295D9F8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB;
// System.Func`2<System.Double,System.Boolean>
struct Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey>
struct Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2;
// System.Func`2<System.UInt32,System.Boolean>
struct Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4;
// System.Func`2<System.UInt32,System.Int32>
struct Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A;
// System.Func`2<System.UInt32,System.Object>
struct Func_2_t5992936113CB10755892A492A7E657203C1C94A7;
// System.Func`2<Mapbox.Utils.Vector2d,System.Boolean>
struct Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5;
// System.Func`2<Mapbox.Utils.Vector2d,System.Double>
struct Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3;
// System.Func`2<Mapbox.Utils.Vector2d,System.Object>
struct Func_2_t970C4D283503CE14B164593594D7DE2922495B50;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E;
// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4;
// System.Func`2<Vuforia.VuVector2F,System.Boolean>
struct Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453;
// System.Func`2<Vuforia.VuVector2F,UnityEngine.Vector3>
struct Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96;
// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>
struct Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229;
// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>
struct Func_2_t05C679C84117651025D11DADD191731BCFA59D16;
// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>
struct Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51;
// System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.HashEntry>
struct IAsyncEnumerable_1_tD5A52CF1657B792D81B7CC7E8E2A3E175A43053A;
// System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.RedisValue>
struct IAsyncEnumerable_1_t155F7198AD2E4B328144FE5190D21EBCC706C90E;
// System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.SortedSetEntry>
struct IAsyncEnumerable_1_t1EB5D50E08F6E678205B68ABBB2E7A0D621EF28B;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_tAB7E6AAC5334AFEE42DB96DB8C245338F041A2DB;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_tC485938B2065194F37223DC3FA35818439FD0233;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5;
// System.Linq.Enumerable/Iterator`1<System.Double>
struct Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E;
// StackExchange.Redis.Lease`1<System.Byte>
struct Lease_1_tF8310FEE40EC90C8B0670FA5A230FAABE36890A9;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>
struct List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Vuforia.VuVector2F>
struct List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C;
// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.Lease`1<System.Byte>>
struct TaskFactory_1_t13948BCFF376D6BF6F457B70B43964E21FF89E23;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.DateTime>>
struct TaskFactory_1_tD1312B07567D037375AE1BC9E412FA736BE9A26C;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Double>>
struct TaskFactory_1_t440BCA273D8F7D2BE5CAA88135480E6CF22A9715;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<StackExchange.Redis.GeoPosition>>
struct TaskFactory_1_t818D7322D7DA2FE7677C85F472F6590AD93CC2C3;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Int64>>
struct TaskFactory_1_t977B8E86A5C0C791607D53BFFDD277D6A28F3DCF;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<StackExchange.Redis.SortedSetEntry>>
struct TaskFactory_1_t2D6F8906D1F261A2CE9509F421D6E568A73AFC63;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.TimeSpan>>
struct TaskFactory_1_tDC8B58CA30DBB653C0C9581BB298C0E852D8A3A7;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Double>[]>
struct TaskFactory_1_tC90CF9C331B6959B4784FFB7B01A6D5FC461CBCB;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<StackExchange.Redis.GeoPosition>[]>
struct TaskFactory_1_tC153B4C4924577D0B0AE3E891CDCB1DE077EEB3D;
// System.Threading.Tasks.TaskFactory`1<System.Boolean[]>
struct TaskFactory_1_t88C52B7A1D9FF0CB24BBB02CF2AB70BDC443BFFF;
// System.Threading.Tasks.TaskFactory`1<System.Byte[]>
struct TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.GeoRadiusResult[]>
struct TaskFactory_1_tAFBA9C991DBF571638515D852A8BB7900C9994EB;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.HashEntry[]>
struct TaskFactory_1_t502171A25276F0D08507BA0A7D1643814C2AE5BF;
// System.Threading.Tasks.TaskFactory`1<System.Int64[]>
struct TaskFactory_1_t557F2CE29FD006159EA7E64448DA7E424181E642;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.RedisStream[]>
struct TaskFactory_1_t786871869ADD075CEDF42A0F1EE0E69064335327;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.RedisValue[]>
struct TaskFactory_1_t88EC77BA3255515D40FC18F792DA1E7E44D8A336;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.SortedSetEntry[]>
struct TaskFactory_1_t6FE0606F9DB3C0B786916F0D8A3B36E86C4B994B;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.StreamConsumerInfo[]>
struct TaskFactory_1_t18D31F42724B7CA47F31CCA681ABEA659186AB31;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.StreamEntry[]>
struct TaskFactory_1_t79783FDA8EA5AFF3C8773B12DD5A7B8F27C612D3;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.StreamGroupInfo[]>
struct TaskFactory_1_t7B4E939AD567215D097FCF6314C839DC790AE63A;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.StreamPendingMessageInfo[]>
struct TaskFactory_1_t25219515DBCD072EF2468DD59F369489CCBD2D66;
// System.Threading.Tasks.TaskFactory`1<System.String[]>
struct TaskFactory_1_t238CEB4BCB70F06A874C8D5DDCE901DC42021651;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<System.Double>
struct TaskFactory_1_t2CE132F8F2AB2040E34F31A4127E7093741B5772;
// System.Threading.Tasks.TaskFactory`1<System.Net.EndPoint>
struct TaskFactory_1_t2800A93FD46A69E997B0623175A47AC26204A9D4;
// System.Threading.Tasks.TaskFactory`1<System.Int64>
struct TaskFactory_1_t7AD5FF56CD0FBD6843796AC47F4A1949F8E936DC;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.LCSMatchResult>
struct TaskFactory_1_t491F971FE3869F776294FF6FA2683FA2271E12DA;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.ListPopResult>
struct TaskFactory_1_t255CB4AC9B2AE159D980268AA469555D657EAAB9;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.RedisKey>
struct TaskFactory_1_tCCF26589B6D6E9A9750F227C5C63525F8350F096;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.RedisResult>
struct TaskFactory_1_tBDD2C80B878F8B0B49233A7D3A08AF214597079A;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.RedisType>
struct TaskFactory_1_tE8FD2E57EA896E47A469B2B848CCF326A76EDB2C;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.RedisValue>
struct TaskFactory_1_tD32601F41618B620A5CA1A6C704CE93AAE4B394B;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.RedisValueWithExpiry>
struct TaskFactory_1_t078CAA6E56F5399C162A2CE48C6A9E5D7898E9D3;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.SortedSetPopResult>
struct TaskFactory_1_tAD6BF6F17CFA9C4976EDE39C9C6CAB9D95E1C5CB;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.StreamAutoClaimIdsOnlyResult>
struct TaskFactory_1_tD06C06B2992DF9BCFC306E0AC4E0E2ABC05D3C98;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.StreamAutoClaimResult>
struct TaskFactory_1_tC20B59972464DF29A120C881E1B91512458BB250;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.StreamInfo>
struct TaskFactory_1_t4D014008EC2F5DA340CEAE238463D42E9A9DA46B;
// System.Threading.Tasks.TaskFactory`1<StackExchange.Redis.StreamPendingInfo>
struct TaskFactory_1_t931305FC0DD77257AFFF9876877898FFB1BFDEA9;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.TaskFactory`1<System.TimeSpan>
struct TaskFactory_1_tFB183BDCD2F2B80848A3AB9661E6277C2F30DE85;
// System.Threading.Tasks.Task`1<StackExchange.Redis.Lease`1<System.Byte>>
struct Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>>
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>>
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41;
// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>>
struct Task_1_tB3E3DBDA744EF24975EA05AA4FD6B334C66F38C9;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>>
struct Task_1_t67361845973F277EA4FC53B24E369BB025261C40;
// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.SortedSetEntry>>
struct Task_1_tB96068856E8A9D1250EF5844E57B7C5F4582D3BA;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.TimeSpan>>
struct Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>[]>
struct Task_1_tD65206C3170424CC02CBB0234487B699A87160D8;
// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>[]>
struct Task_1_tF6393E9ED89D39D448E8925795E4C068B397AE70;
// System.Threading.Tasks.Task`1<System.Boolean[]>
struct Task_1_t69C91E4C5122CE3A171C7090781C6B14BE5D63DA;
// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95;
// System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]>
struct Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73;
// System.Threading.Tasks.Task`1<StackExchange.Redis.HashEntry[]>
struct Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67;
// System.Threading.Tasks.Task`1<System.Int64[]>
struct Task_1_t434FC9BA8F865AC108BE8480269F42E9811D7924;
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]>
struct Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62;
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]>
struct Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B;
// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]>
struct Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2;
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamConsumerInfo[]>
struct Task_1_t126032015BABF064E84D375D57E69449FEAE1472;
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]>
struct Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF;
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamGroupInfo[]>
struct Task_1_tD441A58A5AA3825AF56544DB6E2357D4AF12CF41;
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingMessageInfo[]>
struct Task_1_t58DE05D2824180D77F28E432EC9CCAA74A73B0CD;
// System.Threading.Tasks.Task`1<System.String[]>
struct Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024;
// System.Threading.Tasks.Task`1<System.Net.EndPoint>
struct Task_1_t24596EBE3D2992A4C829F182DF294E6650425BF5;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F;
// System.Threading.Tasks.Task`1<StackExchange.Redis.LCSMatchResult>
struct Task_1_t04D60C8C2133296DE05F62A8A0BC658D40F15929;
// System.Threading.Tasks.Task`1<StackExchange.Redis.ListPopResult>
struct Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97;
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisKey>
struct Task_1_tD50A57147A55159022E4DFAA73FD649AE8D7D8BD;
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult>
struct Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744;
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisType>
struct Task_1_tC6E018B5808073BBD05E87E5D185B79C49AB92D4;
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue>
struct Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD;
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValueWithExpiry>
struct Task_1_t7D368296989D942BF0999BF6551E6E06FEC1B349;
// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetPopResult>
struct Task_1_t2CFCE06DA7F047763B49FF98A34E2F0A61D7D12A;
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimIdsOnlyResult>
struct Task_1_t7D15716AA8F4059D3569838C2529648CDD2D7ED8;
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimResult>
struct Task_1_t66CE8E8C94C302183ACE1AC900D81201A1DFC277;
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamInfo>
struct Task_1_t3C262C83413F25FAFCF6031D3444871221FB823E;
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingInfo>
struct Task_1_t40F8AD242070ABAD378B4864D452D23B99265296;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<System.TimeSpan>
struct Task_1_tCAC4F769ADD4342238897BCBF46AF752F184C4AB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Int32>
struct WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Object>
struct WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA;
// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Boolean>
struct WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF;
// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Double>
struct WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03;
// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Object>
struct WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858;
// System.Linq.Enumerable/WhereSelectListIterator`2<Vuforia.VuVector2F,UnityEngine.Vector3>
struct WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E;
// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>
struct WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7;
// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>
struct WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66;
// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>
struct WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F;
// StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>
struct WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
// System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>[]
struct KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440;
// System.Nullable`1<System.Double>[]
struct Nullable_1U5BU5D_t8608EFC3D4A79785F59C7AB124AD5FBE0F75BCF1;
// System.Nullable`1<StackExchange.Redis.GeoPosition>[]
struct Nullable_1U5BU5D_t0F78B79C4A57085AA14F90E28754EF784007D3B0;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// StackExchange.Redis.GeoEntry[]
struct GeoEntryU5BU5D_tEDBEA4FFDD8ECCA2C5C3F0AE39D303EC391AA46F;
// StackExchange.Redis.GeoRadiusResult[]
struct GeoRadiusResultU5BU5D_tD59174081973989D161E9F2291468A3E35FA48B2;
// StackExchange.Redis.HashEntry[]
struct HashEntryU5BU5D_tAC00468F467DF7E0DB4F9241C5B7487C53D4AEEC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// StackExchange.Redis.NameValueEntry[]
struct NameValueEntryU5BU5D_t8A4006F6EC61A4F1E6829BA71C2227313B50C76B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// StackExchange.Redis.RedisKey[]
struct RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351;
// StackExchange.Redis.RedisStream[]
struct RedisStreamU5BU5D_t47F0412A83C5D4FE3BD3A63F59FB73B1C54DB4CF;
// StackExchange.Redis.RedisValue[]
struct RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0;
// StackExchange.Redis.SortedSetEntry[]
struct SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// StackExchange.Redis.StreamConsumer[]
struct StreamConsumerU5BU5D_tD79E7D96B9B981CB96674B3B9665392350AB14E8;
// StackExchange.Redis.StreamConsumerInfo[]
struct StreamConsumerInfoU5BU5D_t9F7D75FE137530E2C62FD119DB97E2A08C45B3FA;
// StackExchange.Redis.StreamEntry[]
struct StreamEntryU5BU5D_t090B402AD20D8A9D2A276448DDE1350C08FF6FA6;
// StackExchange.Redis.StreamGroupInfo[]
struct StreamGroupInfoU5BU5D_t54B4FF1E1291545F87AB7591742134323BCE2163;
// StackExchange.Redis.StreamPendingMessageInfo[]
struct StreamPendingMessageInfoU5BU5D_t41C6B17DD41FDF6343DD2A92E66D60BA49D3D159;
// StackExchange.Redis.StreamPosition[]
struct StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Mapbox.Utils.Vector2d[]
struct Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Vuforia.VuVector2F[]
struct VuVector2FU5BU5D_tE2852C71BB83C14C441BC48C2582A074C967DBD9;
// StackExchange.Redis.LCSMatchResult/LCSMatch[]
struct LCSMatchU5BU5D_t917878989D196B66C0B63F4DE74B1B5FD6BE6F8B;
// SQLite4Unity3d.SQLiteConnection/IndexedColumn[]
struct IndexedColumnU5BU5D_t8587AF19BB7D441ABF744911119AE9E3ABEDD0A4;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// StackExchange.Redis.GeoSearchShape
struct GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// StackExchange.Redis.IConnectionMultiplexer
struct IConnectionMultiplexer_t839F0D71BF173A654A836C6820D830391BAE6AAA;
// StackExchange.Redis.IDatabaseAsync
struct IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// StackExchange.Redis.LoadedLuaScript
struct LoadedLuaScript_t5AE35B6B8B77E229096D7137BAB71EBA1F103323;
// StackExchange.Redis.LuaScript
struct LuaScript_tD1333E0E2F7DD94B81E0E9FFD216F8E105B258F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// StackExchange.Redis.RedisResult
struct RedisResult_t533FA74D110ACA231851FBA88442B43D0F3B7184;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral0B6C730603558FC1821AE164C08204AC1237676A;
IL2CPP_EXTERN_C String_t* _stringLiteralEDDB23821597074E97F9681BB779FF615F45B0A8;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m1B5335506876501BC467CC85D62D8DBE8B679FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mE830EDA5DB05430183DB46527FD64FD73DA9C718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m20146FB817B75003F1E3F10A08994392DF04A509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WrapperBase_1_KeyRandomAsync_m86CAA48DCEE3ECE17E66E93A58A9D997ED58EB69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct LCSMatch_t343248120BE586DDF1FB51EF74C2D7EEAA39E93E;
struct NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB_marshaled_com;
struct NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB_marshaled_pinvoke;
struct RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com;
struct RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke;
struct SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D_marshaled_com;
struct SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D_marshaled_pinvoke;
struct StreamConsumer_t491055943E3EAE60AEEEFB1E696C74AD7E87F08A_marshaled_com;
struct StreamConsumer_t491055943E3EAE60AEEEFB1E696C74AD7E87F08A_marshaled_pinvoke;
struct StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_com;
struct StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_pinvoke;

struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GeoEntryU5BU5D_tEDBEA4FFDD8ECCA2C5C3F0AE39D303EC391AA46F;
struct HashEntryU5BU5D_tAC00468F467DF7E0DB4F9241C5B7487C53D4AEEC;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct NameValueEntryU5BU5D_t8A4006F6EC61A4F1E6829BA71C2227313B50C76B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351;
struct RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0;
struct SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC;
struct StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5;
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StackExchange.Redis.KeyspaceIsolation.WrapperBase`1/<>c<System.Object>
struct U3CU3Ec_t17B104E730753ADE1339FE96C895FB016AECAB4E  : public RuntimeObject
{
};

// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	bool ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Double>
struct Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	double ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>
struct List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Vuforia.VuVector2F>
struct List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VuVector2FU5BU5D_tE2852C71BB83C14C441BC48C2582A074C967DBD9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IndexedColumnU5BU5D_t8587AF19BB7D441ABF744911119AE9E3ABEDD0A4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>
struct WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF  : public RuntimeObject
{
	// TInner StackExchange.Redis.KeyspaceIsolation.WrapperBase`1::<Inner>k__BackingField
	RuntimeObject* ___U3CInnerU3Ek__BackingField_0;
	// System.Byte[] StackExchange.Redis.KeyspaceIsolation.WrapperBase`1::<Prefix>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CPrefixU3Ek__BackingField_1;
	// System.Func`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1::mapFunction
	Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* ___mapFunction_2;
};

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::_entries
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::_numEntries
	int32_t ____numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::_extractKey
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey_3;
};

// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::_state
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state_0;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// StackExchange.Redis.GeoSearchShape
struct GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38  : public RuntimeObject
{
	// StackExchange.Redis.GeoUnit StackExchange.Redis.GeoSearchShape::<Unit>k__BackingField
	int32_t ___U3CUnitU3Ek__BackingField_0;
};

// StackExchange.Redis.LoadedLuaScript
struct LoadedLuaScript_t5AE35B6B8B77E229096D7137BAB71EBA1F103323  : public RuntimeObject
{
	// System.Byte[] StackExchange.Redis.LoadedLuaScript::<Hash>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CHashU3Ek__BackingField_0;
	// StackExchange.Redis.LuaScript StackExchange.Redis.LoadedLuaScript::Original
	LuaScript_tD1333E0E2F7DD94B81E0E9FFD216F8E105B258F5* ___Original_1;
};

// StackExchange.Redis.LuaScript
struct LuaScript_tD1333E0E2F7DD94B81E0E9FFD216F8E105B258F5  : public RuntimeObject
{
	// System.String StackExchange.Redis.LuaScript::<OriginalScript>k__BackingField
	String_t* ___U3COriginalScriptU3Ek__BackingField_1;
	// System.String StackExchange.Redis.LuaScript::<ExecutableScript>k__BackingField
	String_t* ___U3CExecutableScriptU3Ek__BackingField_2;
	// System.String[] StackExchange.Redis.LuaScript::<Arguments>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CArgumentsU3Ek__BackingField_3;
	// System.Collections.Hashtable StackExchange.Redis.LuaScript::ParameterMappers
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ParameterMappers_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	// TValue System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Value
	RuntimeObject* ___Value_0;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::HashCode
	int32_t ___HashCode_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Next
	int32_t ___Next_2;
};

// System.Collections.Generic.List`1/Enumerator<System.UInt32>
struct Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	uint32_t ____current_3;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<StackExchange.Redis.Order>
struct Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

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

// System.Threading.Tasks.Task`1<StackExchange.Redis.Lease`1<System.Byte>>
struct Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Lease_1_tF8310FEE40EC90C8B0670FA5A230FAABE36890A9* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>[]>
struct Task_1_tD65206C3170424CC02CBB0234487B699A87160D8  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1U5BU5D_t8608EFC3D4A79785F59C7AB124AD5FBE0F75BCF1* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>[]>
struct Task_1_tF6393E9ED89D39D448E8925795E4C068B397AE70  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1U5BU5D_t0F78B79C4A57085AA14F90E28754EF784007D3B0* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Boolean[]>
struct Task_1_t69C91E4C5122CE3A171C7090781C6B14BE5D63DA  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]>
struct Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GeoRadiusResultU5BU5D_tD59174081973989D161E9F2291468A3E35FA48B2* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.HashEntry[]>
struct Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HashEntryU5BU5D_tAC00468F467DF7E0DB4F9241C5B7487C53D4AEEC* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Int64[]>
struct Task_1_t434FC9BA8F865AC108BE8480269F42E9811D7924  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]>
struct Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RedisStreamU5BU5D_t47F0412A83C5D4FE3BD3A63F59FB73B1C54DB4CF* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]>
struct Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]>
struct Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamConsumerInfo[]>
struct Task_1_t126032015BABF064E84D375D57E69449FEAE1472  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StreamConsumerInfoU5BU5D_t9F7D75FE137530E2C62FD119DB97E2A08C45B3FA* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]>
struct Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StreamEntryU5BU5D_t090B402AD20D8A9D2A276448DDE1350C08FF6FA6* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamGroupInfo[]>
struct Task_1_tD441A58A5AA3825AF56544DB6E2357D4AF12CF41  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StreamGroupInfoU5BU5D_t54B4FF1E1291545F87AB7591742134323BCE2163* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingMessageInfo[]>
struct Task_1_t58DE05D2824180D77F28E432EC9CCAA74A73B0CD  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StreamPendingMessageInfoU5BU5D_t41C6B17DD41FDF6343DD2A92E66D60BA49D3D159* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.String[]>
struct Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	double ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Net.EndPoint>
struct Task_1_t24596EBE3D2992A4C829F182DF294E6650425BF5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int64_t ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult>
struct Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RedisResult_t533FA74D110ACA231851FBA88442B43D0F3B7184* ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisType>
struct Task_1_tC6E018B5808073BBD05E87E5D185B79C49AB92D4  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>
struct WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Double>
struct WhereEnumerableIterator_1_t19D39E8E2663DD95BF8CFB069F30224BE643F373  : public Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// StackExchange.Redis.GeoPosition
struct GeoPosition_t1638A569029C6040D59648F7DFDB111570A691C0 
{
	// System.Double StackExchange.Redis.GeoPosition::<Latitude>k__BackingField
	double ___U3CLatitudeU3Ek__BackingField_0;
	// System.Double StackExchange.Redis.GeoPosition::<Longitude>k__BackingField
	double ___U3CLongitudeU3Ek__BackingField_1;
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

// StackExchange.Redis.LCSMatchResult
struct LCSMatchResult_t70548BE4E6AA28955F6E71086759E8D6DCFAD909 
{
	// StackExchange.Redis.LCSMatchResult/LCSMatch[] StackExchange.Redis.LCSMatchResult::<Matches>k__BackingField
	LCSMatchU5BU5D_t917878989D196B66C0B63F4DE74B1B5FD6BE6F8B* ___U3CMatchesU3Ek__BackingField_1;
	// System.Int64 StackExchange.Redis.LCSMatchResult::<LongestMatchLength>k__BackingField
	int64_t ___U3CLongestMatchLengthU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.LCSMatchResult
struct LCSMatchResult_t70548BE4E6AA28955F6E71086759E8D6DCFAD909_marshaled_pinvoke
{
	LCSMatch_t343248120BE586DDF1FB51EF74C2D7EEAA39E93E* ___U3CMatchesU3Ek__BackingField_1;
	int64_t ___U3CLongestMatchLengthU3Ek__BackingField_2;
};
// Native definition for COM marshalling of StackExchange.Redis.LCSMatchResult
struct LCSMatchResult_t70548BE4E6AA28955F6E71086759E8D6DCFAD909_marshaled_com
{
	LCSMatch_t343248120BE586DDF1FB51EF74C2D7EEAA39E93E* ___U3CMatchesU3Ek__BackingField_1;
	int64_t ___U3CLongestMatchLengthU3Ek__BackingField_2;
};

// StackExchange.Redis.RedisChannel
struct RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 
{
	// System.Byte[] StackExchange.Redis.RedisChannel::Value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value_0;
	// System.Boolean StackExchange.Redis.RedisChannel::IsPatternBased
	bool ___IsPatternBased_1;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.RedisChannel
struct RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Value_0;
	int32_t ___IsPatternBased_1;
};
// Native definition for COM marshalling of StackExchange.Redis.RedisChannel
struct RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Value_0;
	int32_t ___IsPatternBased_1;
};

// StackExchange.Redis.RedisKey
struct RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 
{
	// System.Byte[] StackExchange.Redis.RedisKey::<KeyPrefix>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CKeyPrefixU3Ek__BackingField_1;
	// System.Object StackExchange.Redis.RedisKey::<KeyValue>k__BackingField
	RuntimeObject* ___U3CKeyValueU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.RedisKey
struct RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___U3CKeyPrefixU3Ek__BackingField_1;
	Il2CppIUnknown* ___U3CKeyValueU3Ek__BackingField_2;
};
// Native definition for COM marshalling of StackExchange.Redis.RedisKey
struct RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___U3CKeyPrefixU3Ek__BackingField_1;
	Il2CppIUnknown* ___U3CKeyValueU3Ek__BackingField_2;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Mapbox.Utils.Vector2d
struct Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB 
{
	// System.Double Mapbox.Utils.Vector2d::x
	double ___x_1;
	// System.Double Mapbox.Utils.Vector2d::y
	double ___y_2;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// Vuforia.VuVector2F
struct VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 
{
	// System.Single Vuforia.VuVector2F::x
	float ___x_0;
	// System.Single Vuforia.VuVector2F::y
	float ___y_1;
};

// SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 
{
	// System.Int32 SQLite4Unity3d.SQLiteConnection/IndexedColumn::Order
	int32_t ___Order_0;
	// System.String SQLite4Unity3d.SQLiteConnection/IndexedColumn::ColumnName
	String_t* ___ColumnName_1;
};
// Native definition for P/Invoke marshalling of SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_pinvoke
{
	int32_t ___Order_0;
	char* ___ColumnName_1;
};
// Native definition for COM marshalling of SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshaled_com
{
	int32_t ___Order_0;
	Il2CppChar* ___ColumnName_1;
};

// System.Collections.Generic.List`1/Enumerator<Mapbox.Utils.Vector2d>
struct Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Vuforia.VuVector2F>
struct Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current_2;
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// System.Nullable`1<StackExchange.Redis.GeoPosition>
struct Nullable_1_t2A3FD3AB926DB5092A257016F275897EA938BDD2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	GeoPosition_t1638A569029C6040D59648F7DFDB111570A691C0 ___value_1;
};

// System.Nullable`1<StackExchange.Redis.RedisKey>
struct Nullable_1_t0438946BB4B093C47FB862105341AB14FDB20027 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___value_1;
};

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>>
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>>
struct Task_1_t67361845973F277EA4FC53B24E369BB025261C40  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.LCSMatchResult>
struct Task_1_t04D60C8C2133296DE05F62A8A0BC658D40F15929  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	LCSMatchResult_t70548BE4E6AA28955F6E71086759E8D6DCFAD909 ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisKey>
struct Task_1_tD50A57147A55159022E4DFAA73FD649AE8D7D8BD  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.TimeSpan>
struct Task_1_tCAC4F769ADD4342238897BCBF46AF752F184C4AB  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_result_38;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Int32>
struct WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Object>
struct WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5992936113CB10755892A492A7E657203C1C94A7* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F ___enumerator_6;
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

// StackExchange.Redis.ListPopResult
struct ListPopResult_tC141DAA126B7D23C1DAB5A1BEDA7294591C42D1D 
{
	// StackExchange.Redis.RedisKey StackExchange.Redis.ListPopResult::<Key>k__BackingField
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___U3CKeyU3Ek__BackingField_1;
	// StackExchange.Redis.RedisValue[] StackExchange.Redis.ListPopResult::<Values>k__BackingField
	RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___U3CValuesU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.ListPopResult
struct ListPopResult_tC141DAA126B7D23C1DAB5A1BEDA7294591C42D1D_marshaled_pinvoke
{
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_marshaled_pinvoke ___U3CKeyU3Ek__BackingField_1;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke* ___U3CValuesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of StackExchange.Redis.ListPopResult
struct ListPopResult_tC141DAA126B7D23C1DAB5A1BEDA7294591C42D1D_marshaled_com
{
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_marshaled_com ___U3CKeyU3Ek__BackingField_1;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com* ___U3CValuesU3Ek__BackingField_2;
};

// StackExchange.Redis.RedisValue
struct RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF 
{
	// System.Object StackExchange.Redis.RedisValue::_objectOrSentinel
	RuntimeObject* ____objectOrSentinel_1;
	// System.ReadOnlyMemory`1<System.Byte> StackExchange.Redis.RedisValue::_memory
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ____memory_2;
	// System.Int64 StackExchange.Redis.RedisValue::_overlappedBits64
	int64_t ____overlappedBits64_3;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.RedisValue
struct RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____objectOrSentinel_1;
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ____memory_2;
	int64_t ____overlappedBits64_3;
};
// Native definition for COM marshalling of StackExchange.Redis.RedisValue
struct RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com
{
	Il2CppIUnknown* ____objectOrSentinel_1;
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ____memory_2;
	int64_t ____overlappedBits64_3;
};

// StackExchange.Redis.SortedSetPopResult
struct SortedSetPopResult_t98271375553139540A64AC7F7794246779CC8DFC 
{
	// StackExchange.Redis.RedisKey StackExchange.Redis.SortedSetPopResult::<Key>k__BackingField
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___U3CKeyU3Ek__BackingField_1;
	// StackExchange.Redis.SortedSetEntry[] StackExchange.Redis.SortedSetPopResult::<Entries>k__BackingField
	SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* ___U3CEntriesU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.SortedSetPopResult
struct SortedSetPopResult_t98271375553139540A64AC7F7794246779CC8DFC_marshaled_pinvoke
{
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_marshaled_pinvoke ___U3CKeyU3Ek__BackingField_1;
	SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D_marshaled_pinvoke* ___U3CEntriesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of StackExchange.Redis.SortedSetPopResult
struct SortedSetPopResult_t98271375553139540A64AC7F7794246779CC8DFC_marshaled_com
{
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_marshaled_com ___U3CKeyU3Ek__BackingField_1;
	SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D_marshaled_com* ___U3CEntriesU3Ek__BackingField_2;
};

// System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>
struct KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___value_1;
};

// System.Nullable`1<StackExchange.Redis.RedisValue>
struct Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___value_1;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>>
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>>
struct Task_1_tB3E3DBDA744EF24975EA05AA4FD6B334C66F38C9  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t2A3FD3AB926DB5092A257016F275897EA938BDD2 ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.TimeSpan>>
struct Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.ListPopResult>
struct Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ListPopResult_tC141DAA126B7D23C1DAB5A1BEDA7294591C42D1D ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue>
struct Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetPopResult>
struct Task_1_t2CFCE06DA7F047763B49FF98A34E2F0A61D7D12A  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SortedSetPopResult_t98271375553139540A64AC7F7794246779CC8DFC ___m_result_38;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Boolean>
struct WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Double>
struct WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03  : public Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Object>
struct WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t970C4D283503CE14B164593594D7DE2922495B50* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Vuforia.VuVector2F,UnityEngine.Vector3>
struct WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>
struct WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>
struct WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66  : public Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t05C679C84117651025D11DADD191731BCFA59D16* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>
struct WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 ___enumerator_6;
};

// StackExchange.Redis.GeoEntry
struct GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10 
{
	// StackExchange.Redis.RedisValue StackExchange.Redis.GeoEntry::<Member>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CMemberU3Ek__BackingField_0;
	// StackExchange.Redis.GeoPosition StackExchange.Redis.GeoEntry::<Position>k__BackingField
	GeoPosition_t1638A569029C6040D59648F7DFDB111570A691C0 ___U3CPositionU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.GeoEntry
struct GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10_marshaled_pinvoke
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CMemberU3Ek__BackingField_0;
	GeoPosition_t1638A569029C6040D59648F7DFDB111570A691C0 ___U3CPositionU3Ek__BackingField_1;
};
// Native definition for COM marshalling of StackExchange.Redis.GeoEntry
struct GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10_marshaled_com
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CMemberU3Ek__BackingField_0;
	GeoPosition_t1638A569029C6040D59648F7DFDB111570A691C0 ___U3CPositionU3Ek__BackingField_1;
};

// StackExchange.Redis.HashEntry
struct HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB 
{
	// StackExchange.Redis.RedisValue StackExchange.Redis.HashEntry::name
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___name_0;
	// StackExchange.Redis.RedisValue StackExchange.Redis.HashEntry::value
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___value_1;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.HashEntry
struct HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB_marshaled_pinvoke
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___name_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___value_1;
};
// Native definition for COM marshalling of StackExchange.Redis.HashEntry
struct HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB_marshaled_com
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___name_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___value_1;
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

// StackExchange.Redis.NameValueEntry
struct NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB 
{
	// StackExchange.Redis.RedisValue StackExchange.Redis.NameValueEntry::name
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___name_0;
	// StackExchange.Redis.RedisValue StackExchange.Redis.NameValueEntry::value
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___value_1;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.NameValueEntry
struct NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB_marshaled_pinvoke
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___name_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___value_1;
};
// Native definition for COM marshalling of StackExchange.Redis.NameValueEntry
struct NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB_marshaled_com
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___name_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___value_1;
};

// StackExchange.Redis.RedisValueWithExpiry
struct RedisValueWithExpiry_tE81E39DED16602E471444EFCAF74718E8BA3A605 
{
	// System.Nullable`1<System.TimeSpan> StackExchange.Redis.RedisValueWithExpiry::<Expiry>k__BackingField
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___U3CExpiryU3Ek__BackingField_0;
	// StackExchange.Redis.RedisValue StackExchange.Redis.RedisValueWithExpiry::<Value>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CValueU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.RedisValueWithExpiry
struct RedisValueWithExpiry_tE81E39DED16602E471444EFCAF74718E8BA3A605_marshaled_pinvoke
{
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___U3CExpiryU3Ek__BackingField_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CValueU3Ek__BackingField_1;
};
// Native definition for COM marshalling of StackExchange.Redis.RedisValueWithExpiry
struct RedisValueWithExpiry_tE81E39DED16602E471444EFCAF74718E8BA3A605_marshaled_com
{
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___U3CExpiryU3Ek__BackingField_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CValueU3Ek__BackingField_1;
};

// StackExchange.Redis.SortedSetEntry
struct SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D 
{
	// StackExchange.Redis.RedisValue StackExchange.Redis.SortedSetEntry::element
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___element_0;
	// System.Double StackExchange.Redis.SortedSetEntry::score
	double ___score_1;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.SortedSetEntry
struct SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D_marshaled_pinvoke
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___element_0;
	double ___score_1;
};
// Native definition for COM marshalling of StackExchange.Redis.SortedSetEntry
struct SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D_marshaled_com
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___element_0;
	double ___score_1;
};

// StackExchange.Redis.StreamAutoClaimIdsOnlyResult
struct StreamAutoClaimIdsOnlyResult_tBEEA78BC5C767570FB2BC1A37BB42D24BFB61FF6 
{
	// StackExchange.Redis.RedisValue StackExchange.Redis.StreamAutoClaimIdsOnlyResult::<NextStartId>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CNextStartIdU3Ek__BackingField_1;
	// StackExchange.Redis.RedisValue[] StackExchange.Redis.StreamAutoClaimIdsOnlyResult::<ClaimedIds>k__BackingField
	RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___U3CClaimedIdsU3Ek__BackingField_2;
	// StackExchange.Redis.RedisValue[] StackExchange.Redis.StreamAutoClaimIdsOnlyResult::<DeletedIds>k__BackingField
	RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___U3CDeletedIdsU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.StreamAutoClaimIdsOnlyResult
struct StreamAutoClaimIdsOnlyResult_tBEEA78BC5C767570FB2BC1A37BB42D24BFB61FF6_marshaled_pinvoke
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CNextStartIdU3Ek__BackingField_1;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke* ___U3CClaimedIdsU3Ek__BackingField_2;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke* ___U3CDeletedIdsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of StackExchange.Redis.StreamAutoClaimIdsOnlyResult
struct StreamAutoClaimIdsOnlyResult_tBEEA78BC5C767570FB2BC1A37BB42D24BFB61FF6_marshaled_com
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CNextStartIdU3Ek__BackingField_1;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com* ___U3CClaimedIdsU3Ek__BackingField_2;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com* ___U3CDeletedIdsU3Ek__BackingField_3;
};

// StackExchange.Redis.StreamAutoClaimResult
struct StreamAutoClaimResult_tB0D1FEF5B512F0B7063111D87B23109AAEAC250E 
{
	// StackExchange.Redis.RedisValue StackExchange.Redis.StreamAutoClaimResult::<NextStartId>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CNextStartIdU3Ek__BackingField_1;
	// StackExchange.Redis.StreamEntry[] StackExchange.Redis.StreamAutoClaimResult::<ClaimedEntries>k__BackingField
	StreamEntryU5BU5D_t090B402AD20D8A9D2A276448DDE1350C08FF6FA6* ___U3CClaimedEntriesU3Ek__BackingField_2;
	// StackExchange.Redis.RedisValue[] StackExchange.Redis.StreamAutoClaimResult::<DeletedIds>k__BackingField
	RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___U3CDeletedIdsU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.StreamAutoClaimResult
struct StreamAutoClaimResult_tB0D1FEF5B512F0B7063111D87B23109AAEAC250E_marshaled_pinvoke
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CNextStartIdU3Ek__BackingField_1;
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_pinvoke* ___U3CClaimedEntriesU3Ek__BackingField_2;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke* ___U3CDeletedIdsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of StackExchange.Redis.StreamAutoClaimResult
struct StreamAutoClaimResult_tB0D1FEF5B512F0B7063111D87B23109AAEAC250E_marshaled_com
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CNextStartIdU3Ek__BackingField_1;
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_com* ___U3CClaimedEntriesU3Ek__BackingField_2;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com* ___U3CDeletedIdsU3Ek__BackingField_3;
};

// StackExchange.Redis.StreamEntry
struct StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3 
{
	// StackExchange.Redis.RedisValue StackExchange.Redis.StreamEntry::<Id>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CIdU3Ek__BackingField_1;
	// StackExchange.Redis.NameValueEntry[] StackExchange.Redis.StreamEntry::<Values>k__BackingField
	NameValueEntryU5BU5D_t8A4006F6EC61A4F1E6829BA71C2227313B50C76B* ___U3CValuesU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.StreamEntry
struct StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_pinvoke
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CIdU3Ek__BackingField_1;
	NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB_marshaled_pinvoke* ___U3CValuesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of StackExchange.Redis.StreamEntry
struct StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_com
{
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CIdU3Ek__BackingField_1;
	NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB_marshaled_com* ___U3CValuesU3Ek__BackingField_2;
};

// StackExchange.Redis.StreamPendingInfo
struct StreamPendingInfo_t0AA48480121834D3ACD7212FAABC38E7021918F8 
{
	// System.Int32 StackExchange.Redis.StreamPendingInfo::<PendingMessageCount>k__BackingField
	int32_t ___U3CPendingMessageCountU3Ek__BackingField_0;
	// StackExchange.Redis.RedisValue StackExchange.Redis.StreamPendingInfo::<LowestPendingMessageId>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CLowestPendingMessageIdU3Ek__BackingField_1;
	// StackExchange.Redis.RedisValue StackExchange.Redis.StreamPendingInfo::<HighestPendingMessageId>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CHighestPendingMessageIdU3Ek__BackingField_2;
	// StackExchange.Redis.StreamConsumer[] StackExchange.Redis.StreamPendingInfo::<Consumers>k__BackingField
	StreamConsumerU5BU5D_tD79E7D96B9B981CB96674B3B9665392350AB14E8* ___U3CConsumersU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.StreamPendingInfo
struct StreamPendingInfo_t0AA48480121834D3ACD7212FAABC38E7021918F8_marshaled_pinvoke
{
	int32_t ___U3CPendingMessageCountU3Ek__BackingField_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CLowestPendingMessageIdU3Ek__BackingField_1;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CHighestPendingMessageIdU3Ek__BackingField_2;
	StreamConsumer_t491055943E3EAE60AEEEFB1E696C74AD7E87F08A_marshaled_pinvoke* ___U3CConsumersU3Ek__BackingField_3;
};
// Native definition for COM marshalling of StackExchange.Redis.StreamPendingInfo
struct StreamPendingInfo_t0AA48480121834D3ACD7212FAABC38E7021918F8_marshaled_com
{
	int32_t ___U3CPendingMessageCountU3Ek__BackingField_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CLowestPendingMessageIdU3Ek__BackingField_1;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CHighestPendingMessageIdU3Ek__BackingField_2;
	StreamConsumer_t491055943E3EAE60AEEEFB1E696C74AD7E87F08A_marshaled_com* ___U3CConsumersU3Ek__BackingField_3;
};

// StackExchange.Redis.StreamPosition
struct StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1 
{
	// StackExchange.Redis.RedisKey StackExchange.Redis.StreamPosition::<Key>k__BackingField
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___U3CKeyU3Ek__BackingField_0;
	// StackExchange.Redis.RedisValue StackExchange.Redis.StreamPosition::<Position>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CPositionU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.StreamPosition
struct StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1_marshaled_pinvoke
{
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_marshaled_pinvoke ___U3CKeyU3Ek__BackingField_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CPositionU3Ek__BackingField_1;
};
// Native definition for COM marshalling of StackExchange.Redis.StreamPosition
struct StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1_marshaled_com
{
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_marshaled_com ___U3CKeyU3Ek__BackingField_0;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CPositionU3Ek__BackingField_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};

// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB  : public MulticastDelegate_t
{
};

// System.Func`2<System.Double,System.Boolean>
struct Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey>
struct Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt32,System.Boolean>
struct Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt32,System.Int32>
struct Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A  : public MulticastDelegate_t
{
};

// System.Func`2<System.UInt32,System.Object>
struct Func_2_t5992936113CB10755892A492A7E657203C1C94A7  : public MulticastDelegate_t
{
};

// System.Func`2<Mapbox.Utils.Vector2d,System.Boolean>
struct Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5  : public MulticastDelegate_t
{
};

// System.Func`2<Mapbox.Utils.Vector2d,System.Double>
struct Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3  : public MulticastDelegate_t
{
};

// System.Func`2<Mapbox.Utils.Vector2d,System.Object>
struct Func_2_t970C4D283503CE14B164593594D7DE2922495B50  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4  : public MulticastDelegate_t
{
};

// System.Func`2<Vuforia.VuVector2F,System.Boolean>
struct Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453  : public MulticastDelegate_t
{
};

// System.Func`2<Vuforia.VuVector2F,UnityEngine.Vector3>
struct Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96  : public MulticastDelegate_t
{
};

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>
struct Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229  : public MulticastDelegate_t
{
};

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>
struct Func_2_t05C679C84117651025D11DADD191731BCFA59D16  : public MulticastDelegate_t
{
};

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>
struct Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51  : public MulticastDelegate_t
{
};

// System.Nullable`1<StackExchange.Redis.SortedSetEntry>
struct Nullable_1_tC27CC964EC216CFB86CFB55B210F647DF68DEAE6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D ___value_1;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValueWithExpiry>
struct Task_1_t7D368296989D942BF0999BF6551E6E06FEC1B349  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RedisValueWithExpiry_tE81E39DED16602E471444EFCAF74718E8BA3A605 ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimIdsOnlyResult>
struct Task_1_t7D15716AA8F4059D3569838C2529648CDD2D7ED8  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StreamAutoClaimIdsOnlyResult_tBEEA78BC5C767570FB2BC1A37BB42D24BFB61FF6 ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimResult>
struct Task_1_t66CE8E8C94C302183ACE1AC900D81201A1DFC277  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StreamAutoClaimResult_tB0D1FEF5B512F0B7063111D87B23109AAEAC250E ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingInfo>
struct Task_1_t40F8AD242070ABAD378B4864D452D23B99265296  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StreamPendingInfo_t0AA48480121834D3ACD7212FAABC38E7021918F8 ___m_result_38;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// StackExchange.Redis.StreamInfo
struct StreamInfo_tFFA4F9F244B1DDCBCCC94A090427BB54D24C1D1C 
{
	// System.Int32 StackExchange.Redis.StreamInfo::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_0;
	// System.Int32 StackExchange.Redis.StreamInfo::<RadixTreeKeys>k__BackingField
	int32_t ___U3CRadixTreeKeysU3Ek__BackingField_1;
	// System.Int32 StackExchange.Redis.StreamInfo::<RadixTreeNodes>k__BackingField
	int32_t ___U3CRadixTreeNodesU3Ek__BackingField_2;
	// System.Int32 StackExchange.Redis.StreamInfo::<ConsumerGroupCount>k__BackingField
	int32_t ___U3CConsumerGroupCountU3Ek__BackingField_3;
	// StackExchange.Redis.StreamEntry StackExchange.Redis.StreamInfo::<FirstEntry>k__BackingField
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3 ___U3CFirstEntryU3Ek__BackingField_4;
	// StackExchange.Redis.StreamEntry StackExchange.Redis.StreamInfo::<LastEntry>k__BackingField
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3 ___U3CLastEntryU3Ek__BackingField_5;
	// StackExchange.Redis.RedisValue StackExchange.Redis.StreamInfo::<LastGeneratedId>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CLastGeneratedIdU3Ek__BackingField_6;
};
// Native definition for P/Invoke marshalling of StackExchange.Redis.StreamInfo
struct StreamInfo_tFFA4F9F244B1DDCBCCC94A090427BB54D24C1D1C_marshaled_pinvoke
{
	int32_t ___U3CLengthU3Ek__BackingField_0;
	int32_t ___U3CRadixTreeKeysU3Ek__BackingField_1;
	int32_t ___U3CRadixTreeNodesU3Ek__BackingField_2;
	int32_t ___U3CConsumerGroupCountU3Ek__BackingField_3;
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_pinvoke ___U3CFirstEntryU3Ek__BackingField_4;
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_pinvoke ___U3CLastEntryU3Ek__BackingField_5;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_pinvoke ___U3CLastGeneratedIdU3Ek__BackingField_6;
};
// Native definition for COM marshalling of StackExchange.Redis.StreamInfo
struct StreamInfo_tFFA4F9F244B1DDCBCCC94A090427BB54D24C1D1C_marshaled_com
{
	int32_t ___U3CLengthU3Ek__BackingField_0;
	int32_t ___U3CRadixTreeKeysU3Ek__BackingField_1;
	int32_t ___U3CRadixTreeNodesU3Ek__BackingField_2;
	int32_t ___U3CConsumerGroupCountU3Ek__BackingField_3;
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_com ___U3CFirstEntryU3Ek__BackingField_4;
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_marshaled_com ___U3CLastEntryU3Ek__BackingField_5;
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_marshaled_com ___U3CLastGeneratedIdU3Ek__BackingField_6;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.SortedSetEntry>>
struct Task_1_tB96068856E8A9D1250EF5844E57B7C5F4582D3BA  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_tC27CC964EC216CFB86CFB55B210F647DF68DEAE6 ___m_result_38;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamInfo>
struct Task_1_t3C262C83413F25FAFCF6031D3444871221FB823E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StreamInfo_tFFA4F9F244B1DDCBCCC94A090427BB54D24C1D1C ___m_result_38;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// StackExchange.Redis.KeyspaceIsolation.WrapperBase`1/<>c<System.Object>
struct U3CU3Ec_t17B104E730753ADE1339FE96C895FB016AECAB4E_StaticFields
{
	// StackExchange.Redis.KeyspaceIsolation.WrapperBase`1/<>c<TInner> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1/<>c::<>9
	U3CU3Ec_t17B104E730753ADE1339FE96C895FB016AECAB4E* ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1/<>c::<>9__242_0
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___U3CU3E9__242_0_1;
};

// StackExchange.Redis.KeyspaceIsolation.WrapperBase`1/<>c<System.Object>

// System.Linq.Enumerable/Iterator`1<System.Boolean>

// System.Linq.Enumerable/Iterator`1<System.Boolean>

// System.Linq.Enumerable/Iterator`1<System.Double>

// System.Linq.Enumerable/Iterator`1<System.Double>

// System.Linq.Enumerable/Iterator`1<System.Int32>

// System.Linq.Enumerable/Iterator`1<System.Int32>

// System.Linq.Enumerable/Iterator`1<System.Object>

// System.Linq.Enumerable/Iterator`1<System.Object>

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt32>

// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>
struct List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.Collections.Generic.List`1<Vuforia.VuVector2F>
struct List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VuVector2FU5BU5D_tE2852C71BB83C14C441BC48C2582A074C967DBD9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Vuforia.VuVector2F>

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IndexedColumnU5BU5D_t8587AF19BB7D441ABF744911119AE9E3ABEDD0A4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>

// StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>

// StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>

// System.Xml.Linq.XHashtable`1<System.Object>

// System.Xml.Linq.XHashtable`1<System.Object>

// System.Net.EndPoint

// System.Net.EndPoint

// StackExchange.Redis.GeoSearchShape

// StackExchange.Redis.GeoSearchShape

// StackExchange.Redis.LoadedLuaScript

// StackExchange.Redis.LoadedLuaScript

// StackExchange.Redis.LuaScript
struct LuaScript_tD1333E0E2F7DD94B81E0E9FFD216F8E105B258F5_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.WeakReference> StackExchange.Redis.LuaScript::Cache
	ConcurrentDictionary_2_t57450B156F906C97792AFB99872897C14295D9F8* ___Cache_0;
};

// StackExchange.Redis.LuaScript

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// System.ValueType

// System.ValueType

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.UInt32>

// System.Collections.Generic.List`1/Enumerator<System.UInt32>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Nullable`1<StackExchange.Redis.Order>

// System.Nullable`1<StackExchange.Redis.Order>

// System.ReadOnlyMemory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.Threading.Tasks.Task`1<StackExchange.Redis.Lease`1<System.Byte>>
struct Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t13948BCFF376D6BF6F457B70B43964E21FF89E23* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.Lease`1<System.Byte>>

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>[]>
struct Task_1_tD65206C3170424CC02CBB0234487B699A87160D8_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC90CF9C331B6959B4784FFB7B01A6D5FC461CBCB* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>[]>

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>[]>
struct Task_1_tF6393E9ED89D39D448E8925795E4C068B397AE70_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC153B4C4924577D0B0AE3E891CDCB1DE077EEB3D* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>[]>

// System.Threading.Tasks.Task`1<System.Boolean[]>
struct Task_1_t69C91E4C5122CE3A171C7090781C6B14BE5D63DA_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t88C52B7A1D9FF0CB24BBB02CF2AB70BDC443BFFF* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean[]>

// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t46575E75F710D631831E756B5DE20429700F6B95_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tE78D5901E25DE030D64ED783B6E0BED8282D0148* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Byte[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]>
struct Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tAFBA9C991DBF571638515D852A8BB7900C9994EB* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.HashEntry[]>
struct Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t502171A25276F0D08507BA0A7D1643814C2AE5BF* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.HashEntry[]>

// System.Threading.Tasks.Task`1<System.Int64[]>
struct Task_1_t434FC9BA8F865AC108BE8480269F42E9811D7924_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t557F2CE29FD006159EA7E64448DA7E424181E642* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Int64[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]>
struct Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t786871869ADD075CEDF42A0F1EE0E69064335327* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]>
struct Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t88EC77BA3255515D40FC18F792DA1E7E44D8A336* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]>
struct Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6FE0606F9DB3C0B786916F0D8A3B36E86C4B994B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamConsumerInfo[]>
struct Task_1_t126032015BABF064E84D375D57E69449FEAE1472_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t18D31F42724B7CA47F31CCA681ABEA659186AB31* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamConsumerInfo[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]>
struct Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t79783FDA8EA5AFF3C8773B12DD5A7B8F27C612D3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamGroupInfo[]>
struct Task_1_tD441A58A5AA3825AF56544DB6E2357D4AF12CF41_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7B4E939AD567215D097FCF6314C839DC790AE63A* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamGroupInfo[]>

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingMessageInfo[]>
struct Task_1_t58DE05D2824180D77F28E432EC9CCAA74A73B0CD_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t25219515DBCD072EF2468DD59F369489CCBD2D66* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingMessageInfo[]>

// System.Threading.Tasks.Task`1<System.String[]>
struct Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t238CEB4BCB70F06A874C8D5DDCE901DC42021651* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String[]>

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<System.Double>
struct Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2CE132F8F2AB2040E34F31A4127E7093741B5772* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Double>

// System.Threading.Tasks.Task`1<System.Net.EndPoint>
struct Task_1_t24596EBE3D2992A4C829F182DF294E6650425BF5_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2800A93FD46A69E997B0623175A47AC26204A9D4* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.EndPoint>

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7AD5FF56CD0FBD6843796AC47F4A1949F8E936DC* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Int64>

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult>
struct Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tBDD2C80B878F8B0B49233A7D3A08AF214597079A* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult>

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisType>
struct Task_1_tC6E018B5808073BBD05E87E5D185B79C49AB92D4_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tE8FD2E57EA896E47A469B2B848CCF326A76EDB2C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisType>

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Double>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Double>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// StackExchange.Redis.GeoPosition

// StackExchange.Redis.GeoPosition

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

// StackExchange.Redis.LCSMatchResult
struct LCSMatchResult_t70548BE4E6AA28955F6E71086759E8D6DCFAD909_StaticFields
{
	// StackExchange.Redis.LCSMatchResult StackExchange.Redis.LCSMatchResult::<Null>k__BackingField
	LCSMatchResult_t70548BE4E6AA28955F6E71086759E8D6DCFAD909 ___U3CNullU3Ek__BackingField_0;
};

// StackExchange.Redis.LCSMatchResult

// StackExchange.Redis.RedisChannel

// StackExchange.Redis.RedisChannel

// StackExchange.Redis.RedisKey
struct RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_StaticFields
{
	// StackExchange.Redis.RedisKey StackExchange.Redis.RedisKey::<Null>k__BackingField
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___U3CNullU3Ek__BackingField_0;
};

// StackExchange.Redis.RedisKey

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt32

// System.UInt32

// Mapbox.Utils.Vector2d

// Mapbox.Utils.Vector2d

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// Vuforia.VuVector2F

// Vuforia.VuVector2F

// SQLite4Unity3d.SQLiteConnection/IndexedColumn

// SQLite4Unity3d.SQLiteConnection/IndexedColumn

// System.Collections.Generic.List`1/Enumerator<Mapbox.Utils.Vector2d>

// System.Collections.Generic.List`1/Enumerator<Mapbox.Utils.Vector2d>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>

// System.Collections.Generic.List`1/Enumerator<Vuforia.VuVector2F>

// System.Collections.Generic.List`1/Enumerator<Vuforia.VuVector2F>

// System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteConnection/IndexedColumn>

// System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteConnection/IndexedColumn>

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>

// System.Nullable`1<System.DateTime>

// System.Nullable`1<System.DateTime>

// System.Nullable`1<StackExchange.Redis.GeoPosition>

// System.Nullable`1<StackExchange.Redis.GeoPosition>

// System.Nullable`1<StackExchange.Redis.RedisKey>

// System.Nullable`1<StackExchange.Redis.RedisKey>

// System.Nullable`1<System.TimeSpan>

// System.Nullable`1<System.TimeSpan>

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>>
struct Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t440BCA273D8F7D2BE5CAA88135480E6CF22A9715* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>>

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>>
struct Task_1_t67361845973F277EA4FC53B24E369BB025261C40_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t977B8E86A5C0C791607D53BFFDD277D6A28F3DCF* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>>

// System.Threading.Tasks.Task`1<StackExchange.Redis.LCSMatchResult>
struct Task_1_t04D60C8C2133296DE05F62A8A0BC658D40F15929_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t491F971FE3869F776294FF6FA2683FA2271E12DA* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.LCSMatchResult>

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisKey>
struct Task_1_tD50A57147A55159022E4DFAA73FD649AE8D7D8BD_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tCCF26589B6D6E9A9750F227C5C63525F8350F096* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisKey>

// System.Threading.Tasks.Task`1<System.TimeSpan>
struct Task_1_tCAC4F769ADD4342238897BCBF46AF752F184C4AB_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFB183BDCD2F2B80848A3AB9661E6277C2F30DE85* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.TimeSpan>

// System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Int32>

// System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Int32>

// System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Object>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// StackExchange.Redis.ListPopResult
struct ListPopResult_tC141DAA126B7D23C1DAB5A1BEDA7294591C42D1D_StaticFields
{
	// StackExchange.Redis.ListPopResult StackExchange.Redis.ListPopResult::<Null>k__BackingField
	ListPopResult_tC141DAA126B7D23C1DAB5A1BEDA7294591C42D1D ___U3CNullU3Ek__BackingField_0;
};

// StackExchange.Redis.ListPopResult

// StackExchange.Redis.RedisValue
struct RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_StaticFields
{
	// StackExchange.Redis.RedisValue[] StackExchange.Redis.RedisValue::EmptyArray
	RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___EmptyArray_0;
	// System.Object StackExchange.Redis.RedisValue::Sentinel_SignedInteger
	RuntimeObject* ___Sentinel_SignedInteger_4;
	// System.Object StackExchange.Redis.RedisValue::Sentinel_UnsignedInteger
	RuntimeObject* ___Sentinel_UnsignedInteger_5;
	// System.Object StackExchange.Redis.RedisValue::Sentinel_Raw
	RuntimeObject* ___Sentinel_Raw_6;
	// System.Object StackExchange.Redis.RedisValue::Sentinel_Double
	RuntimeObject* ___Sentinel_Double_7;
	// StackExchange.Redis.RedisValue StackExchange.Redis.RedisValue::<EmptyString>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CEmptyStringU3Ek__BackingField_8;
	// System.Object StackExchange.Redis.RedisValue::s_DoubleNAN
	RuntimeObject* ___s_DoubleNAN_9;
	// System.Object StackExchange.Redis.RedisValue::s_DoublePosInf
	RuntimeObject* ___s_DoublePosInf_10;
	// System.Object StackExchange.Redis.RedisValue::s_DoubleNegInf
	RuntimeObject* ___s_DoubleNegInf_11;
	// System.Object StackExchange.Redis.RedisValue::s_EmptyString
	RuntimeObject* ___s_EmptyString_12;
	// System.Object[] StackExchange.Redis.RedisValue::s_CommonInt32
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_CommonInt32_13;
	// StackExchange.Redis.RedisValue StackExchange.Redis.RedisValue::<Null>k__BackingField
	RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___U3CNullU3Ek__BackingField_14;
	// System.Reflection.FieldInfo StackExchange.Redis.RedisValue::s_origin
	FieldInfo_t* ___s_origin_15;
	// System.Reflection.FieldInfo StackExchange.Redis.RedisValue::s_buffer
	FieldInfo_t* ___s_buffer_16;
};

// StackExchange.Redis.RedisValue

// StackExchange.Redis.SortedSetPopResult
struct SortedSetPopResult_t98271375553139540A64AC7F7794246779CC8DFC_StaticFields
{
	// StackExchange.Redis.SortedSetPopResult StackExchange.Redis.SortedSetPopResult::<Null>k__BackingField
	SortedSetPopResult_t98271375553139540A64AC7F7794246779CC8DFC ___U3CNullU3Ek__BackingField_0;
};

// StackExchange.Redis.SortedSetPopResult

// System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>

// System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>

// System.Nullable`1<StackExchange.Redis.RedisValue>

// System.Nullable`1<StackExchange.Redis.RedisValue>

// System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>>
struct Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD1312B07567D037375AE1BC9E412FA736BE9A26C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>>

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>>
struct Task_1_tB3E3DBDA744EF24975EA05AA4FD6B334C66F38C9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t818D7322D7DA2FE7677C85F472F6590AD93CC2C3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>>

// System.Threading.Tasks.Task`1<System.Nullable`1<System.TimeSpan>>
struct Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tDC8B58CA30DBB653C0C9581BB298C0E852D8A3A7* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<System.TimeSpan>>

// System.Threading.Tasks.Task`1<StackExchange.Redis.ListPopResult>
struct Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t255CB4AC9B2AE159D980268AA469555D657EAAB9* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.ListPopResult>

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue>
struct Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD32601F41618B620A5CA1A6C704CE93AAE4B394B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue>

// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetPopResult>
struct Task_1_t2CFCE06DA7F047763B49FF98A34E2F0A61D7D12A_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tAD6BF6F17CFA9C4976EDE39C9C6CAB9D95E1C5CB* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetPopResult>

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Boolean>

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Boolean>

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Double>

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Double>

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>

// System.Linq.Enumerable/WhereSelectListIterator`2<Vuforia.VuVector2F,UnityEngine.Vector3>

// System.Linq.Enumerable/WhereSelectListIterator`2<Vuforia.VuVector2F,UnityEngine.Vector3>

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>

// StackExchange.Redis.GeoEntry

// StackExchange.Redis.GeoEntry

// StackExchange.Redis.HashEntry

// StackExchange.Redis.HashEntry

// System.MulticastDelegate

// System.MulticastDelegate

// StackExchange.Redis.NameValueEntry

// StackExchange.Redis.NameValueEntry

// StackExchange.Redis.RedisValueWithExpiry

// StackExchange.Redis.RedisValueWithExpiry

// StackExchange.Redis.SortedSetEntry

// StackExchange.Redis.SortedSetEntry

// StackExchange.Redis.StreamAutoClaimIdsOnlyResult
struct StreamAutoClaimIdsOnlyResult_tBEEA78BC5C767570FB2BC1A37BB42D24BFB61FF6_StaticFields
{
	// StackExchange.Redis.StreamAutoClaimIdsOnlyResult StackExchange.Redis.StreamAutoClaimIdsOnlyResult::<Null>k__BackingField
	StreamAutoClaimIdsOnlyResult_tBEEA78BC5C767570FB2BC1A37BB42D24BFB61FF6 ___U3CNullU3Ek__BackingField_0;
};

// StackExchange.Redis.StreamAutoClaimIdsOnlyResult

// StackExchange.Redis.StreamAutoClaimResult
struct StreamAutoClaimResult_tB0D1FEF5B512F0B7063111D87B23109AAEAC250E_StaticFields
{
	// StackExchange.Redis.StreamAutoClaimResult StackExchange.Redis.StreamAutoClaimResult::<Null>k__BackingField
	StreamAutoClaimResult_tB0D1FEF5B512F0B7063111D87B23109AAEAC250E ___U3CNullU3Ek__BackingField_0;
};

// StackExchange.Redis.StreamAutoClaimResult

// StackExchange.Redis.StreamEntry
struct StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3_StaticFields
{
	// StackExchange.Redis.StreamEntry StackExchange.Redis.StreamEntry::<Null>k__BackingField
	StreamEntry_t87446012920A710C7453205E6BBA96E1C25DCEA3 ___U3CNullU3Ek__BackingField_0;
};

// StackExchange.Redis.StreamEntry

// StackExchange.Redis.StreamPendingInfo

// StackExchange.Redis.StreamPendingInfo

// StackExchange.Redis.StreamPosition

// StackExchange.Redis.StreamPosition

// System.SystemException

// System.SystemException

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>

// System.Func`2<System.Boolean,System.Boolean>

// System.Func`2<System.Boolean,System.Boolean>

// System.Func`2<System.Double,System.Boolean>

// System.Func`2<System.Double,System.Boolean>

// System.Func`2<System.Int32,System.Boolean>

// System.Func`2<System.Int32,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey>

// System.Func`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey>

// System.Func`2<System.UInt32,System.Boolean>

// System.Func`2<System.UInt32,System.Boolean>

// System.Func`2<System.UInt32,System.Int32>

// System.Func`2<System.UInt32,System.Int32>

// System.Func`2<System.UInt32,System.Object>

// System.Func`2<System.UInt32,System.Object>

// System.Func`2<Mapbox.Utils.Vector2d,System.Boolean>

// System.Func`2<Mapbox.Utils.Vector2d,System.Boolean>

// System.Func`2<Mapbox.Utils.Vector2d,System.Double>

// System.Func`2<Mapbox.Utils.Vector2d,System.Double>

// System.Func`2<Mapbox.Utils.Vector2d,System.Object>

// System.Func`2<Mapbox.Utils.Vector2d,System.Object>

// System.Func`2<UnityEngine.Vector3,System.Boolean>

// System.Func`2<UnityEngine.Vector3,System.Boolean>

// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector3>

// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector3>

// System.Func`2<Vuforia.VuVector2F,System.Boolean>

// System.Func`2<Vuforia.VuVector2F,System.Boolean>

// System.Func`2<Vuforia.VuVector2F,UnityEngine.Vector3>

// System.Func`2<Vuforia.VuVector2F,UnityEngine.Vector3>

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>

// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>

// System.Nullable`1<StackExchange.Redis.SortedSetEntry>

// System.Nullable`1<StackExchange.Redis.SortedSetEntry>

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValueWithExpiry>
struct Task_1_t7D368296989D942BF0999BF6551E6E06FEC1B349_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t078CAA6E56F5399C162A2CE48C6A9E5D7898E9D3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValueWithExpiry>

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimIdsOnlyResult>
struct Task_1_t7D15716AA8F4059D3569838C2529648CDD2D7ED8_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD06C06B2992DF9BCFC306E0AC4E0E2ABC05D3C98* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimIdsOnlyResult>

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimResult>
struct Task_1_t66CE8E8C94C302183ACE1AC900D81201A1DFC277_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC20B59972464DF29A120C881E1B91512458BB250* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimResult>

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingInfo>
struct Task_1_t40F8AD242070ABAD378B4864D452D23B99265296_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t931305FC0DD77257AFFF9876877898FFB1BFDEA9* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingInfo>

// System.ArithmeticException

// System.ArithmeticException

// System.NotSupportedException

// System.NotSupportedException

// StackExchange.Redis.StreamInfo

// StackExchange.Redis.StreamInfo

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.SortedSetEntry>>
struct Task_1_tB96068856E8A9D1250EF5844E57B7C5F4582D3BA_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2D6F8906D1F261A2CE9509F421D6E568A73AFC63* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.SortedSetEntry>>

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamInfo>
struct Task_1_t3C262C83413F25FAFCF6031D3444871221FB823E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t4D014008EC2F5DA340CEAE238463D42E9A9DA46B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamInfo>

// System.OverflowException

// System.OverflowException
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
// StackExchange.Redis.GeoEntry[]
struct GeoEntryU5BU5D_tEDBEA4FFDD8ECCA2C5C3F0AE39D303EC391AA46F  : public RuntimeArray
{
	ALIGN_FIELD (8) GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10 m_Items[1];

	inline GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CMemberU3Ek__BackingField_0))->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___U3CMemberU3Ek__BackingField_0))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
	inline GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CMemberU3Ek__BackingField_0))->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___U3CMemberU3Ek__BackingField_0))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
};
// StackExchange.Redis.RedisValue[]
struct RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0  : public RuntimeArray
{
	ALIGN_FIELD (8) RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF m_Items[1];

	inline RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
	inline RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
};
// StackExchange.Redis.HashEntry[]
struct HashEntryU5BU5D_tAC00468F467DF7E0DB4F9241C5B7487C53D4AEEC  : public RuntimeArray
{
	ALIGN_FIELD (8) HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB m_Items[1];

	inline HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___name_0))->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___name_0))->____memory_2))->____object_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____objectOrSentinel_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value_1))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
	inline HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HashEntry_t89651946DB569B569554F0D5DDE2930238B809AB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___name_0))->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___name_0))->____memory_2))->____object_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____objectOrSentinel_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value_1))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
};
// StackExchange.Redis.RedisKey[]
struct RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351  : public RuntimeArray
{
	ALIGN_FIELD (8) RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 m_Items[1];

	inline RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CKeyPrefixU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CKeyValueU3Ek__BackingField_2), (void*)NULL);
		#endif
	}
	inline RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CKeyPrefixU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CKeyValueU3Ek__BackingField_2), (void*)NULL);
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
// StackExchange.Redis.SortedSetEntry[]
struct SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC  : public RuntimeArray
{
	ALIGN_FIELD (8) SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D m_Items[1];

	inline SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___element_0))->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___element_0))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
	inline SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SortedSetEntry_t14C9652BCEAB84F7B9EBEB9E0C234F54892F2B2D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___element_0))->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___element_0))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// StackExchange.Redis.NameValueEntry[]
struct NameValueEntryU5BU5D_t8A4006F6EC61A4F1E6829BA71C2227313B50C76B  : public RuntimeArray
{
	ALIGN_FIELD (8) NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB m_Items[1];

	inline NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___name_0))->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___name_0))->____memory_2))->____object_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____objectOrSentinel_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value_1))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
	inline NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NameValueEntry_t9A749D0E309B974BE3287FC03946DA731133F8EB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___name_0))->____objectOrSentinel_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___name_0))->____memory_2))->____object_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____objectOrSentinel_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value_1))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
};
// StackExchange.Redis.StreamPosition[]
struct StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5  : public RuntimeArray
{
	ALIGN_FIELD (8) StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1 m_Items[1];

	inline StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CKeyU3Ek__BackingField_0))->___U3CKeyPrefixU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CKeyU3Ek__BackingField_0))->___U3CKeyValueU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CPositionU3Ek__BackingField_1))->____objectOrSentinel_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___U3CPositionU3Ek__BackingField_1))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
	inline StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StreamPosition_t95F3810FB017CF93C8A83CD63546474083A6B9A1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CKeyU3Ek__BackingField_0))->___U3CKeyPrefixU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CKeyU3Ek__BackingField_0))->___U3CKeyValueU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CPositionU3Ek__BackingField_1))->____objectOrSentinel_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___U3CPositionU3Ek__BackingField_1))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>[]
struct KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD m_Items[1];

	inline KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___U3CKeyPrefixU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___U3CKeyValueU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____objectOrSentinel_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value_1))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___U3CKeyPrefixU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->___U3CKeyValueU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____objectOrSentinel_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value_1))->____memory_2))->____object_0), (void*)NULL);
		#endif
	}
};
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* m_Items[1];

	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6E72C722C46949F140550D563C1F41E304752583 m_Items[1];

	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};


// T System.Collections.Generic.List`1/Enumerator<System.UInt32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_m208E0A9BA90A104D5F5752EAE69B2135724F6E29_gshared_inline (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.UInt32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFE05E33D2024B0ACB5DF9F42E655103AF96763AE_gshared (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Mapbox.Utils.Vector2d>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB Enumerator_get_Current_mFCB3FDB8F4A948D29CD9B8147E25174B1E22FA07_gshared_inline (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.Utils.Vector2d>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD66D60F28AA32D95B516DBA1B055E86D3CB86AC3_gshared (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Vuforia.VuVector2F>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 Enumerator_get_Current_m210A4049336A7102C833E9E6CC1FD32A65DA3776_gshared_inline (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.VuVector2F>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3CBAD54C02B574C3BD01FCFC8853777EAB253C37_gshared (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteConnection/IndexedColumn>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 Enumerator_get_Current_m16FE5A2A7B5183FE3A577C2C60952773592D6E8A_gshared_inline (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteConnection/IndexedColumn>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE450CB6876CF4F4F6003FEABA7689BC7B88BD396_gshared (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<StackExchange.Redis.RedisKey>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418_gshared (Nullable_1_t0438946BB4B093C47FB862105341AB14FDB20027* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 KeyValuePair_2_get_Key_mE830EDA5DB05430183DB46527FD64FD73DA9C718_gshared_inline (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF KeyValuePair_2_get_Value_m20146FB817B75003F1E3F10A08994392DF04A509_gshared_inline (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m1B5335506876501BC467CC85D62D8DBE8B679FE8_gshared (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4E419E4BB51F0147B95F0EF44074DE6C92C955BC_gshared (Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// T System.Collections.Generic.List`1/Enumerator<System.UInt32>::get_Current()
inline uint32_t Enumerator_get_Current_m208E0A9BA90A104D5F5752EAE69B2135724F6E29_inline (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F*, const RuntimeMethod*))Enumerator_get_Current_m208E0A9BA90A104D5F5752EAE69B2135724F6E29_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.UInt32>::MoveNext()
inline bool Enumerator_MoveNext_mFE05E33D2024B0ACB5DF9F42E655103AF96763AE (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F*, const RuntimeMethod*))Enumerator_MoveNext_mFE05E33D2024B0ACB5DF9F42E655103AF96763AE_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Mapbox.Utils.Vector2d>::get_Current()
inline Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB Enumerator_get_Current_mFCB3FDB8F4A948D29CD9B8147E25174B1E22FA07_inline (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* __this, const RuntimeMethod* method)
{
	return ((  Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB (*) (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332*, const RuntimeMethod*))Enumerator_get_Current_mFCB3FDB8F4A948D29CD9B8147E25174B1E22FA07_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.Utils.Vector2d>::MoveNext()
inline bool Enumerator_MoveNext_mD66D60F28AA32D95B516DBA1B055E86D3CB86AC3 (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332*, const RuntimeMethod*))Enumerator_MoveNext_mD66D60F28AA32D95B516DBA1B055E86D3CB86AC3_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Vuforia.VuVector2F>::get_Current()
inline VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 Enumerator_get_Current_m210A4049336A7102C833E9E6CC1FD32A65DA3776_inline (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631* __this, const RuntimeMethod* method)
{
	return ((  VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 (*) (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631*, const RuntimeMethod*))Enumerator_get_Current_m210A4049336A7102C833E9E6CC1FD32A65DA3776_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.VuVector2F>::MoveNext()
inline bool Enumerator_MoveNext_m3CBAD54C02B574C3BD01FCFC8853777EAB253C37 (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631*, const RuntimeMethod*))Enumerator_MoveNext_m3CBAD54C02B574C3BD01FCFC8853777EAB253C37_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteConnection/IndexedColumn>::get_Current()
inline IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 Enumerator_get_Current_m16FE5A2A7B5183FE3A577C2C60952773592D6E8A_inline (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* __this, const RuntimeMethod* method)
{
	return ((  IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 (*) (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322*, const RuntimeMethod*))Enumerator_get_Current_m16FE5A2A7B5183FE3A577C2C60952773592D6E8A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<SQLite4Unity3d.SQLiteConnection/IndexedColumn>::MoveNext()
inline bool Enumerator_MoveNext_mE450CB6876CF4F4F6003FEABA7689BC7B88BD396 (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322*, const RuntimeMethod*))Enumerator_MoveNext_mE450CB6876CF4F4F6003FEABA7689BC7B88BD396_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// StackExchange.Redis.RedisKey StackExchange.Redis.RedisKey::op_Implicit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 RedisKey_op_Implicit_mB642CEC34D5418D76B7E1A038180E0195C71D5B9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<StackExchange.Redis.RedisKey>::.ctor(T)
inline void Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418 (Nullable_1_t0438946BB4B093C47FB862105341AB14FDB20027* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0438946BB4B093C47FB862105341AB14FDB20027*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418_gshared)(__this, ___0_value, method);
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.LuaScript::EvaluateAsync(StackExchange.Redis.IDatabaseAsync,System.Object,System.Nullable`1<StackExchange.Redis.RedisKey>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* LuaScript_EvaluateAsync_m1C6651D6D65B595C0F731E57B4EB7C7EF00DAE02 (LuaScript_tD1333E0E2F7DD94B81E0E9FFD216F8E105B258F5* __this, RuntimeObject* ___0_db, RuntimeObject* ___1_ps, Nullable_1_t0438946BB4B093C47FB862105341AB14FDB20027 ___2_withKeyPrefix, int32_t ___3_flags, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.LoadedLuaScript::EvaluateAsync(StackExchange.Redis.IDatabaseAsync,System.Object,System.Nullable`1<StackExchange.Redis.RedisKey>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* LoadedLuaScript_EvaluateAsync_m6F6E785231C05AE5F25BFA26ED6DAA9E9FA8BB38 (LoadedLuaScript_t5AE35B6B8B77E229096D7137BAB71EBA1F103323* __this, RuntimeObject* ___0_db, RuntimeObject* ___1_ps, Nullable_1_t0438946BB4B093C47FB862105341AB14FDB20027 ___2_withKeyPrefix, int32_t ___3_flags, const RuntimeMethod* method) ;
// StackExchange.Redis.RedisKey StackExchange.Redis.RedisKey::WithPrefix(System.Byte[],StackExchange.Redis.RedisKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 RedisKey_WithPrefix_mA43B1B8F49F1B6009FA03A763D07461C048F728B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_prefix, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_value, const RuntimeMethod* method) ;
// System.Boolean StackExchange.Redis.RedisKey::op_Equality(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RedisKey_op_Equality_mE7316AF0C6B9959D7BA3833D22014680290BF7A8 (RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_x, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_y, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697 (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___0_source, ___1_predicate, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>::get_Key()
inline RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 KeyValuePair_2_get_Key_mE830EDA5DB05430183DB46527FD64FD73DA9C718_inline (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* __this, const RuntimeMethod* method)
{
	return ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD*, const RuntimeMethod*))KeyValuePair_2_get_Key_mE830EDA5DB05430183DB46527FD64FD73DA9C718_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>::get_Value()
inline RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF KeyValuePair_2_get_Value_m20146FB817B75003F1E3F10A08994392DF04A509_inline (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* __this, const RuntimeMethod* method)
{
	return ((  RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF (*) (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD*, const RuntimeMethod*))KeyValuePair_2_get_Value_m20146FB817B75003F1E3F10A08994392DF04A509_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m1B5335506876501BC467CC85D62D8DBE8B679FE8 (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, const RuntimeMethod*))KeyValuePair_2__ctor_m1B5335506876501BC467CC85D62D8DBE8B679FE8_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Byte[] StackExchange.Redis.RedisValue::op_Implicit(StackExchange.Redis.RedisValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RedisValue_op_Implicit_m4FFAB197B2190B61AEDBC14F91995FEEEEFDAAF8 (RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___0_value, const RuntimeMethod* method) ;
// System.Byte[] StackExchange.Redis.RedisKey::ConcatenateBytes(System.Byte[],System.Object,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RedisKey_ConcatenateBytes_m534A23E111AD87D89947D0B1CE5D164BA423631B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_a, RuntimeObject* ___1_b, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_c, const RuntimeMethod* method) ;
// StackExchange.Redis.RedisValue StackExchange.Redis.RedisValue::op_Implicit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF RedisValue_op_Implicit_m3E6DC9723BA7050A3BCE81C811B962D9A029081C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// StackExchange.Redis.RedisValue StackExchange.Redis.RedisValue::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF RedisValue_op_Implicit_mDF9288598DF6E409BBA583CC80C24F3ADD8EFF7E (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean StackExchange.Redis.RedisValue::op_Equality(StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RedisValue_op_Equality_mD9B3CA3800DE66FA510C995BE04A5ABB08E6C439 (RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___0_x, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_y, const RuntimeMethod* method) ;
// System.Byte[] StackExchange.Redis.RedisChannel::op_Implicit(StackExchange.Redis.RedisChannel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RedisChannel_op_Implicit_mCB86F9766C3EE4B7BB796E94B1F4C661C8EC0C7A_inline (RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 ___0_key, const RuntimeMethod* method) ;
// StackExchange.Redis.RedisChannel StackExchange.Redis.RedisChannel::op_Implicit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 RedisChannel_op_Implicit_m212A60EB14B8D980DFAF4EE0A543BE8E3092AC33 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Func`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4E419E4BB51F0147B95F0EF44074DE6C92C955BC (Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m4E419E4BB51F0147B95F0EF44074DE6C92C955BC_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1E0C0EE573956370BE4C1914C35297FFC468EDF3_gshared (WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64* __this, List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___0_source, Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* ___1_predicate, Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mC9A7B40B6362B1D7A3BD6D46FAF24D8276A51B48_gshared (WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_0 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)__this->___source_3;
		Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* L_1 = (Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*)__this->___predicate_4;
		Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A* L_2 = (Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A*)__this->___selector_5;
		WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64* L_3 = (WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64*, List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*, Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5A86E55E8BCDDEFB209E3FC3A795B3D524A46567_gshared (WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_3 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F L_4;
		L_4 = ((  Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* L_5 = (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F*)(&__this->___enumerator_6);
		uint32_t L_6;
		L_6 = Enumerator_get_Current_m208E0A9BA90A104D5F5752EAE69B2135724F6E29_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* L_7 = (Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* L_8 = (Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*)__this->___predicate_4;
		uint32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A* L_11 = (Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A*)__this->___selector_5;
		uint32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* L_14 = (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFE05E33D2024B0ACB5DF9F42E655103AF96763AE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m95BA30E80887DBA1F0468239F48F516C2D7FCCE5_gshared (WhereSelectListIterator_2_tEA8719D7A4D164BE2D44D94FCF3B40193E6F3F64* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8CF2CC9EAD71AA6480F5330742A3CD027CDA360B_gshared (WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA* __this, List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___0_source, Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* ___1_predicate, Func_2_t5992936113CB10755892A492A7E657203C1C94A7* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5992936113CB10755892A492A7E657203C1C94A7* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mA58D7E40234D49FBE0B427AF58C07CF6CBE831A6_gshared (WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_0 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)__this->___source_3;
		Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* L_1 = (Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*)__this->___predicate_4;
		Func_2_t5992936113CB10755892A492A7E657203C1C94A7* L_2 = (Func_2_t5992936113CB10755892A492A7E657203C1C94A7*)__this->___selector_5;
		WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA* L_3 = (WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA*, List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*, Func_2_t5992936113CB10755892A492A7E657203C1C94A7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m77E55D4871E87519A846459BCFA6627DFCEBE5C6_gshared (WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_3 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F L_4;
		L_4 = ((  Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* L_5 = (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F*)(&__this->___enumerator_6);
		uint32_t L_6;
		L_6 = Enumerator_get_Current_m208E0A9BA90A104D5F5752EAE69B2135724F6E29_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* L_7 = (Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4* L_8 = (Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*)__this->___predicate_4;
		uint32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tFA568DA5423F89C272D95696EFAF1530EDD1F6A4*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5992936113CB10755892A492A7E657203C1C94A7* L_11 = (Func_2_t5992936113CB10755892A492A7E657203C1C94A7*)__this->___selector_5;
		uint32_t L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t5992936113CB10755892A492A7E657203C1C94A7*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* L_14 = (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFE05E33D2024B0ACB5DF9F42E655103AF96763AE(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.UInt32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCFC56C18573AFCDF9880F729D7DF55FF140A77BE_gshared (WhereSelectListIterator_2_t1E66132C014C3DE8B0056F0F3BA2FD28591A8BCA* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA20E05BEE226B89744BCAD6FBE338397A78289B2_gshared (WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF* __this, List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___0_source, Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* ___1_predicate, Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_mF12F1B1B40E4A96C7CD40D5B3873CD0A2FB84173_gshared (WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*)__this->___source_3;
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_1 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_2 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___selector_5;
		WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF* L_3 = (WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF*, List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*, Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*, Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m09579B1758621BD892E2F8C4FBBD3790527E694B_gshared (WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_3 = (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 L_4;
		L_4 = ((  Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 (*) (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* L_5 = (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332*)(&__this->___enumerator_6);
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_6;
		L_6 = Enumerator_get_Current_mFCB3FDB8F4A948D29CD9B8147E25174B1E22FA07_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_7 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_8 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_11 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___selector_5;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* L_14 = (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mD66D60F28AA32D95B516DBA1B055E86D3CB86AC3(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6E5C2511D70DABC826282FEC956DF3C94D3B450A_gshared (WhereSelectListIterator_2_t7C172658C6FC84C6042D5519078987AA216AB9DF* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Double>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4BDF31FBF431B97B4DDAF4AEAEBAA54872EA0D54_gshared (WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03* __this, List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___0_source, Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* ___1_predicate, Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Double>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B* WhereSelectListIterator_2_Clone_m0EBD7858BF863A8D0F96C71A5A37D243F54A8FB5_gshared (WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*)__this->___source_3;
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_1 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3* L_2 = (Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3*)__this->___selector_5;
		WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03* L_3 = (WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03*, List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*, Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*, Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Double>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0004D14B723D7412283B592E42FC7A524D47B4CF_gshared (WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_3 = (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 L_4;
		L_4 = ((  Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 (*) (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* L_5 = (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332*)(&__this->___enumerator_6);
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_6;
		L_6 = Enumerator_get_Current_mFCB3FDB8F4A948D29CD9B8147E25174B1E22FA07_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_7 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_8 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3* L_11 = (Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3*)__this->___selector_5;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_12 = V_1;
		NullCheck(L_11);
		double L_13;
		L_13 = ((  double (*) (Func_2_t5420F79BED4C91F9029BB54C36C4AADDFF66C2C3*, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* L_14 = (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mD66D60F28AA32D95B516DBA1B055E86D3CB86AC3(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Double>::Dispose() */, (Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Double>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7BCFEED0B10F11B9E846E7FC74486BD84464ED3B_gshared (WhereSelectListIterator_2_t2270271BA4E6BF061DB0A8434261DAB023F92F03* __this, Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t19D39E8E2663DD95BF8CFB069F30224BE643F373* L_1 = (WhereEnumerableIterator_1_t19D39E8E2663DD95BF8CFB069F30224BE643F373*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t19D39E8E2663DD95BF8CFB069F30224BE643F373*, RuntimeObject*, Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m48823328FD4F41E11F0FF02F9017ADE1F2883B19_gshared (WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB* __this, List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___0_source, Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* ___1_predicate, Func_2_t970C4D283503CE14B164593594D7DE2922495B50* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t970C4D283503CE14B164593594D7DE2922495B50* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m802219287F0C0A337B77FB05D4242E264415E723_gshared (WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*)__this->___source_3;
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_1 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		Func_2_t970C4D283503CE14B164593594D7DE2922495B50* L_2 = (Func_2_t970C4D283503CE14B164593594D7DE2922495B50*)__this->___selector_5;
		WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB* L_3 = (WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB*, List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*, Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*, Func_2_t970C4D283503CE14B164593594D7DE2922495B50*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7D57F7EAE302E71E81E4D4E425CD6DF12E9FF33C_gshared (WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_3 = (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 L_4;
		L_4 = ((  Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332 (*) (List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* L_5 = (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332*)(&__this->___enumerator_6);
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_6;
		L_6 = Enumerator_get_Current_mFCB3FDB8F4A948D29CD9B8147E25174B1E22FA07_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_7 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5* L_8 = (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*)__this->___predicate_4;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t383C681CF5A439C4FB4204348B60BAD65E0DFFB5*, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t970C4D283503CE14B164593594D7DE2922495B50* L_11 = (Func_2_t970C4D283503CE14B164593594D7DE2922495B50*)__this->___selector_5;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t970C4D283503CE14B164593594D7DE2922495B50*, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* L_14 = (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mD66D60F28AA32D95B516DBA1B055E86D3CB86AC3(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Mapbox.Utils.Vector2d,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC0965D2C504EC6BB3286E7DC8D9CB4113FEF9DA_gshared (WhereSelectListIterator_2_t3E6C4506330FC107C94D76C0DC84F74981B128CB* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE94538105AFDBE896AB806F0039F1269C345EE48_gshared (WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_source, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___1_predicate, Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_m6207E63CDF464F3462DE34093E7CD781E93FC989_gshared (WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858* __this, const RuntimeMethod* method) 
{
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)__this->___source_3;
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_1 = (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*)__this->___predicate_4;
		Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4* L_2 = (Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4*)__this->___selector_5;
		WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858* L_3 = (WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858*, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB5EB54BDB2EA0A150C1CF727C88A6B103A98F336_gshared (WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_4;
		L_4 = ((  Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* L_5 = (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*)(&__this->___enumerator_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_7 = (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_8 = (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*)__this->___predicate_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4* L_11 = (Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4*)__this->___selector_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_t5FAD225BE5BF75673982C9FE55604AC36DBC1DB4*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* L_14 = (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m49D4CF18588EA6F6A5E44948F05A305A80F86A4D_gshared (WhereSelectListIterator_2_t7EA4EF5AB521A490EA82085244A4D3E484FF1858* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*, RuntimeObject*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Vuforia.VuVector2F,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m17B7536AC2755087FBC44FF4E4F71B43C1181B45_gshared (WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E* __this, List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C* ___0_source, Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453* ___1_predicate, Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Vuforia.VuVector2F,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_mCF2D66BEDD0281F8E09C1096384113C28C21A4C4_gshared (WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C* L_0 = (List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C*)__this->___source_3;
		Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453* L_1 = (Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453*)__this->___predicate_4;
		Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96* L_2 = (Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96*)__this->___selector_5;
		WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E* L_3 = (WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E*, List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C*, Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453*, Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Vuforia.VuVector2F,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m941B258079C9D54422764A7AE0B475F96EF2A173_gshared (WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C* L_3 = (List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631 L_4;
		L_4 = ((  Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631 (*) (List_1_t1C59BA931926469EAE0192D04C45A59B8AFBD14C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631* L_5 = (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631*)(&__this->___enumerator_6);
		VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 L_6;
		L_6 = Enumerator_get_Current_m210A4049336A7102C833E9E6CC1FD32A65DA3776_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453* L_7 = (Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453* L_8 = (Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453*)__this->___predicate_4;
		VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t6DE61D59230BC47639FE4A2F2A8E58A43BD66453*, VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96* L_11 = (Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96*)__this->___selector_5;
		VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_tFBA553695BF02A83C7969FBD4B7BEAB89ECAFB96*, VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631* L_14 = (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m3CBAD54C02B574C3BD01FCFC8853777EAB253C37(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Vuforia.VuVector2F,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6CB83188A506D91A87B4C027F49DAAE911586D98_gshared (WhereSelectListIterator_2_tD1D6B505340C5B93BECE64DB59E464BF4675D37E* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*, RuntimeObject*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mC6D917AF5B7EC21901FD9935C068230AC7D94470_gshared (WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7* __this, List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___0_source, Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* ___1_predicate, Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_mD9E5732C4D49E4654F64B1151BA9892461ABE139_gshared (WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_0 = (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*)__this->___source_3;
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_1 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_2 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___selector_5;
		WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7* L_3 = (WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7*, List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*, Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*, Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7E686988252DAE538AC60213C0F38D004ABB4474_gshared (WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_3 = (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 L_4;
		L_4 = ((  Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 (*) (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___ColumnName_1), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* L_5 = (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322*)(&__this->___enumerator_6);
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_6;
		L_6 = Enumerator_get_Current_m16FE5A2A7B5183FE3A577C2C60952773592D6E8A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_7 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_8 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_11 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___selector_5;
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* L_14 = (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE450CB6876CF4F4F6003FEABA7689BC7B88BD396(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m867F7C3A71865329CEB915FBE8E36EF9AD5B9E53_gshared (WhereSelectListIterator_2_tD2540C48C316B30D2494EB112F07AD5BF387A5E7* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*, RuntimeObject*, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m65AB16C680FB528E96797F462D7272EA2F41E3C1_gshared (WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66* __this, List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___0_source, Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* ___1_predicate, Func_2_t05C679C84117651025D11DADD191731BCFA59D16* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t05C679C84117651025D11DADD191731BCFA59D16* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B* WhereSelectListIterator_2_Clone_m6B6ED6A77401381BBE7F34C8A73FEEB49D740404_gshared (WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_0 = (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*)__this->___source_3;
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_1 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		Func_2_t05C679C84117651025D11DADD191731BCFA59D16* L_2 = (Func_2_t05C679C84117651025D11DADD191731BCFA59D16*)__this->___selector_5;
		WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66* L_3 = (WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66*, List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*, Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*, Func_2_t05C679C84117651025D11DADD191731BCFA59D16*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF83613396CBA2E975F9E2BE008136DF676A93E7B_gshared (WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_3 = (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 L_4;
		L_4 = ((  Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 (*) (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___ColumnName_1), (void*)NULL);
		#endif
		((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* L_5 = (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322*)(&__this->___enumerator_6);
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_6;
		L_6 = Enumerator_get_Current_m16FE5A2A7B5183FE3A577C2C60952773592D6E8A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_7 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_8 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t05C679C84117651025D11DADD191731BCFA59D16* L_11 = (Func_2_t05C679C84117651025D11DADD191731BCFA59D16*)__this->___selector_5;
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_12 = V_1;
		NullCheck(L_11);
		double L_13;
		L_13 = ((  double (*) (Func_2_t05C679C84117651025D11DADD191731BCFA59D16*, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* L_14 = (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE450CB6876CF4F4F6003FEABA7689BC7B88BD396(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Double>::Dispose() */, (Iterator_1_t18E9E43B6EA3AEE910E9B362C32EA8AAAF39528B*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Double>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m24F0A87E8ADE37B0D0E36BF1C7BB30BF2C706B1E_gshared (WhereSelectListIterator_2_t79E9DECAE7CBD1D5A2B820F5389BB0710F662B66* __this, Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t19D39E8E2663DD95BF8CFB069F30224BE643F373* L_1 = (WhereEnumerableIterator_1_t19D39E8E2663DD95BF8CFB069F30224BE643F373*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t19D39E8E2663DD95BF8CFB069F30224BE643F373*, RuntimeObject*, Func_2_tA342331A04D1549FD79C6EA87B195D099E1C2095*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m28D4765F8F2F09649679FDF43F759E3AF8A851FD_gshared (WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F* __this, List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* ___0_source, Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* ___1_predicate, Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mAA0289D2100C85BD8AE955E5DE291FC42AF59226_gshared (WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_0 = (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*)__this->___source_3;
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_1 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51* L_2 = (Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51*)__this->___selector_5;
		WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F* L_3 = (WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F*, List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*, Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*, Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mD0AE23377A67C0CA82DC6089E26CF1BF7DD6580C_gshared (WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828* L_3 = (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 L_4;
		L_4 = ((  Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322 (*) (List_1_t2BE6BF2F224712DFD6F90AF9B4BAF64099401828*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___ColumnName_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* L_5 = (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322*)(&__this->___enumerator_6);
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_6;
		L_6 = Enumerator_get_Current_m16FE5A2A7B5183FE3A577C2C60952773592D6E8A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_7 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229* L_8 = (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*)__this->___predicate_4;
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCCC02D6C67DEED7650A64E5E0245A52BF4A3B229*, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51* L_11 = (Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51*)__this->___selector_5;
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tF89AE1C4416BE2E647DE799C1064A78346D18C51*, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* L_14 = (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE450CB6876CF4F4F6003FEABA7689BC7B88BD396(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBBD8787B534D0979FACDAFA337799DFD7EF7D5A6_gshared (WhereSelectListIterator_2_t4BC04F05FC235904A2085C8A169EE811AEBD2F9F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
// System.Void StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::.ctor(TInner,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperBase_1__ctor_mFBD2E145F5C30ADB470F7D3EAB2A4571D9CD580B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RuntimeObject* ___0_inner, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_keyPrefix, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_inner;
		__this->___U3CInnerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInnerU3Ek__BackingField_0), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_keyPrefix;
		__this->___U3CPrefixU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrefixU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// StackExchange.Redis.IConnectionMultiplexer StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::get_Multiplexer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperBase_1_get_Multiplexer_m373A4F48117E618502BECA5F8D7ACDAC1D57578A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		NullCheck((RuntimeObject*)(V_0));
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* StackExchange.Redis.IConnectionMultiplexer StackExchange.Redis.IRedisAsync::get_Multiplexer() */, IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0));
		return L_1;
	}
}
// TInner StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::get_Inner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperBase_1_get_Inner_m040D0CD2BD5A743744597C517047CD50F39C8F90_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CInnerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Byte[] StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WrapperBase_1_get_Prefix_m9AAEFDCCEDF5FFAE06EA77ADFCFCFCB44EE6CAB5_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->___U3CPrefixU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::DebugObjectAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_DebugObjectAsync_mECD7C1616DA479C6BDDCD2486B0A587034BF9C4C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(2 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::DebugObjectAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoAddAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_GeoAddAsync_m0BAD9FF753A8D2A70D8F87206947CF0B00CCCF21_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_longitude, double ___2_latitude, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___3_member, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_longitude;
		double L_4 = ___2_latitude;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_5 = ___3_member;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, double, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(3 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::GeoAddAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.GeoEntry,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_GeoAddAsync_m2933616D01179722DBA2F096696A31A20A8459C9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10 ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10 L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, GeoEntry_t7C4615577FAB790BF0D586541B1461D594DB9D10, int32_t >::Invoke(4 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::GeoAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.GeoEntry,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.GeoEntry[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_GeoAddAsync_mDCE9DA7C86BF7EE9B67677BA738DAC73C26A6680_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, GeoEntryU5BU5D_tEDBEA4FFDD8ECCA2C5C3F0AE39D303EC391AA46F* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		GeoEntryU5BU5D_tEDBEA4FFDD8ECCA2C5C3F0AE39D303EC391AA46F* L_3 = ___1_values;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, GeoEntryU5BU5D_tEDBEA4FFDD8ECCA2C5C3F0AE39D303EC391AA46F*, int32_t >::Invoke(5 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::GeoAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.GeoEntry[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_GeoRemoveAsync_mF3C63BFA9AFE162CD7532A9F51A1FB7AE4E989F6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(6 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::GeoRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoDistanceAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.GeoUnit,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* WrapperBase_1_GeoDistanceAsync_mD3D2FFCFB88D756FAB9AF08ACB0D9D73EC6D6417_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member1, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_member2, int32_t ___3_unit, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member1;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_member2;
		int32_t L_5 = ___3_unit;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t >::Invoke(7 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>> StackExchange.Redis.IDatabaseAsync::GeoDistanceAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.GeoUnit,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.String[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoHashAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4* WrapperBase_1_GeoHashAsync_m48B9C2C9BD2CC5BD436FC4E8494306E4FF8F9D02_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_members, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_members;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(8 /* System.Threading.Tasks.Task`1<System.String[]> StackExchange.Redis.IDatabaseAsync::GeoHashAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.String> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoHashAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* WrapperBase_1_GeoHashAsync_m937B6C35D24FDB42C0D62206A60BAE3D5FD5973E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(9 /* System.Threading.Tasks.Task`1<System.String> StackExchange.Redis.IDatabaseAsync::GeoHashAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoPositionAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF6393E9ED89D39D448E8925795E4C068B397AE70* WrapperBase_1_GeoPositionAsync_mFF2838127BB401D441F41740C2F60FFA4879B46B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_members, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_members;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tF6393E9ED89D39D448E8925795E4C068B397AE70* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tF6393E9ED89D39D448E8925795E4C068B397AE70*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(10 /* System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>[]> StackExchange.Redis.IDatabaseAsync::GeoPositionAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoPositionAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB3E3DBDA744EF24975EA05AA4FD6B334C66F38C9* WrapperBase_1_GeoPositionAsync_mC81D511919EB8CB7C320B82692AFC38A0014186A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tB3E3DBDA744EF24975EA05AA4FD6B334C66F38C9* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tB3E3DBDA744EF24975EA05AA4FD6B334C66F38C9*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(11 /* System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.GeoPosition>> StackExchange.Redis.IDatabaseAsync::GeoPositionAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoRadiusAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.GeoUnit,System.Int32,System.Nullable`1<StackExchange.Redis.Order>,StackExchange.Redis.GeoRadiusOptions,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73* WrapperBase_1_GeoRadiusAsync_m5A4F51D1616D2931B76B596FFF4796A0B6907624_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, double ___2_radius, int32_t ___3_unit, int32_t ___4_count, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD ___5_order, int32_t ___6_options, int32_t ___7_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		double L_4 = ___2_radius;
		int32_t L_5 = ___3_unit;
		int32_t L_6 = ___4_count;
		Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD L_7 = ___5_order;
		int32_t L_8 = ___6_options;
		int32_t L_9 = ___7_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73* L_10;
		L_10 = InterfaceFuncInvoker8< Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t, int32_t, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD, int32_t, int32_t >::Invoke(12 /* System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]> StackExchange.Redis.IDatabaseAsync::GeoRadiusAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.GeoUnit,System.Int32,System.Nullable`1<StackExchange.Redis.Order>,StackExchange.Redis.GeoRadiusOptions,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoRadiusAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,System.Double,StackExchange.Redis.GeoUnit,System.Int32,System.Nullable`1<StackExchange.Redis.Order>,StackExchange.Redis.GeoRadiusOptions,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73* WrapperBase_1_GeoRadiusAsync_m5C6D6BBEB925769BE65669A4B94A1496CC4E0267_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_longitude, double ___2_latitude, double ___3_radius, int32_t ___4_unit, int32_t ___5_count, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD ___6_order, int32_t ___7_options, int32_t ___8_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_longitude;
		double L_4 = ___2_latitude;
		double L_5 = ___3_radius;
		int32_t L_6 = ___4_unit;
		int32_t L_7 = ___5_count;
		Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD L_8 = ___6_order;
		int32_t L_9 = ___7_options;
		int32_t L_10 = ___8_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73* L_11;
		L_11 = InterfaceFuncInvoker9< Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, double, double, int32_t, int32_t, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD, int32_t, int32_t >::Invoke(13 /* System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]> StackExchange.Redis.IDatabaseAsync::GeoRadiusAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,System.Double,StackExchange.Redis.GeoUnit,System.Int32,System.Nullable`1<StackExchange.Redis.Order>,StackExchange.Redis.GeoRadiusOptions,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10);
		return L_11;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoSearchAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.GeoSearchShape,System.Int32,System.Boolean,System.Nullable`1<StackExchange.Redis.Order>,StackExchange.Redis.GeoRadiusOptions,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73* WrapperBase_1_GeoSearchAsync_m094BF0F13C5CBB424C31055B4F07B0F2A251B42E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38* ___2_shape, int32_t ___3_count, bool ___4_demandClosest, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD ___5_order, int32_t ___6_options, int32_t ___7_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38* L_4 = ___2_shape;
		int32_t L_5 = ___3_count;
		bool L_6 = ___4_demandClosest;
		Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD L_7 = ___5_order;
		int32_t L_8 = ___6_options;
		int32_t L_9 = ___7_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73* L_10;
		L_10 = InterfaceFuncInvoker8< Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38*, int32_t, bool, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]> StackExchange.Redis.IDatabaseAsync::GeoSearchAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.GeoSearchShape,System.Int32,System.Boolean,System.Nullable`1<StackExchange.Redis.Order>,StackExchange.Redis.GeoRadiusOptions,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoSearchAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.GeoSearchShape,System.Int32,System.Boolean,System.Nullable`1<StackExchange.Redis.Order>,StackExchange.Redis.GeoRadiusOptions,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73* WrapperBase_1_GeoSearchAsync_mBB7449E6C6836C647843EFF1F915862BF01F63C4_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_longitude, double ___2_latitude, GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38* ___3_shape, int32_t ___4_count, bool ___5_demandClosest, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD ___6_order, int32_t ___7_options, int32_t ___8_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_longitude;
		double L_4 = ___2_latitude;
		GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38* L_5 = ___3_shape;
		int32_t L_6 = ___4_count;
		bool L_7 = ___5_demandClosest;
		Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD L_8 = ___6_order;
		int32_t L_9 = ___7_options;
		int32_t L_10 = ___8_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73* L_11;
		L_11 = InterfaceFuncInvoker9< Task_1_t292EB9C36902538A571849EB639ADA5C89F53A73*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, double, GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38*, int32_t, bool, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD, int32_t, int32_t >::Invoke(15 /* System.Threading.Tasks.Task`1<StackExchange.Redis.GeoRadiusResult[]> StackExchange.Redis.IDatabaseAsync::GeoSearchAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.GeoSearchShape,System.Int32,System.Boolean,System.Nullable`1<StackExchange.Redis.Order>,StackExchange.Redis.GeoRadiusOptions,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10);
		return L_11;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoSearchAndStoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.GeoSearchShape,System.Int32,System.Boolean,System.Nullable`1<StackExchange.Redis.Order>,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_GeoSearchAndStoreAsync_mEEEDA1E156BDB49BB18E4D2818DD0C805589B874_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_sourceKey, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destinationKey, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_member, GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38* ___3_shape, int32_t ___4_count, bool ___5_demandClosest, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD ___6_order, bool ___7_storeDistances, int32_t ___8_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_sourceKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_destinationKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_5 = ___2_member;
		GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38* L_6 = ___3_shape;
		int32_t L_7 = ___4_count;
		bool L_8 = ___5_demandClosest;
		Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD L_9 = ___6_order;
		bool L_10 = ___7_storeDistances;
		int32_t L_11 = ___8_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_12;
		L_12 = InterfaceFuncInvoker9< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38*, int32_t, bool, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD, bool, int32_t >::Invoke(16 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::GeoSearchAndStoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.GeoSearchShape,System.Int32,System.Boolean,System.Nullable`1<StackExchange.Redis.Order>,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GeoSearchAndStoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.GeoSearchShape,System.Int32,System.Boolean,System.Nullable`1<StackExchange.Redis.Order>,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_GeoSearchAndStoreAsync_mFCC359B9D141CFD6ADE907434A24D0939174EF2D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_sourceKey, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destinationKey, double ___2_longitude, double ___3_latitude, GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38* ___4_shape, int32_t ___5_count, bool ___6_demandClosest, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD ___7_order, bool ___8_storeDistances, int32_t ___9_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_sourceKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_destinationKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_5 = ___2_longitude;
		double L_6 = ___3_latitude;
		GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38* L_7 = ___4_shape;
		int32_t L_8 = ___5_count;
		bool L_9 = ___6_demandClosest;
		Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD L_10 = ___7_order;
		bool L_11 = ___8_storeDistances;
		int32_t L_12 = ___9_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_13;
		L_13 = InterfaceFuncInvoker10< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, double, GeoSearchShape_t125296C6B19F4E9C135BE1E4ADEB160E31A8CF38*, int32_t, bool, Nullable_1_tC10452D1596AD05C0C58B05DBFF08CC590DFBABD, bool, int32_t >::Invoke(17 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::GeoSearchAndStoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.GeoSearchShape,System.Int32,System.Boolean,System.Nullable`1<StackExchange.Redis.Order>,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashDecrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* WrapperBase_1_HashDecrementAsync_m4BE4CFAE3036BD3C58092B3A78B1B70DCFBF77EF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, double ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		double L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t >::Invoke(19 /* System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.IDatabaseAsync::HashDecrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashDecrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_HashDecrementAsync_mA127BE71A6E4017DF54DF2606E22048A2C1E6B7B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, int64_t ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		int64_t L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, int32_t >::Invoke(18 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::HashDecrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_HashDeleteAsync_mBD610114DA98B3CECAEA0D18873A9A69DB0191B1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_hashFields, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_hashFields;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(21 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::HashDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_HashDeleteAsync_m9F503FACF09E65979972D98582A164BFE247E1B8_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(20 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::HashDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashExistsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_HashExistsAsync_m73313E585ABC5DF8628556FD635B51414D493BAF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(22 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::HashExistsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.HashEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashGetAllAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67* WrapperBase_1_HashGetAllAsync_m91984FD3C6B05EED964A119479F7EFEE0411A39F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(26 /* System.Threading.Tasks.Task`1<StackExchange.Redis.HashEntry[]> StackExchange.Redis.IDatabaseAsync::HashGetAllAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_HashGetAsync_mD48080F9AB95ADDFE66BF6B6B18C2C8C8417994F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_hashFields, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_hashFields;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(25 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::HashGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_HashGetAsync_mF123C3994E95391FE414ACC3B07A7A3534D35FE6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(23 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::HashGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.Lease`1<System.Byte>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashGetLeaseAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3* WrapperBase_1_HashGetLeaseAsync_mE54005F9A1ACEE195D48BD0CFB266362C09F6C48_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(24 /* System.Threading.Tasks.Task`1<StackExchange.Redis.Lease`1<System.Byte>> StackExchange.Redis.IDatabaseAsync::HashGetLeaseAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashIncrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* WrapperBase_1_HashIncrementAsync_mA10A1606F44AFD48223A0849CFDC458E13912117_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, double ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		double L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t >::Invoke(28 /* System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.IDatabaseAsync::HashIncrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashIncrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_HashIncrementAsync_m66CE09B10B81DE94833BA1B87D34C05C93BA5B94_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, int64_t ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		int64_t L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, int32_t >::Invoke(27 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::HashIncrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashKeysAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_HashKeysAsync_mD21969D2B77509B5B095CE46B448BDD23DAAA46E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(29 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::HashKeysAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_HashLengthAsync_mEAD97A929F62A48E03C4990AEE83A38E54DD3CFF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(30 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::HashLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashRandomFieldAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_HashRandomFieldAsync_m977F305406BC60EC0FE957EF224E636E29097FC1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(31 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::HashRandomFieldAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashRandomFieldsAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_HashRandomFieldsAsync_m6BEDB8A0F782BEA867D80B6FA8DFCF63E28E8B37_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(32 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::HashRandomFieldsAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.HashEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashRandomFieldsWithValuesAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67* WrapperBase_1_HashRandomFieldsWithValuesAsync_mC1939C1A5AB2BB31AB6FD794D76DE1D3B67576AD_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t0DE7F118291FE734DDD51F3E9EBA99277B2FCF67*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(33 /* System.Threading.Tasks.Task`1<StackExchange.Redis.HashEntry[]> StackExchange.Redis.IDatabaseAsync::HashRandomFieldsWithValuesAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.HashEntry> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashScanAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int32,System.Int64,System.Int32,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperBase_1_HashScanAsync_mBC257039FEA29148BFCE4367FE50F9AAF24C7127_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_pattern, int32_t ___2_pageSize, int64_t ___3_cursor, int32_t ___4_pageOffset, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_pattern;
		int32_t L_4 = ___2_pageSize;
		int64_t L_5 = ___3_cursor;
		int32_t L_6 = ___4_pageOffset;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker6< RuntimeObject*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int64_t, int32_t, int32_t >::Invoke(34 /* System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.HashEntry> StackExchange.Redis.IDatabaseAsync::HashScanAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int32,System.Int64,System.Int32,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_HashSetAsync_m9A539B1ABA9A0F0F2CA1B534123927BF4CF362CD_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_value, int32_t ___3_when, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_value;
		int32_t L_5 = ___3_when;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t >::Invoke(36 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::HashSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashStringLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_HashStringLengthAsync_m6F4833B41B455A99ED9B51E5EB96F80E99E54474_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_hashField, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_hashField;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(37 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::HashStringLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.HashEntry[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WrapperBase_1_HashSetAsync_m5D45FC543AC7EC024A86100CEE90C052328962F4_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, HashEntryU5BU5D_tAC00468F467DF7E0DB4F9241C5B7487C53D4AEEC* ___1_hashFields, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		HashEntryU5BU5D_tAC00468F467DF7E0DB4F9241C5B7487C53D4AEEC* L_3 = ___1_hashFields;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = InterfaceFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, HashEntryU5BU5D_tAC00468F467DF7E0DB4F9241C5B7487C53D4AEEC*, int32_t >::Invoke(35 /* System.Threading.Tasks.Task StackExchange.Redis.IDatabaseAsync::HashSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.HashEntry[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HashValuesAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_HashValuesAsync_mCC4C3361FD835D15C0EE41C4B5ED3F06104B17F7_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(38 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::HashValuesAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HyperLogLogAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_HyperLogLogAddAsync_m1B0C09FBF756B77237F6F823FE48E25BF72A4EE0_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_values;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(40 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::HyperLogLogAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HyperLogLogAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_HyperLogLogAddAsync_m98C41FBAB60169684027A26910AAF5D8059CA79B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(39 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::HyperLogLogAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HyperLogLogLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_HyperLogLogLengthAsync_mED8FA22017D73B9E26668C3BEDC755B8A4AF84F2_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(41 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::HyperLogLogLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HyperLogLogLengthAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_HyperLogLogLengthAsync_mC29DAC71D72F0CBEF3C78E9B29BF22C9EC72FEFC_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2;
		L_2 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(42 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::HyperLogLogLengthAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HyperLogLogMergeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WrapperBase_1_HyperLogLogMergeAsync_mE770AE84FB34EB80A8FCCE8F9E33BD07094CC493_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_destination, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___1_sourceKeys, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_3 = ___1_sourceKeys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_4;
		L_4 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_5 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InterfaceFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(44 /* System.Threading.Tasks.Task StackExchange.Redis.IDatabaseAsync::HyperLogLogMergeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::HyperLogLogMergeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WrapperBase_1_HyperLogLogMergeAsync_mBA51AB00DDDA676B6A886D54201634F900A5608A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_destination, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_first, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___2_second, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_first;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_5 = ___2_second;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_6;
		L_6 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_7 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = InterfaceFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(43 /* System.Threading.Tasks.Task StackExchange.Redis.IDatabaseAsync::HyperLogLogMergeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Net.EndPoint> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::IdentifyEndpointAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t24596EBE3D2992A4C829F182DF294E6650425BF5* WrapperBase_1_IdentifyEndpointAsync_m9B7794747FD2830F6661231FE568F318BCE8FF24_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t24596EBE3D2992A4C829F182DF294E6650425BF5* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t24596EBE3D2992A4C829F182DF294E6650425BF5*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(45 /* System.Threading.Tasks.Task`1<System.Net.EndPoint> StackExchange.Redis.IDatabaseAsync::IdentifyEndpointAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Boolean StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::IsConnected(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrapperBase_1_IsConnected_m63ACF16ECD862130B722987FDD6C4744C2056187_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(0 /* System.Boolean StackExchange.Redis.IDatabaseAsync::IsConnected(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyCopyAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,System.Int32,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyCopyAsync_m50F312DF6F2210F597F9F8CD8FA21CF0D43915B6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_sourceKey, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destinationKey, int32_t ___2_destinationDatabase, bool ___3_replace, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_sourceKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_destinationKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_5 = ___2_destinationDatabase;
		bool L_6 = ___3_replace;
		int32_t L_7 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_8;
		L_8 = InterfaceFuncInvoker5< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t, bool, int32_t >::Invoke(46 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyCopyAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,System.Int32,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyDeleteAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_KeyDeleteAsync_m6F7394ECABEED6D0AEB0F722E8355459A6C85CEA_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2;
		L_2 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(48 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::KeyDeleteAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyDeleteAsync_m2FE96DC67832F4E929059F5814C7A3B5309DB8CA_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(47 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Byte[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyDumpAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t46575E75F710D631831E756B5DE20429700F6B95* WrapperBase_1_KeyDumpAsync_mA56571B8E91759BA53A5FB20B520A2D479AE2732_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t46575E75F710D631831E756B5DE20429700F6B95* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t46575E75F710D631831E756B5DE20429700F6B95*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(49 /* System.Threading.Tasks.Task`1<System.Byte[]> StackExchange.Redis.IDatabaseAsync::KeyDumpAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.String> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyEncodingAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* WrapperBase_1_KeyEncodingAsync_mF7E5AA2DB827F36B55CCE6EAA2540B459022D66D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(50 /* System.Threading.Tasks.Task`1<System.String> StackExchange.Redis.IDatabaseAsync::KeyEncodingAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyExistsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyExistsAsync_m820E3ADE2438EAB9F813BAA25CA9BED37C8538EB_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(51 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyExistsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyExistsAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_KeyExistsAsync_m012E7426CE2BF92D33287D603D22283460DE821C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2;
		L_2 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(52 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::KeyExistsAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyExpireAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.DateTime>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyExpireAsync_m17005FBD2A04146E5727B050110B6291A4E9769E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___1_expiry, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_3 = ___1_expiry;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC, int32_t >::Invoke(55 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyExpireAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.DateTime>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyExpireAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.DateTime>,StackExchange.Redis.ExpireWhen,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyExpireAsync_m4CE874E9D6343C1412114DFDEB9BDBD07DBC0C52_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___1_expiry, int32_t ___2_when, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_3 = ___1_expiry;
		int32_t L_4 = ___2_when;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC, int32_t, int32_t >::Invoke(56 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyExpireAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.DateTime>,StackExchange.Redis.ExpireWhen,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyExpireAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyExpireAsync_mBEF0422857863D6840AB089AF3718A782626661C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___1_expiry, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_3 = ___1_expiry;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, int32_t >::Invoke(53 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyExpireAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyExpireAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.ExpireWhen,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyExpireAsync_mDB36E67AD0F37B153DBB1E986F71450D77E6955B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___1_expiry, int32_t ___2_when, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_3 = ___1_expiry;
		int32_t L_4 = ___2_when;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, int32_t, int32_t >::Invoke(54 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyExpireAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.ExpireWhen,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyExpireTimeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* WrapperBase_1_KeyExpireTimeAsync_m5F29B5AAC56FB1BD46ED004212578C2B33BDFE4E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t65DD22766038CC419979FC66D2CFEF60381EE84B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(57 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.DateTime>> StackExchange.Redis.IDatabaseAsync::KeyExpireTimeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyFrequencyAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t67361845973F277EA4FC53B24E369BB025261C40* WrapperBase_1_KeyFrequencyAsync_mA86D57CB9FD72BB80A67B15F18F75262B252630F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t67361845973F277EA4FC53B24E369BB025261C40* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t67361845973F277EA4FC53B24E369BB025261C40*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(58 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>> StackExchange.Redis.IDatabaseAsync::KeyFrequencyAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.TimeSpan>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyIdleTimeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26* WrapperBase_1_KeyIdleTimeAsync_mE7BB0B2F3F402D57E7D49ABF324418A10D602D70_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(59 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.TimeSpan>> StackExchange.Redis.IDatabaseAsync::KeyIdleTimeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyMigrateAsync(StackExchange.Redis.RedisKey,System.Net.EndPoint,System.Int32,System.Int32,StackExchange.Redis.MigrateOptions,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WrapperBase_1_KeyMigrateAsync_m61672035A7C1227129B7DA2704C668034FC0BCB5_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___1_toServer, int32_t ___2_toDatabase, int32_t ___3_timeoutMilliseconds, int32_t ___4_migrateOptions, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_3 = ___1_toServer;
		int32_t L_4 = ___2_toDatabase;
		int32_t L_5 = ___3_timeoutMilliseconds;
		int32_t L_6 = ___4_migrateOptions;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = InterfaceFuncInvoker6< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564*, int32_t, int32_t, int32_t, int32_t >::Invoke(1 /* System.Threading.Tasks.Task StackExchange.Redis.IDatabaseAsync::KeyMigrateAsync(StackExchange.Redis.RedisKey,System.Net.EndPoint,System.Int32,System.Int32,StackExchange.Redis.MigrateOptions,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyMoveAsync(StackExchange.Redis.RedisKey,System.Int32,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyMoveAsync_m6F60BB4120C3EC53C31266B3E0A65994D2ACF8EA_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_database, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_database;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t, int32_t >::Invoke(60 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyMoveAsync(StackExchange.Redis.RedisKey,System.Int32,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyPersistAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyPersistAsync_m0DF4DBE51E61F624B67827E2BDBAA2D920A203E7_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(61 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyPersistAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisKey> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyRandomAsync(StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD50A57147A55159022E4DFAA73FD649AE8D7D8BD* WrapperBase_1_KeyRandomAsync_m86CAA48DCEE3ECE17E66E93A58A9D997ED58EB69_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_flags, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEDDB23821597074E97F9681BB779FF615F45B0A8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WrapperBase_1_KeyRandomAsync_m86CAA48DCEE3ECE17E66E93A58A9D997ED58EB69_RuntimeMethod_var)));
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyRefCountAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t67361845973F277EA4FC53B24E369BB025261C40* WrapperBase_1_KeyRefCountAsync_m70BC105220228AF5BFB7E58BB45DA2271020FFA6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t67361845973F277EA4FC53B24E369BB025261C40* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t67361845973F277EA4FC53B24E369BB025261C40*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(63 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>> StackExchange.Redis.IDatabaseAsync::KeyRefCountAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyRenameAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyRenameAsync_m6C0EC63F5A23647728FD8ACE5D937A2E71FE966C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_newKey, int32_t ___2_when, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_newKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_5 = ___2_when;
		int32_t L_6 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t, int32_t >::Invoke(64 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyRenameAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyRestoreAsync(StackExchange.Redis.RedisKey,System.Byte[],System.Nullable`1<System.TimeSpan>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WrapperBase_1_KeyRestoreAsync_mB2AD427C19A3F51C63F2E4A290331A1F411BE3CA_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_value, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___2_expiry, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_value;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4 = ___2_expiry;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InterfaceFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, int32_t >::Invoke(65 /* System.Threading.Tasks.Task StackExchange.Redis.IDatabaseAsync::KeyRestoreAsync(StackExchange.Redis.RedisKey,System.Byte[],System.Nullable`1<System.TimeSpan>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.TimeSpan>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyTimeToLiveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26* WrapperBase_1_KeyTimeToLiveAsync_m6EAFD8B5583C98DA220E6B881D36754399123816_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tA1DBD76FD4706EB55BAD585C6550FDD9FB4A4F26*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(66 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.TimeSpan>> StackExchange.Redis.IDatabaseAsync::KeyTimeToLiveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisType> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyTypeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC6E018B5808073BBD05E87E5D185B79C49AB92D4* WrapperBase_1_KeyTypeAsync_mD8399D880529D54DAA64A26EDD4DF75AEF53F2D8_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tC6E018B5808073BBD05E87E5D185B79C49AB92D4* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tC6E018B5808073BBD05E87E5D185B79C49AB92D4*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(69 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisType> StackExchange.Redis.IDatabaseAsync::KeyTypeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListGetByIndexAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_ListGetByIndexAsync_m3D27F5C1FB01EBEDA6727C0076DA314AA958102C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_index, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_index;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(70 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::ListGetByIndexAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListInsertAfterAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListInsertAfterAsync_m1ADC75704CA96B5720E0517B5EFCF9209F9F2B94_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_pivot, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_pivot;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(71 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListInsertAfterAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListInsertBeforeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListInsertBeforeAsync_mF88F3085BE08DB037D897BCCB2AECDFD4B45EB51_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_pivot, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_pivot;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(72 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListInsertBeforeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListLeftPopAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_ListLeftPopAsync_mF7FB44DD2D492F36164490D662B8CD159C321BE7_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(73 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::ListLeftPopAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListLeftPopAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_ListLeftPopAsync_mA969603804A6B8761D93BE3716BA8B4A07F7D34A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(74 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::ListLeftPopAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.ListPopResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListLeftPopAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97* WrapperBase_1_ListLeftPopAsync_m3AFDCFE0C8649379C60FC311CEB4BB1B8CB5F534_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2;
		L_2 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int64_t, int32_t >::Invoke(75 /* System.Threading.Tasks.Task`1<StackExchange.Redis.ListPopResult> StackExchange.Redis.IDatabaseAsync::ListLeftPopAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListPositionAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListPositionAsync_m15DE3099D57301F053CE9561A88F6B4660479F60_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_element, int64_t ___2_rank, int64_t ___3_maxLength, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_element;
		int64_t L_4 = ___2_rank;
		int64_t L_5 = ___3_maxLength;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, int64_t, int32_t >::Invoke(76 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListPositionAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListPositionsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t434FC9BA8F865AC108BE8480269F42E9811D7924* WrapperBase_1_ListPositionsAsync_m805A125018C31FBABE8EA18E9FFB746A2793AA6E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_element, int64_t ___2_count, int64_t ___3_rank, int64_t ___4_maxLength, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_element;
		int64_t L_4 = ___2_count;
		int64_t L_5 = ___3_rank;
		int64_t L_6 = ___4_maxLength;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t434FC9BA8F865AC108BE8480269F42E9811D7924* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_t434FC9BA8F865AC108BE8480269F42E9811D7924*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, int64_t, int64_t, int32_t >::Invoke(77 /* System.Threading.Tasks.Task`1<System.Int64[]> StackExchange.Redis.IDatabaseAsync::ListPositionsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListLeftPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListLeftPushAsync_m020E22B50E9A697A8B0FFBA819193F768342CAD6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_values;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(80 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListLeftPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListLeftPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListLeftPushAsync_m2B3A0CDA68FCDEF7F3778398C8BF1267461627C6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_values, int32_t ___2_when, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_values;
		int32_t L_4 = ___2_when;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t, int32_t >::Invoke(79 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListLeftPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListLeftPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListLeftPushAsync_mB7B331BCFB83E2B882F927A0550E25443CACD226_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_when, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_when;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t >::Invoke(78 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListLeftPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListLengthAsync_mFBFC4F2D118BDD1311B1CF2CD23FF9B589586702_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(81 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListMoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.ListSide,StackExchange.Redis.ListSide,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_ListMoveAsync_m5DF919B142CA01B19108A586D0F6FF41838A354F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_sourceKey, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destinationKey, int32_t ___2_sourceSide, int32_t ___3_destinationSide, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_sourceKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_destinationKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_5 = ___2_sourceSide;
		int32_t L_6 = ___3_destinationSide;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t, int32_t, int32_t >::Invoke(82 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::ListMoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.ListSide,StackExchange.Redis.ListSide,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6, (int32_t)0);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRangeAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_ListRangeAsync_mAF0FFF023BBC2C4680DCEABC92CB2D299AA3F6F5_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_start, int64_t ___2_stop, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_start;
		int64_t L_4 = ___2_stop;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t >::Invoke(83 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::ListRangeAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListRemoveAsync_m4495006EBB35DF63047CA6C7C4E00254124432A1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int64_t ___2_count, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int64_t L_4 = ___2_count;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, int32_t >::Invoke(84 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRightPopAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_ListRightPopAsync_mC2B164F98DC2CC83A52A6BB7F099A47F2CC5ABAB_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(85 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::ListRightPopAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRightPopAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_ListRightPopAsync_mA042C09C0B9B8C4F6EB788D32B51E6CF1A982082_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(86 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::ListRightPopAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.ListPopResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRightPopAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97* WrapperBase_1_ListRightPopAsync_mAE697186E2E0203758AA07ED3F677BB91AA08ABD_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2;
		L_2 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tF2CDF1E0D5905C82BE7CBCB1736A536CE2526D97*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int64_t, int32_t >::Invoke(87 /* System.Threading.Tasks.Task`1<StackExchange.Redis.ListPopResult> StackExchange.Redis.IDatabaseAsync::ListRightPopAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRightPopLeftPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_ListRightPopLeftPushAsync_m265797C99306F0F6468853525EC8921A78A50393_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_source, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destination, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_source;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_5 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_6;
		L_6 = InterfaceFuncInvoker3< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(88 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::ListRightPopLeftPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRightPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListRightPushAsync_m75D32F987DBFBE7B146FD86626BF2CFDDE60B5A9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_values;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(91 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListRightPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRightPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListRightPushAsync_m333A456F62A74CD84C7899BA434FD8AD6D7A8FC4_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_values, int32_t ___2_when, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_values;
		int32_t L_4 = ___2_when;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t, int32_t >::Invoke(90 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListRightPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListRightPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_ListRightPushAsync_m615939DCD3796AA90BB48B701E8D2F68CD0D6E03_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_when, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_when;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t >::Invoke(89 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::ListRightPushAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListSetByIndexAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WrapperBase_1_ListSetByIndexAsync_m94B450D28863F719006CD8C85FC08921F28F36E7_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_index, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_index;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InterfaceFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(92 /* System.Threading.Tasks.Task StackExchange.Redis.IDatabaseAsync::ListSetByIndexAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ListTrimAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WrapperBase_1_ListTrimAsync_m8AF12DE0D0151390CA8B458F573F6714366D4A31_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_start, int64_t ___2_stop, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_start;
		int64_t L_4 = ___2_stop;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InterfaceFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t >::Invoke(93 /* System.Threading.Tasks.Task StackExchange.Redis.IDatabaseAsync::ListTrimAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::LockExtendAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.TimeSpan,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_LockExtendAsync_m1D5AB267E38DEA86969E904A0B2F02C2056102B6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___2_expiry, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = ___2_expiry;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, int32_t >::Invoke(94 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::LockExtendAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.TimeSpan,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::LockQueryAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_LockQueryAsync_m0CFDA09DA2AE2A975169025B5D34E89CDA988184_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(95 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::LockQueryAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::LockReleaseAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_LockReleaseAsync_m4A39DC89B4D1C5202EDCF6C0B9B3036BEF4C67F0_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(96 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::LockReleaseAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::LockTakeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.TimeSpan,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_LockTakeAsync_m877CD0117DE399B15FA66D9F1B2FF757EA1461A6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___2_expiry, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = ___2_expiry;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, int32_t >::Invoke(97 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::LockTakeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.TimeSpan,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.String> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringLongestCommonSubsequenceAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* WrapperBase_1_StringLongestCommonSubsequenceAsync_m1A22FB41A797F54AF1B10F3038C0E90CA4AFD8A1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_first, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_second, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_first;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_second;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_5 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_6;
		L_6 = InterfaceFuncInvoker3< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(215 /* System.Threading.Tasks.Task`1<System.String> StackExchange.Redis.IDatabaseAsync::StringLongestCommonSubsequenceAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringLongestCommonSubsequenceLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringLongestCommonSubsequenceLengthAsync_m61654EDEC0F307E80D36B7E5A97F2D8555FE9C33_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_first, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_second, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_first;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_second;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_5 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(216 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringLongestCommonSubsequenceLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.LCSMatchResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringLongestCommonSubsequenceWithMatchesAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t04D60C8C2133296DE05F62A8A0BC658D40F15929* WrapperBase_1_StringLongestCommonSubsequenceWithMatchesAsync_mD69ACB215D6D1620D285BAA07C954791AB02699A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_first, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_second, int64_t ___2_minLength, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_first;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_second;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_5 = ___2_minLength;
		int32_t L_6 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t04D60C8C2133296DE05F62A8A0BC658D40F15929* L_7;
		L_7 = InterfaceFuncInvoker4< Task_1_t04D60C8C2133296DE05F62A8A0BC658D40F15929*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(217 /* System.Threading.Tasks.Task`1<StackExchange.Redis.LCSMatchResult> StackExchange.Redis.IDatabaseAsync::StringLongestCommonSubsequenceWithMatchesAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::PublishAsync(StackExchange.Redis.RedisChannel,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_PublishAsync_m9E2AF3B268767A53BAE6B44411AAD8B90755E135_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 ___0_channel, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_message, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 L_1 = ___0_channel;
		RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 L_2;
		L_2 = ((  RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 103)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 103));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_message;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(98 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::PublishAsync(StackExchange.Redis.RedisChannel,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ExecuteAsync(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* WrapperBase_1_ExecuteAsync_m194A804E49F673F4CE7C8ACCFB330E13F46E607B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, String_t* ___0_command, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		String_t* L_1 = ___0_command;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 105)))(__this, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 105));
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* L_4;
		L_4 = InterfaceFuncInvoker3< Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744*, String_t*, RuntimeObject*, int32_t >::Invoke(100 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.IDatabaseAsync::ExecuteAsync(System.String,System.Collections.Generic.ICollection`1<System.Object>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, (int32_t)0);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ExecuteAsync(System.String,System.Collections.Generic.ICollection`1<System.Object>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* WrapperBase_1_ExecuteAsync_m0C68B19C57FA393AC78ABF08FCD27C2F62160AEF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, String_t* ___0_command, RuntimeObject* ___1_args, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		String_t* L_1 = ___0_command;
		RuntimeObject* L_2 = ___1_args;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 105)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 105));
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744*, String_t*, RuntimeObject*, int32_t >::Invoke(100 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.IDatabaseAsync::ExecuteAsync(System.String,System.Collections.Generic.ICollection`1<System.Object>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ScriptEvaluateAsync(System.Byte[],StackExchange.Redis.RedisKey[],StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* WrapperBase_1_ScriptEvaluateAsync_mA93B391308F857C66A6428EE8864F9808AB8B1D9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_hash, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___1_keys, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___2_values, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_hash;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2 = ___1_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_3;
		L_3 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_4 = ___2_values;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(102 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.IDatabaseAsync::ScriptEvaluateAsync(System.Byte[],StackExchange.Redis.RedisKey[],StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ScriptEvaluateAsync(System.String,StackExchange.Redis.RedisKey[],StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* WrapperBase_1_ScriptEvaluateAsync_m7353E2BC6CBC11BEA76FC28C9A072A72A57A3CC8_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, String_t* ___0_script, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___1_keys, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___2_values, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		String_t* L_1 = ___0_script;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2 = ___1_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_3;
		L_3 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_4 = ___2_values;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744*, String_t*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(101 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.IDatabaseAsync::ScriptEvaluateAsync(System.String,StackExchange.Redis.RedisKey[],StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ScriptEvaluateAsync(StackExchange.Redis.LuaScript,System.Object,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* WrapperBase_1_ScriptEvaluateAsync_m66194F282F227E66752D313CB26EB95504F7DC82_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, LuaScript_tD1333E0E2F7DD94B81E0E9FFD216F8E105B258F5* ___0_script, RuntimeObject* ___1_parameters, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LuaScript_tD1333E0E2F7DD94B81E0E9FFD216F8E105B258F5* L_0 = ___0_script;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_2 = ___1_parameters;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 109)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 109));
		il2cpp_codegen_runtime_class_init_inline(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = RedisKey_op_Implicit_mB642CEC34D5418D76B7E1A038180E0195C71D5B9(L_3, NULL);
		Nullable_1_t0438946BB4B093C47FB862105341AB14FDB20027 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418_RuntimeMethod_var);
		int32_t L_6 = ___2_flags;
		NullCheck(L_0);
		Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* L_7;
		L_7 = LuaScript_EvaluateAsync_m1C6651D6D65B595C0F731E57B4EB7C7EF00DAE02(L_0, (RuntimeObject*)L_1, L_2, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ScriptEvaluateAsync(StackExchange.Redis.LoadedLuaScript,System.Object,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* WrapperBase_1_ScriptEvaluateAsync_m5269F8F915AD2030441C3BF2DAF75E574E0EF974_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, LoadedLuaScript_t5AE35B6B8B77E229096D7137BAB71EBA1F103323* ___0_script, RuntimeObject* ___1_parameters, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LoadedLuaScript_t5AE35B6B8B77E229096D7137BAB71EBA1F103323* L_0 = ___0_script;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_2 = ___1_parameters;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 109)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 109));
		il2cpp_codegen_runtime_class_init_inline(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = RedisKey_op_Implicit_mB642CEC34D5418D76B7E1A038180E0195C71D5B9(L_3, NULL);
		Nullable_1_t0438946BB4B093C47FB862105341AB14FDB20027 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m59D524B48BA527696F7AD512BD7358F7F5E0F418_RuntimeMethod_var);
		int32_t L_6 = ___2_flags;
		NullCheck(L_0);
		Task_1_t8AC1388E4C82B09E8F9A2B1CFDEE0A71F5FB6744* L_7;
		L_7 = LoadedLuaScript_EvaluateAsync_m6F6E785231C05AE5F25BFA26ED6DAA9E9FA8BB38(L_0, (RuntimeObject*)L_1, L_2, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SetAddAsync_m60852D510C660EA9FABD85013CBB876EF0136C0D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_values;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(106 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SetAddAsync_mC8989965A5C68814E4B47B267D9A4D37674D9C64_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(105 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetCombineAndStoreAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SetCombineAndStoreAsync_m79715E34D2A208D110E72F8593D9EEBD07143151_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destination, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___2_keys, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2 = ___1_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3;
		L_3 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_4 = ___2_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_5;
		L_5 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_6 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, int32_t, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(110 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SetCombineAndStoreAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetCombineAndStoreAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SetCombineAndStoreAsync_mA8C0DAB3FBFFBEF6729484B84C202A7C78695986_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destination, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___2_first, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___3_second, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2 = ___1_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3;
		L_3 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4 = ___2_first;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_5;
		L_5 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_6 = ___3_second;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_7;
		L_7 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_8 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_9;
		L_9 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, int32_t, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(109 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SetCombineAndStoreAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_5, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetCombineAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SetCombineAsync_m279A66E76B26951ED77D2BF19F25E5D04A2D3A9F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___1_keys, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2 = ___1_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_3;
		L_3 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, int32_t, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(108 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SetCombineAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetCombineAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SetCombineAsync_mCC27E102B394AFFE5D7B347B626D2FD3600A5ACF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_first, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___2_second, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2 = ___1_first;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3;
		L_3 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4 = ___2_second;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_5;
		L_5 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_6 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_7;
		L_7 = InterfaceFuncInvoker4< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, int32_t, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(107 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SetCombineAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetContainsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SetContainsAsync_mDB842268FEE16E183481F3594609F11087C3FD8B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(111 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SetContainsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetContainsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t69C91E4C5122CE3A171C7090781C6B14BE5D63DA* WrapperBase_1_SetContainsAsync_m7ADA740663BD25B7F66F888A824A2A896DCCB637_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_values;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t69C91E4C5122CE3A171C7090781C6B14BE5D63DA* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t69C91E4C5122CE3A171C7090781C6B14BE5D63DA*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(112 /* System.Threading.Tasks.Task`1<System.Boolean[]> StackExchange.Redis.IDatabaseAsync::SetContainsAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetIntersectionLengthAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SetIntersectionLengthAsync_m224C4E7550251BBD3B1DD46A0E09A8CDF00D9BCF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int64_t ___1_limit, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		int64_t L_2 = ___1_limit;
		int32_t L_3 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int64_t, int32_t >::Invoke(113 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SetIntersectionLengthAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SetLengthAsync_mB56F6E7FF02C997E90248B4DAEB542266286B551_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(114 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SetLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetMembersAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SetMembersAsync_mAEFF99E4731A4F28E0332455F91619E4593276FF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(115 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SetMembersAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetMoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SetMoveAsync_mA0CDE99C0B48F346F52BB14E238C0A5ACEF7F334_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_source, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destination, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_source;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_5 = ___2_value;
		int32_t L_6 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(116 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SetMoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetPopAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_SetPopAsync_m85D1A3C340AE4F2FE13963D3F80392F5295EBC15_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(117 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::SetPopAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetPopAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SetPopAsync_m93EC558B9AAC2DFDAE1B979BF74A1C2E9B5B4672_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(118 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SetPopAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetRandomMemberAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_SetRandomMemberAsync_m63C004A84F9DD66B60DC758E89A8F9F8DB7C8334_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(119 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::SetRandomMemberAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetRandomMembersAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SetRandomMembersAsync_m3628BB93D3FE3A11276AB4BF091BC0CA7D3A4570_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(120 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SetRandomMembersAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SetRemoveAsync_mFD1CF4F9DECDBC4116D65EA40DA7DEF8820F51BC_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_values;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(122 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SetRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetScanAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int32,System.Int64,System.Int32,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperBase_1_SetScanAsync_m750FCC791F5908FBDFEDD24E58641BA91B764A0C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_pattern, int32_t ___2_pageSize, int64_t ___3_cursor, int32_t ___4_pageOffset, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_pattern;
		int32_t L_4 = ___2_pageSize;
		int64_t L_5 = ___3_cursor;
		int32_t L_6 = ___4_pageOffset;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker6< RuntimeObject*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int64_t, int32_t, int32_t >::Invoke(123 /* System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::SetScanAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int32,System.Int64,System.Int32,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SetRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SetRemoveAsync_mE06C6337FEF6115877249E7FCAA788CEBCAECBD3_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(121 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SetRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortAndStoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.SortType,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortAndStoreAsync_m29CE0D3CEA362A425ACF762FED6985A973D2CB41_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_destination, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_key, int64_t ___2_skip, int64_t ___3_take, int32_t ___4_order, int32_t ___5_sortType, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___6_by, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___7_get, int32_t ___8_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_5 = ___2_skip;
		int64_t L_6 = ___3_take;
		int32_t L_7 = ___4_order;
		int32_t L_8 = ___5_sortType;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_9 = ___6_by;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_10;
		L_10 = ((  RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 129)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 129));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_11 = ___7_get;
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_12;
		L_12 = ((  RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 130)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 130));
		int32_t L_13 = ___8_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_14;
		L_14 = InterfaceFuncInvoker9< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t, int32_t, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(125 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortAndStoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.SortType,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6, L_7, L_8, L_10, L_12, L_13);
		return L_14;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.SortType,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SortAsync_m40941FFFF25111F6994BDB74550C8D384BA3B12F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_skip, int64_t ___2_take, int32_t ___3_order, int32_t ___4_sortType, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___5_by, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___6_get, int32_t ___7_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_skip;
		int64_t L_4 = ___2_take;
		int32_t L_5 = ___3_order;
		int32_t L_6 = ___4_sortType;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_7 = ___5_by;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_8;
		L_8 = ((  RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 129)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 129));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_9 = ___6_get;
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_10;
		L_10 = ((  RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 130)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 130));
		int32_t L_11 = ___7_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_12;
		L_12 = InterfaceFuncInvoker8< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t, int32_t, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(124 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SortAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.SortType,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_8, L_10, L_11);
		return L_12;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.SortedSetEntry[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetAddAsync_m36454A0124ED0568C2568CBB4923295F6E4954BA_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* L_3 = ___1_values;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC*, int32_t >::Invoke(129 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.SortedSetEntry[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.SortedSetEntry[],StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetAddAsync_m9B0016626606B4A24DDB6CF38E1C8A85CE61392C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* ___1_values, int32_t ___2_when, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* L_3 = ___1_values;
		int32_t L_4 = ___2_when;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC*, int32_t, int32_t >::Invoke(130 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.SortedSetEntry[],StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.SortedSetEntry[],StackExchange.Redis.SortedSetWhen,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetAddAsync_m2735D7B017C94592895471ACDD86F76824E1F5A5_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* ___1_values, int32_t ___2_updateWhen, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* L_3 = ___1_values;
		int32_t L_4 = ___2_updateWhen;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC*, int32_t, int32_t >::Invoke(131 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.SortedSetEntry[],StackExchange.Redis.SortedSetWhen,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SortedSetAddAsync_mAE0641A5B3616720BC534C1C99CEC90E0C4AA64D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, double ___2_score, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		double L_4 = ___2_score;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t >::Invoke(126 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SortedSetAddAsync_m80B6DAA2A27F4D06ED6650152835C23FE91F4C79_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, double ___2_score, int32_t ___3_when, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		double L_4 = ___2_score;
		int32_t L_5 = ___3_when;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t, int32_t >::Invoke(127 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.SortedSetWhen,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SortedSetAddAsync_m9BE84105435CEC917A6F8E987806A7FE7CD34DC8_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, double ___2_score, int32_t ___3_updateWhen, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		double L_4 = ___2_score;
		int32_t L_5 = ___3_updateWhen;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t, int32_t >::Invoke(128 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SortedSetAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.SortedSetWhen,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetCombineAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey[],System.Double[],StackExchange.Redis.Aggregate,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SortedSetCombineAsync_m29BFCB7D843DB1AFD79BA88DADBB0659265AF06B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___1_keys, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_weights, int32_t ___3_aggregate, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2 = ___1_keys;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___2_weights;
		int32_t L_4 = ___3_aggregate;
		int32_t L_5 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_6;
		L_6 = InterfaceFuncInvoker5< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, int32_t, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, int32_t, int32_t >::Invoke(132 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SortedSetCombineAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey[],System.Double[],StackExchange.Redis.Aggregate,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetCombineWithScoresAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey[],System.Double[],StackExchange.Redis.Aggregate,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* WrapperBase_1_SortedSetCombineWithScoresAsync_m517F9536DADCDC1FF5B0F539A566FB1009ED599B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___1_keys, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___2_weights, int32_t ___3_aggregate, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2 = ___1_keys;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___2_weights;
		int32_t L_4 = ___3_aggregate;
		int32_t L_5 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* L_6;
		L_6 = InterfaceFuncInvoker5< Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2*, int32_t, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, int32_t, int32_t >::Invoke(133 /* System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.IDatabaseAsync::SortedSetCombineWithScoresAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey[],System.Double[],StackExchange.Redis.Aggregate,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetCombineAndStoreAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey[],System.Double[],StackExchange.Redis.Aggregate,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetCombineAndStoreAsync_mD2FDE7C5C5290868FD68FCE58C146A3FC9BF2EE4_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destination, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___2_keys, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___3_weights, int32_t ___4_aggregate, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2 = ___1_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3;
		L_3 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_4 = ___2_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_5;
		L_5 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = ___3_weights;
		int32_t L_7 = ___4_aggregate;
		int32_t L_8 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_9;
		L_9 = InterfaceFuncInvoker6< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, int32_t, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, int32_t, int32_t >::Invoke(135 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetCombineAndStoreAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey[],System.Double[],StackExchange.Redis.Aggregate,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetCombineAndStoreAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.Aggregate,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetCombineAndStoreAsync_m4EE58576F8271BF561BD1A3ABEA751EA5BCA5BD9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destination, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___2_first, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___3_second, int32_t ___4_aggregate, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2 = ___1_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3;
		L_3 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4 = ___2_first;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_5;
		L_5 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_6 = ___3_second;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_7;
		L_7 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_8 = ___4_aggregate;
		int32_t L_9 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_10;
		L_10 = InterfaceFuncInvoker6< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, int32_t, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t, int32_t >::Invoke(134 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetCombineAndStoreAsync(StackExchange.Redis.SetOperation,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.Aggregate,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_5, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetDecrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* WrapperBase_1_SortedSetDecrementAsync_m0588690E3F5A2B647B479B2EAAB3A01B7CB56677_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, double ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		double L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t >::Invoke(136 /* System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.IDatabaseAsync::SortedSetDecrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetIncrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* WrapperBase_1_SortedSetIncrementAsync_mD9476EDB379510C06B6D0431D1254853328AECBE_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, double ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		double L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t >::Invoke(137 /* System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.IDatabaseAsync::SortedSetIncrementAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetIntersectionLengthAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetIntersectionLengthAsync_m10FF901283C11C1B8AE81BF5948645F5C3E69EE7_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int64_t ___1_limit, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		int64_t L_2 = ___1_limit;
		int32_t L_3 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int64_t, int32_t >::Invoke(138 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetIntersectionLengthAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetLengthAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.Exclude,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetLengthAsync_mC94C8097AD7DC3C3105D149388ACDBB83308308A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_min, double ___2_max, int32_t ___3_exclude, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_min;
		double L_4 = ___2_max;
		int32_t L_5 = ___3_exclude;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, double, int32_t, int32_t >::Invoke(139 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetLengthAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.Exclude,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetLengthByValueAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.Exclude,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetLengthByValueAsync_mC7895716C86C04DC69675B076462E8951EAE4956_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_min, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_max, int32_t ___3_exclude, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_min;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_max;
		int32_t L_5 = ___3_exclude;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t >::Invoke(140 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetLengthByValueAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.Exclude,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRandomMemberAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_SortedSetRandomMemberAsync_m6D676AF2CA3BD6455024C058F0C00CAD5F2A6AD5_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(141 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::SortedSetRandomMemberAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRandomMembersAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SortedSetRandomMembersAsync_m257A2F2855D7339B13962294FAEAD77D970EE38B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(142 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SortedSetRandomMembersAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRandomMembersWithScoresAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* WrapperBase_1_SortedSetRandomMembersWithScoresAsync_m714A8C280AA56AF680B9CA0B802D4B7D9D5151E3_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(143 /* System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.IDatabaseAsync::SortedSetRandomMembersWithScoresAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRangeAndStoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.SortedSetOrder,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Nullable`1<System.Int64>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetRangeAndStoreAsync_m670C0EAD3D78B8C39AC321B554F31765587B589D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_sourceKey, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destinationKey, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_start, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___3_stop, int32_t ___4_sortedSetOrder, int32_t ___5_exclude, int32_t ___6_order, int64_t ___7_skip, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___8_take, int32_t ___9_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_sourceKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___1_destinationKey;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_5 = ___2_start;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_6 = ___3_stop;
		int32_t L_7 = ___4_sortedSetOrder;
		int32_t L_8 = ___5_exclude;
		int32_t L_9 = ___6_order;
		int64_t L_10 = ___7_skip;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_11 = ___8_take;
		int32_t L_12 = ___9_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_13;
		L_13 = InterfaceFuncInvoker10< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t, int32_t, int64_t, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, int32_t >::Invoke(145 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetRangeAndStoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.SortedSetOrder,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Nullable`1<System.Int64>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRangeByRankAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SortedSetRangeByRankAsync_m7C12232E81FB98D568496421A9B36227D8F75754_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_start, int64_t ___2_stop, int32_t ___3_order, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_start;
		int64_t L_4 = ___2_stop;
		int32_t L_5 = ___3_order;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t, int32_t >::Invoke(144 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SortedSetRangeByRankAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRangeByRankWithScoresAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* WrapperBase_1_SortedSetRangeByRankWithScoresAsync_m8553E706C02B3F1DD0D78ACABF0534B3731378C0_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_start, int64_t ___2_stop, int32_t ___3_order, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_start;
		int64_t L_4 = ___2_stop;
		int32_t L_5 = ___3_order;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t, int32_t >::Invoke(146 /* System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.IDatabaseAsync::SortedSetRangeByRankWithScoresAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRangeByScoreAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SortedSetRangeByScoreAsync_mA04CCDDA5CE2A2BF0E66FCC7B5D4D0CE3AA9250F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_start, double ___2_stop, int32_t ___3_exclude, int32_t ___4_order, int64_t ___5_skip, int64_t ___6_take, int32_t ___7_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_start;
		double L_4 = ___2_stop;
		int32_t L_5 = ___3_exclude;
		int32_t L_6 = ___4_order;
		int64_t L_7 = ___5_skip;
		int64_t L_8 = ___6_take;
		int32_t L_9 = ___7_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_10;
		L_10 = InterfaceFuncInvoker8< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, double, int32_t, int32_t, int64_t, int64_t, int32_t >::Invoke(147 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SortedSetRangeByScoreAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRangeByScoreWithScoresAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* WrapperBase_1_SortedSetRangeByScoreWithScoresAsync_m5F9616BB4F90CDC2AE6CB7AC4B69C48ED3444198_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_start, double ___2_stop, int32_t ___3_exclude, int32_t ___4_order, int64_t ___5_skip, int64_t ___6_take, int32_t ___7_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_start;
		double L_4 = ___2_stop;
		int32_t L_5 = ___3_exclude;
		int32_t L_6 = ___4_order;
		int64_t L_7 = ___5_skip;
		int64_t L_8 = ___6_take;
		int32_t L_9 = ___7_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* L_10;
		L_10 = InterfaceFuncInvoker8< Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, double, int32_t, int32_t, int64_t, int64_t, int32_t >::Invoke(148 /* System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.IDatabaseAsync::SortedSetRangeByScoreWithScoresAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRangeByValueAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.Exclude,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SortedSetRangeByValueAsync_m53184B29F7A1E77F43BD2FF0FD6B1491D4EAF6A0_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_min, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_max, int32_t ___3_exclude, int64_t ___4_skip, int64_t ___5_take, int32_t ___6_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_min;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_max;
		int32_t L_5 = ___3_exclude;
		int64_t L_6 = ___4_skip;
		int64_t L_7 = ___5_take;
		int32_t L_8 = ___6_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_9;
		L_9 = InterfaceFuncInvoker8< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t, int64_t, int64_t, int32_t >::Invoke(150 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SortedSetRangeByValueAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, (int32_t)0, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRangeByValueAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_SortedSetRangeByValueAsync_m6534BCE5A8CFA259DEE2C0D4255E02EDF534FE02_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_min, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_max, int32_t ___3_exclude, int32_t ___4_order, int64_t ___5_skip, int64_t ___6_take, int32_t ___7_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_min;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_max;
		int32_t L_5 = ___3_exclude;
		int32_t L_6 = ___4_order;
		int64_t L_7 = ___5_skip;
		int64_t L_8 = ___6_take;
		int32_t L_9 = ___7_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_10;
		L_10 = InterfaceFuncInvoker8< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t, int64_t, int64_t, int32_t >::Invoke(150 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::SortedSetRangeByValueAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.Exclude,StackExchange.Redis.Order,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRankAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t67361845973F277EA4FC53B24E369BB025261C40* WrapperBase_1_SortedSetRankAsync_m1A2ACF39F3DE63D854FDCE45261C5D01AAB92836_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, int32_t ___2_order, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		int32_t L_4 = ___2_order;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t67361845973F277EA4FC53B24E369BB025261C40* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t67361845973F277EA4FC53B24E369BB025261C40*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t >::Invoke(151 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.Int64>> StackExchange.Redis.IDatabaseAsync::SortedSetRankAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetRemoveAsync_m25A75C2752F45B7D7527C912262578BD1847F091_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_members, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_members;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(153 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SortedSetRemoveAsync_mB85AA91FADC5BA5086184BDD836ED9328016D98B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(152 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SortedSetRemoveAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRemoveRangeByRankAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetRemoveRangeByRankAsync_mDE70995A4EA748D62215205DB5F4469894F403B7_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_start, int64_t ___2_stop, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_start;
		int64_t L_4 = ___2_stop;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t >::Invoke(154 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetRemoveRangeByRankAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRemoveRangeByScoreAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.Exclude,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetRemoveRangeByScoreAsync_m57DF6BE98B256E96EA57629A2C8C61440C5A7581_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_start, double ___2_stop, int32_t ___3_exclude, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_start;
		double L_4 = ___2_stop;
		int32_t L_5 = ___3_exclude;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, double, int32_t, int32_t >::Invoke(155 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetRemoveRangeByScoreAsync(StackExchange.Redis.RedisKey,System.Double,System.Double,StackExchange.Redis.Exclude,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetRemoveRangeByValueAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.Exclude,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetRemoveRangeByValueAsync_mDFB753E5E0B82725997C57052E6040DD1630E4AC_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_min, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_max, int32_t ___3_exclude, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_min;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_max;
		int32_t L_5 = ___3_exclude;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int32_t >::Invoke(156 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetRemoveRangeByValueAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.Exclude,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetScoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* WrapperBase_1_SortedSetScoreAsync_m43F4D89AE2A8E91492F5FB22A4D43136E9F6FA32_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tB943B576D2304CD76D3E20C67231C192B2DD0C41*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(158 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>> StackExchange.Redis.IDatabaseAsync::SortedSetScoreAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetScoresAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD65206C3170424CC02CBB0234487B699A87160D8* WrapperBase_1_SortedSetScoresAsync_mFE4349C3EAE9B4FC927316735B093553E766F103_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_members, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_members;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tD65206C3170424CC02CBB0234487B699A87160D8* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tD65206C3170424CC02CBB0234487B699A87160D8*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(159 /* System.Threading.Tasks.Task`1<System.Nullable`1<System.Double>[]> StackExchange.Redis.IDatabaseAsync::SortedSetScoresAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.SortedSetEntry> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetScanAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int32,System.Int64,System.Int32,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperBase_1_SortedSetScanAsync_mAB90A72692DCB6E4352D9B6644FC36E8B009CADF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_pattern, int32_t ___2_pageSize, int64_t ___3_cursor, int32_t ___4_pageOffset, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_pattern;
		int32_t L_4 = ___2_pageSize;
		int64_t L_5 = ___3_cursor;
		int32_t L_6 = ___4_pageOffset;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker6< RuntimeObject*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, int64_t, int32_t, int32_t >::Invoke(157 /* System.Collections.Generic.IAsyncEnumerable`1<StackExchange.Redis.SortedSetEntry> StackExchange.Redis.IDatabaseAsync::SortedSetScanAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int32,System.Int64,System.Int32,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetUpdateAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.SortedSetEntry[],StackExchange.Redis.SortedSetWhen,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_SortedSetUpdateAsync_m36AA90B284E74FF1FED3C9A5FB690DA493CCF447_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* ___1_values, int32_t ___2_updateWhen, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC* L_3 = ___1_values;
		int32_t L_4 = ___2_updateWhen;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, SortedSetEntryU5BU5D_tF587EE4BDA0201C8A5F7BC937B3A7A4CACC7BCDC*, int32_t, int32_t >::Invoke(161 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::SortedSetUpdateAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.SortedSetEntry[],StackExchange.Redis.SortedSetWhen,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetUpdateAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.SortedSetWhen,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_SortedSetUpdateAsync_m278C18345C04C07169860DE4DD33B29BB1F2474D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_member, double ___2_score, int32_t ___3_updateWhen, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_member;
		double L_4 = ___2_score;
		int32_t L_5 = ___3_updateWhen;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, double, int32_t, int32_t >::Invoke(160 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::SortedSetUpdateAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Double,StackExchange.Redis.SortedSetWhen,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.SortedSetEntry>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetPopAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB96068856E8A9D1250EF5844E57B7C5F4582D3BA* WrapperBase_1_SortedSetPopAsync_mB566562A7A8A4A12969E5211FBF4324FB8DD8AA9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_order, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_order;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tB96068856E8A9D1250EF5844E57B7C5F4582D3BA* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tB96068856E8A9D1250EF5844E57B7C5F4582D3BA*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t, int32_t >::Invoke(162 /* System.Threading.Tasks.Task`1<System.Nullable`1<StackExchange.Redis.SortedSetEntry>> StackExchange.Redis.IDatabaseAsync::SortedSetPopAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetPopAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* WrapperBase_1_SortedSetPopAsync_m7CDFF746E20BB7BB9367F4C80DE36FAAEAAED0FE_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_count, int32_t ___2_order, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_order;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t111762345EF200E9DA60A41065803FAF8CE150B2*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t, int32_t >::Invoke(163 /* System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetEntry[]> StackExchange.Redis.IDatabaseAsync::SortedSetPopAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetPopResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortedSetPopAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t2CFCE06DA7F047763B49FF98A34E2F0A61D7D12A* WrapperBase_1_SortedSetPopAsync_m139A40BD14F4D0BF4AD264D7ABF7029F8EB768B1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int64_t ___1_count, int32_t ___2_order, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2;
		L_2 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int64_t L_3 = ___1_count;
		int32_t L_4 = ___2_order;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t2CFCE06DA7F047763B49FF98A34E2F0A61D7D12A* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t2CFCE06DA7F047763B49FF98A34E2F0A61D7D12A*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int64_t, int32_t, int32_t >::Invoke(164 /* System.Threading.Tasks.Task`1<StackExchange.Redis.SortedSetPopResult> StackExchange.Redis.IDatabaseAsync::SortedSetPopAsync(StackExchange.Redis.RedisKey[],System.Int64,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamAcknowledgeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StreamAcknowledgeAsync_m807A0048493621B1C590D3674DB5D6423AAD1154_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_messageId, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_messageId;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(165 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StreamAcknowledgeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamAcknowledgeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StreamAcknowledgeAsync_mEA7720BF1182E6A1C36DEA76B4A2535C07B60F56_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___2_messageIds, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_4 = ___2_messageIds;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(166 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StreamAcknowledgeAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StreamAddAsync_m777141C73726279641D90EBAB5236F9A17FFD651_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_streamField, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_streamValue, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___3_messageId, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___4_maxLength, bool ___5_useApproximateMaxLength, int32_t ___6_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_streamField;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_streamValue;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_5 = ___3_messageId;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6 = ___4_maxLength;
		bool L_7 = ___5_useApproximateMaxLength;
		int32_t L_8 = ___6_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_9;
		L_9 = InterfaceFuncInvoker7< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, bool, int32_t >::Invoke(167 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StreamAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.NameValueEntry[],System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StreamAddAsync_m9491773D4DD6772E4E7FCB9D3AC285498A90E312_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, NameValueEntryU5BU5D_t8A4006F6EC61A4F1E6829BA71C2227313B50C76B* ___1_streamPairs, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___2_messageId, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_maxLength, bool ___4_useApproximateMaxLength, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NameValueEntryU5BU5D_t8A4006F6EC61A4F1E6829BA71C2227313B50C76B* L_3 = ___1_streamPairs;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_4 = ___2_messageId;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = ___3_maxLength;
		bool L_6 = ___4_useApproximateMaxLength;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, NameValueEntryU5BU5D_t8A4006F6EC61A4F1E6829BA71C2227313B50C76B*, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, bool, int32_t >::Invoke(168 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StreamAddAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.NameValueEntry[],System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamAutoClaimAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t66CE8E8C94C302183ACE1AC900D81201A1DFC277* WrapperBase_1_StreamAutoClaimAsync_mC5282840186A76D04D2B36E3ECB8DE2C4E2678DD_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_consumerGroup, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_claimingConsumer, int64_t ___3_minIdleTimeInMs, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___4_startAtId, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___5_count, int32_t ___6_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_consumerGroup;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_claimingConsumer;
		int64_t L_5 = ___3_minIdleTimeInMs;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_6 = ___4_startAtId;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_7 = ___5_count;
		int32_t L_8 = ___6_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t66CE8E8C94C302183ACE1AC900D81201A1DFC277* L_9;
		L_9 = InterfaceFuncInvoker7< Task_1_t66CE8E8C94C302183ACE1AC900D81201A1DFC277*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int32_t >::Invoke(169 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimResult> StackExchange.Redis.IDatabaseAsync::StreamAutoClaimAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimIdsOnlyResult> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamAutoClaimIdsOnlyAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7D15716AA8F4059D3569838C2529648CDD2D7ED8* WrapperBase_1_StreamAutoClaimIdsOnlyAsync_m4546175CE75384711FADDCB0805245AAF18DCC3F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_consumerGroup, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_claimingConsumer, int64_t ___3_minIdleTimeInMs, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___4_startAtId, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___5_count, int32_t ___6_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_consumerGroup;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_claimingConsumer;
		int64_t L_5 = ___3_minIdleTimeInMs;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_6 = ___4_startAtId;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_7 = ___5_count;
		int32_t L_8 = ___6_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t7D15716AA8F4059D3569838C2529648CDD2D7ED8* L_9;
		L_9 = InterfaceFuncInvoker7< Task_1_t7D15716AA8F4059D3569838C2529648CDD2D7ED8*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int32_t >::Invoke(170 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamAutoClaimIdsOnlyResult> StackExchange.Redis.IDatabaseAsync::StreamAutoClaimIdsOnlyAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamClaimAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* WrapperBase_1_StreamClaimAsync_mFDC1D68D7BF69355D7A4A5294BCD240E132FEDF1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_consumerGroup, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_claimingConsumer, int64_t ___3_minIdleTimeInMs, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___4_messageIds, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_consumerGroup;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_claimingConsumer;
		int64_t L_5 = ___3_minIdleTimeInMs;
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_6 = ___4_messageIds;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(171 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.IDatabaseAsync::StreamClaimAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamClaimIdsOnlyAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_StreamClaimIdsOnlyAsync_m29965455B4AFC9429BD831AA6ED0BF3DA7E535A6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_consumerGroup, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_claimingConsumer, int64_t ___3_minIdleTimeInMs, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___4_messageIds, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_consumerGroup;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_claimingConsumer;
		int64_t L_5 = ___3_minIdleTimeInMs;
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_6 = ___4_messageIds;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int64_t, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(172 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::StreamClaimIdsOnlyAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Int64,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamConsumerGroupSetPositionAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StreamConsumerGroupSetPositionAsync_m5B761A6F3837A7D519F51F862E21A0F8C57826C4_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_position, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_position;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(173 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StreamConsumerGroupSetPositionAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamCreateConsumerGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StreamCreateConsumerGroupAsync_m007D24085311180E398F300F2F4D007806C3026E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___2_position, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_4 = ___2_position;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, int32_t >::Invoke(175 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StreamCreateConsumerGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamCreateConsumerGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StreamCreateConsumerGroupAsync_m816147E8C677F8ACDF1A8C565065CF23CCE302DB_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___2_position, bool ___3_createStream, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_4 = ___2_position;
		bool L_5 = ___3_createStream;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, bool, int32_t >::Invoke(176 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StreamCreateConsumerGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamInfo> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamInfoAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3C262C83413F25FAFCF6031D3444871221FB823E* WrapperBase_1_StreamInfoAsync_m4ED9EAF0A966D81B925201DB1ECB01FB0B4F3715_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t3C262C83413F25FAFCF6031D3444871221FB823E* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t3C262C83413F25FAFCF6031D3444871221FB823E*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(181 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamInfo> StackExchange.Redis.IDatabaseAsync::StreamInfoAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamGroupInfo[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamGroupInfoAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD441A58A5AA3825AF56544DB6E2357D4AF12CF41* WrapperBase_1_StreamGroupInfoAsync_m12F34BF2335B19F1CB0060831CDAFE5DDBF4944C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tD441A58A5AA3825AF56544DB6E2357D4AF12CF41* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tD441A58A5AA3825AF56544DB6E2357D4AF12CF41*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(180 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamGroupInfo[]> StackExchange.Redis.IDatabaseAsync::StreamGroupInfoAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamConsumerInfo[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamConsumerInfoAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t126032015BABF064E84D375D57E69449FEAE1472* WrapperBase_1_StreamConsumerInfoAsync_m57DB954C3ABF7558CDE1D3B58147699F1F9F90EA_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t126032015BABF064E84D375D57E69449FEAE1472* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t126032015BABF064E84D375D57E69449FEAE1472*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(174 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamConsumerInfo[]> StackExchange.Redis.IDatabaseAsync::StreamConsumerInfoAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StreamLengthAsync_mC69E3619CA0735C4D01E32BED2066FC8C3C2C91A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(182 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StreamLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StreamDeleteAsync_mD9747696D76B2A9BB83746059636CD577466FE22_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___1_messageIds, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___1_messageIds;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*, int32_t >::Invoke(177 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StreamDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamDeleteConsumerAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StreamDeleteConsumerAsync_m0281465EAE9B13517F8909F907F0AE5CF4D78BC8_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_consumerName, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_consumerName;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(178 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StreamDeleteConsumerAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamDeleteConsumerGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StreamDeleteConsumerGroupAsync_m185983058B125CC8EAF394C820E6125D6B3B4BE6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(179 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StreamDeleteConsumerGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingInfo> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamPendingAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t40F8AD242070ABAD378B4864D452D23B99265296* WrapperBase_1_StreamPendingAsync_m9A2A06690FD25DF808C6278EA50FEFBAB7F7C2C9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t40F8AD242070ABAD378B4864D452D23B99265296* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t40F8AD242070ABAD378B4864D452D23B99265296*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(183 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingInfo> StackExchange.Redis.IDatabaseAsync::StreamPendingAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingMessageInfo[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamPendingMessagesAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int32,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<StackExchange.Redis.RedisValue>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t58DE05D2824180D77F28E432EC9CCAA74A73B0CD* WrapperBase_1_StreamPendingMessagesAsync_m2482909410C549D1041C41EAB7C89298B05B9C9E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, int32_t ___2_count, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___3_consumerName, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___4_minId, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___5_maxId, int32_t ___6_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		int32_t L_4 = ___2_count;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_5 = ___3_consumerName;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_6 = ___4_minId;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_7 = ___5_maxId;
		int32_t L_8 = ___6_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t58DE05D2824180D77F28E432EC9CCAA74A73B0CD* L_9;
		L_9 = InterfaceFuncInvoker7< Task_1_t58DE05D2824180D77F28E432EC9CCAA74A73B0CD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, int32_t >::Invoke(184 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamPendingMessageInfo[]> StackExchange.Redis.IDatabaseAsync::StreamPendingMessagesAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Int32,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<StackExchange.Redis.RedisValue>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamRangeAsync(StackExchange.Redis.RedisKey,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* WrapperBase_1_StreamRangeAsync_mA4551E37247031E173091E52088F4583FE93F0E8_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___1_minId, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___2_maxId, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_count, int32_t ___4_messageOrder, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_3 = ___1_minId;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_4 = ___2_maxId;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = ___3_count;
		int32_t L_6 = ___4_messageOrder;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int32_t, int32_t >::Invoke(185 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.IDatabaseAsync::StreamRangeAsync(StackExchange.Redis.RedisKey,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,StackExchange.Redis.Order,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamReadAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* WrapperBase_1_StreamReadAsync_m23FC2F20DEE9405D386BB82CF5A5AF70F2567335_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_position, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___2_count, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_position;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_4 = ___2_count;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int32_t >::Invoke(186 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.IDatabaseAsync::StreamReadAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamReadAsync(StackExchange.Redis.StreamPosition[],System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62* WrapperBase_1_StreamReadAsync_m8D1F7CB60FAE6454DEAB60B068B31E592BDDD491_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5* ___0_streamPositions, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___1_countPerStream, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5* L_1 = ___0_streamPositions;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___1_countPerStream;
		int32_t L_3 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62* L_4;
		L_4 = InterfaceFuncInvoker3< Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62*, StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int32_t >::Invoke(187 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]> StackExchange.Redis.IDatabaseAsync::StreamReadAsync(StackExchange.Redis.StreamPosition[],System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamReadGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* WrapperBase_1_StreamReadGroupAsync_m92E2A28C1C7D6AC90A0A3B60C2FD279457FE75F6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_consumerName, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___3_position, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___4_count, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_consumerName;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_5 = ___3_position;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6 = ___4_count;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int32_t >::Invoke(188 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.IDatabaseAsync::StreamReadGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamReadGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* WrapperBase_1_StreamReadGroupAsync_mC74A3903D6159B56858C285F5958A95DC5F33125_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_consumerName, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B ___3_position, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___4_count, bool ___5_noAck, int32_t ___6_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_groupName;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_consumerName;
		Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B L_5 = ___3_position;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6 = ___4_count;
		bool L_7 = ___5_noAck;
		int32_t L_8 = ___6_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF* L_9;
		L_9 = InterfaceFuncInvoker7< Task_1_tF5214444D25D5BA3EA046BE35D424F3B176609FF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tA0183CDD13534734D28AA989DF3DC681035A5E1B, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, bool, int32_t >::Invoke(189 /* System.Threading.Tasks.Task`1<StackExchange.Redis.StreamEntry[]> StackExchange.Redis.IDatabaseAsync::StreamReadGroupAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<StackExchange.Redis.RedisValue>,System.Nullable`1<System.Int32>,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamReadGroupAsync(StackExchange.Redis.StreamPosition[],StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62* WrapperBase_1_StreamReadGroupAsync_m3FDF41DE4068CB1675F0D7E16CE91B95AD715047_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5* ___0_streamPositions, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_consumerName, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_countPerStream, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5* L_1 = ___0_streamPositions;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_2 = ___1_groupName;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___2_consumerName;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_4 = ___3_countPerStream;
		int32_t L_5 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62* L_6;
		L_6 = InterfaceFuncInvoker5< Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62*, StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5*, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int32_t >::Invoke(190 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]> StackExchange.Redis.IDatabaseAsync::StreamReadGroupAsync(StackExchange.Redis.StreamPosition[],StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamReadGroupAsync(StackExchange.Redis.StreamPosition[],StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62* WrapperBase_1_StreamReadGroupAsync_mD573E8AA449C2300472E7FC157C5D335B45A78E1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5* ___0_streamPositions, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_groupName, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_consumerName, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_countPerStream, bool ___4_noAck, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5* L_1 = ___0_streamPositions;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_2 = ___1_groupName;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___2_consumerName;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_4 = ___3_countPerStream;
		bool L_5 = ___4_noAck;
		int32_t L_6 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62* L_7;
		L_7 = InterfaceFuncInvoker6< Task_1_tD7ABA8FBBDE2AC62BED7037903AE948BBAB78B62*, StreamPositionU5BU5D_tA80CEF3476778BB1A3B6F30755C2E6F8515137D5*, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, bool, int32_t >::Invoke(191 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisStream[]> StackExchange.Redis.IDatabaseAsync::StreamReadGroupAsync(StackExchange.Redis.StreamPosition[],StackExchange.Redis.RedisValue,StackExchange.Redis.RedisValue,System.Nullable`1<System.Int32>,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StreamTrimAsync(StackExchange.Redis.RedisKey,System.Int32,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StreamTrimAsync_m2416F1F9A5AD6035046CC5880F8D09C321421F87_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_maxLength, bool ___2_useApproximateMaxLength, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_maxLength;
		bool L_4 = ___2_useApproximateMaxLength;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t, bool, int32_t >::Invoke(192 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StreamTrimAsync(StackExchange.Redis.RedisKey,System.Int32,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringAppendAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringAppendAsync_m064225B6E122EC5E2BB889F125C8CC0D497302B0_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(193 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringAppendAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringBitCountAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringBitCountAsync_mCF7108EF1054D382F82A75BB16E31924CB627D38_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_start, int64_t ___2_end, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_start;
		int64_t L_4 = ___2_end;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t >::Invoke(194 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringBitCountAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringBitCountAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.StringIndexType,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringBitCountAsync_mFBF0989AA3654A9B56C5B6B599FB92E8679CDA0D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_start, int64_t ___2_end, int32_t ___3_indexType, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_start;
		int64_t L_4 = ___2_end;
		int32_t L_5 = ___3_indexType;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t, int32_t >::Invoke(195 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringBitCountAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.StringIndexType,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringBitOperationAsync(StackExchange.Redis.Bitwise,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringBitOperationAsync_m474E952444012E3204FD31C7637955EA7322BD3C_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destination, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___2_keys, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2 = ___1_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3;
		L_3 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_4 = ___2_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_5;
		L_5 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_6 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker4< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, int32_t, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(197 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringBitOperationAsync(StackExchange.Redis.Bitwise,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringBitOperationAsync(StackExchange.Redis.Bitwise,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringBitOperationAsync_m915CEA199BCC6D7124B8FC0FB79C05D36DC94AEE_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_operation, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___1_destination, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___2_first, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___3_second, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_operation;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2 = ___1_destination;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3;
		L_3 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4 = ___2_first;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_5;
		L_5 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_6 = ___3_second;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_7;
		L_7 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 203)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 203));
		int32_t L_8 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_9;
		L_9 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, int32_t, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(196 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringBitOperationAsync(StackExchange.Redis.Bitwise,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1, L_3, L_5, L_7, L_8);
		return L_9;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringBitPositionAsync(StackExchange.Redis.RedisKey,System.Boolean,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringBitPositionAsync_mAED29657F1A19D327829C3059154FC63C350042E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, bool ___1_bit, int64_t ___2_start, int64_t ___3_end, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		bool L_3 = ___1_bit;
		int64_t L_4 = ___2_start;
		int64_t L_5 = ___3_end;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, bool, int64_t, int64_t, int32_t >::Invoke(198 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringBitPositionAsync(StackExchange.Redis.RedisKey,System.Boolean,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringBitPositionAsync(StackExchange.Redis.RedisKey,System.Boolean,System.Int64,System.Int64,StackExchange.Redis.StringIndexType,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringBitPositionAsync_m0BFE77F258CE5CC59226E4DA55A13265DA196992_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, bool ___1_bit, int64_t ___2_start, int64_t ___3_end, int32_t ___4_indexType, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		bool L_3 = ___1_bit;
		int64_t L_4 = ___2_start;
		int64_t L_5 = ___3_end;
		int32_t L_6 = ___4_indexType;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, bool, int64_t, int64_t, int32_t, int32_t >::Invoke(199 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringBitPositionAsync(StackExchange.Redis.RedisKey,System.Boolean,System.Int64,System.Int64,StackExchange.Redis.StringIndexType,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringDecrementAsync(StackExchange.Redis.RedisKey,System.Double,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* WrapperBase_1_StringDecrementAsync_m5F8A32DB13750EA24F8A08580725D0039446E26D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, int32_t >::Invoke(201 /* System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.IDatabaseAsync::StringDecrementAsync(StackExchange.Redis.RedisKey,System.Double,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringDecrementAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringDecrementAsync_mCB13B6666A6BB31A79D4491BBB27A7A971ABA085_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(200 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringDecrementAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* WrapperBase_1_StringGetAsync_m3D2485E4A39084ECD6FA8A3836D0DD876866DFE4_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2;
		L_2 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t6CBA6D19A8DD4FE6F85AD54F9EAD014897FA0C7B*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(203 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue[]> StackExchange.Redis.IDatabaseAsync::StringGetAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringGetAsync_m24B0B3DE07EF4DF0698D45E7AFE0DC1E30833D48_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(202 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetSetExpiryAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringGetSetExpiryAsync_mF86D84A612EB33B4DB051283AE9FCF0C318451F1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___1_expiry, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_3 = ___1_expiry;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, int32_t >::Invoke(208 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringGetSetExpiryAsync(StackExchange.Redis.RedisKey,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetSetExpiryAsync(StackExchange.Redis.RedisKey,System.DateTime,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringGetSetExpiryAsync_m597060DDB163296B0113F3A2FFEA615500EE992D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_expiry, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = ___1_expiry;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, int32_t >::Invoke(209 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringGetSetExpiryAsync(StackExchange.Redis.RedisKey,System.DateTime,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.Lease`1<System.Byte>> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetLeaseAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3* WrapperBase_1_StringGetLeaseAsync_m68D32896851A13531317A4A058E9D8002A5B4C03_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t8AE05D8FC9BDEEDAF04D2B7E6ADEB5855BE113D3*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(204 /* System.Threading.Tasks.Task`1<StackExchange.Redis.Lease`1<System.Byte>> StackExchange.Redis.IDatabaseAsync::StringGetLeaseAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetBitAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StringGetBitAsync_m912520904A3A7BA51214FE371C52CCF223ED904D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_offset, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_offset;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(205 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StringGetBitAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetRangeAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringGetRangeAsync_mD78F44BEE9A4184731846DCDB55774978D3ED107_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_start, int64_t ___2_end, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_start;
		int64_t L_4 = ___2_end;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int64_t, int32_t >::Invoke(206 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringGetRangeAsync(StackExchange.Redis.RedisKey,System.Int64,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringGetSetAsync_m4BE8199550D637028364AF900FCB5C330C8F71AC_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(207 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringGetSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringGetDeleteAsync_mFD5F5ACF783D60EF638037AC48A5A99F06923D20_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(210 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringGetDeleteAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValueWithExpiry> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringGetWithExpiryAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7D368296989D942BF0999BF6551E6E06FEC1B349* WrapperBase_1_StringGetWithExpiryAsync_mD8796ABF6ACB95C4871E99AA4EFB19ED40DB7CF7_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t7D368296989D942BF0999BF6551E6E06FEC1B349* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t7D368296989D942BF0999BF6551E6E06FEC1B349*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(211 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValueWithExpiry> StackExchange.Redis.IDatabaseAsync::StringGetWithExpiryAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringIncrementAsync(StackExchange.Redis.RedisKey,System.Double,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* WrapperBase_1_StringIncrementAsync_m5F7521A910FBC545DFD41C1383F59631CA0C98C9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, double ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		double L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t53CF37CE08AFEB07F6BC948D62EB81B53AFD0024*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, double, int32_t >::Invoke(213 /* System.Threading.Tasks.Task`1<System.Double> StackExchange.Redis.IDatabaseAsync::StringIncrementAsync(StackExchange.Redis.RedisKey,System.Double,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringIncrementAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringIncrementAsync_m7857A6CE4A9E12270D0113E7B780768C74E1D51A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_value, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_value;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, int32_t >::Invoke(212 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringIncrementAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_StringLengthAsync_mE6AB2133E5DE0F7B8CBDB642FC3986B9519C0B84_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(214 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::StringLengthAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringSetAsync(System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>[],StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StringSetAsync_mFAFB0CC80112777E33E44014A4EF8744A3013C65_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* ___0_values, int32_t ___1_when, int32_t ___2_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_1 = ___0_values;
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_2;
		L_2 = ((  KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 222)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 222));
		int32_t L_3 = ___1_when;
		int32_t L_4 = ___2_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker3< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440*, int32_t, int32_t >::Invoke(221 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StringSetAsync(System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>[],StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.When)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StringSetAsync_mFBC7738E076DB88239D1074A4FA4036B00AFD893_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___2_expiry, int32_t ___3_when, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4 = ___2_expiry;
		int32_t L_5 = ___3_when;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, int32_t >::Invoke(218 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StringSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.When) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StringSetAsync_mF493A4EB9EC4C6DACA93398EDA99BE125B6EB49A_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___2_expiry, int32_t ___3_when, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4 = ___2_expiry;
		int32_t L_5 = ___3_when;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, int32_t, int32_t >::Invoke(219 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StringSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,System.Boolean,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StringSetAsync_m1ACC2C579A2C11710937AE2A9C0D94F7FF00745B_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___2_expiry, bool ___3_keepTtl, int32_t ___4_when, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4 = ___2_expiry;
		bool L_5 = ___3_keepTtl;
		int32_t L_6 = ___4_when;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, bool, int32_t, int32_t >::Invoke(220 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StringSetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,System.Boolean,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringSetAndGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringSetAndGetAsync_m4994B6DB1808DB860B9D93C923DF58E9F5F5CFF1_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___2_expiry, int32_t ___3_when, int32_t ___4_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4 = ___2_expiry;
		int32_t L_5 = ___3_when;
		int32_t L_6 = ___4_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_7;
		L_7 = InterfaceFuncInvoker5< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, int32_t, int32_t >::Invoke(222 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringSetAndGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringSetAndGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,System.Boolean,StackExchange.Redis.When,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringSetAndGetAsync_mD99CE5F7196D7041768D52B08B54494091C2DC03_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___1_value, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___2_expiry, bool ___3_keepTtl, int32_t ___4_when, int32_t ___5_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___1_value;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4 = ___2_expiry;
		bool L_5 = ___3_keepTtl;
		int32_t L_6 = ___4_when;
		int32_t L_7 = ___5_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_8;
		L_8 = InterfaceFuncInvoker6< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272, bool, int32_t, int32_t >::Invoke(223 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringSetAndGetAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue,System.Nullable`1<System.TimeSpan>,System.Boolean,StackExchange.Redis.When,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringSetBitAsync(StackExchange.Redis.RedisKey,System.Int64,System.Boolean,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_StringSetBitAsync_m564681E4183E82F3CD6A6844987794B41E2A6964_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_offset, bool ___2_bit, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_offset;
		bool L_4 = ___2_bit;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, bool, int32_t >::Invoke(224 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::StringSetBitAsync(StackExchange.Redis.RedisKey,System.Int64,System.Boolean,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::StringSetRangeAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* WrapperBase_1_StringSetRangeAsync_m38CEEE571339228D2523D461EE54508FD411A922_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int64_t ___1_offset, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___2_value, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int64_t L_3 = ___1_offset;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4 = ___2_value;
		int32_t L_5 = ___3_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD* L_6;
		L_6 = InterfaceFuncInvoker4< Task_1_tFC1FD86D939E212FC3A04B7AD2ECF7A2926AE9BD*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int64_t, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, int32_t >::Invoke(225 /* System.Threading.Tasks.Task`1<StackExchange.Redis.RedisValue> StackExchange.Redis.IDatabaseAsync::StringSetRangeAsync(StackExchange.Redis.RedisKey,System.Int64,StackExchange.Redis.RedisValue,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.TimeSpan> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::PingAsync(StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCAC4F769ADD4342238897BCBF46AF752F184C4AB* WrapperBase_1_PingAsync_m679D63F195F5FD775B6F52758B2D06E00CB648B3_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, int32_t ___0_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = ___0_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_tCAC4F769ADD4342238897BCBF46AF752F184C4AB* L_2;
		L_2 = InterfaceFuncInvoker1< Task_1_tCAC4F769ADD4342238897BCBF46AF752F184C4AB*, int32_t >::Invoke(1 /* System.Threading.Tasks.Task`1<System.TimeSpan> StackExchange.Redis.IRedisAsync::PingAsync(StackExchange.Redis.CommandFlags) */, IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyTouchAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* WrapperBase_1_KeyTouchAsync_mF9498F40D2F5D1B5D8C476ECF5AEA3CD1CB51769_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_keys, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_keys;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2;
		L_2 = ((  RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*, int32_t >::Invoke(68 /* System.Threading.Tasks.Task`1<System.Int64> StackExchange.Redis.IDatabaseAsync::KeyTouchAsync(StackExchange.Redis.RedisKey[],StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::KeyTouchAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WrapperBase_1_KeyTouchAsync_m4676E9565C3C21B7BF575D1CDF08BE893046B0E6_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_key, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_key;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = ___1_flags;
		NullCheck((RuntimeObject*)(V_0));
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = InterfaceFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, int32_t >::Invoke(67 /* System.Threading.Tasks.Task`1<System.Boolean> StackExchange.Redis.IDatabaseAsync::KeyTouchAsync(StackExchange.Redis.RedisKey,StackExchange.Redis.CommandFlags) */, IDatabaseAsync_t9F248333FEAF3ECA380FC5CDA55271C4ED6B1E9A_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_2, L_3);
		return L_4;
	}
}
// System.Boolean StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::TryWait(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrapperBase_1_TryWait_mB7A60B1C8DECDAB9B5427D3CA5076D7CE3522CA9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___0_task;
		NullCheck((RuntimeObject*)(V_0));
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(2 /* System.Boolean StackExchange.Redis.IRedisAsync::TryWait(System.Threading.Tasks.Task) */, IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1);
		return L_2;
	}
}
// System.Void StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::Wait(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperBase_1_Wait_mB641F9B23B30E300897746634E0A360D4998A8C3_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___0_task;
		NullCheck((RuntimeObject*)(V_0));
		InterfaceActionInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(3 /* System.Void StackExchange.Redis.IRedisAsync::Wait(System.Threading.Tasks.Task) */, IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1);
		return;
	}
}
// System.Void StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::WaitAll(System.Threading.Tasks.Task[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperBase_1_WaitAll_m25C7A2A7D894E6D0503321072FCAD1888E813E9D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* ___0_tasks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		V_0 = L_0;
		TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_1 = ___0_tasks;
		NullCheck((RuntimeObject*)(V_0));
		InterfaceActionInvoker1< TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* >::Invoke(5 /* System.Void StackExchange.Redis.IRedisAsync::WaitAll(System.Threading.Tasks.Task[]) */, IRedisAsync_tB9B43AA827BE731CAB58B239A3566DA577D94858_il2cpp_TypeInfo_var, (RuntimeObject*)(V_0), L_1);
		return;
	}
}
// StackExchange.Redis.RedisKey StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ToInner(StackExchange.Redis.RedisKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 WrapperBase_1_ToInner_m5AEEDF9FF9A49B3A2A40ED9E072ECE2B0004E61D_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 109)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 109));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = ___0_outer;
		il2cpp_codegen_runtime_class_init_inline(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_2;
		L_2 = RedisKey_WithPrefix_mA43B1B8F49F1B6009FA03A763D07461C048F728B(L_0, L_1, NULL);
		return L_2;
	}
}
// StackExchange.Redis.RedisKey StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ToInnerOrDefault(StackExchange.Redis.RedisKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 WrapperBase_1_ToInnerOrDefault_m3A91FC7160D26F82CDF135F446BFB857864BDAC3_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_0 = ___0_outer;
		il2cpp_codegen_initobj((&V_0), sizeof(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = RedisKey_op_Equality_mE7316AF0C6B9959D7BA3833D22014680290BF7A8(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_3 = ___0_outer;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_4;
		L_4 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_4;
	}

IL_0019:
	{
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_5 = ___0_outer;
		return L_5;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ToInner(System.Collections.Generic.ICollection`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperBase_1_ToInner_mB78BA668BCB39E33AF043368549D802AE779233E_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RuntimeObject* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject* L_1 = ___0_args;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 237));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ((U3CU3Ec_t17B104E730753ADE1339FE96C895FB016AECAB4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 237)))->___U3CU3E9__242_0_1;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 237));
		U3CU3Ec_t17B104E730753ADE1339FE96C895FB016AECAB4E* L_4 = ((U3CU3Ec_t17B104E730753ADE1339FE96C895FB016AECAB4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 237)))->___U3CU3E9_0;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_5 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)il2cpp_codegen_object_new(Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 238)), NULL);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = L_5;
		((U3CU3Ec_t17B104E730753ADE1339FE96C895FB016AECAB4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 237)))->___U3CU3E9__242_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t17B104E730753ADE1339FE96C895FB016AECAB4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 237)))->___U3CU3E9__242_0_1), (void*)L_6);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
	}

IL_0026:
	{
		bool L_7;
		L_7 = Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F((RuntimeObject*)G_B3_1, G_B3_0, Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject* L_8 = ___0_args;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_0 = L_10;
		V_1 = 0;
		RuntimeObject* L_11 = ___0_args;
		NullCheck((RuntimeObject*)L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a6:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_13 = V_2;
					if (!L_13)
					{
						goto IL_00af;
					}
				}
				{
					RuntimeObject* L_14 = V_2;
					NullCheck((RuntimeObject*)L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				}

IL_00af:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009c_1;
			}

IL_0047_1:
			{
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var, L_15);
				V_3 = L_16;
				RuntimeObject* L_17 = V_3;
				if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var)))
				{
					goto IL_006f_1;
				}
			}
			{
				RuntimeObject* L_18 = V_3;
				V_5 = ((*(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4*)((RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4*)(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4*)UnBox(L_18, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var))));
				RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_19 = V_5;
				RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_20;
				L_20 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_21 = L_20;
				RuntimeObject* L_22 = Box(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var, &L_21);
				V_4 = L_22;
				goto IL_0093_1;
			}

IL_006f_1:
			{
				RuntimeObject* L_23 = V_3;
				if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_23, RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8_il2cpp_TypeInfo_var)))
				{
					goto IL_0090_1;
				}
			}
			{
				RuntimeObject* L_24 = V_3;
				V_6 = ((*(RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8*)((RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8*)(RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8*)UnBox(L_24, RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8_il2cpp_TypeInfo_var))));
				RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 L_25 = V_6;
				RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 L_26;
				L_26 = ((  RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 103)))(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 103));
				RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 L_27 = L_26;
				RuntimeObject* L_28 = Box(RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8_il2cpp_TypeInfo_var, &L_27);
				V_4 = L_28;
				goto IL_0093_1;
			}

IL_0090_1:
			{
				RuntimeObject* L_29 = V_3;
				V_4 = L_29;
			}

IL_0093_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_0;
				int32_t L_31 = V_1;
				int32_t L_32 = L_31;
				V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
				RuntimeObject* L_33 = V_4;
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, L_33);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_33);
			}

IL_009c_1:
			{
				RuntimeObject* L_34 = V_2;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0047_1;
				}
			}
			{
				goto IL_00b0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_0;
		___0_args = (RuntimeObject*)L_36;
	}

IL_00b3:
	{
		RuntimeObject* L_37 = ___0_args;
		return L_37;
	}
}
// StackExchange.Redis.RedisKey[] StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ToInner(StackExchange.Redis.RedisKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* WrapperBase_1_ToInner_mB9C918B76B1179CCB8EB066C64833D45C50F7783_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_0 = ___0_outer;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_1 = ___0_outer;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_2 = ___0_outer;
		return L_2;
	}

IL_0009:
	{
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_3 = ___0_outer;
		NullCheck(L_3);
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_4 = (RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*)(RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351*)SZArrayNew(RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_0 = L_4;
		V_1 = 0;
		goto IL_002e;
	}

IL_0016:
	{
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_5 = V_0;
		int32_t L_6 = V_1;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_7 = ___0_outer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_11;
		L_11 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_14 = ___0_outer;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		RedisKeyU5BU5D_t580BD74A16C95A6EE39D52BCDD5075E8F4F1C351* L_15 = V_0;
		return L_15;
	}
}
// System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ToInner(System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD WrapperBase_1_ToInner_mACB585572B8FC1813DC9B5D0708E51DE049F976F_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m1B5335506876501BC467CC85D62D8DBE8B679FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mE830EDA5DB05430183DB46527FD64FD73DA9C718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m20146FB817B75003F1E3F10A08994392DF04A509_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_0;
		L_0 = KeyValuePair_2_get_Key_mE830EDA5DB05430183DB46527FD64FD73DA9C718_inline((&___0_outer), KeyValuePair_2_get_Key_mE830EDA5DB05430183DB46527FD64FD73DA9C718_RuntimeMethod_var);
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_1;
		L_1 = ((  RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_2;
		L_2 = KeyValuePair_2_get_Value_m20146FB817B75003F1E3F10A08994392DF04A509_inline((&___0_outer), KeyValuePair_2_get_Value_m20146FB817B75003F1E3F10A08994392DF04A509_RuntimeMethod_var);
		KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		KeyValuePair_2__ctor_m1B5335506876501BC467CC85D62D8DBE8B679FE8((&L_3), L_1, L_2, /*hidden argument*/KeyValuePair_2__ctor_m1B5335506876501BC467CC85D62D8DBE8B679FE8_RuntimeMethod_var);
		return L_3;
	}
}
// System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>[] StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ToInner(System.Collections.Generic.KeyValuePair`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisValue>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* WrapperBase_1_ToInner_m83FFE04007FAB3069C88EFD63A6000A03034D559_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* V_0 = NULL;
	int32_t V_1 = 0;
	{
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_0 = ___0_outer;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_1 = ___0_outer;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_2 = ___0_outer;
		return L_2;
	}

IL_0009:
	{
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_3 = ___0_outer;
		NullCheck(L_3);
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_4 = (KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440*)(KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440*)SZArrayNew(KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_0 = L_4;
		V_1 = 0;
		goto IL_002e;
	}

IL_0016:
	{
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_5 = V_0;
		int32_t L_6 = V_1;
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_7 = ___0_outer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD L_11;
		L_11 = ((  KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 239)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 239));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_14 = ___0_outer;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t370276728588ED16B1EA659F554E04D83A88C440* L_15 = V_0;
		return L_15;
	}
}
// StackExchange.Redis.RedisValue StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ToInner(StackExchange.Redis.RedisValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF WrapperBase_1_ToInner_m7B7EC6F8EC02CF3FF53024E6443011553A3A7299_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 109)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 109));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_1 = ___0_outer;
		il2cpp_codegen_runtime_class_init_inline(RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = RedisValue_op_Implicit_m4FFAB197B2190B61AEDBC14F91995FEEEEFDAAF8(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = RedisKey_ConcatenateBytes_m534A23E111AD87D89947D0B1CE5D164BA423631B(L_0, NULL, L_2, NULL);
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4;
		L_4 = RedisValue_op_Implicit_m3E6DC9723BA7050A3BCE81C811B962D9A029081C(L_3, NULL);
		return L_4;
	}
}
// StackExchange.Redis.RedisValue StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortByToInner(StackExchange.Redis.RedisValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF WrapperBase_1_SortByToInner_m84557B6EF93EDCE70E1689537BE697C4E60BC9AC_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B6C730603558FC1821AE164C08204AC1237676A);
		s_Il2CppMethodInitialized = true;
	}
	{
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_0 = ___0_outer;
		il2cpp_codegen_runtime_class_init_inline(RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_il2cpp_TypeInfo_var);
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_1;
		L_1 = RedisValue_op_Implicit_mDF9288598DF6E409BBA583CC80C24F3ADD8EFF7E(_stringLiteral0B6C730603558FC1821AE164C08204AC1237676A, NULL);
		bool L_2;
		L_2 = RedisValue_op_Equality_mD9B3CA3800DE66FA510C995BE04A5ABB08E6C439(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___0_outer;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4;
		L_4 = ((  RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 240)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 240));
		return L_4;
	}

IL_001a:
	{
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_5 = ___0_outer;
		return L_5;
	}
}
// StackExchange.Redis.RedisValue StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortGetToInner(StackExchange.Redis.RedisValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF WrapperBase_1_SortGetToInner_m4D59AB9417A716E0A3ABDE8CCCBCEF17448A3AAF_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_0 = ___0_outer;
		il2cpp_codegen_runtime_class_init_inline(RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF_il2cpp_TypeInfo_var);
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_1;
		L_1 = RedisValue_op_Implicit_mDF9288598DF6E409BBA583CC80C24F3ADD8EFF7E(_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, NULL);
		bool L_2;
		L_2 = RedisValue_op_Equality_mD9B3CA3800DE66FA510C995BE04A5ABB08E6C439(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_3 = ___0_outer;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_4;
		L_4 = ((  RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 240)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 240));
		return L_4;
	}

IL_001a:
	{
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_5 = ___0_outer;
		return L_5;
	}
}
// StackExchange.Redis.RedisValue[] StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::SortGetToInner(StackExchange.Redis.RedisValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* WrapperBase_1_SortGetToInner_m3FF1CFEEEB51F72A3E1DDFA65411CC6249E40C93_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_0 = ___0_outer;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_1 = ___0_outer;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_2 = ___0_outer;
		return L_2;
	}

IL_0009:
	{
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_3 = ___0_outer;
		NullCheck(L_3);
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_4 = (RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*)(RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0*)SZArrayNew(RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_0 = L_4;
		V_1 = 0;
		goto IL_002e;
	}

IL_0016:
	{
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_5 = V_0;
		int32_t L_6 = V_1;
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_7 = ___0_outer;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_11;
		L_11 = ((  RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 241)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 241));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_14 = ___0_outer;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		RedisValueU5BU5D_tB151D2037C8960EB9114807CE5D8B9B643BB76D0* L_15 = V_0;
		return L_15;
	}
}
// StackExchange.Redis.RedisChannel StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::ToInner(StackExchange.Redis.RedisChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 WrapperBase_1_ToInner_m300E2FD810C6B4B44680F46C8BD9851633EA5AF9_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 ___0_outer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 109)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 109));
		RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 L_1 = ___0_outer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = RedisChannel_op_Implicit_mCB86F9766C3EE4B7BB796E94B1F4C661C8EC0C7A_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = RedisKey_ConcatenateBytes_m534A23E111AD87D89947D0B1CE5D164BA423631B(L_0, NULL, L_2, NULL);
		RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 L_4;
		L_4 = RedisChannel_op_Implicit_m212A60EB14B8D980DFAF4EE0A543BE8E3092AC33(L_3, NULL);
		return L_4;
	}
}
// System.Func`2<StackExchange.Redis.RedisKey,StackExchange.Redis.RedisKey> StackExchange.Redis.KeyspaceIsolation.WrapperBase`1<System.Object>::GetMapFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* WrapperBase_1_GetMapFunction_mC45EC798660AD27D8969616F3CB578B61E2454F8_gshared (WrapperBase_1_tC8092F2B077274B28FB23D5E4FF2E095656E38AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* V_0 = NULL;
	Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* G_B2_0 = NULL;
	Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* G_B1_0 = NULL;
	{
		Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* L_0 = (Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2*)__this->___mapFunction_2;
		Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* L_2 = (Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2*)il2cpp_codegen_object_new(Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_m4E419E4BB51F0147B95F0EF44074DE6C92C955BC(L_2, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* L_3 = L_2;
		V_0 = L_3;
		__this->___mapFunction_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapFunction_2), (void*)L_3);
		Func_2_t40F955A85E0D4C5B990CE7CD3A00AB93739926B2* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001f:
	{
		return G_B2_0;
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
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_3 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)(EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->____entries_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_3);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_4 = ___0_extractKey;
		__this->____extractKey_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey_3), (void*)L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____numEntries_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_10 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_11 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_13 = (RuntimeObject*)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Value_0;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_10, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_16 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Next_2;
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)(&((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_21, (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_23 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = (int32_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Next_2;
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_32);
		V_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_33);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_35 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_36 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		int32_t L_37 = V_0;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_38 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_38);
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_38, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = L_38;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_43 = V_1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_44 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject* L_46 = (RuntimeObject*)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___Value_0;
		NullCheck(L_43);
		bool L_47;
		L_47 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_43, L_46, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_48 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___Next_2;
		V_5 = L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_55 = V_1;
		return L_55;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_9 = ___3_value;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_10 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12 = (RuntimeObject*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value_0;
		*(RuntimeObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject** L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject** L_0 = ___1_newValue;
		RuntimeObject* L_1 = ___0_value;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_2 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		RuntimeObject* L_3 = ___0_value;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries_2);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_15 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___0_value;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0), (void*)L_17);
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_18 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___HashCode_1 = L_20;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_27 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)(&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___Next_2);
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_29, L_30, 0, NULL);
		V_1 = L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		bool L_38;
		L_38 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_34, L_35, 0, L_37, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject** L_39 = ___1_newValue;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_40 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_42 = (RuntimeObject*)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Value_0;
		*(RuntimeObject**)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)L_42);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_9 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = (int32_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___HashCode_1;
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_13 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_14 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___Value_0;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_22 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject** L_24 = (RuntimeObject**)(&((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___Value_0);
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject*));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_25 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___Next_2;
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_30 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_33 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___Next_2 = L_35;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___3_count;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___1_key;
		int32_t L_40 = ___2_index;
		String_t* L_41 = V_2;
		int32_t L_42 = ___3_count;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_39, L_40, L_41, 0, L_42, NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___4_entryIndex;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = L_46;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_47 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___Next_2;
		V_1 = L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___4_entryIndex;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		RuntimeObject** L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
			NullCheck(L_7);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RedisChannel_op_Implicit_mCB86F9766C3EE4B7BB796E94B1F4C661C8EC0C7A_inline (RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 ___0_key, const RuntimeMethod* method) 
{
	{
		RedisChannel_tC32B08BF5FAE58E2D1D1AD39652248488F856BB8 L_0 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0.___Value_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_m208E0A9BA90A104D5F5752EAE69B2135724F6E29_gshared_inline (Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB Enumerator_get_Current_mFCB3FDB8F4A948D29CD9B8147E25174B1E22FA07_gshared_inline (Enumerator_tA72F8DEF563F3CE83349F6EC834BD0760DE0B332* __this, const RuntimeMethod* method) 
{
	{
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = (Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 Enumerator_get_Current_m210A4049336A7102C833E9E6CC1FD32A65DA3776_gshared_inline (Enumerator_t6F74CEFC03175A0C5346626D391F197B0ACAD631* __this, const RuntimeMethod* method) 
{
	{
		VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 L_0 = (VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 Enumerator_get_Current_m16FE5A2A7B5183FE3A577C2C60952773592D6E8A_gshared_inline (Enumerator_tF83F70D6CC55AE1B37FC183C5A56433F2CB77322* __this, const RuntimeMethod* method) 
{
	{
		IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813 L_0 = (IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 KeyValuePair_2_get_Key_mE830EDA5DB05430183DB46527FD64FD73DA9C718_gshared_inline (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* __this, const RuntimeMethod* method) 
{
	{
		RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4 L_0 = (RedisKey_t7B22944D837F57A013AE71AB31B95B393F5F0EF4)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF KeyValuePair_2_get_Value_m20146FB817B75003F1E3F10A08994392DF04A509_gshared_inline (KeyValuePair_2_t85A0CA2E0B192BF0855D29E1B702CDF3F61A34AD* __this, const RuntimeMethod* method) 
{
	{
		RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF L_0 = (RedisValue_tC49AC353EADBF1A26F65741D363C85272CFB06AF)__this->___value_1;
		return L_0;
	}
}
