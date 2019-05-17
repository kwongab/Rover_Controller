#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Scarlet.Communications.BandwidthControlBuffer
struct BandwidthControlBuffer_t2974463824;
// Scarlet.Communications.PacketBuffer[]
struct PacketBufferU5BU5D_t518719314;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// Scarlet.Communications.PacketBuffer
struct PacketBuffer_t1868544067;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.String
struct String_t;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// Scarlet.Communications.Packet
struct Packet_t288042838;
// System.Collections.Generic.List`1<Scarlet.Communications.Packet>
struct List_1_t1760117580;
// System.Net.IPAddress
struct IPAddress_t241777590;
// System.Net.IPEndPoint
struct IPEndPoint_t3791887218;
// System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged>
struct EventHandler_1_t1622021596;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// Scarlet.Communications.QueueBuffer
struct QueueBuffer_t2864759769;
// Scarlet.Communications.GenericController
struct GenericController_t3250570503;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Threading.ThreadStart
struct ThreadStart_t1006689297;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t3696804522;
// Scarlet.Communications.ConnectionStatusChanged
struct ConnectionStatusChanged_t3697862163;
// System.Exception
struct Exception_t;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Net.Sockets.UdpClient
struct UdpClient_t967282006;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Net.Sockets.TcpClient
struct TcpClient_t822906377;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Net.Sockets.SocketException
struct SocketException_t3852068672;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t114149265;
// Scarlet.Communications.Message
struct Message_t750656897;
// System.EventArgs
struct EventArgs_t3591816995;
// Scarlet.Communications.PriorityBuffer
struct PriorityBuffer_t827296848;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.Text.StringBuilder
struct StringBuilder_t;
// Scarlet.Communications.Parse/ParseMethod
struct ParseMethod_t2014021367;
// Scarlet.Communications.PacketWriter
struct PacketWriter_t1568959448;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Delegate>
struct Dictionary_2_t3808507429;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1405253484;
// System.Delegate
struct Delegate_t1188392813;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.Queue`1<Scarlet.Communications.Packet>
struct Queue_1_t134302332;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.Server/ScarletClient>
struct Dictionary_2_t791071292;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// Scarlet.Communications.Server/ScarletClient
struct ScarletClient_t1005814993;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t4071955934;
// System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog>
struct Dictionary_2_t4117784682;
// Scarlet.Communications.WatchdogManager/Watchdog
struct Watchdog_t37561087;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Scarlet.Communications.WatchdogManager/Watchdog>
struct KeyCollection_t12492857;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.String[]
struct StringU5BU5D_t1281789340;
// Scarlet.Utilities.Log/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t4114446988;
// System.Converter`2<System.String,System.String>
struct Converter_2_t3942642323;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2442480487;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Type
struct Type_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.FormatException
struct FormatException_t154580423;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Scarlet.Communications.Server/ScarletClient>[]
struct EntryU5BU5D_t3688022605;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Scarlet.Communications.Server/ScarletClient>
struct KeyCollection_t980746763;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Scarlet.Communications.Server/ScarletClient>
struct ValueCollection_t2507115610;
// Scarlet.Communications.Packet[]
struct PacketU5BU5D_t2783046291;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Scarlet.Communications.WatchdogManager/Watchdog>[]
struct EntryU5BU5D_t2480025511;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Scarlet.Communications.WatchdogManager/Watchdog>
struct ValueCollection_t1538861704;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Delegate>[]
struct EntryU5BU5D_t3447751840;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t3241628394;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Delegate>
struct KeyCollection_t3998182900;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Delegate>
struct ValueCollection_t1229584451;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1707895399;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t2567786569;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t2427220165;
// System.Threading.InternalThread
struct InternalThread_t95296544;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// Scarlet.Communications.QueueBuffer[]
struct QueueBufferU5BU5D_t213965988;
// System.Void
struct Void_t1185182177;
// System.IO.Stream
struct Stream_t1273022909;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.Encoder
struct Encoder_t2198218980;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t610293888;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.IOAsyncCallback
struct IOAsyncCallback_t705871752;
// Scarlet.Utilities.Log/Severity[]
struct SeverityU5BU5D_t3396005585;
// System.IO.StreamWriter
struct StreamWriter_t1266378904;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Binder
struct Binder_t2999457153;

extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* BandwidthControlBuffer__ctor_m2629739754_RuntimeMethod_var;
extern String_t* _stringLiteral2174240884;
extern String_t* _stringLiteral2372498813;
extern const uint32_t BandwidthControlBuffer__ctor_m2629739754_MetadataUsageId;
extern RuntimeClass* Math_t1671470975_il2cpp_TypeInfo_var;
extern const uint32_t BandwidthControlBuffer_AddToken_m3062733749_MetadataUsageId;
extern const RuntimeMethod* BandwidthControlBuffer_Enqueue_m1140956618_RuntimeMethod_var;
extern String_t* _stringLiteral593208290;
extern const uint32_t BandwidthControlBuffer_Enqueue_m1140956618_MetadataUsageId;
extern RuntimeClass* Client_t2324008571_il2cpp_TypeInfo_var;
extern const uint32_t Client_get_DefaultPriority_m654009412_MetadataUsageId;
extern const uint32_t Client_set_DefaultPriority_m2361359824_MetadataUsageId;
extern const uint32_t Client_get_Name_m2071881588_MetadataUsageId;
extern const uint32_t Client_set_Name_m2992446927_MetadataUsageId;
extern const uint32_t Client_get_IsConnected_m2247384803_MetadataUsageId;
extern const uint32_t Client_set_IsConnected_m259240721_MetadataUsageId;
extern const uint32_t Client_get_SentPackets_m129280601_MetadataUsageId;
extern const uint32_t Client_set_SentPackets_m2871699902_MetadataUsageId;
extern const uint32_t Client_get_ReceivedPackets_m2010246097_MetadataUsageId;
extern const uint32_t Client_set_ReceivedPackets_m949900963_MetadataUsageId;
extern RuntimeClass* Log_t929882142_il2cpp_TypeInfo_var;
extern RuntimeClass* IPAddress_t241777590_il2cpp_TypeInfo_var;
extern RuntimeClass* IPEndPoint_t3791887218_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t1622021596_il2cpp_TypeInfo_var;
extern RuntimeClass* WatchdogManager_t1687039763_il2cpp_TypeInfo_var;
extern RuntimeClass* QueueBuffer_t2864759769_il2cpp_TypeInfo_var;
extern RuntimeClass* GenericController_t3250570503_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1760117580_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadStart_t1006689297_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern RuntimeClass* ParameterizedThreadStart_t3696804522_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Client_ConnectionChange_m1946167475_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m3160087608_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3457625681_RuntimeMethod_var;
extern const RuntimeMethod* Client_SendPackets_m1979567306_RuntimeMethod_var;
extern const RuntimeMethod* Client_ProcessPackets_m769581024_RuntimeMethod_var;
extern const RuntimeMethod* Client_ReceiveFromSocket_m64041221_RuntimeMethod_var;
extern const RuntimeMethod* Client_InitialStartup_m164947211_RuntimeMethod_var;
extern String_t* _stringLiteral1902233403;
extern const uint32_t Client_Start_m2884463336_MetadataUsageId;
extern const RuntimeMethod* EventHandler_1_Invoke_m3855750629_RuntimeMethod_var;
extern const uint32_t Client_ConnectionChange_m1946167475_MetadataUsageId;
extern String_t* _stringLiteral4012446804;
extern String_t* _stringLiteral3601950220;
extern const uint32_t Client_ConnectionAliveOutput_m121306367_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* ConnectionStatusChanged_t3697862163_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Client_Startup_m1839724865_RuntimeMethod_var;
extern String_t* _stringLiteral2274586662;
extern String_t* _stringLiteral1506573154;
extern String_t* _stringLiteral3927627800;
extern const uint32_t Client_Startup_m1839724865_MetadataUsageId;
extern const uint32_t Client_InitialStartup_m164947211_MetadataUsageId;
extern const uint32_t Client_RetryConnecting_m1246692974_MetadataUsageId;
extern const uint32_t Client_RetryStart_m2371935439_MetadataUsageId;
extern RuntimeClass* UtilData_t3270872621_il2cpp_TypeInfo_var;
extern const uint32_t Client_SendNames_m2967364032_MetadataUsageId;
extern RuntimeClass* UdpClient_t967282006_il2cpp_TypeInfo_var;
extern const uint32_t Client_InitializeClients_m3494135943_MetadataUsageId;
extern RuntimeClass* TcpClient_t822906377_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncResult_t767004451_il2cpp_TypeInfo_var;
extern RuntimeClass* SocketException_t3852068672_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Client_InitializeTCPClient_m3878148179_RuntimeMethod_var;
extern const uint32_t Client_InitializeTCPClient_m3878148179_MetadataUsageId;
extern const uint32_t Client_StartThreads_m1380950268_MetadataUsageId;
extern const RuntimeMethod* Client_RetryConnecting_m1246692974_RuntimeMethod_var;
extern const uint32_t Client_RetryConnectionThreadFactory_m4255576880_MetadataUsageId;
extern const RuntimeMethod* Client_RetryStart_m2371935439_RuntimeMethod_var;
extern const uint32_t Client_RetryStartupThreadFactory_m773162268_MetadataUsageId;
extern RuntimeClass* Socket_t1119025450_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Packet_t288042838_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Take_TisByte_t1134296376_m378558329_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisByte_t1134296376_m3684293684_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3001567811_RuntimeMethod_var;
extern String_t* _stringLiteral3890679834;
extern String_t* _stringLiteral1774596248;
extern const uint32_t Client_ReceiveFromSocket_m64041221_MetadataUsageId;
extern RuntimeClass* Parse_t1966748167_il2cpp_TypeInfo_var;
extern const uint32_t Client_ProcessPackets_m769581024_MetadataUsageId;
extern const RuntimeMethod* Client_Send_m3979172155_RuntimeMethod_var;
extern String_t* _stringLiteral896581729;
extern const uint32_t Client_Send_m3979172155_MetadataUsageId;
extern const RuntimeMethod* Client_SendNow_m1807573565_RuntimeMethod_var;
extern String_t* _stringLiteral513090775;
extern const uint32_t Client_SendNow_m1807573565_MetadataUsageId;
extern const uint32_t Client_SendUDPNow_m4148789984_MetadataUsageId;
extern const uint32_t Client_SendTCPNow_m1223711336_MetadataUsageId;
extern String_t* _stringLiteral2009889833;
extern const uint32_t Client_SendPackets_m1979567306_MetadataUsageId;
extern const RuntimeMethod* Client_SendRegardless_m2417689071_RuntimeMethod_var;
extern String_t* _stringLiteral733737056;
extern const uint32_t Client_SendRegardless_m2417689071_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t ConnectionStatusChanged__ctor_m1663174587_MetadataUsageId;
extern RuntimeClass* QueueBufferU5BU5D_t213965988_il2cpp_TypeInfo_var;
extern RuntimeClass* PacketBufferU5BU5D_t518719314_il2cpp_TypeInfo_var;
extern RuntimeClass* BandwidthControlBuffer_t2974463824_il2cpp_TypeInfo_var;
extern RuntimeClass* PriorityBuffer_t827296848_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1_FieldInfo_var;
extern const uint32_t GenericController__ctor_m4194044539_MetadataUsageId;
extern const RuntimeMethod* GenericController_Enqueue_m4277654532_RuntimeMethod_var;
extern const uint32_t GenericController_Enqueue_m4277654532_MetadataUsageId;
extern const uint32_t GenericController__cctor_m4057573896_MetadataUsageId;
extern const RuntimeMethod* Message__ctor_m578942263_RuntimeMethod_var;
extern const RuntimeMethod* UtilMain_SubArray_TisByte_t1134296376_m3734100360_RuntimeMethod_var;
extern String_t* _stringLiteral2051685364;
extern const uint32_t Message__ctor_m578942263_MetadataUsageId;
extern const uint32_t Message__ctor_m3893616757_MetadataUsageId;
extern const RuntimeMethod* Message_SetTime_m2831510877_RuntimeMethod_var;
extern String_t* _stringLiteral885614628;
extern const uint32_t Message_SetTime_m2831510877_MetadataUsageId;
extern const uint32_t Message_AppendData_m2972351245_MetadataUsageId;
extern RuntimeClass* List_1_t2606371118_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2093855375_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m1653210841_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3346687475_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m397882077_RuntimeMethod_var;
extern const uint32_t Message_GetRawData_m3636661453_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral540236770;
extern String_t* _stringLiteral2710527202;
extern String_t* _stringLiteral3451435000;
extern String_t* _stringLiteral2767841595;
extern const uint32_t Message_ToString_m1206960684_MetadataUsageId;
extern RuntimeClass* Message_t750656897_il2cpp_TypeInfo_var;
extern const uint32_t Message_Clone_m2859467710_MetadataUsageId;
extern const uint32_t Packet__ctor_m2460275058_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern const uint32_t Packet_GetCurrentTime_m54903901_MetadataUsageId;
extern String_t* _stringLiteral1277468006;
extern String_t* _stringLiteral1277402469;
extern const uint32_t Packet_ToString_m2423962724_MetadataUsageId;
extern const uint32_t Packet_Clone_m1402477496_MetadataUsageId;
extern const uint32_t Packet_FromBytes_m133350180_MetadataUsageId;
extern RuntimeClass* PacketHandler_t780382300_il2cpp_TypeInfo_var;
extern RuntimeClass* ParseMethod_t2014021367_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PacketHandler_ParseWatchdogPacket_m3543783839_RuntimeMethod_var;
extern const uint32_t PacketHandler_Start_m2557195364_MetadataUsageId;
extern const uint32_t PacketHandler_ParseWatchdogPacket_m3543783839_MetadataUsageId;
extern const uint32_t PacketWriter__ctor_m2193869829_MetadataUsageId;
extern const uint32_t PacketWriter_Put_m2929071915_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1093851151_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m273212993_RuntimeMethod_var;
extern String_t* _stringLiteral62160184;
extern String_t* _stringLiteral3451303928;
extern String_t* _stringLiteral1398689121;
extern const uint32_t Parse_SetParseHandler_m2086723136_MetadataUsageId;
extern RuntimeClass* Server_t2355133253_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m4206083478_RuntimeMethod_var;
extern String_t* _stringLiteral3114980137;
extern String_t* _stringLiteral3476715932;
extern String_t* _stringLiteral3452614527;
extern String_t* _stringLiteral3815673821;
extern const uint32_t Parse_ParseMessage_m407972915_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3808507429_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4292710812_RuntimeMethod_var;
extern const uint32_t Parse__cctor_m3376738229_MetadataUsageId;
extern const RuntimeMethod* PriorityBuffer_Enqueue_m4112518386_RuntimeMethod_var;
extern const uint32_t PriorityBuffer_Enqueue_m4112518386_MetadataUsageId;
extern RuntimeClass* Queue_1_t134302332_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Queue_1__ctor_m3651017428_RuntimeMethod_var;
extern const uint32_t QueueBuffer__ctor_m99776581_MetadataUsageId;
extern const RuntimeMethod* QueueBuffer_Enqueue_m2179749773_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m2940053685_RuntimeMethod_var;
extern String_t* _stringLiteral3150376552;
extern const uint32_t QueueBuffer_Enqueue_m2179749773_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Peek_m2684039324_RuntimeMethod_var;
extern const uint32_t QueueBuffer_Peek_m958739071_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Dequeue_m758694657_RuntimeMethod_var;
extern const uint32_t QueueBuffer_Dequeue_m204885040_MetadataUsageId;
extern const RuntimeMethod* Server_SendNow_m1169191716_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3542877822_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1765558449_RuntimeMethod_var;
extern String_t* _stringLiteral2901600569;
extern String_t* _stringLiteral2102258256;
extern String_t* _stringLiteral3054392913;
extern String_t* _stringLiteral22641540;
extern String_t* _stringLiteral1912981096;
extern const uint32_t Server_SendNow_m1169191716_MetadataUsageId;
extern const uint32_t Server__cctor_m2167833410_MetadataUsageId;
extern const uint32_t WatchdogManager_add_ConnectionChanged_m1384616965_MetadataUsageId;
extern const uint32_t WatchdogManager_remove_ConnectionChanged_m3026589303_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t4117784682_il2cpp_TypeInfo_var;
extern RuntimeClass* PacketWriter_t1568959448_il2cpp_TypeInfo_var;
extern RuntimeClass* Watchdog_t37561087_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4061440649_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2393675001_RuntimeMethod_var;
extern const RuntimeMethod* WatchdogManager_Send_m3526057704_RuntimeMethod_var;
extern const uint32_t WatchdogManager_Start_m344589945_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m4007841446_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1994078344_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_CopyTo_m775782173_RuntimeMethod_var;
extern const uint32_t WatchdogManager_Send_m3526057704_MetadataUsageId;
extern const RuntimeMethod* WatchdogManager_RemoveWatchdog_m1082675166_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3641209829_RuntimeMethod_var;
extern String_t* _stringLiteral1893491463;
extern const uint32_t WatchdogManager_RemoveWatchdog_m1082675166_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m2634407293_RuntimeMethod_var;
extern const uint32_t WatchdogManager_FoundWatchdog_m1699557513_MetadataUsageId;
extern String_t* _stringLiteral1249558435;
extern const uint32_t WatchdogManager_OnConnectionChange_m1499489232_MetadataUsageId;
extern const uint32_t WatchdogManager__cctor_m2087328769_MetadataUsageId;
extern const uint32_t Watchdog_set_IsConnected_m1464509010_MetadataUsageId;
extern const RuntimeMethod* Watchdog_Listen_m4243538253_RuntimeMethod_var;
extern const uint32_t Watchdog__ctor_m3924101956_MetadataUsageId;
extern const uint32_t Watchdog_Listen_m4243538253_MetadataUsageId;
extern const uint32_t Log_get_Destination_m3502564452_MetadataUsageId;
extern const uint32_t Log_Output_m3762383546_MetadataUsageId;
extern RuntimeClass* Console_t3208230065_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4003303304;
extern String_t* _stringLiteral4040146204;
extern String_t* _stringLiteral2891990488;
extern String_t* _stringLiteral856573400;
extern String_t* _stringLiteral2754812653;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3450517491;
extern const uint32_t Log_ForceOutput_m3187504112_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass19_0_t4114446988_il2cpp_TypeInfo_var;
extern RuntimeClass* Converter_2_t3942642323_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2019918284_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CExceptionU3Eb__0_m1611771693_RuntimeMethod_var;
extern const RuntimeMethod* Converter_2__ctor_m2685104519_RuntimeMethod_var;
extern const RuntimeMethod* Array_ConvertAll_TisString_t_TisString_t_m2589238886_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisString_t_m2868510606_RuntimeMethod_var;
extern const RuntimeMethod* Log_WriteLine_m1611832926_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m1291176469_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ForEach_m2880463283_RuntimeMethod_var;
extern String_t* _stringLiteral2551264755;
extern const uint32_t Log_Exception_m409715775_MetadataUsageId;
extern const uint32_t Log_Write_m3585549439_MetadataUsageId;
extern String_t* _stringLiteral3453007779;
extern const uint32_t Log_WriteLine_m1611832926_MetadataUsageId;
extern const RuntimeType* Source_t1290227624_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* SeverityU5BU5D_t3396005585_il2cpp_TypeInfo_var;
extern const uint32_t Log__cctor_m2343905195_MetadataUsageId;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern const uint32_t UtilData_EnsureBigEndian_m3664900363_MetadataUsageId;
extern const uint32_t UtilData_ToBytes_m2267011298_MetadataUsageId;
extern const uint32_t UtilData_ToBytes_m2267273440_MetadataUsageId;
extern const uint32_t UtilData_ToBytes_m207232572_MetadataUsageId;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UtilData_ToString_m3457872771_RuntimeMethod_var;
extern String_t* _stringLiteral2931090045;
extern const uint32_t UtilData_ToString_m3457872771_MetadataUsageId;
extern RuntimeClass* UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0_FieldInfo_var;
extern const uint32_t UtilData__cctor_m3919120651_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t UtilMain_BytesToNiceString_m2509286138_MetadataUsageId;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;

struct PacketBufferU5BU5D_t518719314;
struct Int32U5BU5D_t385246372;
struct ByteU5BU5D_t4116647657;
struct QueueBufferU5BU5D_t213965988;
struct ObjectU5BU5D_t2843939325;
struct DelegateU5BU5D_t1703627840;
struct StringU5BU5D_t1281789340;
struct SeverityU5BU5D_t3396005585;
struct CharU5BU5D_t3528271667;
struct UInt16U5BU5D_t3326319531;


#ifndef U3CMODULEU3E_T692745557_H
#define U3CMODULEU3E_T692745557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745557 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745557_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef DICTIONARY_2_T791071292_H
#define DICTIONARY_2_T791071292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.Server/ScarletClient>
struct  Dictionary_2_t791071292  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3688022605* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t980746763 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2507115610 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___entries_1)); }
	inline EntryU5BU5D_t3688022605* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3688022605** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3688022605* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___keys_7)); }
	inline KeyCollection_t980746763 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t980746763 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t980746763 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ___values_8)); }
	inline ValueCollection_t2507115610 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2507115610 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2507115610 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t791071292, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T791071292_H
#ifndef WATCHDOGMANAGER_T1687039763_H
#define WATCHDOGMANAGER_T1687039763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.WatchdogManager
struct  WatchdogManager_t1687039763  : public RuntimeObject
{
public:

public:
};

struct WatchdogManager_t1687039763_StaticFields
{
public:
	// System.Boolean Scarlet.Communications.WatchdogManager::IsClient
	bool ___IsClient_0;
	// System.Boolean Scarlet.Communications.WatchdogManager::Started
	bool ___Started_1;
	// System.Boolean Scarlet.Communications.WatchdogManager::Continue
	bool ___Continue_2;
	// System.String Scarlet.Communications.WatchdogManager::MyName
	String_t* ___MyName_3;
	// Scarlet.Communications.Packet Scarlet.Communications.WatchdogManager::WatchdogPacket
	Packet_t288042838 * ___WatchdogPacket_4;
	// System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog> Scarlet.Communications.WatchdogManager::Watchdogs
	Dictionary_2_t4117784682 * ___Watchdogs_5;
	// System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged> Scarlet.Communications.WatchdogManager::ConnectionChanged
	EventHandler_1_t1622021596 * ___ConnectionChanged_6;

public:
	inline static int32_t get_offset_of_IsClient_0() { return static_cast<int32_t>(offsetof(WatchdogManager_t1687039763_StaticFields, ___IsClient_0)); }
	inline bool get_IsClient_0() const { return ___IsClient_0; }
	inline bool* get_address_of_IsClient_0() { return &___IsClient_0; }
	inline void set_IsClient_0(bool value)
	{
		___IsClient_0 = value;
	}

	inline static int32_t get_offset_of_Started_1() { return static_cast<int32_t>(offsetof(WatchdogManager_t1687039763_StaticFields, ___Started_1)); }
	inline bool get_Started_1() const { return ___Started_1; }
	inline bool* get_address_of_Started_1() { return &___Started_1; }
	inline void set_Started_1(bool value)
	{
		___Started_1 = value;
	}

	inline static int32_t get_offset_of_Continue_2() { return static_cast<int32_t>(offsetof(WatchdogManager_t1687039763_StaticFields, ___Continue_2)); }
	inline bool get_Continue_2() const { return ___Continue_2; }
	inline bool* get_address_of_Continue_2() { return &___Continue_2; }
	inline void set_Continue_2(bool value)
	{
		___Continue_2 = value;
	}

	inline static int32_t get_offset_of_MyName_3() { return static_cast<int32_t>(offsetof(WatchdogManager_t1687039763_StaticFields, ___MyName_3)); }
	inline String_t* get_MyName_3() const { return ___MyName_3; }
	inline String_t** get_address_of_MyName_3() { return &___MyName_3; }
	inline void set_MyName_3(String_t* value)
	{
		___MyName_3 = value;
		Il2CppCodeGenWriteBarrier((&___MyName_3), value);
	}

	inline static int32_t get_offset_of_WatchdogPacket_4() { return static_cast<int32_t>(offsetof(WatchdogManager_t1687039763_StaticFields, ___WatchdogPacket_4)); }
	inline Packet_t288042838 * get_WatchdogPacket_4() const { return ___WatchdogPacket_4; }
	inline Packet_t288042838 ** get_address_of_WatchdogPacket_4() { return &___WatchdogPacket_4; }
	inline void set_WatchdogPacket_4(Packet_t288042838 * value)
	{
		___WatchdogPacket_4 = value;
		Il2CppCodeGenWriteBarrier((&___WatchdogPacket_4), value);
	}

	inline static int32_t get_offset_of_Watchdogs_5() { return static_cast<int32_t>(offsetof(WatchdogManager_t1687039763_StaticFields, ___Watchdogs_5)); }
	inline Dictionary_2_t4117784682 * get_Watchdogs_5() const { return ___Watchdogs_5; }
	inline Dictionary_2_t4117784682 ** get_address_of_Watchdogs_5() { return &___Watchdogs_5; }
	inline void set_Watchdogs_5(Dictionary_2_t4117784682 * value)
	{
		___Watchdogs_5 = value;
		Il2CppCodeGenWriteBarrier((&___Watchdogs_5), value);
	}

	inline static int32_t get_offset_of_ConnectionChanged_6() { return static_cast<int32_t>(offsetof(WatchdogManager_t1687039763_StaticFields, ___ConnectionChanged_6)); }
	inline EventHandler_1_t1622021596 * get_ConnectionChanged_6() const { return ___ConnectionChanged_6; }
	inline EventHandler_1_t1622021596 ** get_address_of_ConnectionChanged_6() { return &___ConnectionChanged_6; }
	inline void set_ConnectionChanged_6(EventHandler_1_t1622021596 * value)
	{
		___ConnectionChanged_6 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectionChanged_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATCHDOGMANAGER_T1687039763_H
#ifndef QUEUE_1_T134302332_H
#define QUEUE_1_T134302332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<Scarlet.Communications.Packet>
struct  Queue_1_t134302332  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	PacketU5BU5D_t2783046291* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t134302332, ____array_0)); }
	inline PacketU5BU5D_t2783046291* get__array_0() const { return ____array_0; }
	inline PacketU5BU5D_t2783046291** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(PacketU5BU5D_t2783046291* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t134302332, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t134302332, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t134302332, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t134302332, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t134302332, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T134302332_H
#ifndef SCARLETCLIENT_T1005814993_H
#define SCARLETCLIENT_T1005814993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.Server/ScarletClient
struct  ScarletClient_t1005814993  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient Scarlet.Communications.Server/ScarletClient::TCP
	TcpClient_t822906377 * ___TCP_0;
	// System.Net.IPEndPoint Scarlet.Communications.Server/ScarletClient::EndpointUDP
	IPEndPoint_t3791887218 * ___EndpointUDP_1;
	// System.Boolean Scarlet.Communications.Server/ScarletClient::Connected
	bool ___Connected_2;

public:
	inline static int32_t get_offset_of_TCP_0() { return static_cast<int32_t>(offsetof(ScarletClient_t1005814993, ___TCP_0)); }
	inline TcpClient_t822906377 * get_TCP_0() const { return ___TCP_0; }
	inline TcpClient_t822906377 ** get_address_of_TCP_0() { return &___TCP_0; }
	inline void set_TCP_0(TcpClient_t822906377 * value)
	{
		___TCP_0 = value;
		Il2CppCodeGenWriteBarrier((&___TCP_0), value);
	}

	inline static int32_t get_offset_of_EndpointUDP_1() { return static_cast<int32_t>(offsetof(ScarletClient_t1005814993, ___EndpointUDP_1)); }
	inline IPEndPoint_t3791887218 * get_EndpointUDP_1() const { return ___EndpointUDP_1; }
	inline IPEndPoint_t3791887218 ** get_address_of_EndpointUDP_1() { return &___EndpointUDP_1; }
	inline void set_EndpointUDP_1(IPEndPoint_t3791887218 * value)
	{
		___EndpointUDP_1 = value;
		Il2CppCodeGenWriteBarrier((&___EndpointUDP_1), value);
	}

	inline static int32_t get_offset_of_Connected_2() { return static_cast<int32_t>(offsetof(ScarletClient_t1005814993, ___Connected_2)); }
	inline bool get_Connected_2() const { return ___Connected_2; }
	inline bool* get_address_of_Connected_2() { return &___Connected_2; }
	inline void set_Connected_2(bool value)
	{
		___Connected_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCARLETCLIENT_T1005814993_H
#ifndef U3CU3EC__DISPLAYCLASS19_0_T4114446988_H
#define U3CU3EC__DISPLAYCLASS19_0_T4114446988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Utilities.Log/<>c__DisplayClass19_0
struct  U3CU3Ec__DisplayClass19_0_t4114446988  : public RuntimeObject
{
public:
	// System.String Scarlet.Utilities.Log/<>c__DisplayClass19_0::Prefix
	String_t* ___Prefix_0;

public:
	inline static int32_t get_offset_of_Prefix_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t4114446988, ___Prefix_0)); }
	inline String_t* get_Prefix_0() const { return ___Prefix_0; }
	inline String_t** get_address_of_Prefix_0() { return &___Prefix_0; }
	inline void set_Prefix_0(String_t* value)
	{
		___Prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prefix_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS19_0_T4114446988_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T4117784682_H
#define DICTIONARY_2_T4117784682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog>
struct  Dictionary_2_t4117784682  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2480025511* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t12492857 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1538861704 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___entries_1)); }
	inline EntryU5BU5D_t2480025511* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2480025511** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2480025511* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___keys_7)); }
	inline KeyCollection_t12492857 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t12492857 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t12492857 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ___values_8)); }
	inline ValueCollection_t1538861704 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1538861704 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1538861704 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4117784682, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4117784682_H
#ifndef KEYCOLLECTION_T12492857_H
#define KEYCOLLECTION_T12492857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Scarlet.Communications.WatchdogManager/Watchdog>
struct  KeyCollection_t12492857  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t4117784682 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t12492857, ___dictionary_0)); }
	inline Dictionary_2_t4117784682 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t4117784682 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t4117784682 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T12492857_H
#ifndef DICTIONARY_2_T3808507429_H
#define DICTIONARY_2_T3808507429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Byte,System.Delegate>
struct  Dictionary_2_t3808507429  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3447751840* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3998182900 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1229584451 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___entries_1)); }
	inline EntryU5BU5D_t3447751840* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3447751840** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3447751840* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___keys_7)); }
	inline KeyCollection_t3998182900 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3998182900 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3998182900 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ___values_8)); }
	inline ValueCollection_t1229584451 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1229584451 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1229584451 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3808507429, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3808507429_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_1)); }
	inline ByteU5BU5D_t4116647657* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_t4116647657* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_t4116647657* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_t4116647657* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_t4116647657* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef MESSAGE_T750656897_H
