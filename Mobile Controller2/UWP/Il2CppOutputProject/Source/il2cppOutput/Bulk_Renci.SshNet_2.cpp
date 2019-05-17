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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Renci.SshNet.SshClient
struct SshClient_t676357105;
// System.String
struct String_t;
// Renci.SshNet.PasswordConnectionInfo
struct PasswordConnectionInfo_t734167810;
// Renci.SshNet.ConnectionInfo
struct ConnectionInfo_t2762416072;
// Renci.SshNet.ServiceFactory
struct ServiceFactory_t198644780;
// Renci.SshNet.IServiceFactory
struct IServiceFactory_t26680302;
// Renci.SshNet.BaseClient
struct BaseClient_t304433449;
// System.Collections.Generic.List`1<Renci.SshNet.ForwardedPort>
struct List_1_t2106477839;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Renci.SshNet.ForwardedPort
struct ForwardedPort_t634403097;
// Renci.SshNet.ISession
struct ISession_t2464340384;
// Renci.SshNet.SshCommand
struct SshCommand_t2829160041;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.IO.Stream
struct Stream_t1273022909;
// Renci.SshNet.Common.SshConnectionException
struct SshConnectionException_t3734221110;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1333520283;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1515976428;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs>
struct EventHandler_1_t3115254733;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Renci.SshNet.CommandAsyncResult
struct CommandAsyncResult_t1797581660;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.WaitHandle
struct WaitHandle_t1743403487;
// Renci.SshNet.Common.SshException
struct SshException_t1435741398;
// System.ArgumentException
struct ArgumentException_t132251570;
// Renci.SshNet.Common.PipeStream
struct PipeStream_t2360103068;
// Renci.SshNet.Channels.IChannelSession
struct IChannelSession_t212720632;
// System.Type
struct Type_t;
// Renci.SshNet.Channels.IChannel
struct IChannel_t4269808054;
// System.EventHandler`1<Renci.SshNet.Common.ChannelDataEventArgs>
struct EventHandler_1_t3836791184;
// System.EventHandler`1<Renci.SshNet.Common.ChannelExtendedDataEventArgs>
struct EventHandler_1_t2214219653;
// System.EventHandler`1<Renci.SshNet.Common.ChannelRequestEventArgs>
struct EventHandler_1_t2424542233;
// System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs>
struct EventHandler_1_t1715808396;
// System.EventArgs
struct EventArgs_t3591816995;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// Renci.SshNet.Common.ExceptionEventArgs
struct ExceptionEventArgs_t896128004;
// System.Exception
struct Exception_t;
// Renci.SshNet.Common.ChannelEventArgs
struct ChannelEventArgs_t3791648963;
// System.Action
struct Action_t1264377477;
// Renci.SshNet.Common.ChannelRequestEventArgs
struct ChannelRequestEventArgs_t205415504;
// Renci.SshNet.Messages.Connection.RequestInfo
struct RequestInfo_t1797926055;
// Renci.SshNet.Messages.Connection.ExitStatusRequestInfo
struct ExitStatusRequestInfo_t20368951;
// Renci.SshNet.Messages.Connection.ChannelSuccessMessage
struct ChannelSuccessMessage_t1918479768;
// Renci.SshNet.Messages.Connection.ChannelFailureMessage
struct ChannelFailureMessage_t1527543386;
// Renci.SshNet.Common.ChannelExtendedDataEventArgs
struct ChannelExtendedDataEventArgs_t4290060220;
// Renci.SshNet.Common.ChannelDataEventArgs
struct ChannelDataEventArgs_t1617664455;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Threading.WaitHandle[]
struct WaitHandleU5BU5D_t96772038;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Renci.SshNet.Common.SshOperationTimeoutException
struct SshOperationTimeoutException_t3702980668;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeInitMessage>
struct MessageMetadata_1_t2954632716;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<System.Object>
struct MessageMetadata_1_t4214685129;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.NewKeysMessage>
struct MessageMetadata_1_t3229348390;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.RequestFailureMessage>
struct MessageMetadata_1_t3137192560;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage>
struct MessageMetadata_1_t3739975694;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelFailureMessage>
struct MessageMetadata_1_t2662122351;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelExtendedDataMessage>
struct MessageMetadata_1_t3461637843;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelDataMessage>
struct MessageMetadata_1_t2620507973;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelRequestMessage>
struct MessageMetadata_1_t3071453335;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.BannerMessage>
struct MessageMetadata_1_t1664368617;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.InformationResponseMessage>
struct MessageMetadata_1_t939427463;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.FailureMessage>
struct MessageMetadata_1_t3801097035;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.DebugMessage>
struct MessageMetadata_1_t284949424;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.GlobalRequestMessage>
struct MessageMetadata_1_t2451642879;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenMessage>
struct MessageMetadata_1_t4074031887;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage>
struct MessageMetadata_1_t3892623955;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.InformationRequestMessage>
struct MessageMetadata_1_t1581200532;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.UnimplementedMessage>
struct MessageMetadata_1_t1782393825;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.RequestSuccessMessage>
struct MessageMetadata_1_t529423311;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelSuccessMessage>
struct MessageMetadata_1_t3053058733;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.PasswordChangeRequiredMessage>
struct MessageMetadata_1_t3277971202;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.DisconnectMessage>
struct MessageMetadata_1_t3241984111;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.SuccessMessage>
struct MessageMetadata_1_t3845700005;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.PublicKeyMessage>
struct MessageMetadata_1_t2996753660;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.IgnoreMessage>
struct MessageMetadata_1_t1634548274;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelWindowAdjustMessage>
struct MessageMetadata_1_t3136770008;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelEofMessage>
struct MessageMetadata_1_t2166108262;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelCloseMessage>
struct MessageMetadata_1_t2718614835;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.ServiceAcceptMessage>
struct MessageMetadata_1_t4248897102;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeGroup>
struct MessageMetadata_1_t9813608;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage>
struct MessageMetadata_1_t83236809;
// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply>
struct MessageMetadata_1_t2610932943;
// System.Collections.Generic.Dictionary`2<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>
struct Dictionary_2_t4255210500;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// Renci.SshNet.SshMessageFactory/MessageMetadata
struct MessageMetadata_t174986905;
// Renci.SshNet.SshMessageFactory
struct SshMessageFactory_t1004590256;
// Renci.SshNet.Messages.Message
struct Message_t2172764883;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// Renci.SshNet.Common.SshDataStream
struct SshDataStream_t621401638;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>[]
struct EntryU5BU5D_t1279133797;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>
struct KeyCollection_t149918675;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>
struct ValueCollection_t1676287522;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Void
struct Void_t1185182177;
// Renci.SshNet.SshMessageFactory/MessageMetadata[]
struct MessageMetadataU5BU5D_t1675896548;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>
struct IDictionary_2_t2719061891;
// System.EventHandler
struct EventHandler_t1348719766;
// Renci.SshNet.ForwardedPort[]
struct ForwardedPortU5BU5D_t2611784292;
// System.Func`2<System.Object,System.String>
struct Func_2_t1214474899;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2317969963;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Collections.Generic.Queue`1<System.Byte>
struct Queue_1_t980555870;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Threading.Timer
struct Timer_t716671026;
// System.EventHandler`1<Renci.SshNet.Common.HostKeyEventArgs>
struct EventHandler_1_t3610213555;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// Renci.SshNet.Common.SemaphoreLight
struct SemaphoreLight_t4163090541;
// Renci.SshNet.Security.IKeyExchange
struct IKeyExchange_t1529017882;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// Renci.SshNet.Security.Cryptography.Cipher
struct Cipher_t1310027046;
// Renci.SshNet.Compression.Compressor
struct Compressor_t2655936137;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.BannerMessage>>
struct EventHandler_1_t2618191988;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.InformationRequestMessage>>
struct EventHandler_1_t2535023903;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.PasswordChangeRequiredMessage>>
struct EventHandler_1_t4231794573;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.PublicKeyMessage>>
struct EventHandler_1_t3950577031;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeGroup>>
struct EventHandler_1_t963636979;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply>>
struct EventHandler_1_t3564756314;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.DisconnectMessage>>
struct EventHandler_1_t4195807482;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.IgnoreMessage>>
struct EventHandler_1_t2588371645;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.UnimplementedMessage>>
struct EventHandler_1_t2736217196;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.DebugMessage>>
struct EventHandler_1_t1238772795;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.ServiceRequestMessage>>
struct EventHandler_1_t3476636320;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.ServiceAcceptMessage>>
struct EventHandler_1_t907753177;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.KeyExchangeInitMessage>>
struct EventHandler_1_t3908456087;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage>>
struct EventHandler_1_t1037060180;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.NewKeysMessage>>
struct EventHandler_1_t4183171761;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.FailureMessage>>
struct EventHandler_1_t459953110;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.SuccessMessage>>
struct EventHandler_1_t504556080;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.GlobalRequestMessage>>
struct EventHandler_1_t3405466250;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.RequestSuccessMessage>>
struct EventHandler_1_t1483246682;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.RequestFailureMessage>>
struct EventHandler_1_t4091015931;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelOpenMessage>>
struct EventHandler_1_t732887962;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage>>
struct EventHandler_1_t551480030;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage>>
struct EventHandler_1_t398831769;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelWindowAdjustMessage>>
struct EventHandler_1_t4090593379;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelDataMessage>>
struct EventHandler_1_t3574331344;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelExtendedDataMessage>>
struct EventHandler_1_t120493918;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelEofMessage>>
struct EventHandler_1_t3119931633;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelCloseMessage>>
struct EventHandler_1_t3672438206;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelRequestMessage>>
struct EventHandler_1_t4025276706;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelSuccessMessage>>
struct EventHandler_1_t4006882104;
// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelFailureMessage>>
struct EventHandler_1_t3615945722;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t733052450;
// System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.CipherInfo>
struct IDictionary_2_t2753971616;
// System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.HashInfo>
struct IDictionary_2_t122007351;
// System.Collections.Generic.IDictionary`2<System.String,System.Func`2<System.Byte[],Renci.SshNet.Security.KeyHostAlgorithm>>
struct IDictionary_2_t2884815605;
// System.Collections.Generic.IList`1<Renci.SshNet.AuthenticationMethod>
struct IList_1_t4022918857;
// System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.Messages.Connection.RequestInfo>
struct IDictionary_2_t47033745;
// System.EventHandler`1<Renci.SshNet.Common.AuthenticationBannerEventArgs>
struct EventHandler_1_t3897342073;
// System.EventHandler`1<Renci.SshNet.Common.AuthenticationPasswordChangeEventArgs>
struct EventHandler_1_t3903553156;

extern RuntimeClass* PasswordConnectionInfo_t734167810_il2cpp_TypeInfo_var;
extern const uint32_t SshClient__ctor_m3593962372_MetadataUsageId;
extern RuntimeClass* ConnectionInfo_t2762416072_il2cpp_TypeInfo_var;
extern const uint32_t SshClient__ctor_m294108572_MetadataUsageId;
extern RuntimeClass* ServiceFactory_t198644780_il2cpp_TypeInfo_var;
extern const uint32_t SshClient__ctor_m2126859039_MetadataUsageId;
extern RuntimeClass* List_1_t2106477839_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3656078269_RuntimeMethod_var;
extern const uint32_t SshClient__ctor_m1469750933_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m930350269_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2803795645_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2296877432_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1778068822_RuntimeMethod_var;
extern const uint32_t SshClient_OnDisconnecting_m2034860236_MetadataUsageId;
extern RuntimeClass* SshCommand_t2829160041_il2cpp_TypeInfo_var;
extern const uint32_t SshClient_CreateCommand_m715012094_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m3750278540_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m525849619_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m1695266239_RuntimeMethod_var;
extern const uint32_t SshClient_OnDisconnected_m1999565501_MetadataUsageId;
extern RuntimeClass* SshConnectionException_t3734221110_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SshClient_EnsureSessionIsOpen_m958514547_RuntimeMethod_var;
extern String_t* _stringLiteral937009794;
extern const uint32_t SshClient_EnsureSessionIsOpen_m958514547_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamReader_t4009935899_il2cpp_TypeInfo_var;
extern const uint32_t SshCommand_get_Result_m2846263503_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* Session_t2648700758_il2cpp_TypeInfo_var;
extern RuntimeClass* AutoResetEvent_t1333520283_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t1515976428_il2cpp_TypeInfo_var;
extern RuntimeClass* ISession_t2464340384_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t3115254733_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SshCommand__ctor_m3015611216_RuntimeMethod_var;
extern const RuntimeMethod* SshCommand_Session_Disconnected_m809188290_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m2536525559_RuntimeMethod_var;
extern const RuntimeMethod* SshCommand_Session_ErrorOccured_m3705556835_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m1356621408_RuntimeMethod_var;
extern String_t* _stringLiteral3206363735;
extern String_t* _stringLiteral1644399654;
extern String_t* _stringLiteral3002372288;
extern const uint32_t SshCommand__ctor_m3015611216_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* CommandAsyncResult_t1797581660_il2cpp_TypeInfo_var;
extern RuntimeClass* ManualResetEvent_t451242010_il2cpp_TypeInfo_var;
extern RuntimeClass* SshException_t1435741398_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* PipeStream_t2360103068_il2cpp_TypeInfo_var;
extern RuntimeClass* IChannelSession_t212720632_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SshCommand_BeginExecute_m3069484145_RuntimeMethod_var;
extern String_t* _stringLiteral3203079933;
extern String_t* _stringLiteral2503092145;
extern String_t* _stringLiteral813762804;
extern const uint32_t SshCommand_BeginExecute_m3069484145_MetadataUsageId;
extern const RuntimeType* IAsyncResult_t767004451_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SshCommand_EndExecute_m3116685538_RuntimeMethod_var;
extern String_t* _stringLiteral844061258;
extern String_t* _stringLiteral842862645;
extern String_t* _stringLiteral4058417824;
extern const uint32_t SshCommand_EndExecute_m3116685538_MetadataUsageId;
extern RuntimeClass* EventHandler_1_t3836791184_il2cpp_TypeInfo_var;
extern RuntimeClass* IChannel_t4269808054_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t2214219653_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t2424542233_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t1715808396_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SshCommand_Channel_DataReceived_m474707499_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m274747851_RuntimeMethod_var;
extern const RuntimeMethod* SshCommand_Channel_ExtendedDataReceived_m1118478954_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m3494452931_RuntimeMethod_var;
extern const RuntimeMethod* SshCommand_Channel_RequestReceived_m3635259687_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m3442468153_RuntimeMethod_var;
extern const RuntimeMethod* SshCommand_Channel_Closed_m2949300017_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m2000325318_RuntimeMethod_var;
extern const uint32_t SshCommand_CreateChannel_m1742724509_MetadataUsageId;
extern String_t* _stringLiteral2609783910;
extern const uint32_t SshCommand_Session_Disconnected_m809188290_MetadataUsageId;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* EventWaitHandle_t777845177_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SshCommand_U3CChannel_ClosedU3Eb__47_0_m3630243828_RuntimeMethod_var;
extern const uint32_t SshCommand_Channel_Closed_m2949300017_MetadataUsageId;
extern RuntimeClass* ExitStatusRequestInfo_t20368951_il2cpp_TypeInfo_var;
extern RuntimeClass* ChannelSuccessMessage_t1918479768_il2cpp_TypeInfo_var;
extern RuntimeClass* ChannelFailureMessage_t1527543386_il2cpp_TypeInfo_var;
extern const uint32_t SshCommand_Channel_RequestReceived_m3635259687_MetadataUsageId;
extern RuntimeClass* WaitHandleU5BU5D_t96772038_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitHandle_t1743403487_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* SshOperationTimeoutException_t3702980668_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SshCommand_WaitOnHandle_m707372086_RuntimeMethod_var;
extern String_t* _stringLiteral2158681786;
extern const uint32_t SshCommand_WaitOnHandle_m707372086_MetadataUsageId;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t SshCommand_UnsubscribeFromEventsAndDisposeChannel_m2528369013_MetadataUsageId;
extern RuntimeClass* GC_t959872083_il2cpp_TypeInfo_var;
extern const uint32_t SshCommand_Dispose_m4262644746_MetadataUsageId;
extern const uint32_t SshCommand_Dispose_m1773330606_MetadataUsageId;
extern RuntimeClass* MessageMetadataU5BU5D_t1675896548_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t2954632716_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3229348390_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3137192560_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3739975694_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t2662122351_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3461637843_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t2620507973_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3071453335_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t1664368617_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t939427463_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3801097035_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t284949424_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t2451642879_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t4074031887_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3892623955_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t1581200532_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t1782393825_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t529423311_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3053058733_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3277971202_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3241984111_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3845700005_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t2996753660_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t1634548274_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t3136770008_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t2166108262_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t2718614835_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t4248897102_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t9813608_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t83236809_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageMetadata_1_t2610932943_il2cpp_TypeInfo_var;
extern RuntimeClass* SshMessageFactory_t1004590256_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t4255210500_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2719061891_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m3281235739_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m2228197956_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1464327441_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m2839893545_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m2050352774_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m3921161069_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1836645595_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m2493900951_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m3538886075_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m654010030_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1409899146_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1285590279_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m2178521596_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m2334713808_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1303187418_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m2983630178_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1795138437_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1211752063_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1956490332_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m3578280787_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1105904974_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m4065994931_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m4271939786_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1530620745_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1310681405_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1414086506_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m3805855773_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1704061716_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m2279192927_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m3854366878_RuntimeMethod_var;
extern const RuntimeMethod* MessageMetadata_1__ctor_m1792630017_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m774772006_RuntimeMethod_var;
extern String_t* _stringLiteral271365708;
extern String_t* _stringLiteral2563265142;
extern String_t* _stringLiteral1012920613;
extern String_t* _stringLiteral1089466285;
extern String_t* _stringLiteral2449388610;
extern String_t* _stringLiteral1851283666;
extern String_t* _stringLiteral607927065;
extern String_t* _stringLiteral237968521;
extern String_t* _stringLiteral1833558336;
extern String_t* _stringLiteral2524524350;
extern String_t* _stringLiteral500949310;
extern String_t* _stringLiteral4237570511;
extern String_t* _stringLiteral4246859847;
extern String_t* _stringLiteral1889631431;
extern String_t* _stringLiteral4268619302;
extern String_t* _stringLiteral2594283757;
extern String_t* _stringLiteral2952326403;
extern String_t* _stringLiteral4035327630;
extern String_t* _stringLiteral833752707;
extern String_t* _stringLiteral1356699628;
extern String_t* _stringLiteral391758822;
extern String_t* _stringLiteral1246432486;
extern String_t* _stringLiteral3142069082;
extern String_t* _stringLiteral2694429669;
extern String_t* _stringLiteral1543274434;
extern String_t* _stringLiteral1720518706;
extern String_t* _stringLiteral1945050983;
extern String_t* _stringLiteral1254495072;
extern String_t* _stringLiteral1578290094;
extern String_t* _stringLiteral2192784007;
extern String_t* _stringLiteral2897561006;
extern const uint32_t SshMessageFactory__cctor_m1390114560_MetadataUsageId;
extern RuntimeClass* BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var;
extern const uint32_t SshMessageFactory__ctor_m2783403138_MetadataUsageId;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SshMessageFactory_Create_m586131596_RuntimeMethod_var;
extern String_t* _stringLiteral120353814;
extern const uint32_t SshMessageFactory_Create_m586131596_MetadataUsageId;
extern const uint32_t SshMessageFactory_DisableNonKeyExchangeMessages_m3297780821_MetadataUsageId;
extern const RuntimeMethod* SshMessageFactory_EnableActivatedMessages_m2260818562_RuntimeMethod_var;
extern const uint32_t SshMessageFactory_EnableActivatedMessages_m2260818562_MetadataUsageId;
extern const RuntimeMethod* SshMessageFactory_EnableAndActivateMessage_m1376865366_RuntimeMethod_var;
extern String_t* _stringLiteral2015510855;
extern const uint32_t SshMessageFactory_EnableAndActivateMessage_m1376865366_MetadataUsageId;
extern const RuntimeMethod* SshMessageFactory_DisableAndDeactivateMessage_m2388353740_RuntimeMethod_var;
extern const uint32_t SshMessageFactory_DisableAndDeactivateMessage_m2388353740_MetadataUsageId;
extern const RuntimeMethod* SshMessageFactory_CreateMessageTypeNotSupportedException_m2372089327_RuntimeMethod_var;
extern String_t* _stringLiteral2802756299;
extern const uint32_t SshMessageFactory_CreateMessageTypeNotSupportedException_m2372089327_MetadataUsageId;
extern const RuntimeMethod* SshMessageFactory_CreateMessageNotSupportedException_m2300368093_RuntimeMethod_var;
extern String_t* _stringLiteral1692331934;
extern const uint32_t SshMessageFactory_CreateMessageNotSupportedException_m2300368093_MetadataUsageId;
extern const RuntimeMethod* SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197_RuntimeMethod_var;
extern String_t* _stringLiteral3776375927;
extern const uint32_t SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197_MetadataUsageId;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureData_t1899656083_marshaled_com;

struct ByteU5BU5D_t4116647657;
struct WaitHandleU5BU5D_t96772038;
struct ObjectU5BU5D_t2843939325;
struct MessageMetadataU5BU5D_t1675896548;
struct BooleanU5BU5D_t2897418192;


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
#ifndef COMMANDASYNCRESULT_T1797581660_H
#define COMMANDASYNCRESULT_T1797581660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.CommandAsyncResult
struct  CommandAsyncResult_t1797581660  : public RuntimeObject
{
public:
	// System.Int32 Renci.SshNet.CommandAsyncResult::<BytesReceived>k__BackingField
	int32_t ___U3CBytesReceivedU3Ek__BackingField_0;
	// System.Object Renci.SshNet.CommandAsyncResult::<AsyncState>k__BackingField
	RuntimeObject * ___U3CAsyncStateU3Ek__BackingField_1;
	// System.Threading.WaitHandle Renci.SshNet.CommandAsyncResult::<AsyncWaitHandle>k__BackingField
	WaitHandle_t1743403487 * ___U3CAsyncWaitHandleU3Ek__BackingField_2;
	// System.Boolean Renci.SshNet.CommandAsyncResult::<CompletedSynchronously>k__BackingField
	bool ___U3CCompletedSynchronouslyU3Ek__BackingField_3;
	// System.Boolean Renci.SshNet.CommandAsyncResult::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_4;
	// System.Boolean Renci.SshNet.CommandAsyncResult::<EndCalled>k__BackingField
	bool ___U3CEndCalledU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CBytesReceivedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CommandAsyncResult_t1797581660, ___U3CBytesReceivedU3Ek__BackingField_0)); }
	inline int32_t get_U3CBytesReceivedU3Ek__BackingField_0() const { return ___U3CBytesReceivedU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CBytesReceivedU3Ek__BackingField_0() { return &___U3CBytesReceivedU3Ek__BackingField_0; }
	inline void set_U3CBytesReceivedU3Ek__BackingField_0(int32_t value)
	{
		___U3CBytesReceivedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAsyncStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CommandAsyncResult_t1797581660, ___U3CAsyncStateU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CAsyncStateU3Ek__BackingField_1() const { return ___U3CAsyncStateU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CAsyncStateU3Ek__BackingField_1() { return &___U3CAsyncStateU3Ek__BackingField_1; }
	inline void set_U3CAsyncStateU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CAsyncStateU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAsyncStateU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAsyncWaitHandleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CommandAsyncResult_t1797581660, ___U3CAsyncWaitHandleU3Ek__BackingField_2)); }
	inline WaitHandle_t1743403487 * get_U3CAsyncWaitHandleU3Ek__BackingField_2() const { return ___U3CAsyncWaitHandleU3Ek__BackingField_2; }
	inline WaitHandle_t1743403487 ** get_address_of_U3CAsyncWaitHandleU3Ek__BackingField_2() { return &___U3CAsyncWaitHandleU3Ek__BackingField_2; }
	inline void set_U3CAsyncWaitHandleU3Ek__BackingField_2(WaitHandle_t1743403487 * value)
	{
		___U3CAsyncWaitHandleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAsyncWaitHandleU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CCompletedSynchronouslyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CommandAsyncResult_t1797581660, ___U3CCompletedSynchronouslyU3Ek__BackingField_3)); }
	inline bool get_U3CCompletedSynchronouslyU3Ek__BackingField_3() const { return ___U3CCompletedSynchronouslyU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CCompletedSynchronouslyU3Ek__BackingField_3() { return &___U3CCompletedSynchronouslyU3Ek__BackingField_3; }
	inline void set_U3CCompletedSynchronouslyU3Ek__BackingField_3(bool value)
	{
		___U3CCompletedSynchronouslyU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CommandAsyncResult_t1797581660, ___U3CIsCompletedU3Ek__BackingField_4)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_4() const { return ___U3CIsCompletedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_4() { return &___U3CIsCompletedU3Ek__BackingField_4; }
	inline void set_U3CIsCompletedU3Ek__BackingField_4(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CEndCalledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CommandAsyncResult_t1797581660, ___U3CEndCalledU3Ek__BackingField_5)); }
	inline bool get_U3CEndCalledU3Ek__BackingField_5() const { return ___U3CEndCalledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CEndCalledU3Ek__BackingField_5() { return &___U3CEndCalledU3Ek__BackingField_5; }
	inline void set_U3CEndCalledU3Ek__BackingField_5(bool value)
	{
		___U3CEndCalledU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDASYNCRESULT_T1797581660_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_10)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_13)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_14)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
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
#ifndef SSHDATA_T3807462516_H
#define SSHDATA_T3807462516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.SshData
struct  SshData_t3807462516  : public RuntimeObject
{
public:
	// Renci.SshNet.Common.SshDataStream Renci.SshNet.Common.SshData::_stream
	SshDataStream_t621401638 * ____stream_2;

public:
	inline static int32_t get_offset_of__stream_2() { return static_cast<int32_t>(offsetof(SshData_t3807462516, ____stream_2)); }
	inline SshDataStream_t621401638 * get__stream_2() const { return ____stream_2; }
	inline SshDataStream_t621401638 ** get_address_of__stream_2() { return &____stream_2; }
	inline void set__stream_2(SshDataStream_t621401638 * value)
	{
		____stream_2 = value;
		Il2CppCodeGenWriteBarrier((&____stream_2), value);
	}
};

struct SshData_t3807462516_StaticFields
{
public:
	// System.Text.Encoding Renci.SshNet.Common.SshData::Ascii
	Encoding_t1523322056 * ___Ascii_0;
	// System.Text.Encoding Renci.SshNet.Common.SshData::Utf8
	Encoding_t1523322056 * ___Utf8_1;

public:
	inline static int32_t get_offset_of_Ascii_0() { return static_cast<int32_t>(offsetof(SshData_t3807462516_StaticFields, ___Ascii_0)); }
	inline Encoding_t1523322056 * get_Ascii_0() const { return ___Ascii_0; }
	inline Encoding_t1523322056 ** get_address_of_Ascii_0() { return &___Ascii_0; }
	inline void set_Ascii_0(Encoding_t1523322056 * value)
	{
		___Ascii_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ascii_0), value);
	}

	inline static int32_t get_offset_of_Utf8_1() { return static_cast<int32_t>(offsetof(SshData_t3807462516_StaticFields, ___Utf8_1)); }
	inline Encoding_t1523322056 * get_Utf8_1() const { return ___Utf8_1; }
	inline Encoding_t1523322056 ** get_address_of_Utf8_1() { return &___Utf8_1; }
	inline void set_Utf8_1(Encoding_t1523322056 * value)
	{
		___Utf8_1 = value;
		Il2CppCodeGenWriteBarrier((&___Utf8_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHDATA_T3807462516_H
#ifndef DICTIONARY_2_T4255210500_H
#define DICTIONARY_2_T4255210500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>
struct  Dictionary_2_t4255210500  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1279133797* ___entries_1;
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
	KeyCollection_t149918675 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1676287522 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___entries_1)); }
	inline EntryU5BU5D_t1279133797* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1279133797** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1279133797* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___keys_7)); }
	inline KeyCollection_t149918675 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t149918675 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t149918675 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ___values_8)); }
	inline ValueCollection_t1676287522 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1676287522 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1676287522 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4255210500, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T4255210500_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
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
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
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
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
#ifndef SSHMESSAGEFACTORY_T1004590256_H
#define SSHMESSAGEFACTORY_T1004590256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory
struct  SshMessageFactory_t1004590256  : public RuntimeObject
{
public:
	// Renci.SshNet.SshMessageFactory/MessageMetadata[] Renci.SshNet.SshMessageFactory::_enabledMessagesByNumber
	MessageMetadataU5BU5D_t1675896548* ____enabledMessagesByNumber_0;
	// System.Boolean[] Renci.SshNet.SshMessageFactory::_activatedMessagesById
	BooleanU5BU5D_t2897418192* ____activatedMessagesById_1;

public:
	inline static int32_t get_offset_of__enabledMessagesByNumber_0() { return static_cast<int32_t>(offsetof(SshMessageFactory_t1004590256, ____enabledMessagesByNumber_0)); }
	inline MessageMetadataU5BU5D_t1675896548* get__enabledMessagesByNumber_0() const { return ____enabledMessagesByNumber_0; }
	inline MessageMetadataU5BU5D_t1675896548** get_address_of__enabledMessagesByNumber_0() { return &____enabledMessagesByNumber_0; }
	inline void set__enabledMessagesByNumber_0(MessageMetadataU5BU5D_t1675896548* value)
	{
		____enabledMessagesByNumber_0 = value;
		Il2CppCodeGenWriteBarrier((&____enabledMessagesByNumber_0), value);
	}

	inline static int32_t get_offset_of__activatedMessagesById_1() { return static_cast<int32_t>(offsetof(SshMessageFactory_t1004590256, ____activatedMessagesById_1)); }
	inline BooleanU5BU5D_t2897418192* get__activatedMessagesById_1() const { return ____activatedMessagesById_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of__activatedMessagesById_1() { return &____activatedMessagesById_1; }
	inline void set__activatedMessagesById_1(BooleanU5BU5D_t2897418192* value)
	{
		____activatedMessagesById_1 = value;
		Il2CppCodeGenWriteBarrier((&____activatedMessagesById_1), value);
	}
};

struct SshMessageFactory_t1004590256_StaticFields
{
public:
	// Renci.SshNet.SshMessageFactory/MessageMetadata[] Renci.SshNet.SshMessageFactory::AllMessages
	MessageMetadataU5BU5D_t1675896548* ___AllMessages_2;
	// System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata> Renci.SshNet.SshMessageFactory::MessagesByName
	RuntimeObject* ___MessagesByName_3;

public:
	inline static int32_t get_offset_of_AllMessages_2() { return static_cast<int32_t>(offsetof(SshMessageFactory_t1004590256_StaticFields, ___AllMessages_2)); }
	inline MessageMetadataU5BU5D_t1675896548* get_AllMessages_2() const { return ___AllMessages_2; }
	inline MessageMetadataU5BU5D_t1675896548** get_address_of_AllMessages_2() { return &___AllMessages_2; }
	inline void set_AllMessages_2(MessageMetadataU5BU5D_t1675896548* value)
	{
		___AllMessages_2 = value;
		Il2CppCodeGenWriteBarrier((&___AllMessages_2), value);
	}