#define MESSAGE_T750656897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.Message
struct  Message_t750656897  : public RuntimeObject
{
public:
	// System.Byte[] Scarlet.Communications.Message::Timestamp
	ByteU5BU5D_t4116647657* ___Timestamp_0;
	// System.Byte Scarlet.Communications.Message::ID
	uint8_t ___ID_1;
	// System.Byte[] Scarlet.Communications.Message::Payload
	ByteU5BU5D_t4116647657* ___Payload_2;

public:
	inline static int32_t get_offset_of_Timestamp_0() { return static_cast<int32_t>(offsetof(Message_t750656897, ___Timestamp_0)); }
	inline ByteU5BU5D_t4116647657* get_Timestamp_0() const { return ___Timestamp_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Timestamp_0() { return &___Timestamp_0; }
	inline void set_Timestamp_0(ByteU5BU5D_t4116647657* value)
	{
		___Timestamp_0 = value;
		Il2CppCodeGenWriteBarrier((&___Timestamp_0), value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(Message_t750656897, ___ID_1)); }
	inline uint8_t get_ID_1() const { return ___ID_1; }
	inline uint8_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(uint8_t value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_Payload_2() { return static_cast<int32_t>(offsetof(Message_t750656897, ___Payload_2)); }
	inline ByteU5BU5D_t4116647657* get_Payload_2() const { return ___Payload_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_Payload_2() { return &___Payload_2; }
	inline void set_Payload_2(ByteU5BU5D_t4116647657* value)
	{
		___Payload_2 = value;
		Il2CppCodeGenWriteBarrier((&___Payload_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGE_T750656897_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef PARSE_T1966748167_H
#define PARSE_T1966748167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.Parse
struct  Parse_t1966748167  : public RuntimeObject
{
public:

public:
};

struct Parse_t1966748167_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Delegate> Scarlet.Communications.Parse::ParsingHandlers
	Dictionary_2_t3808507429 * ___ParsingHandlers_0;

public:
	inline static int32_t get_offset_of_ParsingHandlers_0() { return static_cast<int32_t>(offsetof(Parse_t1966748167_StaticFields, ___ParsingHandlers_0)); }
	inline Dictionary_2_t3808507429 * get_ParsingHandlers_0() const { return ___ParsingHandlers_0; }
	inline Dictionary_2_t3808507429 ** get_address_of_ParsingHandlers_0() { return &___ParsingHandlers_0; }
	inline void set_ParsingHandlers_0(Dictionary_2_t3808507429 * value)
	{
		___ParsingHandlers_0 = value;
		Il2CppCodeGenWriteBarrier((&___ParsingHandlers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSE_T1966748167_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef PACKETHANDLER_T780382300_H
#define PACKETHANDLER_T780382300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.PacketHandler
struct  PacketHandler_t780382300  : public RuntimeObject
{
public:

public:
};

struct PacketHandler_t780382300_StaticFields
{
public:
	// System.Boolean Scarlet.Communications.PacketHandler::Started
	bool ___Started_0;

public:
	inline static int32_t get_offset_of_Started_0() { return static_cast<int32_t>(offsetof(PacketHandler_t780382300_StaticFields, ___Started_0)); }
	inline bool get_Started_0() const { return ___Started_0; }
	inline bool* get_address_of_Started_0() { return &___Started_0; }
	inline void set_Started_0(bool value)
	{
		___Started_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACKETHANDLER_T780382300_H
#ifndef PACKETWRITER_T1568959448_H
#define PACKETWRITER_T1568959448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.PacketWriter
struct  PacketWriter_t1568959448  : public RuntimeObject
{
public:
	// Scarlet.Communications.Packet Scarlet.Communications.PacketWriter::Packet
	Packet_t288042838 * ___Packet_0;

public:
	inline static int32_t get_offset_of_Packet_0() { return static_cast<int32_t>(offsetof(PacketWriter_t1568959448, ___Packet_0)); }
	inline Packet_t288042838 * get_Packet_0() const { return ___Packet_0; }
	inline Packet_t288042838 ** get_address_of_Packet_0() { return &___Packet_0; }
	inline void set_Packet_0(Packet_t288042838 * value)
	{
		___Packet_0 = value;
		Il2CppCodeGenWriteBarrier((&___Packet_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACKETWRITER_T1568959448_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t1281789340* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t1281789340* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t1281789340** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t1281789340* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UTILMAIN_T184906909_H
#define UTILMAIN_T184906909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Utilities.UtilMain
struct  UtilMain_t184906909  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILMAIN_T184906909_H
#ifndef PACKETBUFFER_T1868544067_H
#define PACKETBUFFER_T1868544067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.PacketBuffer
struct  PacketBuffer_t1868544067  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACKETBUFFER_T1868544067_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef ENDPOINT_T982345378_H
#define ENDPOINT_T982345378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_t982345378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_T982345378_H
#ifndef LIST_1_T1760117580_H
#define LIST_1_T1760117580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Scarlet.Communications.Packet>
struct  List_1_t1760117580  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PacketU5BU5D_t2783046291* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1760117580, ____items_1)); }
	inline PacketU5BU5D_t2783046291* get__items_1() const { return ____items_1; }
	inline PacketU5BU5D_t2783046291** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PacketU5BU5D_t2783046291* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1760117580, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1760117580, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1760117580, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1760117580_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PacketU5BU5D_t2783046291* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1760117580_StaticFields, ____emptyArray_5)); }
	inline PacketU5BU5D_t2783046291* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PacketU5BU5D_t2783046291** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PacketU5BU5D_t2783046291* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1760117580_H
#ifndef UTILDATA_T3270872621_H
#define UTILDATA_T3270872621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Utilities.UtilData
struct  UtilData_t3270872621  : public RuntimeObject
{
public:

public:
};

struct UtilData_t3270872621_StaticFields
{
public:
	// System.UInt16[] Scarlet.Utilities.UtilData::crc16_table
	UInt16U5BU5D_t3326319531* ___crc16_table_0;

public:
	inline static int32_t get_offset_of_crc16_table_0() { return static_cast<int32_t>(offsetof(UtilData_t3270872621_StaticFields, ___crc16_table_0)); }
	inline UInt16U5BU5D_t3326319531* get_crc16_table_0() const { return ___crc16_table_0; }
	inline UInt16U5BU5D_t3326319531** get_address_of_crc16_table_0() { return &___crc16_table_0; }
	inline void set_crc16_table_0(UInt16U5BU5D_t3326319531* value)
	{
		___crc16_table_0 = value;
		Il2CppCodeGenWriteBarrier((&___crc16_table_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILDATA_T3270872621_H
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef PACKET_T288042838_H
#define PACKET_T288042838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.Packet
struct  Packet_t288042838  : public RuntimeObject
{
public:
	// Scarlet.Communications.Message Scarlet.Communications.Packet::<Data>k__BackingField
	Message_t750656897 * ___U3CDataU3Ek__BackingField_0;
	// System.String Scarlet.Communications.Packet::Endpoint
	String_t* ___Endpoint_1;
	// System.Boolean Scarlet.Communications.Packet::IsUDP
	bool ___IsUDP_2;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Packet_t288042838, ___U3CDataU3Ek__BackingField_0)); }
	inline Message_t750656897 * get_U3CDataU3Ek__BackingField_0() const { return ___U3CDataU3Ek__BackingField_0; }
	inline Message_t750656897 ** get_address_of_U3CDataU3Ek__BackingField_0() { return &___U3CDataU3Ek__BackingField_0; }
	inline void set_U3CDataU3Ek__BackingField_0(Message_t750656897 * value)
	{
		___U3CDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_Endpoint_1() { return static_cast<int32_t>(offsetof(Packet_t288042838, ___Endpoint_1)); }
	inline String_t* get_Endpoint_1() const { return ___Endpoint_1; }
	inline String_t** get_address_of_Endpoint_1() { return &___Endpoint_1; }
	inline void set_Endpoint_1(String_t* value)
	{
		___Endpoint_1 = value;
		Il2CppCodeGenWriteBarrier((&___Endpoint_1), value);
	}

	inline static int32_t get_offset_of_IsUDP_2() { return static_cast<int32_t>(offsetof(Packet_t288042838, ___IsUDP_2)); }
	inline bool get_IsUDP_2() const { return ___IsUDP_2; }
	inline bool* get_address_of_IsUDP_2() { return &___IsUDP_2; }
	inline void set_IsUDP_2(bool value)
	{
		___IsUDP_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACKET_T288042838_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public MarshalByRefObject_t2760389100
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_9)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t3252573759 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t3252573759 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t3252573759 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t3252573759 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t3252573759 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_1)); }
	inline TextWriter_t3478189236 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t3478189236 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t3478189236 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t3252573759 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t3252573759 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t3252573759 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t3252573759 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t3252573759 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t3252573759 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t3252573759 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t3252573759 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t3252573759 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t3252573759 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t3252573759 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t3252573759 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t3252573759 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t3252573759 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t3252573759 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t3252573759 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef PRIORITYBUFFER_T827296848_H
#define PRIORITYBUFFER_T827296848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.PriorityBuffer
struct  PriorityBuffer_t827296848  : public PacketBuffer_t1868544067
{
public:
	// Scarlet.Communications.PacketBuffer[] Scarlet.Communications.PriorityBuffer::Buffers
	PacketBufferU5BU5D_t518719314* ___Buffers_0;
	// System.Int32 Scarlet.Communications.PriorityBuffer::NBuffers
	int32_t ___NBuffers_1;

public:
	inline static int32_t get_offset_of_Buffers_0() { return static_cast<int32_t>(offsetof(PriorityBuffer_t827296848, ___Buffers_0)); }
	inline PacketBufferU5BU5D_t518719314* get_Buffers_0() const { return ___Buffers_0; }
	inline PacketBufferU5BU5D_t518719314** get_address_of_Buffers_0() { return &___Buffers_0; }
	inline void set_Buffers_0(PacketBufferU5BU5D_t518719314* value)
	{
		___Buffers_0 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_0), value);
	}

	inline static int32_t get_offset_of_NBuffers_1() { return static_cast<int32_t>(offsetof(PriorityBuffer_t827296848, ___NBuffers_1)); }
	inline int32_t get_NBuffers_1() const { return ___NBuffers_1; }
	inline int32_t* get_address_of_NBuffers_1() { return &___NBuffers_1; }
	inline void set_NBuffers_1(int32_t value)
	{
		___NBuffers_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIORITYBUFFER_T827296848_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef QUEUEBUFFER_T2864759769_H
#define QUEUEBUFFER_T2864759769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.QueueBuffer
struct  QueueBuffer_t2864759769  : public PacketBuffer_t1868544067
{
public:
	// System.Collections.Generic.Queue`1<Scarlet.Communications.Packet> Scarlet.Communications.QueueBuffer::Queue
	Queue_1_t134302332 * ___Queue_0;

public:
	inline static int32_t get_offset_of_Queue_0() { return static_cast<int32_t>(offsetof(QueueBuffer_t2864759769, ___Queue_0)); }
	inline Queue_1_t134302332 * get_Queue_0() const { return ___Queue_0; }
	inline Queue_1_t134302332 ** get_address_of_Queue_0() { return &___Queue_0; }
	inline void set_Queue_0(Queue_1_t134302332 * value)
	{
		___Queue_0 = value;
		Il2CppCodeGenWriteBarrier((&___Queue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEBUFFER_T2864759769_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t95296544 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t1748372627 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___internal_thread_6)); }
	inline InternalThread_t95296544 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t95296544 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t95296544 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((&___internal_thread_6), value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ThreadStartArg_7), value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_8), value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((&___principal_9), value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegate_12), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t1748372627 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t1748372627 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t1748372627 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionContext_13), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1707895399 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1707895399 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1707895399 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStoreMgr_0), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentCulture_4), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentUICulture_5), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t2567786569 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t4157843068 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t4157843068 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t2300836069 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_t2567786569 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_t2567786569 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_t2567786569 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStore_1), value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t4157843068 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t4157843068 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentCulture_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t4157843068 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t4157843068 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentUICulture_3), value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_t2300836069 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_t2300836069 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_t2300836069 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((&___current_thread_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef GENERICCONTROLLER_T3250570503_H
#define GENERICCONTROLLER_T3250570503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.GenericController
struct  GenericController_t3250570503  : public PacketBuffer_t1868544067
{
public:
	// Scarlet.Communications.QueueBuffer[] Scarlet.Communications.GenericController::Buffers
	QueueBufferU5BU5D_t213965988* ___Buffers_1;
	// Scarlet.Communications.PriorityBuffer Scarlet.Communications.GenericController::PriorityBuffer
	PriorityBuffer_t827296848 * ___PriorityBuffer_2;
	// Scarlet.Communications.BandwidthControlBuffer Scarlet.Communications.GenericController::BandwidthBuffer
	BandwidthControlBuffer_t2974463824 * ___BandwidthBuffer_3;

public:
	inline static int32_t get_offset_of_Buffers_1() { return static_cast<int32_t>(offsetof(GenericController_t3250570503, ___Buffers_1)); }
	inline QueueBufferU5BU5D_t213965988* get_Buffers_1() const { return ___Buffers_1; }
	inline QueueBufferU5BU5D_t213965988** get_address_of_Buffers_1() { return &___Buffers_1; }
	inline void set_Buffers_1(QueueBufferU5BU5D_t213965988* value)
	{
		___Buffers_1 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_1), value);
	}

	inline static int32_t get_offset_of_PriorityBuffer_2() { return static_cast<int32_t>(offsetof(GenericController_t3250570503, ___PriorityBuffer_2)); }
	inline PriorityBuffer_t827296848 * get_PriorityBuffer_2() const { return ___PriorityBuffer_2; }
	inline PriorityBuffer_t827296848 ** get_address_of_PriorityBuffer_2() { return &___PriorityBuffer_2; }
	inline void set_PriorityBuffer_2(PriorityBuffer_t827296848 * value)
	{
		___PriorityBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___PriorityBuffer_2), value);
	}

	inline static int32_t get_offset_of_BandwidthBuffer_3() { return static_cast<int32_t>(offsetof(GenericController_t3250570503, ___BandwidthBuffer_3)); }
	inline BandwidthControlBuffer_t2974463824 * get_BandwidthBuffer_3() const { return ___BandwidthBuffer_3; }
	inline BandwidthControlBuffer_t2974463824 ** get_address_of_BandwidthBuffer_3() { return &___BandwidthBuffer_3; }
	inline void set_BandwidthBuffer_3(BandwidthControlBuffer_t2974463824 * value)
	{
		___BandwidthBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___BandwidthBuffer_3), value);
	}
};

struct GenericController_t3250570503_StaticFields
{
public:
	// System.Int32 Scarlet.Communications.GenericController::N_PRIORITIES
	int32_t ___N_PRIORITIES_0;

public:
	inline static int32_t get_offset_of_N_PRIORITIES_0() { return static_cast<int32_t>(offsetof(GenericController_t3250570503_StaticFields, ___N_PRIORITIES_0)); }
	inline int32_t get_N_PRIORITIES_0() const { return ___N_PRIORITIES_0; }
	inline int32_t* get_address_of_N_PRIORITIES_0() { return &___N_PRIORITIES_0; }
	inline void set_N_PRIORITIES_0(int32_t value)
	{
		___N_PRIORITIES_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICCONTROLLER_T3250570503_H
#ifndef IPENDPOINT_T3791887218_H
#define IPENDPOINT_T3791887218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPEndPoint
struct  IPEndPoint_t3791887218  : public EndPoint_t982345378
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t241777590 * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218, ___m_Address_0)); }
	inline IPAddress_t241777590 * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t241777590 ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t241777590 * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Address_0), value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_t3791887218_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t3791887218 * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t3791887218 * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218_StaticFields, ___Any_2)); }
	inline IPEndPoint_t3791887218 * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_t3791887218 ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_t3791887218 * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((&___Any_2), value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_t3791887218 * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_t3791887218 ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_t3791887218 * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPENDPOINT_T3791887218_H
#ifndef CONNECTIONSTATUSCHANGED_T3697862163_H
#define CONNECTIONSTATUSCHANGED_T3697862163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.ConnectionStatusChanged
struct  ConnectionStatusChanged_t3697862163  : public EventArgs_t3591816995
{
public:
	// System.String Scarlet.Communications.ConnectionStatusChanged::StatusEndpoint
	String_t* ___StatusEndpoint_1;
	// System.Boolean Scarlet.Communications.ConnectionStatusChanged::StatusConnected
	bool ___StatusConnected_2;

public:
	inline static int32_t get_offset_of_StatusEndpoint_1() { return static_cast<int32_t>(offsetof(ConnectionStatusChanged_t3697862163, ___StatusEndpoint_1)); }
	inline String_t* get_StatusEndpoint_1() const { return ___StatusEndpoint_1; }
	inline String_t** get_address_of_StatusEndpoint_1() { return &___StatusEndpoint_1; }
	inline void set_StatusEndpoint_1(String_t* value)
	{
		___StatusEndpoint_1 = value;
		Il2CppCodeGenWriteBarrier((&___StatusEndpoint_1), value);
	}

	inline static int32_t get_offset_of_StatusConnected_2() { return static_cast<int32_t>(offsetof(ConnectionStatusChanged_t3697862163, ___StatusConnected_2)); }
	inline bool get_StatusConnected_2() const { return ___StatusConnected_2; }
	inline bool* get_address_of_StatusConnected_2() { return &___StatusConnected_2; }
	inline void set_StatusConnected_2(bool value)
	{
		___StatusConnected_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONSTATUSCHANGED_T3697862163_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef __STATICARRAYINITTYPESIZEU3D512_T3317833661_H
#define __STATICARRAYINITTYPESIZEU3D512_T3317833661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t3317833661 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t3317833661__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T3317833661_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T2710994320_H
#define __STATICARRAYINITTYPESIZEU3D12_T2710994320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t2710994320 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t2710994320__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T2710994320_H
#ifndef BANDWIDTHCONTROLBUFFER_T2974463824_H
#define BANDWIDTHCONTROLBUFFER_T2974463824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.BandwidthControlBuffer
struct  BandwidthControlBuffer_t2974463824  : public PacketBuffer_t1868544067
{
public:
	// Scarlet.Communications.PacketBuffer[] Scarlet.Communications.BandwidthControlBuffer::Buffers
	PacketBufferU5BU5D_t518719314* ___Buffers_0;
	// System.Int32[] Scarlet.Communications.BandwidthControlBuffer::BandwidthAllocations
	Int32U5BU5D_t385246372* ___BandwidthAllocations_1;
	// System.Int32 Scarlet.Communications.BandwidthControlBuffer::NBuffers
	int32_t ___NBuffers_2;
	// System.Int32[] Scarlet.Communications.BandwidthControlBuffer::TokenBuckets
	Int32U5BU5D_t385246372* ___TokenBuckets_3;
	// System.Int32 Scarlet.Communications.BandwidthControlBuffer::MaximumToken
	int32_t ___MaximumToken_4;
	// System.Int32 Scarlet.Communications.BandwidthControlBuffer::CurrentBucket
	int32_t ___CurrentBucket_5;
	// Scarlet.Communications.Packet Scarlet.Communications.BandwidthControlBuffer::PacketCache
	Packet_t288042838 * ___PacketCache_6;

public:
	inline static int32_t get_offset_of_Buffers_0() { return static_cast<int32_t>(offsetof(BandwidthControlBuffer_t2974463824, ___Buffers_0)); }
	inline PacketBufferU5BU5D_t518719314* get_Buffers_0() const { return ___Buffers_0; }
	inline PacketBufferU5BU5D_t518719314** get_address_of_Buffers_0() { return &___Buffers_0; }
	inline void set_Buffers_0(PacketBufferU5BU5D_t518719314* value)
	{
		___Buffers_0 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_0), value);
	}

	inline static int32_t get_offset_of_BandwidthAllocations_1() { return static_cast<int32_t>(offsetof(BandwidthControlBuffer_t2974463824, ___BandwidthAllocations_1)); }
	inline Int32U5BU5D_t385246372* get_BandwidthAllocations_1() const { return ___BandwidthAllocations_1; }
	inline Int32U5BU5D_t385246372** get_address_of_BandwidthAllocations_1() { return &___BandwidthAllocations_1; }
	inline void set_BandwidthAllocations_1(Int32U5BU5D_t385246372* value)
	{
		___BandwidthAllocations_1 = value;
		Il2CppCodeGenWriteBarrier((&___BandwidthAllocations_1), value);
	}

	inline static int32_t get_offset_of_NBuffers_2() { return static_cast<int32_t>(offsetof(BandwidthControlBuffer_t2974463824, ___NBuffers_2)); }
	inline int32_t get_NBuffers_2() const { return ___NBuffers_2; }
	inline int32_t* get_address_of_NBuffers_2() { return &___NBuffers_2; }
	inline void set_NBuffers_2(int32_t value)
	{
		___NBuffers_2 = value;
	}

	inline static int32_t get_offset_of_TokenBuckets_3() { return static_cast<int32_t>(offsetof(BandwidthControlBuffer_t2974463824, ___TokenBuckets_3)); }
	inline Int32U5BU5D_t385246372* get_TokenBuckets_3() const { return ___TokenBuckets_3; }
	inline Int32U5BU5D_t385246372** get_address_of_TokenBuckets_3() { return &___TokenBuckets_3; }
	inline void set_TokenBuckets_3(Int32U5BU5D_t385246372* value)
	{
		___TokenBuckets_3 = value;
		Il2CppCodeGenWriteBarrier((&___TokenBuckets_3), value);
	}

	inline static int32_t get_offset_of_MaximumToken_4() { return static_cast<int32_t>(offsetof(BandwidthControlBuffer_t2974463824, ___MaximumToken_4)); }
	inline int32_t get_MaximumToken_4() const { return ___MaximumToken_4; }
	inline int32_t* get_address_of_MaximumToken_4() { return &___MaximumToken_4; }
	inline void set_MaximumToken_4(int32_t value)
	{
		___MaximumToken_4 = value;
	}

	inline static int32_t get_offset_of_CurrentBucket_5() { return static_cast<int32_t>(offsetof(BandwidthControlBuffer_t2974463824, ___CurrentBucket_5)); }
	inline int32_t get_CurrentBucket_5() const { return ___CurrentBucket_5; }
	inline int32_t* get_address_of_CurrentBucket_5() { return &___CurrentBucket_5; }
	inline void set_CurrentBucket_5(int32_t value)
	{
		___CurrentBucket_5 = value;
	}

	inline static int32_t get_offset_of_PacketCache_6() { return static_cast<int32_t>(offsetof(BandwidthControlBuffer_t2974463824, ___PacketCache_6)); }
	inline Packet_t288042838 * get_PacketCache_6() const { return ___PacketCache_6; }
	inline Packet_t288042838 ** get_address_of_PacketCache_6() { return &___PacketCache_6; }
	inline void set_PacketCache_6(Packet_t288042838 * value)
	{
		___PacketCache_6 = value;
		Il2CppCodeGenWriteBarrier((&___PacketCache_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BANDWIDTHCONTROLBUFFER_T2974463824_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef CONSOLECOLOR_T2680034144_H
#define CONSOLECOLOR_T2680034144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleColor
struct  ConsoleColor_t2680034144 
{
public:
	// System.Int32 System.ConsoleColor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleColor_t2680034144, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLECOLOR_T2680034144_H
#ifndef STREAMWRITER_T1266378904_H
#define STREAMWRITER_T1266378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t1266378904  : public TextWriter_t3478189236
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t1273022909 * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_t1523322056 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t2198218980 * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_t4116647657* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t3528271667* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t3187275312 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___stream_12)); }
	inline Stream_t1273022909 * get_stream_12() const { return ___stream_12; }
	inline Stream_t1273022909 ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t1273022909 * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((&___stream_12), value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___encoding_13)); }
	inline Encoding_t1523322056 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_t1523322056 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_t1523322056 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_13), value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___encoder_14)); }
	inline Encoder_t2198218980 * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t2198218980 ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t2198218980 * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_14), value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byteBuffer_15)); }
	inline ByteU5BU5D_t4116647657* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_t4116647657** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_t4116647657* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuffer_15), value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___charBuffer_16)); }
	inline CharU5BU5D_t3528271667* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t3528271667** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t3528271667* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_16), value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ____asyncWriteTask_22)); }
	inline Task_t3187275312 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t3187275312 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t3187275312 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((&____asyncWriteTask_22), value);
	}
};

struct StreamWriter_t1266378904_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1266378904 * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_t1523322056 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ___Null_11)); }
	inline StreamWriter_t1266378904 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t1266378904 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t1266378904 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((&___Null_11), value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_t1523322056 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_t1523322056 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_t1523322056 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((&____UTF8NoBOM_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T1266378904_H
#ifndef SOURCE_T1290227624_H
#define SOURCE_T1290227624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Utilities.Log/Source
struct  Source_t1290227624 
{
public:
	// System.Int32 Scarlet.Utilities.Log/Source::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Source_t1290227624, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCE_T1290227624_H
#ifndef STRINGSPLITOPTIONS_T641086070_H
#define STRINGSPLITOPTIONS_T641086070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t641086070 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_t641086070, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGSPLITOPTIONS_T641086070_H
#ifndef SEVERITY_T3390618992_H
#define SEVERITY_T3390618992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Utilities.Log/Severity
struct  Severity_t3390618992 
{
public:
	// System.Int32 Scarlet.Utilities.Log/Severity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Severity_t3390618992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEVERITY_T3390618992_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255368  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::121C416AA017AFC8EFE9379D44D3B8F9F9391F14
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB
	__StaticArrayInitTypeSizeU3D12_t2710994320  ___A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1;

public:
	inline static int32_t get_offset_of_U3121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_U3121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0() const { return ___121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_U3121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0() { return &___121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0; }
	inline void set_U3121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0 = value;
	}

	inline static int32_t get_offset_of_A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994320  get_A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1() const { return ___A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994320 * get_address_of_A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1() { return &___A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1; }
	inline void set_A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1(__StaticArrayInitTypeSizeU3D12_t2710994320  value)
	{
		___A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#ifndef SOCKETTYPE_T2175930299_H
#define SOCKETTYPE_T2175930299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2175930299 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t2175930299, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETTYPE_T2175930299_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef PACKETPRIORITY_T1946715516_H
#define PACKETPRIORITY_T1946715516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.PacketPriority
struct  PacketPriority_t1946715516 
{
public:
	// System.Int32 Scarlet.Communications.PacketPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PacketPriority_t1946715516, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACKETPRIORITY_T1946715516_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef PROTOCOLTYPE_T303635025_H
#define PROTOCOLTYPE_T303635025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t303635025 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t303635025, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTOCOLTYPE_T303635025_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef SERVER_T2355133253_H
#define SERVER_T2355133253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.Server
struct  Server_t2355133253  : public RuntimeObject
{
public:

public:
};

struct Server_t2355133253_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.Server/ScarletClient> Scarlet.Communications.Server::Clients
	Dictionary_2_t791071292 * ___Clients_0;
	// System.Net.Sockets.UdpClient Scarlet.Communications.Server::UDPListener
	UdpClient_t967282006 * ___UDPListener_1;
	// System.Boolean Scarlet.Communications.Server::Initialized
	bool ___Initialized_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Scarlet.Communications.Server::Stopping
	bool ___Stopping_3;
	// System.Boolean Scarlet.Communications.Server::OutputWatchdogDebug
	bool ___OutputWatchdogDebug_4;
	// System.Boolean Scarlet.Communications.Server::StorePackets
	bool ___StorePackets_5;
	// System.Collections.Generic.List`1<Scarlet.Communications.Packet> Scarlet.Communications.Server::PacketsSent
	List_1_t1760117580 * ___PacketsSent_6;

public:
	inline static int32_t get_offset_of_Clients_0() { return static_cast<int32_t>(offsetof(Server_t2355133253_StaticFields, ___Clients_0)); }
	inline Dictionary_2_t791071292 * get_Clients_0() const { return ___Clients_0; }
	inline Dictionary_2_t791071292 ** get_address_of_Clients_0() { return &___Clients_0; }
	inline void set_Clients_0(Dictionary_2_t791071292 * value)
	{
		___Clients_0 = value;
		Il2CppCodeGenWriteBarrier((&___Clients_0), value);
	}

	inline static int32_t get_offset_of_UDPListener_1() { return static_cast<int32_t>(offsetof(Server_t2355133253_StaticFields, ___UDPListener_1)); }
	inline UdpClient_t967282006 * get_UDPListener_1() const { return ___UDPListener_1; }
	inline UdpClient_t967282006 ** get_address_of_UDPListener_1() { return &___UDPListener_1; }
	inline void set_UDPListener_1(UdpClient_t967282006 * value)
	{
		___UDPListener_1 = value;
		Il2CppCodeGenWriteBarrier((&___UDPListener_1), value);
	}

	inline static int32_t get_offset_of_Initialized_2() { return static_cast<int32_t>(offsetof(Server_t2355133253_StaticFields, ___Initialized_2)); }
	inline bool get_Initialized_2() const { return ___Initialized_2; }
	inline bool* get_address_of_Initialized_2() { return &___Initialized_2; }
	inline void set_Initialized_2(bool value)
	{
		___Initialized_2 = value;
	}

	inline static int32_t get_offset_of_Stopping_3() { return static_cast<int32_t>(offsetof(Server_t2355133253_StaticFields, ___Stopping_3)); }
	inline bool get_Stopping_3() const { return ___Stopping_3; }
	inline bool* get_address_of_Stopping_3() { return &___Stopping_3; }
	inline void set_Stopping_3(bool value)
	{
		___Stopping_3 = value;
	}

	inline static int32_t get_offset_of_OutputWatchdogDebug_4() { return static_cast<int32_t>(offsetof(Server_t2355133253_StaticFields, ___OutputWatchdogDebug_4)); }
	inline bool get_OutputWatchdogDebug_4() const { return ___OutputWatchdogDebug_4; }
	inline bool* get_address_of_OutputWatchdogDebug_4() { return &___OutputWatchdogDebug_4; }
	inline void set_OutputWatchdogDebug_4(bool value)
	{
		___OutputWatchdogDebug_4 = value;
	}

	inline static int32_t get_offset_of_StorePackets_5() { return static_cast<int32_t>(offsetof(Server_t2355133253_StaticFields, ___StorePackets_5)); }
	inline bool get_StorePackets_5() const { return ___StorePackets_5; }
	inline bool* get_address_of_StorePackets_5() { return &___StorePackets_5; }
	inline void set_StorePackets_5(bool value)
	{
		___StorePackets_5 = value;
	}

	inline static int32_t get_offset_of_PacketsSent_6() { return static_cast<int32_t>(offsetof(Server_t2355133253_StaticFields, ___PacketsSent_6)); }
	inline List_1_t1760117580 * get_PacketsSent_6() const { return ___PacketsSent_6; }
	inline List_1_t1760117580 ** get_address_of_PacketsSent_6() { return &___PacketsSent_6; }
	inline void set_PacketsSent_6(List_1_t1760117580 * value)
	{
		___PacketsSent_6 = value;
		Il2CppCodeGenWriteBarrier((&___PacketsSent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVER_T2355133253_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef SOCKETFLAGS_T2969870452_H
#define SOCKETFLAGS_T2969870452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t2969870452 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_t2969870452, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETFLAGS_T2969870452_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_0)); }
	inline TimeSpan_t881159249  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t881159249 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t881159249  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t881159249  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t881159249  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t881159249  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t881159249  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t1972936122 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t1972936122 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___safeWaitHandle_4), value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1743403487_marshaled_pinvoke : public MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1743403487_marshaled_com : public MarshalByRefObject_t2760389100_marshaled_com
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
#endif // WAITHANDLE_T1743403487_H
#ifndef NETWORKSTREAM_T4071955934_H
#define NETWORKSTREAM_T4071955934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t4071955934  : public Stream_t1273022909
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t1119025450 * ___m_StreamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_7;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_11;

public:
	inline static int32_t get_offset_of_m_StreamSocket_4() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_StreamSocket_4)); }
	inline Socket_t1119025450 * get_m_StreamSocket_4() const { return ___m_StreamSocket_4; }
	inline Socket_t1119025450 ** get_address_of_m_StreamSocket_4() { return &___m_StreamSocket_4; }
	inline void set_m_StreamSocket_4(Socket_t1119025450 * value)
	{
		___m_StreamSocket_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StreamSocket_4), value);
	}

	inline static int32_t get_offset_of_m_Readable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_Readable_5)); }
	inline bool get_m_Readable_5() const { return ___m_Readable_5; }
	inline bool* get_address_of_m_Readable_5() { return &___m_Readable_5; }
	inline void set_m_Readable_5(bool value)
	{
		___m_Readable_5 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_Writeable_6)); }
	inline bool get_m_Writeable_6() const { return ___m_Writeable_6; }
	inline bool* get_address_of_m_Writeable_6() { return &___m_Writeable_6; }
	inline void set_m_Writeable_6(bool value)
	{
		___m_Writeable_6 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_7() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_OwnsSocket_7)); }
	inline bool get_m_OwnsSocket_7() const { return ___m_OwnsSocket_7; }
	inline bool* get_address_of_m_OwnsSocket_7() { return &___m_OwnsSocket_7; }
	inline void set_m_OwnsSocket_7(bool value)
	{
		___m_OwnsSocket_7 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_8() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CloseTimeout_8)); }
	inline int32_t get_m_CloseTimeout_8() const { return ___m_CloseTimeout_8; }
	inline int32_t* get_address_of_m_CloseTimeout_8() { return &___m_CloseTimeout_8; }
	inline void set_m_CloseTimeout_8(int32_t value)
	{
		___m_CloseTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_9() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CleanedUp_9)); }
	inline bool get_m_CleanedUp_9() const { return ___m_CleanedUp_9; }
	inline bool* get_address_of_m_CleanedUp_9() { return &___m_CleanedUp_9; }
	inline void set_m_CleanedUp_9(bool value)
	{
		___m_CleanedUp_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_10() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CurrentReadTimeout_10)); }
	inline int32_t get_m_CurrentReadTimeout_10() const { return ___m_CurrentReadTimeout_10; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_10() { return &___m_CurrentReadTimeout_10; }
	inline void set_m_CurrentReadTimeout_10(int32_t value)
	{
		___m_CurrentReadTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CurrentWriteTimeout_11)); }
	inline int32_t get_m_CurrentWriteTimeout_11() const { return ___m_CurrentWriteTimeout_11; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_11() { return &___m_CurrentWriteTimeout_11; }
	inline void set_m_CurrentWriteTimeout_11(int32_t value)
	{
		___m_CurrentWriteTimeout_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T4071955934_H
#ifndef WRITEDESTINATION_T1879682071_H
#define WRITEDESTINATION_T1879682071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Utilities.Log/WriteDestination
struct  WriteDestination_t1879682071 
{
public:
	// System.Int32 Scarlet.Utilities.Log/WriteDestination::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteDestination_t1879682071, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEDESTINATION_T1879682071_H
#ifndef WATCHDOG_T37561087_H
#define WATCHDOG_T37561087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.WatchdogManager/Watchdog
struct  Watchdog_t37561087  : public RuntimeObject
{
public:
	// System.Boolean Scarlet.Communications.WatchdogManager/Watchdog::P_IsConnected
	bool ___P_IsConnected_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Scarlet.Communications.WatchdogManager/Watchdog::FoundWatchdogThisCycle
	bool ___FoundWatchdogThisCycle_1;
	// System.String Scarlet.Communications.WatchdogManager/Watchdog::Endpoint
	String_t* ___Endpoint_2;

public:
	inline static int32_t get_offset_of_P_IsConnected_0() { return static_cast<int32_t>(offsetof(Watchdog_t37561087, ___P_IsConnected_0)); }
	inline bool get_P_IsConnected_0() const { return ___P_IsConnected_0; }
	inline bool* get_address_of_P_IsConnected_0() { return &___P_IsConnected_0; }
	inline void set_P_IsConnected_0(bool value)
	{
		___P_IsConnected_0 = value;
	}

	inline static int32_t get_offset_of_FoundWatchdogThisCycle_1() { return static_cast<int32_t>(offsetof(Watchdog_t37561087, ___FoundWatchdogThisCycle_1)); }
	inline bool get_FoundWatchdogThisCycle_1() const { return ___FoundWatchdogThisCycle_1; }
	inline bool* get_address_of_FoundWatchdogThisCycle_1() { return &___FoundWatchdogThisCycle_1; }
	inline void set_FoundWatchdogThisCycle_1(bool value)
	{
		___FoundWatchdogThisCycle_1 = value;
	}

	inline static int32_t get_offset_of_Endpoint_2() { return static_cast<int32_t>(offsetof(Watchdog_t37561087, ___Endpoint_2)); }
	inline String_t* get_Endpoint_2() const { return ___Endpoint_2; }
	inline String_t** get_address_of_Endpoint_2() { return &___Endpoint_2; }
	inline void set_Endpoint_2(String_t* value)
	{
		___Endpoint_2 = value;
		Il2CppCodeGenWriteBarrier((&___Endpoint_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATCHDOG_T37561087_H
#ifndef TCPCLIENT_T822906377_H
#define TCPCLIENT_T822906377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpClient
struct  TcpClient_t822906377  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t1119025450 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t4071955934 * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_ClientSocket_0)); }
	inline Socket_t1119025450 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t1119025450 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t1119025450 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientSocket_0), value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_DataStream_2)); }
	inline NetworkStream_t4071955934 * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t4071955934 ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t4071955934 * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataStream_2), value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPCLIENT_T822906377_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef SOCKET_T1119025450_H