	inline static int32_t get_offset_of_MessagesByName_3() { return static_cast<int32_t>(offsetof(SshMessageFactory_t1004590256_StaticFields, ___MessagesByName_3)); }
	inline RuntimeObject* get_MessagesByName_3() const { return ___MessagesByName_3; }
	inline RuntimeObject** get_address_of_MessagesByName_3() { return &___MessagesByName_3; }
	inline void set_MessagesByName_3(RuntimeObject* value)
	{
		___MessagesByName_3 = value;
		Il2CppCodeGenWriteBarrier((&___MessagesByName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHMESSAGEFACTORY_T1004590256_H
#ifndef MESSAGEMETADATA_T174986905_H
#define MESSAGEMETADATA_T174986905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata
struct  MessageMetadata_t174986905  : public RuntimeObject
{
public:
	// System.Byte Renci.SshNet.SshMessageFactory/MessageMetadata::Id
	uint8_t ___Id_0;
	// System.String Renci.SshNet.SshMessageFactory/MessageMetadata::Name
	String_t* ___Name_1;
	// System.Byte Renci.SshNet.SshMessageFactory/MessageMetadata::Number
	uint8_t ___Number_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(MessageMetadata_t174986905, ___Id_0)); }
	inline uint8_t get_Id_0() const { return ___Id_0; }
	inline uint8_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(uint8_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(MessageMetadata_t174986905, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_Number_2() { return static_cast<int32_t>(offsetof(MessageMetadata_t174986905, ___Number_2)); }
	inline uint8_t get_Number_2() const { return ___Number_2; }
	inline uint8_t* get_address_of_Number_2() { return &___Number_2; }
	inline void set_Number_2(uint8_t value)
	{
		___Number_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_T174986905_H
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
#ifndef SERVICEFACTORY_T198644780_H
#define SERVICEFACTORY_T198644780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.ServiceFactory
struct  ServiceFactory_t198644780  : public RuntimeObject
{
public:

public:
};

struct ServiceFactory_t198644780_StaticFields
{
public:
	// System.Int32 Renci.SshNet.ServiceFactory::PartialSuccessLimit
	int32_t ___PartialSuccessLimit_0;

public:
	inline static int32_t get_offset_of_PartialSuccessLimit_0() { return static_cast<int32_t>(offsetof(ServiceFactory_t198644780_StaticFields, ___PartialSuccessLimit_0)); }
	inline int32_t get_PartialSuccessLimit_0() const { return ___PartialSuccessLimit_0; }
	inline int32_t* get_address_of_PartialSuccessLimit_0() { return &___PartialSuccessLimit_0; }
	inline void set_PartialSuccessLimit_0(int32_t value)
	{
		___PartialSuccessLimit_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEFACTORY_T198644780_H
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
#ifndef FORWARDEDPORT_T634403097_H
#define FORWARDEDPORT_T634403097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.ForwardedPort
struct  ForwardedPort_t634403097  : public RuntimeObject
{
public:
	// Renci.SshNet.ISession Renci.SshNet.ForwardedPort::<Session>k__BackingField
	RuntimeObject* ___U3CSessionU3Ek__BackingField_0;
	// System.EventHandler Renci.SshNet.ForwardedPort::Closing
	EventHandler_t1348719766 * ___Closing_1;
	// System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs> Renci.SshNet.ForwardedPort::Exception
	EventHandler_1_t3115254733 * ___Exception_2;

public:
	inline static int32_t get_offset_of_U3CSessionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ForwardedPort_t634403097, ___U3CSessionU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CSessionU3Ek__BackingField_0() const { return ___U3CSessionU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CSessionU3Ek__BackingField_0() { return &___U3CSessionU3Ek__BackingField_0; }
	inline void set_U3CSessionU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CSessionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSessionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_Closing_1() { return static_cast<int32_t>(offsetof(ForwardedPort_t634403097, ___Closing_1)); }
	inline EventHandler_t1348719766 * get_Closing_1() const { return ___Closing_1; }
	inline EventHandler_t1348719766 ** get_address_of_Closing_1() { return &___Closing_1; }
	inline void set_Closing_1(EventHandler_t1348719766 * value)
	{
		___Closing_1 = value;
		Il2CppCodeGenWriteBarrier((&___Closing_1), value);
	}

	inline static int32_t get_offset_of_Exception_2() { return static_cast<int32_t>(offsetof(ForwardedPort_t634403097, ___Exception_2)); }
	inline EventHandler_1_t3115254733 * get_Exception_2() const { return ___Exception_2; }
	inline EventHandler_1_t3115254733 ** get_address_of_Exception_2() { return &___Exception_2; }
	inline void set_Exception_2(EventHandler_1_t3115254733 * value)
	{
		___Exception_2 = value;
		Il2CppCodeGenWriteBarrier((&___Exception_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDEDPORT_T634403097_H
#ifndef LIST_1_T2106477839_H
#define LIST_1_T2106477839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Renci.SshNet.ForwardedPort>
struct  List_1_t2106477839  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ForwardedPortU5BU5D_t2611784292* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2106477839, ____items_1)); }
	inline ForwardedPortU5BU5D_t2611784292* get__items_1() const { return ____items_1; }
	inline ForwardedPortU5BU5D_t2611784292** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ForwardedPortU5BU5D_t2611784292* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2106477839, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2106477839, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2106477839, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2106477839_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ForwardedPortU5BU5D_t2611784292* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2106477839_StaticFields, ____emptyArray_5)); }
	inline ForwardedPortU5BU5D_t2611784292* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ForwardedPortU5BU5D_t2611784292** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ForwardedPortU5BU5D_t2611784292* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2106477839_H
#ifndef MESSAGEMETADATA_1_T4074031887_H
#define MESSAGEMETADATA_1_T4074031887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenMessage>
struct  MessageMetadata_1_t4074031887  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T4074031887_H
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
#ifndef MESSAGEMETADATA_1_T2451642879_H
#define MESSAGEMETADATA_1_T2451642879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.GlobalRequestMessage>
struct  MessageMetadata_1_t2451642879  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T2451642879_H
#ifndef MESSAGEMETADATA_1_T284949424_H
#define MESSAGEMETADATA_1_T284949424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.DebugMessage>
struct  MessageMetadata_1_t284949424  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T284949424_H
#ifndef MESSAGEMETADATA_1_T3801097035_H
#define MESSAGEMETADATA_1_T3801097035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.FailureMessage>
struct  MessageMetadata_1_t3801097035  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3801097035_H
#ifndef MESSAGEMETADATA_1_T3892623955_H
#define MESSAGEMETADATA_1_T3892623955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage>
struct  MessageMetadata_1_t3892623955  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3892623955_H
#ifndef CHANNELREQUESTEVENTARGS_T205415504_H
#define CHANNELREQUESTEVENTARGS_T205415504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ChannelRequestEventArgs
struct  ChannelRequestEventArgs_t205415504  : public EventArgs_t3591816995
{
public:
	// Renci.SshNet.Messages.Connection.RequestInfo Renci.SshNet.Common.ChannelRequestEventArgs::<Info>k__BackingField
	RequestInfo_t1797926055 * ___U3CInfoU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelRequestEventArgs_t205415504, ___U3CInfoU3Ek__BackingField_1)); }
	inline RequestInfo_t1797926055 * get_U3CInfoU3Ek__BackingField_1() const { return ___U3CInfoU3Ek__BackingField_1; }
	inline RequestInfo_t1797926055 ** get_address_of_U3CInfoU3Ek__BackingField_1() { return &___U3CInfoU3Ek__BackingField_1; }
	inline void set_U3CInfoU3Ek__BackingField_1(RequestInfo_t1797926055 * value)
	{
		___U3CInfoU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInfoU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELREQUESTEVENTARGS_T205415504_H
#ifndef MESSAGEMETADATA_1_T529423311_H
#define MESSAGEMETADATA_1_T529423311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.RequestSuccessMessage>
struct  MessageMetadata_1_t529423311  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T529423311_H
#ifndef MESSAGEMETADATA_1_T3053058733_H
#define MESSAGEMETADATA_1_T3053058733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelSuccessMessage>
struct  MessageMetadata_1_t3053058733  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3053058733_H
#ifndef MESSAGEMETADATA_1_T1581200532_H
#define MESSAGEMETADATA_1_T1581200532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.InformationRequestMessage>
struct  MessageMetadata_1_t1581200532  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T1581200532_H
#ifndef CHANNELEVENTARGS_T3791648963_H
#define CHANNELEVENTARGS_T3791648963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ChannelEventArgs
struct  ChannelEventArgs_t3791648963  : public EventArgs_t3591816995
{
public:
	// System.UInt32 Renci.SshNet.Common.ChannelEventArgs::<ChannelNumber>k__BackingField
	uint32_t ___U3CChannelNumberU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CChannelNumberU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelEventArgs_t3791648963, ___U3CChannelNumberU3Ek__BackingField_1)); }
	inline uint32_t get_U3CChannelNumberU3Ek__BackingField_1() const { return ___U3CChannelNumberU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CChannelNumberU3Ek__BackingField_1() { return &___U3CChannelNumberU3Ek__BackingField_1; }
	inline void set_U3CChannelNumberU3Ek__BackingField_1(uint32_t value)
	{
		___U3CChannelNumberU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELEVENTARGS_T3791648963_H
#ifndef MESSAGEMETADATA_1_T1782393825_H
#define MESSAGEMETADATA_1_T1782393825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.UnimplementedMessage>
struct  MessageMetadata_1_t1782393825  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T1782393825_H
#ifndef REQUESTINFO_T1797926055_H
#define REQUESTINFO_T1797926055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.RequestInfo
struct  RequestInfo_t1797926055  : public SshData_t3807462516
{
public:
	// System.Boolean Renci.SshNet.Messages.Connection.RequestInfo::<WantReply>k__BackingField
	bool ___U3CWantReplyU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CWantReplyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RequestInfo_t1797926055, ___U3CWantReplyU3Ek__BackingField_3)); }
	inline bool get_U3CWantReplyU3Ek__BackingField_3() const { return ___U3CWantReplyU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CWantReplyU3Ek__BackingField_3() { return &___U3CWantReplyU3Ek__BackingField_3; }
	inline void set_U3CWantReplyU3Ek__BackingField_3(bool value)
	{
		___U3CWantReplyU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTINFO_T1797926055_H
#ifndef MESSAGEMETADATA_1_T3229348390_H
#define MESSAGEMETADATA_1_T3229348390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.NewKeysMessage>
struct  MessageMetadata_1_t3229348390  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3229348390_H
#ifndef MESSAGEMETADATA_1_T2954632716_H
#define MESSAGEMETADATA_1_T2954632716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeInitMessage>
struct  MessageMetadata_1_t2954632716  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T2954632716_H
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
#ifndef MESSAGEMETADATA_1_T2662122351_H
#define MESSAGEMETADATA_1_T2662122351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelFailureMessage>
struct  MessageMetadata_1_t2662122351  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T2662122351_H
#ifndef MESSAGEMETADATA_1_T3739975694_H
#define MESSAGEMETADATA_1_T3739975694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage>
struct  MessageMetadata_1_t3739975694  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3739975694_H
#ifndef MESSAGEMETADATA_1_T3137192560_H
#define MESSAGEMETADATA_1_T3137192560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.RequestFailureMessage>
struct  MessageMetadata_1_t3137192560  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3137192560_H
#ifndef MESSAGEMETADATA_1_T2620507973_H
#define MESSAGEMETADATA_1_T2620507973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelDataMessage>
struct  MessageMetadata_1_t2620507973  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T2620507973_H
#ifndef MESSAGEMETADATA_1_T939427463_H
#define MESSAGEMETADATA_1_T939427463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.InformationResponseMessage>
struct  MessageMetadata_1_t939427463  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T939427463_H
#ifndef MESSAGEMETADATA_1_T3461637843_H
#define MESSAGEMETADATA_1_T3461637843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelExtendedDataMessage>
struct  MessageMetadata_1_t3461637843  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3461637843_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef MESSAGEMETADATA_1_T3071453335_H
#define MESSAGEMETADATA_1_T3071453335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelRequestMessage>
struct  MessageMetadata_1_t3071453335  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3071453335_H
#ifndef MESSAGEMETADATA_1_T1664368617_H
#define MESSAGEMETADATA_1_T1664368617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.BannerMessage>
struct  MessageMetadata_1_t1664368617  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T1664368617_H
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
#ifndef MESSAGEMETADATA_1_T3277971202_H
#define MESSAGEMETADATA_1_T3277971202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.PasswordChangeRequiredMessage>
struct  MessageMetadata_1_t3277971202  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3277971202_H
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
#ifndef ENUMERATOR_T3995721716_H
#define ENUMERATOR_T3995721716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Renci.SshNet.ForwardedPort>
struct  Enumerator_t3995721716 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2106477839 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ForwardedPort_t634403097 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3995721716, ___list_0)); }
	inline List_1_t2106477839 * get_list_0() const { return ___list_0; }
	inline List_1_t2106477839 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2106477839 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3995721716, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3995721716, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3995721716, ___current_3)); }
	inline ForwardedPort_t634403097 * get_current_3() const { return ___current_3; }
	inline ForwardedPort_t634403097 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ForwardedPort_t634403097 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3995721716_H
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
#ifndef EXCEPTIONEVENTARGS_T896128004_H
#define EXCEPTIONEVENTARGS_T896128004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ExceptionEventArgs
struct  ExceptionEventArgs_t896128004  : public EventArgs_t3591816995
{
public:
	// System.Exception Renci.SshNet.Common.ExceptionEventArgs::<Exception>k__BackingField
	Exception_t * ___U3CExceptionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ExceptionEventArgs_t896128004, ___U3CExceptionU3Ek__BackingField_1)); }
	inline Exception_t * get_U3CExceptionU3Ek__BackingField_1() const { return ___U3CExceptionU3Ek__BackingField_1; }
	inline Exception_t ** get_address_of_U3CExceptionU3Ek__BackingField_1() { return &___U3CExceptionU3Ek__BackingField_1; }
	inline void set_U3CExceptionU3Ek__BackingField_1(Exception_t * value)
	{
		___U3CExceptionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExceptionU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONEVENTARGS_T896128004_H
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
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t1214474899 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t2317969963 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t1214474899 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t1214474899 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t1214474899 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&____ReadLineDelegate_1), value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t2317969963 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t2317969963 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t2317969963 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____ReadDelegate_2), value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_3)); }
	inline TextReader_t283511965 * get_Null_3() const { return ___Null_3; }
	inline TextReader_t283511965 ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t283511965 * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
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
#ifndef MESSAGE_T2172764883_H
#define MESSAGE_T2172764883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Message
struct  Message_t2172764883  : public SshData_t3807462516
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGE_T2172764883_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t257213610 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___list_0)); }
	inline List_1_t257213610 * get_list_0() const { return ___list_0; }
	inline List_1_t257213610 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t257213610 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef MESSAGEMETADATA_1_T2610932943_H
#define MESSAGEMETADATA_1_T2610932943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply>
struct  MessageMetadata_1_t2610932943  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T2610932943_H
#ifndef MESSAGEMETADATA_1_T1634548274_H
#define MESSAGEMETADATA_1_T1634548274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.IgnoreMessage>
struct  MessageMetadata_1_t1634548274  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T1634548274_H
#ifndef MESSAGEMETADATA_1_T3136770008_H
#define MESSAGEMETADATA_1_T3136770008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelWindowAdjustMessage>
struct  MessageMetadata_1_t3136770008  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3136770008_H
#ifndef SSHEXCEPTION_T1435741398_H
#define SSHEXCEPTION_T1435741398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.SshException
struct  SshException_t1435741398  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHEXCEPTION_T1435741398_H
#ifndef MESSAGEMETADATA_1_T3241984111_H
#define MESSAGEMETADATA_1_T3241984111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.DisconnectMessage>
struct  MessageMetadata_1_t3241984111  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3241984111_H
#ifndef MESSAGEMETADATA_1_T3845700005_H
#define MESSAGEMETADATA_1_T3845700005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.SuccessMessage>
struct  MessageMetadata_1_t3845700005  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T3845700005_H
#ifndef MESSAGEMETADATA_1_T2996753660_H
#define MESSAGEMETADATA_1_T2996753660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.PublicKeyMessage>
struct  MessageMetadata_1_t2996753660  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T2996753660_H
#ifndef MESSAGEMETADATA_1_T2166108262_H
#define MESSAGEMETADATA_1_T2166108262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelEofMessage>
struct  MessageMetadata_1_t2166108262  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T2166108262_H
#ifndef MESSAGEMETADATA_1_T83236809_H
#define MESSAGEMETADATA_1_T83236809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage>
struct  MessageMetadata_1_t83236809  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T83236809_H
#ifndef MESSAGEMETADATA_1_T9813608_H
#define MESSAGEMETADATA_1_T9813608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeGroup>
struct  MessageMetadata_1_t9813608  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T9813608_H
#ifndef MESSAGEMETADATA_1_T4248897102_H
#define MESSAGEMETADATA_1_T4248897102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.ServiceAcceptMessage>
struct  MessageMetadata_1_t4248897102  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T4248897102_H
#ifndef MESSAGEMETADATA_1_T2718614835_H
#define MESSAGEMETADATA_1_T2718614835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelCloseMessage>
struct  MessageMetadata_1_t2718614835  : public MessageMetadata_t174986905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEMETADATA_1_T2718614835_H
#ifndef PROXYTYPES_T2345601162_H
#define PROXYTYPES_T2345601162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.ProxyTypes
struct  ProxyTypes_t2345601162 
{
public:
	// System.Int32 Renci.SshNet.ProxyTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProxyTypes_t2345601162, ___value___2)); }
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
#endif // PROXYTYPES_T2345601162_H
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
#ifndef CHANNELMESSAGE_T2504225348_H
#define CHANNELMESSAGE_T2504225348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelMessage
struct  ChannelMessage_t2504225348  : public Message_t2172764883
{
public:
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelMessage::<LocalChannelNumber>k__BackingField
	uint32_t ___U3CLocalChannelNumberU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CLocalChannelNumberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChannelMessage_t2504225348, ___U3CLocalChannelNumberU3Ek__BackingField_3)); }
	inline uint32_t get_U3CLocalChannelNumberU3Ek__BackingField_3() const { return ___U3CLocalChannelNumberU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CLocalChannelNumberU3Ek__BackingField_3() { return &___U3CLocalChannelNumberU3Ek__BackingField_3; }
	inline void set_U3CLocalChannelNumberU3Ek__BackingField_3(uint32_t value)
	{
		___U3CLocalChannelNumberU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELMESSAGE_T2504225348_H
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
#ifndef DISCONNECTREASON_T587329116_H
#define DISCONNECTREASON_T587329116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.DisconnectReason
struct  DisconnectReason_t587329116 
{
public:
	// System.Int32 Renci.SshNet.Messages.Transport.DisconnectReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectReason_t587329116, ___value___2)); }
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
#endif // DISCONNECTREASON_T587329116_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t1273022909 * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_t4116647657* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t3528271667* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_t4116647657* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t3187275312 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_6)); }
	inline Encoding_t1523322056 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t1523322056 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t1523322056 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_6), value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_7)); }
	inline Decoder_t2204182725 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t2204182725 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t2204182725 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_7), value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___byteBuffer_8)); }
	inline ByteU5BU5D_t4116647657* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_t4116647657* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuffer_8), value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charBuffer_9)); }
	inline CharU5BU5D_t3528271667* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t3528271667** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t3528271667* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_9), value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____preamble_10)); }
	inline ByteU5BU5D_t4116647657* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_t4116647657** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_t4116647657* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((&____preamble_10), value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ____asyncReadTask_20)); }
	inline Task_t3187275312 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t3187275312 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t3187275312 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((&____asyncReadTask_20), value);
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_4)); }
	inline StreamReader_t4009935899 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_t4009935899 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_t4009935899 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((&___Null_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
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
#ifndef CHANNELDATAEVENTARGS_T1617664455_H
#define CHANNELDATAEVENTARGS_T1617664455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ChannelDataEventArgs
struct  ChannelDataEventArgs_t1617664455  : public ChannelEventArgs_t3791648963
{
public:
	// System.Byte[] Renci.SshNet.Common.ChannelDataEventArgs::<Data>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CDataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelDataEventArgs_t1617664455, ___U3CDataU3Ek__BackingField_2)); }
	inline ByteU5BU5D_t4116647657* get_U3CDataU3Ek__BackingField_2() const { return ___U3CDataU3Ek__BackingField_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CDataU3Ek__BackingField_2() { return &___U3CDataU3Ek__BackingField_2; }
	inline void set_U3CDataU3Ek__BackingField_2(ByteU5BU5D_t4116647657* value)
	{
		___U3CDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELDATAEVENTARGS_T1617664455_H
#ifndef PIPESTREAM_T2360103068_H
#define PIPESTREAM_T2360103068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.PipeStream
struct  PipeStream_t2360103068  : public Stream_t1273022909
{
public:
	// System.Collections.Generic.Queue`1<System.Byte> Renci.SshNet.Common.PipeStream::_buffer
	Queue_1_t980555870 * ____buffer_4;
	// System.Boolean Renci.SshNet.Common.PipeStream::_isFlushed
	bool ____isFlushed_5;
	// System.Int64 Renci.SshNet.Common.PipeStream::_maxBufferLength
	int64_t ____maxBufferLength_6;
	// System.Boolean Renci.SshNet.Common.PipeStream::_canBlockLastRead
	bool ____canBlockLastRead_7;
	// System.Boolean Renci.SshNet.Common.PipeStream::_isDisposed
	bool ____isDisposed_8;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(PipeStream_t2360103068, ____buffer_4)); }
	inline Queue_1_t980555870 * get__buffer_4() const { return ____buffer_4; }
	inline Queue_1_t980555870 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(Queue_1_t980555870 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__isFlushed_5() { return static_cast<int32_t>(offsetof(PipeStream_t2360103068, ____isFlushed_5)); }
	inline bool get__isFlushed_5() const { return ____isFlushed_5; }
	inline bool* get_address_of__isFlushed_5() { return &____isFlushed_5; }
	inline void set__isFlushed_5(bool value)
	{
		____isFlushed_5 = value;
	}

	inline static int32_t get_offset_of__maxBufferLength_6() { return static_cast<int32_t>(offsetof(PipeStream_t2360103068, ____maxBufferLength_6)); }
	inline int64_t get__maxBufferLength_6() const { return ____maxBufferLength_6; }
	inline int64_t* get_address_of__maxBufferLength_6() { return &____maxBufferLength_6; }
	inline void set__maxBufferLength_6(int64_t value)
	{
		____maxBufferLength_6 = value;
	}

	inline static int32_t get_offset_of__canBlockLastRead_7() { return static_cast<int32_t>(offsetof(PipeStream_t2360103068, ____canBlockLastRead_7)); }
	inline bool get__canBlockLastRead_7() const { return ____canBlockLastRead_7; }
	inline bool* get_address_of__canBlockLastRead_7() { return &____canBlockLastRead_7; }
	inline void set__canBlockLastRead_7(bool value)
	{
		____canBlockLastRead_7 = value;
	}

	inline static int32_t get_offset_of__isDisposed_8() { return static_cast<int32_t>(offsetof(PipeStream_t2360103068, ____isDisposed_8)); }
	inline bool get__isDisposed_8() const { return ____isDisposed_8; }
	inline bool* get_address_of__isDisposed_8() { return &____isDisposed_8; }
	inline void set__isDisposed_8(bool value)
	{
		____isDisposed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIPESTREAM_T2360103068_H
#ifndef SSHOPERATIONTIMEOUTEXCEPTION_T3702980668_H
#define SSHOPERATIONTIMEOUTEXCEPTION_T3702980668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.SshOperationTimeoutException
struct  SshOperationTimeoutException_t3702980668  : public SshException_t1435741398
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHOPERATIONTIMEOUTEXCEPTION_T3702980668_H
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
#ifndef EXITSTATUSREQUESTINFO_T20368951_H
#define EXITSTATUSREQUESTINFO_T20368951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ExitStatusRequestInfo
struct  ExitStatusRequestInfo_t20368951  : public RequestInfo_t1797926055
{
public:
	// System.UInt32 Renci.SshNet.Messages.Connection.ExitStatusRequestInfo::<ExitStatus>k__BackingField
	uint32_t ___U3CExitStatusU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CExitStatusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ExitStatusRequestInfo_t20368951, ___U3CExitStatusU3Ek__BackingField_4)); }
	inline uint32_t get_U3CExitStatusU3Ek__BackingField_4() const { return ___U3CExitStatusU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CExitStatusU3Ek__BackingField_4() { return &___U3CExitStatusU3Ek__BackingField_4; }
	inline void set_U3CExitStatusU3Ek__BackingField_4(uint32_t value)
	{
		___U3CExitStatusU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXITSTATUSREQUESTINFO_T20368951_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef BASECLIENT_T304433449_H
#define BASECLIENT_T304433449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.BaseClient
struct  BaseClient_t304433449  : public RuntimeObject
{
public:
	// System.Boolean Renci.SshNet.BaseClient::_ownsConnectionInfo
	bool ____ownsConnectionInfo_0;
	// Renci.SshNet.IServiceFactory Renci.SshNet.BaseClient::_serviceFactory
	RuntimeObject* ____serviceFactory_1;
	// System.Object Renci.SshNet.BaseClient::_keepAliveLock
	RuntimeObject * ____keepAliveLock_2;
	// System.TimeSpan Renci.SshNet.BaseClient::_keepAliveInterval
	TimeSpan_t881159249  ____keepAliveInterval_3;
	// System.Threading.Timer Renci.SshNet.BaseClient::_keepAliveTimer
	Timer_t716671026 * ____keepAliveTimer_4;
	// Renci.SshNet.ConnectionInfo Renci.SshNet.BaseClient::_connectionInfo
	ConnectionInfo_t2762416072 * ____connectionInfo_5;
	// Renci.SshNet.ISession Renci.SshNet.BaseClient::<Session>k__BackingField
	RuntimeObject* ___U3CSessionU3Ek__BackingField_6;
	// System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs> Renci.SshNet.BaseClient::ErrorOccurred
	EventHandler_1_t3115254733 * ___ErrorOccurred_7;
	// System.EventHandler`1<Renci.SshNet.Common.HostKeyEventArgs> Renci.SshNet.BaseClient::HostKeyReceived
	EventHandler_1_t3610213555 * ___HostKeyReceived_8;
	// System.Boolean Renci.SshNet.BaseClient::_isDisposed
	bool ____isDisposed_9;

public:
	inline static int32_t get_offset_of__ownsConnectionInfo_0() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ____ownsConnectionInfo_0)); }
	inline bool get__ownsConnectionInfo_0() const { return ____ownsConnectionInfo_0; }
	inline bool* get_address_of__ownsConnectionInfo_0() { return &____ownsConnectionInfo_0; }
	inline void set__ownsConnectionInfo_0(bool value)
	{
		____ownsConnectionInfo_0 = value;
	}

	inline static int32_t get_offset_of__serviceFactory_1() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ____serviceFactory_1)); }
	inline RuntimeObject* get__serviceFactory_1() const { return ____serviceFactory_1; }
	inline RuntimeObject** get_address_of__serviceFactory_1() { return &____serviceFactory_1; }
	inline void set__serviceFactory_1(RuntimeObject* value)
	{
		____serviceFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____serviceFactory_1), value);
	}

	inline static int32_t get_offset_of__keepAliveLock_2() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ____keepAliveLock_2)); }
	inline RuntimeObject * get__keepAliveLock_2() const { return ____keepAliveLock_2; }
	inline RuntimeObject ** get_address_of__keepAliveLock_2() { return &____keepAliveLock_2; }
	inline void set__keepAliveLock_2(RuntimeObject * value)
	{
		____keepAliveLock_2 = value;
		Il2CppCodeGenWriteBarrier((&____keepAliveLock_2), value);
	}

	inline static int32_t get_offset_of__keepAliveInterval_3() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ____keepAliveInterval_3)); }
	inline TimeSpan_t881159249  get__keepAliveInterval_3() const { return ____keepAliveInterval_3; }
	inline TimeSpan_t881159249 * get_address_of__keepAliveInterval_3() { return &____keepAliveInterval_3; }
	inline void set__keepAliveInterval_3(TimeSpan_t881159249  value)
	{
		____keepAliveInterval_3 = value;
	}

	inline static int32_t get_offset_of__keepAliveTimer_4() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ____keepAliveTimer_4)); }
	inline Timer_t716671026 * get__keepAliveTimer_4() const { return ____keepAliveTimer_4; }
	inline Timer_t716671026 ** get_address_of__keepAliveTimer_4() { return &____keepAliveTimer_4; }
	inline void set__keepAliveTimer_4(Timer_t716671026 * value)
	{
		____keepAliveTimer_4 = value;
		Il2CppCodeGenWriteBarrier((&____keepAliveTimer_4), value);
	}

	inline static int32_t get_offset_of__connectionInfo_5() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ____connectionInfo_5)); }
	inline ConnectionInfo_t2762416072 * get__connectionInfo_5() const { return ____connectionInfo_5; }
	inline ConnectionInfo_t2762416072 ** get_address_of__connectionInfo_5() { return &____connectionInfo_5; }
	inline void set__connectionInfo_5(ConnectionInfo_t2762416072 * value)
	{
		____connectionInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____connectionInfo_5), value);
	}

	inline static int32_t get_offset_of_U3CSessionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ___U3CSessionU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CSessionU3Ek__BackingField_6() const { return ___U3CSessionU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CSessionU3Ek__BackingField_6() { return &___U3CSessionU3Ek__BackingField_6; }
	inline void set_U3CSessionU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CSessionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSessionU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_ErrorOccurred_7() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ___ErrorOccurred_7)); }
	inline EventHandler_1_t3115254733 * get_ErrorOccurred_7() const { return ___ErrorOccurred_7; }
	inline EventHandler_1_t3115254733 ** get_address_of_ErrorOccurred_7() { return &___ErrorOccurred_7; }
	inline void set_ErrorOccurred_7(EventHandler_1_t3115254733 * value)
	{
		___ErrorOccurred_7 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorOccurred_7), value);
	}

	inline static int32_t get_offset_of_HostKeyReceived_8() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ___HostKeyReceived_8)); }
	inline EventHandler_1_t3610213555 * get_HostKeyReceived_8() const { return ___HostKeyReceived_8; }
	inline EventHandler_1_t3610213555 ** get_address_of_HostKeyReceived_8() { return &___HostKeyReceived_8; }
	inline void set_HostKeyReceived_8(EventHandler_1_t3610213555 * value)
	{
		___HostKeyReceived_8 = value;
		Il2CppCodeGenWriteBarrier((&___HostKeyReceived_8), value);
	}

	inline static int32_t get_offset_of__isDisposed_9() { return static_cast<int32_t>(offsetof(BaseClient_t304433449, ____isDisposed_9)); }
	inline bool get__isDisposed_9() const { return ____isDisposed_9; }
	inline bool* get_address_of__isDisposed_9() { return &____isDisposed_9; }
	inline void set__isDisposed_9(bool value)
	{
		____isDisposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECLIENT_T304433449_H
#ifndef SSHCOMMAND_T2829160041_H
#define SSHCOMMAND_T2829160041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshCommand
struct  SshCommand_t2829160041  : public RuntimeObject
{
public:
	// Renci.SshNet.ISession Renci.SshNet.SshCommand::_session
	RuntimeObject* ____session_0;
	// System.Text.Encoding Renci.SshNet.SshCommand::_encoding
	Encoding_t1523322056 * ____encoding_1;
	// Renci.SshNet.Channels.IChannelSession Renci.SshNet.SshCommand::_channel
	RuntimeObject* ____channel_2;
	// Renci.SshNet.CommandAsyncResult Renci.SshNet.SshCommand::_asyncResult
	CommandAsyncResult_t1797581660 * ____asyncResult_3;
	// System.AsyncCallback Renci.SshNet.SshCommand::_callback
	AsyncCallback_t3962456242 * ____callback_4;
	// System.Threading.EventWaitHandle Renci.SshNet.SshCommand::_sessionErrorOccuredWaitHandle
	EventWaitHandle_t777845177 * ____sessionErrorOccuredWaitHandle_5;
	// System.Exception Renci.SshNet.SshCommand::_exception
	Exception_t * ____exception_6;
	// System.Boolean Renci.SshNet.SshCommand::_hasError
	bool ____hasError_7;
	// System.Object Renci.SshNet.SshCommand::_endExecuteLock
	RuntimeObject * ____endExecuteLock_8;
	// System.String Renci.SshNet.SshCommand::<CommandText>k__BackingField
	String_t* ___U3CCommandTextU3Ek__BackingField_9;
	// System.TimeSpan Renci.SshNet.SshCommand::<CommandTimeout>k__BackingField
	TimeSpan_t881159249  ___U3CCommandTimeoutU3Ek__BackingField_10;
	// System.Int32 Renci.SshNet.SshCommand::<ExitStatus>k__BackingField
	int32_t ___U3CExitStatusU3Ek__BackingField_11;
	// System.IO.Stream Renci.SshNet.SshCommand::<OutputStream>k__BackingField
	Stream_t1273022909 * ___U3COutputStreamU3Ek__BackingField_12;
	// System.IO.Stream Renci.SshNet.SshCommand::<ExtendedOutputStream>k__BackingField
	Stream_t1273022909 * ___U3CExtendedOutputStreamU3Ek__BackingField_13;
	// System.Text.StringBuilder Renci.SshNet.SshCommand::_result
	StringBuilder_t * ____result_14;
	// System.Text.StringBuilder Renci.SshNet.SshCommand::_error
	StringBuilder_t * ____error_15;
	// System.Boolean Renci.SshNet.SshCommand::_isDisposed
	bool ____isDisposed_16;

public:
	inline static int32_t get_offset_of__session_0() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____session_0)); }
	inline RuntimeObject* get__session_0() const { return ____session_0; }
	inline RuntimeObject** get_address_of__session_0() { return &____session_0; }
	inline void set__session_0(RuntimeObject* value)
	{
		____session_0 = value;
		Il2CppCodeGenWriteBarrier((&____session_0), value);
	}

	inline static int32_t get_offset_of__encoding_1() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____encoding_1)); }
	inline Encoding_t1523322056 * get__encoding_1() const { return ____encoding_1; }
	inline Encoding_t1523322056 ** get_address_of__encoding_1() { return &____encoding_1; }
	inline void set__encoding_1(Encoding_t1523322056 * value)
	{
		____encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&____encoding_1), value);
	}

	inline static int32_t get_offset_of__channel_2() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____channel_2)); }
	inline RuntimeObject* get__channel_2() const { return ____channel_2; }
	inline RuntimeObject** get_address_of__channel_2() { return &____channel_2; }
	inline void set__channel_2(RuntimeObject* value)
	{
		____channel_2 = value;
		Il2CppCodeGenWriteBarrier((&____channel_2), value);
	}

	inline static int32_t get_offset_of__asyncResult_3() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____asyncResult_3)); }
	inline CommandAsyncResult_t1797581660 * get__asyncResult_3() const { return ____asyncResult_3; }
	inline CommandAsyncResult_t1797581660 ** get_address_of__asyncResult_3() { return &____asyncResult_3; }
	inline void set__asyncResult_3(CommandAsyncResult_t1797581660 * value)
	{
		____asyncResult_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncResult_3), value);
	}

	inline static int32_t get_offset_of__callback_4() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____callback_4)); }
	inline AsyncCallback_t3962456242 * get__callback_4() const { return ____callback_4; }
	inline AsyncCallback_t3962456242 ** get_address_of__callback_4() { return &____callback_4; }
	inline void set__callback_4(AsyncCallback_t3962456242 * value)
	{
		____callback_4 = value;
		Il2CppCodeGenWriteBarrier((&____callback_4), value);
	}

	inline static int32_t get_offset_of__sessionErrorOccuredWaitHandle_5() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____sessionErrorOccuredWaitHandle_5)); }
	inline EventWaitHandle_t777845177 * get__sessionErrorOccuredWaitHandle_5() const { return ____sessionErrorOccuredWaitHandle_5; }
	inline EventWaitHandle_t777845177 ** get_address_of__sessionErrorOccuredWaitHandle_5() { return &____sessionErrorOccuredWaitHandle_5; }
	inline void set__sessionErrorOccuredWaitHandle_5(EventWaitHandle_t777845177 * value)
	{
		____sessionErrorOccuredWaitHandle_5 = value;
		Il2CppCodeGenWriteBarrier((&____sessionErrorOccuredWaitHandle_5), value);
	}

	inline static int32_t get_offset_of__exception_6() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____exception_6)); }
	inline Exception_t * get__exception_6() const { return ____exception_6; }
	inline Exception_t ** get_address_of__exception_6() { return &____exception_6; }
	inline void set__exception_6(Exception_t * value)
	{
		____exception_6 = value;
		Il2CppCodeGenWriteBarrier((&____exception_6), value);
	}

	inline static int32_t get_offset_of__hasError_7() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____hasError_7)); }
	inline bool get__hasError_7() const { return ____hasError_7; }
	inline bool* get_address_of__hasError_7() { return &____hasError_7; }
	inline void set__hasError_7(bool value)
	{
		____hasError_7 = value;
	}

	inline static int32_t get_offset_of__endExecuteLock_8() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____endExecuteLock_8)); }
	inline RuntimeObject * get__endExecuteLock_8() const { return ____endExecuteLock_8; }
	inline RuntimeObject ** get_address_of__endExecuteLock_8() { return &____endExecuteLock_8; }
	inline void set__endExecuteLock_8(RuntimeObject * value)
	{
		____endExecuteLock_8 = value;
		Il2CppCodeGenWriteBarrier((&____endExecuteLock_8), value);
	}

	inline static int32_t get_offset_of_U3CCommandTextU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ___U3CCommandTextU3Ek__BackingField_9)); }
	inline String_t* get_U3CCommandTextU3Ek__BackingField_9() const { return ___U3CCommandTextU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CCommandTextU3Ek__BackingField_9() { return &___U3CCommandTextU3Ek__BackingField_9; }
	inline void set_U3CCommandTextU3Ek__BackingField_9(String_t* value)
	{
		___U3CCommandTextU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCommandTextU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CCommandTimeoutU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ___U3CCommandTimeoutU3Ek__BackingField_10)); }
	inline TimeSpan_t881159249  get_U3CCommandTimeoutU3Ek__BackingField_10() const { return ___U3CCommandTimeoutU3Ek__BackingField_10; }
	inline TimeSpan_t881159249 * get_address_of_U3CCommandTimeoutU3Ek__BackingField_10() { return &___U3CCommandTimeoutU3Ek__BackingField_10; }
	inline void set_U3CCommandTimeoutU3Ek__BackingField_10(TimeSpan_t881159249  value)
	{
		___U3CCommandTimeoutU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CExitStatusU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ___U3CExitStatusU3Ek__BackingField_11)); }
	inline int32_t get_U3CExitStatusU3Ek__BackingField_11() const { return ___U3CExitStatusU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CExitStatusU3Ek__BackingField_11() { return &___U3CExitStatusU3Ek__BackingField_11; }
	inline void set_U3CExitStatusU3Ek__BackingField_11(int32_t value)
	{
		___U3CExitStatusU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3COutputStreamU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ___U3COutputStreamU3Ek__BackingField_12)); }
	inline Stream_t1273022909 * get_U3COutputStreamU3Ek__BackingField_12() const { return ___U3COutputStreamU3Ek__BackingField_12; }
	inline Stream_t1273022909 ** get_address_of_U3COutputStreamU3Ek__BackingField_12() { return &___U3COutputStreamU3Ek__BackingField_12; }
	inline void set_U3COutputStreamU3Ek__BackingField_12(Stream_t1273022909 * value)
	{
		___U3COutputStreamU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3COutputStreamU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CExtendedOutputStreamU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ___U3CExtendedOutputStreamU3Ek__BackingField_13)); }
	inline Stream_t1273022909 * get_U3CExtendedOutputStreamU3Ek__BackingField_13() const { return ___U3CExtendedOutputStreamU3Ek__BackingField_13; }
	inline Stream_t1273022909 ** get_address_of_U3CExtendedOutputStreamU3Ek__BackingField_13() { return &___U3CExtendedOutputStreamU3Ek__BackingField_13; }
	inline void set_U3CExtendedOutputStreamU3Ek__BackingField_13(Stream_t1273022909 * value)
	{
		___U3CExtendedOutputStreamU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExtendedOutputStreamU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of__result_14() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____result_14)); }
	inline StringBuilder_t * get__result_14() const { return ____result_14; }
	inline StringBuilder_t ** get_address_of__result_14() { return &____result_14; }
	inline void set__result_14(StringBuilder_t * value)
	{
		____result_14 = value;
		Il2CppCodeGenWriteBarrier((&____result_14), value);
	}

	inline static int32_t get_offset_of__error_15() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____error_15)); }
	inline StringBuilder_t * get__error_15() const { return ____error_15; }
	inline StringBuilder_t ** get_address_of__error_15() { return &____error_15; }
	inline void set__error_15(StringBuilder_t * value)
	{
		____error_15 = value;
		Il2CppCodeGenWriteBarrier((&____error_15), value);
	}

	inline static int32_t get_offset_of__isDisposed_16() { return static_cast<int32_t>(offsetof(SshCommand_t2829160041, ____isDisposed_16)); }
	inline bool get__isDisposed_16() const { return ____isDisposed_16; }
	inline bool* get_address_of__isDisposed_16() { return &____isDisposed_16; }
	inline void set__isDisposed_16(bool value)
	{
		____isDisposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHCOMMAND_T2829160041_H
#ifndef SESSION_T2648700758_H
#define SESSION_T2648700758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Session
struct  Session_t2648700758  : public RuntimeObject
{
public:
	// Renci.SshNet.SshMessageFactory Renci.SshNet.Session::_sshMessageFactory
	SshMessageFactory_t1004590256 * ____sshMessageFactory_4;
	// System.Threading.EventWaitHandle Renci.SshNet.Session::_messageListenerCompleted
	EventWaitHandle_t777845177 * ____messageListenerCompleted_5;
	// System.UInt32 modreq(System.Runtime.CompilerServices.IsVolatile) Renci.SshNet.Session::_outboundPacketSequence
	uint32_t ____outboundPacketSequence_6;
	// System.UInt32 Renci.SshNet.Session::_inboundPacketSequence
	uint32_t ____inboundPacketSequence_7;
	// System.Threading.EventWaitHandle Renci.SshNet.Session::_serviceAccepted
	EventWaitHandle_t777845177 * ____serviceAccepted_8;
	// System.Threading.EventWaitHandle Renci.SshNet.Session::_exceptionWaitHandle
	EventWaitHandle_t777845177 * ____exceptionWaitHandle_9;
	// System.Threading.EventWaitHandle Renci.SshNet.Session::_keyExchangeCompletedWaitHandle
	EventWaitHandle_t777845177 * ____keyExchangeCompletedWaitHandle_10;
	// System.Boolean Renci.SshNet.Session::_keyExchangeInProgress
	bool ____keyExchangeInProgress_11;
	// System.Exception Renci.SshNet.Session::_exception
	Exception_t * ____exception_12;
	// System.Boolean Renci.SshNet.Session::_isAuthenticated
	bool ____isAuthenticated_13;
	// System.Boolean Renci.SshNet.Session::_isDisconnecting
	bool ____isDisconnecting_14;
	// Renci.SshNet.Security.IKeyExchange Renci.SshNet.Session::_keyExchange
	RuntimeObject* ____keyExchange_15;
	// System.Security.Cryptography.HashAlgorithm Renci.SshNet.Session::_serverMac
	HashAlgorithm_t1432317219 * ____serverMac_16;
	// System.Security.Cryptography.HashAlgorithm Renci.SshNet.Session::_clientMac
	HashAlgorithm_t1432317219 * ____clientMac_17;
	// Renci.SshNet.Security.Cryptography.Cipher Renci.SshNet.Session::_clientCipher
	Cipher_t1310027046 * ____clientCipher_18;
	// Renci.SshNet.Security.Cryptography.Cipher Renci.SshNet.Session::_serverCipher
	Cipher_t1310027046 * ____serverCipher_19;
	// Renci.SshNet.Compression.Compressor Renci.SshNet.Session::_serverDecompression
	Compressor_t2655936137 * ____serverDecompression_20;
	// Renci.SshNet.Compression.Compressor Renci.SshNet.Session::_clientCompression
	Compressor_t2655936137 * ____clientCompression_21;
	// Renci.SshNet.Common.SemaphoreLight Renci.SshNet.Session::_sessionSemaphore
	SemaphoreLight_t4163090541 * ____sessionSemaphore_22;
	// Renci.SshNet.IServiceFactory Renci.SshNet.Session::_serviceFactory
	RuntimeObject* ____serviceFactory_23;
	// System.Net.Sockets.Socket Renci.SshNet.Session::_socket
	Socket_t1119025450 * ____socket_24;
	// System.Object Renci.SshNet.Session::_socketReadLock
	RuntimeObject * ____socketReadLock_25;
	// System.Object Renci.SshNet.Session::_socketWriteLock
	RuntimeObject * ____socketWriteLock_26;
	// System.Object Renci.SshNet.Session::_socketDisposeLock
	RuntimeObject * ____socketDisposeLock_27;
	// System.Boolean Renci.SshNet.Session::_isDisconnectMessageSent
	bool ____isDisconnectMessageSent_28;
	// System.UInt32 Renci.SshNet.Session::_nextChannelNumber
	uint32_t ____nextChannelNumber_29;
	// System.Byte[] Renci.SshNet.Session::<SessionId>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CSessionIdU3Ek__BackingField_30;
	// Renci.SshNet.Messages.Message Renci.SshNet.Session::_clientInitMessage
	Message_t2172764883 * ____clientInitMessage_31;
	// System.String Renci.SshNet.Session::<ServerVersion>k__BackingField
	String_t* ___U3CServerVersionU3Ek__BackingField_32;
	// System.String Renci.SshNet.Session::<ClientVersion>k__BackingField
	String_t* ___U3CClientVersionU3Ek__BackingField_33;
	// Renci.SshNet.ConnectionInfo Renci.SshNet.Session::<ConnectionInfo>k__BackingField
	ConnectionInfo_t2762416072 * ___U3CConnectionInfoU3Ek__BackingField_34;
	// System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs> Renci.SshNet.Session::ErrorOccured
	EventHandler_1_t3115254733 * ___ErrorOccured_35;
	// System.EventHandler`1<System.EventArgs> Renci.SshNet.Session::Disconnected
	EventHandler_1_t1515976428 * ___Disconnected_36;
	// System.EventHandler`1<Renci.SshNet.Common.HostKeyEventArgs> Renci.SshNet.Session::HostKeyReceived
	EventHandler_1_t3610213555 * ___HostKeyReceived_37;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.BannerMessage>> Renci.SshNet.Session::UserAuthenticationBannerReceived
	EventHandler_1_t2618191988 * ___UserAuthenticationBannerReceived_38;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.InformationRequestMessage>> Renci.SshNet.Session::UserAuthenticationInformationRequestReceived
	EventHandler_1_t2535023903 * ___UserAuthenticationInformationRequestReceived_39;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.PasswordChangeRequiredMessage>> Renci.SshNet.Session::UserAuthenticationPasswordChangeRequiredReceived
	EventHandler_1_t4231794573 * ___UserAuthenticationPasswordChangeRequiredReceived_40;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.PublicKeyMessage>> Renci.SshNet.Session::UserAuthenticationPublicKeyReceived
	EventHandler_1_t3950577031 * ___UserAuthenticationPublicKeyReceived_41;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeGroup>> Renci.SshNet.Session::KeyExchangeDhGroupExchangeGroupReceived
	EventHandler_1_t963636979 * ___KeyExchangeDhGroupExchangeGroupReceived_42;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply>> Renci.SshNet.Session::KeyExchangeDhGroupExchangeReplyReceived
	EventHandler_1_t3564756314 * ___KeyExchangeDhGroupExchangeReplyReceived_43;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.DisconnectMessage>> Renci.SshNet.Session::DisconnectReceived
	EventHandler_1_t4195807482 * ___DisconnectReceived_44;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.IgnoreMessage>> Renci.SshNet.Session::IgnoreReceived
	EventHandler_1_t2588371645 * ___IgnoreReceived_45;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.UnimplementedMessage>> Renci.SshNet.Session::UnimplementedReceived
	EventHandler_1_t2736217196 * ___UnimplementedReceived_46;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.DebugMessage>> Renci.SshNet.Session::DebugReceived
	EventHandler_1_t1238772795 * ___DebugReceived_47;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.ServiceRequestMessage>> Renci.SshNet.Session::ServiceRequestReceived
	EventHandler_1_t3476636320 * ___ServiceRequestReceived_48;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.ServiceAcceptMessage>> Renci.SshNet.Session::ServiceAcceptReceived
	EventHandler_1_t907753177 * ___ServiceAcceptReceived_49;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.KeyExchangeInitMessage>> Renci.SshNet.Session::KeyExchangeInitReceived
	EventHandler_1_t3908456087 * ___KeyExchangeInitReceived_50;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage>> Renci.SshNet.Session::KeyExchangeDhReplyMessageReceived
	EventHandler_1_t1037060180 * ___KeyExchangeDhReplyMessageReceived_51;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Transport.NewKeysMessage>> Renci.SshNet.Session::NewKeysReceived
	EventHandler_1_t4183171761 * ___NewKeysReceived_52;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.FailureMessage>> Renci.SshNet.Session::UserAuthenticationFailureReceived
	EventHandler_1_t459953110 * ___UserAuthenticationFailureReceived_53;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Authentication.SuccessMessage>> Renci.SshNet.Session::UserAuthenticationSuccessReceived
	EventHandler_1_t504556080 * ___UserAuthenticationSuccessReceived_54;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.GlobalRequestMessage>> Renci.SshNet.Session::GlobalRequestReceived
	EventHandler_1_t3405466250 * ___GlobalRequestReceived_55;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.RequestSuccessMessage>> Renci.SshNet.Session::RequestSuccessReceived
	EventHandler_1_t1483246682 * ___RequestSuccessReceived_56;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.RequestFailureMessage>> Renci.SshNet.Session::RequestFailureReceived
	EventHandler_1_t4091015931 * ___RequestFailureReceived_57;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelOpenMessage>> Renci.SshNet.Session::ChannelOpenReceived
	EventHandler_1_t732887962 * ___ChannelOpenReceived_58;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage>> Renci.SshNet.Session::ChannelOpenConfirmationReceived
	EventHandler_1_t551480030 * ___ChannelOpenConfirmationReceived_59;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage>> Renci.SshNet.Session::ChannelOpenFailureReceived
	EventHandler_1_t398831769 * ___ChannelOpenFailureReceived_60;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelWindowAdjustMessage>> Renci.SshNet.Session::ChannelWindowAdjustReceived
	EventHandler_1_t4090593379 * ___ChannelWindowAdjustReceived_61;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelDataMessage>> Renci.SshNet.Session::ChannelDataReceived
	EventHandler_1_t3574331344 * ___ChannelDataReceived_62;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelExtendedDataMessage>> Renci.SshNet.Session::ChannelExtendedDataReceived
	EventHandler_1_t120493918 * ___ChannelExtendedDataReceived_63;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelEofMessage>> Renci.SshNet.Session::ChannelEofReceived
	EventHandler_1_t3119931633 * ___ChannelEofReceived_64;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelCloseMessage>> Renci.SshNet.Session::ChannelCloseReceived
	EventHandler_1_t3672438206 * ___ChannelCloseReceived_65;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelRequestMessage>> Renci.SshNet.Session::ChannelRequestReceived
	EventHandler_1_t4025276706 * ___ChannelRequestReceived_66;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelSuccessMessage>> Renci.SshNet.Session::ChannelSuccessReceived
	EventHandler_1_t4006882104 * ___ChannelSuccessReceived_67;
	// System.EventHandler`1<Renci.SshNet.MessageEventArgs`1<Renci.SshNet.Messages.Connection.ChannelFailureMessage>> Renci.SshNet.Session::ChannelFailureReceived
	EventHandler_1_t3615945722 * ___ChannelFailureReceived_68;
	// System.Boolean Renci.SshNet.Session::_disposed
	bool ____disposed_69;

public:
	inline static int32_t get_offset_of__sshMessageFactory_4() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____sshMessageFactory_4)); }
	inline SshMessageFactory_t1004590256 * get__sshMessageFactory_4() const { return ____sshMessageFactory_4; }
	inline SshMessageFactory_t1004590256 ** get_address_of__sshMessageFactory_4() { return &____sshMessageFactory_4; }
	inline void set__sshMessageFactory_4(SshMessageFactory_t1004590256 * value)
	{
		____sshMessageFactory_4 = value;
		Il2CppCodeGenWriteBarrier((&____sshMessageFactory_4), value);
	}

	inline static int32_t get_offset_of__messageListenerCompleted_5() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____messageListenerCompleted_5)); }
	inline EventWaitHandle_t777845177 * get__messageListenerCompleted_5() const { return ____messageListenerCompleted_5; }
	inline EventWaitHandle_t777845177 ** get_address_of__messageListenerCompleted_5() { return &____messageListenerCompleted_5; }
	inline void set__messageListenerCompleted_5(EventWaitHandle_t777845177 * value)
	{
		____messageListenerCompleted_5 = value;
		Il2CppCodeGenWriteBarrier((&____messageListenerCompleted_5), value);
	}

	inline static int32_t get_offset_of__outboundPacketSequence_6() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____outboundPacketSequence_6)); }
	inline uint32_t get__outboundPacketSequence_6() const { return ____outboundPacketSequence_6; }
	inline uint32_t* get_address_of__outboundPacketSequence_6() { return &____outboundPacketSequence_6; }
	inline void set__outboundPacketSequence_6(uint32_t value)
	{
		____outboundPacketSequence_6 = value;
	}

	inline static int32_t get_offset_of__inboundPacketSequence_7() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____inboundPacketSequence_7)); }
	inline uint32_t get__inboundPacketSequence_7() const { return ____inboundPacketSequence_7; }
	inline uint32_t* get_address_of__inboundPacketSequence_7() { return &____inboundPacketSequence_7; }
	inline void set__inboundPacketSequence_7(uint32_t value)
	{
		____inboundPacketSequence_7 = value;
	}

	inline static int32_t get_offset_of__serviceAccepted_8() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____serviceAccepted_8)); }
	inline EventWaitHandle_t777845177 * get__serviceAccepted_8() const { return ____serviceAccepted_8; }
	inline EventWaitHandle_t777845177 ** get_address_of__serviceAccepted_8() { return &____serviceAccepted_8; }
	inline void set__serviceAccepted_8(EventWaitHandle_t777845177 * value)
	{
		____serviceAccepted_8 = value;
		Il2CppCodeGenWriteBarrier((&____serviceAccepted_8), value);
	}

	inline static int32_t get_offset_of__exceptionWaitHandle_9() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____exceptionWaitHandle_9)); }
	inline EventWaitHandle_t777845177 * get__exceptionWaitHandle_9() const { return ____exceptionWaitHandle_9; }
	inline EventWaitHandle_t777845177 ** get_address_of__exceptionWaitHandle_9() { return &____exceptionWaitHandle_9; }
	inline void set__exceptionWaitHandle_9(EventWaitHandle_t777845177 * value)
	{
		____exceptionWaitHandle_9 = value;
		Il2CppCodeGenWriteBarrier((&____exceptionWaitHandle_9), value);
	}

	inline static int32_t get_offset_of__keyExchangeCompletedWaitHandle_10() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____keyExchangeCompletedWaitHandle_10)); }
	inline EventWaitHandle_t777845177 * get__keyExchangeCompletedWaitHandle_10() const { return ____keyExchangeCompletedWaitHandle_10; }
	inline EventWaitHandle_t777845177 ** get_address_of__keyExchangeCompletedWaitHandle_10() { return &____keyExchangeCompletedWaitHandle_10; }
	inline void set__keyExchangeCompletedWaitHandle_10(EventWaitHandle_t777845177 * value)
	{
		____keyExchangeCompletedWaitHandle_10 = value;
		Il2CppCodeGenWriteBarrier((&____keyExchangeCompletedWaitHandle_10), value);
	}

	inline static int32_t get_offset_of__keyExchangeInProgress_11() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____keyExchangeInProgress_11)); }
	inline bool get__keyExchangeInProgress_11() const { return ____keyExchangeInProgress_11; }
	inline bool* get_address_of__keyExchangeInProgress_11() { return &____keyExchangeInProgress_11; }
	inline void set__keyExchangeInProgress_11(bool value)
	{
		____keyExchangeInProgress_11 = value;
	}

	inline static int32_t get_offset_of__exception_12() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____exception_12)); }
	inline Exception_t * get__exception_12() const { return ____exception_12; }
	inline Exception_t ** get_address_of__exception_12() { return &____exception_12; }
	inline void set__exception_12(Exception_t * value)
	{
		____exception_12 = value;
		Il2CppCodeGenWriteBarrier((&____exception_12), value);
	}

	inline static int32_t get_offset_of__isAuthenticated_13() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____isAuthenticated_13)); }
	inline bool get__isAuthenticated_13() const { return ____isAuthenticated_13; }
	inline bool* get_address_of__isAuthenticated_13() { return &____isAuthenticated_13; }
	inline void set__isAuthenticated_13(bool value)
	{
		____isAuthenticated_13 = value;
	}

	inline static int32_t get_offset_of__isDisconnecting_14() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____isDisconnecting_14)); }
	inline bool get__isDisconnecting_14() const { return ____isDisconnecting_14; }
	inline bool* get_address_of__isDisconnecting_14() { return &____isDisconnecting_14; }
	inline void set__isDisconnecting_14(bool value)
	{
		____isDisconnecting_14 = value;
	}

	inline static int32_t get_offset_of__keyExchange_15() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____keyExchange_15)); }
	inline RuntimeObject* get__keyExchange_15() const { return ____keyExchange_15; }
	inline RuntimeObject** get_address_of__keyExchange_15() { return &____keyExchange_15; }
	inline void set__keyExchange_15(RuntimeObject* value)
	{
		____keyExchange_15 = value;
		Il2CppCodeGenWriteBarrier((&____keyExchange_15), value);
	}

	inline static int32_t get_offset_of__serverMac_16() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____serverMac_16)); }
	inline HashAlgorithm_t1432317219 * get__serverMac_16() const { return ____serverMac_16; }
	inline HashAlgorithm_t1432317219 ** get_address_of__serverMac_16() { return &____serverMac_16; }
	inline void set__serverMac_16(HashAlgorithm_t1432317219 * value)
	{
		____serverMac_16 = value;
		Il2CppCodeGenWriteBarrier((&____serverMac_16), value);
	}

	inline static int32_t get_offset_of__clientMac_17() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____clientMac_17)); }
	inline HashAlgorithm_t1432317219 * get__clientMac_17() const { return ____clientMac_17; }
	inline HashAlgorithm_t1432317219 ** get_address_of__clientMac_17() { return &____clientMac_17; }
	inline void set__clientMac_17(HashAlgorithm_t1432317219 * value)
	{
		____clientMac_17 = value;
		Il2CppCodeGenWriteBarrier((&____clientMac_17), value);
	}

	inline static int32_t get_offset_of__clientCipher_18() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____clientCipher_18)); }
	inline Cipher_t1310027046 * get__clientCipher_18() const { return ____clientCipher_18; }
	inline Cipher_t1310027046 ** get_address_of__clientCipher_18() { return &____clientCipher_18; }
	inline void set__clientCipher_18(Cipher_t1310027046 * value)
	{
		____clientCipher_18 = value;
		Il2CppCodeGenWriteBarrier((&____clientCipher_18), value);
	}

	inline static int32_t get_offset_of__serverCipher_19() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____serverCipher_19)); }
	inline Cipher_t1310027046 * get__serverCipher_19() const { return ____serverCipher_19; }
	inline Cipher_t1310027046 ** get_address_of__serverCipher_19() { return &____serverCipher_19; }
	inline void set__serverCipher_19(Cipher_t1310027046 * value)
	{
		____serverCipher_19 = value;
		Il2CppCodeGenWriteBarrier((&____serverCipher_19), value);
	}

	inline static int32_t get_offset_of__serverDecompression_20() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____serverDecompression_20)); }
	inline Compressor_t2655936137 * get__serverDecompression_20() const { return ____serverDecompression_20; }
	inline Compressor_t2655936137 ** get_address_of__serverDecompression_20() { return &____serverDecompression_20; }
	inline void set__serverDecompression_20(Compressor_t2655936137 * value)
	{
		____serverDecompression_20 = value;
		Il2CppCodeGenWriteBarrier((&____serverDecompression_20), value);
	}

	inline static int32_t get_offset_of__clientCompression_21() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____clientCompression_21)); }
	inline Compressor_t2655936137 * get__clientCompression_21() const { return ____clientCompression_21; }
	inline Compressor_t2655936137 ** get_address_of__clientCompression_21() { return &____clientCompression_21; }
	inline void set__clientCompression_21(Compressor_t2655936137 * value)
	{
		____clientCompression_21 = value;
		Il2CppCodeGenWriteBarrier((&____clientCompression_21), value);
	}

	inline static int32_t get_offset_of__sessionSemaphore_22() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____sessionSemaphore_22)); }
	inline SemaphoreLight_t4163090541 * get__sessionSemaphore_22() const { return ____sessionSemaphore_22; }
	inline SemaphoreLight_t4163090541 ** get_address_of__sessionSemaphore_22() { return &____sessionSemaphore_22; }
	inline void set__sessionSemaphore_22(SemaphoreLight_t4163090541 * value)
	{
		____sessionSemaphore_22 = value;
		Il2CppCodeGenWriteBarrier((&____sessionSemaphore_22), value);
	}

	inline static int32_t get_offset_of__serviceFactory_23() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____serviceFactory_23)); }
	inline RuntimeObject* get__serviceFactory_23() const { return ____serviceFactory_23; }
	inline RuntimeObject** get_address_of__serviceFactory_23() { return &____serviceFactory_23; }
	inline void set__serviceFactory_23(RuntimeObject* value)
	{
		____serviceFactory_23 = value;
		Il2CppCodeGenWriteBarrier((&____serviceFactory_23), value);
	}

	inline static int32_t get_offset_of__socket_24() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____socket_24)); }
	inline Socket_t1119025450 * get__socket_24() const { return ____socket_24; }
	inline Socket_t1119025450 ** get_address_of__socket_24() { return &____socket_24; }
	inline void set__socket_24(Socket_t1119025450 * value)
	{
		____socket_24 = value;
		Il2CppCodeGenWriteBarrier((&____socket_24), value);
	}

	inline static int32_t get_offset_of__socketReadLock_25() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____socketReadLock_25)); }
	inline RuntimeObject * get__socketReadLock_25() const { return ____socketReadLock_25; }
	inline RuntimeObject ** get_address_of__socketReadLock_25() { return &____socketReadLock_25; }
	inline void set__socketReadLock_25(RuntimeObject * value)
	{
		____socketReadLock_25 = value;
		Il2CppCodeGenWriteBarrier((&____socketReadLock_25), value);
	}

	inline static int32_t get_offset_of__socketWriteLock_26() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____socketWriteLock_26)); }
	inline RuntimeObject * get__socketWriteLock_26() const { return ____socketWriteLock_26; }
	inline RuntimeObject ** get_address_of__socketWriteLock_26() { return &____socketWriteLock_26; }
	inline void set__socketWriteLock_26(RuntimeObject * value)
	{
		____socketWriteLock_26 = value;
		Il2CppCodeGenWriteBarrier((&____socketWriteLock_26), value);
	}

	inline static int32_t get_offset_of__socketDisposeLock_27() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____socketDisposeLock_27)); }
	inline RuntimeObject * get__socketDisposeLock_27() const { return ____socketDisposeLock_27; }
	inline RuntimeObject ** get_address_of__socketDisposeLock_27() { return &____socketDisposeLock_27; }
	inline void set__socketDisposeLock_27(RuntimeObject * value)
	{
		____socketDisposeLock_27 = value;
		Il2CppCodeGenWriteBarrier((&____socketDisposeLock_27), value);
	}

	inline static int32_t get_offset_of__isDisconnectMessageSent_28() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____isDisconnectMessageSent_28)); }
	inline bool get__isDisconnectMessageSent_28() const { return ____isDisconnectMessageSent_28; }
	inline bool* get_address_of__isDisconnectMessageSent_28() { return &____isDisconnectMessageSent_28; }
	inline void set__isDisconnectMessageSent_28(bool value)
	{
		____isDisconnectMessageSent_28 = value;
	}

	inline static int32_t get_offset_of__nextChannelNumber_29() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____nextChannelNumber_29)); }
	inline uint32_t get__nextChannelNumber_29() const { return ____nextChannelNumber_29; }
	inline uint32_t* get_address_of__nextChannelNumber_29() { return &____nextChannelNumber_29; }
	inline void set__nextChannelNumber_29(uint32_t value)
	{
		____nextChannelNumber_29 = value;
	}

	inline static int32_t get_offset_of_U3CSessionIdU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___U3CSessionIdU3Ek__BackingField_30)); }
	inline ByteU5BU5D_t4116647657* get_U3CSessionIdU3Ek__BackingField_30() const { return ___U3CSessionIdU3Ek__BackingField_30; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CSessionIdU3Ek__BackingField_30() { return &___U3CSessionIdU3Ek__BackingField_30; }
	inline void set_U3CSessionIdU3Ek__BackingField_30(ByteU5BU5D_t4116647657* value)
	{
		___U3CSessionIdU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSessionIdU3Ek__BackingField_30), value);
	}

	inline static int32_t get_offset_of__clientInitMessage_31() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____clientInitMessage_31)); }
	inline Message_t2172764883 * get__clientInitMessage_31() const { return ____clientInitMessage_31; }
	inline Message_t2172764883 ** get_address_of__clientInitMessage_31() { return &____clientInitMessage_31; }
	inline void set__clientInitMessage_31(Message_t2172764883 * value)
	{
		____clientInitMessage_31 = value;
		Il2CppCodeGenWriteBarrier((&____clientInitMessage_31), value);
	}

	inline static int32_t get_offset_of_U3CServerVersionU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___U3CServerVersionU3Ek__BackingField_32)); }
	inline String_t* get_U3CServerVersionU3Ek__BackingField_32() const { return ___U3CServerVersionU3Ek__BackingField_32; }
	inline String_t** get_address_of_U3CServerVersionU3Ek__BackingField_32() { return &___U3CServerVersionU3Ek__BackingField_32; }
	inline void set_U3CServerVersionU3Ek__BackingField_32(String_t* value)
	{
		___U3CServerVersionU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CServerVersionU3Ek__BackingField_32), value);
	}

	inline static int32_t get_offset_of_U3CClientVersionU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___U3CClientVersionU3Ek__BackingField_33)); }
	inline String_t* get_U3CClientVersionU3Ek__BackingField_33() const { return ___U3CClientVersionU3Ek__BackingField_33; }
	inline String_t** get_address_of_U3CClientVersionU3Ek__BackingField_33() { return &___U3CClientVersionU3Ek__BackingField_33; }
	inline void set_U3CClientVersionU3Ek__BackingField_33(String_t* value)
	{
		___U3CClientVersionU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClientVersionU3Ek__BackingField_33), value);
	}

	inline static int32_t get_offset_of_U3CConnectionInfoU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___U3CConnectionInfoU3Ek__BackingField_34)); }
	inline ConnectionInfo_t2762416072 * get_U3CConnectionInfoU3Ek__BackingField_34() const { return ___U3CConnectionInfoU3Ek__BackingField_34; }
	inline ConnectionInfo_t2762416072 ** get_address_of_U3CConnectionInfoU3Ek__BackingField_34() { return &___U3CConnectionInfoU3Ek__BackingField_34; }
	inline void set_U3CConnectionInfoU3Ek__BackingField_34(ConnectionInfo_t2762416072 * value)
	{
		___U3CConnectionInfoU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConnectionInfoU3Ek__BackingField_34), value);
	}

	inline static int32_t get_offset_of_ErrorOccured_35() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ErrorOccured_35)); }
	inline EventHandler_1_t3115254733 * get_ErrorOccured_35() const { return ___ErrorOccured_35; }
	inline EventHandler_1_t3115254733 ** get_address_of_ErrorOccured_35() { return &___ErrorOccured_35; }
	inline void set_ErrorOccured_35(EventHandler_1_t3115254733 * value)
	{
		___ErrorOccured_35 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorOccured_35), value);
	}

	inline static int32_t get_offset_of_Disconnected_36() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___Disconnected_36)); }
	inline EventHandler_1_t1515976428 * get_Disconnected_36() const { return ___Disconnected_36; }
	inline EventHandler_1_t1515976428 ** get_address_of_Disconnected_36() { return &___Disconnected_36; }
	inline void set_Disconnected_36(EventHandler_1_t1515976428 * value)
	{
		___Disconnected_36 = value;
		Il2CppCodeGenWriteBarrier((&___Disconnected_36), value);
	}

	inline static int32_t get_offset_of_HostKeyReceived_37() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___HostKeyReceived_37)); }
	inline EventHandler_1_t3610213555 * get_HostKeyReceived_37() const { return ___HostKeyReceived_37; }
	inline EventHandler_1_t3610213555 ** get_address_of_HostKeyReceived_37() { return &___HostKeyReceived_37; }
	inline void set_HostKeyReceived_37(EventHandler_1_t3610213555 * value)
	{
		___HostKeyReceived_37 = value;
		Il2CppCodeGenWriteBarrier((&___HostKeyReceived_37), value);
	}

	inline static int32_t get_offset_of_UserAuthenticationBannerReceived_38() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___UserAuthenticationBannerReceived_38)); }
	inline EventHandler_1_t2618191988 * get_UserAuthenticationBannerReceived_38() const { return ___UserAuthenticationBannerReceived_38; }
	inline EventHandler_1_t2618191988 ** get_address_of_UserAuthenticationBannerReceived_38() { return &___UserAuthenticationBannerReceived_38; }
	inline void set_UserAuthenticationBannerReceived_38(EventHandler_1_t2618191988 * value)
	{
		___UserAuthenticationBannerReceived_38 = value;
		Il2CppCodeGenWriteBarrier((&___UserAuthenticationBannerReceived_38), value);
	}

	inline static int32_t get_offset_of_UserAuthenticationInformationRequestReceived_39() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___UserAuthenticationInformationRequestReceived_39)); }
	inline EventHandler_1_t2535023903 * get_UserAuthenticationInformationRequestReceived_39() const { return ___UserAuthenticationInformationRequestReceived_39; }
	inline EventHandler_1_t2535023903 ** get_address_of_UserAuthenticationInformationRequestReceived_39() { return &___UserAuthenticationInformationRequestReceived_39; }
	inline void set_UserAuthenticationInformationRequestReceived_39(EventHandler_1_t2535023903 * value)
	{
		___UserAuthenticationInformationRequestReceived_39 = value;
		Il2CppCodeGenWriteBarrier((&___UserAuthenticationInformationRequestReceived_39), value);
	}

	inline static int32_t get_offset_of_UserAuthenticationPasswordChangeRequiredReceived_40() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___UserAuthenticationPasswordChangeRequiredReceived_40)); }
	inline EventHandler_1_t4231794573 * get_UserAuthenticationPasswordChangeRequiredReceived_40() const { return ___UserAuthenticationPasswordChangeRequiredReceived_40; }
	inline EventHandler_1_t4231794573 ** get_address_of_UserAuthenticationPasswordChangeRequiredReceived_40() { return &___UserAuthenticationPasswordChangeRequiredReceived_40; }
	inline void set_UserAuthenticationPasswordChangeRequiredReceived_40(EventHandler_1_t4231794573 * value)
	{
		___UserAuthenticationPasswordChangeRequiredReceived_40 = value;
		Il2CppCodeGenWriteBarrier((&___UserAuthenticationPasswordChangeRequiredReceived_40), value);
	}

	inline static int32_t get_offset_of_UserAuthenticationPublicKeyReceived_41() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___UserAuthenticationPublicKeyReceived_41)); }
	inline EventHandler_1_t3950577031 * get_UserAuthenticationPublicKeyReceived_41() const { return ___UserAuthenticationPublicKeyReceived_41; }
	inline EventHandler_1_t3950577031 ** get_address_of_UserAuthenticationPublicKeyReceived_41() { return &___UserAuthenticationPublicKeyReceived_41; }
	inline void set_UserAuthenticationPublicKeyReceived_41(EventHandler_1_t3950577031 * value)
	{
		___UserAuthenticationPublicKeyReceived_41 = value;
		Il2CppCodeGenWriteBarrier((&___UserAuthenticationPublicKeyReceived_41), value);
	}

	inline static int32_t get_offset_of_KeyExchangeDhGroupExchangeGroupReceived_42() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___KeyExchangeDhGroupExchangeGroupReceived_42)); }
	inline EventHandler_1_t963636979 * get_KeyExchangeDhGroupExchangeGroupReceived_42() const { return ___KeyExchangeDhGroupExchangeGroupReceived_42; }
	inline EventHandler_1_t963636979 ** get_address_of_KeyExchangeDhGroupExchangeGroupReceived_42() { return &___KeyExchangeDhGroupExchangeGroupReceived_42; }
	inline void set_KeyExchangeDhGroupExchangeGroupReceived_42(EventHandler_1_t963636979 * value)
	{
		___KeyExchangeDhGroupExchangeGroupReceived_42 = value;
		Il2CppCodeGenWriteBarrier((&___KeyExchangeDhGroupExchangeGroupReceived_42), value);
	}

	inline static int32_t get_offset_of_KeyExchangeDhGroupExchangeReplyReceived_43() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___KeyExchangeDhGroupExchangeReplyReceived_43)); }
	inline EventHandler_1_t3564756314 * get_KeyExchangeDhGroupExchangeReplyReceived_43() const { return ___KeyExchangeDhGroupExchangeReplyReceived_43; }
	inline EventHandler_1_t3564756314 ** get_address_of_KeyExchangeDhGroupExchangeReplyReceived_43() { return &___KeyExchangeDhGroupExchangeReplyReceived_43; }
	inline void set_KeyExchangeDhGroupExchangeReplyReceived_43(EventHandler_1_t3564756314 * value)
	{
		___KeyExchangeDhGroupExchangeReplyReceived_43 = value;
		Il2CppCodeGenWriteBarrier((&___KeyExchangeDhGroupExchangeReplyReceived_43), value);
	}

	inline static int32_t get_offset_of_DisconnectReceived_44() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___DisconnectReceived_44)); }
	inline EventHandler_1_t4195807482 * get_DisconnectReceived_44() const { return ___DisconnectReceived_44; }
	inline EventHandler_1_t4195807482 ** get_address_of_DisconnectReceived_44() { return &___DisconnectReceived_44; }
	inline void set_DisconnectReceived_44(EventHandler_1_t4195807482 * value)
	{
		___DisconnectReceived_44 = value;
		Il2CppCodeGenWriteBarrier((&___DisconnectReceived_44), value);
	}

	inline static int32_t get_offset_of_IgnoreReceived_45() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___IgnoreReceived_45)); }
	inline EventHandler_1_t2588371645 * get_IgnoreReceived_45() const { return ___IgnoreReceived_45; }
	inline EventHandler_1_t2588371645 ** get_address_of_IgnoreReceived_45() { return &___IgnoreReceived_45; }
	inline void set_IgnoreReceived_45(EventHandler_1_t2588371645 * value)
	{
		___IgnoreReceived_45 = value;
		Il2CppCodeGenWriteBarrier((&___IgnoreReceived_45), value);
	}

	inline static int32_t get_offset_of_UnimplementedReceived_46() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___UnimplementedReceived_46)); }
	inline EventHandler_1_t2736217196 * get_UnimplementedReceived_46() const { return ___UnimplementedReceived_46; }
	inline EventHandler_1_t2736217196 ** get_address_of_UnimplementedReceived_46() { return &___UnimplementedReceived_46; }
	inline void set_UnimplementedReceived_46(EventHandler_1_t2736217196 * value)
	{
		___UnimplementedReceived_46 = value;
		Il2CppCodeGenWriteBarrier((&___UnimplementedReceived_46), value);
	}

	inline static int32_t get_offset_of_DebugReceived_47() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___DebugReceived_47)); }
	inline EventHandler_1_t1238772795 * get_DebugReceived_47() const { return ___DebugReceived_47; }
	inline EventHandler_1_t1238772795 ** get_address_of_DebugReceived_47() { return &___DebugReceived_47; }
	inline void set_DebugReceived_47(EventHandler_1_t1238772795 * value)
	{
		___DebugReceived_47 = value;
		Il2CppCodeGenWriteBarrier((&___DebugReceived_47), value);
	}

	inline static int32_t get_offset_of_ServiceRequestReceived_48() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ServiceRequestReceived_48)); }
	inline EventHandler_1_t3476636320 * get_ServiceRequestReceived_48() const { return ___ServiceRequestReceived_48; }
	inline EventHandler_1_t3476636320 ** get_address_of_ServiceRequestReceived_48() { return &___ServiceRequestReceived_48; }
	inline void set_ServiceRequestReceived_48(EventHandler_1_t3476636320 * value)
	{
		___ServiceRequestReceived_48 = value;
		Il2CppCodeGenWriteBarrier((&___ServiceRequestReceived_48), value);
	}

	inline static int32_t get_offset_of_ServiceAcceptReceived_49() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ServiceAcceptReceived_49)); }
	inline EventHandler_1_t907753177 * get_ServiceAcceptReceived_49() const { return ___ServiceAcceptReceived_49; }
	inline EventHandler_1_t907753177 ** get_address_of_ServiceAcceptReceived_49() { return &___ServiceAcceptReceived_49; }
	inline void set_ServiceAcceptReceived_49(EventHandler_1_t907753177 * value)
	{
		___ServiceAcceptReceived_49 = value;
		Il2CppCodeGenWriteBarrier((&___ServiceAcceptReceived_49), value);
	}

	inline static int32_t get_offset_of_KeyExchangeInitReceived_50() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___KeyExchangeInitReceived_50)); }
	inline EventHandler_1_t3908456087 * get_KeyExchangeInitReceived_50() const { return ___KeyExchangeInitReceived_50; }
	inline EventHandler_1_t3908456087 ** get_address_of_KeyExchangeInitReceived_50() { return &___KeyExchangeInitReceived_50; }
	inline void set_KeyExchangeInitReceived_50(EventHandler_1_t3908456087 * value)
	{
		___KeyExchangeInitReceived_50 = value;
		Il2CppCodeGenWriteBarrier((&___KeyExchangeInitReceived_50), value);
	}

	inline static int32_t get_offset_of_KeyExchangeDhReplyMessageReceived_51() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___KeyExchangeDhReplyMessageReceived_51)); }
	inline EventHandler_1_t1037060180 * get_KeyExchangeDhReplyMessageReceived_51() const { return ___KeyExchangeDhReplyMessageReceived_51; }
	inline EventHandler_1_t1037060180 ** get_address_of_KeyExchangeDhReplyMessageReceived_51() { return &___KeyExchangeDhReplyMessageReceived_51; }
	inline void set_KeyExchangeDhReplyMessageReceived_51(EventHandler_1_t1037060180 * value)
	{
		___KeyExchangeDhReplyMessageReceived_51 = value;
		Il2CppCodeGenWriteBarrier((&___KeyExchangeDhReplyMessageReceived_51), value);
	}

	inline static int32_t get_offset_of_NewKeysReceived_52() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___NewKeysReceived_52)); }
	inline EventHandler_1_t4183171761 * get_NewKeysReceived_52() const { return ___NewKeysReceived_52; }
	inline EventHandler_1_t4183171761 ** get_address_of_NewKeysReceived_52() { return &___NewKeysReceived_52; }
	inline void set_NewKeysReceived_52(EventHandler_1_t4183171761 * value)
	{
		___NewKeysReceived_52 = value;
		Il2CppCodeGenWriteBarrier((&___NewKeysReceived_52), value);
	}

	inline static int32_t get_offset_of_UserAuthenticationFailureReceived_53() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___UserAuthenticationFailureReceived_53)); }
	inline EventHandler_1_t459953110 * get_UserAuthenticationFailureReceived_53() const { return ___UserAuthenticationFailureReceived_53; }
	inline EventHandler_1_t459953110 ** get_address_of_UserAuthenticationFailureReceived_53() { return &___UserAuthenticationFailureReceived_53; }
	inline void set_UserAuthenticationFailureReceived_53(EventHandler_1_t459953110 * value)
	{
		___UserAuthenticationFailureReceived_53 = value;
		Il2CppCodeGenWriteBarrier((&___UserAuthenticationFailureReceived_53), value);
	}

	inline static int32_t get_offset_of_UserAuthenticationSuccessReceived_54() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___UserAuthenticationSuccessReceived_54)); }
	inline EventHandler_1_t504556080 * get_UserAuthenticationSuccessReceived_54() const { return ___UserAuthenticationSuccessReceived_54; }
	inline EventHandler_1_t504556080 ** get_address_of_UserAuthenticationSuccessReceived_54() { return &___UserAuthenticationSuccessReceived_54; }
	inline void set_UserAuthenticationSuccessReceived_54(EventHandler_1_t504556080 * value)
	{
		___UserAuthenticationSuccessReceived_54 = value;
		Il2CppCodeGenWriteBarrier((&___UserAuthenticationSuccessReceived_54), value);
	}

	inline static int32_t get_offset_of_GlobalRequestReceived_55() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___GlobalRequestReceived_55)); }
	inline EventHandler_1_t3405466250 * get_GlobalRequestReceived_55() const { return ___GlobalRequestReceived_55; }
	inline EventHandler_1_t3405466250 ** get_address_of_GlobalRequestReceived_55() { return &___GlobalRequestReceived_55; }
	inline void set_GlobalRequestReceived_55(EventHandler_1_t3405466250 * value)
	{
		___GlobalRequestReceived_55 = value;
		Il2CppCodeGenWriteBarrier((&___GlobalRequestReceived_55), value);
	}

	inline static int32_t get_offset_of_RequestSuccessReceived_56() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___RequestSuccessReceived_56)); }
	inline EventHandler_1_t1483246682 * get_RequestSuccessReceived_56() const { return ___RequestSuccessReceived_56; }
	inline EventHandler_1_t1483246682 ** get_address_of_RequestSuccessReceived_56() { return &___RequestSuccessReceived_56; }
	inline void set_RequestSuccessReceived_56(EventHandler_1_t1483246682 * value)
	{
		___RequestSuccessReceived_56 = value;
		Il2CppCodeGenWriteBarrier((&___RequestSuccessReceived_56), value);
	}

	inline static int32_t get_offset_of_RequestFailureReceived_57() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___RequestFailureReceived_57)); }
	inline EventHandler_1_t4091015931 * get_RequestFailureReceived_57() const { return ___RequestFailureReceived_57; }
	inline EventHandler_1_t4091015931 ** get_address_of_RequestFailureReceived_57() { return &___RequestFailureReceived_57; }
	inline void set_RequestFailureReceived_57(EventHandler_1_t4091015931 * value)
	{
		___RequestFailureReceived_57 = value;
		Il2CppCodeGenWriteBarrier((&___RequestFailureReceived_57), value);
	}

	inline static int32_t get_offset_of_ChannelOpenReceived_58() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelOpenReceived_58)); }
	inline EventHandler_1_t732887962 * get_ChannelOpenReceived_58() const { return ___ChannelOpenReceived_58; }
	inline EventHandler_1_t732887962 ** get_address_of_ChannelOpenReceived_58() { return &___ChannelOpenReceived_58; }
	inline void set_ChannelOpenReceived_58(EventHandler_1_t732887962 * value)
	{
		___ChannelOpenReceived_58 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelOpenReceived_58), value);
	}

	inline static int32_t get_offset_of_ChannelOpenConfirmationReceived_59() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelOpenConfirmationReceived_59)); }
	inline EventHandler_1_t551480030 * get_ChannelOpenConfirmationReceived_59() const { return ___ChannelOpenConfirmationReceived_59; }
	inline EventHandler_1_t551480030 ** get_address_of_ChannelOpenConfirmationReceived_59() { return &___ChannelOpenConfirmationReceived_59; }
	inline void set_ChannelOpenConfirmationReceived_59(EventHandler_1_t551480030 * value)
	{
		___ChannelOpenConfirmationReceived_59 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelOpenConfirmationReceived_59), value);
	}

	inline static int32_t get_offset_of_ChannelOpenFailureReceived_60() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelOpenFailureReceived_60)); }
	inline EventHandler_1_t398831769 * get_ChannelOpenFailureReceived_60() const { return ___ChannelOpenFailureReceived_60; }
	inline EventHandler_1_t398831769 ** get_address_of_ChannelOpenFailureReceived_60() { return &___ChannelOpenFailureReceived_60; }
	inline void set_ChannelOpenFailureReceived_60(EventHandler_1_t398831769 * value)
	{
		___ChannelOpenFailureReceived_60 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelOpenFailureReceived_60), value);
	}

	inline static int32_t get_offset_of_ChannelWindowAdjustReceived_61() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelWindowAdjustReceived_61)); }
	inline EventHandler_1_t4090593379 * get_ChannelWindowAdjustReceived_61() const { return ___ChannelWindowAdjustReceived_61; }
	inline EventHandler_1_t4090593379 ** get_address_of_ChannelWindowAdjustReceived_61() { return &___ChannelWindowAdjustReceived_61; }
	inline void set_ChannelWindowAdjustReceived_61(EventHandler_1_t4090593379 * value)
	{
		___ChannelWindowAdjustReceived_61 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelWindowAdjustReceived_61), value);
	}

	inline static int32_t get_offset_of_ChannelDataReceived_62() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelDataReceived_62)); }
	inline EventHandler_1_t3574331344 * get_ChannelDataReceived_62() const { return ___ChannelDataReceived_62; }
	inline EventHandler_1_t3574331344 ** get_address_of_ChannelDataReceived_62() { return &___ChannelDataReceived_62; }
	inline void set_ChannelDataReceived_62(EventHandler_1_t3574331344 * value)
	{
		___ChannelDataReceived_62 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelDataReceived_62), value);
	}

	inline static int32_t get_offset_of_ChannelExtendedDataReceived_63() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelExtendedDataReceived_63)); }
	inline EventHandler_1_t120493918 * get_ChannelExtendedDataReceived_63() const { return ___ChannelExtendedDataReceived_63; }
	inline EventHandler_1_t120493918 ** get_address_of_ChannelExtendedDataReceived_63() { return &___ChannelExtendedDataReceived_63; }
	inline void set_ChannelExtendedDataReceived_63(EventHandler_1_t120493918 * value)
	{
		___ChannelExtendedDataReceived_63 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelExtendedDataReceived_63), value);
	}

	inline static int32_t get_offset_of_ChannelEofReceived_64() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelEofReceived_64)); }
	inline EventHandler_1_t3119931633 * get_ChannelEofReceived_64() const { return ___ChannelEofReceived_64; }
	inline EventHandler_1_t3119931633 ** get_address_of_ChannelEofReceived_64() { return &___ChannelEofReceived_64; }
	inline void set_ChannelEofReceived_64(EventHandler_1_t3119931633 * value)
	{
		___ChannelEofReceived_64 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelEofReceived_64), value);
	}

	inline static int32_t get_offset_of_ChannelCloseReceived_65() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelCloseReceived_65)); }
	inline EventHandler_1_t3672438206 * get_ChannelCloseReceived_65() const { return ___ChannelCloseReceived_65; }
	inline EventHandler_1_t3672438206 ** get_address_of_ChannelCloseReceived_65() { return &___ChannelCloseReceived_65; }
	inline void set_ChannelCloseReceived_65(EventHandler_1_t3672438206 * value)
	{
		___ChannelCloseReceived_65 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelCloseReceived_65), value);
	}

	inline static int32_t get_offset_of_ChannelRequestReceived_66() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelRequestReceived_66)); }
	inline EventHandler_1_t4025276706 * get_ChannelRequestReceived_66() const { return ___ChannelRequestReceived_66; }
	inline EventHandler_1_t4025276706 ** get_address_of_ChannelRequestReceived_66() { return &___ChannelRequestReceived_66; }
	inline void set_ChannelRequestReceived_66(EventHandler_1_t4025276706 * value)
	{
		___ChannelRequestReceived_66 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelRequestReceived_66), value);
	}

	inline static int32_t get_offset_of_ChannelSuccessReceived_67() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelSuccessReceived_67)); }
	inline EventHandler_1_t4006882104 * get_ChannelSuccessReceived_67() const { return ___ChannelSuccessReceived_67; }
	inline EventHandler_1_t4006882104 ** get_address_of_ChannelSuccessReceived_67() { return &___ChannelSuccessReceived_67; }
	inline void set_ChannelSuccessReceived_67(EventHandler_1_t4006882104 * value)
	{
		___ChannelSuccessReceived_67 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelSuccessReceived_67), value);
	}

	inline static int32_t get_offset_of_ChannelFailureReceived_68() { return static_cast<int32_t>(offsetof(Session_t2648700758, ___ChannelFailureReceived_68)); }
	inline EventHandler_1_t3615945722 * get_ChannelFailureReceived_68() const { return ___ChannelFailureReceived_68; }
	inline EventHandler_1_t3615945722 ** get_address_of_ChannelFailureReceived_68() { return &___ChannelFailureReceived_68; }
	inline void set_ChannelFailureReceived_68(EventHandler_1_t3615945722 * value)
	{
		___ChannelFailureReceived_68 = value;
		Il2CppCodeGenWriteBarrier((&___ChannelFailureReceived_68), value);
	}

	inline static int32_t get_offset_of__disposed_69() { return static_cast<int32_t>(offsetof(Session_t2648700758, ____disposed_69)); }
	inline bool get__disposed_69() const { return ____disposed_69; }
	inline bool* get_address_of__disposed_69() { return &____disposed_69; }
	inline void set__disposed_69(bool value)
	{
		____disposed_69 = value;
	}
};