#define SOCKET_T1119025450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t1119025450  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t610293888 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t982345378 * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2974092902 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2974092902 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_Handle_13)); }
	inline SafeSocketHandle_t610293888 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t610293888 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t610293888 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_Handle_13), value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___seed_endpoint_14)); }
	inline EndPoint_t982345378 * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t982345378 ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t982345378 * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_14), value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___ReadSem_15)); }
	inline SemaphoreSlim_t2974092902 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t2974092902 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((&___ReadSem_15), value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___WriteSem_16)); }
	inline SemaphoreSlim_t2974092902 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t2974092902 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((&___WriteSem_16), value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}
};

struct Socket_t1119025450_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3962456242 * ___AcceptAsyncCallback_22;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptReceiveCallback_24;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3962456242 * ___ConnectAsyncCallback_25;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_t705871752 * ___BeginConnectCallback_26;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3962456242 * ___DisconnectAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_t705871752 * ___BeginDisconnectCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveGenericCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveFromAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveFromCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3962456242 * ___SendAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_t705871752 * ___BeginSendGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3962456242 * ___SendToAsyncCallback_36;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_22() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___AcceptAsyncCallback_22)); }
	inline AsyncCallback_t3962456242 * get_AcceptAsyncCallback_22() const { return ___AcceptAsyncCallback_22; }
	inline AsyncCallback_t3962456242 ** get_address_of_AcceptAsyncCallback_22() { return &___AcceptAsyncCallback_22; }
	inline void set_AcceptAsyncCallback_22(AsyncCallback_t3962456242 * value)
	{
		___AcceptAsyncCallback_22 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptAsyncCallback_22), value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_23() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptCallback_23)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptCallback_23() const { return ___BeginAcceptCallback_23; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptCallback_23() { return &___BeginAcceptCallback_23; }
	inline void set_BeginAcceptCallback_23(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptCallback_23 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptCallback_23), value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_24() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptReceiveCallback_24)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptReceiveCallback_24() const { return ___BeginAcceptReceiveCallback_24; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptReceiveCallback_24() { return &___BeginAcceptReceiveCallback_24; }
	inline void set_BeginAcceptReceiveCallback_24(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptReceiveCallback_24 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptReceiveCallback_24), value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_25() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ConnectAsyncCallback_25)); }
	inline AsyncCallback_t3962456242 * get_ConnectAsyncCallback_25() const { return ___ConnectAsyncCallback_25; }
	inline AsyncCallback_t3962456242 ** get_address_of_ConnectAsyncCallback_25() { return &___ConnectAsyncCallback_25; }
	inline void set_ConnectAsyncCallback_25(AsyncCallback_t3962456242 * value)
	{
		___ConnectAsyncCallback_25 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectAsyncCallback_25), value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_26() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginConnectCallback_26)); }
	inline IOAsyncCallback_t705871752 * get_BeginConnectCallback_26() const { return ___BeginConnectCallback_26; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginConnectCallback_26() { return &___BeginConnectCallback_26; }
	inline void set_BeginConnectCallback_26(IOAsyncCallback_t705871752 * value)
	{
		___BeginConnectCallback_26 = value;
		Il2CppCodeGenWriteBarrier((&___BeginConnectCallback_26), value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___DisconnectAsyncCallback_27)); }
	inline AsyncCallback_t3962456242 * get_DisconnectAsyncCallback_27() const { return ___DisconnectAsyncCallback_27; }
	inline AsyncCallback_t3962456242 ** get_address_of_DisconnectAsyncCallback_27() { return &___DisconnectAsyncCallback_27; }
	inline void set_DisconnectAsyncCallback_27(AsyncCallback_t3962456242 * value)
	{
		___DisconnectAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((&___DisconnectAsyncCallback_27), value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_28() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginDisconnectCallback_28)); }
	inline IOAsyncCallback_t705871752 * get_BeginDisconnectCallback_28() const { return ___BeginDisconnectCallback_28; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginDisconnectCallback_28() { return &___BeginDisconnectCallback_28; }
	inline void set_BeginDisconnectCallback_28(IOAsyncCallback_t705871752 * value)
	{
		___BeginDisconnectCallback_28 = value;
		Il2CppCodeGenWriteBarrier((&___BeginDisconnectCallback_28), value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveAsyncCallback_29)); }
	inline AsyncCallback_t3962456242 * get_ReceiveAsyncCallback_29() const { return ___ReceiveAsyncCallback_29; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveAsyncCallback_29() { return &___ReceiveAsyncCallback_29; }
	inline void set_ReceiveAsyncCallback_29(AsyncCallback_t3962456242 * value)
	{
		___ReceiveAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveAsyncCallback_29), value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_30() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveCallback_30)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveCallback_30() const { return ___BeginReceiveCallback_30; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveCallback_30() { return &___BeginReceiveCallback_30; }
	inline void set_BeginReceiveCallback_30(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveCallback_30 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveCallback_30), value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_31() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveGenericCallback_31)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveGenericCallback_31() const { return ___BeginReceiveGenericCallback_31; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveGenericCallback_31() { return &___BeginReceiveGenericCallback_31; }
	inline void set_BeginReceiveGenericCallback_31(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveGenericCallback_31 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveGenericCallback_31), value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveFromAsyncCallback_32)); }
	inline AsyncCallback_t3962456242 * get_ReceiveFromAsyncCallback_32() const { return ___ReceiveFromAsyncCallback_32; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveFromAsyncCallback_32() { return &___ReceiveFromAsyncCallback_32; }
	inline void set_ReceiveFromAsyncCallback_32(AsyncCallback_t3962456242 * value)
	{
		___ReceiveFromAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveFromAsyncCallback_32), value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_33() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveFromCallback_33)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveFromCallback_33() const { return ___BeginReceiveFromCallback_33; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveFromCallback_33() { return &___BeginReceiveFromCallback_33; }
	inline void set_BeginReceiveFromCallback_33(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveFromCallback_33 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveFromCallback_33), value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendAsyncCallback_34)); }
	inline AsyncCallback_t3962456242 * get_SendAsyncCallback_34() const { return ___SendAsyncCallback_34; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendAsyncCallback_34() { return &___SendAsyncCallback_34; }
	inline void set_SendAsyncCallback_34(AsyncCallback_t3962456242 * value)
	{
		___SendAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___SendAsyncCallback_34), value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginSendGenericCallback_35)); }
	inline IOAsyncCallback_t705871752 * get_BeginSendGenericCallback_35() const { return ___BeginSendGenericCallback_35; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginSendGenericCallback_35() { return &___BeginSendGenericCallback_35; }
	inline void set_BeginSendGenericCallback_35(IOAsyncCallback_t705871752 * value)
	{
		___BeginSendGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((&___BeginSendGenericCallback_35), value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendToAsyncCallback_36)); }
	inline AsyncCallback_t3962456242 * get_SendToAsyncCallback_36() const { return ___SendToAsyncCallback_36; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendToAsyncCallback_36() { return &___SendToAsyncCallback_36; }
	inline void set_SendToAsyncCallback_36(AsyncCallback_t3962456242 * value)
	{
		___SendToAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((&___SendToAsyncCallback_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T1119025450_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef LOG_T929882142_H
#define LOG_T929882142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Utilities.Log
struct  Log_t929882142  : public RuntimeObject
{
public:

public:
};

struct Log_t929882142_StaticFields
{
public:
	// Scarlet.Utilities.Log/WriteDestination Scarlet.Utilities.Log::P_Destination
	int32_t ___P_Destination_0;
	// Scarlet.Utilities.Log/Severity[] Scarlet.Utilities.Log::OutputLevels
	SeverityU5BU5D_t3396005585* ___OutputLevels_1;
	// System.IO.StreamWriter Scarlet.Utilities.Log::LogFile
	StreamWriter_t1266378904 * ___LogFile_2;
	// System.Object Scarlet.Utilities.Log::ConsoleLock
	RuntimeObject * ___ConsoleLock_3;
	// System.Object Scarlet.Utilities.Log::FileLock
	RuntimeObject * ___FileLock_4;

public:
	inline static int32_t get_offset_of_P_Destination_0() { return static_cast<int32_t>(offsetof(Log_t929882142_StaticFields, ___P_Destination_0)); }
	inline int32_t get_P_Destination_0() const { return ___P_Destination_0; }
	inline int32_t* get_address_of_P_Destination_0() { return &___P_Destination_0; }
	inline void set_P_Destination_0(int32_t value)
	{
		___P_Destination_0 = value;
	}

	inline static int32_t get_offset_of_OutputLevels_1() { return static_cast<int32_t>(offsetof(Log_t929882142_StaticFields, ___OutputLevels_1)); }
	inline SeverityU5BU5D_t3396005585* get_OutputLevels_1() const { return ___OutputLevels_1; }
	inline SeverityU5BU5D_t3396005585** get_address_of_OutputLevels_1() { return &___OutputLevels_1; }
	inline void set_OutputLevels_1(SeverityU5BU5D_t3396005585* value)
	{
		___OutputLevels_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutputLevels_1), value);
	}

	inline static int32_t get_offset_of_LogFile_2() { return static_cast<int32_t>(offsetof(Log_t929882142_StaticFields, ___LogFile_2)); }
	inline StreamWriter_t1266378904 * get_LogFile_2() const { return ___LogFile_2; }
	inline StreamWriter_t1266378904 ** get_address_of_LogFile_2() { return &___LogFile_2; }
	inline void set_LogFile_2(StreamWriter_t1266378904 * value)
	{
		___LogFile_2 = value;
		Il2CppCodeGenWriteBarrier((&___LogFile_2), value);
	}

	inline static int32_t get_offset_of_ConsoleLock_3() { return static_cast<int32_t>(offsetof(Log_t929882142_StaticFields, ___ConsoleLock_3)); }
	inline RuntimeObject * get_ConsoleLock_3() const { return ___ConsoleLock_3; }
	inline RuntimeObject ** get_address_of_ConsoleLock_3() { return &___ConsoleLock_3; }
	inline void set_ConsoleLock_3(RuntimeObject * value)
	{
		___ConsoleLock_3 = value;
		Il2CppCodeGenWriteBarrier((&___ConsoleLock_3), value);
	}

	inline static int32_t get_offset_of_FileLock_4() { return static_cast<int32_t>(offsetof(Log_t929882142_StaticFields, ___FileLock_4)); }
	inline RuntimeObject * get_FileLock_4() const { return ___FileLock_4; }
	inline RuntimeObject ** get_address_of_FileLock_4() { return &___FileLock_4; }
	inline void set_FileLock_4(RuntimeObject * value)
	{
		___FileLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___FileLock_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOG_T929882142_H
#ifndef WIN32EXCEPTION_T3234146298_H
#define WIN32EXCEPTION_T3234146298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3234146298  : public ExternalException_t3544951457
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t3234146298_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t736164020 * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t736164020 * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t736164020 ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t736164020 * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_ErrorMessage_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3234146298_H
#ifndef UDPCLIENT_T967282006_H
#define UDPCLIENT_T967282006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.UdpClient
struct  UdpClient_t967282006  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::m_ClientSocket
	Socket_t1119025450 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.UdpClient::m_Active
	bool ___m_Active_1;
	// System.Byte[] System.Net.Sockets.UdpClient::m_Buffer
	ByteU5BU5D_t4116647657* ___m_Buffer_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.UdpClient::m_CleanedUp
	bool ___m_CleanedUp_4;
	// System.Boolean System.Net.Sockets.UdpClient::m_IsBroadcast
	bool ___m_IsBroadcast_5;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_ClientSocket_0)); }
	inline Socket_t1119025450 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t1119025450 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t1119025450 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientSocket_0), value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_2() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_Buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_m_Buffer_2() const { return ___m_Buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_Buffer_2() { return &___m_Buffer_2; }
	inline void set_m_Buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___m_Buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_2), value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}

	inline static int32_t get_offset_of_m_IsBroadcast_5() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_IsBroadcast_5)); }
	inline bool get_m_IsBroadcast_5() const { return ___m_IsBroadcast_5; }
	inline bool* get_address_of_m_IsBroadcast_5() { return &___m_IsBroadcast_5; }
	inline void set_m_IsBroadcast_5(bool value)
	{
		___m_IsBroadcast_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDPCLIENT_T967282006_H
#ifndef IPADDRESS_T241777590_H
#define IPADDRESS_T241777590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t241777590  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t3326319531* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ToString_6), value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t3326319531* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t3326319531** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t3326319531* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_11), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t241777590_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t241777590 * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t241777590 * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t241777590 * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t241777590 * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t241777590 * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t241777590 * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t241777590 * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Any_0)); }
	inline IPAddress_t241777590 * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t241777590 ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t241777590 * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((&___Any_0), value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Loopback_1)); }
	inline IPAddress_t241777590 * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t241777590 ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t241777590 * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_1), value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t241777590 * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t241777590 ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t241777590 * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_2), value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___None_3)); }
	inline IPAddress_t241777590 * get_None_3() const { return ___None_3; }
	inline IPAddress_t241777590 ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t241777590 * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((&___None_3), value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t241777590 * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t241777590 * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_7), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t241777590 * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t241777590 * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_8), value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t241777590 * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t241777590 ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t241777590 * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T241777590_H
#ifndef CLIENT_T2324008571_H
#define CLIENT_T2324008571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.Client
struct  Client_t2324008571  : public RuntimeObject
{
public:

public:
};

struct Client_t2324008571_StaticFields
{
public:
	// System.Net.IPEndPoint Scarlet.Communications.Client::ServerEndpointTCP
	IPEndPoint_t3791887218 * ___ServerEndpointTCP_0;
	// System.Net.IPEndPoint Scarlet.Communications.Client::ServerEndpointUDP
	IPEndPoint_t3791887218 * ___ServerEndpointUDP_1;
	// System.Net.Sockets.UdpClient Scarlet.Communications.Client::ServerUDP
	UdpClient_t967282006 * ___ServerUDP_2;
	// System.Net.Sockets.TcpClient Scarlet.Communications.Client::ServerTCP
	TcpClient_t822906377 * ___ServerTCP_3;
	// Scarlet.Communications.PacketBuffer Scarlet.Communications.Client::SendQueue
	PacketBuffer_t1868544067 * ___SendQueue_4;
	// Scarlet.Communications.QueueBuffer Scarlet.Communications.Client::ReceiveQueue
	QueueBuffer_t2864759769 * ___ReceiveQueue_5;
	// Scarlet.Communications.PacketPriority Scarlet.Communications.Client::<DefaultPriority>k__BackingField
	int32_t ___U3CDefaultPriorityU3Ek__BackingField_6;
	// System.Threading.Thread Scarlet.Communications.Client::SendThread
	Thread_t2300836069 * ___SendThread_7;
	// System.Threading.Thread Scarlet.Communications.Client::ProcessThread
	Thread_t2300836069 * ___ProcessThread_8;
	// System.Threading.Thread Scarlet.Communications.Client::ReceiveThreadUDP
	Thread_t2300836069 * ___ReceiveThreadUDP_9;
	// System.Threading.Thread Scarlet.Communications.Client::ReceiveThreadTCP
	Thread_t2300836069 * ___ReceiveThreadTCP_10;
	// System.Threading.Thread Scarlet.Communications.Client::RetryConnection
	Thread_t2300836069 * ___RetryConnection_11;
	// System.Threading.Thread Scarlet.Communications.Client::RetryStartup
	Thread_t2300836069 * ___RetryStartup_12;
	// System.Int32 Scarlet.Communications.Client::ReceiveBufferSize
	int32_t ___ReceiveBufferSize_13;
	// System.Int32 Scarlet.Communications.Client::OperationPeriod
	int32_t ___OperationPeriod_14;
	// System.Boolean Scarlet.Communications.Client::Initialized
	bool ___Initialized_15;
	// System.Boolean Scarlet.Communications.Client::StartedUp
	bool ___StartedUp_16;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Scarlet.Communications.Client::StopProcesses
	bool ___StopProcesses_17;
	// System.Boolean Scarlet.Communications.Client::HasDetectedDisconnect
	bool ___HasDetectedDisconnect_18;
	// System.Boolean Scarlet.Communications.Client::ThreadsStarted
	bool ___ThreadsStarted_19;
	// System.String Scarlet.Communications.Client::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// System.Boolean Scarlet.Communications.Client::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_21;
	// System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged> Scarlet.Communications.Client::ClientConnectionChanged
	EventHandler_1_t1622021596 * ___ClientConnectionChanged_22;
	// System.Boolean Scarlet.Communications.Client::StorePackets
	bool ___StorePackets_23;
	// System.Collections.Generic.List`1<Scarlet.Communications.Packet> Scarlet.Communications.Client::<SentPackets>k__BackingField
	List_1_t1760117580 * ___U3CSentPacketsU3Ek__BackingField_24;
	// System.Collections.Generic.List`1<Scarlet.Communications.Packet> Scarlet.Communications.Client::<ReceivedPackets>k__BackingField
	List_1_t1760117580 * ___U3CReceivedPacketsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_ServerEndpointTCP_0() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ServerEndpointTCP_0)); }
	inline IPEndPoint_t3791887218 * get_ServerEndpointTCP_0() const { return ___ServerEndpointTCP_0; }
	inline IPEndPoint_t3791887218 ** get_address_of_ServerEndpointTCP_0() { return &___ServerEndpointTCP_0; }
	inline void set_ServerEndpointTCP_0(IPEndPoint_t3791887218 * value)
	{
		___ServerEndpointTCP_0 = value;
		Il2CppCodeGenWriteBarrier((&___ServerEndpointTCP_0), value);
	}

	inline static int32_t get_offset_of_ServerEndpointUDP_1() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ServerEndpointUDP_1)); }
	inline IPEndPoint_t3791887218 * get_ServerEndpointUDP_1() const { return ___ServerEndpointUDP_1; }
	inline IPEndPoint_t3791887218 ** get_address_of_ServerEndpointUDP_1() { return &___ServerEndpointUDP_1; }
	inline void set_ServerEndpointUDP_1(IPEndPoint_t3791887218 * value)
	{
		___ServerEndpointUDP_1 = value;
		Il2CppCodeGenWriteBarrier((&___ServerEndpointUDP_1), value);
	}

	inline static int32_t get_offset_of_ServerUDP_2() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ServerUDP_2)); }
	inline UdpClient_t967282006 * get_ServerUDP_2() const { return ___ServerUDP_2; }
	inline UdpClient_t967282006 ** get_address_of_ServerUDP_2() { return &___ServerUDP_2; }
	inline void set_ServerUDP_2(UdpClient_t967282006 * value)
	{
		___ServerUDP_2 = value;
		Il2CppCodeGenWriteBarrier((&___ServerUDP_2), value);
	}

	inline static int32_t get_offset_of_ServerTCP_3() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ServerTCP_3)); }
	inline TcpClient_t822906377 * get_ServerTCP_3() const { return ___ServerTCP_3; }
	inline TcpClient_t822906377 ** get_address_of_ServerTCP_3() { return &___ServerTCP_3; }
	inline void set_ServerTCP_3(TcpClient_t822906377 * value)
	{
		___ServerTCP_3 = value;
		Il2CppCodeGenWriteBarrier((&___ServerTCP_3), value);
	}

	inline static int32_t get_offset_of_SendQueue_4() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___SendQueue_4)); }
	inline PacketBuffer_t1868544067 * get_SendQueue_4() const { return ___SendQueue_4; }
	inline PacketBuffer_t1868544067 ** get_address_of_SendQueue_4() { return &___SendQueue_4; }
	inline void set_SendQueue_4(PacketBuffer_t1868544067 * value)
	{
		___SendQueue_4 = value;
		Il2CppCodeGenWriteBarrier((&___SendQueue_4), value);
	}

	inline static int32_t get_offset_of_ReceiveQueue_5() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ReceiveQueue_5)); }
	inline QueueBuffer_t2864759769 * get_ReceiveQueue_5() const { return ___ReceiveQueue_5; }
	inline QueueBuffer_t2864759769 ** get_address_of_ReceiveQueue_5() { return &___ReceiveQueue_5; }
	inline void set_ReceiveQueue_5(QueueBuffer_t2864759769 * value)
	{
		___ReceiveQueue_5 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveQueue_5), value);
	}

	inline static int32_t get_offset_of_U3CDefaultPriorityU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___U3CDefaultPriorityU3Ek__BackingField_6)); }
	inline int32_t get_U3CDefaultPriorityU3Ek__BackingField_6() const { return ___U3CDefaultPriorityU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CDefaultPriorityU3Ek__BackingField_6() { return &___U3CDefaultPriorityU3Ek__BackingField_6; }
	inline void set_U3CDefaultPriorityU3Ek__BackingField_6(int32_t value)
	{
		___U3CDefaultPriorityU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_SendThread_7() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___SendThread_7)); }
	inline Thread_t2300836069 * get_SendThread_7() const { return ___SendThread_7; }
	inline Thread_t2300836069 ** get_address_of_SendThread_7() { return &___SendThread_7; }
	inline void set_SendThread_7(Thread_t2300836069 * value)
	{
		___SendThread_7 = value;
		Il2CppCodeGenWriteBarrier((&___SendThread_7), value);
	}

	inline static int32_t get_offset_of_ProcessThread_8() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ProcessThread_8)); }
	inline Thread_t2300836069 * get_ProcessThread_8() const { return ___ProcessThread_8; }
	inline Thread_t2300836069 ** get_address_of_ProcessThread_8() { return &___ProcessThread_8; }
	inline void set_ProcessThread_8(Thread_t2300836069 * value)
	{
		___ProcessThread_8 = value;
		Il2CppCodeGenWriteBarrier((&___ProcessThread_8), value);
	}

	inline static int32_t get_offset_of_ReceiveThreadUDP_9() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ReceiveThreadUDP_9)); }
	inline Thread_t2300836069 * get_ReceiveThreadUDP_9() const { return ___ReceiveThreadUDP_9; }
	inline Thread_t2300836069 ** get_address_of_ReceiveThreadUDP_9() { return &___ReceiveThreadUDP_9; }
	inline void set_ReceiveThreadUDP_9(Thread_t2300836069 * value)
	{
		___ReceiveThreadUDP_9 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveThreadUDP_9), value);
	}

	inline static int32_t get_offset_of_ReceiveThreadTCP_10() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ReceiveThreadTCP_10)); }
	inline Thread_t2300836069 * get_ReceiveThreadTCP_10() const { return ___ReceiveThreadTCP_10; }
	inline Thread_t2300836069 ** get_address_of_ReceiveThreadTCP_10() { return &___ReceiveThreadTCP_10; }
	inline void set_ReceiveThreadTCP_10(Thread_t2300836069 * value)
	{
		___ReceiveThreadTCP_10 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveThreadTCP_10), value);
	}

	inline static int32_t get_offset_of_RetryConnection_11() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___RetryConnection_11)); }
	inline Thread_t2300836069 * get_RetryConnection_11() const { return ___RetryConnection_11; }
	inline Thread_t2300836069 ** get_address_of_RetryConnection_11() { return &___RetryConnection_11; }
	inline void set_RetryConnection_11(Thread_t2300836069 * value)
	{
		___RetryConnection_11 = value;
		Il2CppCodeGenWriteBarrier((&___RetryConnection_11), value);
	}

	inline static int32_t get_offset_of_RetryStartup_12() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___RetryStartup_12)); }
	inline Thread_t2300836069 * get_RetryStartup_12() const { return ___RetryStartup_12; }
	inline Thread_t2300836069 ** get_address_of_RetryStartup_12() { return &___RetryStartup_12; }
	inline void set_RetryStartup_12(Thread_t2300836069 * value)
	{
		___RetryStartup_12 = value;
		Il2CppCodeGenWriteBarrier((&___RetryStartup_12), value);
	}

	inline static int32_t get_offset_of_ReceiveBufferSize_13() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ReceiveBufferSize_13)); }
	inline int32_t get_ReceiveBufferSize_13() const { return ___ReceiveBufferSize_13; }
	inline int32_t* get_address_of_ReceiveBufferSize_13() { return &___ReceiveBufferSize_13; }
	inline void set_ReceiveBufferSize_13(int32_t value)
	{
		___ReceiveBufferSize_13 = value;
	}

	inline static int32_t get_offset_of_OperationPeriod_14() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___OperationPeriod_14)); }
	inline int32_t get_OperationPeriod_14() const { return ___OperationPeriod_14; }
	inline int32_t* get_address_of_OperationPeriod_14() { return &___OperationPeriod_14; }
	inline void set_OperationPeriod_14(int32_t value)
	{
		___OperationPeriod_14 = value;
	}

	inline static int32_t get_offset_of_Initialized_15() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___Initialized_15)); }
	inline bool get_Initialized_15() const { return ___Initialized_15; }
	inline bool* get_address_of_Initialized_15() { return &___Initialized_15; }
	inline void set_Initialized_15(bool value)
	{
		___Initialized_15 = value;
	}

	inline static int32_t get_offset_of_StartedUp_16() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___StartedUp_16)); }
	inline bool get_StartedUp_16() const { return ___StartedUp_16; }
	inline bool* get_address_of_StartedUp_16() { return &___StartedUp_16; }
	inline void set_StartedUp_16(bool value)
	{
		___StartedUp_16 = value;
	}

	inline static int32_t get_offset_of_StopProcesses_17() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___StopProcesses_17)); }
	inline bool get_StopProcesses_17() const { return ___StopProcesses_17; }
	inline bool* get_address_of_StopProcesses_17() { return &___StopProcesses_17; }
	inline void set_StopProcesses_17(bool value)
	{
		___StopProcesses_17 = value;
	}

	inline static int32_t get_offset_of_HasDetectedDisconnect_18() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___HasDetectedDisconnect_18)); }
	inline bool get_HasDetectedDisconnect_18() const { return ___HasDetectedDisconnect_18; }
	inline bool* get_address_of_HasDetectedDisconnect_18() { return &___HasDetectedDisconnect_18; }
	inline void set_HasDetectedDisconnect_18(bool value)
	{
		___HasDetectedDisconnect_18 = value;
	}

	inline static int32_t get_offset_of_ThreadsStarted_19() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ThreadsStarted_19)); }
	inline bool get_ThreadsStarted_19() const { return ___ThreadsStarted_19; }
	inline bool* get_address_of_ThreadsStarted_19() { return &___ThreadsStarted_19; }
	inline void set_ThreadsStarted_19(bool value)
	{
		___ThreadsStarted_19 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_20), value);
	}

	inline static int32_t get_offset_of_U3CIsConnectedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___U3CIsConnectedU3Ek__BackingField_21)); }
	inline bool get_U3CIsConnectedU3Ek__BackingField_21() const { return ___U3CIsConnectedU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsConnectedU3Ek__BackingField_21() { return &___U3CIsConnectedU3Ek__BackingField_21; }
	inline void set_U3CIsConnectedU3Ek__BackingField_21(bool value)
	{
		___U3CIsConnectedU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_ClientConnectionChanged_22() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___ClientConnectionChanged_22)); }
	inline EventHandler_1_t1622021596 * get_ClientConnectionChanged_22() const { return ___ClientConnectionChanged_22; }
	inline EventHandler_1_t1622021596 ** get_address_of_ClientConnectionChanged_22() { return &___ClientConnectionChanged_22; }
	inline void set_ClientConnectionChanged_22(EventHandler_1_t1622021596 * value)
	{
		___ClientConnectionChanged_22 = value;
		Il2CppCodeGenWriteBarrier((&___ClientConnectionChanged_22), value);
	}

	inline static int32_t get_offset_of_StorePackets_23() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___StorePackets_23)); }
	inline bool get_StorePackets_23() const { return ___StorePackets_23; }
	inline bool* get_address_of_StorePackets_23() { return &___StorePackets_23; }
	inline void set_StorePackets_23(bool value)
	{
		___StorePackets_23 = value;
	}

	inline static int32_t get_offset_of_U3CSentPacketsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___U3CSentPacketsU3Ek__BackingField_24)); }
	inline List_1_t1760117580 * get_U3CSentPacketsU3Ek__BackingField_24() const { return ___U3CSentPacketsU3Ek__BackingField_24; }
	inline List_1_t1760117580 ** get_address_of_U3CSentPacketsU3Ek__BackingField_24() { return &___U3CSentPacketsU3Ek__BackingField_24; }
	inline void set_U3CSentPacketsU3Ek__BackingField_24(List_1_t1760117580 * value)
	{
		___U3CSentPacketsU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSentPacketsU3Ek__BackingField_24), value);
	}

	inline static int32_t get_offset_of_U3CReceivedPacketsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Client_t2324008571_StaticFields, ___U3CReceivedPacketsU3Ek__BackingField_25)); }
	inline List_1_t1760117580 * get_U3CReceivedPacketsU3Ek__BackingField_25() const { return ___U3CReceivedPacketsU3Ek__BackingField_25; }
	inline List_1_t1760117580 ** get_address_of_U3CReceivedPacketsU3Ek__BackingField_25() { return &___U3CReceivedPacketsU3Ek__BackingField_25; }
	inline void set_U3CReceivedPacketsU3Ek__BackingField_25(List_1_t1760117580 * value)
	{
		___U3CReceivedPacketsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CReceivedPacketsU3Ek__BackingField_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENT_T2324008571_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef PARAMETERIZEDTHREADSTART_T3696804522_H
#define PARAMETERIZEDTHREADSTART_T3696804522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ParameterizedThreadStart
struct  ParameterizedThreadStart_t3696804522  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERIZEDTHREADSTART_T3696804522_H
#ifndef PARSEMETHOD_T2014021367_H
#define PARSEMETHOD_T2014021367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scarlet.Communications.Parse/ParseMethod
struct  ParseMethod_t2014021367  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSEMETHOD_T2014021367_H
#ifndef EVENTHANDLER_1_T1622021596_H
#define EVENTHANDLER_1_T1622021596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged>
struct  EventHandler_1_t1622021596  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1622021596_H
#ifndef SOCKETEXCEPTION_T3852068672_H
#define SOCKETEXCEPTION_T3852068672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketException
struct  SocketException_t3852068672  : public Win32Exception_t3234146298
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t982345378 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t3852068672, ___m_EndPoint_20)); }
	inline EndPoint_t982345378 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t982345378 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t982345378 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_EndPoint_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETEXCEPTION_T3852068672_H
#ifndef ACTION_1_T2019918284_H
#define ACTION_1_T2019918284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t2019918284  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2019918284_H
#ifndef CONVERTER_2_T3942642323_H
#define CONVERTER_2_T3942642323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.String,System.String>
struct  Converter_2_t3942642323  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T3942642323_H
#ifndef THREADSTART_T1006689297_H
#define THREADSTART_T1006689297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1006689297  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1006689297_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
// Scarlet.Communications.PacketBuffer[]
struct PacketBufferU5BU5D_t518719314  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PacketBuffer_t1868544067 * m_Items[1];

public:
	inline PacketBuffer_t1868544067 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PacketBuffer_t1868544067 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PacketBuffer_t1868544067 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PacketBuffer_t1868544067 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PacketBuffer_t1868544067 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PacketBuffer_t1868544067 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// Scarlet.Communications.QueueBuffer[]
struct QueueBufferU5BU5D_t213965988  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) QueueBuffer_t2864759769 * m_Items[1];