struct Session_t2648700758_StaticFields
{
public:
	// System.TimeSpan Renci.SshNet.Session::InfiniteTimeSpan
	TimeSpan_t881159249  ___InfiniteTimeSpan_0;
	// System.Int32 Renci.SshNet.Session::Infinite
	int32_t ___Infinite_1;
	// System.Text.RegularExpressions.Regex Renci.SshNet.Session::ServerVersionRe
	Regex_t3657309853 * ___ServerVersionRe_2;
	// Renci.SshNet.Common.SemaphoreLight Renci.SshNet.Session::AuthenticationConnection
	SemaphoreLight_t4163090541 * ___AuthenticationConnection_3;

public:
	inline static int32_t get_offset_of_InfiniteTimeSpan_0() { return static_cast<int32_t>(offsetof(Session_t2648700758_StaticFields, ___InfiniteTimeSpan_0)); }
	inline TimeSpan_t881159249  get_InfiniteTimeSpan_0() const { return ___InfiniteTimeSpan_0; }
	inline TimeSpan_t881159249 * get_address_of_InfiniteTimeSpan_0() { return &___InfiniteTimeSpan_0; }
	inline void set_InfiniteTimeSpan_0(TimeSpan_t881159249  value)
	{
		___InfiniteTimeSpan_0 = value;
	}

	inline static int32_t get_offset_of_Infinite_1() { return static_cast<int32_t>(offsetof(Session_t2648700758_StaticFields, ___Infinite_1)); }
	inline int32_t get_Infinite_1() const { return ___Infinite_1; }
	inline int32_t* get_address_of_Infinite_1() { return &___Infinite_1; }
	inline void set_Infinite_1(int32_t value)
	{
		___Infinite_1 = value;
	}

	inline static int32_t get_offset_of_ServerVersionRe_2() { return static_cast<int32_t>(offsetof(Session_t2648700758_StaticFields, ___ServerVersionRe_2)); }
	inline Regex_t3657309853 * get_ServerVersionRe_2() const { return ___ServerVersionRe_2; }
	inline Regex_t3657309853 ** get_address_of_ServerVersionRe_2() { return &___ServerVersionRe_2; }
	inline void set_ServerVersionRe_2(Regex_t3657309853 * value)
	{
		___ServerVersionRe_2 = value;
		Il2CppCodeGenWriteBarrier((&___ServerVersionRe_2), value);
	}

	inline static int32_t get_offset_of_AuthenticationConnection_3() { return static_cast<int32_t>(offsetof(Session_t2648700758_StaticFields, ___AuthenticationConnection_3)); }
	inline SemaphoreLight_t4163090541 * get_AuthenticationConnection_3() const { return ___AuthenticationConnection_3; }
	inline SemaphoreLight_t4163090541 ** get_address_of_AuthenticationConnection_3() { return &___AuthenticationConnection_3; }
	inline void set_AuthenticationConnection_3(SemaphoreLight_t4163090541 * value)
	{
		___AuthenticationConnection_3 = value;
		Il2CppCodeGenWriteBarrier((&___AuthenticationConnection_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSION_T2648700758_H
#ifndef SSHCONNECTIONEXCEPTION_T3734221110_H
#define SSHCONNECTIONEXCEPTION_T3734221110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.SshConnectionException
struct  SshConnectionException_t3734221110  : public SshException_t1435741398
{
public:
	// Renci.SshNet.Messages.Transport.DisconnectReason Renci.SshNet.Common.SshConnectionException::<DisconnectReason>k__BackingField
	int32_t ___U3CDisconnectReasonU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CDisconnectReasonU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SshConnectionException_t3734221110, ___U3CDisconnectReasonU3Ek__BackingField_17)); }
	inline int32_t get_U3CDisconnectReasonU3Ek__BackingField_17() const { return ___U3CDisconnectReasonU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CDisconnectReasonU3Ek__BackingField_17() { return &___U3CDisconnectReasonU3Ek__BackingField_17; }
	inline void set_U3CDisconnectReasonU3Ek__BackingField_17(int32_t value)
	{
		___U3CDisconnectReasonU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHCONNECTIONEXCEPTION_T3734221110_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
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
#ifndef CHANNELFAILUREMESSAGE_T1527543386_H
#define CHANNELFAILUREMESSAGE_T1527543386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelFailureMessage
struct  ChannelFailureMessage_t1527543386  : public ChannelMessage_t2504225348
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELFAILUREMESSAGE_T1527543386_H
#ifndef CHANNELEXTENDEDDATAEVENTARGS_T4290060220_H
#define CHANNELEXTENDEDDATAEVENTARGS_T4290060220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ChannelExtendedDataEventArgs
struct  ChannelExtendedDataEventArgs_t4290060220  : public ChannelDataEventArgs_t1617664455
{
public:
	// System.UInt32 Renci.SshNet.Common.ChannelExtendedDataEventArgs::<DataTypeCode>k__BackingField
	uint32_t ___U3CDataTypeCodeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CDataTypeCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChannelExtendedDataEventArgs_t4290060220, ___U3CDataTypeCodeU3Ek__BackingField_3)); }
	inline uint32_t get_U3CDataTypeCodeU3Ek__BackingField_3() const { return ___U3CDataTypeCodeU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CDataTypeCodeU3Ek__BackingField_3() { return &___U3CDataTypeCodeU3Ek__BackingField_3; }
	inline void set_U3CDataTypeCodeU3Ek__BackingField_3(uint32_t value)
	{
		___U3CDataTypeCodeU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELEXTENDEDDATAEVENTARGS_T4290060220_H
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
#ifndef CHANNELSUCCESSMESSAGE_T1918479768_H
#define CHANNELSUCCESSMESSAGE_T1918479768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelSuccessMessage
struct  ChannelSuccessMessage_t1918479768  : public ChannelMessage_t2504225348
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSUCCESSMESSAGE_T1918479768_H
#ifndef CONNECTIONINFO_T2762416072_H
#define CONNECTIONINFO_T2762416072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.ConnectionInfo
struct  ConnectionInfo_t2762416072  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Type> Renci.SshNet.ConnectionInfo::<KeyExchangeAlgorithms>k__BackingField
	RuntimeObject* ___U3CKeyExchangeAlgorithmsU3Ek__BackingField_1;
	// System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.CipherInfo> Renci.SshNet.ConnectionInfo::<Encryptions>k__BackingField
	RuntimeObject* ___U3CEncryptionsU3Ek__BackingField_2;
	// System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.HashInfo> Renci.SshNet.ConnectionInfo::<HmacAlgorithms>k__BackingField
	RuntimeObject* ___U3CHmacAlgorithmsU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.Func`2<System.Byte[],Renci.SshNet.Security.KeyHostAlgorithm>> Renci.SshNet.ConnectionInfo::<HostKeyAlgorithms>k__BackingField
	RuntimeObject* ___U3CHostKeyAlgorithmsU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Renci.SshNet.AuthenticationMethod> Renci.SshNet.ConnectionInfo::<AuthenticationMethods>k__BackingField
	RuntimeObject* ___U3CAuthenticationMethodsU3Ek__BackingField_5;
	// System.Collections.Generic.IDictionary`2<System.String,System.Type> Renci.SshNet.ConnectionInfo::<CompressionAlgorithms>k__BackingField
	RuntimeObject* ___U3CCompressionAlgorithmsU3Ek__BackingField_6;
	// System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.Messages.Connection.RequestInfo> Renci.SshNet.ConnectionInfo::<ChannelRequests>k__BackingField
	RuntimeObject* ___U3CChannelRequestsU3Ek__BackingField_7;
	// System.Boolean Renci.SshNet.ConnectionInfo::<IsAuthenticated>k__BackingField
	bool ___U3CIsAuthenticatedU3Ek__BackingField_8;
	// System.String Renci.SshNet.ConnectionInfo::<Host>k__BackingField
	String_t* ___U3CHostU3Ek__BackingField_9;
	// System.Int32 Renci.SshNet.ConnectionInfo::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_10;
	// System.String Renci.SshNet.ConnectionInfo::<Username>k__BackingField
	String_t* ___U3CUsernameU3Ek__BackingField_11;
	// Renci.SshNet.ProxyTypes Renci.SshNet.ConnectionInfo::<ProxyType>k__BackingField
	int32_t ___U3CProxyTypeU3Ek__BackingField_12;
	// System.String Renci.SshNet.ConnectionInfo::<ProxyHost>k__BackingField
	String_t* ___U3CProxyHostU3Ek__BackingField_13;
	// System.Int32 Renci.SshNet.ConnectionInfo::<ProxyPort>k__BackingField
	int32_t ___U3CProxyPortU3Ek__BackingField_14;
	// System.String Renci.SshNet.ConnectionInfo::<ProxyUsername>k__BackingField
	String_t* ___U3CProxyUsernameU3Ek__BackingField_15;
	// System.String Renci.SshNet.ConnectionInfo::<ProxyPassword>k__BackingField
	String_t* ___U3CProxyPasswordU3Ek__BackingField_16;
	// System.TimeSpan Renci.SshNet.ConnectionInfo::<Timeout>k__BackingField
	TimeSpan_t881159249  ___U3CTimeoutU3Ek__BackingField_17;
	// System.Text.Encoding Renci.SshNet.ConnectionInfo::<Encoding>k__BackingField
	Encoding_t1523322056 * ___U3CEncodingU3Ek__BackingField_18;
	// System.Int32 Renci.SshNet.ConnectionInfo::<RetryAttempts>k__BackingField
	int32_t ___U3CRetryAttemptsU3Ek__BackingField_19;
	// System.Int32 Renci.SshNet.ConnectionInfo::<MaxSessions>k__BackingField
	int32_t ___U3CMaxSessionsU3Ek__BackingField_20;
	// System.EventHandler`1<Renci.SshNet.Common.AuthenticationBannerEventArgs> Renci.SshNet.ConnectionInfo::AuthenticationBanner
	EventHandler_1_t3897342073 * ___AuthenticationBanner_21;
	// System.String Renci.SshNet.ConnectionInfo::<CurrentKeyExchangeAlgorithm>k__BackingField
	String_t* ___U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22;
	// System.String Renci.SshNet.ConnectionInfo::<CurrentServerEncryption>k__BackingField
	String_t* ___U3CCurrentServerEncryptionU3Ek__BackingField_23;
	// System.String Renci.SshNet.ConnectionInfo::<CurrentClientEncryption>k__BackingField
	String_t* ___U3CCurrentClientEncryptionU3Ek__BackingField_24;
	// System.String Renci.SshNet.ConnectionInfo::<CurrentServerHmacAlgorithm>k__BackingField
	String_t* ___U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25;
	// System.String Renci.SshNet.ConnectionInfo::<CurrentClientHmacAlgorithm>k__BackingField
	String_t* ___U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26;
	// System.String Renci.SshNet.ConnectionInfo::<CurrentHostKeyAlgorithm>k__BackingField
	String_t* ___U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27;
	// System.String Renci.SshNet.ConnectionInfo::<CurrentServerCompressionAlgorithm>k__BackingField
	String_t* ___U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28;
	// System.String Renci.SshNet.ConnectionInfo::<ServerVersion>k__BackingField
	String_t* ___U3CServerVersionU3Ek__BackingField_29;
	// System.String Renci.SshNet.ConnectionInfo::<ClientVersion>k__BackingField
	String_t* ___U3CClientVersionU3Ek__BackingField_30;
	// System.String Renci.SshNet.ConnectionInfo::<CurrentClientCompressionAlgorithm>k__BackingField
	String_t* ___U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of_U3CKeyExchangeAlgorithmsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CKeyExchangeAlgorithmsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CKeyExchangeAlgorithmsU3Ek__BackingField_1() const { return ___U3CKeyExchangeAlgorithmsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CKeyExchangeAlgorithmsU3Ek__BackingField_1() { return &___U3CKeyExchangeAlgorithmsU3Ek__BackingField_1; }
	inline void set_U3CKeyExchangeAlgorithmsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CKeyExchangeAlgorithmsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CKeyExchangeAlgorithmsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CEncryptionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CEncryptionsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEncryptionsU3Ek__BackingField_2() const { return ___U3CEncryptionsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEncryptionsU3Ek__BackingField_2() { return &___U3CEncryptionsU3Ek__BackingField_2; }
	inline void set_U3CEncryptionsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEncryptionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncryptionsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CHmacAlgorithmsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CHmacAlgorithmsU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CHmacAlgorithmsU3Ek__BackingField_3() const { return ___U3CHmacAlgorithmsU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CHmacAlgorithmsU3Ek__BackingField_3() { return &___U3CHmacAlgorithmsU3Ek__BackingField_3; }
	inline void set_U3CHmacAlgorithmsU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CHmacAlgorithmsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHmacAlgorithmsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CHostKeyAlgorithmsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CHostKeyAlgorithmsU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CHostKeyAlgorithmsU3Ek__BackingField_4() const { return ___U3CHostKeyAlgorithmsU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CHostKeyAlgorithmsU3Ek__BackingField_4() { return &___U3CHostKeyAlgorithmsU3Ek__BackingField_4; }
	inline void set_U3CHostKeyAlgorithmsU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CHostKeyAlgorithmsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHostKeyAlgorithmsU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CAuthenticationMethodsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CAuthenticationMethodsU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CAuthenticationMethodsU3Ek__BackingField_5() const { return ___U3CAuthenticationMethodsU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CAuthenticationMethodsU3Ek__BackingField_5() { return &___U3CAuthenticationMethodsU3Ek__BackingField_5; }
	inline void set_U3CAuthenticationMethodsU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CAuthenticationMethodsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthenticationMethodsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CCompressionAlgorithmsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCompressionAlgorithmsU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CCompressionAlgorithmsU3Ek__BackingField_6() const { return ___U3CCompressionAlgorithmsU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CCompressionAlgorithmsU3Ek__BackingField_6() { return &___U3CCompressionAlgorithmsU3Ek__BackingField_6; }
	inline void set_U3CCompressionAlgorithmsU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CCompressionAlgorithmsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCompressionAlgorithmsU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CChannelRequestsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CChannelRequestsU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CChannelRequestsU3Ek__BackingField_7() const { return ___U3CChannelRequestsU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CChannelRequestsU3Ek__BackingField_7() { return &___U3CChannelRequestsU3Ek__BackingField_7; }
	inline void set_U3CChannelRequestsU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CChannelRequestsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CChannelRequestsU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CIsAuthenticatedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CIsAuthenticatedU3Ek__BackingField_8)); }
	inline bool get_U3CIsAuthenticatedU3Ek__BackingField_8() const { return ___U3CIsAuthenticatedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsAuthenticatedU3Ek__BackingField_8() { return &___U3CIsAuthenticatedU3Ek__BackingField_8; }
	inline void set_U3CIsAuthenticatedU3Ek__BackingField_8(bool value)
	{
		___U3CIsAuthenticatedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CHostU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CHostU3Ek__BackingField_9)); }
	inline String_t* get_U3CHostU3Ek__BackingField_9() const { return ___U3CHostU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CHostU3Ek__BackingField_9() { return &___U3CHostU3Ek__BackingField_9; }
	inline void set_U3CHostU3Ek__BackingField_9(String_t* value)
	{
		___U3CHostU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHostU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CPortU3Ek__BackingField_10)); }
	inline int32_t get_U3CPortU3Ek__BackingField_10() const { return ___U3CPortU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_10() { return &___U3CPortU3Ek__BackingField_10; }
	inline void set_U3CPortU3Ek__BackingField_10(int32_t value)
	{
		___U3CPortU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CUsernameU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CUsernameU3Ek__BackingField_11)); }
	inline String_t* get_U3CUsernameU3Ek__BackingField_11() const { return ___U3CUsernameU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CUsernameU3Ek__BackingField_11() { return &___U3CUsernameU3Ek__BackingField_11; }
	inline void set_U3CUsernameU3Ek__BackingField_11(String_t* value)
	{
		___U3CUsernameU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUsernameU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CProxyTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CProxyTypeU3Ek__BackingField_12)); }
	inline int32_t get_U3CProxyTypeU3Ek__BackingField_12() const { return ___U3CProxyTypeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CProxyTypeU3Ek__BackingField_12() { return &___U3CProxyTypeU3Ek__BackingField_12; }
	inline void set_U3CProxyTypeU3Ek__BackingField_12(int32_t value)
	{
		___U3CProxyTypeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CProxyHostU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CProxyHostU3Ek__BackingField_13)); }
	inline String_t* get_U3CProxyHostU3Ek__BackingField_13() const { return ___U3CProxyHostU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CProxyHostU3Ek__BackingField_13() { return &___U3CProxyHostU3Ek__BackingField_13; }
	inline void set_U3CProxyHostU3Ek__BackingField_13(String_t* value)
	{
		___U3CProxyHostU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CProxyHostU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CProxyPortU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CProxyPortU3Ek__BackingField_14)); }
	inline int32_t get_U3CProxyPortU3Ek__BackingField_14() const { return ___U3CProxyPortU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CProxyPortU3Ek__BackingField_14() { return &___U3CProxyPortU3Ek__BackingField_14; }
	inline void set_U3CProxyPortU3Ek__BackingField_14(int32_t value)
	{
		___U3CProxyPortU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CProxyUsernameU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CProxyUsernameU3Ek__BackingField_15)); }
	inline String_t* get_U3CProxyUsernameU3Ek__BackingField_15() const { return ___U3CProxyUsernameU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CProxyUsernameU3Ek__BackingField_15() { return &___U3CProxyUsernameU3Ek__BackingField_15; }
	inline void set_U3CProxyUsernameU3Ek__BackingField_15(String_t* value)
	{
		___U3CProxyUsernameU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CProxyUsernameU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CProxyPasswordU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CProxyPasswordU3Ek__BackingField_16)); }
	inline String_t* get_U3CProxyPasswordU3Ek__BackingField_16() const { return ___U3CProxyPasswordU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CProxyPasswordU3Ek__BackingField_16() { return &___U3CProxyPasswordU3Ek__BackingField_16; }
	inline void set_U3CProxyPasswordU3Ek__BackingField_16(String_t* value)
	{
		___U3CProxyPasswordU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CProxyPasswordU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CTimeoutU3Ek__BackingField_17)); }
	inline TimeSpan_t881159249  get_U3CTimeoutU3Ek__BackingField_17() const { return ___U3CTimeoutU3Ek__BackingField_17; }
	inline TimeSpan_t881159249 * get_address_of_U3CTimeoutU3Ek__BackingField_17() { return &___U3CTimeoutU3Ek__BackingField_17; }
	inline void set_U3CTimeoutU3Ek__BackingField_17(TimeSpan_t881159249  value)
	{
		___U3CTimeoutU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CEncodingU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CEncodingU3Ek__BackingField_18)); }
	inline Encoding_t1523322056 * get_U3CEncodingU3Ek__BackingField_18() const { return ___U3CEncodingU3Ek__BackingField_18; }
	inline Encoding_t1523322056 ** get_address_of_U3CEncodingU3Ek__BackingField_18() { return &___U3CEncodingU3Ek__BackingField_18; }
	inline void set_U3CEncodingU3Ek__BackingField_18(Encoding_t1523322056 * value)
	{
		___U3CEncodingU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncodingU3Ek__BackingField_18), value);
	}

	inline static int32_t get_offset_of_U3CRetryAttemptsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CRetryAttemptsU3Ek__BackingField_19)); }
	inline int32_t get_U3CRetryAttemptsU3Ek__BackingField_19() const { return ___U3CRetryAttemptsU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CRetryAttemptsU3Ek__BackingField_19() { return &___U3CRetryAttemptsU3Ek__BackingField_19; }
	inline void set_U3CRetryAttemptsU3Ek__BackingField_19(int32_t value)
	{
		___U3CRetryAttemptsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSessionsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CMaxSessionsU3Ek__BackingField_20)); }
	inline int32_t get_U3CMaxSessionsU3Ek__BackingField_20() const { return ___U3CMaxSessionsU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CMaxSessionsU3Ek__BackingField_20() { return &___U3CMaxSessionsU3Ek__BackingField_20; }
	inline void set_U3CMaxSessionsU3Ek__BackingField_20(int32_t value)
	{
		___U3CMaxSessionsU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_AuthenticationBanner_21() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___AuthenticationBanner_21)); }
	inline EventHandler_1_t3897342073 * get_AuthenticationBanner_21() const { return ___AuthenticationBanner_21; }
	inline EventHandler_1_t3897342073 ** get_address_of_AuthenticationBanner_21() { return &___AuthenticationBanner_21; }
	inline void set_AuthenticationBanner_21(EventHandler_1_t3897342073 * value)
	{
		___AuthenticationBanner_21 = value;
		Il2CppCodeGenWriteBarrier((&___AuthenticationBanner_21), value);
	}

	inline static int32_t get_offset_of_U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22)); }
	inline String_t* get_U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22() const { return ___U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22() { return &___U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22; }
	inline void set_U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22(String_t* value)
	{
		___U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentKeyExchangeAlgorithmU3Ek__BackingField_22), value);
	}

	inline static int32_t get_offset_of_U3CCurrentServerEncryptionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCurrentServerEncryptionU3Ek__BackingField_23)); }
	inline String_t* get_U3CCurrentServerEncryptionU3Ek__BackingField_23() const { return ___U3CCurrentServerEncryptionU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CCurrentServerEncryptionU3Ek__BackingField_23() { return &___U3CCurrentServerEncryptionU3Ek__BackingField_23; }
	inline void set_U3CCurrentServerEncryptionU3Ek__BackingField_23(String_t* value)
	{
		___U3CCurrentServerEncryptionU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentServerEncryptionU3Ek__BackingField_23), value);
	}

	inline static int32_t get_offset_of_U3CCurrentClientEncryptionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCurrentClientEncryptionU3Ek__BackingField_24)); }
	inline String_t* get_U3CCurrentClientEncryptionU3Ek__BackingField_24() const { return ___U3CCurrentClientEncryptionU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CCurrentClientEncryptionU3Ek__BackingField_24() { return &___U3CCurrentClientEncryptionU3Ek__BackingField_24; }
	inline void set_U3CCurrentClientEncryptionU3Ek__BackingField_24(String_t* value)
	{
		___U3CCurrentClientEncryptionU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentClientEncryptionU3Ek__BackingField_24), value);
	}

	inline static int32_t get_offset_of_U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25)); }
	inline String_t* get_U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25() const { return ___U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25; }
	inline String_t** get_address_of_U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25() { return &___U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25; }
	inline void set_U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25(String_t* value)
	{
		___U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentServerHmacAlgorithmU3Ek__BackingField_25), value);
	}

	inline static int32_t get_offset_of_U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26)); }
	inline String_t* get_U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26() const { return ___U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26() { return &___U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26; }
	inline void set_U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26(String_t* value)
	{
		___U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentClientHmacAlgorithmU3Ek__BackingField_26), value);
	}

	inline static int32_t get_offset_of_U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27)); }
	inline String_t* get_U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27() const { return ___U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27; }
	inline String_t** get_address_of_U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27() { return &___U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27; }
	inline void set_U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27(String_t* value)
	{
		___U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentHostKeyAlgorithmU3Ek__BackingField_27), value);
	}

	inline static int32_t get_offset_of_U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28)); }
	inline String_t* get_U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28() const { return ___U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28; }
	inline String_t** get_address_of_U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28() { return &___U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28; }
	inline void set_U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28(String_t* value)
	{
		___U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentServerCompressionAlgorithmU3Ek__BackingField_28), value);
	}

	inline static int32_t get_offset_of_U3CServerVersionU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CServerVersionU3Ek__BackingField_29)); }
	inline String_t* get_U3CServerVersionU3Ek__BackingField_29() const { return ___U3CServerVersionU3Ek__BackingField_29; }
	inline String_t** get_address_of_U3CServerVersionU3Ek__BackingField_29() { return &___U3CServerVersionU3Ek__BackingField_29; }
	inline void set_U3CServerVersionU3Ek__BackingField_29(String_t* value)
	{
		___U3CServerVersionU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CServerVersionU3Ek__BackingField_29), value);
	}

	inline static int32_t get_offset_of_U3CClientVersionU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CClientVersionU3Ek__BackingField_30)); }
	inline String_t* get_U3CClientVersionU3Ek__BackingField_30() const { return ___U3CClientVersionU3Ek__BackingField_30; }
	inline String_t** get_address_of_U3CClientVersionU3Ek__BackingField_30() { return &___U3CClientVersionU3Ek__BackingField_30; }
	inline void set_U3CClientVersionU3Ek__BackingField_30(String_t* value)
	{
		___U3CClientVersionU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClientVersionU3Ek__BackingField_30), value);
	}

	inline static int32_t get_offset_of_U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072, ___U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31)); }
	inline String_t* get_U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31() const { return ___U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31; }
	inline String_t** get_address_of_U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31() { return &___U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31; }
	inline void set_U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31(String_t* value)
	{
		___U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentClientCompressionAlgorithmU3Ek__BackingField_31), value);
	}
};