public:
	inline QueueBuffer_t2864759769 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QueueBuffer_t2864759769 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QueueBuffer_t2864759769 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline QueueBuffer_t2864759769 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QueueBuffer_t2864759769 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QueueBuffer_t2864759769 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Scarlet.Utilities.Log/Severity[]
struct SeverityU5BU5D_t3396005585  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.UInt16[]
struct UInt16U5BU5D_t3326319531  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m699822512_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m341276322_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisByte_t1134296376_m378558329_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Enumerable_ToArray_TisByte_t1134296376_m3684293684_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// T[] Scarlet.Utilities.UtilMain::SubArray<System.Byte>(T[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilMain_SubArray_TisByte_t1134296376_m3734100360_gshared (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___Index1, int32_t ___Length2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2093855375_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m1653210841_gshared (List_1_t2606371118 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3346687475_gshared (List_1_t2606371118 * __this, uint8_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* List_1_ToArray_m397882077_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2477779308_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1205555496_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m555424568_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1883480326_gshared (Dictionary_2_t1405253484 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3219050175_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Peek_m2960133476_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m2346748943_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3993293265_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m4278578609_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3105409630_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(!0[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_m1343136227_gshared (KeyCollection_t322220623 * __this, ObjectU5BU5D_t2843939325* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2051736387_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Converter_2__ctor_m856212702_gshared (Converter_2_t2442480487 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!1[] System.Array::ConvertAll<System.Object,System.Object>(!!0[],System.Converter`2<!!0,!!1>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m244174403_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, Converter_2_t2442480487 * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1764950788_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_ForEach_m3737504377_gshared (List_1_t257213610 * __this, Action_1_t3252573759 * p0, const RuntimeMethod* method);

// System.Void Scarlet.Communications.PacketBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PacketBuffer__ctor_m1931836744 (PacketBuffer_t1868544067 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean Scarlet.Communications.BandwidthControlBuffer::NextBucket()
extern "C" IL2CPP_METHOD_ATTR bool BandwidthControlBuffer_NextBucket_m497939733 (BandwidthControlBuffer_t2974463824 * __this, const RuntimeMethod* method);
// System.Int32 Scarlet.Communications.Packet::GetLength()
extern "C" IL2CPP_METHOD_ATTR int32_t Packet_GetLength_m1761659771 (Packet_t288042838 * __this, const RuntimeMethod* method);
// System.Void Scarlet.Communications.BandwidthControlBuffer::AddToken(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BandwidthControlBuffer_AddToken_m3062733749 (BandwidthControlBuffer_t2974463824 * __this, int32_t ___Multiple0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.PacketHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void PacketHandler_Start_m2557195364 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Scarlet.Utilities.Log::Output(Scarlet.Utilities.Log/Severity,Scarlet.Utilities.Log/Source,System.String)
extern "C" IL2CPP_METHOD_ATTR void Log_Output_m3762383546 (RuntimeObject * __this /* static, unused */, int32_t ___Sev0, int32_t ___Src1, String_t* ___Message2, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Client_set_Name_m2992446927 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR IPAddress_t241777590 * IPAddress_Parse_m2200822423 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m2833647099 (IPEndPoint_t3791887218 * __this, IPAddress_t241777590 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m3160087608(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1622021596 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void Scarlet.Communications.WatchdogManager::add_ConnectionChanged(System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged>)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_add_ConnectionChanged_m1384616965 (RuntimeObject * __this /* static, unused */, EventHandler_1_t1622021596 * ___value0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.QueueBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QueueBuffer__ctor_m99776581 (QueueBuffer_t2864759769 * __this, const RuntimeMethod* method);
// System.Void Scarlet.Communications.GenericController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GenericController__ctor_m4194044539 (GenericController_t3250570503 * __this, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::set_DefaultPriority(Scarlet.Communications.PacketPriority)
extern "C" IL2CPP_METHOD_ATTR void Client_set_DefaultPriority_m2361359824 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Scarlet.Communications.Packet>::.ctor()
#define List_1__ctor_m3457625681(__this, method) ((  void (*) (List_1_t1760117580 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void Scarlet.Communications.Client::set_SentPackets(System.Collections.Generic.List`1<Scarlet.Communications.Packet>)
extern "C" IL2CPP_METHOD_ATTR void Client_set_SentPackets_m2871699902 (RuntimeObject * __this /* static, unused */, List_1_t1760117580 * ___value0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::set_ReceivedPackets(System.Collections.Generic.List`1<Scarlet.Communications.Packet>)
extern "C" IL2CPP_METHOD_ATTR void Client_set_ReceivedPackets_m949900963 (RuntimeObject * __this /* static, unused */, List_1_t1760117580 * ___value0, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ThreadStart__ctor_m3250019360 (ThreadStart_t1006689297 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C" IL2CPP_METHOD_ATTR void Thread__ctor_m777188137 (Thread_t2300836069 * __this, ThreadStart_t1006689297 * p0, const RuntimeMethod* method);
// System.Threading.Thread Scarlet.Communications.Client::RetryConnectionThreadFactory()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Client_RetryConnectionThreadFactory_m4255576880 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m1643173823 (ParameterizedThreadStart_t3696804522 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
extern "C" IL2CPP_METHOD_ATTR void Thread__ctor_m2201781645 (Thread_t2300836069 * __this, ParameterizedThreadStart_t3696804522 * p0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2860771284 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Boolean Scarlet.Communications.Client::get_IsConnected()
extern "C" IL2CPP_METHOD_ATTR bool Client_get_IsConnected_m2247384803 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::set_IsConnected(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Client_set_IsConnected_m259240721 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m3855750629(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1622021596 *, RuntimeObject *, ConnectionStatusChanged_t3697862163 *, const RuntimeMethod*))EventHandler_1_Invoke_m341276322_gshared)(__this, p0, p1, method)
// System.Void Scarlet.Communications.Client::ConnectionAliveOutput(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Client_ConnectionAliveOutput_m121306367 (RuntimeObject * __this /* static, unused */, bool ___IsAlive0, const RuntimeMethod* method);
// System.Boolean System.Threading.Thread::get_IsAlive()
extern "C" IL2CPP_METHOD_ATTR bool Thread_get_IsAlive_m1368512304 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Join()
extern "C" IL2CPP_METHOD_ATTR void Thread_Join_m742107115 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Threading.Thread Scarlet.Communications.Client::RetryStartupThreadFactory()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Client_RetryStartupThreadFactory_m773162268 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::InitializeClients()
extern "C" IL2CPP_METHOD_ATTR void Client_InitializeClients_m3494135943 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::SendNames()
extern "C" IL2CPP_METHOD_ATTR void Client_SendNames_m2967364032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::StartThreads()
extern "C" IL2CPP_METHOD_ATTR void Client_StartThreads_m1380950268 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Scarlet.Communications.ConnectionStatusChanged::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConnectionStatusChanged__ctor_m1663174587 (ConnectionStatusChanged_t3697862163 * __this, const RuntimeMethod* method);
// System.String Scarlet.Communications.Client::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* Client_get_Name_m2071881588 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::ConnectionChange(System.Object,Scarlet.Communications.ConnectionStatusChanged)
extern "C" IL2CPP_METHOD_ATTR void Client_ConnectionChange_m1946167475 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___Sender0, ConnectionStatusChanged_t3697862163 * ___Args1, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::Startup()
extern "C" IL2CPP_METHOD_ATTR void Client_Startup_m1839724865 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Client::InitializeTCPClient()
extern "C" IL2CPP_METHOD_ATTR void Client_InitializeTCPClient_m3878148179 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Thread_Sleep_m483098292 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Byte[] Scarlet.Utilities.UtilData::ToBytes(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilData_ToBytes_m207232572 (RuntimeObject * __this /* static, unused */, String_t* ___Input0, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::get_Client()
extern "C" IL2CPP_METHOD_ATTR Socket_t1119025450 * UdpClient_get_Client_m2715613467 (UdpClient_t967282006 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR int32_t Socket_Send_m713190430 (Socket_t1119025450 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
extern "C" IL2CPP_METHOD_ATTR Socket_t1119025450 * TcpClient_get_Client_m139203108 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UdpClient__ctor_m4070023699 (UdpClient_t967282006 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::Connect(System.Net.IPEndPoint)
extern "C" IL2CPP_METHOD_ATTR void UdpClient_Connect_m2720166117 (UdpClient_t967282006 * __this, IPEndPoint_t3791887218 * p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TcpClient__ctor_m1992471411 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C" IL2CPP_METHOD_ATTR IPAddress_t241777590 * IPEndPoint_get_Address_m834732349 (IPEndPoint_t3791887218 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C" IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_m2842923226 (IPEndPoint_t3791887218 * __this, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.Net.IPAddress,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TcpClient_BeginConnect_m3532703723 (TcpClient_t822906377 * __this, IPAddress_t241777590 * p0, int32_t p1, AsyncCallback_t3962456242 * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C" IL2CPP_METHOD_ATTR void TcpClient_Close_m3817529922 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SocketException__ctor_m480722159 (SocketException_t3852068672 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TcpClient_set_NoDelay_m4017575233 (TcpClient_t822906377 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_ReceiveBufferSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TcpClient_set_ReceiveBufferSize_m3851581126 (TcpClient_t822906377 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start(System.Object)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2134518441 (Thread_t2300836069 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::get_Available()
extern "C" IL2CPP_METHOD_ATTR int32_t Socket_get_Available_m356510663 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
extern "C" IL2CPP_METHOD_ATTR int32_t Socket_Receive_m1066583422 (Socket_t1119025450 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
#define Enumerable_Take_TisByte_t1134296376_m378558329(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisByte_t1134296376_m378558329_gshared)(__this /* static, unused */, p0, p1, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisByte_t1134296376_m3684293684(__this /* static, unused */, p0, method) ((  ByteU5BU5D_t4116647657* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisByte_t1134296376_m3684293684_gshared)(__this /* static, unused */, p0, method)
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern "C" IL2CPP_METHOD_ATTR int32_t Socket_get_ProtocolType_m1935110519 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// Scarlet.Communications.Packet Scarlet.Communications.Packet::FromBytes(System.Byte[],System.Net.Sockets.ProtocolType)
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * Packet_FromBytes_m133350180 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___PacketBytes0, int32_t ___Protocol1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Scarlet.Communications.Packet> Scarlet.Communications.Client::get_ReceivedPackets()
extern "C" IL2CPP_METHOD_ATTR List_1_t1760117580 * Client_get_ReceivedPackets_m2010246097 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m984175629 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Object Scarlet.Communications.Packet::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Packet_Clone_m1402477496 (Packet_t288042838 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Scarlet.Communications.Packet>::Add(!0)
#define List_1_Add_m3001567811(__this, p0, method) ((  void (*) (List_1_t1760117580 *, Packet_t288042838 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Scarlet.Utilities.Log::Exception(Scarlet.Utilities.Log/Source,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Log_Exception_m409715775 (RuntimeObject * __this /* static, unused */, int32_t ___Src0, Exception_t * ___Ex1, const RuntimeMethod* method);
// System.Boolean Scarlet.Communications.Parse::ParseMessage(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Parse_ParseMessage_m407972915 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___Packet0, const RuntimeMethod* method);
// Scarlet.Communications.PacketPriority Scarlet.Communications.Client::get_DefaultPriority()
extern "C" IL2CPP_METHOD_ATTR int32_t Client_get_DefaultPriority_m654009412 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Scarlet.Communications.Client::SendRegardless(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Client_SendRegardless_m2417689071 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___SendPacket0, const RuntimeMethod* method);
// Scarlet.Communications.Message Scarlet.Communications.Packet::get_Data()
extern "C" IL2CPP_METHOD_ATTR Message_t750656897 * Packet_get_Data_m91096735 (Packet_t288042838 * __this, const RuntimeMethod* method);
// System.Byte[] Scarlet.Communications.Message::GetRawData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Message_GetRawData_m3636661453 (Message_t750656897 * __this, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Packet::UpdateTimestamp()
extern "C" IL2CPP_METHOD_ATTR void Packet_UpdateTimestamp_m3665378514 (Packet_t288042838 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.UdpClient::Send(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UdpClient_Send_m2761574969 (UdpClient_t967282006 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_SendBufferSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TcpClient_set_SendBufferSize_m3098002341 (TcpClient_t822906377 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean Scarlet.Communications.Client::SendNow(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Client_SendNow_m1807573565 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___SendPacket0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Scarlet.Communications.Packet> Scarlet.Communications.Client::get_SentPackets()
extern "C" IL2CPP_METHOD_ATTR List_1_t1760117580 * Client_get_SentPackets_m129280601 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Scarlet.Communications.Client::SendUDPNow(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Client_SendUDPNow_m4148789984 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___UDPPacket0, const RuntimeMethod* method);
// System.Boolean Scarlet.Communications.Client::SendTCPNow(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Client_SendTCPNow_m1223711336 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___TCPPacket0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void Scarlet.Communications.BandwidthControlBuffer::.ctor(Scarlet.Communications.PacketBuffer[],System.Int32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BandwidthControlBuffer__ctor_m2629739754 (BandwidthControlBuffer_t2974463824 * __this, PacketBufferU5BU5D_t518719314* ___Buffers0, Int32U5BU5D_t385246372* ___BandwidthAllocation1, int32_t ___MaximumToken2, const RuntimeMethod* method);
// System.Void Scarlet.Communications.PriorityBuffer::.ctor(Scarlet.Communications.PacketBuffer[])
extern "C" IL2CPP_METHOD_ATTR void PriorityBuffer__ctor_m1280307384 (PriorityBuffer_t827296848 * __this, PacketBufferU5BU5D_t518719314* ___Buffers0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// T[] Scarlet.Utilities.UtilMain::SubArray<System.Byte>(T[],System.Int32,System.Int32)
#define UtilMain_SubArray_TisByte_t1134296376_m3734100360(__this /* static, unused */, ___Data0, ___Index1, ___Length2, method) ((  ByteU5BU5D_t4116647657* (*) (RuntimeObject * /* static, unused */, ByteU5BU5D_t4116647657*, int32_t, int32_t, const RuntimeMethod*))UtilMain_SubArray_TisByte_t1134296376_m3734100360_gshared)(__this /* static, unused */, ___Data0, ___Index1, ___Length2, method)
// System.Byte[] Scarlet.Communications.Packet::GetCurrentTime()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Packet_GetCurrentTime_m54903901 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
#define List_1__ctor_m2093855375(__this, method) ((  void (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1__ctor_m2093855375_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m1653210841(__this, p0, method) ((  void (*) (List_1_t2606371118 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1653210841_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
#define List_1_Add_m3346687475(__this, p0, method) ((  void (*) (List_1_t2606371118 *, uint8_t, const RuntimeMethod*))List_1_Add_m3346687475_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
#define List_1_ToArray_m397882077(__this, method) ((  ByteU5BU5D_t4116647657* (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1_ToArray_m397882077_gshared)(__this, method)
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String Scarlet.Utilities.UtilMain::BytesToNiceString(System.Byte[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* UtilMain_BytesToNiceString_m2509286138 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, bool ___Spaces1, const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Byte_ToString_m3735479648 (uint8_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Object System.Object::MemberwiseClone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_MemberwiseClone_m1474068832 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object System.Array::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m2672907798 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Packet::set_Data(Scarlet.Communications.Message)
extern "C" IL2CPP_METHOD_ATTR void Packet_set_Data_m981307188 (Packet_t288042838 * __this, Message_t750656897 * ___value0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Message::.ctor(System.Byte,System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Message__ctor_m3893616757 (Message_t750656897 * __this, uint8_t ___ID0, ByteU5BU5D_t4116647657* ___Payload1, ByteU5BU5D_t4116647657* ___Timestamp2, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Packet::.ctor(Scarlet.Communications.Message,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void Packet__ctor_m4249240902 (Packet_t288042838 * __this, Message_t750656897 * ___Data0, bool ___IsUDP1, String_t* ___Endpoint2, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Message::AppendData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Message_AppendData_m2972351245 (Message_t750656897 * __this, ByteU5BU5D_t4116647657* ___NewData0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Message::SetTime(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Message_SetTime_m2831510877 (Message_t750656897 * __this, ByteU5BU5D_t4116647657* ___Time0, const RuntimeMethod* method);
// System.Byte[] Scarlet.Communications.Packet::GetForSend(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Packet_GetForSend_m1092525422 (Packet_t288042838 * __this, ByteU5BU5D_t4116647657* ___Timestamp0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_UtcNow_m1393945741 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m12900168 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  DateTime_Subtract_m77007479 (DateTime_t3738529785 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C" IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m4083325051 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Byte[] Scarlet.Utilities.UtilData::ToBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilData_ToBytes_m2267011298 (RuntimeObject * __this /* static, unused */, int32_t ___Input0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Object Scarlet.Communications.Message::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Message_Clone_m2859467710 (Message_t750656897 * __this, const RuntimeMethod* method);
// System.String System.String::Copy(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Copy_m3813992399 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Message::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Message__ctor_m578942263 (Message_t750656897 * __this, ByteU5BU5D_t4116647657* ___RawData0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Parse/ParseMethod::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ParseMethod__ctor_m4179907640 (ParseMethod_t2014021367 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Scarlet.Communications.Parse::SetParseHandler(System.Byte,Scarlet.Communications.Parse/ParseMethod)
extern "C" IL2CPP_METHOD_ATTR void Parse_SetParseHandler_m2086723136 (RuntimeObject * __this /* static, unused */, uint8_t ___MessageID0, ParseMethod_t2014021367 * ___ParseMethod1, const RuntimeMethod* method);
// System.String Scarlet.Utilities.UtilData::ToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* UtilData_ToString_m3457872771 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Input0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.WatchdogManager::FoundWatchdog(System.String)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_FoundWatchdog_m1699557513 (RuntimeObject * __this /* static, unused */, String_t* ___Endpoint0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Delegate>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1093851151(__this, p0, method) ((  bool (*) (Dictionary_2_t3808507429 *, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2477779308_gshared)(__this, p0, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Delegate>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m273212993(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3808507429 *, uint8_t, Delegate_t1188392813 *, const RuntimeMethod*))Dictionary_2_set_Item_m1205555496_gshared)(__this, p0, p1, method)
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Delegate>::get_Item(!0)
#define Dictionary_2_get_Item_m4206083478(__this, p0, method) ((  Delegate_t1188392813 * (*) (Dictionary_2_t3808507429 *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m555424568_gshared)(__this, p0, method)
// System.Object System.Delegate::DynamicInvoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Delegate_DynamicInvoke_m2477351526 (Delegate_t1188392813 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Delegate>::.ctor()
#define Dictionary_2__ctor_m4292710812(__this, method) ((  void (*) (Dictionary_2_t3808507429 *, const RuntimeMethod*))Dictionary_2__ctor_m1883480326_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Scarlet.Communications.Packet>::.ctor()
#define Queue_1__ctor_m3651017428(__this, method) ((  void (*) (Queue_1_t134302332 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Scarlet.Communications.Packet>::Enqueue(!0)
#define Queue_1_Enqueue_m2940053685(__this, p0, method) ((  void (*) (Queue_1_t134302332 *, Packet_t288042838 *, const RuntimeMethod*))Queue_1_Enqueue_m3219050175_gshared)(__this, p0, method)
// !0 System.Collections.Generic.Queue`1<Scarlet.Communications.Packet>::Peek()
#define Queue_1_Peek_m2684039324(__this, method) ((  Packet_t288042838 * (*) (Queue_1_t134302332 *, const RuntimeMethod*))Queue_1_Peek_m2960133476_gshared)(__this, method)
// !0 System.Collections.Generic.Queue`1<Scarlet.Communications.Packet>::Dequeue()
#define Queue_1_Dequeue_m758694657(__this, method) ((  Packet_t288042838 * (*) (Queue_1_t134302332 *, const RuntimeMethod*))Queue_1_Dequeue_m2346748943_gshared)(__this, method)
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.Server/ScarletClient>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3542877822(__this, p0, method) ((  bool (*) (Dictionary_2_t791071292 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m3993293265_gshared)(__this, p0, method)
// System.Void Scarlet.Communications.WatchdogManager::RemoveWatchdog(System.String)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_RemoveWatchdog_m1082675166 (RuntimeObject * __this /* static, unused */, String_t* ___Endpoint0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.Server/ScarletClient>::get_Item(!0)
#define Dictionary_2_get_Item_m1765558449(__this, p0, method) ((  ScarletClient_t1005814993 * (*) (Dictionary_2_t791071292 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4278578609_gshared)(__this, p0, method)
// System.Int32 System.Net.Sockets.UdpClient::Send(System.Byte[],System.Int32,System.Net.IPEndPoint)
extern "C" IL2CPP_METHOD_ATTR int32_t UdpClient_Send_m2795483932 (UdpClient_t967282006 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, IPEndPoint_t3791887218 * p2, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C" IL2CPP_METHOD_ATTR NetworkStream_t4071955934 * TcpClient_GetStream_m960745678 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog>::.ctor()
#define Dictionary_2__ctor_m4061440649(__this, method) ((  void (*) (Dictionary_2_t4117784682 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void Scarlet.Communications.PacketWriter::.ctor(System.Byte,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void PacketWriter__ctor_m2193869829 (PacketWriter_t1568959448 * __this, uint8_t ___ID0, bool ___IsUDP1, String_t* ___Endpoint2, const RuntimeMethod* method);
// Scarlet.Communications.PacketWriter Scarlet.Communications.PacketWriter::Put(System.String)
extern "C" IL2CPP_METHOD_ATTR PacketWriter_t1568959448 * PacketWriter_Put_m2929071915 (PacketWriter_t1568959448 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.WatchdogManager/Watchdog::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Watchdog__ctor_m3924101956 (Watchdog_t37561087 * __this, String_t* ___ListenFor0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog>::Add(!0,!1)
#define Dictionary_2_Add_m2393675001(__this, p0, p1, method) ((  void (*) (Dictionary_2_t4117784682 *, String_t*, Watchdog_t37561087 *, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog>::get_Count()
#define Dictionary_2_get_Count_m4007841446(__this, method) ((  int32_t (*) (Dictionary_2_t4117784682 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog>::get_Keys()
#define Dictionary_2_get_Keys_m1994078344(__this, method) ((  KeyCollection_t12492857 * (*) (Dictionary_2_t4117784682 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Scarlet.Communications.WatchdogManager/Watchdog>::CopyTo(!0[],System.Int32)
#define KeyCollection_CopyTo_m775782173(__this, p0, p1, method) ((  void (*) (KeyCollection_t12492857 *, StringU5BU5D_t1281789340*, int32_t, const RuntimeMethod*))KeyCollection_CopyTo_m1343136227_gshared)(__this, p0, p1, method)
// System.Void Scarlet.Communications.Server::SendNow(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR void Server_SendNow_m1169191716 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___ToSend0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog>::Remove(!0)
#define Dictionary_2_Remove_m3641209829(__this, p0, method) ((  bool (*) (Dictionary_2_t4117784682 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m2051736387_gshared)(__this, p0, method)
// System.Void Scarlet.Communications.WatchdogManager::Start(System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_Start_m344589945 (RuntimeObject * __this /* static, unused */, bool ___IsClient0, String_t* ___MyName1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,Scarlet.Communications.WatchdogManager/Watchdog>::get_Item(!0)
#define Dictionary_2_get_Item_m2634407293(__this, p0, method) ((  Watchdog_t37561087 * (*) (Dictionary_2_t4117784682 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4278578609_gshared)(__this, p0, method)
// System.Void Scarlet.Communications.WatchdogManager/Watchdog::FoundWatchdog()
extern "C" IL2CPP_METHOD_ATTR void Watchdog_FoundWatchdog_m1149836366 (Watchdog_t37561087 * __this, const RuntimeMethod* method);
// System.Void Scarlet.Communications.WatchdogManager::OnConnectionChange(Scarlet.Communications.ConnectionStatusChanged)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_OnConnectionChange_m1499489232 (RuntimeObject * __this /* static, unused */, ConnectionStatusChanged_t3697862163 * ___Event0, const RuntimeMethod* method);
// System.Void Scarlet.Communications.WatchdogManager/Watchdog::set_IsConnected(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Watchdog_set_IsConnected_m1464509010 (Watchdog_t37561087 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Scarlet.Utilities.Log::ForceOutput(Scarlet.Utilities.Log/Severity,Scarlet.Utilities.Log/Source,System.String)
extern "C" IL2CPP_METHOD_ATTR void Log_ForceOutput_m3187504112 (RuntimeObject * __this /* static, unused */, int32_t ___Sev0, int32_t ___Src1, String_t* ___Message2, const RuntimeMethod* method);
// System.Void System.Console::set_ForegroundColor(System.ConsoleColor)
extern "C" IL2CPP_METHOD_ATTR void Console_set_ForegroundColor_m2525431295 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.Console::set_BackgroundColor(System.ConsoleColor)
extern "C" IL2CPP_METHOD_ATTR void Console_set_BackgroundColor_m4163400187 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.DateTime::ToLongTimeString()
extern "C" IL2CPP_METHOD_ATTR String_t* DateTime_ToLongTimeString_m3124825860 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void Scarlet.Utilities.Log::WriteLine(System.String)
extern "C" IL2CPP_METHOD_ATTR void Log_WriteLine_m1611832926 (RuntimeObject * __this /* static, unused */, String_t* ___Message0, const RuntimeMethod* method);
// System.Void System.Console::ResetColor()
extern "C" IL2CPP_METHOD_ATTR void Console_ResetColor_m1155452711 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Scarlet.Utilities.Log/<>c__DisplayClass19_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m1297557431 (U3CU3Ec__DisplayClass19_0_t4114446988 * __this, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m4013853433 (String_t* __this, StringU5BU5D_t1281789340* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Converter`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
#define Converter_2__ctor_m2685104519(__this, p0, p1, method) ((  void (*) (Converter_2_t3942642323 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Converter_2__ctor_m856212702_gshared)(__this, p0, p1, method)
// !!1[] System.Array::ConvertAll<System.String,System.String>(!!0[],System.Converter`2<!!0,!!1>)
#define Array_ConvertAll_TisString_t_TisString_t_m2589238886(__this /* static, unused */, p0, p1, method) ((  StringU5BU5D_t1281789340* (*) (RuntimeObject * /* static, unused */, StringU5BU5D_t1281789340*, Converter_2_t3942642323 *, const RuntimeMethod*))Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m244174403_gshared)(__this /* static, unused */, p0, p1, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisString_t_m2868510606(__this /* static, unused */, p0, method) ((  List_1_t3319525431 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1764950788_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m1291176469(__this, p0, p1, method) ((  void (*) (Action_1_t2019918284 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.String>::ForEach(System.Action`1<!0>)
#define List_1_ForEach_m2880463283(__this, p0, method) ((  void (*) (List_1_t3319525431 *, Action_1_t2019918284 *, const RuntimeMethod*))List_1_ForEach_m3737504377_gshared)(__this, p0, method)
// Scarlet.Utilities.Log/WriteDestination Scarlet.Utilities.Log::get_Destination()
extern "C" IL2CPP_METHOD_ATTR int32_t Log_get_Destination_m3502564452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Console::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void Console_Write_m3466945868 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Scarlet.Utilities.Log::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void Log_Write_m3585549439 (RuntimeObject * __this /* static, unused */, String_t* ___Message0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Enum_GetNames_m2200571060 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_m3714848183 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m1040762521 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Byte[] Scarlet.Utilities.UtilData::EnsureBigEndian(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilData_EnsureBigEndian_m3664900363 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Input0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m658425501 (RuntimeObject * __this /* static, unused */, int16_t p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void FormatException__ctor_m4049685996 (FormatException_t154580423 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m940064945 (StringBuilder_t * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
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
// System.Void Scarlet.Communications.BandwidthControlBuffer::.ctor(Scarlet.Communications.PacketBuffer[],System.Int32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BandwidthControlBuffer__ctor_m2629739754 (BandwidthControlBuffer_t2974463824 * __this, PacketBufferU5BU5D_t518719314* ___Buffers0, Int32U5BU5D_t385246372* ___BandwidthAllocation1, int32_t ___MaximumToken2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BandwidthControlBuffer__ctor_m2629739754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		PacketBuffer__ctor_m1931836744(__this, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_0 = ___BandwidthAllocation1;
		V_0 = (bool)((((RuntimeObject*)(Int32U5BU5D_t385246372*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		PacketBufferU5BU5D_t518719314* L_2 = ___Buffers0;
		NullCheck(L_2);
		Int32U5BU5D_t385246372* L_3 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		___BandwidthAllocation1 = L_3;
		V_1 = 0;
		goto IL_0029;
	}

IL_001f:
	{
		Int32U5BU5D_t385246372* L_4 = ___BandwidthAllocation1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)1);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		Int32U5BU5D_t385246372* L_8 = ___BandwidthAllocation1;
		NullCheck(L_8);
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_001f;
		}
	}
	{
	}

IL_0034:
	{
		PacketBufferU5BU5D_t518719314* L_10 = ___Buffers0;
		NullCheck(L_10);
		Int32U5BU5D_t385246372* L_11 = ___BandwidthAllocation1;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_13, _stringLiteral2174240884, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, BandwidthControlBuffer__ctor_m2629739754_RuntimeMethod_var);
	}

IL_004f:
	{
		int32_t L_14 = ___MaximumToken2;
		V_4 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_16 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_16, _stringLiteral2372498813, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, BandwidthControlBuffer__ctor_m2629739754_RuntimeMethod_var);
	}

IL_0068:
	{
		PacketBufferU5BU5D_t518719314* L_17 = ___Buffers0;
		__this->set_Buffers_0(L_17);
		Int32U5BU5D_t385246372* L_18 = ___BandwidthAllocation1;
		__this->set_BandwidthAllocations_1(L_18);
		int32_t L_19 = ___MaximumToken2;
		__this->set_MaximumToken_4(L_19);
		PacketBufferU5BU5D_t518719314* L_20 = ___Buffers0;
		NullCheck(L_20);
		__this->set_NBuffers_2((((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))));
		__this->set_CurrentBucket_5(0);
		__this->set_PacketCache_6((Packet_t288042838 *)NULL);
		int32_t L_21 = __this->get_NBuffers_2();
		Int32U5BU5D_t385246372* L_22 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->set_TokenBuckets_3(L_22);
		V_5 = 0;
		goto IL_00bc;
	}

IL_00aa:
	{
		Int32U5BU5D_t385246372* L_23 = __this->get_TokenBuckets_3();
		int32_t L_24 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (int32_t)0);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00bc:
	{
		int32_t L_26 = V_5;
		int32_t L_27 = __this->get_NBuffers_2();
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_00aa;
		}
	}
	{
		return;
	}
}
// System.Void Scarlet.Communications.BandwidthControlBuffer::AddToken(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BandwidthControlBuffer_AddToken_m3062733749 (BandwidthControlBuffer_t2974463824 * __this, int32_t ___Multiple0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BandwidthControlBuffer_AddToken_m3062733749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0005:
	{
		Int32U5BU5D_t385246372* L_0 = __this->get_TokenBuckets_3();
		int32_t L_1 = V_0;
		Int32U5BU5D_t385246372* L_2 = __this->get_TokenBuckets_3();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___Multiple0;
		Int32U5BU5D_t385246372* L_7 = __this->get_BandwidthAllocations_1();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = __this->get_MaximumToken_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		int32_t L_12 = Math_Min_m3468062251(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_10)))), L_11, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = __this->get_NBuffers_2();
		V_1 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Boolean Scarlet.Communications.BandwidthControlBuffer::NextBucket()
extern "C" IL2CPP_METHOD_ATTR bool BandwidthControlBuffer_NextBucket_m497939733 (BandwidthControlBuffer_t2974463824 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	BandwidthControlBuffer_t2974463824 * G_B3_0 = NULL;
	BandwidthControlBuffer_t2974463824 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	BandwidthControlBuffer_t2974463824 * G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = __this->get_CurrentBucket_5();
		V_0 = L_0;
	}

IL_0008:
	{
		int32_t L_1 = __this->get_CurrentBucket_5();
		__this->set_CurrentBucket_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = __this->get_CurrentBucket_5();
		int32_t L_3 = __this->get_NBuffers_2();
		G_B2_0 = __this;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			G_B3_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = __this->get_CurrentBucket_5();
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_002f:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_CurrentBucket_5(G_B4_0);
		int32_t L_5 = __this->get_CurrentBucket_5();
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0068;
		}
	}
	{
		Int32U5BU5D_t385246372* L_7 = __this->get_TokenBuckets_3();
		int32_t L_8 = __this->get_CurrentBucket_5();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		PacketBufferU5BU5D_t518719314* L_11 = __this->get_Buffers_0();
		int32_t L_12 = __this->get_CurrentBucket_5();
		NullCheck(L_11);
		int32_t L_13 = L_12;
		PacketBuffer_t1868544067 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Packet_t288042838 * L_15 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(5 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Peek() */, L_14);
		G_B8_0 = ((((RuntimeObject*)(Packet_t288042838 *)L_15) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0066;
	}

IL_0065:
	{
		G_B8_0 = 1;
	}

IL_0066:
	{
		G_B10_0 = G_B8_0;
		goto IL_0069;
	}

IL_0068:
	{
		G_B10_0 = 0;
	}

IL_0069:
	{
		V_1 = (bool)G_B10_0;
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_17 = __this->get_CurrentBucket_5();
		int32_t L_18 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00db;
	}

IL_0082:
	{
		__this->set_CurrentBucket_5(0);
		goto IL_00bc;
	}

IL_008c:
	{
		PacketBufferU5BU5D_t518719314* L_20 = __this->get_Buffers_0();
		int32_t L_21 = __this->get_CurrentBucket_5();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		PacketBuffer_t1868544067 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Packet_t288042838 * L_24 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(5 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Peek() */, L_23);
		V_4 = (bool)((!(((RuntimeObject*)(Packet_t288042838 *)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00ad;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00db;
	}

IL_00ad:
	{
		int32_t L_26 = __this->get_CurrentBucket_5();
		__this->set_CurrentBucket_5(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
	}

IL_00bc:
	{
		int32_t L_27 = __this->get_CurrentBucket_5();
		int32_t L_28 = __this->get_NBuffers_2();
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_008c;
		}
	}
	{
		__this->set_CurrentBucket_5(0);
		V_3 = (bool)1;
		goto IL_00db;
	}

IL_00db:
	{
		bool L_30 = V_3;
		return L_30;
	}
}
// System.Void Scarlet.Communications.BandwidthControlBuffer::Enqueue(Scarlet.Communications.Packet,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BandwidthControlBuffer_Enqueue_m1140956618 (BandwidthControlBuffer_t2974463824 * __this, Packet_t288042838 * ___Packet0, int32_t ___Priority1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BandwidthControlBuffer_Enqueue_m1140956618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___Priority1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___Priority1;
		int32_t L_2 = __this->get_NBuffers_2();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, _stringLiteral593208290, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, BandwidthControlBuffer_Enqueue_m1140956618_RuntimeMethod_var);
	}

IL_0024:
	{
		PacketBufferU5BU5D_t518719314* L_5 = __this->get_Buffers_0();
		int32_t L_6 = ___Priority1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		PacketBuffer_t1868544067 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Packet_t288042838 * L_9 = ___Packet0;
		NullCheck(L_8);
		VirtActionInvoker2< Packet_t288042838 *, int32_t >::Invoke(4 /* System.Void Scarlet.Communications.PacketBuffer::Enqueue(Scarlet.Communications.Packet,System.Int32) */, L_8, L_9, 0);
		return;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.BandwidthControlBuffer::Peek()
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * BandwidthControlBuffer_Peek_m2760004257 (BandwidthControlBuffer_t2974463824 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Packet_t288042838 * V_1 = NULL;
	{
		Packet_t288042838 * L_0 = __this->get_PacketCache_6();
		V_0 = (bool)((((RuntimeObject*)(Packet_t288042838 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Packet_t288042838 * L_2 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(6 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Dequeue() */, __this);
		__this->set_PacketCache_6(L_2);
	}

IL_001c:
	{
		Packet_t288042838 * L_3 = __this->get_PacketCache_6();
		V_1 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		Packet_t288042838 * L_4 = V_1;
		return L_4;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.BandwidthControlBuffer::Dequeue()
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * BandwidthControlBuffer_Dequeue_m2039782306 (BandwidthControlBuffer_t2974463824 * __this, const RuntimeMethod* method)
{
	Packet_t288042838 * V_0 = NULL;
	bool V_1 = false;
	Packet_t288042838 * V_2 = NULL;
	Packet_t288042838 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	BandwidthControlBuffer_t2974463824 * G_B12_0 = NULL;
	BandwidthControlBuffer_t2974463824 * G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	BandwidthControlBuffer_t2974463824 * G_B13_1 = NULL;
	{
		Packet_t288042838 * L_0 = __this->get_PacketCache_6();
		V_1 = (bool)((!(((RuntimeObject*)(Packet_t288042838 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Packet_t288042838 * L_2 = __this->get_PacketCache_6();
		V_2 = L_2;
		__this->set_PacketCache_6((Packet_t288042838 *)NULL);
		Packet_t288042838 * L_3 = V_2;
		V_3 = L_3;
		goto IL_0102;
	}

IL_0024:
	{
		Int32U5BU5D_t385246372* L_4 = __this->get_TokenBuckets_3();
		int32_t L_5 = __this->get_CurrentBucket_5();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		PacketBufferU5BU5D_t518719314* L_8 = __this->get_Buffers_0();
		int32_t L_9 = __this->get_CurrentBucket_5();
		NullCheck(L_8);
		int32_t L_10 = L_9;
		PacketBuffer_t1868544067 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Packet_t288042838 * L_12 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(5 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Peek() */, L_11);
		G_B5_0 = ((((RuntimeObject*)(Packet_t288042838 *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 1;
	}

IL_004c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0068;
		}
	}
	{
		bool L_14 = BandwidthControlBuffer_NextBucket_m497939733(__this, /*hidden argument*/NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		V_3 = (Packet_t288042838 *)NULL;
		goto IL_0102;
	}

IL_0067:
	{
	}

IL_0068:
	{
		PacketBufferU5BU5D_t518719314* L_16 = __this->get_Buffers_0();
		int32_t L_17 = __this->get_CurrentBucket_5();
		NullCheck(L_16);
		int32_t L_18 = L_17;
		PacketBuffer_t1868544067 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Packet_t288042838 * L_20 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(6 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Dequeue() */, L_19);
		V_0 = L_20;
		Int32U5BU5D_t385246372* L_21 = __this->get_TokenBuckets_3();
		int32_t L_22 = __this->get_CurrentBucket_5();
		NullCheck(L_21);
		int32_t* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		Packet_t288042838 * L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = Packet_GetLength_m1761659771(L_24, /*hidden argument*/NULL);
		*((int32_t*)(L_23)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_23)), (int32_t)L_25));
		Int32U5BU5D_t385246372* L_26 = __this->get_TokenBuckets_3();
		int32_t L_27 = __this->get_CurrentBucket_5();
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_6 = (bool)((((int32_t)L_29) < ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_00fe;
		}
	}
	{
		Int32U5BU5D_t385246372* L_31 = __this->get_TokenBuckets_3();
		int32_t L_32 = __this->get_CurrentBucket_5();
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Int32U5BU5D_t385246372* L_35 = __this->get_BandwidthAllocations_1();
		int32_t L_36 = __this->get_CurrentBucket_5();
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		BandwidthControlBuffer_AddToken_m3062733749(__this, ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)((-L_34))/(int32_t)L_38)))), /*hidden argument*/NULL);
		int32_t L_39 = __this->get_CurrentBucket_5();
		__this->set_CurrentBucket_5(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
		int32_t L_40 = __this->get_CurrentBucket_5();
		int32_t L_41 = __this->get_NBuffers_2();
		G_B11_0 = __this;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			G_B12_0 = __this;
			goto IL_00f7;
		}
	}
	{
		int32_t L_42 = __this->get_CurrentBucket_5();
		G_B13_0 = L_42;
		G_B13_1 = G_B11_0;
		goto IL_00f8;
	}

IL_00f7:
	{
		G_B13_0 = 0;
		G_B13_1 = G_B12_0;
	}

IL_00f8:
	{
		NullCheck(G_B13_1);
		G_B13_1->set_CurrentBucket_5(G_B13_0);
	}

IL_00fe:
	{
		Packet_t288042838 * L_43 = V_0;
		V_3 = L_43;
		goto IL_0102;
	}

IL_0102:
	{
		Packet_t288042838 * L_44 = V_3;
		return L_44;
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
// Scarlet.Communications.PacketPriority Scarlet.Communications.Client::get_DefaultPriority()
extern "C" IL2CPP_METHOD_ATTR int32_t Client_get_DefaultPriority_m654009412 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_get_DefaultPriority_m654009412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_U3CDefaultPriorityU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Scarlet.Communications.Client::set_DefaultPriority(Scarlet.Communications.PacketPriority)
extern "C" IL2CPP_METHOD_ATTR void Client_set_DefaultPriority_m2361359824 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_set_DefaultPriority_m2361359824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_U3CDefaultPriorityU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String Scarlet.Communications.Client::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* Client_get_Name_m2071881588 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_get_Name_m2071881588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_U3CNameU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Scarlet.Communications.Client::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Client_set_Name_m2992446927 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_set_Name_m2992446927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_U3CNameU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Boolean Scarlet.Communications.Client::get_IsConnected()
extern "C" IL2CPP_METHOD_ATTR bool Client_get_IsConnected_m2247384803 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_get_IsConnected_m2247384803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_U3CIsConnectedU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Scarlet.Communications.Client::set_IsConnected(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Client_set_IsConnected_m259240721 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_set_IsConnected_m259240721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_U3CIsConnectedU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Scarlet.Communications.Packet> Scarlet.Communications.Client::get_SentPackets()
extern "C" IL2CPP_METHOD_ATTR List_1_t1760117580 * Client_get_SentPackets_m129280601 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_get_SentPackets_m129280601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1760117580 * L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_U3CSentPacketsU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Scarlet.Communications.Client::set_SentPackets(System.Collections.Generic.List`1<Scarlet.Communications.Packet>)
extern "C" IL2CPP_METHOD_ATTR void Client_set_SentPackets_m2871699902 (RuntimeObject * __this /* static, unused */, List_1_t1760117580 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_set_SentPackets_m2871699902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1760117580 * L_0 = ___value0;
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_U3CSentPacketsU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Scarlet.Communications.Packet> Scarlet.Communications.Client::get_ReceivedPackets()
extern "C" IL2CPP_METHOD_ATTR List_1_t1760117580 * Client_get_ReceivedPackets_m2010246097 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_get_ReceivedPackets_m2010246097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1760117580 * L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_U3CReceivedPacketsU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Scarlet.Communications.Client::set_ReceivedPackets(System.Collections.Generic.List`1<Scarlet.Communications.Packet>)
extern "C" IL2CPP_METHOD_ATTR void Client_set_ReceivedPackets_m949900963 (RuntimeObject * __this /* static, unused */, List_1_t1760117580 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_set_ReceivedPackets_m949900963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1760117580 * L_0 = ___value0;
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_U3CReceivedPacketsU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Void Scarlet.Communications.Client::Start(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Client_Start_m2884463336 (RuntimeObject * __this /* static, unused */, String_t* ___ServerIP0, int32_t ___PortTCP1, int32_t ___PortUDP2, String_t* ___Name3, int32_t ___ReceiveBufferSize4, int32_t ___OperationPeriod5, bool ___UsePriorityQueue6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Start_m2884463336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t241777590 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		PacketHandler_Start_m2557195364(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 0, 2, _stringLiteral1902233403, /*hidden argument*/NULL);
		String_t* L_0 = ___Name3;
		Client_set_Name_m2992446927(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___ReceiveBufferSize4;
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ReceiveBufferSize_13(L_1);
		int32_t L_2 = ___OperationPeriod5;
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_OperationPeriod_14(L_2);
		String_t* L_3 = ___ServerIP0;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t241777590_il2cpp_TypeInfo_var);
		IPAddress_t241777590 * L_4 = IPAddress_Parse_m2200822423(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		IPAddress_t241777590 * L_5 = V_0;
		int32_t L_6 = ___PortTCP1;
		IPEndPoint_t3791887218 * L_7 = (IPEndPoint_t3791887218 *)il2cpp_codegen_object_new(IPEndPoint_t3791887218_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m2833647099(L_7, L_5, L_6, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ServerEndpointTCP_0(L_7);
		IPAddress_t241777590 * L_8 = V_0;
		int32_t L_9 = ___PortUDP2;
		IPEndPoint_t3791887218 * L_10 = (IPEndPoint_t3791887218 *)il2cpp_codegen_object_new(IPEndPoint_t3791887218_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m2833647099(L_10, L_8, L_9, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ServerEndpointUDP_1(L_10);
		bool L_11 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_Initialized_15();
		V_1 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0138;
		}
	}
	{
		intptr_t L_13 = (intptr_t)Client_ConnectionChange_m1946167475_RuntimeMethod_var;
		EventHandler_1_t1622021596 * L_14 = (EventHandler_1_t1622021596 *)il2cpp_codegen_object_new(EventHandler_1_t1622021596_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3160087608(L_14, NULL, L_13, /*hidden argument*/EventHandler_1__ctor_m3160087608_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		WatchdogManager_add_ConnectionChanged_m1384616965(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		QueueBuffer_t2864759769 * L_15 = (QueueBuffer_t2864759769 *)il2cpp_codegen_object_new(QueueBuffer_t2864759769_il2cpp_TypeInfo_var);
		QueueBuffer__ctor_m99776581(L_15, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ReceiveQueue_5(L_15);
		bool L_16 = ___UsePriorityQueue6;
		V_2 = L_16;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_008f;
		}
	}
	{
		GenericController_t3250570503 * L_18 = (GenericController_t3250570503 *)il2cpp_codegen_object_new(GenericController_t3250570503_il2cpp_TypeInfo_var);
		GenericController__ctor_m4194044539(L_18, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_SendQueue_4(L_18);
		Client_set_DefaultPriority_m2361359824(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		goto IL_00a2;
	}

IL_008f:
	{
		QueueBuffer_t2864759769 * L_19 = (QueueBuffer_t2864759769 *)il2cpp_codegen_object_new(QueueBuffer_t2864759769_il2cpp_TypeInfo_var);
		QueueBuffer__ctor_m99776581(L_19, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_SendQueue_4(L_19);
		Client_set_DefaultPriority_m2361359824(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		List_1_t1760117580 * L_20 = (List_1_t1760117580 *)il2cpp_codegen_object_new(List_1_t1760117580_il2cpp_TypeInfo_var);
		List_1__ctor_m3457625681(L_20, /*hidden argument*/List_1__ctor_m3457625681_RuntimeMethod_var);
		Client_set_SentPackets_m2871699902(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		List_1_t1760117580 * L_21 = (List_1_t1760117580 *)il2cpp_codegen_object_new(List_1_t1760117580_il2cpp_TypeInfo_var);
		List_1__ctor_m3457625681(L_21, /*hidden argument*/List_1__ctor_m3457625681_RuntimeMethod_var);
		Client_set_ReceivedPackets_m949900963(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		intptr_t L_22 = (intptr_t)Client_SendPackets_m1979567306_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_23 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_23, NULL, L_22, /*hidden argument*/NULL);
		Thread_t2300836069 * L_24 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_24, L_23, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_SendThread_7(L_24);
		intptr_t L_25 = (intptr_t)Client_ProcessPackets_m769581024_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_26 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_26, NULL, L_25, /*hidden argument*/NULL);
		Thread_t2300836069 * L_27 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_27, L_26, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ProcessThread_8(L_27);
		Thread_t2300836069 * L_28 = Client_RetryConnectionThreadFactory_m4255576880(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_RetryConnection_11(L_28);
		intptr_t L_29 = (intptr_t)Client_ReceiveFromSocket_m64041221_RuntimeMethod_var;
		ParameterizedThreadStart_t3696804522 * L_30 = (ParameterizedThreadStart_t3696804522 *)il2cpp_codegen_object_new(ParameterizedThreadStart_t3696804522_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m1643173823(L_30, NULL, L_29, /*hidden argument*/NULL);
		Thread_t2300836069 * L_31 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m2201781645(L_31, L_30, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ReceiveThreadTCP_10(L_31);
		intptr_t L_32 = (intptr_t)Client_ReceiveFromSocket_m64041221_RuntimeMethod_var;
		ParameterizedThreadStart_t3696804522 * L_33 = (ParameterizedThreadStart_t3696804522 *)il2cpp_codegen_object_new(ParameterizedThreadStart_t3696804522_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m1643173823(L_33, NULL, L_32, /*hidden argument*/NULL);
		Thread_t2300836069 * L_34 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m2201781645(L_34, L_33, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ReceiveThreadUDP_9(L_34);
		intptr_t L_35 = (intptr_t)Client_InitialStartup_m164947211_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_36 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_36, NULL, L_35, /*hidden argument*/NULL);
		Thread_t2300836069 * L_37 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_37, L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Thread_Start_m2860771284(L_37, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_Initialized_15((bool)1);
	}

IL_0138:
	{
		return;
	}
}
// System.Void Scarlet.Communications.Client::ConnectionChange(System.Object,Scarlet.Communications.ConnectionStatusChanged)
extern "C" IL2CPP_METHOD_ATTR void Client_ConnectionChange_m1946167475 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___Sender0, ConnectionStatusChanged_t3697862163 * ___Args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_ConnectionChange_m1946167475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	EventHandler_1_t1622021596 * G_B3_0 = NULL;
	EventHandler_1_t1622021596 * G_B2_0 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B30_0 = 0;
	{
		ConnectionStatusChanged_t3697862163 * L_0 = ___Args1;
		NullCheck(L_0);
		bool L_1 = L_0->get_StatusConnected_2();
		bool L_2 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (bool)((int32_t)((int32_t)L_1^(int32_t)L_2));
		ConnectionStatusChanged_t3697862163 * L_3 = ___Args1;
		NullCheck(L_3);
		bool L_4 = L_3->get_StatusConnected_2();
		Client_set_IsConnected_m259240721(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		bool L_5 = V_0;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		EventHandler_1_t1622021596 * L_7 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ClientConnectionChanged_22();
		EventHandler_1_t1622021596 * L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_002b;
		}
	}
	{
		goto IL_0033;
	}

IL_002b:
	{
		RuntimeObject * L_9 = ___Sender0;
		ConnectionStatusChanged_t3697862163 * L_10 = ___Args1;
		NullCheck(G_B3_0);
		EventHandler_1_Invoke_m3855750629(G_B3_0, L_9, L_10, /*hidden argument*/EventHandler_1_Invoke_m3855750629_RuntimeMethod_var);
	}

IL_0033:
	{
	}

IL_0034:
	{
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		bool L_12 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_12));
		goto IL_003f;
	}

IL_003e:
	{
		G_B8_0 = 0;
	}

IL_003f:
	{
		V_2 = (bool)G_B8_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_004c;
		}
	}
	{
		Client_ConnectionAliveOutput_m121306367(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
	}

IL_004c:
	{
		Thread_t2300836069 * L_14 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryStartup_12();
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Thread_t2300836069 * L_15 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryStartup_12();
		NullCheck(L_15);
		bool L_16 = Thread_get_IsAlive_m1368512304(L_15, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_16));
		goto IL_0060;
	}

IL_005f:
	{
		G_B13_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B13_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0071;
		}
	}
	{
		Thread_t2300836069 * L_18 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryStartup_12();
		NullCheck(L_18);
		Thread_Join_m742107115(L_18, /*hidden argument*/NULL);
	}

IL_0071:
	{
		Thread_t2300836069 * L_19 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryConnection_11();
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		Thread_t2300836069 * L_20 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryConnection_11();
		NullCheck(L_20);
		bool L_21 = Thread_get_IsAlive_m1368512304(L_20, /*hidden argument*/NULL);
		G_B18_0 = ((int32_t)(L_21));
		goto IL_0085;
	}

IL_0084:
	{
		G_B18_0 = 0;
	}

IL_0085:
	{
		V_4 = (bool)G_B18_0;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_0098;
		}
	}
	{
		Thread_t2300836069 * L_23 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryConnection_11();
		NullCheck(L_23);
		Thread_Join_m742107115(L_23, /*hidden argument*/NULL);
	}

IL_0098:
	{
		bool L_24 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00a6;
		}
	}
	{
		bool L_25 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ThreadsStarted_19();
		G_B23_0 = ((int32_t)(L_25));
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B23_0 = 0;
	}

IL_00a7:
	{
		V_5 = (bool)G_B23_0;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00ea;
		}
	}
	{
		Client_ConnectionAliveOutput_m121306367(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		Thread_t2300836069 * L_27 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryConnection_11();
		NullCheck(L_27);
		bool L_28 = Thread_get_IsAlive_m1368512304(L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00d2;
		}
	}
	{
		Thread_t2300836069 * L_30 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryConnection_11();
		NullCheck(L_30);
		Thread_Join_m742107115(L_30, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		Thread_t2300836069 * L_31 = Client_RetryConnectionThreadFactory_m4255576880(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_RetryConnection_11(L_31);
		Thread_t2300836069 * L_32 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryConnection_11();
		NullCheck(L_32);
		Thread_Start_m2860771284(L_32, /*hidden argument*/NULL);
		goto IL_0120;
	}

IL_00ea:
	{
		bool L_33 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00fb;
		}
	}
	{
		bool L_34 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ThreadsStarted_19();
		G_B30_0 = ((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B30_0 = 0;
	}

IL_00fc:
	{
		V_7 = (bool)G_B30_0;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_0120;
		}
	}
	{
		Thread_t2300836069 * L_36 = Client_RetryStartupThreadFactory_m773162268(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_RetryStartup_12(L_36);
		Thread_t2300836069 * L_37 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_RetryStartup_12();
		NullCheck(L_37);
		Thread_Start_m2860771284(L_37, /*hidden argument*/NULL);
		Client_ConnectionAliveOutput_m121306367(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
	}

IL_0120:
	{
		return;
	}
}
// System.Void Scarlet.Communications.Client::ConnectionAliveOutput(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Client_ConnectionAliveOutput_m121306367 (RuntimeObject * __this /* static, unused */, bool ___IsAlive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_ConnectionAliveOutput_m121306367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___IsAlive0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 1, 2, _stringLiteral4012446804, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 3, 2, _stringLiteral3601950220, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Scarlet.Communications.Client::Startup()
extern "C" IL2CPP_METHOD_ATTR void Client_Startup_m1839724865 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Startup_m1839724865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionStatusChanged_t3697862163 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		Client_InitializeClients_m3494135943(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0018;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Object)
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral2274586662, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Client_Startup_m1839724865_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0018:
	{
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		Client_SendNames_m2967364032(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0030;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral1506573154, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Client_Startup_m1839724865_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0030:
	{
		Client_StartThreads_m1380950268(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ThreadsStarted_19((bool)1);
		ConnectionStatusChanged_t3697862163 * L_2 = (ConnectionStatusChanged_t3697862163 *)il2cpp_codegen_object_new(ConnectionStatusChanged_t3697862163_il2cpp_TypeInfo_var);
		ConnectionStatusChanged__ctor_m1663174587(L_2, /*hidden argument*/NULL);
		ConnectionStatusChanged_t3697862163 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_StatusConnected_2((bool)1);
		ConnectionStatusChanged_t3697862163 * L_4 = L_3;
		NullCheck(L_4);
		L_4->set_StatusEndpoint_1(_stringLiteral3927627800);
		V_0 = L_4;
		String_t* L_5 = Client_get_Name_m2071881588(NULL /*static, unused*/, /*hidden argument*/NULL);
		ConnectionStatusChanged_t3697862163 * L_6 = V_0;
		Client_ConnectionChange_m1946167475(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Communications.Client::InitialStartup()
extern "C" IL2CPP_METHOD_ATTR void Client_InitialStartup_m164947211 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_InitialStartup_m164947211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ConnectionStatusChanged_t3697862163 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_StartedUp_16();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0047;
	}

IL_000d:
	{
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		Client_Startup_m1839724865(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Object)
		ConnectionStatusChanged_t3697862163 * L_2 = (ConnectionStatusChanged_t3697862163 *)il2cpp_codegen_object_new(ConnectionStatusChanged_t3697862163_il2cpp_TypeInfo_var);
		ConnectionStatusChanged__ctor_m1663174587(L_2, /*hidden argument*/NULL);
		ConnectionStatusChanged_t3697862163 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_StatusConnected_2((bool)0);
		ConnectionStatusChanged_t3697862163 * L_4 = L_3;
		NullCheck(L_4);
		L_4->set_StatusEndpoint_1(_stringLiteral3927627800);
		V_1 = L_4;
		String_t* L_5 = Client_get_Name_m2071881588(NULL /*static, unused*/, /*hidden argument*/NULL);
		ConnectionStatusChanged_t3697862163 * L_6 = V_1;
		Client_ConnectionChange_m1946167475(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_StartedUp_16((bool)1);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Scarlet.Communications.Client::RetryConnecting()
extern "C" IL2CPP_METHOD_ATTR void Client_RetryConnecting_m1246692974 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_RetryConnecting_m1246692974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		goto IL_0025;
	}

IL_0003:
	{
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		Client_InitializeTCPClient_m3878148179(NULL /*static, unused*/, /*hidden argument*/NULL);
		Client_SendNames_m2967364032(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0019;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0014;
		throw e;
	}

CATCH_0014:
	{ // begin catch(System.Object)
		goto IL_0019;
	} // end catch (depth: 1)

IL_0019:
	{
		Thread_Sleep_m483098292(NULL /*static, unused*/, ((int32_t)5000), /*hidden argument*/NULL);
	}

IL_0025:
	{
		bool L_0 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Void Scarlet.Communications.Client::RetryStart()
extern "C" IL2CPP_METHOD_ATTR void Client_RetryStart_m2371935439 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_RetryStart_m2371935439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		goto IL_001f;
	}

IL_0003:
	{
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		Client_Startup_m1839724865(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0013;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000e;
		throw e;
	}

CATCH_000e:
	{ // begin catch(System.Object)
		goto IL_0013;
	} // end catch (depth: 1)

IL_0013:
	{
		Thread_Sleep_m483098292(NULL /*static, unused*/, ((int32_t)5000), /*hidden argument*/NULL);
	}

IL_001f:
	{
		bool L_0 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Void Scarlet.Communications.Client::SendNames()
extern "C" IL2CPP_METHOD_ATTR void Client_SendNames_m2967364032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_SendNames_m2967364032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		String_t* L_0 = Client_get_Name_m2071881588(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UtilData_t3270872621_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = UtilData_ToBytes_m207232572(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UdpClient_t967282006 * L_2 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerUDP_2();
		NullCheck(L_2);
		Socket_t1119025450 * L_3 = UdpClient_get_Client_m2715613467(L_2, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = V_0;
		NullCheck(L_3);
		Socket_Send_m713190430(L_3, L_4, /*hidden argument*/NULL);
		TcpClient_t822906377 * L_5 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerTCP_3();
		NullCheck(L_5);
		Socket_t1119025450 * L_6 = TcpClient_get_Client_m139203108(L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NullCheck(L_6);
		Socket_Send_m713190430(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Communications.Client::InitializeClients()
extern "C" IL2CPP_METHOD_ATTR void Client_InitializeClients_m3494135943 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_InitializeClients_m3494135943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Client_InitializeTCPClient_m3878148179(NULL /*static, unused*/, /*hidden argument*/NULL);
		UdpClient_t967282006 * L_0 = (UdpClient_t967282006 *)il2cpp_codegen_object_new(UdpClient_t967282006_il2cpp_TypeInfo_var);
		UdpClient__ctor_m4070023699(L_0, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ServerUDP_2(L_0);
		UdpClient_t967282006 * L_1 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerUDP_2();
		IPEndPoint_t3791887218 * L_2 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerEndpointUDP_1();
		NullCheck(L_1);
		UdpClient_Connect_m2720166117(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Communications.Client::InitializeTCPClient()
extern "C" IL2CPP_METHOD_ATTR void Client_InitializeTCPClient_m3878148179 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_InitializeTCPClient_m3878148179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		TcpClient_t822906377 * L_0 = (TcpClient_t822906377 *)il2cpp_codegen_object_new(TcpClient_t822906377_il2cpp_TypeInfo_var);
		TcpClient__ctor_m1992471411(L_0, /*hidden argument*/NULL);
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_ServerTCP_3(L_0);
		TcpClient_t822906377 * L_1 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerTCP_3();
		IPEndPoint_t3791887218 * L_2 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerEndpointTCP_0();
		NullCheck(L_2);
		IPAddress_t241777590 * L_3 = IPEndPoint_get_Address_m834732349(L_2, /*hidden argument*/NULL);
		IPEndPoint_t3791887218 * L_4 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerEndpointTCP_0();
		NullCheck(L_4);
		int32_t L_5 = IPEndPoint_get_Port_m2842923226(L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_6 = TcpClient_BeginConnect_m3532703723(L_1, L_3, L_5, (AsyncCallback_t3962456242 *)NULL, NULL, /*hidden argument*/NULL);
		V_0 = L_6;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		WaitHandle_t1743403487 * L_8 = InterfaceFuncInvoker0< WaitHandle_t1743403487 * >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		bool L_9 = VirtFuncInvoker1< bool, int32_t >::Invoke(12 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_8, ((int32_t)2000));
		V_1 = L_9;
		bool L_10 = V_1;
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		TcpClient_t822906377 * L_12 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerTCP_3();
		NullCheck(L_12);
		TcpClient_Close_m3817529922(L_12, /*hidden argument*/NULL);
		SocketException_t3852068672 * L_13 = (SocketException_t3852068672 *)il2cpp_codegen_object_new(SocketException_t3852068672_il2cpp_TypeInfo_var);
		SocketException__ctor_m480722159(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, Client_InitializeTCPClient_m3878148179_RuntimeMethod_var);
	}

IL_0057:
	{
		TcpClient_t822906377 * L_14 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerTCP_3();
		NullCheck(L_14);
		TcpClient_set_NoDelay_m4017575233(L_14, (bool)1, /*hidden argument*/NULL);
		TcpClient_t822906377 * L_15 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerTCP_3();
		int32_t L_16 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ReceiveBufferSize_13();
		NullCheck(L_15);
		TcpClient_set_ReceiveBufferSize_m3851581126(L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Communications.Client::StartThreads()
extern "C" IL2CPP_METHOD_ATTR void Client_StartThreads_m1380950268 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_StartThreads_m1380950268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Thread_t2300836069 * L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_SendThread_7();
		NullCheck(L_0);
		Thread_Start_m2860771284(L_0, /*hidden argument*/NULL);
		Thread_t2300836069 * L_1 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ProcessThread_8();
		NullCheck(L_1);
		Thread_Start_m2860771284(L_1, /*hidden argument*/NULL);
		Thread_t2300836069 * L_2 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ReceiveThreadTCP_10();
		TcpClient_t822906377 * L_3 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerTCP_3();
		NullCheck(L_3);
		Socket_t1119025450 * L_4 = TcpClient_get_Client_m139203108(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Thread_Start_m2134518441(L_2, L_4, /*hidden argument*/NULL);
		Thread_t2300836069 * L_5 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ReceiveThreadUDP_9();
		UdpClient_t967282006 * L_6 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerUDP_2();
		NullCheck(L_6);
		Socket_t1119025450 * L_7 = UdpClient_get_Client_m2715613467(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Thread_Start_m2134518441(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Thread Scarlet.Communications.Client::RetryConnectionThreadFactory()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Client_RetryConnectionThreadFactory_m4255576880 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_RetryConnectionThreadFactory_m4255576880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Thread_t2300836069 * V_0 = NULL;
	{
		intptr_t L_0 = (intptr_t)Client_RetryConnecting_m1246692974_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_1 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_1, NULL, L_0, /*hidden argument*/NULL);
		Thread_t2300836069 * L_2 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Thread_t2300836069 * L_3 = V_0;
		return L_3;
	}
}
// System.Threading.Thread Scarlet.Communications.Client::RetryStartupThreadFactory()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Client_RetryStartupThreadFactory_m773162268 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_RetryStartupThreadFactory_m773162268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Thread_t2300836069 * V_0 = NULL;
	{
		intptr_t L_0 = (intptr_t)Client_RetryStart_m2371935439_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_1 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_1, NULL, L_0, /*hidden argument*/NULL);
		Thread_t2300836069 * L_2 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Thread_t2300836069 * L_3 = V_0;
		return L_3;
	}
}
// System.Void Scarlet.Communications.Client::ReceiveFromSocket(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Client_ReceiveFromSocket_m64041221 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___ReceiveSocket0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_ReceiveFromSocket_m64041221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1119025450 * V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	Packet_t288042838 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	List_1_t1760117580 * V_7 = NULL;
	bool V_8 = false;
	Exception_t * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B16_0 = 0;
	{
		RuntimeObject * L_0 = ___ReceiveSocket0;
		V_0 = ((Socket_t1119025450 *)CastclassClass((RuntimeObject*)L_0, Socket_t1119025450_il2cpp_TypeInfo_var));
		goto IL_0120;
	}

IL_000d:
	{
		int32_t L_1 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_OperationPeriod_14();
		Thread_Sleep_m483098292(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Socket_t1119025450 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = Socket_get_Available_m356510663(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_5 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ReceiveBufferSize_13();
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			Socket_t1119025450 * L_7 = V_0;
			ByteU5BU5D_t4116647657* L_8 = V_2;
			ByteU5BU5D_t4116647657* L_9 = V_2;
			NullCheck(L_9);
			NullCheck(L_7);
			int32_t L_10 = Socket_Receive_m1066583422(L_7, L_8, (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), 0, /*hidden argument*/NULL);
			V_3 = L_10;
			int32_t L_11 = V_3;
			V_5 = (bool)((((int32_t)L_11) < ((int32_t)4))? 1 : 0);
			bool L_12 = V_5;
			if (!L_12)
			{
				goto IL_005b;
			}
		}

IL_004c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
			Log_Output_m3762383546(NULL /*static, unused*/, 3, 2, _stringLiteral3890679834, /*hidden argument*/NULL);
		}

IL_005b:
		{
			ByteU5BU5D_t4116647657* L_13 = V_2;
			int32_t L_14 = V_3;
			RuntimeObject* L_15 = Enumerable_Take_TisByte_t1134296376_m378558329(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_13, L_14, /*hidden argument*/Enumerable_Take_TisByte_t1134296376_m378558329_RuntimeMethod_var);
			ByteU5BU5D_t4116647657* L_16 = Enumerable_ToArray_TisByte_t1134296376_m3684293684(NULL /*static, unused*/, L_15, /*hidden argument*/Enumerable_ToArray_TisByte_t1134296376_m3684293684_RuntimeMethod_var);
			V_2 = L_16;
			ByteU5BU5D_t4116647657* L_17 = V_2;
			Socket_t1119025450 * L_18 = V_0;
			NullCheck(L_18);
			int32_t L_19 = Socket_get_ProtocolType_m1935110519(L_18, /*hidden argument*/NULL);
			Packet_t288042838 * L_20 = Packet_FromBytes_m133350180(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
			V_4 = L_20;
			Packet_t288042838 * L_21 = V_4;
			NullCheck(L_21);
			L_21->set_Endpoint_1(_stringLiteral3927627800);
			QueueBuffer_t2864759769 * L_22 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ReceiveQueue_5();
			Packet_t288042838 * L_23 = V_4;
			NullCheck(L_22);
			VirtActionInvoker2< Packet_t288042838 *, int32_t >::Invoke(4 /* System.Void Scarlet.Communications.PacketBuffer::Enqueue(Scarlet.Communications.Packet,System.Int32) */, L_22, L_23, 0);
			bool L_24 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_StorePackets_23();
			V_6 = L_24;
			bool L_25 = V_6;
			if (!L_25)
			{
				goto IL_00d9;
			}
		}

IL_009b:
		{
			List_1_t1760117580 * L_26 = Client_get_ReceivedPackets_m2010246097(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_7 = L_26;
			V_8 = (bool)0;
		}

IL_00a6:
		try
		{ // begin try (depth: 2)
			List_1_t1760117580 * L_27 = V_7;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_27, (bool*)(&V_8), /*hidden argument*/NULL);
			List_1_t1760117580 * L_28 = Client_get_ReceivedPackets_m2010246097(NULL /*static, unused*/, /*hidden argument*/NULL);
			Packet_t288042838 * L_29 = V_4;
			NullCheck(L_29);
			RuntimeObject * L_30 = Packet_Clone_m1402477496(L_29, /*hidden argument*/NULL);
			NullCheck(L_28);
			List_1_Add_m3001567811(L_28, ((Packet_t288042838 *)CastclassClass((RuntimeObject*)L_30, Packet_t288042838_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_m3001567811_RuntimeMethod_var);
			IL2CPP_LEAVE(0xD8, FINALLY_00cb);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00cb;
		}

FINALLY_00cb:
		{ // begin finally (depth: 2)
			{
				bool L_31 = V_8;
				if (!L_31)
				{
					goto IL_00d7;
				}
			}

IL_00cf:
			{
				List_1_t1760117580 * L_32 = V_7;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
			}

IL_00d7:
			{
				IL2CPP_END_FINALLY(203)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(203)
		{
			IL2CPP_JUMP_TBL(0xD8, IL_00d8)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00d8:
		{
		}

IL_00d9:
		{
			((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_HasDetectedDisconnect_18((bool)0);
			goto IL_011e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e2;
		throw e;
	}

CATCH_00e2:
	{ // begin catch(System.Exception)
		{
			V_9 = ((Exception_t *)__exception_local);
			bool L_33 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_00f6;
			}
		}

IL_00ec:
		{
			bool L_34 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_HasDetectedDisconnect_18();
			G_B16_0 = ((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
			goto IL_00f7;
		}

IL_00f6:
		{
			G_B16_0 = 0;
		}

IL_00f7:
		{
			V_10 = (bool)G_B16_0;
			bool L_35 = V_10;
			if (!L_35)
			{
				goto IL_011b;
			}
		}

IL_00fd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
			Log_Output_m3762383546(NULL /*static, unused*/, 3, 2, _stringLiteral1774596248, /*hidden argument*/NULL);
			Exception_t * L_36 = V_9;
			Log_Exception_m409715775(NULL /*static, unused*/, 2, L_36, /*hidden argument*/NULL);
			((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_HasDetectedDisconnect_18((bool)1);
		}

IL_011b:
		{
			goto IL_011e;
		}
	} // end catch (depth: 1)

IL_011e:
	{
	}

IL_011f:
	{
	}

IL_0120:
	{
		bool L_37 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_StopProcesses_17();
		il2cpp_codegen_memory_barrier();
		V_11 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_11;
		if (L_38)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void Scarlet.Communications.Client::ProcessPackets()
extern "C" IL2CPP_METHOD_ATTR void Client_ProcessPackets_m769581024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_ProcessPackets_m769581024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t288042838 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* G_B4_0 = NULL;
	Packet_t288042838 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Packet_t288042838 * G_B3_1 = NULL;
	{
		goto IL_0041;
	}

IL_0003:
	{
		QueueBuffer_t2864759769 * L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ReceiveQueue_5();
		NullCheck(L_0);
		Packet_t288042838 * L_1 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(6 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Dequeue() */, L_0);
		V_0 = L_1;
		Packet_t288042838 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Packet_t288042838 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Packet_t288042838 * L_4 = V_0;
		Packet_t288042838 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_Endpoint_1();
		String_t* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_4;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_4;
			goto IL_0028;
		}
	}
	{
		G_B4_0 = _stringLiteral3927627800;
		G_B4_1 = G_B3_1;
	}

IL_0028:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_Endpoint_1(G_B4_0);
		Packet_t288042838 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Parse_t1966748167_il2cpp_TypeInfo_var);
		Parse_ParseMessage_m407972915(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_9 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_OperationPeriod_14();
		Thread_Sleep_m483098292(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0041:
	{
		bool L_10 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_StopProcesses_17();
		il2cpp_codegen_memory_barrier();
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Boolean Scarlet.Communications.Client::Send(Scarlet.Communications.Packet,Scarlet.Communications.PacketPriority)
extern "C" IL2CPP_METHOD_ATTR bool Client_Send_m3979172155 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___SendPacket0, int32_t ___Priority1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Send_m3979172155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	String_t* G_B8_0 = NULL;
	Packet_t288042838 * G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	Packet_t288042838 * G_B7_1 = NULL;
	{
		int32_t L_0 = ___Priority1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = Client_get_DefaultPriority_m654009412(NULL /*static, unused*/, /*hidden argument*/NULL);
		___Priority1 = L_2;
	}

IL_0012:
	{
		bool L_3 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_Initialized_15();
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		InvalidOperationException_t56020091 * L_5 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_5, _stringLiteral896581729, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Client_Send_m3979172155_RuntimeMethod_var);
	}

IL_002a:
	{
		bool L_6 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_StopProcesses_17();
		il2cpp_codegen_memory_barrier();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_006b;
	}

IL_003a:
	{
		Packet_t288042838 * L_8 = ___SendPacket0;
		Packet_t288042838 * L_9 = ___SendPacket0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_Endpoint_1();
		String_t* L_11 = L_10;
		G_B7_0 = L_11;
		G_B7_1 = L_8;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = L_8;
			goto IL_004b;
		}
	}
	{
		G_B8_0 = _stringLiteral3927627800;
		G_B8_1 = G_B7_1;
	}

IL_004b:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_Endpoint_1(G_B8_0);
		PacketBuffer_t1868544067 * L_12 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_SendQueue_4();
		Packet_t288042838 * L_13 = ___SendPacket0;
		NullCheck(L_13);
		RuntimeObject * L_14 = Packet_Clone_m1402477496(L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___Priority1;
		NullCheck(L_12);
		VirtActionInvoker2< Packet_t288042838 *, int32_t >::Invoke(4 /* System.Void Scarlet.Communications.PacketBuffer::Enqueue(Scarlet.Communications.Packet,System.Int32) */, L_12, ((Packet_t288042838 *)CastclassClass((RuntimeObject*)L_14, Packet_t288042838_il2cpp_TypeInfo_var)), L_15);
		V_3 = (bool)1;
		goto IL_006b;
	}

IL_006b:
	{
		bool L_16 = V_3;
		return L_16;
	}
}
// System.Boolean Scarlet.Communications.Client::SendNow(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Client_SendNow_m1807573565 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___SendPacket0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_SendNow_m1807573565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_Initialized_15();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral513090775, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Client_SendNow_m1807573565_RuntimeMethod_var);
	}

IL_0019:
	{
		bool L_3 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Packet_t288042838 * L_5 = ___SendPacket0;
		bool L_6 = Client_SendRegardless_m2417689071(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0031;
	}

IL_002c:
	{
		V_2 = (bool)0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean Scarlet.Communications.Client::SendUDPNow(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Client_SendUDPNow_m4148789984 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___UDPPacket0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_SendUDPNow_m4148789984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		Packet_t288042838 * L_0 = ___UDPPacket0;
		NullCheck(L_0);
		Message_t750656897 * L_1 = Packet_get_Data_m91096735(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = Message_GetRawData_m3636661453(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Packet_t288042838 * L_3 = ___UDPPacket0;
		NullCheck(L_3);
		Message_t750656897 * L_4 = Packet_get_Data_m91096735(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = L_4->get_Timestamp_0();
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Packet_t288042838 * L_7 = ___UDPPacket0;
		NullCheck(L_7);
		Packet_UpdateTimestamp_m3665378514(L_7, /*hidden argument*/NULL);
	}

IL_0028:
	{
		UdpClient_t967282006 * L_8 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerUDP_2();
		ByteU5BU5D_t4116647657* L_9 = V_0;
		ByteU5BU5D_t4116647657* L_10 = V_0;
		NullCheck(L_10);
		NullCheck(L_8);
		UdpClient_Send_m2761574969(L_8, L_9, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Scarlet.Communications.Client::SendTCPNow(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Client_SendTCPNow_m1223711336 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___TCPPacket0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_SendTCPNow_m1223711336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Packet_t288042838 * L_0 = ___TCPPacket0;
		NullCheck(L_0);
		Message_t750656897 * L_1 = Packet_get_Data_m91096735(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = Message_GetRawData_m3636661453(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		TcpClient_t822906377 * L_3 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerTCP_3();
		ByteU5BU5D_t4116647657* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_3);
		TcpClient_set_SendBufferSize_m3098002341(L_3, (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		Packet_t288042838 * L_5 = ___TCPPacket0;
		NullCheck(L_5);
		Message_t750656897 * L_6 = Packet_get_Data_m91096735(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = L_6->get_Timestamp_0();
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		Packet_t288042838 * L_9 = ___TCPPacket0;
		NullCheck(L_9);
		Packet_UpdateTimestamp_m3665378514(L_9, /*hidden argument*/NULL);
	}

IL_0036:
	{
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		TcpClient_t822906377 * L_10 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_ServerTCP_3();
		NullCheck(L_10);
		Socket_t1119025450 * L_11 = TcpClient_get_Client_m139203108(L_10, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_12 = V_0;
		NullCheck(L_11);
		Socket_Send_m713190430(L_11, L_12, /*hidden argument*/NULL);
		goto IL_006f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004c;
		throw e;
	}

CATCH_004c:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)__exception_local);
			bool L_13 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_HasDetectedDisconnect_18();
			V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
			bool L_14 = V_3;
			if (!L_14)
			{
				goto IL_0064;
			}
		}

IL_005a:
		{
			Exception_t * L_15 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
			Log_Exception_m409715775(NULL /*static, unused*/, 2, L_15, /*hidden argument*/NULL);
		}

IL_0064:
		{
			((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_HasDetectedDisconnect_18((bool)1);
			V_4 = (bool)0;
			goto IL_007a;
		}
	} // end catch (depth: 1)

IL_006f:
	{
		((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->set_HasDetectedDisconnect_18((bool)0);
		V_4 = (bool)1;
		goto IL_007a;
	}

IL_007a:
	{
		bool L_16 = V_4;
		return L_16;
	}
}
// System.Void Scarlet.Communications.Client::SendPackets()
extern "C" IL2CPP_METHOD_ATTR void Client_SendPackets_m1979567306 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_SendPackets_m1979567306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t288042838 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		goto IL_0055;
	}

IL_0003:
	{
		PacketBuffer_t1868544067 * L_0 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_SendQueue_4();
		NullCheck(L_0);
		Packet_t288042838 * L_1 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(6 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Dequeue() */, L_0);
		V_0 = L_1;
		Packet_t288042838 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Packet_t288042838 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		Packet_t288042838 * L_4 = V_0;
		Client_SendNow_m1807573565(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0048;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)__exception_local);
			bool L_5 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_3 = L_5;
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_0045;
			}
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
			Log_Output_m3762383546(NULL /*static, unused*/, 3, 2, _stringLiteral2009889833, /*hidden argument*/NULL);
			Exception_t * L_7 = V_2;
			Log_Exception_m409715775(NULL /*static, unused*/, 2, L_7, /*hidden argument*/NULL);
		}

IL_0045:
		{
			goto IL_0048;
		}
	} // end catch (depth: 1)

IL_0048:
	{
	}

IL_0049:
	{
		int32_t L_8 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_OperationPeriod_14();
		Thread_Sleep_m483098292(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0055:
	{
		bool L_9 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_StopProcesses_17();
		il2cpp_codegen_memory_barrier();
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Boolean Scarlet.Communications.Client::SendRegardless(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Client_SendRegardless_m2417689071 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___SendPacket0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_SendRegardless_m2417689071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	List_1_t1760117580 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		Packet_t288042838 * L_0 = ___SendPacket0;
		NullCheck(L_0);
		bool L_1 = L_0->get_IsUDP_2();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		bool L_2 = Client_get_IsConnected_m2247384803(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 1;
	}

IL_0011:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_006f;
		}
	}
	{
		bool L_4 = ((Client_t2324008571_StaticFields*)il2cpp_codegen_static_fields_for(Client_t2324008571_il2cpp_TypeInfo_var))->get_StorePackets_23();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		List_1_t1760117580 * L_6 = Client_get_SentPackets_m129280601(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_6;
		V_3 = (bool)0;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		List_1_t1760117580 * L_7 = V_2;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_7, (bool*)(&V_3), /*hidden argument*/NULL);
		List_1_t1760117580 * L_8 = Client_get_SentPackets_m129280601(NULL /*static, unused*/, /*hidden argument*/NULL);
		Packet_t288042838 * L_9 = ___SendPacket0;
		NullCheck(L_8);
		List_1_Add_m3001567811(L_8, L_9, /*hidden argument*/List_1_Add_m3001567811_RuntimeMethod_var);
		IL2CPP_LEAVE(0x4C, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_004b;
			}
		}

IL_0044:
		{
			List_1_t1760117580 * L_11 = V_2;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
	}

IL_004d:
	{
		Packet_t288042838 * L_12 = ___SendPacket0;
		NullCheck(L_12);
		bool L_13 = L_12->get_IsUDP_2();
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		Packet_t288042838 * L_15 = ___SendPacket0;
		bool L_16 = Client_SendUDPNow_m4148789984(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		goto IL_007b;
	}

IL_0064:
	{
		Packet_t288042838 * L_17 = ___SendPacket0;
		bool L_18 = Client_SendTCPNow_m1223711336(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		goto IL_007b;
	}

IL_006f:
	{
		InvalidOperationException_t56020091 * L_19 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_19, _stringLiteral733737056, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, Client_SendRegardless_m2417689071_RuntimeMethod_var);
	}

IL_007b:
	{
		bool L_20 = V_5;
		return L_20;
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
// System.Void Scarlet.Communications.ConnectionStatusChanged::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConnectionStatusChanged__ctor_m1663174587 (ConnectionStatusChanged_t3697862163 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionStatusChanged__ctor_m1663174587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
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
// System.Void Scarlet.Communications.GenericController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GenericController__ctor_m4194044539 (GenericController_t3250570503 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericController__ctor_m4194044539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PacketBufferU5BU5D_t518719314* V_0 = NULL;
	Int32U5BU5D_t385246372* V_1 = NULL;
	PacketBufferU5BU5D_t518719314* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		PacketBuffer__ctor_m1931836744(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GenericController_t3250570503_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GenericController_t3250570503_StaticFields*)il2cpp_codegen_static_fields_for(GenericController_t3250570503_il2cpp_TypeInfo_var))->get_N_PRIORITIES_0();
		QueueBufferU5BU5D_t213965988* L_1 = (QueueBufferU5BU5D_t213965988*)SZArrayNew(QueueBufferU5BU5D_t213965988_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_Buffers_1(L_1);
		V_3 = 0;
		goto IL_002f;
	}

IL_001c:
	{
		QueueBufferU5BU5D_t213965988* L_2 = __this->get_Buffers_1();
		int32_t L_3 = V_3;
		QueueBuffer_t2864759769 * L_4 = (QueueBuffer_t2864759769 *)il2cpp_codegen_object_new(QueueBuffer_t2864759769_il2cpp_TypeInfo_var);
		QueueBuffer__ctor_m99776581(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (QueueBuffer_t2864759769 *)L_4);
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericController_t3250570503_il2cpp_TypeInfo_var);
		int32_t L_7 = ((GenericController_t3250570503_StaticFields*)il2cpp_codegen_static_fields_for(GenericController_t3250570503_il2cpp_TypeInfo_var))->get_N_PRIORITIES_0();
		V_4 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_001c;
		}
	}
	{
		PacketBufferU5BU5D_t518719314* L_9 = (PacketBufferU5BU5D_t518719314*)SZArrayNew(PacketBufferU5BU5D_t518719314_il2cpp_TypeInfo_var, (uint32_t)3);
		PacketBufferU5BU5D_t518719314* L_10 = L_9;
		QueueBufferU5BU5D_t213965988* L_11 = __this->get_Buffers_1();
		NullCheck(L_11);
		int32_t L_12 = 1;
		QueueBuffer_t2864759769 * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (PacketBuffer_t1868544067 *)L_13);
		PacketBufferU5BU5D_t518719314* L_14 = L_10;
		QueueBufferU5BU5D_t213965988* L_15 = __this->get_Buffers_1();
		NullCheck(L_15);
		int32_t L_16 = 2;
		QueueBuffer_t2864759769 * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (PacketBuffer_t1868544067 *)L_17);
		PacketBufferU5BU5D_t518719314* L_18 = L_14;
		QueueBufferU5BU5D_t213965988* L_19 = __this->get_Buffers_1();
		NullCheck(L_19);
		int32_t L_20 = 3;
		QueueBuffer_t2864759769 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (PacketBuffer_t1868544067 *)L_21);
		V_0 = L_18;
		Int32U5BU5D_t385246372* L_22 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t385246372* L_23 = L_22;
		RuntimeFieldHandle_t1871169219  L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____A1A60C6C5D2D0FD33377EEF24F6ACB62ED57DFFB_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_23, L_24, /*hidden argument*/NULL);
		V_1 = L_23;
		PacketBufferU5BU5D_t518719314* L_25 = V_0;
		Int32U5BU5D_t385246372* L_26 = V_1;
		BandwidthControlBuffer_t2974463824 * L_27 = (BandwidthControlBuffer_t2974463824 *)il2cpp_codegen_object_new(BandwidthControlBuffer_t2974463824_il2cpp_TypeInfo_var);
		BandwidthControlBuffer__ctor_m2629739754(L_27, L_25, L_26, ((int32_t)256), /*hidden argument*/NULL);
		__this->set_BandwidthBuffer_3(L_27);
		PacketBufferU5BU5D_t518719314* L_28 = (PacketBufferU5BU5D_t518719314*)SZArrayNew(PacketBufferU5BU5D_t518719314_il2cpp_TypeInfo_var, (uint32_t)3);
		PacketBufferU5BU5D_t518719314* L_29 = L_28;
		QueueBufferU5BU5D_t213965988* L_30 = __this->get_Buffers_1();
		NullCheck(L_30);
		int32_t L_31 = 0;
		QueueBuffer_t2864759769 * L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (PacketBuffer_t1868544067 *)L_32);
		PacketBufferU5BU5D_t518719314* L_33 = L_29;
		BandwidthControlBuffer_t2974463824 * L_34 = __this->get_BandwidthBuffer_3();
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (PacketBuffer_t1868544067 *)L_34);
		PacketBufferU5BU5D_t518719314* L_35 = L_33;
		QueueBufferU5BU5D_t213965988* L_36 = __this->get_Buffers_1();
		NullCheck(L_36);
		int32_t L_37 = 4;
		QueueBuffer_t2864759769 * L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (PacketBuffer_t1868544067 *)L_38);
		V_2 = L_35;
		PacketBufferU5BU5D_t518719314* L_39 = V_2;
		PriorityBuffer_t827296848 * L_40 = (PriorityBuffer_t827296848 *)il2cpp_codegen_object_new(PriorityBuffer_t827296848_il2cpp_TypeInfo_var);
		PriorityBuffer__ctor_m1280307384(L_40, L_39, /*hidden argument*/NULL);
		__this->set_PriorityBuffer_2(L_40);
		return;
	}
}
// System.Void Scarlet.Communications.GenericController::Enqueue(Scarlet.Communications.Packet,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GenericController_Enqueue_m4277654532 (GenericController_t3250570503 * __this, Packet_t288042838 * ___Packet0, int32_t ___Priority1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericController_Enqueue_m4277654532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___Priority1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___Priority1;
		IL2CPP_RUNTIME_CLASS_INIT(GenericController_t3250570503_il2cpp_TypeInfo_var);
		int32_t L_2 = ((GenericController_t3250570503_StaticFields*)il2cpp_codegen_static_fields_for(GenericController_t3250570503_il2cpp_TypeInfo_var))->get_N_PRIORITIES_0();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, _stringLiteral593208290, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, GenericController_Enqueue_m4277654532_RuntimeMethod_var);
	}

IL_0023:
	{
		QueueBufferU5BU5D_t213965988* L_5 = __this->get_Buffers_1();
		int32_t L_6 = ___Priority1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		QueueBuffer_t2864759769 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Packet_t288042838 * L_9 = ___Packet0;
		NullCheck(L_8);
		VirtActionInvoker2< Packet_t288042838 *, int32_t >::Invoke(4 /* System.Void Scarlet.Communications.PacketBuffer::Enqueue(Scarlet.Communications.Packet,System.Int32) */, L_8, L_9, 0);
		return;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.GenericController::Peek()
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * GenericController_Peek_m467508 (GenericController_t3250570503 * __this, const RuntimeMethod* method)
{
	Packet_t288042838 * V_0 = NULL;
	{
		PriorityBuffer_t827296848 * L_0 = __this->get_PriorityBuffer_2();
		NullCheck(L_0);
		Packet_t288042838 * L_1 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(5 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Peek() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Packet_t288042838 * L_2 = V_0;
		return L_2;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.GenericController::Dequeue()
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * GenericController_Dequeue_m2911217511 (GenericController_t3250570503 * __this, const RuntimeMethod* method)
{
	Packet_t288042838 * V_0 = NULL;
	{
		PriorityBuffer_t827296848 * L_0 = __this->get_PriorityBuffer_2();
		NullCheck(L_0);
		Packet_t288042838 * L_1 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(6 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Dequeue() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Packet_t288042838 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Scarlet.Communications.GenericController::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GenericController__cctor_m4057573896 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericController__cctor_m4057573896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GenericController_t3250570503_StaticFields*)il2cpp_codegen_static_fields_for(GenericController_t3250570503_il2cpp_TypeInfo_var))->set_N_PRIORITIES_0(5);
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
// System.Void Scarlet.Communications.Message::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Message__ctor_m578942263 (Message_t750656897 * __this, ByteU5BU5D_t4116647657* ___RawData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message__ctor_m578942263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___RawData0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) < ((int32_t)5))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral2051685364, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Message__ctor_m578942263_RuntimeMethod_var);
	}

IL_001e:
	{
		ByteU5BU5D_t4116647657* L_3 = ___RawData0;
		ByteU5BU5D_t4116647657* L_4 = UtilMain_SubArray_TisByte_t1134296376_m3734100360(NULL /*static, unused*/, L_3, 0, 4, /*hidden argument*/UtilMain_SubArray_TisByte_t1134296376_m3734100360_RuntimeMethod_var);
		__this->set_Timestamp_0(L_4);
		ByteU5BU5D_t4116647657* L_5 = ___RawData0;
		NullCheck(L_5);
		int32_t L_6 = 4;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->set_ID_1(L_7);
		ByteU5BU5D_t4116647657* L_8 = ___RawData0;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))) > ((int32_t)5))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_10 = ___RawData0;
		ByteU5BU5D_t4116647657* L_11 = ___RawData0;
		NullCheck(L_11);
		ByteU5BU5D_t4116647657* L_12 = UtilMain_SubArray_TisByte_t1134296376_m3734100360(NULL /*static, unused*/, L_10, 5, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (int32_t)5)), /*hidden argument*/UtilMain_SubArray_TisByte_t1134296376_m3734100360_RuntimeMethod_var);
		__this->set_Payload_2(L_12);
		goto IL_0063;
	}

IL_0055:
	{
		ByteU5BU5D_t4116647657* L_13 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_Payload_2(L_13);
	}

IL_0063:
	{
		return;
	}
}
// System.Void Scarlet.Communications.Message::.ctor(System.Byte,System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Message__ctor_m3893616757 (Message_t750656897 * __this, uint8_t ___ID0, ByteU5BU5D_t4116647657* ___Payload1, ByteU5BU5D_t4116647657* ___Timestamp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message__ctor_m3893616757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_t4116647657* G_B2_0 = NULL;
	Message_t750656897 * G_B2_1 = NULL;
	ByteU5BU5D_t4116647657* G_B1_0 = NULL;
	Message_t750656897 * G_B1_1 = NULL;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___Payload1;
		ByteU5BU5D_t4116647657* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0014:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_Payload_2(G_B2_0);
		ByteU5BU5D_t4116647657* L_3 = ___Timestamp2;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = ___Timestamp2;
		NullCheck(L_4);
		G_B5_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 1;
	}

IL_0028:
	{
		V_0 = (bool)G_B5_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = Packet_GetCurrentTime_m54903901(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_Timestamp_0(L_6);
		goto IL_0044;
	}

IL_003b:
	{
		ByteU5BU5D_t4116647657* L_7 = ___Timestamp2;
		__this->set_Timestamp_0(L_7);
	}

IL_0044:
	{
		uint8_t L_8 = ___ID0;
		__this->set_ID_1(L_8);
		return;
	}
}
// System.Void Scarlet.Communications.Message::SetTime(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Message_SetTime_m2831510877 (Message_t750656897 * __this, ByteU5BU5D_t4116647657* ___Time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_SetTime_m2831510877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___Time0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) < ((int32_t)4))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral885614628, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Message_SetTime_m2831510877_RuntimeMethod_var);
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_3 = ___Time0;
		ByteU5BU5D_t4116647657* L_4 = UtilMain_SubArray_TisByte_t1134296376_m3734100360(NULL /*static, unused*/, L_3, 0, 4, /*hidden argument*/UtilMain_SubArray_TisByte_t1134296376_m3734100360_RuntimeMethod_var);
		__this->set_Timestamp_0(L_4);
		return;
	}
}
// System.Void Scarlet.Communications.Message::AppendData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Message_AppendData_m2972351245 (Message_t750656897 * __this, ByteU5BU5D_t4116647657* ___NewData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_AppendData_m2972351245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_Payload_2();
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = ___NewData0;
		__this->set_Payload_2(L_2);
		goto IL_005f;
	}

IL_0019:
	{
		ByteU5BU5D_t4116647657* L_3 = __this->get_Payload_2();
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = ___NewData0;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))));
		V_1 = L_5;
		ByteU5BU5D_t4116647657* L_6 = __this->get_Payload_2();
		ByteU5BU5D_t4116647657* L_7 = V_1;
		ByteU5BU5D_t4116647657* L_8 = __this->get_Payload_2();
		NullCheck(L_8);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, 0, (RuntimeArray *)(RuntimeArray *)L_7, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_9 = ___NewData0;
		ByteU5BU5D_t4116647657* L_10 = V_1;
		ByteU5BU5D_t4116647657* L_11 = __this->get_Payload_2();
		NullCheck(L_11);
		ByteU5BU5D_t4116647657* L_12 = ___NewData0;
		NullCheck(L_12);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_9, 0, (RuntimeArray *)(RuntimeArray *)L_10, (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_13 = V_1;
		__this->set_Payload_2(L_13);
	}

IL_005f:
	{
		return;
	}
}
// System.Byte[] Scarlet.Communications.Message::GetRawData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Message_GetRawData_m3636661453 (Message_t750656897 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_GetRawData_m3636661453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2606371118 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		List_1_t2606371118 * L_0 = (List_1_t2606371118 *)il2cpp_codegen_object_new(List_1_t2606371118_il2cpp_TypeInfo_var);
		List_1__ctor_m2093855375(L_0, /*hidden argument*/List_1__ctor_m2093855375_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2606371118 * L_1 = V_0;
		ByteU5BU5D_t4116647657* L_2 = __this->get_Timestamp_0();
		NullCheck(L_1);
		List_1_AddRange_m1653210841(L_1, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_m1653210841_RuntimeMethod_var);
		List_1_t2606371118 * L_3 = V_0;
		uint8_t L_4 = __this->get_ID_1();
		NullCheck(L_3);
		List_1_Add_m3346687475(L_3, L_4, /*hidden argument*/List_1_Add_m3346687475_RuntimeMethod_var);
		List_1_t2606371118 * L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = __this->get_Payload_2();
		NullCheck(L_5);
		List_1_AddRange_m1653210841(L_5, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/List_1_AddRange_m1653210841_RuntimeMethod_var);
		List_1_t2606371118 * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = List_1_ToArray_m397882077(L_7, /*hidden argument*/List_1_ToArray_m397882077_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_t4116647657* L_9 = V_1;
		return L_9;
	}
}
// System.String Scarlet.Communications.Message::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Message_ToString_m1206960684 (Message_t750656897 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_ToString_m1206960684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, _stringLiteral540236770, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		ByteU5BU5D_t4116647657* L_3 = __this->get_Timestamp_0();
		String_t* L_4 = UtilMain_BytesToNiceString_m2509286138(NULL /*static, unused*/, L_3, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_Append_m1965104174(L_2, L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_Append_m1965104174(L_5, _stringLiteral2710527202, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = V_0;
		uint8_t* L_7 = __this->get_address_of_ID_1();
		String_t* L_8 = Byte_ToString_m3735479648((uint8_t*)L_7, _stringLiteral3451435000, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m1965104174(L_6, L_8, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = V_0;
		NullCheck(L_9);
		StringBuilder_Append_m1965104174(L_9, _stringLiteral2767841595, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		ByteU5BU5D_t4116647657* L_11 = __this->get_Payload_2();
		String_t* L_12 = UtilMain_BytesToNiceString_m2509286138(NULL /*static, unused*/, L_11, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, L_12, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m2383614642(L_13, ((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_1 = L_15;
		goto IL_007a;
	}

IL_007a:
	{
		String_t* L_16 = V_1;
		return L_16;
	}
}
// System.Object Scarlet.Communications.Message::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Message_Clone_m2859467710 (Message_t750656897 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_Clone_m2859467710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Message_t750656897 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Message_t750656897 * G_B2_0 = NULL;
	Message_t750656897 * G_B1_0 = NULL;
	ByteU5BU5D_t4116647657* G_B3_0 = NULL;
	Message_t750656897 * G_B3_1 = NULL;
	Message_t750656897 * G_B5_0 = NULL;
	Message_t750656897 * G_B4_0 = NULL;
	ByteU5BU5D_t4116647657* G_B6_0 = NULL;
	Message_t750656897 * G_B6_1 = NULL;
	{
		RuntimeObject * L_0 = Object_MemberwiseClone_m1474068832(__this, /*hidden argument*/NULL);
		V_0 = ((Message_t750656897 *)CastclassClass((RuntimeObject*)L_0, Message_t750656897_il2cpp_TypeInfo_var));
		Message_t750656897 * L_1 = V_0;
		ByteU5BU5D_t4116647657* L_2 = __this->get_Timestamp_0();
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = ((ByteU5BU5D_t4116647657*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0019:
	{
		ByteU5BU5D_t4116647657* L_3 = __this->get_Timestamp_0();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_3);
		RuntimeObject * L_4 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_3, /*hidden argument*/NULL);
		G_B3_0 = ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_4, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_Timestamp_0(G_B3_0);
		Message_t750656897 * L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = __this->get_Payload_2();
		G_B4_0 = L_5;
		if (L_6)
		{
			G_B5_0 = L_5;
			goto IL_003a;
		}
	}
	{
		G_B6_0 = ((ByteU5BU5D_t4116647657*)(NULL));
		G_B6_1 = G_B4_0;
		goto IL_004a;
	}

IL_003a:
	{
		ByteU5BU5D_t4116647657* L_7 = __this->get_Payload_2();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_7);
		RuntimeObject * L_8 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_7, /*hidden argument*/NULL);
		G_B6_0 = ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_8, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
		G_B6_1 = G_B5_0;
	}

IL_004a:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_Payload_2(G_B6_0);
		Message_t750656897 * L_9 = V_0;
		V_1 = L_9;
		goto IL_0053;
	}

IL_0053:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
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
// Scarlet.Communications.Message Scarlet.Communications.Packet::get_Data()
extern "C" IL2CPP_METHOD_ATTR Message_t750656897 * Packet_get_Data_m91096735 (Packet_t288042838 * __this, const RuntimeMethod* method)
{
	{
		Message_t750656897 * L_0 = __this->get_U3CDataU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Scarlet.Communications.Packet::set_Data(Scarlet.Communications.Message)
extern "C" IL2CPP_METHOD_ATTR void Packet_set_Data_m981307188 (Packet_t288042838 * __this, Message_t750656897 * ___value0, const RuntimeMethod* method)
{
	{
		Message_t750656897 * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Scarlet.Communications.Packet::.ctor(Scarlet.Communications.Message,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void Packet__ctor_m4249240902 (Packet_t288042838 * __this, Message_t750656897 * ___Data0, bool ___IsUDP1, String_t* ___Endpoint2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___IsUDP1;
		__this->set_IsUDP_2(L_0);
		Message_t750656897 * L_1 = ___Data0;
		Packet_set_Data_m981307188(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___Endpoint2;
		__this->set_Endpoint_1(L_2);
		return;
	}
}
// System.Void Scarlet.Communications.Packet::.ctor(System.Byte,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void Packet__ctor_m2460275058 (Packet_t288042838 * __this, uint8_t ___ID0, bool ___IsUDP1, String_t* ___Endpoint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Packet__ctor_m2460275058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___ID0;
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0);
		Message_t750656897 * L_2 = (Message_t750656897 *)il2cpp_codegen_object_new(Message_t750656897_il2cpp_TypeInfo_var);
		Message__ctor_m3893616757(L_2, L_0, L_1, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		bool L_3 = ___IsUDP1;
		String_t* L_4 = ___Endpoint2;
		Packet__ctor_m4249240902(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Communications.Packet::AppendData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Packet_AppendData_m1681439363 (Packet_t288042838 * __this, ByteU5BU5D_t4116647657* ___NewData0, const RuntimeMethod* method)
{
	{
		Message_t750656897 * L_0 = Packet_get_Data_m91096735(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = ___NewData0;
		NullCheck(L_0);
		Message_AppendData_m2972351245(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Scarlet.Communications.Packet::GetForSend(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Packet_GetForSend_m1092525422 (Packet_t288042838 * __this, ByteU5BU5D_t4116647657* ___Timestamp0, const RuntimeMethod* method)
{
	bool V_0 = false;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___Timestamp0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___Timestamp0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Message_t750656897 * L_3 = Packet_get_Data_m91096735(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = Packet_GetCurrentTime_m54903901(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Message_SetTime_m2831510877(L_3, L_4, /*hidden argument*/NULL);
		goto IL_0038;
	}

IL_0029:
	{
		Message_t750656897 * L_5 = Packet_get_Data_m91096735(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = ___Timestamp0;
		NullCheck(L_5);
		Message_SetTime_m2831510877(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Message_t750656897 * L_7 = Packet_get_Data_m91096735(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = Message_GetRawData_m3636661453(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0046;
	}

IL_0046:
	{
		ByteU5BU5D_t4116647657* L_9 = V_1;
		return L_9;
	}
}
// System.Int32 Scarlet.Communications.Packet::GetLength()
extern "C" IL2CPP_METHOD_ATTR int32_t Packet_GetLength_m1761659771 (Packet_t288042838 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = Packet_GetForSend_m1092525422(__this, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Scarlet.Communications.Packet::UpdateTimestamp()
extern "C" IL2CPP_METHOD_ATTR void Packet_UpdateTimestamp_m3665378514 (Packet_t288042838 * __this, const RuntimeMethod* method)
{
	{
		Message_t750656897 * L_0 = Packet_get_Data_m91096735(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = Packet_GetCurrentTime_m54903901(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Message_SetTime_m2831510877(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Scarlet.Communications.Packet::GetCurrentTime()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Packet_GetCurrentTime_m54903901 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Packet_GetCurrentTime_m54903901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	TimeSpan_t881159249  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ByteU5BU5D_t4116647657* V_4 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = DateTime_get_UtcNow_m1393945741(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_0;
		DateTime_t3738529785  L_1;
		memset(&L_1, 0, sizeof(L_1));
		DateTime__ctor_m12900168((&L_1), ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_2 = DateTime_Subtract_m77007479((DateTime_t3738529785 *)(&V_2), L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		double L_3 = TimeSpan_get_TotalSeconds_m4083325051((TimeSpan_t881159249 *)(&V_3), /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_3)));
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UtilData_t3270872621_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_5 = UtilData_ToBytes_m2267011298(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		ByteU5BU5D_t4116647657* L_6 = V_1;
		V_4 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		ByteU5BU5D_t4116647657* L_7 = V_4;
		return L_7;
	}
}
// System.String Scarlet.Communications.Packet::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Packet_ToString_m2423962724 (Packet_t288042838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Packet_ToString_m2423962724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = __this->get_IsUDP_2();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteral1277468006;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteral1277402469;
	}

IL_0015:
	{
		Message_t750656897 * L_1 = Packet_get_Data_m91096735(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, G_B3_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Object Scarlet.Communications.Packet::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Packet_Clone_m1402477496 (Packet_t288042838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Packet_Clone_m1402477496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t288042838 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Packet_t288042838 * G_B2_0 = NULL;
	Packet_t288042838 * G_B1_0 = NULL;
	Message_t750656897 * G_B3_0 = NULL;
	Packet_t288042838 * G_B3_1 = NULL;
	{
		RuntimeObject * L_0 = Object_MemberwiseClone_m1474068832(__this, /*hidden argument*/NULL);
		V_0 = ((Packet_t288042838 *)CastclassClass((RuntimeObject*)L_0, Packet_t288042838_il2cpp_TypeInfo_var));
		Packet_t288042838 * L_1 = V_0;
		Message_t750656897 * L_2 = Packet_get_Data_m91096735(__this, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = ((Message_t750656897 *)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0019:
	{
		Message_t750656897 * L_3 = Packet_get_Data_m91096735(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject * L_4 = Message_Clone_m2859467710(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((Message_t750656897 *)CastclassClass((RuntimeObject*)L_4, Message_t750656897_il2cpp_TypeInfo_var));
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		Packet_set_Data_m981307188(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		Packet_t288042838 * L_5 = V_0;
		String_t* L_6 = __this->get_Endpoint_1();
		String_t* L_7 = String_Copy_m3813992399(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_Endpoint_1(L_7);
		Packet_t288042838 * L_8 = V_0;
		V_1 = L_8;
		goto IL_0044;
	}

IL_0044:
	{
		RuntimeObject * L_9 = V_1;
		return L_9;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.Packet::FromBytes(System.Byte[],System.Net.Sockets.ProtocolType)
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * Packet_FromBytes_m133350180 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___PacketBytes0, int32_t ___Protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Packet_FromBytes_m133350180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t288042838 * V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___PacketBytes0;
		Message_t750656897 * L_1 = (Message_t750656897 *)il2cpp_codegen_object_new(Message_t750656897_il2cpp_TypeInfo_var);
		Message__ctor_m578942263(L_1, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___Protocol1;
		Packet_t288042838 * L_3 = (Packet_t288042838 *)il2cpp_codegen_object_new(Packet_t288042838_il2cpp_TypeInfo_var);
		Packet__ctor_m4249240902(L_3, L_1, (bool)((((int32_t)L_2) == ((int32_t)((int32_t)17)))? 1 : 0), (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Packet_t288042838 * L_4 = V_0;
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
// System.Void Scarlet.Communications.PacketBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PacketBuffer__ctor_m1931836744 (PacketBuffer_t1868544067 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Scarlet.Communications.PacketHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void PacketHandler_Start_m2557195364 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PacketHandler_Start_m2557195364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((PacketHandler_t780382300_StaticFields*)il2cpp_codegen_static_fields_for(PacketHandler_t780382300_il2cpp_TypeInfo_var))->get_Started_0();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		((PacketHandler_t780382300_StaticFields*)il2cpp_codegen_static_fields_for(PacketHandler_t780382300_il2cpp_TypeInfo_var))->set_Started_0((bool)1);
		intptr_t L_2 = (intptr_t)PacketHandler_ParseWatchdogPacket_m3543783839_RuntimeMethod_var;
		ParseMethod_t2014021367 * L_3 = (ParseMethod_t2014021367 *)il2cpp_codegen_object_new(ParseMethod_t2014021367_il2cpp_TypeInfo_var);
		ParseMethod__ctor_m4179907640(L_3, NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Parse_t1966748167_il2cpp_TypeInfo_var);
		Parse_SetParseHandler_m2086723136(NULL /*static, unused*/, (uint8_t)((int32_t)240), L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void Scarlet.Communications.PacketHandler::ParseWatchdogPacket(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR void PacketHandler_ParseWatchdogPacket_m3543783839 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___WatchdogPacket0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PacketHandler_ParseWatchdogPacket_m3543783839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Packet_t288042838 * L_0 = ___WatchdogPacket0;
		NullCheck(L_0);
		Message_t750656897 * L_1 = Packet_get_Data_m91096735(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = L_1->get_Payload_2();
		IL2CPP_RUNTIME_CLASS_INIT(UtilData_t3270872621_il2cpp_TypeInfo_var);
		String_t* L_3 = UtilData_ToString_m3457872771(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		WatchdogManager_FoundWatchdog_m1699557513(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
// System.Void Scarlet.Communications.PacketWriter::.ctor(System.Byte,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void PacketWriter__ctor_m2193869829 (PacketWriter_t1568959448 * __this, uint8_t ___ID0, bool ___IsUDP1, String_t* ___Endpoint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PacketWriter__ctor_m2193869829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		uint8_t L_0 = ___ID0;
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0);
		Message_t750656897 * L_2 = (Message_t750656897 *)il2cpp_codegen_object_new(Message_t750656897_il2cpp_TypeInfo_var);
		Message__ctor_m3893616757(L_2, L_0, L_1, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		bool L_3 = ___IsUDP1;
		String_t* L_4 = ___Endpoint2;
		Packet_t288042838 * L_5 = (Packet_t288042838 *)il2cpp_codegen_object_new(Packet_t288042838_il2cpp_TypeInfo_var);
		Packet__ctor_m4249240902(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_Packet_0(L_5);
		return;
	}
}
// Scarlet.Communications.PacketWriter Scarlet.Communications.PacketWriter::Put(System.String)
extern "C" IL2CPP_METHOD_ATTR PacketWriter_t1568959448 * PacketWriter_Put_m2929071915 (PacketWriter_t1568959448 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PacketWriter_Put_m2929071915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PacketWriter_t1568959448 * V_0 = NULL;
	{
		Packet_t288042838 * L_0 = __this->get_Packet_0();
		NullCheck(L_0);
		Message_t750656897 * L_1 = Packet_get_Data_m91096735(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(UtilData_t3270872621_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_3 = UtilData_ToBytes_m207232572(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Message_AppendData_m2972351245(L_1, L_3, /*hidden argument*/NULL);
		V_0 = __this;
		goto IL_001c;
	}

IL_001c:
	{
		PacketWriter_t1568959448 * L_4 = V_0;
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
// System.Void Scarlet.Communications.Parse::SetParseHandler(System.Byte,Scarlet.Communications.Parse/ParseMethod)
extern "C" IL2CPP_METHOD_ATTR void Parse_SetParseHandler_m2086723136 (RuntimeObject * __this /* static, unused */, uint8_t ___MessageID0, ParseMethod_t2014021367 * ___ParseMethod1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parse_SetParseHandler_m2086723136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Parse_t1966748167_il2cpp_TypeInfo_var);
		Dictionary_2_t3808507429 * L_0 = ((Parse_t1966748167_StaticFields*)il2cpp_codegen_static_fields_for(Parse_t1966748167_il2cpp_TypeInfo_var))->get_ParsingHandlers_0();
		uint8_t L_1 = ___MessageID0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m1093851151(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m1093851151_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = Byte_ToString_m3735479648((uint8_t*)(&___MessageID0), _stringLiteral3451303928, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral62160184, L_4, _stringLiteral1398689121, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 2, 2, L_5, /*hidden argument*/NULL);
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Parse_t1966748167_il2cpp_TypeInfo_var);
		Dictionary_2_t3808507429 * L_6 = ((Parse_t1966748167_StaticFields*)il2cpp_codegen_static_fields_for(Parse_t1966748167_il2cpp_TypeInfo_var))->get_ParsingHandlers_0();
		uint8_t L_7 = ___MessageID0;
		ParseMethod_t2014021367 * L_8 = ___ParseMethod1;
		NullCheck(L_6);
		Dictionary_2_set_Item_m273212993(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_set_Item_m273212993_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Scarlet.Communications.Parse::ParseMessage(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR bool Parse_ParseMessage_m407972915 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___Packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parse_ParseMessage_m407972915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Packet_t288042838 * L_0 = ___Packet0;
			NullCheck(L_0);
			Message_t750656897 * L_1 = Packet_get_Data_m91096735(L_0, /*hidden argument*/NULL);
			NullCheck(L_1);
			uint8_t L_2 = L_1->get_ID_1();
			if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)240)))))
			{
				goto IL_001b;
			}
		}

IL_0014:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
			bool L_3 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_OutputWatchdogDebug_4();
			G_B4_0 = ((int32_t)(L_3));
			goto IL_001c;
		}

IL_001b:
		{
			G_B4_0 = 1;
		}

IL_001c:
		{
			V_0 = (bool)G_B4_0;
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_0020:
		{
			Packet_t288042838 * L_5 = ___Packet0;
			NullCheck(L_5);
			Message_t750656897 * L_6 = Packet_get_Data_m91096735(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3114980137, L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
			Log_Output_m3762383546(NULL /*static, unused*/, 0, 2, L_8, /*hidden argument*/NULL);
		}

IL_003f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Parse_t1966748167_il2cpp_TypeInfo_var);
			Dictionary_2_t3808507429 * L_9 = ((Parse_t1966748167_StaticFields*)il2cpp_codegen_static_fields_for(Parse_t1966748167_il2cpp_TypeInfo_var))->get_ParsingHandlers_0();
			Packet_t288042838 * L_10 = ___Packet0;
			NullCheck(L_10);
			Message_t750656897 * L_11 = Packet_get_Data_m91096735(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			uint8_t L_12 = L_11->get_ID_1();
			NullCheck(L_9);
			bool L_13 = Dictionary_2_ContainsKey_m1093851151(L_9, L_12, /*hidden argument*/Dictionary_2_ContainsKey_m1093851151_RuntimeMethod_var);
			V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
			bool L_14 = V_1;
			if (!L_14)
			{
				goto IL_0087;
			}
		}

IL_005b:
		{
			Packet_t288042838 * L_15 = ___Packet0;
			NullCheck(L_15);
			Message_t750656897 * L_16 = Packet_get_Data_m91096735(L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			uint8_t L_17 = L_16->get_ID_1();
			uint8_t L_18 = L_17;
			RuntimeObject * L_19 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_18);
			String_t* L_20 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3476715932, L_19, _stringLiteral3452614527, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
			Log_Output_m3762383546(NULL /*static, unused*/, 3, 2, L_20, /*hidden argument*/NULL);
			V_2 = (bool)0;
			goto IL_00cb;
		}

IL_0087:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Parse_t1966748167_il2cpp_TypeInfo_var);
			Dictionary_2_t3808507429 * L_21 = ((Parse_t1966748167_StaticFields*)il2cpp_codegen_static_fields_for(Parse_t1966748167_il2cpp_TypeInfo_var))->get_ParsingHandlers_0();
			Packet_t288042838 * L_22 = ___Packet0;
			NullCheck(L_22);
			Message_t750656897 * L_23 = Packet_get_Data_m91096735(L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			uint8_t L_24 = L_23->get_ID_1();
			NullCheck(L_21);
			Delegate_t1188392813 * L_25 = Dictionary_2_get_Item_m4206083478(L_21, L_24, /*hidden argument*/Dictionary_2_get_Item_m4206083478_RuntimeMethod_var);
			ObjectU5BU5D_t2843939325* L_26 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t2843939325* L_27 = L_26;
			Packet_t288042838 * L_28 = ___Packet0;
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, L_28);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
			NullCheck(L_25);
			Delegate_DynamicInvoke_m2477351526(L_25, L_27, /*hidden argument*/NULL);
			V_2 = (bool)1;
			goto IL_00cb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00b0;
		throw e;
	}

CATCH_00b0:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 3, 2, _stringLiteral3815673821, /*hidden argument*/NULL);
		Exception_t * L_29 = V_3;
		Log_Exception_m409715775(NULL /*static, unused*/, 2, L_29, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_00cb;
	} // end catch (depth: 1)

IL_00cb:
	{
		bool L_30 = V_2;
		return L_30;
	}
}
// System.Void Scarlet.Communications.Parse::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Parse__cctor_m3376738229 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parse__cctor_m3376738229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3808507429 * L_0 = (Dictionary_2_t3808507429 *)il2cpp_codegen_object_new(Dictionary_2_t3808507429_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4292710812(L_0, /*hidden argument*/Dictionary_2__ctor_m4292710812_RuntimeMethod_var);
		((Parse_t1966748167_StaticFields*)il2cpp_codegen_static_fields_for(Parse_t1966748167_il2cpp_TypeInfo_var))->set_ParsingHandlers_0(L_0);
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
// System.Void Scarlet.Communications.Parse/ParseMethod::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ParseMethod__ctor_m4179907640 (ParseMethod_t2014021367 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Scarlet.Communications.Parse/ParseMethod::Invoke(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR void ParseMethod_Invoke_m4037118045 (ParseMethod_t2014021367 * __this, Packet_t288042838 * ___Packet0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, Packet_t288042838 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___Packet0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, Packet_t288042838 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___Packet0, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Packet_t288042838 * >::Invoke(targetMethod, targetThis, ___Packet0);
							else
								GenericVirtActionInvoker1< Packet_t288042838 * >::Invoke(targetMethod, targetThis, ___Packet0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Packet_t288042838 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___Packet0);
							else
								VirtActionInvoker1< Packet_t288042838 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___Packet0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, Packet_t288042838 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___Packet0, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___Packet0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___Packet0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___Packet0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___Packet0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (Packet_t288042838 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___Packet0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, Packet_t288042838 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___Packet0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, Packet_t288042838 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___Packet0, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Packet_t288042838 * >::Invoke(targetMethod, targetThis, ___Packet0);
						else
							GenericVirtActionInvoker1< Packet_t288042838 * >::Invoke(targetMethod, targetThis, ___Packet0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Packet_t288042838 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___Packet0);
						else
							VirtActionInvoker1< Packet_t288042838 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___Packet0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Packet_t288042838 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___Packet0, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___Packet0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___Packet0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___Packet0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___Packet0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (Packet_t288042838 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___Packet0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Scarlet.Communications.Parse/ParseMethod::BeginInvoke(Scarlet.Communications.Packet,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ParseMethod_BeginInvoke_m360842301 (ParseMethod_t2014021367 * __this, Packet_t288042838 * ___Packet0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___Packet0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Scarlet.Communications.Parse/ParseMethod::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ParseMethod_EndInvoke_m2749393400 (ParseMethod_t2014021367 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scarlet.Communications.PriorityBuffer::.ctor(Scarlet.Communications.PacketBuffer[])
extern "C" IL2CPP_METHOD_ATTR void PriorityBuffer__ctor_m1280307384 (PriorityBuffer_t827296848 * __this, PacketBufferU5BU5D_t518719314* ___Buffers0, const RuntimeMethod* method)
{
	{
		PacketBuffer__ctor_m1931836744(__this, /*hidden argument*/NULL);
		PacketBufferU5BU5D_t518719314* L_0 = ___Buffers0;
		__this->set_Buffers_0(L_0);
		PacketBufferU5BU5D_t518719314* L_1 = ___Buffers0;
		NullCheck(L_1);
		__this->set_NBuffers_1((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))));
		return;
	}
}
// System.Void Scarlet.Communications.PriorityBuffer::Enqueue(Scarlet.Communications.Packet,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PriorityBuffer_Enqueue_m4112518386 (PriorityBuffer_t827296848 * __this, Packet_t288042838 * ___Packet0, int32_t ___Priority1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PriorityBuffer_Enqueue_m4112518386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___Priority1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___Priority1;
		int32_t L_2 = __this->get_NBuffers_1();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, _stringLiteral593208290, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, PriorityBuffer_Enqueue_m4112518386_RuntimeMethod_var);
	}

IL_0024:
	{
		PacketBufferU5BU5D_t518719314* L_5 = __this->get_Buffers_0();
		int32_t L_6 = ___Priority1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		PacketBuffer_t1868544067 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Packet_t288042838 * L_9 = ___Packet0;
		NullCheck(L_8);
		VirtActionInvoker2< Packet_t288042838 *, int32_t >::Invoke(4 /* System.Void Scarlet.Communications.PacketBuffer::Enqueue(Scarlet.Communications.Packet,System.Int32) */, L_8, L_9, 0);
		return;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.PriorityBuffer::Peek()
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * PriorityBuffer_Peek_m3616297692 (PriorityBuffer_t827296848 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Packet_t288042838 * V_1 = NULL;
	bool V_2 = false;
	Packet_t288042838 * V_3 = NULL;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		PacketBufferU5BU5D_t518719314* L_0 = __this->get_Buffers_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		PacketBuffer_t1868544067 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Packet_t288042838 * L_4 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(5 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Peek() */, L_3);
		V_1 = L_4;
		Packet_t288042838 * L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Packet_t288042838 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		Packet_t288042838 * L_7 = V_1;
		V_3 = L_7;
		goto IL_0039;
	}

IL_0021:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_NBuffers_1();
		V_4 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		V_3 = (Packet_t288042838 *)NULL;
		goto IL_0039;
	}

IL_0039:
	{
		Packet_t288042838 * L_12 = V_3;
		return L_12;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.PriorityBuffer::Dequeue()
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * PriorityBuffer_Dequeue_m4008436994 (PriorityBuffer_t827296848 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Packet_t288042838 * V_1 = NULL;
	bool V_2 = false;
	Packet_t288042838 * V_3 = NULL;
	bool V_4 = false;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		PacketBufferU5BU5D_t518719314* L_0 = __this->get_Buffers_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		PacketBuffer_t1868544067 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Packet_t288042838 * L_4 = VirtFuncInvoker0< Packet_t288042838 * >::Invoke(6 /* Scarlet.Communications.Packet Scarlet.Communications.PacketBuffer::Dequeue() */, L_3);
		V_1 = L_4;
		Packet_t288042838 * L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Packet_t288042838 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		Packet_t288042838 * L_7 = V_1;
		V_3 = L_7;
		goto IL_0039;
	}

IL_0021:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_NBuffers_1();
		V_4 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		V_3 = (Packet_t288042838 *)NULL;
		goto IL_0039;
	}

IL_0039:
	{
		Packet_t288042838 * L_12 = V_3;
		return L_12;
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
// System.Void Scarlet.Communications.QueueBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QueueBuffer__ctor_m99776581 (QueueBuffer_t2864759769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueueBuffer__ctor_m99776581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PacketBuffer__ctor_m1931836744(__this, /*hidden argument*/NULL);
		Queue_1_t134302332 * L_0 = (Queue_1_t134302332 *)il2cpp_codegen_object_new(Queue_1_t134302332_il2cpp_TypeInfo_var);
		Queue_1__ctor_m3651017428(L_0, /*hidden argument*/Queue_1__ctor_m3651017428_RuntimeMethod_var);
		__this->set_Queue_0(L_0);
		return;
	}
}
// System.Void Scarlet.Communications.QueueBuffer::Enqueue(Scarlet.Communications.Packet,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void QueueBuffer_Enqueue_m2179749773 (QueueBuffer_t2864759769 * __this, Packet_t288042838 * ___Packet0, int32_t ___Priority1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueueBuffer_Enqueue_m2179749773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Queue_1_t134302332 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___Priority1;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3150376552, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, QueueBuffer_Enqueue_m2179749773_RuntimeMethod_var);
	}

IL_0015:
	{
		Queue_1_t134302332 * L_3 = __this->get_Queue_0();
		V_1 = L_3;
		V_2 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		Queue_1_t134302332 * L_4 = V_1;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_4, (bool*)(&V_2), /*hidden argument*/NULL);
		Queue_1_t134302332 * L_5 = __this->get_Queue_0();
		Packet_t288042838 * L_6 = ___Packet0;
		NullCheck(L_5);
		Queue_1_Enqueue_m2940053685(L_5, L_6, /*hidden argument*/Queue_1_Enqueue_m2940053685_RuntimeMethod_var);
		IL2CPP_LEAVE(0x43, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			Queue_1_t134302332 * L_8 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		return;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.QueueBuffer::Peek()
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * QueueBuffer_Peek_m958739071 (QueueBuffer_t2864759769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueueBuffer_Peek_m958739071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t134302332 * V_0 = NULL;
	bool V_1 = false;
	Packet_t288042838 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t134302332 * L_0 = __this->get_Queue_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t134302332 * L_1 = V_0;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		}

IL_0014:
		try
		{ // begin try (depth: 2)
			Queue_1_t134302332 * L_2 = __this->get_Queue_0();
			NullCheck(L_2);
			Packet_t288042838 * L_3 = Queue_1_Peek_m2684039324(L_2, /*hidden argument*/Queue_1_Peek_m2684039324_RuntimeMethod_var);
			V_2 = L_3;
			IL2CPP_LEAVE(0x34, FINALLY_0029);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0023;
			throw e;
		}

CATCH_0023:
		{ // begin catch(System.InvalidOperationException)
			V_2 = (Packet_t288042838 *)NULL;
			IL2CPP_LEAVE(0x34, FINALLY_0029);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0033;
			}
		}

IL_002c:
		{
			Queue_1_t134302332 * L_5 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		Packet_t288042838 * L_6 = V_2;
		return L_6;
	}
}
// Scarlet.Communications.Packet Scarlet.Communications.QueueBuffer::Dequeue()
extern "C" IL2CPP_METHOD_ATTR Packet_t288042838 * QueueBuffer_Dequeue_m204885040 (QueueBuffer_t2864759769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueueBuffer_Dequeue_m204885040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t134302332 * V_0 = NULL;
	bool V_1 = false;
	Packet_t288042838 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t134302332 * L_0 = __this->get_Queue_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t134302332 * L_1 = V_0;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		}

IL_0014:
		try
		{ // begin try (depth: 2)
			Queue_1_t134302332 * L_2 = __this->get_Queue_0();
			NullCheck(L_2);
			Packet_t288042838 * L_3 = Queue_1_Dequeue_m758694657(L_2, /*hidden argument*/Queue_1_Dequeue_m758694657_RuntimeMethod_var);
			V_2 = L_3;
			IL2CPP_LEAVE(0x34, FINALLY_0029);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (InvalidOperationException_t56020091_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0023;
			throw e;
		}

CATCH_0023:
		{ // begin catch(System.InvalidOperationException)
			V_2 = (Packet_t288042838 *)NULL;
			IL2CPP_LEAVE(0x34, FINALLY_0029);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0033;
			}
		}

IL_002c:
		{
			Queue_1_t134302332 * L_5 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		Packet_t288042838 * L_6 = V_2;
		return L_6;
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
// System.Void Scarlet.Communications.Server::SendNow(Scarlet.Communications.Packet)
extern "C" IL2CPP_METHOD_ATTR void Server_SendNow_m1169191716 (RuntimeObject * __this /* static, unused */, Packet_t288042838 * ___ToSend0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_SendNow_m1169191716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	ScarletClient_t1005814993 * V_6 = NULL;
	bool V_7 = false;
	ByteU5BU5D_t4116647657* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	ScarletClient_t1005814993 * V_11 = NULL;
	bool V_12 = false;
	ByteU5BU5D_t4116647657* V_13 = NULL;
	bool V_14 = false;
	Exception_t * V_15 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
		bool L_0 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Initialized_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral2901600569, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Server_SendNow_m1169191716_RuntimeMethod_var);
	}

IL_0019:
	{
		Packet_t288042838 * L_3 = ___ToSend0;
		NullCheck(L_3);
		Message_t750656897 * L_4 = Packet_get_Data_m91096735(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		uint8_t L_5 = L_4->get_ID_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)240)))))
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
		bool L_6 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_OutputWatchdogDebug_4();
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0033;
	}

IL_0032:
	{
		G_B5_0 = 1;
	}

IL_0033:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		Packet_t288042838 * L_8 = ___ToSend0;
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2102258256, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 0, 2, L_9, /*hidden argument*/NULL);
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
		Dictionary_2_t791071292 * L_10 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Clients_0();
		Packet_t288042838 * L_11 = ___ToSend0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_Endpoint_1();
		NullCheck(L_10);
		bool L_13 = Dictionary_2_ContainsKey_m3542877822(L_10, L_12, /*hidden argument*/Dictionary_2_ContainsKey_m3542877822_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		Packet_t288042838 * L_15 = ___ToSend0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_Endpoint_1();
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		WatchdogManager_RemoveWatchdog_m1082675166(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 2, 2, _stringLiteral3054392913, /*hidden argument*/NULL);
		goto IL_0225;
	}

IL_0082:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
		Dictionary_2_t791071292 * L_17 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Clients_0();
		Packet_t288042838 * L_18 = ___ToSend0;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_Endpoint_1();
		NullCheck(L_17);
		ScarletClient_t1005814993 * L_20 = Dictionary_2_get_Item_m1765558449(L_17, L_19, /*hidden argument*/Dictionary_2_get_Item_m1765558449_RuntimeMethod_var);
		NullCheck(L_20);
		bool L_21 = L_20->get_Connected_2();
		V_3 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 2, 2, _stringLiteral22641540, /*hidden argument*/NULL);
		goto IL_0225;
	}

IL_00b1:
	{
	}

IL_00b2:
	try
	{ // begin try (depth: 1)
		{
			Packet_t288042838 * L_23 = ___ToSend0;
			NullCheck(L_23);
			bool L_24 = L_23->get_IsUDP_2();
			V_4 = L_24;
			bool L_25 = V_4;
			if (!L_25)
			{
				goto IL_0166;
			}
		}

IL_00c2:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
			Dictionary_2_t791071292 * L_26 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Clients_0();
			Packet_t288042838 * L_27 = ___ToSend0;
			NullCheck(L_27);
			String_t* L_28 = L_27->get_Endpoint_1();
			NullCheck(L_26);
			bool L_29 = Dictionary_2_ContainsKey_m3542877822(L_26, L_28, /*hidden argument*/Dictionary_2_ContainsKey_m3542877822_RuntimeMethod_var);
			V_5 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
			bool L_30 = V_5;
			if (!L_30)
			{
				goto IL_00e8;
			}
		}

IL_00dc:
		{
			InvalidOperationException_t56020091 * L_31 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(L_31, _stringLiteral22641540, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, Server_SendNow_m1169191716_RuntimeMethod_var);
		}

IL_00e8:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
			Dictionary_2_t791071292 * L_32 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Clients_0();
			Packet_t288042838 * L_33 = ___ToSend0;
			NullCheck(L_33);
			String_t* L_34 = L_33->get_Endpoint_1();
			NullCheck(L_32);
			ScarletClient_t1005814993 * L_35 = Dictionary_2_get_Item_m1765558449(L_32, L_34, /*hidden argument*/Dictionary_2_get_Item_m1765558449_RuntimeMethod_var);
			V_6 = L_35;
			V_7 = (bool)0;
		}

IL_00fd:
		try
		{ // begin try (depth: 2)
			{
				ScarletClient_t1005814993 * L_36 = V_6;
				Monitor_Enter_m984175629(NULL /*static, unused*/, L_36, (bool*)(&V_7), /*hidden argument*/NULL);
				Packet_t288042838 * L_37 = ___ToSend0;
				NullCheck(L_37);
				ByteU5BU5D_t4116647657* L_38 = Packet_GetForSend_m1092525422(L_37, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
				V_8 = L_38;
				IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
				UdpClient_t967282006 * L_39 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_UDPListener_1();
				ByteU5BU5D_t4116647657* L_40 = V_8;
				ByteU5BU5D_t4116647657* L_41 = V_8;
				NullCheck(L_41);
				Dictionary_2_t791071292 * L_42 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Clients_0();
				Packet_t288042838 * L_43 = ___ToSend0;
				NullCheck(L_43);
				String_t* L_44 = L_43->get_Endpoint_1();
				NullCheck(L_42);
				ScarletClient_t1005814993 * L_45 = Dictionary_2_get_Item_m1765558449(L_42, L_44, /*hidden argument*/Dictionary_2_get_Item_m1765558449_RuntimeMethod_var);
				NullCheck(L_45);
				IPEndPoint_t3791887218 * L_46 = L_45->get_EndpointUDP_1();
				NullCheck(L_39);
				UdpClient_Send_m2795483932(L_39, L_40, (((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))), L_46, /*hidden argument*/NULL);
				bool L_47 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_StorePackets_5();
				V_9 = L_47;
				bool L_48 = V_9;
				if (!L_48)
				{
					goto IL_0150;
				}
			}

IL_0142:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
				List_1_t1760117580 * L_49 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_PacketsSent_6();
				Packet_t288042838 * L_50 = ___ToSend0;
				NullCheck(L_49);
				List_1_Add_m3001567811(L_49, L_50, /*hidden argument*/List_1_Add_m3001567811_RuntimeMethod_var);
			}

IL_0150:
			{
				IL2CPP_LEAVE(0x160, FINALLY_0153);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0153;
		}

FINALLY_0153:
		{ // begin finally (depth: 2)
			{
				bool L_51 = V_7;
				if (!L_51)
				{
					goto IL_015f;
				}
			}

IL_0157:
			{
				ScarletClient_t1005814993 * L_52 = V_6;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
			}

IL_015f:
			{
				IL2CPP_END_FINALLY(339)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(339)
		{
			IL2CPP_JUMP_TBL(0x160, IL_0160)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0160:
		{
			goto IL_0206;
		}

IL_0166:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
			Dictionary_2_t791071292 * L_53 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Clients_0();
			Packet_t288042838 * L_54 = ___ToSend0;
			NullCheck(L_54);
			String_t* L_55 = L_54->get_Endpoint_1();
			NullCheck(L_53);
			bool L_56 = Dictionary_2_ContainsKey_m3542877822(L_53, L_55, /*hidden argument*/Dictionary_2_ContainsKey_m3542877822_RuntimeMethod_var);
			V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
			bool L_57 = V_10;
			if (!L_57)
			{
				goto IL_018c;
			}
		}

IL_0180:
		{
			InvalidOperationException_t56020091 * L_58 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(L_58, _stringLiteral22641540, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, NULL, Server_SendNow_m1169191716_RuntimeMethod_var);
		}

IL_018c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
			Dictionary_2_t791071292 * L_59 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Clients_0();
			Packet_t288042838 * L_60 = ___ToSend0;
			NullCheck(L_60);
			String_t* L_61 = L_60->get_Endpoint_1();
			NullCheck(L_59);
			ScarletClient_t1005814993 * L_62 = Dictionary_2_get_Item_m1765558449(L_59, L_61, /*hidden argument*/Dictionary_2_get_Item_m1765558449_RuntimeMethod_var);
			V_11 = L_62;
			V_12 = (bool)0;
		}

IL_01a1:
		try
		{ // begin try (depth: 2)
			{
				ScarletClient_t1005814993 * L_63 = V_11;
				Monitor_Enter_m984175629(NULL /*static, unused*/, L_63, (bool*)(&V_12), /*hidden argument*/NULL);
				Packet_t288042838 * L_64 = ___ToSend0;
				NullCheck(L_64);
				ByteU5BU5D_t4116647657* L_65 = Packet_GetForSend_m1092525422(L_64, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
				V_13 = L_65;
				IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
				Dictionary_2_t791071292 * L_66 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_Clients_0();
				Packet_t288042838 * L_67 = ___ToSend0;
				NullCheck(L_67);
				String_t* L_68 = L_67->get_Endpoint_1();
				NullCheck(L_66);
				ScarletClient_t1005814993 * L_69 = Dictionary_2_get_Item_m1765558449(L_66, L_68, /*hidden argument*/Dictionary_2_get_Item_m1765558449_RuntimeMethod_var);
				NullCheck(L_69);
				TcpClient_t822906377 * L_70 = L_69->get_TCP_0();
				NullCheck(L_70);
				NetworkStream_t4071955934 * L_71 = TcpClient_GetStream_m960745678(L_70, /*hidden argument*/NULL);
				ByteU5BU5D_t4116647657* L_72 = V_13;
				ByteU5BU5D_t4116647657* L_73 = V_13;
				NullCheck(L_73);
				NullCheck(L_71);
				VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_71, L_72, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_73)->max_length)))));
				bool L_74 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_StorePackets_5();
				V_14 = L_74;
				bool L_75 = V_14;
				if (!L_75)
				{
					goto IL_01f5;
				}
			}

IL_01e7:
			{
				IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
				List_1_t1760117580 * L_76 = ((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->get_PacketsSent_6();
				Packet_t288042838 * L_77 = ___ToSend0;
				NullCheck(L_76);
				List_1_Add_m3001567811(L_76, L_77, /*hidden argument*/List_1_Add_m3001567811_RuntimeMethod_var);
			}

IL_01f5:
			{
				IL2CPP_LEAVE(0x205, FINALLY_01f8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01f8;
		}

FINALLY_01f8:
		{ // begin finally (depth: 2)
			{
				bool L_78 = V_12;
				if (!L_78)
				{
					goto IL_0204;
				}
			}

IL_01fc:
			{
				ScarletClient_t1005814993 * L_79 = V_11;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
			}

IL_0204:
			{
				IL2CPP_END_FINALLY(504)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(504)
		{
			IL2CPP_JUMP_TBL(0x205, IL_0205)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0205:
		{
		}

IL_0206:
		{
			goto IL_0225;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0209;
		throw e;
	}

CATCH_0209:
	{ // begin catch(System.Exception)
		V_15 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Output_m3762383546(NULL /*static, unused*/, 2, 2, _stringLiteral1912981096, /*hidden argument*/NULL);
		Exception_t * L_80 = V_15;
		Log_Exception_m409715775(NULL /*static, unused*/, 2, L_80, /*hidden argument*/NULL);
		goto IL_0225;
	} // end catch (depth: 1)

IL_0225:
	{
		return;
	}
}
// System.Void Scarlet.Communications.Server::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Server__cctor_m2167833410 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server__cctor_m2167833410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->set_Initialized_2((bool)0);
		il2cpp_codegen_memory_barrier();
		((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->set_Stopping_3(0);
		((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->set_OutputWatchdogDebug_4((bool)0);
		((Server_t2355133253_StaticFields*)il2cpp_codegen_static_fields_for(Server_t2355133253_il2cpp_TypeInfo_var))->set_StorePackets_5((bool)0);
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
// System.Void Scarlet.Communications.WatchdogManager::add_ConnectionChanged(System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged>)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_add_ConnectionChanged_m1384616965 (RuntimeObject * __this /* static, unused */, EventHandler_1_t1622021596 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatchdogManager_add_ConnectionChanged_m1384616965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1622021596 * V_0 = NULL;
	EventHandler_1_t1622021596 * V_1 = NULL;
	EventHandler_1_t1622021596 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		EventHandler_1_t1622021596 * L_0 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_ConnectionChanged_6();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t1622021596 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1622021596 * L_2 = V_1;
		EventHandler_1_t1622021596 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t1622021596 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t1622021596_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		EventHandler_1_t1622021596 * L_5 = V_2;
		EventHandler_1_t1622021596 * L_6 = V_1;
		EventHandler_1_t1622021596 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1622021596 *>((EventHandler_1_t1622021596 **)(((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_address_of_ConnectionChanged_6()), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t1622021596 * L_8 = V_0;
		EventHandler_1_t1622021596 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1622021596 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1622021596 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager::remove_ConnectionChanged(System.EventHandler`1<Scarlet.Communications.ConnectionStatusChanged>)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_remove_ConnectionChanged_m3026589303 (RuntimeObject * __this /* static, unused */, EventHandler_1_t1622021596 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatchdogManager_remove_ConnectionChanged_m3026589303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1622021596 * V_0 = NULL;
	EventHandler_1_t1622021596 * V_1 = NULL;
	EventHandler_1_t1622021596 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		EventHandler_1_t1622021596 * L_0 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_ConnectionChanged_6();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t1622021596 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1622021596 * L_2 = V_1;
		EventHandler_1_t1622021596 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t1622021596 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t1622021596_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		EventHandler_1_t1622021596 * L_5 = V_2;
		EventHandler_1_t1622021596 * L_6 = V_1;
		EventHandler_1_t1622021596 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1622021596 *>((EventHandler_1_t1622021596 **)(((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_address_of_ConnectionChanged_6()), L_5, L_6);
		V_0 = L_7;
		EventHandler_1_t1622021596 * L_8 = V_0;
		EventHandler_1_t1622021596 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1622021596 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1622021596 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager::Start(System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_Start_m344589945 (RuntimeObject * __this /* static, unused */, bool ___IsClient0, String_t* ___MyName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatchdogManager_Start_m344589945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		bool L_0 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Started_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_2 = ___MyName1;
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->set_MyName_3(L_2);
		bool L_3 = ___IsClient0;
		((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->set_IsClient_0(L_3);
		Dictionary_2_t4117784682 * L_4 = (Dictionary_2_t4117784682 *)il2cpp_codegen_object_new(Dictionary_2_t4117784682_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4061440649(L_4, /*hidden argument*/Dictionary_2__ctor_m4061440649_RuntimeMethod_var);
		((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->set_Watchdogs_5(L_4);
		PacketWriter_t1568959448 * L_5 = (PacketWriter_t1568959448 *)il2cpp_codegen_object_new(PacketWriter_t1568959448_il2cpp_TypeInfo_var);
		PacketWriter__ctor_m2193869829(L_5, (uint8_t)((int32_t)240), (bool)1, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_6 = ___MyName1;
		NullCheck(L_5);
		PacketWriter_t1568959448 * L_7 = PacketWriter_Put_m2929071915(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Packet_t288042838 * L_8 = L_7->get_Packet_0();
		((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->set_WatchdogPacket_4(L_8);
		bool L_9 = ___IsClient0;
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Dictionary_2_t4117784682 * L_11 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Watchdogs_5();
		Watchdog_t37561087 * L_12 = (Watchdog_t37561087 *)il2cpp_codegen_object_new(Watchdog_t37561087_il2cpp_TypeInfo_var);
		Watchdog__ctor_m3924101956(L_12, _stringLiteral3927627800, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m2393675001(L_11, _stringLiteral3927627800, L_12, /*hidden argument*/Dictionary_2_Add_m2393675001_RuntimeMethod_var);
	}

IL_0061:
	{
		intptr_t L_13 = (intptr_t)WatchdogManager_Send_m3526057704_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_14 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_14, NULL, L_13, /*hidden argument*/NULL);
		Thread_t2300836069 * L_15 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Thread_Start_m2860771284(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->set_Started_1((bool)1);
	}

IL_007f:
	{
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager::Send()
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_Send_m3526057704 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatchdogManager_Send_m3526057704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_t1281789340* V_1 = NULL;
	Dictionary_2_t4117784682 * V_2 = NULL;
	bool V_3 = false;
	StringU5BU5D_t1281789340* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		goto IL_00b1;
	}

IL_0006:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Packet_t288042838 * L_0 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_WatchdogPacket_4();
		NullCheck(L_0);
		Packet_UpdateTimestamp_m3665378514(L_0, /*hidden argument*/NULL);
		Thread_Sleep_m483098292(NULL /*static, unused*/, ((int32_t)1000), /*hidden argument*/NULL);
		bool L_1 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_IsClient_0();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Packet_t288042838 * L_3 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_WatchdogPacket_4();
		Client_SendRegardless_m2417689071(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_00b0;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Dictionary_2_t4117784682 * L_4 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Watchdogs_5();
		V_2 = L_4;
		V_3 = (bool)0;
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t4117784682 * L_5 = V_2;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_5, (bool*)(&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Dictionary_2_t4117784682 * L_6 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Watchdogs_5();
		NullCheck(L_6);
		int32_t L_7 = Dictionary_2_get_Count_m4007841446(L_6, /*hidden argument*/Dictionary_2_get_Count_m4007841446_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_8 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		Dictionary_2_t4117784682 * L_9 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Watchdogs_5();
		NullCheck(L_9);
		KeyCollection_t12492857 * L_10 = Dictionary_2_get_Keys_m1994078344(L_9, /*hidden argument*/Dictionary_2_get_Keys_m1994078344_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_11 = V_1;
		NullCheck(L_10);
		KeyCollection_CopyTo_m775782173(L_10, L_11, 0, /*hidden argument*/KeyCollection_CopyTo_m775782173_RuntimeMethod_var);
		IL2CPP_LEAVE(0x78, FINALLY_006d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_0077;
			}
		}

IL_0070:
		{
			Dictionary_2_t4117784682 * L_13 = V_2;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		}

IL_0077:
		{
			IL2CPP_END_FINALLY(109)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0078:
	{
		StringU5BU5D_t1281789340* L_14 = V_1;
		V_4 = L_14;
		V_5 = 0;
		goto IL_00a7;
	}

IL_0081:
	{
		StringU5BU5D_t1281789340* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_6 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Packet_t288042838 * L_19 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_WatchdogPacket_4();
		String_t* L_20 = V_6;
		NullCheck(L_19);
		L_19->set_Endpoint_1(L_20);
		Packet_t288042838 * L_21 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_WatchdogPacket_4();
		IL2CPP_RUNTIME_CLASS_INIT(Server_t2355133253_il2cpp_TypeInfo_var);
		Server_SendNow_m1169191716(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_23 = V_5;
		StringU5BU5D_t1281789340* L_24 = V_4;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0081;
		}
	}
	{
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		bool L_25 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Continue_2();
		V_7 = L_25;
		bool L_26 = V_7;
		if (L_26)
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager::RemoveWatchdog(System.String)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_RemoveWatchdog_m1082675166 (RuntimeObject * __this /* static, unused */, String_t* ___Endpoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatchdogManager_RemoveWatchdog_m1082675166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t4117784682 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		bool L_0 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_IsClient_0();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral1893491463, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WatchdogManager_RemoveWatchdog_m1082675166_RuntimeMethod_var);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Dictionary_2_t4117784682 * L_3 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Watchdogs_5();
		V_1 = L_3;
		V_2 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t4117784682 * L_4 = V_1;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_4, (bool*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Dictionary_2_t4117784682 * L_5 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Watchdogs_5();
		String_t* L_6 = ___Endpoint0;
		NullCheck(L_5);
		Dictionary_2_Remove_m3641209829(L_5, L_6, /*hidden argument*/Dictionary_2_Remove_m3641209829_RuntimeMethod_var);
		IL2CPP_LEAVE(0x42, FINALLY_0037);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_003a:
		{
			Dictionary_2_t4117784682 * L_8 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager::FoundWatchdog(System.String)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_FoundWatchdog_m1699557513 (RuntimeObject * __this /* static, unused */, String_t* ___Endpoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatchdogManager_FoundWatchdog_m1699557513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		bool L_0 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Started_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = Client_get_Name_m2071881588(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		WatchdogManager_Start_m344589945(NULL /*static, unused*/, (bool)1, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		Dictionary_2_t4117784682 * L_3 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Watchdogs_5();
		String_t* L_4 = ___Endpoint0;
		NullCheck(L_3);
		Watchdog_t37561087 * L_5 = Dictionary_2_get_Item_m2634407293(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m2634407293_RuntimeMethod_var);
		NullCheck(L_5);
		Watchdog_FoundWatchdog_m1149836366(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager::OnConnectionChange(Scarlet.Communications.ConnectionStatusChanged)
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager_OnConnectionChange_m1499489232 (RuntimeObject * __this /* static, unused */, ConnectionStatusChanged_t3697862163 * ___Event0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatchdogManager_OnConnectionChange_m1499489232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1622021596 * G_B2_0 = NULL;
	EventHandler_1_t1622021596 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		EventHandler_1_t1622021596 * L_0 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_ConnectionChanged_6();
		EventHandler_1_t1622021596 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		ConnectionStatusChanged_t3697862163 * L_2 = ___Event0;
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m3855750629(G_B2_0, _stringLiteral1249558435, L_2, /*hidden argument*/EventHandler_1_Invoke_m3855750629_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WatchdogManager__cctor_m2087328769 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WatchdogManager__cctor_m2087328769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->set_Continue_2((bool)1);
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
// System.Void Scarlet.Communications.WatchdogManager/Watchdog::set_IsConnected(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Watchdog_set_IsConnected_m1464509010 (Watchdog_t37561087 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Watchdog_set_IsConnected_m1464509010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ConnectionStatusChanged_t3697862163 * V_1 = NULL;
	{
		bool L_0 = ___value0;
		bool L_1 = __this->get_P_IsConnected_0();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		ConnectionStatusChanged_t3697862163 * L_3 = (ConnectionStatusChanged_t3697862163 *)il2cpp_codegen_object_new(ConnectionStatusChanged_t3697862163_il2cpp_TypeInfo_var);
		ConnectionStatusChanged__ctor_m1663174587(L_3, /*hidden argument*/NULL);
		ConnectionStatusChanged_t3697862163 * L_4 = L_3;
		String_t* L_5 = __this->get_Endpoint_2();
		NullCheck(L_4);
		L_4->set_StatusEndpoint_1(L_5);
		ConnectionStatusChanged_t3697862163 * L_6 = L_4;
		bool L_7 = ___value0;
		NullCheck(L_6);
		L_6->set_StatusConnected_2(L_7);
		V_1 = L_6;
		ConnectionStatusChanged_t3697862163 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		WatchdogManager_OnConnectionChange_m1499489232(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0033:
	{
		bool L_9 = ___value0;
		__this->set_P_IsConnected_0(L_9);
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager/Watchdog::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Watchdog__ctor_m3924101956 (Watchdog_t37561087 * __this, String_t* ___ListenFor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Watchdog__ctor_m3924101956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___ListenFor0;
		__this->set_Endpoint_2(L_0);
		intptr_t L_1 = (intptr_t)Watchdog_Listen_m4243538253_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_2 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_2, __this, L_1, /*hidden argument*/NULL);
		Thread_t2300836069 * L_3 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Thread_Start_m2860771284(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager/Watchdog::FoundWatchdog()
extern "C" IL2CPP_METHOD_ATTR void Watchdog_FoundWatchdog_m1149836366 (Watchdog_t37561087 * __this, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_memory_barrier();
		__this->set_FoundWatchdogThisCycle_1(1);
		return;
	}
}
// System.Void Scarlet.Communications.WatchdogManager/Watchdog::Listen()
extern "C" IL2CPP_METHOD_ATTR void Watchdog_Listen_m4243538253 (Watchdog_t37561087 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Watchdog_Listen_m4243538253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		goto IL_0028;
	}

IL_0003:
	{
		Thread_Sleep_m483098292(NULL /*static, unused*/, ((int32_t)5000), /*hidden argument*/NULL);
		bool L_0 = __this->get_FoundWatchdogThisCycle_1();
		il2cpp_codegen_memory_barrier();
		Watchdog_set_IsConnected_m1464509010(__this, L_0, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		__this->set_FoundWatchdogThisCycle_1(0);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WatchdogManager_t1687039763_il2cpp_TypeInfo_var);
		bool L_1 = ((WatchdogManager_t1687039763_StaticFields*)il2cpp_codegen_static_fields_for(WatchdogManager_t1687039763_il2cpp_TypeInfo_var))->get_Continue_2();
		V_0 = L_1;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0003;
		}
	}
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
// Scarlet.Utilities.Log/WriteDestination Scarlet.Utilities.Log::get_Destination()
extern "C" IL2CPP_METHOD_ATTR int32_t Log_get_Destination_m3502564452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Log_get_Destination_m3502564452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->get_P_Destination_0();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Scarlet.Utilities.Log::Output(Scarlet.Utilities.Log/Severity,Scarlet.Utilities.Log/Source,System.String)
extern "C" IL2CPP_METHOD_ATTR void Log_Output_m3762383546 (RuntimeObject * __this /* static, unused */, int32_t ___Sev0, int32_t ___Src1, String_t* ___Message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Log_Output_m3762383546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		SeverityU5BU5D_t3396005585* L_0 = ((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->get_OutputLevels_1();
		int32_t L_1 = ___Src1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___Sev0;
		V_0 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_6 = ___Sev0;
		int32_t L_7 = ___Src1;
		String_t* L_8 = ___Message2;
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_ForceOutput_m3187504112(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Scarlet.Utilities.Log::ForceOutput(Scarlet.Utilities.Log/Severity,Scarlet.Utilities.Log/Source,System.String)
extern "C" IL2CPP_METHOD_ATTR void Log_ForceOutput_m3187504112 (RuntimeObject * __this /* static, unused */, int32_t ___Sev0, int32_t ___Src1, String_t* ___Message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Log_ForceOutput_m3187504112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___Sev0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_007a;
			}
		}
	}
	{
		goto IL_0098;
	}

IL_001f:
	{
		String_t* L_2 = ___Message2;
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4003303304, L_2, /*hidden argument*/NULL);
		___Message2 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m2525431295(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0035:
	{
		String_t* L_4 = ___Message2;
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4040146204, L_4, /*hidden argument*/NULL);
		___Message2 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m2525431295(NULL /*static, unused*/, ((int32_t)15), /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_004c:
	{
		String_t* L_6 = ___Message2;
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2891990488, L_6, /*hidden argument*/NULL);
		___Message2 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m2525431295(NULL /*static, unused*/, ((int32_t)14), /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0063:
	{
		String_t* L_8 = ___Message2;
		String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral856573400, L_8, /*hidden argument*/NULL);
		___Message2 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m2525431295(NULL /*static, unused*/, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_007a:
	{
		String_t* L_10 = ___Message2;
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2754812653, L_10, /*hidden argument*/NULL);
		___Message2 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_set_ForegroundColor_m2525431295(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		Console_set_BackgroundColor_m4163400187(NULL /*static, unused*/, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_12 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_12;
		String_t* L_13 = DateTime_ToLongTimeString_m3124825860((DateTime_t3738529785 *)(&V_1), /*hidden argument*/NULL);
		String_t* L_14 = ___Message2;
		String_t* L_15 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3452614645, L_13, _stringLiteral3450517491, L_14, /*hidden argument*/NULL);
		___Message2 = L_15;
		String_t* L_16 = ___Message2;
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_WriteLine_m1611832926(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_ResetColor_m1155452711(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Utilities.Log::Exception(Scarlet.Utilities.Log/Source,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Log_Exception_m409715775 (RuntimeObject * __this /* static, unused */, int32_t ___Src0, Exception_t * ___Ex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Log_Exception_m409715775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t4114446988 * V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass19_0_t4114446988 * L_0 = (U3CU3Ec__DisplayClass19_0_t4114446988 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t4114446988_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass19_0__ctor_m1297557431(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_t4114446988 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_2;
		String_t* L_3 = DateTime_ToLongTimeString_m3124825860((DateTime_t3738529785 *)(&V_2), /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614645, L_3, _stringLiteral2551264755, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_Prefix_0(L_4);
		Exception_t * L_5 = ___Ex1;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		StringU5BU5D_t1281789340* L_7 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t1281789340* L_8 = L_7;
		String_t* L_9 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_9);
		NullCheck(L_6);
		StringU5BU5D_t1281789340* L_10 = String_Split_m4013853433(L_6, L_8, 0, /*hidden argument*/NULL);
		V_1 = L_10;
		StringU5BU5D_t1281789340* L_11 = V_1;
		U3CU3Ec__DisplayClass19_0_t4114446988 * L_12 = V_0;
		intptr_t L_13 = (intptr_t)U3CU3Ec__DisplayClass19_0_U3CExceptionU3Eb__0_m1611771693_RuntimeMethod_var;
		Converter_2_t3942642323 * L_14 = (Converter_2_t3942642323 *)il2cpp_codegen_object_new(Converter_2_t3942642323_il2cpp_TypeInfo_var);
		Converter_2__ctor_m2685104519(L_14, L_12, L_13, /*hidden argument*/Converter_2__ctor_m2685104519_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_15 = Array_ConvertAll_TisString_t_TisString_t_m2589238886(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/Array_ConvertAll_TisString_t_TisString_t_m2589238886_RuntimeMethod_var);
		V_1 = L_15;
		StringU5BU5D_t1281789340* L_16 = V_1;
		List_1_t3319525431 * L_17 = Enumerable_ToList_TisString_t_m2868510606(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_16, /*hidden argument*/Enumerable_ToList_TisString_t_m2868510606_RuntimeMethod_var);
		intptr_t L_18 = (intptr_t)Log_WriteLine_m1611832926_RuntimeMethod_var;
		Action_1_t2019918284 * L_19 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m1291176469(L_19, NULL, L_18, /*hidden argument*/Action_1__ctor_m1291176469_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_ForEach_m2880463283(L_17, L_19, /*hidden argument*/List_1_ForEach_m2880463283_RuntimeMethod_var);
		return;
	}
}
// System.Void Scarlet.Utilities.Log::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void Log_Write_m3585549439 (RuntimeObject * __this /* static, unused */, String_t* ___Message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Log_Write_m3585549439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		int32_t L_0 = Log_get_Destination_m3502564452(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		int32_t L_1 = Log_get_Destination_m3502564452(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = ((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->get_ConsoleLock_3();
		V_1 = L_3;
		V_2 = (bool)0;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_4, (bool*)(&V_2), /*hidden argument*/NULL);
		String_t* L_5 = ___Message0;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_Write_m3466945868(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x40, FINALLY_0035);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_003f;
			}
		}

IL_0038:
		{
			RuntimeObject * L_7 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		}

IL_003f:
		{
			IL2CPP_END_FINALLY(53)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0040:
	{
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		int32_t L_8 = Log_get_Destination_m3502564452(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		int32_t L_9 = Log_get_Destination_m3502564452(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B13_0 = ((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B13_0 = 1;
	}

IL_0054:
	{
		V_3 = (bool)G_B13_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		RuntimeObject * L_11 = ((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->get_FileLock_4();
		V_4 = L_11;
		V_5 = (bool)0;
	}

IL_0063:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_12 = V_4;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_12, (bool*)(&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		StreamWriter_t1266378904 * L_13 = ((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->get_LogFile_2();
		String_t* L_14 = ___Message0;
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		IL2CPP_LEAVE(0x8A, FINALLY_007d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007d;
	}

FINALLY_007d:
	{ // begin finally (depth: 1)
		{
			bool L_15 = V_5;
			if (!L_15)
			{
				goto IL_0089;
			}
		}

IL_0081:
		{
			RuntimeObject * L_16 = V_4;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		}

IL_0089:
		{
			IL2CPP_END_FINALLY(125)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008a:
	{
	}

IL_008b:
	{
		return;
	}
}
// System.Void Scarlet.Utilities.Log::WriteLine(System.String)
extern "C" IL2CPP_METHOD_ATTR void Log_WriteLine_m1611832926 (RuntimeObject * __this /* static, unused */, String_t* ___Message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Log_WriteLine_m1611832926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___Message0;
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral3453007779, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t929882142_il2cpp_TypeInfo_var);
		Log_Write_m3585549439(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scarlet.Utilities.Log::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Log__cctor_m2343905195 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Log__cctor_m2343905195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->set_P_Destination_0(0);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Source_t1290227624_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_2 = Enum_GetNames_m2200571060(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		SeverityU5BU5D_t3396005585* L_3 = (SeverityU5BU5D_t3396005585*)SZArrayNew(SeverityU5BU5D_t3396005585_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->set_OutputLevels_1(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_4, /*hidden argument*/NULL);
		((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->set_ConsoleLock_3(L_4);
		RuntimeObject * L_5 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_5, /*hidden argument*/NULL);
		((Log_t929882142_StaticFields*)il2cpp_codegen_static_fields_for(Log_t929882142_il2cpp_TypeInfo_var))->set_FileLock_4(L_5);
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
// System.Void Scarlet.Utilities.Log/<>c__DisplayClass19_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m1297557431 (U3CU3Ec__DisplayClass19_0_t4114446988 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Scarlet.Utilities.Log/<>c__DisplayClass19_0::<Exception>b__0(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass19_0_U3CExceptionU3Eb__0_m1611771693 (U3CU3Ec__DisplayClass19_0_t4114446988 * __this, String_t* ___Line0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Prefix_0();
		String_t* L_1 = ___Line0;
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
// System.Byte[] Scarlet.Utilities.UtilData::EnsureBigEndian(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilData_EnsureBigEndian_m3664900363 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilData_EnsureBigEndian_m3664900363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = ___Input0;
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		ByteU5BU5D_t4116647657* L_3 = ___Input0;
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_4 = V_1;
		return L_4;
	}
}
// System.Byte[] Scarlet.Utilities.UtilData::ToBytes(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilData_ToBytes_m2267011298 (RuntimeObject * __this /* static, unused */, int32_t ___Input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilData_ToBytes_m2267011298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t L_0 = ___Input0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = BitConverter_GetBytes_m1040762521(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UtilData_t3270872621_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = UtilData_EnsureBigEndian_m3664900363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Scarlet.Utilities.UtilData::ToBytes(System.Int16)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilData_ToBytes_m2267273440 (RuntimeObject * __this /* static, unused */, int16_t ___Input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilData_ToBytes_m2267273440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int16_t L_0 = ___Input0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = BitConverter_GetBytes_m658425501(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UtilData_t3270872621_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_2 = UtilData_EnsureBigEndian_m3664900363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Scarlet.Utilities.UtilData::ToBytes(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilData_ToBytes_m207232572 (RuntimeObject * __this /* static, unused */, String_t* ___Input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilData_ToBytes_m207232572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___Input0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___Input0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0);
		V_3 = L_4;
		goto IL_0068;
	}

IL_001e:
	{
		String_t* L_5 = ___Input0;
		NullCheck(L_5);
		CharU5BU5D_t3528271667* L_6 = String_ToCharArray_m1492846834(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		CharU5BU5D_t3528271667* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (int32_t)2)));
		V_1 = L_8;
		V_4 = 0;
		goto IL_0057;
	}

IL_0035:
	{
		ByteU5BU5D_t4116647657* L_9 = V_1;
		int32_t L_10 = V_4;
		CharU5BU5D_t3528271667* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_14>>(int32_t)8))))));
		ByteU5BU5D_t4116647657* L_15 = V_1;
		int32_t L_16 = V_4;
		CharU5BU5D_t3528271667* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint16_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)), (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)L_20))));
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_22 = V_4;
		CharU5BU5D_t3528271667* L_23 = V_0;
		NullCheck(L_23);
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length))))))? 1 : 0);
		bool L_24 = V_5;
		if (L_24)
		{
			goto IL_0035;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_25 = V_1;
		V_3 = L_25;
		goto IL_0068;
	}

IL_0068:
	{
		ByteU5BU5D_t4116647657* L_26 = V_3;
		return L_26;
	}
}
// System.String Scarlet.Utilities.UtilData::ToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* UtilData_ToString_m3457872771 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilData_ToString_m3457872771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	int32_t G_B4_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___Input0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___Input0;
		NullCheck(L_1);
		if (!(((RuntimeArray *)L_1)->max_length))
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = ___Input0;
		NullCheck(L_2);
		G_B4_0 = ((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))%(int32_t)2))) == ((int32_t)1))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = 1;
	}

IL_0013:
	{
		V_1 = (bool)G_B4_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		FormatException_t154580423 * L_4 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_4, _stringLiteral2931090045, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UtilData_ToString_m3457872771_RuntimeMethod_var);
	}

IL_0023:
	{
		ByteU5BU5D_t4116647657* L_5 = ___Input0;
		NullCheck(L_5);
		StringBuilder_t * L_6 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_6, ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))/(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_6;
		V_2 = 0;
		goto IL_004b;
	}

IL_0032:
	{
		StringBuilder_t * L_7 = V_0;
		ByteU5BU5D_t4116647657* L_8 = ___Input0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_t4116647657* L_12 = ___Input0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_7);
		StringBuilder_Append_m2383614642(L_7, (((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))|(int32_t)L_15))))), /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)2));
	}

IL_004b:
	{
		int32_t L_17 = V_2;
		ByteU5BU5D_t4116647657* L_18 = ___Input0;
		NullCheck(L_18);
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length))))))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_4 = L_21;
		goto IL_005f;
	}

IL_005f:
	{
		String_t* L_22 = V_4;
		return L_22;
	}
}
// System.Void Scarlet.Utilities.UtilData::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UtilData__cctor_m3919120651 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilData__cctor_m3919120651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt16U5BU5D_t3326319531* L_0 = (UInt16U5BU5D_t3326319531*)SZArrayNew(UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt16U5BU5D_t3326319531* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____121C416AA017AFC8EFE9379D44D3B8F9F9391F14_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((UtilData_t3270872621_StaticFields*)il2cpp_codegen_static_fields_for(UtilData_t3270872621_il2cpp_TypeInfo_var))->set_crc16_table_0(L_1);
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
// System.String Scarlet.Utilities.UtilMain::BytesToNiceString(System.Byte[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* UtilMain_BytesToNiceString_m2509286138 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, bool ___Spaces1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilMain_BytesToNiceString_m2509286138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___Data0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___Data0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray *)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_3;
		goto IL_0081;
	}

IL_0019:
	{
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		V_3 = 0;
		goto IL_0053;
	}

IL_0023:
	{
		StringBuilder_t * L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = ___Data0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		String_t* L_8 = Byte_ToString_m3735479648((uint8_t*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), _stringLiteral3451435000, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Append_m1965104174(L_5, L_8, /*hidden argument*/NULL);
		bool L_9 = ___Spaces1;
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m2383614642(L_11, ((int32_t)32), /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_13 = V_3;
		ByteU5BU5D_t4116647657* L_14 = ___Data0;
		NullCheck(L_14);
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length))))))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0023;
		}
	}
	{
		bool L_16 = ___Spaces1;
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t * L_18 = V_0;
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = StringBuilder_get_Length_m3238060835(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_Remove_m940064945(L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)), 1, /*hidden argument*/NULL);
	}

IL_0078:
	{
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		V_2 = L_22;
		goto IL_0081;
	}

IL_0081:
	{
		String_t* L_23 = V_2;
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