struct ConnectionInfo_t2762416072_StaticFields
{
public:
	// System.Int32 Renci.SshNet.ConnectionInfo::DefaultPort
	int32_t ___DefaultPort_0;

public:
	inline static int32_t get_offset_of_DefaultPort_0() { return static_cast<int32_t>(offsetof(ConnectionInfo_t2762416072_StaticFields, ___DefaultPort_0)); }
	inline int32_t get_DefaultPort_0() const { return ___DefaultPort_0; }
	inline int32_t* get_address_of_DefaultPort_0() { return &___DefaultPort_0; }
	inline void set_DefaultPort_0(int32_t value)
	{
		___DefaultPort_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONINFO_T2762416072_H
#ifndef EVENTHANDLER_1_T2214219653_H
#define EVENTHANDLER_1_T2214219653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Renci.SshNet.Common.ChannelExtendedDataEventArgs>
struct  EventHandler_1_t2214219653  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2214219653_H
#ifndef EVENTHANDLER_1_T2424542233_H
#define EVENTHANDLER_1_T2424542233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Renci.SshNet.Common.ChannelRequestEventArgs>
struct  EventHandler_1_t2424542233  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2424542233_H
#ifndef PASSWORDCONNECTIONINFO_T734167810_H
#define PASSWORDCONNECTIONINFO_T734167810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.PasswordConnectionInfo
struct  PasswordConnectionInfo_t734167810  : public ConnectionInfo_t2762416072
{
public:
	// System.EventHandler`1<Renci.SshNet.Common.AuthenticationPasswordChangeEventArgs> Renci.SshNet.PasswordConnectionInfo::PasswordExpired
	EventHandler_1_t3903553156 * ___PasswordExpired_32;
	// System.Boolean Renci.SshNet.PasswordConnectionInfo::_isDisposed
	bool ____isDisposed_33;

public:
	inline static int32_t get_offset_of_PasswordExpired_32() { return static_cast<int32_t>(offsetof(PasswordConnectionInfo_t734167810, ___PasswordExpired_32)); }
	inline EventHandler_1_t3903553156 * get_PasswordExpired_32() const { return ___PasswordExpired_32; }
	inline EventHandler_1_t3903553156 ** get_address_of_PasswordExpired_32() { return &___PasswordExpired_32; }
	inline void set_PasswordExpired_32(EventHandler_1_t3903553156 * value)
	{
		___PasswordExpired_32 = value;
		Il2CppCodeGenWriteBarrier((&___PasswordExpired_32), value);
	}

	inline static int32_t get_offset_of__isDisposed_33() { return static_cast<int32_t>(offsetof(PasswordConnectionInfo_t734167810, ____isDisposed_33)); }
	inline bool get__isDisposed_33() const { return ____isDisposed_33; }
	inline bool* get_address_of__isDisposed_33() { return &____isDisposed_33; }
	inline void set__isDisposed_33(bool value)
	{
		____isDisposed_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDCONNECTIONINFO_T734167810_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef EVENTHANDLER_1_T1715808396_H
#define EVENTHANDLER_1_T1715808396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs>
struct  EventHandler_1_t1715808396  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1715808396_H
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
#ifndef EVENTHANDLER_1_T3836791184_H
#define EVENTHANDLER_1_T3836791184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Renci.SshNet.Common.ChannelDataEventArgs>
struct  EventHandler_1_t3836791184  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T3836791184_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
#ifndef EVENTHANDLER_1_T3115254733_H
#define EVENTHANDLER_1_T3115254733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs>
struct  EventHandler_1_t3115254733  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T3115254733_H
#ifndef SSHCLIENT_T676357105_H
#define SSHCLIENT_T676357105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.SshClient
struct  SshClient_t676357105  : public BaseClient_t304433449
{
public:
	// System.Collections.Generic.List`1<Renci.SshNet.ForwardedPort> Renci.SshNet.SshClient::_forwardedPorts
	List_1_t2106477839 * ____forwardedPorts_10;
	// System.Boolean Renci.SshNet.SshClient::_isDisposed
	bool ____isDisposed_11;
	// System.IO.Stream Renci.SshNet.SshClient::_inputStream
	Stream_t1273022909 * ____inputStream_12;

public:
	inline static int32_t get_offset_of__forwardedPorts_10() { return static_cast<int32_t>(offsetof(SshClient_t676357105, ____forwardedPorts_10)); }
	inline List_1_t2106477839 * get__forwardedPorts_10() const { return ____forwardedPorts_10; }
	inline List_1_t2106477839 ** get_address_of__forwardedPorts_10() { return &____forwardedPorts_10; }
	inline void set__forwardedPorts_10(List_1_t2106477839 * value)
	{
		____forwardedPorts_10 = value;
		Il2CppCodeGenWriteBarrier((&____forwardedPorts_10), value);
	}

	inline static int32_t get_offset_of__isDisposed_11() { return static_cast<int32_t>(offsetof(SshClient_t676357105, ____isDisposed_11)); }
	inline bool get__isDisposed_11() const { return ____isDisposed_11; }
	inline bool* get_address_of__isDisposed_11() { return &____isDisposed_11; }
	inline void set__isDisposed_11(bool value)
	{
		____isDisposed_11 = value;
	}

	inline static int32_t get_offset_of__inputStream_12() { return static_cast<int32_t>(offsetof(SshClient_t676357105, ____inputStream_12)); }
	inline Stream_t1273022909 * get__inputStream_12() const { return ____inputStream_12; }
	inline Stream_t1273022909 ** get_address_of__inputStream_12() { return &____inputStream_12; }
	inline void set__inputStream_12(Stream_t1273022909 * value)
	{
		____inputStream_12 = value;
		Il2CppCodeGenWriteBarrier((&____inputStream_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHCLIENT_T676357105_H
#ifndef AUTORESETEVENT_T1333520283_H
#define AUTORESETEVENT_T1333520283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AutoResetEvent
struct  AutoResetEvent_t1333520283  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESETEVENT_T1333520283_H
#ifndef EVENTHANDLER_1_T1515976428_H
#define EVENTHANDLER_1_T1515976428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<System.EventArgs>
struct  EventHandler_1_t1515976428  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1515976428_H
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
// System.Threading.WaitHandle[]
struct WaitHandleU5BU5D_t96772038  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WaitHandle_t1743403487 * m_Items[1];

public:
	inline WaitHandle_t1743403487 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WaitHandle_t1743403487 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WaitHandle_t1743403487 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline WaitHandle_t1743403487 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WaitHandle_t1743403487 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WaitHandle_t1743403487 * value)
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
// Renci.SshNet.SshMessageFactory/MessageMetadata[]
struct MessageMetadataU5BU5D_t1675896548  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MessageMetadata_t174986905 * m_Items[1];

public:
	inline MessageMetadata_t174986905 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MessageMetadata_t174986905 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MessageMetadata_t174986905 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MessageMetadata_t174986905 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MessageMetadata_t174986905 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MessageMetadata_t174986905 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m816315209_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m337713592_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m699822512_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<System.Object>::.ctor(System.Byte,System.String,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MessageMetadata_1__ctor_m2536260751_gshared (MessageMetadata_1_t4214685129 * __this, uint8_t p0, String_t* p1, uint8_t p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2687535023_gshared (Dictionary_2_t132545152 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void Renci.SshNet.PasswordConnectionInfo::.ctor(System.String,System.Int32,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PasswordConnectionInfo__ctor_m1784404276 (PasswordConnectionInfo_t734167810 * __this, String_t* ___host0, int32_t ___port1, String_t* ___username2, String_t* ___password3, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshClient::.ctor(Renci.SshNet.ConnectionInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SshClient__ctor_m2126859039 (SshClient_t676357105 * __this, ConnectionInfo_t2762416072 * ___connectionInfo0, bool ___ownsConnectionInfo1, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshClient::.ctor(System.String,System.Int32,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SshClient__ctor_m3593962372 (SshClient_t676357105 * __this, String_t* ___host0, int32_t ___port1, String_t* ___username2, String_t* ___password3, const RuntimeMethod* method);
// System.Void Renci.SshNet.ServiceFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ServiceFactory__ctor_m2203084332 (ServiceFactory_t198644780 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshClient::.ctor(Renci.SshNet.ConnectionInfo,System.Boolean,Renci.SshNet.IServiceFactory)
extern "C" IL2CPP_METHOD_ATTR void SshClient__ctor_m1469750933 (SshClient_t676357105 * __this, ConnectionInfo_t2762416072 * ___connectionInfo0, bool ___ownsConnectionInfo1, RuntimeObject* ___serviceFactory2, const RuntimeMethod* method);
// System.Void Renci.SshNet.BaseClient::.ctor(Renci.SshNet.ConnectionInfo,System.Boolean,Renci.SshNet.IServiceFactory)
extern "C" IL2CPP_METHOD_ATTR void BaseClient__ctor_m4180276014 (BaseClient_t304433449 * __this, ConnectionInfo_t2762416072 * ___connectionInfo0, bool ___ownsConnectionInfo1, RuntimeObject* ___serviceFactory2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Renci.SshNet.ForwardedPort>::.ctor()
#define List_1__ctor_m3656078269(__this, method) ((  void (*) (List_1_t2106477839 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void Renci.SshNet.BaseClient::OnDisconnecting()
extern "C" IL2CPP_METHOD_ATTR void BaseClient_OnDisconnecting_m151137673 (BaseClient_t304433449 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Renci.SshNet.ForwardedPort>::GetEnumerator()
#define List_1_GetEnumerator_m930350269(__this, method) ((  Enumerator_t3995721716  (*) (List_1_t2106477839 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Renci.SshNet.ForwardedPort>::get_Current()
#define Enumerator_get_Current_m2803795645(__this, method) ((  ForwardedPort_t634403097 * (*) (Enumerator_t3995721716 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Renci.SshNet.ForwardedPort>::MoveNext()
#define Enumerator_MoveNext_m2296877432(__this, method) ((  bool (*) (Enumerator_t3995721716 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Renci.SshNet.ForwardedPort>::Dispose()
#define Enumerator_Dispose_m1778068822(__this, method) ((  void (*) (Enumerator_t3995721716 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void Renci.SshNet.ForwardedPort::set_Session(Renci.SshNet.ISession)
extern "C" IL2CPP_METHOD_ATTR void ForwardedPort_set_Session_m1338615562 (ForwardedPort_t634403097 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Renci.SshNet.ConnectionInfo Renci.SshNet.BaseClient::get_ConnectionInfo()
extern "C" IL2CPP_METHOD_ATTR ConnectionInfo_t2762416072 * BaseClient_get_ConnectionInfo_m330315758 (BaseClient_t304433449 * __this, const RuntimeMethod* method);
// System.Text.Encoding Renci.SshNet.ConnectionInfo::get_Encoding()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * ConnectionInfo_get_Encoding_m1642141952 (ConnectionInfo_t2762416072 * __this, const RuntimeMethod* method);
// Renci.SshNet.SshCommand Renci.SshNet.SshClient::CreateCommand(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR SshCommand_t2829160041 * SshClient_CreateCommand_m715012094 (SshClient_t676357105 * __this, String_t* ___commandText0, Encoding_t1523322056 * ___encoding1, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshClient::EnsureSessionIsOpen()
extern "C" IL2CPP_METHOD_ATTR void SshClient_EnsureSessionIsOpen_m958514547 (SshClient_t676357105 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.ConnectionInfo::set_Encoding(System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void ConnectionInfo_set_Encoding_m2644619865 (ConnectionInfo_t2762416072 * __this, Encoding_t1523322056 * ___value0, const RuntimeMethod* method);
// Renci.SshNet.ISession Renci.SshNet.BaseClient::get_Session()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_Session_m2910988351 (BaseClient_t304433449 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshCommand::.ctor(Renci.SshNet.ISession,System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void SshCommand__ctor_m3015611216 (SshCommand_t2829160041 * __this, RuntimeObject* ___session0, String_t* ___commandText1, Encoding_t1523322056 * ___encoding2, const RuntimeMethod* method);
// Renci.SshNet.SshCommand Renci.SshNet.SshClient::CreateCommand(System.String)
extern "C" IL2CPP_METHOD_ATTR SshCommand_t2829160041 * SshClient_CreateCommand_m284618937 (SshClient_t676357105 * __this, String_t* ___commandText0, const RuntimeMethod* method);
// System.String Renci.SshNet.SshCommand::Execute()
extern "C" IL2CPP_METHOD_ATTR String_t* SshCommand_Execute_m3732244500 (SshCommand_t2829160041 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.BaseClient::OnDisconnected()
extern "C" IL2CPP_METHOD_ATTR void BaseClient_OnDisconnected_m2839940445 (BaseClient_t304433449 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Renci.SshNet.ForwardedPort>::get_Count()
#define List_1_get_Count_m3750278540(__this, method) ((  int32_t (*) (List_1_t2106477839 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<Renci.SshNet.ForwardedPort>::get_Item(System.Int32)
#define List_1_get_Item_m525849619(__this, p0, method) ((  ForwardedPort_t634403097 * (*) (List_1_t2106477839 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method)
// System.Void Renci.SshNet.SshClient::DetachForwardedPort(Renci.SshNet.ForwardedPort)
extern "C" IL2CPP_METHOD_ATTR void SshClient_DetachForwardedPort_m924137220 (RuntimeObject * __this /* static, unused */, ForwardedPort_t634403097 * ___port0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Renci.SshNet.ForwardedPort>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m1695266239(__this, p0, method) ((  void (*) (List_1_t2106477839 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Void Renci.SshNet.BaseClient::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseClient_Dispose_m4154248368 (BaseClient_t304433449 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Stream_Dispose_m2589290611 (Stream_t1273022909 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.Common.SshConnectionException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SshConnectionException__ctor_m2805476218 (SshConnectionException_t3734221110 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.IO.Stream Renci.SshNet.SshCommand::get_OutputStream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * SshCommand_get_OutputStream_m540101747 (SshCommand_t2829160041 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void StreamReader__ctor_m3941437302 (StreamReader_t4009935899 * __this, Stream_t1273022909 * p0, Encoding_t1523322056 * p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshCommand::set_CommandText(System.String)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_CommandText_m1121507967 (SshCommand_t2829160041 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshCommand::set_CommandTimeout(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_CommandTimeout_m2543484212 (SshCommand_t2829160041 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method);
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_m3710433672 (AutoResetEvent_t1333520283 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m2536525559(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1515976428 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m1356621408(__this, p0, p1, method) ((  void (*) (EventHandler_1_t3115254733 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Boolean Renci.SshNet.CommandAsyncResult::get_EndCalled()
extern "C" IL2CPP_METHOD_ATTR bool CommandAsyncResult_get_EndCalled_m1869687386 (CommandAsyncResult_t1797581660 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Renci.SshNet.CommandAsyncResult::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CommandAsyncResult__ctor_m458701433 (CommandAsyncResult_t1797581660 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m4010886457 (ManualResetEvent_t451242010 * __this, bool p0, const RuntimeMethod* method);
// System.Void Renci.SshNet.CommandAsyncResult::set_AsyncWaitHandle(System.Threading.WaitHandle)
extern "C" IL2CPP_METHOD_ATTR void CommandAsyncResult_set_AsyncWaitHandle_m4073727563 (CommandAsyncResult_t1797581660 * __this, WaitHandle_t1743403487 * ___value0, const RuntimeMethod* method);
// System.Void Renci.SshNet.CommandAsyncResult::set_IsCompleted(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CommandAsyncResult_set_IsCompleted_m1024142655 (CommandAsyncResult_t1797581660 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Renci.SshNet.CommandAsyncResult::set_AsyncState(System.Object)
extern "C" IL2CPP_METHOD_ATTR void CommandAsyncResult_set_AsyncState_m403948248 (CommandAsyncResult_t1797581660 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Renci.SshNet.Common.SshException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SshException__ctor_m2413002657 (SshException_t1435741398 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Renci.SshNet.SshCommand::get_CommandText()
extern "C" IL2CPP_METHOD_ATTR String_t* SshCommand_get_CommandText_m3012478698 (SshCommand_t2829160041 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshCommand::set_OutputStream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_OutputStream_m2237659458 (SshCommand_t2829160041 * __this, Stream_t1273022909 * ___value0, const RuntimeMethod* method);
// System.IO.Stream Renci.SshNet.SshCommand::get_ExtendedOutputStream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * SshCommand_get_ExtendedOutputStream_m2828446147 (SshCommand_t2829160041 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshCommand::set_ExtendedOutputStream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_ExtendedOutputStream_m2804900118 (SshCommand_t2829160041 * __this, Stream_t1273022909 * ___value0, const RuntimeMethod* method);
// System.Void Renci.SshNet.Common.PipeStream::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PipeStream__ctor_m1692016756 (PipeStream_t2360103068 * __this, const RuntimeMethod* method);
// Renci.SshNet.Channels.IChannelSession Renci.SshNet.SshCommand::CreateChannel()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SshCommand_CreateChannel_m1742724509 (SshCommand_t2829160041 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m984175629 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Threading.WaitHandle Renci.SshNet.CommandAsyncResult::get_AsyncWaitHandle()
extern "C" IL2CPP_METHOD_ATTR WaitHandle_t1743403487 * CommandAsyncResult_get_AsyncWaitHandle_m2018530066 (CommandAsyncResult_t1797581660 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshCommand::WaitOnHandle(System.Threading.WaitHandle)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_WaitOnHandle_m707372086 (SshCommand_t2829160041 * __this, WaitHandle_t1743403487 * ___waitHandle0, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshCommand::UnsubscribeFromEventsAndDisposeChannel(Renci.SshNet.Channels.IChannel)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_UnsubscribeFromEventsAndDisposeChannel_m2528369013 (SshCommand_t2829160041 * __this, RuntimeObject* ___channel0, const RuntimeMethod* method);
// System.Void Renci.SshNet.CommandAsyncResult::set_EndCalled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CommandAsyncResult_set_EndCalled_m2808869773 (CommandAsyncResult_t1797581660 * __this, bool ___value0, const RuntimeMethod* method);
// System.String Renci.SshNet.SshCommand::get_Result()
extern "C" IL2CPP_METHOD_ATTR String_t* SshCommand_get_Result_m2846263503 (SshCommand_t2829160041 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.IAsyncResult Renci.SshNet.SshCommand::BeginExecute(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SshCommand_BeginExecute_m3069484145 (SshCommand_t2829160041 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.String Renci.SshNet.SshCommand::EndExecute(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR String_t* SshCommand_EndExecute_m3116685538 (SshCommand_t2829160041 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Renci.SshNet.Common.ChannelDataEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m274747851(__this, p0, p1, method) ((  void (*) (EventHandler_1_t3836791184 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<Renci.SshNet.Common.ChannelExtendedDataEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m3494452931(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2214219653 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<Renci.SshNet.Common.ChannelRequestEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m3442468153(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2424542233 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs>::.ctor(System.Object,System.IntPtr)
#define EventHandler_1__ctor_m2000325318(__this, p0, p1, method) ((  void (*) (EventHandler_1_t1715808396 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method)
// System.Void Renci.SshNet.Common.SshConnectionException::.ctor(System.String,Renci.SshNet.Messages.Transport.DisconnectReason)
extern "C" IL2CPP_METHOD_ATTR void SshConnectionException__ctor_m1780057878 (SshConnectionException_t3734221110 * __this, String_t* ___message0, int32_t ___disconnectReasonCode1, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method);
// System.Exception Renci.SshNet.Common.ExceptionEventArgs::get_Exception()
extern "C" IL2CPP_METHOD_ATTR Exception_t * ExceptionEventArgs_get_Exception_m2718203869 (ExceptionEventArgs_t896128004 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m75143462 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Renci.SshNet.Abstractions.ThreadAbstraction::ExecuteThread(System.Action)
extern "C" IL2CPP_METHOD_ATTR void ThreadAbstraction_ExecuteThread_m2389470522 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___action0, const RuntimeMethod* method);
// Renci.SshNet.Messages.Connection.RequestInfo Renci.SshNet.Common.ChannelRequestEventArgs::get_Info()
extern "C" IL2CPP_METHOD_ATTR RequestInfo_t1797926055 * ChannelRequestEventArgs_get_Info_m2332525183 (ChannelRequestEventArgs_t205415504 * __this, const RuntimeMethod* method);
// System.UInt32 Renci.SshNet.Messages.Connection.ExitStatusRequestInfo::get_ExitStatus()
extern "C" IL2CPP_METHOD_ATTR uint32_t ExitStatusRequestInfo_get_ExitStatus_m3762026653 (ExitStatusRequestInfo_t20368951 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshCommand::set_ExitStatus(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_ExitStatus_m2906118476 (SshCommand_t2829160041 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Renci.SshNet.Messages.Connection.RequestInfo::get_WantReply()
extern "C" IL2CPP_METHOD_ATTR bool RequestInfo_get_WantReply_m1703309796 (RequestInfo_t1797926055 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.Messages.Connection.ChannelSuccessMessage::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ChannelSuccessMessage__ctor_m2529184546 (ChannelSuccessMessage_t1918479768 * __this, uint32_t ___localChannelNumber0, const RuntimeMethod* method);
// System.Void Renci.SshNet.Messages.Connection.ChannelFailureMessage::.ctor(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ChannelFailureMessage__ctor_m2351468724 (ChannelFailureMessage_t1527543386 * __this, uint32_t ___localChannelNumber0, const RuntimeMethod* method);
// System.Byte[] Renci.SshNet.Common.ChannelDataEventArgs::get_Data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ChannelDataEventArgs_get_Data_m2618644804 (ChannelDataEventArgs_t1617664455 * __this, const RuntimeMethod* method);
// System.UInt32 Renci.SshNet.Common.ChannelExtendedDataEventArgs::get_DataTypeCode()
extern "C" IL2CPP_METHOD_ATTR uint32_t ChannelExtendedDataEventArgs_get_DataTypeCode_m4153836835 (ChannelExtendedDataEventArgs_t4290060220 * __this, const RuntimeMethod* method);
// System.Int32 Renci.SshNet.CommandAsyncResult::get_BytesReceived()
extern "C" IL2CPP_METHOD_ATTR int32_t CommandAsyncResult_get_BytesReceived_m1093715432 (CommandAsyncResult_t1797581660 * __this, const RuntimeMethod* method);
// System.Void Renci.SshNet.CommandAsyncResult::set_BytesReceived(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CommandAsyncResult_set_BytesReceived_m2681654271 (CommandAsyncResult_t1797581660 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.TimeSpan Renci.SshNet.SshCommand::get_CommandTimeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  SshCommand_get_CommandTimeout_m950036237 (SshCommand_t2829160041 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR int32_t WaitHandle_WaitAny_m2761571109 (RuntimeObject * __this /* static, unused */, WaitHandleU5BU5D_t96772038* p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_CurrentCulture_m1632690660 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.Void Renci.SshNet.Common.SshOperationTimeoutException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SshOperationTimeoutException__ctor_m1929858942 (SshOperationTimeoutException_t3702980668 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Threading.WaitHandle::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WaitHandle_Dispose_m2233804502 (WaitHandle_t1743403487 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_m3156993048 (AsyncCallback_t3962456242 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeInitMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m3281235739(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t2954632716 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.NewKeysMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m2228197956(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3229348390 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.RequestFailureMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1464327441(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3137192560 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m2839893545(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3739975694 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelFailureMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m2050352774(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t2662122351 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelExtendedDataMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m3921161069(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3461637843 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelDataMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1836645595(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t2620507973 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelRequestMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m2493900951(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3071453335 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.BannerMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m3538886075(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t1664368617 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.InformationResponseMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m654010030(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t939427463 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.FailureMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1409899146(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3801097035 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.DebugMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1285590279(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t284949424 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.GlobalRequestMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m2178521596(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t2451642879 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m2334713808(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t4074031887 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1303187418(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3892623955 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.InformationRequestMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m2983630178(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t1581200532 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.UnimplementedMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1795138437(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t1782393825 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.RequestSuccessMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1211752063(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t529423311 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelSuccessMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1956490332(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3053058733 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.PasswordChangeRequiredMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m3578280787(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3277971202 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.DisconnectMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1105904974(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3241984111 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.SuccessMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m4065994931(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3845700005 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Authentication.PublicKeyMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m4271939786(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t2996753660 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.IgnoreMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1530620745(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t1634548274 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelWindowAdjustMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1310681405(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t3136770008 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelEofMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1414086506(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t2166108262 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Connection.ChannelCloseMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m3805855773(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t2718614835 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.ServiceAcceptMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1704061716(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t4248897102 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeGroup>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m2279192927(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t9813608 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m3854366878(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t83236809 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata`1<Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply>::.ctor(System.Byte,System.String,System.Byte)
#define MessageMetadata_1__ctor_m1792630017(__this, p0, p1, p2, method) ((  void (*) (MessageMetadata_1_t2610932943 *, uint8_t, String_t*, uint8_t, const RuntimeMethod*))MessageMetadata_1__ctor_m2536260751_gshared)(__this, p0, p1, p2, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>::.ctor(System.Int32)
#define Dictionary_2__ctor_m774772006(__this, p0, method) ((  void (*) (Dictionary_2_t4255210500 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2687535023_gshared)(__this, p0, method)
// Renci.SshNet.Common.SshException Renci.SshNet.SshMessageFactory::CreateMessageTypeNotSupportedException(System.Byte)
extern "C" IL2CPP_METHOD_ATTR SshException_t1435741398 * SshMessageFactory_CreateMessageTypeNotSupportedException_m2372089327 (RuntimeObject * __this /* static, unused */, uint8_t ___messageNumber0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Renci.SshNet.Common.SshException Renci.SshNet.SshMessageFactory::CreateMessageTypeAlreadyEnabledForOtherMessageException(System.Byte,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR SshException_t1435741398 * SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197 (RuntimeObject * __this /* static, unused */, uint8_t ___messageNumber0, String_t* ___messageName1, String_t* ___currentEnabledForMessageName2, const RuntimeMethod* method);
// Renci.SshNet.Common.SshException Renci.SshNet.SshMessageFactory::CreateMessageNotSupportedException(System.String)
extern "C" IL2CPP_METHOD_ATTR SshException_t1435741398 * SshMessageFactory_CreateMessageNotSupportedException_m2300368093 (RuntimeObject * __this /* static, unused */, String_t* ___messageName0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Renci.SshNet.SshClient::.ctor(System.String,System.Int32,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SshClient__ctor_m3593962372 (SshClient_t676357105 * __this, String_t* ___host0, int32_t ___port1, String_t* ___username2, String_t* ___password3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshClient__ctor_m3593962372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___host0;
		int32_t L_1 = ___port1;
		String_t* L_2 = ___username2;
		String_t* L_3 = ___password3;
		PasswordConnectionInfo_t734167810 * L_4 = (PasswordConnectionInfo_t734167810 *)il2cpp_codegen_object_new(PasswordConnectionInfo_t734167810_il2cpp_TypeInfo_var);
		PasswordConnectionInfo__ctor_m1784404276(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		SshClient__ctor_m2126859039(__this, L_4, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Renci.SshNet.SshClient::.ctor(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SshClient__ctor_m294108572 (SshClient_t676357105 * __this, String_t* ___host0, String_t* ___username1, String_t* ___password2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshClient__ctor_m294108572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___host0;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionInfo_t2762416072_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ConnectionInfo_t2762416072_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionInfo_t2762416072_il2cpp_TypeInfo_var))->get_DefaultPort_0();
		String_t* L_2 = ___username1;
		String_t* L_3 = ___password2;
		SshClient__ctor_m3593962372(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Renci.SshNet.SshClient::.ctor(Renci.SshNet.ConnectionInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SshClient__ctor_m2126859039 (SshClient_t676357105 * __this, ConnectionInfo_t2762416072 * ___connectionInfo0, bool ___ownsConnectionInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshClient__ctor_m2126859039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionInfo_t2762416072 * L_0 = ___connectionInfo0;
		bool L_1 = ___ownsConnectionInfo1;
		ServiceFactory_t198644780 * L_2 = (ServiceFactory_t198644780 *)il2cpp_codegen_object_new(ServiceFactory_t198644780_il2cpp_TypeInfo_var);
		ServiceFactory__ctor_m2203084332(L_2, /*hidden argument*/NULL);
		SshClient__ctor_m1469750933(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Renci.SshNet.SshClient::.ctor(Renci.SshNet.ConnectionInfo,System.Boolean,Renci.SshNet.IServiceFactory)
extern "C" IL2CPP_METHOD_ATTR void SshClient__ctor_m1469750933 (SshClient_t676357105 * __this, ConnectionInfo_t2762416072 * ___connectionInfo0, bool ___ownsConnectionInfo1, RuntimeObject* ___serviceFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshClient__ctor_m1469750933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionInfo_t2762416072 * L_0 = ___connectionInfo0;
		bool L_1 = ___ownsConnectionInfo1;
		RuntimeObject* L_2 = ___serviceFactory2;
		BaseClient__ctor_m4180276014(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		List_1_t2106477839 * L_3 = (List_1_t2106477839 *)il2cpp_codegen_object_new(List_1_t2106477839_il2cpp_TypeInfo_var);
		List_1__ctor_m3656078269(L_3, /*hidden argument*/List_1__ctor_m3656078269_RuntimeMethod_var);
		__this->set__forwardedPorts_10(L_3);
		return;
	}
}
// System.Void Renci.SshNet.SshClient::OnDisconnecting()
extern "C" IL2CPP_METHOD_ATTR void SshClient_OnDisconnecting_m2034860236 (SshClient_t676357105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshClient_OnDisconnecting_m2034860236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3995721716  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		BaseClient_OnDisconnecting_m151137673(__this, /*hidden argument*/NULL);
		List_1_t2106477839 * L_0 = __this->get__forwardedPorts_10();
		NullCheck(L_0);
		Enumerator_t3995721716  L_1 = List_1_GetEnumerator_m930350269(L_0, /*hidden argument*/List_1_GetEnumerator_m930350269_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0014:
		{
			ForwardedPort_t634403097 * L_2 = Enumerator_get_Current_m2803795645((Enumerator_t3995721716 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2803795645_RuntimeMethod_var);
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(5 /* System.Void Renci.SshNet.ForwardedPort::Stop() */, L_2);
		}

IL_0020:
		{
			bool L_3 = Enumerator_MoveNext_m2296877432((Enumerator_t3995721716 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2296877432_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0014;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1778068822((Enumerator_t3995721716 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1778068822_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		return;
	}
}
// System.Void Renci.SshNet.SshClient::DetachForwardedPort(Renci.SshNet.ForwardedPort)
extern "C" IL2CPP_METHOD_ATTR void SshClient_DetachForwardedPort_m924137220 (RuntimeObject * __this /* static, unused */, ForwardedPort_t634403097 * ___port0, const RuntimeMethod* method)
{
	{
		ForwardedPort_t634403097 * L_0 = ___port0;
		NullCheck(L_0);
		ForwardedPort_set_Session_m1338615562(L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// Renci.SshNet.SshCommand Renci.SshNet.SshClient::CreateCommand(System.String)
extern "C" IL2CPP_METHOD_ATTR SshCommand_t2829160041 * SshClient_CreateCommand_m284618937 (SshClient_t676357105 * __this, String_t* ___commandText0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___commandText0;
		ConnectionInfo_t2762416072 * L_1 = BaseClient_get_ConnectionInfo_m330315758(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Encoding_t1523322056 * L_2 = ConnectionInfo_get_Encoding_m1642141952(L_1, /*hidden argument*/NULL);
		SshCommand_t2829160041 * L_3 = SshClient_CreateCommand_m715012094(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Renci.SshNet.SshCommand Renci.SshNet.SshClient::CreateCommand(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR SshCommand_t2829160041 * SshClient_CreateCommand_m715012094 (SshClient_t676357105 * __this, String_t* ___commandText0, Encoding_t1523322056 * ___encoding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshClient_CreateCommand_m715012094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SshClient_EnsureSessionIsOpen_m958514547(__this, /*hidden argument*/NULL);
		ConnectionInfo_t2762416072 * L_0 = BaseClient_get_ConnectionInfo_m330315758(__this, /*hidden argument*/NULL);
		Encoding_t1523322056 * L_1 = ___encoding1;
		NullCheck(L_0);
		ConnectionInfo_set_Encoding_m2644619865(L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = BaseClient_get_Session_m2910988351(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___commandText0;
		Encoding_t1523322056 * L_4 = ___encoding1;
		SshCommand_t2829160041 * L_5 = (SshCommand_t2829160041 *)il2cpp_codegen_object_new(SshCommand_t2829160041_il2cpp_TypeInfo_var);
		SshCommand__ctor_m3015611216(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Renci.SshNet.SshCommand Renci.SshNet.SshClient::RunCommand(System.String)
extern "C" IL2CPP_METHOD_ATTR SshCommand_t2829160041 * SshClient_RunCommand_m3326587285 (SshClient_t676357105 * __this, String_t* ___commandText0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___commandText0;
		SshCommand_t2829160041 * L_1 = SshClient_CreateCommand_m284618937(__this, L_0, /*hidden argument*/NULL);
		SshCommand_t2829160041 * L_2 = L_1;
		NullCheck(L_2);
		SshCommand_Execute_m3732244500(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Renci.SshNet.SshClient::OnDisconnected()
extern "C" IL2CPP_METHOD_ATTR void SshClient_OnDisconnected_m1999565501 (SshClient_t676357105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshClient_OnDisconnected_m1999565501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BaseClient_OnDisconnected_m2839940445(__this, /*hidden argument*/NULL);
		List_1_t2106477839 * L_0 = __this->get__forwardedPorts_10();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3750278540(L_0, /*hidden argument*/List_1_get_Count_m3750278540_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0037;
	}

IL_0016:
	{
		List_1_t2106477839 * L_2 = __this->get__forwardedPorts_10();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		ForwardedPort_t634403097 * L_4 = List_1_get_Item_m525849619(L_2, L_3, /*hidden argument*/List_1_get_Item_m525849619_RuntimeMethod_var);
		SshClient_DetachForwardedPort_m924137220(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		List_1_t2106477839 * L_5 = __this->get__forwardedPorts_10();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		List_1_RemoveAt_m1695266239(L_5, L_6, /*hidden argument*/List_1_RemoveAt_m1695266239_RuntimeMethod_var);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void Renci.SshNet.SshClient::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SshClient_Dispose_m706332975 (SshClient_t676357105 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		BaseClient_Dispose_m4154248368(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = __this->get__isDisposed_11();
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		bool L_2 = ___disposing0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Stream_t1273022909 * L_3 = __this->get__inputStream_12();
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Stream_t1273022909 * L_4 = __this->get__inputStream_12();
		NullCheck(L_4);
		Stream_Dispose_m2589290611(L_4, /*hidden argument*/NULL);
		__this->set__inputStream_12((Stream_t1273022909 *)NULL);
	}

IL_002d:
	{
		__this->set__isDisposed_11((bool)1);
	}

IL_0034:
	{
		return;
	}
}
// System.Void Renci.SshNet.SshClient::EnsureSessionIsOpen()
extern "C" IL2CPP_METHOD_ATTR void SshClient_EnsureSessionIsOpen_m958514547 (SshClient_t676357105 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshClient_EnsureSessionIsOpen_m958514547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = BaseClient_get_Session_m2910988351(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SshConnectionException_t3734221110 * L_1 = (SshConnectionException_t3734221110 *)il2cpp_codegen_object_new(SshConnectionException_t3734221110_il2cpp_TypeInfo_var);
		SshConnectionException__ctor_m2805476218(L_1, _stringLiteral937009794, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SshClient_EnsureSessionIsOpen_m958514547_RuntimeMethod_var);
	}

IL_0013:
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
// System.String Renci.SshNet.SshCommand::get_CommandText()
extern "C" IL2CPP_METHOD_ATTR String_t* SshCommand_get_CommandText_m3012478698 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCommandTextU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Renci.SshNet.SshCommand::set_CommandText(System.String)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_CommandText_m1121507967 (SshCommand_t2829160041 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCommandTextU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.TimeSpan Renci.SshNet.SshCommand::get_CommandTimeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  SshCommand_get_CommandTimeout_m950036237 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = __this->get_U3CCommandTimeoutU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Renci.SshNet.SshCommand::set_CommandTimeout(System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_CommandTimeout_m2543484212 (SshCommand_t2829160041 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = ___value0;
		__this->set_U3CCommandTimeoutU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::set_ExitStatus(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_ExitStatus_m2906118476 (SshCommand_t2829160041 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CExitStatusU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.IO.Stream Renci.SshNet.SshCommand::get_OutputStream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * SshCommand_get_OutputStream_m540101747 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get_U3COutputStreamU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Renci.SshNet.SshCommand::set_OutputStream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_OutputStream_m2237659458 (SshCommand_t2829160041 * __this, Stream_t1273022909 * ___value0, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = ___value0;
		__this->set_U3COutputStreamU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.IO.Stream Renci.SshNet.SshCommand::get_ExtendedOutputStream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * SshCommand_get_ExtendedOutputStream_m2828446147 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = __this->get_U3CExtendedOutputStreamU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Renci.SshNet.SshCommand::set_ExtendedOutputStream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_set_ExtendedOutputStream_m2804900118 (SshCommand_t2829160041 * __this, Stream_t1273022909 * ___value0, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = ___value0;
		__this->set_U3CExtendedOutputStreamU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.String Renci.SshNet.SshCommand::get_Result()
extern "C" IL2CPP_METHOD_ATTR String_t* SshCommand_get_Result_m2846263503 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_get_Result_m2846263503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t4009935899 * V_0 = NULL;
	{
		StringBuilder_t * L_0 = __this->get__result_14();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_1, /*hidden argument*/NULL);
		__this->set__result_14(L_1);
	}

IL_0013:
	{
		Stream_t1273022909 * L_2 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		Stream_t1273022909 * L_3 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int64_t L_4 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_004e;
		}
	}
	{
		Stream_t1273022909 * L_5 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		Encoding_t1523322056 * L_6 = __this->get__encoding_1();
		StreamReader_t4009935899 * L_7 = (StreamReader_t4009935899 *)il2cpp_codegen_object_new(StreamReader_t4009935899_il2cpp_TypeInfo_var);
		StreamReader__ctor_m3941437302(L_7, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		StringBuilder_t * L_8 = __this->get__result_14();
		StreamReader_t4009935899 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_9);
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		StringBuilder_t * L_11 = __this->get__result_14();
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		return L_12;
	}
}
// System.Void Renci.SshNet.SshCommand::.ctor(Renci.SshNet.ISession,System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void SshCommand__ctor_m3015611216 (SshCommand_t2829160041 * __this, RuntimeObject* ___session0, String_t* ___commandText1, Encoding_t1523322056 * ___encoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand__ctor_m3015611216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		__this->set__endExecuteLock_8(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___session0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3206363735, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SshCommand__ctor_m3015611216_RuntimeMethod_var);
	}

IL_001f:
	{
		String_t* L_3 = ___commandText1;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_4 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_4, _stringLiteral1644399654, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, SshCommand__ctor_m3015611216_RuntimeMethod_var);
	}

IL_002d:
	{
		Encoding_t1523322056 * L_5 = ___encoding2;
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, _stringLiteral3002372288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SshCommand__ctor_m3015611216_RuntimeMethod_var);
	}

IL_003b:
	{
		RuntimeObject* L_7 = ___session0;
		__this->set__session_0(L_7);
		String_t* L_8 = ___commandText1;
		SshCommand_set_CommandText_m1121507967(__this, L_8, /*hidden argument*/NULL);
		Encoding_t1523322056 * L_9 = ___encoding2;
		__this->set__encoding_1(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Session_t2648700758_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_10 = ((Session_t2648700758_StaticFields*)il2cpp_codegen_static_fields_for(Session_t2648700758_il2cpp_TypeInfo_var))->get_InfiniteTimeSpan_0();
		SshCommand_set_CommandTimeout_m2543484212(__this, L_10, /*hidden argument*/NULL);
		AutoResetEvent_t1333520283 * L_11 = (AutoResetEvent_t1333520283 *)il2cpp_codegen_object_new(AutoResetEvent_t1333520283_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m3710433672(L_11, (bool)0, /*hidden argument*/NULL);
		__this->set__sessionErrorOccuredWaitHandle_5(L_11);
		RuntimeObject* L_12 = __this->get__session_0();
		intptr_t L_13 = (intptr_t)SshCommand_Session_Disconnected_m809188290_RuntimeMethod_var;
		EventHandler_1_t1515976428 * L_14 = (EventHandler_1_t1515976428 *)il2cpp_codegen_object_new(EventHandler_1_t1515976428_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2536525559(L_14, __this, L_13, /*hidden argument*/EventHandler_1__ctor_m2536525559_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_t1515976428 * >::Invoke(31 /* System.Void Renci.SshNet.ISession::add_Disconnected(System.EventHandler`1<System.EventArgs>) */, ISession_t2464340384_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_15 = __this->get__session_0();
		intptr_t L_16 = (intptr_t)SshCommand_Session_ErrorOccured_m3705556835_RuntimeMethod_var;
		EventHandler_1_t3115254733 * L_17 = (EventHandler_1_t3115254733 *)il2cpp_codegen_object_new(EventHandler_1_t3115254733_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1356621408(L_17, __this, L_16, /*hidden argument*/EventHandler_1__ctor_m1356621408_RuntimeMethod_var);
		NullCheck(L_15);
		InterfaceActionInvoker1< EventHandler_1_t3115254733 * >::Invoke(33 /* System.Void Renci.SshNet.ISession::add_ErrorOccured(System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs>) */, ISession_t2464340384_il2cpp_TypeInfo_var, L_15, L_17);
		return;
	}
}
// System.IAsyncResult Renci.SshNet.SshCommand::BeginExecute(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SshCommand_BeginExecute_m3069484145 (SshCommand_t2829160041 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_BeginExecute_m3069484145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t1273022909 * V_0 = NULL;
	Stream_t1273022909 * V_1 = NULL;
	{
		CommandAsyncResult_t1797581660 * L_0 = __this->get__asyncResult_3();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CommandAsyncResult_t1797581660 * L_1 = __this->get__asyncResult_3();
		NullCheck(L_1);
		bool L_2 = CommandAsyncResult_get_EndCalled_m1869687386(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, _stringLiteral3203079933, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, SshCommand_BeginExecute_m3069484145_RuntimeMethod_var);
	}

IL_0020:
	{
		CommandAsyncResult_t1797581660 * L_4 = (CommandAsyncResult_t1797581660 *)il2cpp_codegen_object_new(CommandAsyncResult_t1797581660_il2cpp_TypeInfo_var);
		CommandAsyncResult__ctor_m458701433(L_4, /*hidden argument*/NULL);
		CommandAsyncResult_t1797581660 * L_5 = L_4;
		ManualResetEvent_t451242010 * L_6 = (ManualResetEvent_t451242010 *)il2cpp_codegen_object_new(ManualResetEvent_t451242010_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m4010886457(L_6, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_5);
		CommandAsyncResult_set_AsyncWaitHandle_m4073727563(L_5, L_6, /*hidden argument*/NULL);
		CommandAsyncResult_t1797581660 * L_7 = L_5;
		NullCheck(L_7);
		CommandAsyncResult_set_IsCompleted_m1024142655(L_7, (bool)0, /*hidden argument*/NULL);
		CommandAsyncResult_t1797581660 * L_8 = L_7;
		RuntimeObject * L_9 = ___state1;
		NullCheck(L_8);
		CommandAsyncResult_set_AsyncState_m403948248(L_8, L_9, /*hidden argument*/NULL);
		__this->set__asyncResult_3(L_8);
		RuntimeObject* L_10 = __this->get__channel_2();
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		SshException_t1435741398 * L_11 = (SshException_t1435741398 *)il2cpp_codegen_object_new(SshException_t1435741398_il2cpp_TypeInfo_var);
		SshException__ctor_m2413002657(L_11, _stringLiteral2503092145, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, SshCommand_BeginExecute_m3069484145_RuntimeMethod_var);
	}

IL_0058:
	{
		String_t* L_12 = SshCommand_get_CommandText_m3012478698(__this, /*hidden argument*/NULL);
		bool L_13 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_t132251570 * L_14 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_14, _stringLiteral813762804, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, SshCommand_BeginExecute_m3069484145_RuntimeMethod_var);
	}

IL_0070:
	{
		Stream_t1273022909 * L_15 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		V_0 = L_15;
		Stream_t1273022909 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_0087;
		}
	}
	{
		Stream_t1273022909 * L_17 = V_0;
		NullCheck(L_17);
		Stream_Dispose_m2589290611(L_17, /*hidden argument*/NULL);
		SshCommand_set_OutputStream_m2237659458(__this, (Stream_t1273022909 *)NULL, /*hidden argument*/NULL);
	}

IL_0087:
	{
		Stream_t1273022909 * L_18 = SshCommand_get_ExtendedOutputStream_m2828446147(__this, /*hidden argument*/NULL);
		V_1 = L_18;
		Stream_t1273022909 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		Stream_t1273022909 * L_20 = V_1;
		NullCheck(L_20);
		Stream_Dispose_m2589290611(L_20, /*hidden argument*/NULL);
		SshCommand_set_ExtendedOutputStream_m2804900118(__this, (Stream_t1273022909 *)NULL, /*hidden argument*/NULL);
	}

IL_009e:
	{
		PipeStream_t2360103068 * L_21 = (PipeStream_t2360103068 *)il2cpp_codegen_object_new(PipeStream_t2360103068_il2cpp_TypeInfo_var);
		PipeStream__ctor_m1692016756(L_21, /*hidden argument*/NULL);
		SshCommand_set_OutputStream_m2237659458(__this, L_21, /*hidden argument*/NULL);
		PipeStream_t2360103068 * L_22 = (PipeStream_t2360103068 *)il2cpp_codegen_object_new(PipeStream_t2360103068_il2cpp_TypeInfo_var);
		PipeStream__ctor_m1692016756(L_22, /*hidden argument*/NULL);
		SshCommand_set_ExtendedOutputStream_m2804900118(__this, L_22, /*hidden argument*/NULL);
		__this->set__result_14((StringBuilder_t *)NULL);
		__this->set__error_15((StringBuilder_t *)NULL);
		AsyncCallback_t3962456242 * L_23 = ___callback0;
		__this->set__callback_4(L_23);
		RuntimeObject* L_24 = SshCommand_CreateChannel_m1742724509(__this, /*hidden argument*/NULL);
		__this->set__channel_2(L_24);
		RuntimeObject* L_25 = __this->get__channel_2();
		NullCheck(L_25);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Renci.SshNet.Channels.IChannelSession::Open() */, IChannelSession_t212720632_il2cpp_TypeInfo_var, L_25);
		RuntimeObject* L_26 = __this->get__channel_2();
		String_t* L_27 = SshCommand_get_CommandText_m3012478698(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean Renci.SshNet.Channels.IChannelSession::SendExecRequest(System.String) */, IChannelSession_t212720632_il2cpp_TypeInfo_var, L_26, L_27);
		CommandAsyncResult_t1797581660 * L_28 = __this->get__asyncResult_3();
		return L_28;
	}
}
// System.String Renci.SshNet.SshCommand::EndExecute(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR String_t* SshCommand_EndExecute_m3116685538 (SshCommand_t2829160041 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_EndExecute_m3116685538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CommandAsyncResult_t1797581660 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___asyncResult0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral844061258, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SshCommand_EndExecute_m3116685538_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___asyncResult0;
		V_0 = ((CommandAsyncResult_t1797581660 *)IsInstClass((RuntimeObject*)L_2, CommandAsyncResult_t1797581660_il2cpp_TypeInfo_var));
		CommandAsyncResult_t1797581660 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		CommandAsyncResult_t1797581660 * L_4 = __this->get__asyncResult_3();
		CommandAsyncResult_t1797581660 * L_5 = V_0;
		if ((((RuntimeObject*)(CommandAsyncResult_t1797581660 *)L_4) == ((RuntimeObject*)(CommandAsyncResult_t1797581660 *)L_5)))
		{
			goto IL_0040;
		}
	}

IL_0021:
	{
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (IAsyncResult_t767004451_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral842862645, L_8, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, SshCommand_EndExecute_m3116685538_RuntimeMethod_var);
	}

IL_0040:
	{
		RuntimeObject * L_11 = __this->get__endExecuteLock_8();
		V_1 = L_11;
		V_2 = (bool)0;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_12 = V_1;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_12, (bool*)(&V_2), /*hidden argument*/NULL);
			CommandAsyncResult_t1797581660 * L_13 = V_0;
			NullCheck(L_13);
			bool L_14 = CommandAsyncResult_get_EndCalled_m1869687386(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0064;
			}
		}

IL_0059:
		{
			ArgumentException_t132251570 * L_15 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m1312628991(L_15, _stringLiteral4058417824, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, SshCommand_EndExecute_m3116685538_RuntimeMethod_var);
		}

IL_0064:
		{
			CommandAsyncResult_t1797581660 * L_16 = __this->get__asyncResult_3();
			NullCheck(L_16);
			WaitHandle_t1743403487 * L_17 = CommandAsyncResult_get_AsyncWaitHandle_m2018530066(L_16, /*hidden argument*/NULL);
			SshCommand_WaitOnHandle_m707372086(__this, L_17, /*hidden argument*/NULL);
			RuntimeObject* L_18 = __this->get__channel_2();
			SshCommand_UnsubscribeFromEventsAndDisposeChannel_m2528369013(__this, L_18, /*hidden argument*/NULL);
			__this->set__channel_2((RuntimeObject*)NULL);
			CommandAsyncResult_t1797581660 * L_19 = V_0;
			NullCheck(L_19);
			CommandAsyncResult_set_EndCalled_m2808869773(L_19, (bool)1, /*hidden argument*/NULL);
			String_t* L_20 = SshCommand_get_Result_m2846263503(__this, /*hidden argument*/NULL);
			V_3 = L_20;
			IL2CPP_LEAVE(0xA2, FINALLY_0098);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0098;
	}

FINALLY_0098:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_2;
			if (!L_21)
			{
				goto IL_00a1;
			}
		}

IL_009b:
		{
			RuntimeObject * L_22 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(152)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(152)
	{
		IL2CPP_JUMP_TBL(0xA2, IL_00a2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a2:
	{
		String_t* L_23 = V_3;
		return L_23;
	}
}
// System.String Renci.SshNet.SshCommand::Execute()
extern "C" IL2CPP_METHOD_ATTR String_t* SshCommand_Execute_m3732244500 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = SshCommand_BeginExecute_m3069484145(__this, (AsyncCallback_t3962456242 *)NULL, NULL, /*hidden argument*/NULL);
		String_t* L_1 = SshCommand_EndExecute_m3116685538(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Renci.SshNet.Channels.IChannelSession Renci.SshNet.SshCommand::CreateChannel()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SshCommand_CreateChannel_m1742724509 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_CreateChannel_m1742724509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__session_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Renci.SshNet.Channels.IChannelSession Renci.SshNet.ISession::CreateChannelSession() */, ISession_t2464340384_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = L_1;
		intptr_t L_3 = (intptr_t)SshCommand_Channel_DataReceived_m474707499_RuntimeMethod_var;
		EventHandler_1_t3836791184 * L_4 = (EventHandler_1_t3836791184 *)il2cpp_codegen_object_new(EventHandler_1_t3836791184_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m274747851(L_4, __this, L_3, /*hidden argument*/EventHandler_1__ctor_m274747851_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_t3836791184 * >::Invoke(0 /* System.Void Renci.SshNet.Channels.IChannel::add_DataReceived(System.EventHandler`1<Renci.SshNet.Common.ChannelDataEventArgs>) */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_2, L_4);
		RuntimeObject* L_5 = L_2;
		intptr_t L_6 = (intptr_t)SshCommand_Channel_ExtendedDataReceived_m1118478954_RuntimeMethod_var;
		EventHandler_1_t2214219653 * L_7 = (EventHandler_1_t2214219653 *)il2cpp_codegen_object_new(EventHandler_1_t2214219653_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3494452931(L_7, __this, L_6, /*hidden argument*/EventHandler_1__ctor_m3494452931_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_t2214219653 * >::Invoke(2 /* System.Void Renci.SshNet.Channels.IChannel::add_ExtendedDataReceived(System.EventHandler`1<Renci.SshNet.Common.ChannelExtendedDataEventArgs>) */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_5, L_7);
		RuntimeObject* L_8 = L_5;
		intptr_t L_9 = (intptr_t)SshCommand_Channel_RequestReceived_m3635259687_RuntimeMethod_var;
		EventHandler_1_t2424542233 * L_10 = (EventHandler_1_t2424542233 *)il2cpp_codegen_object_new(EventHandler_1_t2424542233_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3442468153(L_10, __this, L_9, /*hidden argument*/EventHandler_1__ctor_m3442468153_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_t2424542233 * >::Invoke(4 /* System.Void Renci.SshNet.Channels.IChannel::add_RequestReceived(System.EventHandler`1<Renci.SshNet.Common.ChannelRequestEventArgs>) */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_8, L_10);
		RuntimeObject* L_11 = L_8;
		intptr_t L_12 = (intptr_t)SshCommand_Channel_Closed_m2949300017_RuntimeMethod_var;
		EventHandler_1_t1715808396 * L_13 = (EventHandler_1_t1715808396 *)il2cpp_codegen_object_new(EventHandler_1_t1715808396_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2000325318(L_13, __this, L_12, /*hidden argument*/EventHandler_1__ctor_m2000325318_RuntimeMethod_var);
		NullCheck(L_11);
		InterfaceActionInvoker1< EventHandler_1_t1715808396 * >::Invoke(6 /* System.Void Renci.SshNet.Channels.IChannel::add_Closed(System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs>) */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_11, L_13);
		return L_11;
	}
}
// System.Void Renci.SshNet.SshCommand::Session_Disconnected(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Session_Disconnected_m809188290 (SshCommand_t2829160041 * __this, RuntimeObject * ___sender0, EventArgs_t3591816995 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_Session_Disconnected_m809188290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__isDisposed_16();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SshConnectionException_t3734221110 * L_1 = (SshConnectionException_t3734221110 *)il2cpp_codegen_object_new(SshConnectionException_t3734221110_il2cpp_TypeInfo_var);
		SshConnectionException__ctor_m1780057878(L_1, _stringLiteral2609783910, ((int32_t)10), /*hidden argument*/NULL);
		__this->set__exception_6(L_1);
		EventWaitHandle_t777845177 * L_2 = __this->get__sessionErrorOccuredWaitHandle_5();
		NullCheck(L_2);
		EventWaitHandle_Set_m2445193251(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::Session_ErrorOccured(System.Object,Renci.SshNet.Common.ExceptionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Session_ErrorOccured_m3705556835 (SshCommand_t2829160041 * __this, RuntimeObject * ___sender0, ExceptionEventArgs_t896128004 * ___e1, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__isDisposed_16();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ExceptionEventArgs_t896128004 * L_1 = ___e1;
		NullCheck(L_1);
		Exception_t * L_2 = ExceptionEventArgs_get_Exception_m2718203869(L_1, /*hidden argument*/NULL);
		__this->set__exception_6(L_2);
		EventWaitHandle_t777845177 * L_3 = __this->get__sessionErrorOccuredWaitHandle_5();
		NullCheck(L_3);
		EventWaitHandle_Set_m2445193251(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::Channel_Closed(System.Object,Renci.SshNet.Common.ChannelEventArgs)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Channel_Closed_m2949300017 (SshCommand_t2829160041 * __this, RuntimeObject * ___sender0, ChannelEventArgs_t3791648963 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_Channel_Closed_m2949300017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t1273022909 * V_0 = NULL;
	Stream_t1273022909 * V_1 = NULL;
	{
		Stream_t1273022909 * L_0 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Stream_t1273022909 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Stream_t1273022909 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_2);
	}

IL_0010:
	{
		Stream_t1273022909 * L_3 = SshCommand_get_ExtendedOutputStream_m2828446147(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		Stream_t1273022909 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		Stream_t1273022909 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_5);
	}

IL_0020:
	{
		CommandAsyncResult_t1797581660 * L_6 = __this->get__asyncResult_3();
		NullCheck(L_6);
		CommandAsyncResult_set_IsCompleted_m1024142655(L_6, (bool)1, /*hidden argument*/NULL);
		AsyncCallback_t3962456242 * L_7 = __this->get__callback_4();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		intptr_t L_8 = (intptr_t)SshCommand_U3CChannel_ClosedU3Eb__47_0_m3630243828_RuntimeMethod_var;
		Action_t1264377477 * L_9 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m75143462(L_9, __this, L_8, /*hidden argument*/NULL);
		ThreadAbstraction_ExecuteThread_m2389470522(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0045:
	{
		CommandAsyncResult_t1797581660 * L_10 = __this->get__asyncResult_3();
		NullCheck(L_10);
		WaitHandle_t1743403487 * L_11 = CommandAsyncResult_get_AsyncWaitHandle_m2018530066(L_10, /*hidden argument*/NULL);
		NullCheck(((EventWaitHandle_t777845177 *)CastclassClass((RuntimeObject*)L_11, EventWaitHandle_t777845177_il2cpp_TypeInfo_var)));
		EventWaitHandle_Set_m2445193251(((EventWaitHandle_t777845177 *)CastclassClass((RuntimeObject*)L_11, EventWaitHandle_t777845177_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::Channel_RequestReceived(System.Object,Renci.SshNet.Common.ChannelRequestEventArgs)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Channel_RequestReceived_m3635259687 (SshCommand_t2829160041 * __this, RuntimeObject * ___sender0, ChannelRequestEventArgs_t205415504 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_Channel_RequestReceived_m3635259687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExitStatusRequestInfo_t20368951 * V_0 = NULL;
	ChannelSuccessMessage_t1918479768 * V_1 = NULL;
	ChannelFailureMessage_t1527543386 * V_2 = NULL;
	{
		ChannelRequestEventArgs_t205415504 * L_0 = ___e1;
		NullCheck(L_0);
		RequestInfo_t1797926055 * L_1 = ChannelRequestEventArgs_get_Info_m2332525183(L_0, /*hidden argument*/NULL);
		V_0 = ((ExitStatusRequestInfo_t20368951 *)IsInstClass((RuntimeObject*)L_1, ExitStatusRequestInfo_t20368951_il2cpp_TypeInfo_var));
		ExitStatusRequestInfo_t20368951 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		ExitStatusRequestInfo_t20368951 * L_3 = V_0;
		NullCheck(L_3);
		uint32_t L_4 = ExitStatusRequestInfo_get_ExitStatus_m3762026653(L_3, /*hidden argument*/NULL);
		SshCommand_set_ExitStatus_m2906118476(__this, L_4, /*hidden argument*/NULL);
		ExitStatusRequestInfo_t20368951 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = RequestInfo_get_WantReply_m1703309796(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject* L_7 = __this->get__channel_2();
		NullCheck(L_7);
		uint32_t L_8 = InterfaceFuncInvoker0< uint32_t >::Invoke(8 /* System.UInt32 Renci.SshNet.Channels.IChannel::get_LocalChannelNumber() */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_7);
		ChannelSuccessMessage_t1918479768 * L_9 = (ChannelSuccessMessage_t1918479768 *)il2cpp_codegen_object_new(ChannelSuccessMessage_t1918479768_il2cpp_TypeInfo_var);
		ChannelSuccessMessage__ctor_m2529184546(L_9, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		RuntimeObject* L_10 = __this->get__session_0();
		ChannelSuccessMessage_t1918479768 * L_11 = V_1;
		NullCheck(L_10);
		InterfaceActionInvoker1< Message_t2172764883 * >::Invoke(7 /* System.Void Renci.SshNet.ISession::SendMessage(Renci.SshNet.Messages.Message) */, ISession_t2464340384_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}

IL_0041:
	{
		ChannelRequestEventArgs_t205415504 * L_12 = ___e1;
		NullCheck(L_12);
		RequestInfo_t1797926055 * L_13 = ChannelRequestEventArgs_get_Info_m2332525183(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = RequestInfo_get_WantReply_m1703309796(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject* L_15 = __this->get__channel_2();
		NullCheck(L_15);
		uint32_t L_16 = InterfaceFuncInvoker0< uint32_t >::Invoke(8 /* System.UInt32 Renci.SshNet.Channels.IChannel::get_LocalChannelNumber() */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_15);
		ChannelFailureMessage_t1527543386 * L_17 = (ChannelFailureMessage_t1527543386 *)il2cpp_codegen_object_new(ChannelFailureMessage_t1527543386_il2cpp_TypeInfo_var);
		ChannelFailureMessage__ctor_m2351468724(L_17, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		RuntimeObject* L_18 = __this->get__session_0();
		ChannelFailureMessage_t1527543386 * L_19 = V_2;
		NullCheck(L_18);
		InterfaceActionInvoker1< Message_t2172764883 * >::Invoke(7 /* System.Void Renci.SshNet.ISession::SendMessage(Renci.SshNet.Messages.Message) */, ISession_t2464340384_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_006b:
	{
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::Channel_ExtendedDataReceived(System.Object,Renci.SshNet.Common.ChannelExtendedDataEventArgs)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Channel_ExtendedDataReceived_m1118478954 (SshCommand_t2829160041 * __this, RuntimeObject * ___sender0, ChannelExtendedDataEventArgs_t4290060220 * ___e1, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = SshCommand_get_ExtendedOutputStream_m2828446147(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		Stream_t1273022909 * L_1 = SshCommand_get_ExtendedOutputStream_m2828446147(__this, /*hidden argument*/NULL);
		ChannelExtendedDataEventArgs_t4290060220 * L_2 = ___e1;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = ChannelDataEventArgs_get_Data_m2618644804(L_2, /*hidden argument*/NULL);
		ChannelExtendedDataEventArgs_t4290060220 * L_4 = ___e1;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = ChannelDataEventArgs_get_Data_m2618644804(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		Stream_t1273022909 * L_6 = SshCommand_get_ExtendedOutputStream_m2828446147(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_6);
	}

IL_002d:
	{
		ChannelExtendedDataEventArgs_t4290060220 * L_7 = ___e1;
		NullCheck(L_7);
		uint32_t L_8 = ChannelExtendedDataEventArgs_get_DataTypeCode_m4153836835(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		__this->set__hasError_7((bool)1);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::Channel_DataReceived(System.Object,Renci.SshNet.Common.ChannelDataEventArgs)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Channel_DataReceived_m474707499 (SshCommand_t2829160041 * __this, RuntimeObject * ___sender0, ChannelDataEventArgs_t1617664455 * ___e1, const RuntimeMethod* method)
{
	CommandAsyncResult_t1797581660 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t1273022909 * L_0 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		Stream_t1273022909 * L_1 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		ChannelDataEventArgs_t1617664455 * L_2 = ___e1;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = ChannelDataEventArgs_get_Data_m2618644804(L_2, /*hidden argument*/NULL);
		ChannelDataEventArgs_t1617664455 * L_4 = ___e1;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = ChannelDataEventArgs_get_Data_m2618644804(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		Stream_t1273022909 * L_6 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_6);
	}

IL_002d:
	{
		CommandAsyncResult_t1797581660 * L_7 = __this->get__asyncResult_3();
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		CommandAsyncResult_t1797581660 * L_8 = __this->get__asyncResult_3();
		V_0 = L_8;
		V_1 = (bool)0;
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		CommandAsyncResult_t1797581660 * L_9 = V_0;
		Monitor_Enter_m984175629(NULL /*static, unused*/, L_9, (bool*)(&V_1), /*hidden argument*/NULL);
		CommandAsyncResult_t1797581660 * L_10 = __this->get__asyncResult_3();
		CommandAsyncResult_t1797581660 * L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12 = CommandAsyncResult_get_BytesReceived_m1093715432(L_11, /*hidden argument*/NULL);
		ChannelDataEventArgs_t1617664455 * L_13 = ___e1;
		NullCheck(L_13);
		ByteU5BU5D_t4116647657* L_14 = ChannelDataEventArgs_get_Data_m2618644804(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		NullCheck(L_11);
		CommandAsyncResult_set_BytesReceived_m2681654271(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x6C, FINALLY_0062);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		{
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_006b;
			}
		}

IL_0065:
		{
			CommandAsyncResult_t1797581660 * L_16 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		}

IL_006b:
		{
			IL2CPP_END_FINALLY(98)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006c:
	{
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::WaitOnHandle(System.Threading.WaitHandle)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_WaitOnHandle_m707372086 (SshCommand_t2829160041 * __this, WaitHandle_t1743403487 * ___waitHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_WaitOnHandle_m707372086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		WaitHandleU5BU5D_t96772038* L_0 = (WaitHandleU5BU5D_t96772038*)SZArrayNew(WaitHandleU5BU5D_t96772038_il2cpp_TypeInfo_var, (uint32_t)2);
		WaitHandleU5BU5D_t96772038* L_1 = L_0;
		EventWaitHandle_t777845177 * L_2 = __this->get__sessionErrorOccuredWaitHandle_5();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (WaitHandle_t1743403487 *)L_2);
		WaitHandleU5BU5D_t96772038* L_3 = L_1;
		WaitHandle_t1743403487 * L_4 = ___waitHandle0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (WaitHandle_t1743403487 *)L_4);
		TimeSpan_t881159249  L_5 = SshCommand_get_CommandTimeout_m950036237(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t1743403487_il2cpp_TypeInfo_var);
		int32_t L_6 = WaitHandle_WaitAny_m2761571109(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)258))))
		{
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_002b:
	{
		Exception_t * L_9 = __this->get__exception_6();
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, SshCommand_WaitOnHandle_m707372086_RuntimeMethod_var);
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_10 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = SshCommand_get_CommandText_m3012478698(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		String_t* L_14 = String_Format_m1881875187(NULL /*static, unused*/, L_10, _stringLiteral2158681786, L_12, /*hidden argument*/NULL);
		SshOperationTimeoutException_t3702980668 * L_15 = (SshOperationTimeoutException_t3702980668 *)il2cpp_codegen_object_new(SshOperationTimeoutException_t3702980668_il2cpp_TypeInfo_var);
		SshOperationTimeoutException__ctor_m1929858942(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, SshCommand_WaitOnHandle_m707372086_RuntimeMethod_var);
	}
}
// System.Void Renci.SshNet.SshCommand::UnsubscribeFromEventsAndDisposeChannel(Renci.SshNet.Channels.IChannel)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_UnsubscribeFromEventsAndDisposeChannel_m2528369013 (SshCommand_t2829160041 * __this, RuntimeObject* ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_UnsubscribeFromEventsAndDisposeChannel_m2528369013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___channel0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = ___channel0;
		intptr_t L_2 = (intptr_t)SshCommand_Channel_DataReceived_m474707499_RuntimeMethod_var;
		EventHandler_1_t3836791184 * L_3 = (EventHandler_1_t3836791184 *)il2cpp_codegen_object_new(EventHandler_1_t3836791184_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m274747851(L_3, __this, L_2, /*hidden argument*/EventHandler_1__ctor_m274747851_RuntimeMethod_var);
		NullCheck(L_1);
		InterfaceActionInvoker1< EventHandler_1_t3836791184 * >::Invoke(1 /* System.Void Renci.SshNet.Channels.IChannel::remove_DataReceived(System.EventHandler`1<Renci.SshNet.Common.ChannelDataEventArgs>) */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_1, L_3);
		RuntimeObject* L_4 = ___channel0;
		intptr_t L_5 = (intptr_t)SshCommand_Channel_ExtendedDataReceived_m1118478954_RuntimeMethod_var;
		EventHandler_1_t2214219653 * L_6 = (EventHandler_1_t2214219653 *)il2cpp_codegen_object_new(EventHandler_1_t2214219653_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3494452931(L_6, __this, L_5, /*hidden argument*/EventHandler_1__ctor_m3494452931_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_t2214219653 * >::Invoke(3 /* System.Void Renci.SshNet.Channels.IChannel::remove_ExtendedDataReceived(System.EventHandler`1<Renci.SshNet.Common.ChannelExtendedDataEventArgs>) */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_7 = ___channel0;
		intptr_t L_8 = (intptr_t)SshCommand_Channel_RequestReceived_m3635259687_RuntimeMethod_var;
		EventHandler_1_t2424542233 * L_9 = (EventHandler_1_t2424542233 *)il2cpp_codegen_object_new(EventHandler_1_t2424542233_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3442468153(L_9, __this, L_8, /*hidden argument*/EventHandler_1__ctor_m3442468153_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< EventHandler_1_t2424542233 * >::Invoke(5 /* System.Void Renci.SshNet.Channels.IChannel::remove_RequestReceived(System.EventHandler`1<Renci.SshNet.Common.ChannelRequestEventArgs>) */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_7, L_9);
		RuntimeObject* L_10 = ___channel0;
		intptr_t L_11 = (intptr_t)SshCommand_Channel_Closed_m2949300017_RuntimeMethod_var;
		EventHandler_1_t1715808396 * L_12 = (EventHandler_1_t1715808396 *)il2cpp_codegen_object_new(EventHandler_1_t1715808396_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2000325318(L_12, __this, L_11, /*hidden argument*/EventHandler_1__ctor_m2000325318_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_t1715808396 * >::Invoke(7 /* System.Void Renci.SshNet.Channels.IChannel::remove_Closed(System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs>) */, IChannel_t4269808054_il2cpp_TypeInfo_var, L_10, L_12);
		RuntimeObject* L_13 = ___channel0;
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Dispose_m4262644746 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_Dispose_m4262644746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Renci.SshNet.SshCommand::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Dispose_m1773330606 (SshCommand_t2829160041 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshCommand_Dispose_m1773330606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Stream_t1273022909 * V_2 = NULL;
	Stream_t1273022909 * V_3 = NULL;
	EventWaitHandle_t777845177 * V_4 = NULL;
	{
		bool L_0 = __this->get__isDisposed_16();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject* L_2 = __this->get__session_0();
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		intptr_t L_5 = (intptr_t)SshCommand_Session_Disconnected_m809188290_RuntimeMethod_var;
		EventHandler_1_t1515976428 * L_6 = (EventHandler_1_t1515976428 *)il2cpp_codegen_object_new(EventHandler_1_t1515976428_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2536525559(L_6, __this, L_5, /*hidden argument*/EventHandler_1__ctor_m2536525559_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_t1515976428 * >::Invoke(32 /* System.Void Renci.SshNet.ISession::remove_Disconnected(System.EventHandler`1<System.EventArgs>) */, ISession_t2464340384_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_7 = V_0;
		intptr_t L_8 = (intptr_t)SshCommand_Session_ErrorOccured_m3705556835_RuntimeMethod_var;
		EventHandler_1_t3115254733 * L_9 = (EventHandler_1_t3115254733 *)il2cpp_codegen_object_new(EventHandler_1_t3115254733_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1356621408(L_9, __this, L_8, /*hidden argument*/EventHandler_1__ctor_m1356621408_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< EventHandler_1_t3115254733 * >::Invoke(34 /* System.Void Renci.SshNet.ISession::remove_ErrorOccured(System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs>) */, ISession_t2464340384_il2cpp_TypeInfo_var, L_7, L_9);
		__this->set__session_0((RuntimeObject*)NULL);
	}

IL_0044:
	{
		RuntimeObject* L_10 = __this->get__channel_2();
		V_1 = L_10;
		RuntimeObject* L_11 = V_1;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_12 = V_1;
		SshCommand_UnsubscribeFromEventsAndDisposeChannel_m2528369013(__this, L_12, /*hidden argument*/NULL);
		__this->set__channel_2((RuntimeObject*)NULL);
	}

IL_005c:
	{
		Stream_t1273022909 * L_13 = SshCommand_get_OutputStream_m540101747(__this, /*hidden argument*/NULL);
		V_2 = L_13;
		Stream_t1273022909 * L_14 = V_2;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		Stream_t1273022909 * L_15 = V_2;
		NullCheck(L_15);
		Stream_Dispose_m2589290611(L_15, /*hidden argument*/NULL);
		SshCommand_set_OutputStream_m2237659458(__this, (Stream_t1273022909 *)NULL, /*hidden argument*/NULL);
	}

IL_0073:
	{
		Stream_t1273022909 * L_16 = SshCommand_get_ExtendedOutputStream_m2828446147(__this, /*hidden argument*/NULL);
		V_3 = L_16;
		Stream_t1273022909 * L_17 = V_3;
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		Stream_t1273022909 * L_18 = V_3;
		NullCheck(L_18);
		Stream_Dispose_m2589290611(L_18, /*hidden argument*/NULL);
		SshCommand_set_ExtendedOutputStream_m2804900118(__this, (Stream_t1273022909 *)NULL, /*hidden argument*/NULL);
	}

IL_008a:
	{
		EventWaitHandle_t777845177 * L_19 = __this->get__sessionErrorOccuredWaitHandle_5();
		V_4 = L_19;
		EventWaitHandle_t777845177 * L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		EventWaitHandle_t777845177 * L_21 = V_4;
		NullCheck(L_21);
		WaitHandle_Dispose_m2233804502(L_21, /*hidden argument*/NULL);
		__this->set__sessionErrorOccuredWaitHandle_5((EventWaitHandle_t777845177 *)NULL);
	}

IL_00a4:
	{
		__this->set__isDisposed_16((bool)1);
	}

IL_00ab:
	{
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SshCommand_Finalize_m199495180 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Renci.SshNet.SshCommand::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0010:
	{
		return;
	}
}
// System.Void Renci.SshNet.SshCommand::<Channel_Closed>b__47_0()
extern "C" IL2CPP_METHOD_ATTR void SshCommand_U3CChannel_ClosedU3Eb__47_0_m3630243828 (SshCommand_t2829160041 * __this, const RuntimeMethod* method)
{
	{
		AsyncCallback_t3962456242 * L_0 = __this->get__callback_4();
		CommandAsyncResult_t1797581660 * L_1 = __this->get__asyncResult_3();
		NullCheck(L_0);
		AsyncCallback_Invoke_m3156993048(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Renci.SshNet.SshMessageFactory::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SshMessageFactory__cctor_m1390114560 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory__cctor_m1390114560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MessageMetadata_t174986905 * V_1 = NULL;
	{
		MessageMetadataU5BU5D_t1675896548* L_0 = (MessageMetadataU5BU5D_t1675896548*)SZArrayNew(MessageMetadataU5BU5D_t1675896548_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		MessageMetadataU5BU5D_t1675896548* L_1 = L_0;
		MessageMetadata_1_t2954632716 * L_2 = (MessageMetadata_1_t2954632716 *)il2cpp_codegen_object_new(MessageMetadata_1_t2954632716_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m3281235739(L_2, (uint8_t)0, _stringLiteral271365708, (uint8_t)((int32_t)20), /*hidden argument*/MessageMetadata_1__ctor_m3281235739_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MessageMetadata_t174986905 *)L_2);
		MessageMetadataU5BU5D_t1675896548* L_3 = L_1;
		MessageMetadata_1_t3229348390 * L_4 = (MessageMetadata_1_t3229348390 *)il2cpp_codegen_object_new(MessageMetadata_1_t3229348390_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m2228197956(L_4, (uint8_t)1, _stringLiteral2563265142, (uint8_t)((int32_t)21), /*hidden argument*/MessageMetadata_1__ctor_m2228197956_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MessageMetadata_t174986905 *)L_4);
		MessageMetadataU5BU5D_t1675896548* L_5 = L_3;
		MessageMetadata_1_t3137192560 * L_6 = (MessageMetadata_1_t3137192560 *)il2cpp_codegen_object_new(MessageMetadata_1_t3137192560_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1464327441(L_6, (uint8_t)2, _stringLiteral1012920613, (uint8_t)((int32_t)82), /*hidden argument*/MessageMetadata_1__ctor_m1464327441_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (MessageMetadata_t174986905 *)L_6);
		MessageMetadataU5BU5D_t1675896548* L_7 = L_5;
		MessageMetadata_1_t3739975694 * L_8 = (MessageMetadata_1_t3739975694 *)il2cpp_codegen_object_new(MessageMetadata_1_t3739975694_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m2839893545(L_8, (uint8_t)3, _stringLiteral1089466285, (uint8_t)((int32_t)92), /*hidden argument*/MessageMetadata_1__ctor_m2839893545_RuntimeMethod_var);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (MessageMetadata_t174986905 *)L_8);
		MessageMetadataU5BU5D_t1675896548* L_9 = L_7;
		MessageMetadata_1_t2662122351 * L_10 = (MessageMetadata_1_t2662122351 *)il2cpp_codegen_object_new(MessageMetadata_1_t2662122351_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m2050352774(L_10, (uint8_t)4, _stringLiteral2449388610, (uint8_t)((int32_t)100), /*hidden argument*/MessageMetadata_1__ctor_m2050352774_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (MessageMetadata_t174986905 *)L_10);
		MessageMetadataU5BU5D_t1675896548* L_11 = L_9;
		MessageMetadata_1_t3461637843 * L_12 = (MessageMetadata_1_t3461637843 *)il2cpp_codegen_object_new(MessageMetadata_1_t3461637843_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m3921161069(L_12, (uint8_t)5, _stringLiteral1851283666, (uint8_t)((int32_t)95), /*hidden argument*/MessageMetadata_1__ctor_m3921161069_RuntimeMethod_var);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (MessageMetadata_t174986905 *)L_12);
		MessageMetadataU5BU5D_t1675896548* L_13 = L_11;
		MessageMetadata_1_t2620507973 * L_14 = (MessageMetadata_1_t2620507973 *)il2cpp_codegen_object_new(MessageMetadata_1_t2620507973_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1836645595(L_14, (uint8_t)6, _stringLiteral607927065, (uint8_t)((int32_t)94), /*hidden argument*/MessageMetadata_1__ctor_m1836645595_RuntimeMethod_var);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (MessageMetadata_t174986905 *)L_14);
		MessageMetadataU5BU5D_t1675896548* L_15 = L_13;
		MessageMetadata_1_t3071453335 * L_16 = (MessageMetadata_1_t3071453335 *)il2cpp_codegen_object_new(MessageMetadata_1_t3071453335_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m2493900951(L_16, (uint8_t)7, _stringLiteral237968521, (uint8_t)((int32_t)98), /*hidden argument*/MessageMetadata_1__ctor_m2493900951_RuntimeMethod_var);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (MessageMetadata_t174986905 *)L_16);
		MessageMetadataU5BU5D_t1675896548* L_17 = L_15;
		MessageMetadata_1_t1664368617 * L_18 = (MessageMetadata_1_t1664368617 *)il2cpp_codegen_object_new(MessageMetadata_1_t1664368617_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m3538886075(L_18, (uint8_t)8, _stringLiteral1833558336, (uint8_t)((int32_t)53), /*hidden argument*/MessageMetadata_1__ctor_m3538886075_RuntimeMethod_var);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (MessageMetadata_t174986905 *)L_18);
		MessageMetadataU5BU5D_t1675896548* L_19 = L_17;
		MessageMetadata_1_t939427463 * L_20 = (MessageMetadata_1_t939427463 *)il2cpp_codegen_object_new(MessageMetadata_1_t939427463_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m654010030(L_20, (uint8_t)((int32_t)9), _stringLiteral2524524350, (uint8_t)((int32_t)61), /*hidden argument*/MessageMetadata_1__ctor_m654010030_RuntimeMethod_var);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (MessageMetadata_t174986905 *)L_20);
		MessageMetadataU5BU5D_t1675896548* L_21 = L_19;
		MessageMetadata_1_t3801097035 * L_22 = (MessageMetadata_1_t3801097035 *)il2cpp_codegen_object_new(MessageMetadata_1_t3801097035_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1409899146(L_22, (uint8_t)((int32_t)10), _stringLiteral500949310, (uint8_t)((int32_t)51), /*hidden argument*/MessageMetadata_1__ctor_m1409899146_RuntimeMethod_var);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (MessageMetadata_t174986905 *)L_22);
		MessageMetadataU5BU5D_t1675896548* L_23 = L_21;
		MessageMetadata_1_t284949424 * L_24 = (MessageMetadata_1_t284949424 *)il2cpp_codegen_object_new(MessageMetadata_1_t284949424_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1285590279(L_24, (uint8_t)((int32_t)11), _stringLiteral4237570511, (uint8_t)4, /*hidden argument*/MessageMetadata_1__ctor_m1285590279_RuntimeMethod_var);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (MessageMetadata_t174986905 *)L_24);
		MessageMetadataU5BU5D_t1675896548* L_25 = L_23;
		MessageMetadata_1_t2451642879 * L_26 = (MessageMetadata_1_t2451642879 *)il2cpp_codegen_object_new(MessageMetadata_1_t2451642879_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m2178521596(L_26, (uint8_t)((int32_t)12), _stringLiteral4246859847, (uint8_t)((int32_t)80), /*hidden argument*/MessageMetadata_1__ctor_m2178521596_RuntimeMethod_var);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (MessageMetadata_t174986905 *)L_26);
		MessageMetadataU5BU5D_t1675896548* L_27 = L_25;
		MessageMetadata_1_t4074031887 * L_28 = (MessageMetadata_1_t4074031887 *)il2cpp_codegen_object_new(MessageMetadata_1_t4074031887_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m2334713808(L_28, (uint8_t)((int32_t)13), _stringLiteral1889631431, (uint8_t)((int32_t)90), /*hidden argument*/MessageMetadata_1__ctor_m2334713808_RuntimeMethod_var);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (MessageMetadata_t174986905 *)L_28);
		MessageMetadataU5BU5D_t1675896548* L_29 = L_27;
		MessageMetadata_1_t3892623955 * L_30 = (MessageMetadata_1_t3892623955 *)il2cpp_codegen_object_new(MessageMetadata_1_t3892623955_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1303187418(L_30, (uint8_t)((int32_t)14), _stringLiteral4268619302, (uint8_t)((int32_t)91), /*hidden argument*/MessageMetadata_1__ctor_m1303187418_RuntimeMethod_var);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (MessageMetadata_t174986905 *)L_30);
		MessageMetadataU5BU5D_t1675896548* L_31 = L_29;
		MessageMetadata_1_t1581200532 * L_32 = (MessageMetadata_1_t1581200532 *)il2cpp_codegen_object_new(MessageMetadata_1_t1581200532_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m2983630178(L_32, (uint8_t)((int32_t)15), _stringLiteral2594283757, (uint8_t)((int32_t)60), /*hidden argument*/MessageMetadata_1__ctor_m2983630178_RuntimeMethod_var);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (MessageMetadata_t174986905 *)L_32);
		MessageMetadataU5BU5D_t1675896548* L_33 = L_31;
		MessageMetadata_1_t1782393825 * L_34 = (MessageMetadata_1_t1782393825 *)il2cpp_codegen_object_new(MessageMetadata_1_t1782393825_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1795138437(L_34, (uint8_t)((int32_t)16), _stringLiteral2952326403, (uint8_t)3, /*hidden argument*/MessageMetadata_1__ctor_m1795138437_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (MessageMetadata_t174986905 *)L_34);
		MessageMetadataU5BU5D_t1675896548* L_35 = L_33;
		MessageMetadata_1_t529423311 * L_36 = (MessageMetadata_1_t529423311 *)il2cpp_codegen_object_new(MessageMetadata_1_t529423311_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1211752063(L_36, (uint8_t)((int32_t)17), _stringLiteral4035327630, (uint8_t)((int32_t)81), /*hidden argument*/MessageMetadata_1__ctor_m1211752063_RuntimeMethod_var);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (MessageMetadata_t174986905 *)L_36);
		MessageMetadataU5BU5D_t1675896548* L_37 = L_35;
		MessageMetadata_1_t3053058733 * L_38 = (MessageMetadata_1_t3053058733 *)il2cpp_codegen_object_new(MessageMetadata_1_t3053058733_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1956490332(L_38, (uint8_t)((int32_t)18), _stringLiteral833752707, (uint8_t)((int32_t)99), /*hidden argument*/MessageMetadata_1__ctor_m1956490332_RuntimeMethod_var);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (MessageMetadata_t174986905 *)L_38);
		MessageMetadataU5BU5D_t1675896548* L_39 = L_37;
		MessageMetadata_1_t3277971202 * L_40 = (MessageMetadata_1_t3277971202 *)il2cpp_codegen_object_new(MessageMetadata_1_t3277971202_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m3578280787(L_40, (uint8_t)((int32_t)19), _stringLiteral1356699628, (uint8_t)((int32_t)60), /*hidden argument*/MessageMetadata_1__ctor_m3578280787_RuntimeMethod_var);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (MessageMetadata_t174986905 *)L_40);
		MessageMetadataU5BU5D_t1675896548* L_41 = L_39;
		MessageMetadata_1_t3241984111 * L_42 = (MessageMetadata_1_t3241984111 *)il2cpp_codegen_object_new(MessageMetadata_1_t3241984111_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1105904974(L_42, (uint8_t)((int32_t)20), _stringLiteral391758822, (uint8_t)1, /*hidden argument*/MessageMetadata_1__ctor_m1105904974_RuntimeMethod_var);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (MessageMetadata_t174986905 *)L_42);
		MessageMetadataU5BU5D_t1675896548* L_43 = L_41;
		MessageMetadata_1_t3845700005 * L_44 = (MessageMetadata_1_t3845700005 *)il2cpp_codegen_object_new(MessageMetadata_1_t3845700005_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m4065994931(L_44, (uint8_t)((int32_t)21), _stringLiteral1246432486, (uint8_t)((int32_t)52), /*hidden argument*/MessageMetadata_1__ctor_m4065994931_RuntimeMethod_var);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (MessageMetadata_t174986905 *)L_44);
		MessageMetadataU5BU5D_t1675896548* L_45 = L_43;
		MessageMetadata_1_t2996753660 * L_46 = (MessageMetadata_1_t2996753660 *)il2cpp_codegen_object_new(MessageMetadata_1_t2996753660_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m4271939786(L_46, (uint8_t)((int32_t)22), _stringLiteral3142069082, (uint8_t)((int32_t)60), /*hidden argument*/MessageMetadata_1__ctor_m4271939786_RuntimeMethod_var);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (MessageMetadata_t174986905 *)L_46);
		MessageMetadataU5BU5D_t1675896548* L_47 = L_45;
		MessageMetadata_1_t1634548274 * L_48 = (MessageMetadata_1_t1634548274 *)il2cpp_codegen_object_new(MessageMetadata_1_t1634548274_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1530620745(L_48, (uint8_t)((int32_t)23), _stringLiteral2694429669, (uint8_t)2, /*hidden argument*/MessageMetadata_1__ctor_m1530620745_RuntimeMethod_var);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (MessageMetadata_t174986905 *)L_48);
		MessageMetadataU5BU5D_t1675896548* L_49 = L_47;
		MessageMetadata_1_t3136770008 * L_50 = (MessageMetadata_1_t3136770008 *)il2cpp_codegen_object_new(MessageMetadata_1_t3136770008_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1310681405(L_50, (uint8_t)((int32_t)24), _stringLiteral1543274434, (uint8_t)((int32_t)93), /*hidden argument*/MessageMetadata_1__ctor_m1310681405_RuntimeMethod_var);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (MessageMetadata_t174986905 *)L_50);
		MessageMetadataU5BU5D_t1675896548* L_51 = L_49;
		MessageMetadata_1_t2166108262 * L_52 = (MessageMetadata_1_t2166108262 *)il2cpp_codegen_object_new(MessageMetadata_1_t2166108262_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1414086506(L_52, (uint8_t)((int32_t)25), _stringLiteral1720518706, (uint8_t)((int32_t)96), /*hidden argument*/MessageMetadata_1__ctor_m1414086506_RuntimeMethod_var);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (MessageMetadata_t174986905 *)L_52);
		MessageMetadataU5BU5D_t1675896548* L_53 = L_51;
		MessageMetadata_1_t2718614835 * L_54 = (MessageMetadata_1_t2718614835 *)il2cpp_codegen_object_new(MessageMetadata_1_t2718614835_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m3805855773(L_54, (uint8_t)((int32_t)26), _stringLiteral1945050983, (uint8_t)((int32_t)97), /*hidden argument*/MessageMetadata_1__ctor_m3805855773_RuntimeMethod_var);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (MessageMetadata_t174986905 *)L_54);
		MessageMetadataU5BU5D_t1675896548* L_55 = L_53;
		MessageMetadata_1_t4248897102 * L_56 = (MessageMetadata_1_t4248897102 *)il2cpp_codegen_object_new(MessageMetadata_1_t4248897102_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1704061716(L_56, (uint8_t)((int32_t)27), _stringLiteral1254495072, (uint8_t)6, /*hidden argument*/MessageMetadata_1__ctor_m1704061716_RuntimeMethod_var);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (MessageMetadata_t174986905 *)L_56);
		MessageMetadataU5BU5D_t1675896548* L_57 = L_55;
		MessageMetadata_1_t9813608 * L_58 = (MessageMetadata_1_t9813608 *)il2cpp_codegen_object_new(MessageMetadata_1_t9813608_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m2279192927(L_58, (uint8_t)((int32_t)28), _stringLiteral1578290094, (uint8_t)((int32_t)31), /*hidden argument*/MessageMetadata_1__ctor_m2279192927_RuntimeMethod_var);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (MessageMetadata_t174986905 *)L_58);
		MessageMetadataU5BU5D_t1675896548* L_59 = L_57;
		MessageMetadata_1_t83236809 * L_60 = (MessageMetadata_1_t83236809 *)il2cpp_codegen_object_new(MessageMetadata_1_t83236809_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m3854366878(L_60, (uint8_t)((int32_t)29), _stringLiteral2192784007, (uint8_t)((int32_t)31), /*hidden argument*/MessageMetadata_1__ctor_m3854366878_RuntimeMethod_var);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (MessageMetadata_t174986905 *)L_60);
		MessageMetadataU5BU5D_t1675896548* L_61 = L_59;
		MessageMetadata_1_t2610932943 * L_62 = (MessageMetadata_1_t2610932943 *)il2cpp_codegen_object_new(MessageMetadata_1_t2610932943_il2cpp_TypeInfo_var);
		MessageMetadata_1__ctor_m1792630017(L_62, (uint8_t)((int32_t)30), _stringLiteral2897561006, (uint8_t)((int32_t)33), /*hidden argument*/MessageMetadata_1__ctor_m1792630017_RuntimeMethod_var);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (MessageMetadata_t174986905 *)L_62);
		((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->set_AllMessages_2(L_61);
		MessageMetadataU5BU5D_t1675896548* L_63 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		NullCheck(L_63);
		Dictionary_2_t4255210500 * L_64 = (Dictionary_2_t4255210500 *)il2cpp_codegen_object_new(Dictionary_2_t4255210500_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m774772006(L_64, (((int32_t)((int32_t)(((RuntimeArray *)L_63)->max_length)))), /*hidden argument*/Dictionary_2__ctor_m774772006_RuntimeMethod_var);
		((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->set_MessagesByName_3(L_64);
		V_0 = 0;
		goto IL_0255;
	}

IL_0238:
	{
		MessageMetadataU5BU5D_t1675896548* L_65 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		MessageMetadata_t174986905 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_1 = L_68;
		RuntimeObject* L_69 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_MessagesByName_3();
		MessageMetadata_t174986905 * L_70 = V_1;
		NullCheck(L_70);
		String_t* L_71 = L_70->get_Name_1();
		MessageMetadata_t174986905 * L_72 = V_1;
		NullCheck(L_69);
		InterfaceActionInvoker2< String_t*, MessageMetadata_t174986905 * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>::Add(!0,!1) */, IDictionary_2_t2719061891_il2cpp_TypeInfo_var, L_69, L_71, L_72);
		int32_t L_73 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0255:
	{
		int32_t L_74 = V_0;
		MessageMetadataU5BU5D_t1675896548* L_75 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		NullCheck(L_75);
		if ((((int32_t)L_74) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_75)->max_length)))))))
		{
			goto IL_0238;
		}
	}
	{
		return;
	}
}
// System.Void Renci.SshNet.SshMessageFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SshMessageFactory__ctor_m2783403138 (SshMessageFactory_t1004590256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory__ctor_m2783403138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		BooleanU5BU5D_t2897418192* L_0 = (BooleanU5BU5D_t2897418192*)SZArrayNew(BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		__this->set__activatedMessagesById_1(L_0);
		MessageMetadataU5BU5D_t1675896548* L_1 = (MessageMetadataU5BU5D_t1675896548*)SZArrayNew(MessageMetadataU5BU5D_t1675896548_il2cpp_TypeInfo_var, (uint32_t)((int32_t)101));
		__this->set__enabledMessagesByNumber_0(L_1);
		return;
	}
}
// Renci.SshNet.Messages.Message Renci.SshNet.SshMessageFactory::Create(System.Byte)
extern "C" IL2CPP_METHOD_ATTR Message_t2172764883 * SshMessageFactory_Create_m586131596 (SshMessageFactory_t1004590256 * __this, uint8_t ___messageNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory_Create_m586131596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MessageMetadata_t174986905 * V_0 = NULL;
	MessageMetadata_t174986905 * V_1 = NULL;
	int32_t V_2 = 0;
	MessageMetadata_t174986905 * V_3 = NULL;
	{
		uint8_t L_0 = ___messageNumber0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)100))))
		{
			goto IL_000c;
		}
	}
	{
		uint8_t L_1 = ___messageNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		SshException_t1435741398 * L_2 = SshMessageFactory_CreateMessageTypeNotSupportedException_m2372089327(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SshMessageFactory_Create_m586131596_RuntimeMethod_var);
	}

IL_000c:
	{
		MessageMetadataU5BU5D_t1675896548* L_3 = __this->get__enabledMessagesByNumber_0();
		uint8_t L_4 = ___messageNumber0;
		NullCheck(L_3);
		uint8_t L_5 = L_4;
		MessageMetadata_t174986905 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		MessageMetadata_t174986905 * L_7 = V_0;
		if (L_7)
		{
			goto IL_006f;
		}
	}
	{
		V_1 = (MessageMetadata_t174986905 *)NULL;
		V_2 = 0;
		goto IL_0037;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		MessageMetadataU5BU5D_t1675896548* L_8 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MessageMetadata_t174986905 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		MessageMetadata_t174986905 * L_12 = V_3;
		NullCheck(L_12);
		uint8_t L_13 = L_12->get_Number_2();
		uint8_t L_14 = ___messageNumber0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0033;
		}
	}
	{
		MessageMetadata_t174986905 * L_15 = V_3;
		V_1 = L_15;
		goto IL_0041;
	}

IL_0033:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		MessageMetadataU5BU5D_t1675896548* L_18 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_001e;
		}
	}

IL_0041:
	{
		MessageMetadata_t174986905 * L_19 = V_1;
		if (L_19)
		{
			goto IL_004b;
		}
	}
	{
		uint8_t L_20 = ___messageNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		SshException_t1435741398 * L_21 = SshMessageFactory_CreateMessageTypeNotSupportedException_m2372089327(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, SshMessageFactory_Create_m586131596_RuntimeMethod_var);
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_22 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_23 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		uint8_t L_25 = ___messageNumber0;
		uint8_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_27);
		String_t* L_28 = String_Format_m1881875187(NULL /*static, unused*/, L_22, _stringLiteral120353814, L_24, /*hidden argument*/NULL);
		SshException_t1435741398 * L_29 = (SshException_t1435741398 *)il2cpp_codegen_object_new(SshException_t1435741398_il2cpp_TypeInfo_var);
		SshException__ctor_m2413002657(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, NULL, SshMessageFactory_Create_m586131596_RuntimeMethod_var);
	}

IL_006f:
	{
		MessageMetadata_t174986905 * L_30 = V_0;
		NullCheck(L_30);
		Message_t2172764883 * L_31 = VirtFuncInvoker0< Message_t2172764883 * >::Invoke(4 /* Renci.SshNet.Messages.Message Renci.SshNet.SshMessageFactory/MessageMetadata::Create() */, L_30);
		return L_31;
	}
}
// System.Void Renci.SshNet.SshMessageFactory::DisableNonKeyExchangeMessages()
extern "C" IL2CPP_METHOD_ATTR void SshMessageFactory_DisableNonKeyExchangeMessages_m3297780821 (SshMessageFactory_t1004590256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory_DisableNonKeyExchangeMessages_m3297780821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_002c;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		MessageMetadataU5BU5D_t1675896548* L_0 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		MessageMetadata_t174986905 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		uint8_t L_4 = L_3->get_Number_2();
		V_1 = L_4;
		uint8_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		uint8_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)20))))
		{
			goto IL_001f;
		}
	}

IL_001a:
	{
		uint8_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)30))))
		{
			goto IL_0028;
		}
	}

IL_001f:
	{
		MessageMetadataU5BU5D_t1675896548* L_8 = __this->get__enabledMessagesByNumber_0();
		uint8_t L_9 = V_1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, NULL);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (MessageMetadata_t174986905 *)NULL);
	}

IL_0028:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		MessageMetadataU5BU5D_t1675896548* L_12 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Renci.SshNet.SshMessageFactory::EnableActivatedMessages()
extern "C" IL2CPP_METHOD_ATTR void SshMessageFactory_EnableActivatedMessages_m2260818562 (SshMessageFactory_t1004590256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory_EnableActivatedMessages_m2260818562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MessageMetadata_t174986905 * V_1 = NULL;
	MessageMetadata_t174986905 * V_2 = NULL;
	{
		V_0 = 0;
		goto IL_005a;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		MessageMetadataU5BU5D_t1675896548* L_0 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		MessageMetadata_t174986905 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		BooleanU5BU5D_t2897418192* L_4 = __this->get__activatedMessagesById_1();
		MessageMetadata_t174986905 * L_5 = V_1;
		NullCheck(L_5);
		uint8_t L_6 = L_5->get_Id_0();
		NullCheck(L_4);
		uint8_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		MessageMetadataU5BU5D_t1675896548* L_9 = __this->get__enabledMessagesByNumber_0();
		MessageMetadata_t174986905 * L_10 = V_1;
		NullCheck(L_10);
		uint8_t L_11 = L_10->get_Number_2();
		NullCheck(L_9);
		uint8_t L_12 = L_11;
		MessageMetadata_t174986905 * L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		MessageMetadata_t174986905 * L_14 = V_2;
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		MessageMetadata_t174986905 * L_15 = V_2;
		MessageMetadata_t174986905 * L_16 = V_1;
		if ((((RuntimeObject*)(MessageMetadata_t174986905 *)L_15) == ((RuntimeObject*)(MessageMetadata_t174986905 *)L_16)))
		{
			goto IL_0048;
		}
	}
	{
		MessageMetadata_t174986905 * L_17 = V_1;
		NullCheck(L_17);
		uint8_t L_18 = L_17->get_Number_2();
		MessageMetadata_t174986905 * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_Name_1();
		MessageMetadata_t174986905 * L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_Name_1();
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		SshException_t1435741398 * L_23 = SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197(NULL /*static, unused*/, L_18, L_20, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, NULL, SshMessageFactory_EnableActivatedMessages_m2260818562_RuntimeMethod_var);
	}

IL_0048:
	{
		MessageMetadataU5BU5D_t1675896548* L_24 = __this->get__enabledMessagesByNumber_0();
		MessageMetadata_t174986905 * L_25 = V_1;
		NullCheck(L_25);
		uint8_t L_26 = L_25->get_Number_2();
		MessageMetadata_t174986905 * L_27 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (MessageMetadata_t174986905 *)L_27);
	}

IL_0056:
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_005a:
	{
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
		MessageMetadataU5BU5D_t1675896548* L_30 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_AllMessages_2();
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Renci.SshNet.SshMessageFactory::EnableAndActivateMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void SshMessageFactory_EnableAndActivateMessage_m1376865366 (SshMessageFactory_t1004590256 * __this, String_t* ___messageName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory_EnableAndActivateMessage_m1376865366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SshMessageFactory_t1004590256 * V_0 = NULL;
	bool V_1 = false;
	MessageMetadata_t174986905 * V_2 = NULL;
	MessageMetadata_t174986905 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___messageName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2015510855, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SshMessageFactory_EnableAndActivateMessage_m1376865366_RuntimeMethod_var);
	}

IL_000e:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			SshMessageFactory_t1004590256 * L_2 = V_0;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
			RuntimeObject* L_3 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_MessagesByName_3();
			String_t* L_4 = ___messageName0;
			NullCheck(L_3);
			bool L_5 = InterfaceFuncInvoker2< bool, String_t*, MessageMetadata_t174986905 ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>::TryGetValue(!0,!1&) */, IDictionary_2_t2719061891_il2cpp_TypeInfo_var, L_3, L_4, (MessageMetadata_t174986905 **)(&V_2));
			if (L_5)
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			String_t* L_6 = ___messageName0;
			IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
			SshException_t1435741398 * L_7 = SshMessageFactory_CreateMessageNotSupportedException_m2300368093(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, SshMessageFactory_EnableAndActivateMessage_m1376865366_RuntimeMethod_var);
		}

IL_0030:
		{
			MessageMetadataU5BU5D_t1675896548* L_8 = __this->get__enabledMessagesByNumber_0();
			MessageMetadata_t174986905 * L_9 = V_2;
			NullCheck(L_9);
			uint8_t L_10 = L_9->get_Number_2();
			NullCheck(L_8);
			uint8_t L_11 = L_10;
			MessageMetadata_t174986905 * L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_3 = L_12;
			MessageMetadata_t174986905 * L_13 = V_3;
			if (!L_13)
			{
				goto IL_005d;
			}
		}

IL_0041:
		{
			MessageMetadata_t174986905 * L_14 = V_3;
			MessageMetadata_t174986905 * L_15 = V_2;
			if ((((RuntimeObject*)(MessageMetadata_t174986905 *)L_14) == ((RuntimeObject*)(MessageMetadata_t174986905 *)L_15)))
			{
				goto IL_005d;
			}
		}

IL_0045:
		{
			MessageMetadata_t174986905 * L_16 = V_2;
			NullCheck(L_16);
			uint8_t L_17 = L_16->get_Number_2();
			MessageMetadata_t174986905 * L_18 = V_2;
			NullCheck(L_18);
			String_t* L_19 = L_18->get_Name_1();
			MessageMetadata_t174986905 * L_20 = V_3;
			NullCheck(L_20);
			String_t* L_21 = L_20->get_Name_1();
			IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
			SshException_t1435741398 * L_22 = SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197(NULL /*static, unused*/, L_17, L_19, L_21, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, SshMessageFactory_EnableAndActivateMessage_m1376865366_RuntimeMethod_var);
		}

IL_005d:
		{
			MessageMetadataU5BU5D_t1675896548* L_23 = __this->get__enabledMessagesByNumber_0();
			MessageMetadata_t174986905 * L_24 = V_2;
			NullCheck(L_24);
			uint8_t L_25 = L_24->get_Number_2();
			MessageMetadata_t174986905 * L_26 = V_2;
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_26);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (MessageMetadata_t174986905 *)L_26);
			BooleanU5BU5D_t2897418192* L_27 = __this->get__activatedMessagesById_1();
			MessageMetadata_t174986905 * L_28 = V_2;
			NullCheck(L_28);
			uint8_t L_29 = L_28->get_Id_0();
			NullCheck(L_27);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (bool)1);
			IL2CPP_LEAVE(0x85, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		{
			bool L_30 = V_1;
			if (!L_30)
			{
				goto IL_0084;
			}
		}

IL_007e:
		{
			SshMessageFactory_t1004590256 * L_31 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		}

IL_0084:
		{
			IL2CPP_END_FINALLY(123)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0085:
	{
		return;
	}
}
// System.Void Renci.SshNet.SshMessageFactory::DisableAndDeactivateMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void SshMessageFactory_DisableAndDeactivateMessage_m2388353740 (SshMessageFactory_t1004590256 * __this, String_t* ___messageName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory_DisableAndDeactivateMessage_m2388353740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SshMessageFactory_t1004590256 * V_0 = NULL;
	bool V_1 = false;
	MessageMetadata_t174986905 * V_2 = NULL;
	MessageMetadata_t174986905 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___messageName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2015510855, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SshMessageFactory_DisableAndDeactivateMessage_m2388353740_RuntimeMethod_var);
	}

IL_000e:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			SshMessageFactory_t1004590256 * L_2 = V_0;
			Monitor_Enter_m984175629(NULL /*static, unused*/, L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
			RuntimeObject* L_3 = ((SshMessageFactory_t1004590256_StaticFields*)il2cpp_codegen_static_fields_for(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var))->get_MessagesByName_3();
			String_t* L_4 = ___messageName0;
			NullCheck(L_3);
			bool L_5 = InterfaceFuncInvoker2< bool, String_t*, MessageMetadata_t174986905 ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Renci.SshNet.SshMessageFactory/MessageMetadata>::TryGetValue(!0,!1&) */, IDictionary_2_t2719061891_il2cpp_TypeInfo_var, L_3, L_4, (MessageMetadata_t174986905 **)(&V_2));
			if (L_5)
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			String_t* L_6 = ___messageName0;
			IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
			SshException_t1435741398 * L_7 = SshMessageFactory_CreateMessageNotSupportedException_m2300368093(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, SshMessageFactory_DisableAndDeactivateMessage_m2388353740_RuntimeMethod_var);
		}

IL_0030:
		{
			MessageMetadataU5BU5D_t1675896548* L_8 = __this->get__enabledMessagesByNumber_0();
			MessageMetadata_t174986905 * L_9 = V_2;
			NullCheck(L_9);
			uint8_t L_10 = L_9->get_Number_2();
			NullCheck(L_8);
			uint8_t L_11 = L_10;
			MessageMetadata_t174986905 * L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_3 = L_12;
			MessageMetadata_t174986905 * L_13 = V_3;
			if (!L_13)
			{
				goto IL_005d;
			}
		}

IL_0041:
		{
			MessageMetadata_t174986905 * L_14 = V_3;
			MessageMetadata_t174986905 * L_15 = V_2;
			if ((((RuntimeObject*)(MessageMetadata_t174986905 *)L_14) == ((RuntimeObject*)(MessageMetadata_t174986905 *)L_15)))
			{
				goto IL_005d;
			}
		}

IL_0045:
		{
			MessageMetadata_t174986905 * L_16 = V_2;
			NullCheck(L_16);
			uint8_t L_17 = L_16->get_Number_2();
			MessageMetadata_t174986905 * L_18 = V_2;
			NullCheck(L_18);
			String_t* L_19 = L_18->get_Name_1();
			MessageMetadata_t174986905 * L_20 = V_3;
			NullCheck(L_20);
			String_t* L_21 = L_20->get_Name_1();
			IL2CPP_RUNTIME_CLASS_INIT(SshMessageFactory_t1004590256_il2cpp_TypeInfo_var);
			SshException_t1435741398 * L_22 = SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197(NULL /*static, unused*/, L_17, L_19, L_21, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, SshMessageFactory_DisableAndDeactivateMessage_m2388353740_RuntimeMethod_var);
		}

IL_005d:
		{
			BooleanU5BU5D_t2897418192* L_23 = __this->get__activatedMessagesById_1();
			MessageMetadata_t174986905 * L_24 = V_2;
			NullCheck(L_24);
			uint8_t L_25 = L_24->get_Id_0();
			NullCheck(L_23);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (bool)0);
			MessageMetadataU5BU5D_t1675896548* L_26 = __this->get__enabledMessagesByNumber_0();
			MessageMetadata_t174986905 * L_27 = V_2;
			NullCheck(L_27);
			uint8_t L_28 = L_27->get_Number_2();
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, NULL);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (MessageMetadata_t174986905 *)NULL);
			IL2CPP_LEAVE(0x85, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		{
			bool L_29 = V_1;
			if (!L_29)
			{
				goto IL_0084;
			}
		}

IL_007e:
		{
			SshMessageFactory_t1004590256 * L_30 = V_0;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		}

IL_0084:
		{
			IL2CPP_END_FINALLY(123)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0085:
	{
		return;
	}
}
// Renci.SshNet.Common.SshException Renci.SshNet.SshMessageFactory::CreateMessageTypeNotSupportedException(System.Byte)
extern "C" IL2CPP_METHOD_ATTR SshException_t1435741398 * SshMessageFactory_CreateMessageTypeNotSupportedException_m2372089327 (RuntimeObject * __this /* static, unused */, uint8_t ___messageNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory_CreateMessageTypeNotSupportedException_m2372089327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		uint8_t L_3 = ___messageNumber0;
		uint8_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		String_t* L_6 = String_Format_m1881875187(NULL /*static, unused*/, L_0, _stringLiteral2802756299, L_2, /*hidden argument*/NULL);
		SshException_t1435741398 * L_7 = (SshException_t1435741398 *)il2cpp_codegen_object_new(SshException_t1435741398_il2cpp_TypeInfo_var);
		SshException__ctor_m2413002657(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, SshMessageFactory_CreateMessageTypeNotSupportedException_m2372089327_RuntimeMethod_var);
	}
}
// Renci.SshNet.Common.SshException Renci.SshNet.SshMessageFactory::CreateMessageNotSupportedException(System.String)
extern "C" IL2CPP_METHOD_ATTR SshException_t1435741398 * SshMessageFactory_CreateMessageNotSupportedException_m2300368093 (RuntimeObject * __this /* static, unused */, String_t* ___messageName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory_CreateMessageNotSupportedException_m2300368093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		String_t* L_3 = ___messageName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		String_t* L_4 = String_Format_m1881875187(NULL /*static, unused*/, L_0, _stringLiteral1692331934, L_2, /*hidden argument*/NULL);
		SshException_t1435741398 * L_5 = (SshException_t1435741398 *)il2cpp_codegen_object_new(SshException_t1435741398_il2cpp_TypeInfo_var);
		SshException__ctor_m2413002657(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, SshMessageFactory_CreateMessageNotSupportedException_m2300368093_RuntimeMethod_var);
	}
}
// Renci.SshNet.Common.SshException Renci.SshNet.SshMessageFactory::CreateMessageTypeAlreadyEnabledForOtherMessageException(System.Byte,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR SshException_t1435741398 * SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197 (RuntimeObject * __this /* static, unused */, uint8_t ___messageNumber0, String_t* ___messageName1, String_t* ___currentEnabledForMessageName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		String_t* L_3 = ___messageName1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		uint8_t L_5 = ___messageNumber0;
		uint8_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		String_t* L_9 = ___currentEnabledForMessageName2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		String_t* L_10 = String_Format_m1881875187(NULL /*static, unused*/, L_0, _stringLiteral3776375927, L_8, /*hidden argument*/NULL);
		SshException_t1435741398 * L_11 = (SshException_t1435741398 *)il2cpp_codegen_object_new(SshException_t1435741398_il2cpp_TypeInfo_var);
		SshException__ctor_m2413002657(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, SshMessageFactory_CreateMessageTypeAlreadyEnabledForOtherMessageException_m3381016197_RuntimeMethod_var);
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
// System.Void Renci.SshNet.SshMessageFactory/MessageMetadata::.ctor(System.Byte,System.String,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MessageMetadata__ctor_m2614568645 (MessageMetadata_t174986905 * __this, uint8_t ___id0, String_t* ___name1, uint8_t ___number2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		uint8_t L_0 = ___id0;
		__this->set_Id_0(L_0);
		String_t* L_1 = ___name1;
		__this->set_Name_1(L_1);
		uint8_t L_2 = ___number2;
		__this->set_Number_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
