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


// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Text.Encoding
struct Encoding_t1523322056;
// Renci.SshNet.Common.SshDataStream
struct SshDataStream_t621401638;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Action
struct Action_t1264377477;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Renci.SshNet.Compression.ZlibStream
struct ZlibStream_t3374314272;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// Renci.SshNet.Session
struct Session_t2648700758;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Exception
struct Exception_t;
// Renci.SshNet.Messages.Connection.RequestInfo
struct RequestInfo_t1797926055;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.Queue`1<System.Byte>
struct Queue_1_t980555870;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// Renci.SshNet.ISession
struct ISession_t2464340384;
// System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs>
struct EventHandler_1_t3115254733;
// System.EventHandler`1<Renci.SshNet.Common.ChannelDataEventArgs>
struct EventHandler_1_t3836791184;
// System.EventHandler`1<Renci.SshNet.Common.ChannelExtendedDataEventArgs>
struct EventHandler_1_t2214219653;
// System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs>
struct EventHandler_1_t1715808396;
// System.EventHandler`1<Renci.SshNet.Common.ChannelRequestEventArgs>
struct EventHandler_1_t2424542233;
// System.Collections.Generic.IDictionary`2<Renci.SshNet.Common.TerminalModes,System.UInt32>
struct IDictionary_2_t1383147235;
// Renci.SshNet.Messages.Connection.ChannelOpenInfo
struct ChannelOpenInfo_t2541744565;
// System.EventHandler`1<Renci.SshNet.Common.ChannelOpenConfirmedEventArgs>
struct EventHandler_1_t1340650162;
// System.EventHandler`1<Renci.SshNet.Common.ChannelOpenFailedEventArgs>
struct EventHandler_1_t2708333525;

struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;



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
#ifndef EXTENSIONS_T432594648_H
#define EXTENSIONS_T432594648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.Extensions
struct  Extensions_t432594648  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONS_T432594648_H
#ifndef SEMAPHORELIGHT_T4163090541_H
#define SEMAPHORELIGHT_T4163090541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.SemaphoreLight
struct  SemaphoreLight_t4163090541  : public RuntimeObject
{
public:
	// System.Object Renci.SshNet.Common.SemaphoreLight::_lock
	RuntimeObject * ____lock_0;
	// System.Threading.ManualResetEvent Renci.SshNet.Common.SemaphoreLight::_waitHandle
	ManualResetEvent_t451242010 * ____waitHandle_1;
	// System.Int32 Renci.SshNet.Common.SemaphoreLight::_currentCount
	int32_t ____currentCount_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(SemaphoreLight_t4163090541, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__waitHandle_1() { return static_cast<int32_t>(offsetof(SemaphoreLight_t4163090541, ____waitHandle_1)); }
	inline ManualResetEvent_t451242010 * get__waitHandle_1() const { return ____waitHandle_1; }
	inline ManualResetEvent_t451242010 ** get_address_of__waitHandle_1() { return &____waitHandle_1; }
	inline void set__waitHandle_1(ManualResetEvent_t451242010 * value)
	{
		____waitHandle_1 = value;
		Il2CppCodeGenWriteBarrier((&____waitHandle_1), value);
	}

	inline static int32_t get_offset_of__currentCount_2() { return static_cast<int32_t>(offsetof(SemaphoreLight_t4163090541, ____currentCount_2)); }
	inline int32_t get__currentCount_2() const { return ____currentCount_2; }
	inline int32_t* get_address_of__currentCount_2() { return &____currentCount_2; }
	inline void set__currentCount_2(int32_t value)
	{
		____currentCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEMAPHORELIGHT_T4163090541_H
#ifndef CRYPTOABSTRACTION_T699149699_H
#define CRYPTOABSTRACTION_T699149699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Abstractions.CryptoAbstraction
struct  CryptoAbstraction_t699149699  : public RuntimeObject
{
public:

public:
};

struct CryptoAbstraction_t699149699_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Renci.SshNet.Abstractions.CryptoAbstraction::Randomizer
	RandomNumberGenerator_t386037858 * ___Randomizer_0;

public:
	inline static int32_t get_offset_of_Randomizer_0() { return static_cast<int32_t>(offsetof(CryptoAbstraction_t699149699_StaticFields, ___Randomizer_0)); }
	inline RandomNumberGenerator_t386037858 * get_Randomizer_0() const { return ___Randomizer_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_Randomizer_0() { return &___Randomizer_0; }
	inline void set_Randomizer_0(RandomNumberGenerator_t386037858 * value)
	{
		___Randomizer_0 = value;
		Il2CppCodeGenWriteBarrier((&___Randomizer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOABSTRACTION_T699149699_H
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
#ifndef ZLIBSTREAM_T3374314272_H
#define ZLIBSTREAM_T3374314272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Compression.ZlibStream
struct  ZlibStream_t3374314272  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBSTREAM_T3374314272_H
#ifndef DERDATA_T3507035185_H
#define DERDATA_T3507035185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.DerData
struct  DerData_t3507035185  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> Renci.SshNet.Common.DerData::_data
	List_1_t2606371118 * ____data_0;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(DerData_t3507035185, ____data_0)); }
	inline List_1_t2606371118 * get__data_0() const { return ____data_0; }
	inline List_1_t2606371118 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(List_1_t2606371118 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERDATA_T3507035185_H
#ifndef PACK_T752192392_H
#define PACK_T752192392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.Pack
struct  Pack_t752192392  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PACK_T752192392_H
#ifndef DNSABSTRACTION_T2584699643_H
#define DNSABSTRACTION_T2584699643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Abstractions.DnsAbstraction
struct  DnsAbstraction_t2584699643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNSABSTRACTION_T2584699643_H
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
#ifndef ALGORITHM_T1059843808_H
#define ALGORITHM_T1059843808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Security.Algorithm
struct  Algorithm_t1059843808  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALGORITHM_T1059843808_H
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
#ifndef SOCKETABSTRACTION_T3398211397_H
#define SOCKETABSTRACTION_T3398211397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Abstractions.SocketAbstraction
struct  SocketAbstraction_t3398211397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETABSTRACTION_T3398211397_H
#ifndef REFLECTIONABSTRACTION_T4156969134_H
#define REFLECTIONABSTRACTION_T4156969134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Abstractions.ReflectionAbstraction
struct  ReflectionAbstraction_t4156969134  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONABSTRACTION_T4156969134_H
#ifndef U3CU3EC__DISPLAYCLASS2_0_T3342799812_H
#define U3CU3EC__DISPLAYCLASS2_0_T3342799812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Abstractions.ThreadAbstraction/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t3342799812  : public RuntimeObject
{
public:
	// System.Action Renci.SshNet.Abstractions.ThreadAbstraction/<>c__DisplayClass2_0::action
	Action_t1264377477 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3342799812, ___action_0)); }
	inline Action_t1264377477 * get_action_0() const { return ___action_0; }
	inline Action_t1264377477 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t1264377477 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((&___action_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS2_0_T3342799812_H
#ifndef THREADABSTRACTION_T2304994231_H
#define THREADABSTRACTION_T2304994231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Abstractions.ThreadAbstraction
struct  ThreadAbstraction_t2304994231  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADABSTRACTION_T2304994231_H
#ifndef AUTHENTICATIONPROMPT_T4058028933_H
#define AUTHENTICATIONPROMPT_T4058028933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.AuthenticationPrompt
struct  AuthenticationPrompt_t4058028933  : public RuntimeObject
{
public:
	// System.Int32 Renci.SshNet.Common.AuthenticationPrompt::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Boolean Renci.SshNet.Common.AuthenticationPrompt::<IsEchoed>k__BackingField
	bool ___U3CIsEchoedU3Ek__BackingField_1;
	// System.String Renci.SshNet.Common.AuthenticationPrompt::<Request>k__BackingField
	String_t* ___U3CRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationPrompt_t4058028933, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsEchoedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationPrompt_t4058028933, ___U3CIsEchoedU3Ek__BackingField_1)); }
	inline bool get_U3CIsEchoedU3Ek__BackingField_1() const { return ___U3CIsEchoedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsEchoedU3Ek__BackingField_1() { return &___U3CIsEchoedU3Ek__BackingField_1; }
	inline void set_U3CIsEchoedU3Ek__BackingField_1(bool value)
	{
		___U3CIsEchoedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationPrompt_t4058028933, ___U3CRequestU3Ek__BackingField_2)); }
	inline String_t* get_U3CRequestU3Ek__BackingField_2() const { return ___U3CRequestU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CRequestU3Ek__BackingField_2() { return &___U3CRequestU3Ek__BackingField_2; }
	inline void set_U3CRequestU3Ek__BackingField_2(String_t* value)
	{
		___U3CRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRequestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONPROMPT_T4058028933_H
#ifndef __STATICARRAYINITTYPESIZEU3D30_T1548325975_H
#define __STATICARRAYINITTYPESIZEU3D30_T1548325975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30
struct  __StaticArrayInitTypeSizeU3D30_t1548325975 
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
		uint8_t __StaticArrayInitTypeSizeU3D30_t1548325975__padding[30];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D30_T1548325975_H
#ifndef HOSTKEYEVENTARGS_T1391086826_H
#define HOSTKEYEVENTARGS_T1391086826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.HostKeyEventArgs
struct  HostKeyEventArgs_t1391086826  : public EventArgs_t3591816995
{
public:
	// System.Boolean Renci.SshNet.Common.HostKeyEventArgs::<CanTrust>k__BackingField
	bool ___U3CCanTrustU3Ek__BackingField_1;
	// System.Byte[] Renci.SshNet.Common.HostKeyEventArgs::<HostKey>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CHostKeyU3Ek__BackingField_2;
	// System.String Renci.SshNet.Common.HostKeyEventArgs::<HostKeyName>k__BackingField
	String_t* ___U3CHostKeyNameU3Ek__BackingField_3;
	// System.Byte[] Renci.SshNet.Common.HostKeyEventArgs::<FingerPrint>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CFingerPrintU3Ek__BackingField_4;
	// System.Int32 Renci.SshNet.Common.HostKeyEventArgs::<KeyLength>k__BackingField
	int32_t ___U3CKeyLengthU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CCanTrustU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HostKeyEventArgs_t1391086826, ___U3CCanTrustU3Ek__BackingField_1)); }
	inline bool get_U3CCanTrustU3Ek__BackingField_1() const { return ___U3CCanTrustU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CCanTrustU3Ek__BackingField_1() { return &___U3CCanTrustU3Ek__BackingField_1; }
	inline void set_U3CCanTrustU3Ek__BackingField_1(bool value)
	{
		___U3CCanTrustU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CHostKeyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HostKeyEventArgs_t1391086826, ___U3CHostKeyU3Ek__BackingField_2)); }
	inline ByteU5BU5D_t4116647657* get_U3CHostKeyU3Ek__BackingField_2() const { return ___U3CHostKeyU3Ek__BackingField_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CHostKeyU3Ek__BackingField_2() { return &___U3CHostKeyU3Ek__BackingField_2; }
	inline void set_U3CHostKeyU3Ek__BackingField_2(ByteU5BU5D_t4116647657* value)
	{
		___U3CHostKeyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHostKeyU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CHostKeyNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HostKeyEventArgs_t1391086826, ___U3CHostKeyNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CHostKeyNameU3Ek__BackingField_3() const { return ___U3CHostKeyNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CHostKeyNameU3Ek__BackingField_3() { return &___U3CHostKeyNameU3Ek__BackingField_3; }
	inline void set_U3CHostKeyNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CHostKeyNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHostKeyNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CFingerPrintU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HostKeyEventArgs_t1391086826, ___U3CFingerPrintU3Ek__BackingField_4)); }
	inline ByteU5BU5D_t4116647657* get_U3CFingerPrintU3Ek__BackingField_4() const { return ___U3CFingerPrintU3Ek__BackingField_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CFingerPrintU3Ek__BackingField_4() { return &___U3CFingerPrintU3Ek__BackingField_4; }
	inline void set_U3CFingerPrintU3Ek__BackingField_4(ByteU5BU5D_t4116647657* value)
	{
		___U3CFingerPrintU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFingerPrintU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CKeyLengthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(HostKeyEventArgs_t1391086826, ___U3CKeyLengthU3Ek__BackingField_5)); }
	inline int32_t get_U3CKeyLengthU3Ek__BackingField_5() const { return ___U3CKeyLengthU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CKeyLengthU3Ek__BackingField_5() { return &___U3CKeyLengthU3Ek__BackingField_5; }
	inline void set_U3CKeyLengthU3Ek__BackingField_5(int32_t value)
	{
		___U3CKeyLengthU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTKEYEVENTARGS_T1391086826_H
#ifndef __STATICARRAYINITTYPESIZEU3D16_T385395491_H
#define __STATICARRAYINITTYPESIZEU3D16_T385395491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct  __StaticArrayInitTypeSizeU3D16_t385395491 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_t385395491__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D16_T385395491_H
#ifndef __STATICARRAYINITTYPESIZEU3D56_T385133347_H
#define __STATICARRAYINITTYPESIZEU3D56_T385133347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct  __StaticArrayInitTypeSizeU3D56_t385133347 
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
		uint8_t __StaticArrayInitTypeSizeU3D56_t385133347__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D56_T385133347_H
#ifndef __STATICARRAYINITTYPESIZEU3D72_T2710863246_H
#define __STATICARRAYINITTYPESIZEU3D72_T2710863246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct  __StaticArrayInitTypeSizeU3D72_t2710863246 
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
		uint8_t __StaticArrayInitTypeSizeU3D72_t2710863246__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D72_T2710863246_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D48_T1904228657_H
#define __STATICARRAYINITTYPESIZEU3D48_T1904228657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t1904228657 
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
		uint8_t __StaticArrayInitTypeSizeU3D48_t1904228657__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D48_T1904228657_H
#ifndef COMPRESSOR_T2655936137_H
#define COMPRESSOR_T2655936137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Compression.Compressor
struct  Compressor_t2655936137  : public Algorithm_t1059843808
{
public:
	// Renci.SshNet.Compression.ZlibStream Renci.SshNet.Compression.Compressor::_compressor
	ZlibStream_t3374314272 * ____compressor_0;
	// Renci.SshNet.Compression.ZlibStream Renci.SshNet.Compression.Compressor::_decompressor
	ZlibStream_t3374314272 * ____decompressor_1;
	// System.IO.MemoryStream Renci.SshNet.Compression.Compressor::_compressorStream
	MemoryStream_t94973147 * ____compressorStream_2;
	// System.IO.MemoryStream Renci.SshNet.Compression.Compressor::_decompressorStream
	MemoryStream_t94973147 * ____decompressorStream_3;
	// System.Boolean Renci.SshNet.Compression.Compressor::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_4;
	// Renci.SshNet.Session Renci.SshNet.Compression.Compressor::<Session>k__BackingField
	Session_t2648700758 * ___U3CSessionU3Ek__BackingField_5;
	// System.Boolean Renci.SshNet.Compression.Compressor::_isDisposed
	bool ____isDisposed_6;

public:
	inline static int32_t get_offset_of__compressor_0() { return static_cast<int32_t>(offsetof(Compressor_t2655936137, ____compressor_0)); }
	inline ZlibStream_t3374314272 * get__compressor_0() const { return ____compressor_0; }
	inline ZlibStream_t3374314272 ** get_address_of__compressor_0() { return &____compressor_0; }
	inline void set__compressor_0(ZlibStream_t3374314272 * value)
	{
		____compressor_0 = value;
		Il2CppCodeGenWriteBarrier((&____compressor_0), value);
	}

	inline static int32_t get_offset_of__decompressor_1() { return static_cast<int32_t>(offsetof(Compressor_t2655936137, ____decompressor_1)); }
	inline ZlibStream_t3374314272 * get__decompressor_1() const { return ____decompressor_1; }
	inline ZlibStream_t3374314272 ** get_address_of__decompressor_1() { return &____decompressor_1; }
	inline void set__decompressor_1(ZlibStream_t3374314272 * value)
	{
		____decompressor_1 = value;
		Il2CppCodeGenWriteBarrier((&____decompressor_1), value);
	}

	inline static int32_t get_offset_of__compressorStream_2() { return static_cast<int32_t>(offsetof(Compressor_t2655936137, ____compressorStream_2)); }
	inline MemoryStream_t94973147 * get__compressorStream_2() const { return ____compressorStream_2; }
	inline MemoryStream_t94973147 ** get_address_of__compressorStream_2() { return &____compressorStream_2; }
	inline void set__compressorStream_2(MemoryStream_t94973147 * value)
	{
		____compressorStream_2 = value;
		Il2CppCodeGenWriteBarrier((&____compressorStream_2), value);
	}

	inline static int32_t get_offset_of__decompressorStream_3() { return static_cast<int32_t>(offsetof(Compressor_t2655936137, ____decompressorStream_3)); }
	inline MemoryStream_t94973147 * get__decompressorStream_3() const { return ____decompressorStream_3; }
	inline MemoryStream_t94973147 ** get_address_of__decompressorStream_3() { return &____decompressorStream_3; }
	inline void set__decompressorStream_3(MemoryStream_t94973147 * value)
	{
		____decompressorStream_3 = value;
		Il2CppCodeGenWriteBarrier((&____decompressorStream_3), value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Compressor_t2655936137, ___U3CIsActiveU3Ek__BackingField_4)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_4() const { return ___U3CIsActiveU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_4() { return &___U3CIsActiveU3Ek__BackingField_4; }
	inline void set_U3CIsActiveU3Ek__BackingField_4(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSessionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Compressor_t2655936137, ___U3CSessionU3Ek__BackingField_5)); }
	inline Session_t2648700758 * get_U3CSessionU3Ek__BackingField_5() const { return ___U3CSessionU3Ek__BackingField_5; }
	inline Session_t2648700758 ** get_address_of_U3CSessionU3Ek__BackingField_5() { return &___U3CSessionU3Ek__BackingField_5; }
	inline void set_U3CSessionU3Ek__BackingField_5(Session_t2648700758 * value)
	{
		___U3CSessionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSessionU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of__isDisposed_6() { return static_cast<int32_t>(offsetof(Compressor_t2655936137, ____isDisposed_6)); }
	inline bool get__isDisposed_6() const { return ____isDisposed_6; }
	inline bool* get_address_of__isDisposed_6() { return &____isDisposed_6; }
	inline void set__isDisposed_6(bool value)
	{
		____isDisposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSOR_T2655936137_H
#ifndef OBJECTIDENTIFIER_T2054380755_H
#define OBJECTIDENTIFIER_T2054380755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ObjectIdentifier
struct  ObjectIdentifier_t2054380755 
{
public:
	// System.UInt64[] Renci.SshNet.Common.ObjectIdentifier::<Identifiers>k__BackingField
	UInt64U5BU5D_t1659327989* ___U3CIdentifiersU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIdentifiersU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ObjectIdentifier_t2054380755, ___U3CIdentifiersU3Ek__BackingField_0)); }
	inline UInt64U5BU5D_t1659327989* get_U3CIdentifiersU3Ek__BackingField_0() const { return ___U3CIdentifiersU3Ek__BackingField_0; }
	inline UInt64U5BU5D_t1659327989** get_address_of_U3CIdentifiersU3Ek__BackingField_0() { return &___U3CIdentifiersU3Ek__BackingField_0; }
	inline void set_U3CIdentifiersU3Ek__BackingField_0(UInt64U5BU5D_t1659327989* value)
	{
		___U3CIdentifiersU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIdentifiersU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Renci.SshNet.Common.ObjectIdentifier
struct ObjectIdentifier_t2054380755_marshaled_pinvoke
{
	uint64_t* ___U3CIdentifiersU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Renci.SshNet.Common.ObjectIdentifier
struct ObjectIdentifier_t2054380755_marshaled_com
{
	uint64_t* ___U3CIdentifiersU3Ek__BackingField_0;
};
#endif // OBJECTIDENTIFIER_T2054380755_H
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
#ifndef AUTHENTICATIONEVENTARGS_T2817588187_H
#define AUTHENTICATIONEVENTARGS_T2817588187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.AuthenticationEventArgs
struct  AuthenticationEventArgs_t2817588187  : public EventArgs_t3591816995
{
public:
	// System.String Renci.SshNet.Common.AuthenticationEventArgs::<Username>k__BackingField
	String_t* ___U3CUsernameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUsernameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationEventArgs_t2817588187, ___U3CUsernameU3Ek__BackingField_1)); }
	inline String_t* get_U3CUsernameU3Ek__BackingField_1() const { return ___U3CUsernameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CUsernameU3Ek__BackingField_1() { return &___U3CUsernameU3Ek__BackingField_1; }
	inline void set_U3CUsernameU3Ek__BackingField_1(String_t* value)
	{
		___U3CUsernameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUsernameU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONEVENTARGS_T2817588187_H
#ifndef BIGINTEGER_T4061197759_H
#define BIGINTEGER_T4061197759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.BigInteger
struct  BigInteger_t4061197759 
{
public:
	// System.UInt32[] Renci.SshNet.Common.BigInteger::_data
	UInt32U5BU5D_t2770800703* ____data_3;
	// System.Int16 Renci.SshNet.Common.BigInteger::_sign
	int16_t ____sign_4;

public:
	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(BigInteger_t4061197759, ____data_3)); }
	inline UInt32U5BU5D_t2770800703* get__data_3() const { return ____data_3; }
	inline UInt32U5BU5D_t2770800703** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(UInt32U5BU5D_t2770800703* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__sign_4() { return static_cast<int32_t>(offsetof(BigInteger_t4061197759, ____sign_4)); }
	inline int16_t get__sign_4() const { return ____sign_4; }
	inline int16_t* get_address_of__sign_4() { return &____sign_4; }
	inline void set__sign_4(int16_t value)
	{
		____sign_4 = value;
	}
};

struct BigInteger_t4061197759_StaticFields
{
public:
	// Renci.SshNet.Common.BigInteger Renci.SshNet.Common.BigInteger::ZeroSingleton
	BigInteger_t4061197759  ___ZeroSingleton_0;
	// Renci.SshNet.Common.BigInteger Renci.SshNet.Common.BigInteger::OneSingleton
	BigInteger_t4061197759  ___OneSingleton_1;
	// Renci.SshNet.Common.BigInteger Renci.SshNet.Common.BigInteger::MinusOneSingleton
	BigInteger_t4061197759  ___MinusOneSingleton_2;

public:
	inline static int32_t get_offset_of_ZeroSingleton_0() { return static_cast<int32_t>(offsetof(BigInteger_t4061197759_StaticFields, ___ZeroSingleton_0)); }
	inline BigInteger_t4061197759  get_ZeroSingleton_0() const { return ___ZeroSingleton_0; }
	inline BigInteger_t4061197759 * get_address_of_ZeroSingleton_0() { return &___ZeroSingleton_0; }
	inline void set_ZeroSingleton_0(BigInteger_t4061197759  value)
	{
		___ZeroSingleton_0 = value;
	}

	inline static int32_t get_offset_of_OneSingleton_1() { return static_cast<int32_t>(offsetof(BigInteger_t4061197759_StaticFields, ___OneSingleton_1)); }
	inline BigInteger_t4061197759  get_OneSingleton_1() const { return ___OneSingleton_1; }
	inline BigInteger_t4061197759 * get_address_of_OneSingleton_1() { return &___OneSingleton_1; }
	inline void set_OneSingleton_1(BigInteger_t4061197759  value)
	{
		___OneSingleton_1 = value;
	}

	inline static int32_t get_offset_of_MinusOneSingleton_2() { return static_cast<int32_t>(offsetof(BigInteger_t4061197759_StaticFields, ___MinusOneSingleton_2)); }
	inline BigInteger_t4061197759  get_MinusOneSingleton_2() const { return ___MinusOneSingleton_2; }
	inline BigInteger_t4061197759 * get_address_of_MinusOneSingleton_2() { return &___MinusOneSingleton_2; }
	inline void set_MinusOneSingleton_2(BigInteger_t4061197759  value)
	{
		___MinusOneSingleton_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Renci.SshNet.Common.BigInteger
struct BigInteger_t4061197759_marshaled_pinvoke
{
	uint32_t* ____data_3;
	int16_t ____sign_4;
};
// Native definition for COM marshalling of Renci.SshNet.Common.BigInteger
struct BigInteger_t4061197759_marshaled_com
{
	uint32_t* ____data_3;
	int16_t ____sign_4;
};
#endif // BIGINTEGER_T4061197759_H
#ifndef __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#define __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct  __StaticArrayInitTypeSizeU3D96_t385919777 
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
		uint8_t __StaticArrayInitTypeSizeU3D96_t385919777__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#ifndef __STATICARRAYINITTYPESIZEU3D1024_T4211899789_H
#define __STATICARRAYINITTYPESIZEU3D1024_T4211899789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct  __StaticArrayInitTypeSizeU3D1024_t4211899789 
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
		uint8_t __StaticArrayInitTypeSizeU3D1024_t4211899789__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1024_T4211899789_H
#ifndef __STATICARRAYINITTYPESIZEU3D257_T4096019792_H
#define __STATICARRAYINITTYPESIZEU3D257_T4096019792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=257
struct  __StaticArrayInitTypeSizeU3D257_t4096019792 
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
		uint8_t __StaticArrayInitTypeSizeU3D257_t4096019792__padding[257];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D257_T4096019792_H
#ifndef __STATICARRAYINITTYPESIZEU3D512_T3317833660_H
#define __STATICARRAYINITTYPESIZEU3D512_T3317833660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t3317833660 
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
		uint8_t __StaticArrayInitTypeSizeU3D512_t3317833660__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T3317833660_H
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
#ifndef CHANNELOPENINFO_T2541744565_H
#define CHANNELOPENINFO_T2541744565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelOpenInfo
struct  ChannelOpenInfo_t2541744565  : public SshData_t3807462516
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELOPENINFO_T2541744565_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T1757367635_H
#define __STATICARRAYINITTYPESIZEU3D256_T1757367635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t1757367635 
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
		uint8_t __StaticArrayInitTypeSizeU3D256_t1757367635__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T1757367635_H
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
#ifndef NULLABLE_1_T4282624060_H
#define NULLABLE_1_T4282624060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt32>
struct  Nullable_1_t4282624060 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4282624060, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4282624060, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4282624060_H
#ifndef __STATICARRAYINITTYPESIZEU3D129_T2870181261_H
#define __STATICARRAYINITTYPESIZEU3D129_T2870181261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=129
struct  __StaticArrayInitTypeSizeU3D129_t2870181261 
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
		uint8_t __StaticArrayInitTypeSizeU3D129_t2870181261__padding[129];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D129_T2870181261_H
#ifndef SSHAUTHENTICATIONEXCEPTION_T3116097484_H
#define SSHAUTHENTICATIONEXCEPTION_T3116097484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.SshAuthenticationException
struct  SshAuthenticationException_t3116097484  : public SshException_t1435741398
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHAUTHENTICATIONEXCEPTION_T3116097484_H
#ifndef KEYEXCHANGEINITMESSAGE_T1820053751_H
#define KEYEXCHANGEINITMESSAGE_T1820053751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.KeyExchangeInitMessage
struct  KeyExchangeInitMessage_t1820053751  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<Cookie>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CCookieU3Ek__BackingField_3;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<KeyExchangeAlgorithms>k__BackingField
	StringU5BU5D_t1281789340* ___U3CKeyExchangeAlgorithmsU3Ek__BackingField_4;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<ServerHostKeyAlgorithms>k__BackingField
	StringU5BU5D_t1281789340* ___U3CServerHostKeyAlgorithmsU3Ek__BackingField_5;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<EncryptionAlgorithmsClientToServer>k__BackingField
	StringU5BU5D_t1281789340* ___U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<EncryptionAlgorithmsServerToClient>k__BackingField
	StringU5BU5D_t1281789340* ___U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<MacAlgorithmsClientToServer>k__BackingField
	StringU5BU5D_t1281789340* ___U3CMacAlgorithmsClientToServerU3Ek__BackingField_8;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<MacAlgorithmsServerToClient>k__BackingField
	StringU5BU5D_t1281789340* ___U3CMacAlgorithmsServerToClientU3Ek__BackingField_9;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<CompressionAlgorithmsClientToServer>k__BackingField
	StringU5BU5D_t1281789340* ___U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<CompressionAlgorithmsServerToClient>k__BackingField
	StringU5BU5D_t1281789340* ___U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<LanguagesClientToServer>k__BackingField
	StringU5BU5D_t1281789340* ___U3CLanguagesClientToServerU3Ek__BackingField_12;
	// System.String[] Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<LanguagesServerToClient>k__BackingField
	StringU5BU5D_t1281789340* ___U3CLanguagesServerToClientU3Ek__BackingField_13;
	// System.Boolean Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<FirstKexPacketFollows>k__BackingField
	bool ___U3CFirstKexPacketFollowsU3Ek__BackingField_14;
	// System.UInt32 Renci.SshNet.Messages.Transport.KeyExchangeInitMessage::<Reserved>k__BackingField
	uint32_t ___U3CReservedU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_U3CCookieU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CCookieU3Ek__BackingField_3)); }
	inline ByteU5BU5D_t4116647657* get_U3CCookieU3Ek__BackingField_3() const { return ___U3CCookieU3Ek__BackingField_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CCookieU3Ek__BackingField_3() { return &___U3CCookieU3Ek__BackingField_3; }
	inline void set_U3CCookieU3Ek__BackingField_3(ByteU5BU5D_t4116647657* value)
	{
		___U3CCookieU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCookieU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CKeyExchangeAlgorithmsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CKeyExchangeAlgorithmsU3Ek__BackingField_4)); }
	inline StringU5BU5D_t1281789340* get_U3CKeyExchangeAlgorithmsU3Ek__BackingField_4() const { return ___U3CKeyExchangeAlgorithmsU3Ek__BackingField_4; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CKeyExchangeAlgorithmsU3Ek__BackingField_4() { return &___U3CKeyExchangeAlgorithmsU3Ek__BackingField_4; }
	inline void set_U3CKeyExchangeAlgorithmsU3Ek__BackingField_4(StringU5BU5D_t1281789340* value)
	{
		___U3CKeyExchangeAlgorithmsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CKeyExchangeAlgorithmsU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CServerHostKeyAlgorithmsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CServerHostKeyAlgorithmsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t1281789340* get_U3CServerHostKeyAlgorithmsU3Ek__BackingField_5() const { return ___U3CServerHostKeyAlgorithmsU3Ek__BackingField_5; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CServerHostKeyAlgorithmsU3Ek__BackingField_5() { return &___U3CServerHostKeyAlgorithmsU3Ek__BackingField_5; }
	inline void set_U3CServerHostKeyAlgorithmsU3Ek__BackingField_5(StringU5BU5D_t1281789340* value)
	{
		___U3CServerHostKeyAlgorithmsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CServerHostKeyAlgorithmsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6)); }
	inline StringU5BU5D_t1281789340* get_U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6() const { return ___U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6() { return &___U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6; }
	inline void set_U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6(StringU5BU5D_t1281789340* value)
	{
		___U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7)); }
	inline StringU5BU5D_t1281789340* get_U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7() const { return ___U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7() { return &___U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7; }
	inline void set_U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7(StringU5BU5D_t1281789340* value)
	{
		___U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CMacAlgorithmsClientToServerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CMacAlgorithmsClientToServerU3Ek__BackingField_8)); }
	inline StringU5BU5D_t1281789340* get_U3CMacAlgorithmsClientToServerU3Ek__BackingField_8() const { return ___U3CMacAlgorithmsClientToServerU3Ek__BackingField_8; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CMacAlgorithmsClientToServerU3Ek__BackingField_8() { return &___U3CMacAlgorithmsClientToServerU3Ek__BackingField_8; }
	inline void set_U3CMacAlgorithmsClientToServerU3Ek__BackingField_8(StringU5BU5D_t1281789340* value)
	{
		___U3CMacAlgorithmsClientToServerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMacAlgorithmsClientToServerU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CMacAlgorithmsServerToClientU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CMacAlgorithmsServerToClientU3Ek__BackingField_9)); }
	inline StringU5BU5D_t1281789340* get_U3CMacAlgorithmsServerToClientU3Ek__BackingField_9() const { return ___U3CMacAlgorithmsServerToClientU3Ek__BackingField_9; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CMacAlgorithmsServerToClientU3Ek__BackingField_9() { return &___U3CMacAlgorithmsServerToClientU3Ek__BackingField_9; }
	inline void set_U3CMacAlgorithmsServerToClientU3Ek__BackingField_9(StringU5BU5D_t1281789340* value)
	{
		___U3CMacAlgorithmsServerToClientU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMacAlgorithmsServerToClientU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10)); }
	inline StringU5BU5D_t1281789340* get_U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10() const { return ___U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10() { return &___U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10; }
	inline void set_U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10(StringU5BU5D_t1281789340* value)
	{
		___U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11)); }
	inline StringU5BU5D_t1281789340* get_U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11() const { return ___U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11() { return &___U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11; }
	inline void set_U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11(StringU5BU5D_t1281789340* value)
	{
		___U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CLanguagesClientToServerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CLanguagesClientToServerU3Ek__BackingField_12)); }
	inline StringU5BU5D_t1281789340* get_U3CLanguagesClientToServerU3Ek__BackingField_12() const { return ___U3CLanguagesClientToServerU3Ek__BackingField_12; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CLanguagesClientToServerU3Ek__BackingField_12() { return &___U3CLanguagesClientToServerU3Ek__BackingField_12; }
	inline void set_U3CLanguagesClientToServerU3Ek__BackingField_12(StringU5BU5D_t1281789340* value)
	{
		___U3CLanguagesClientToServerU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLanguagesClientToServerU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CLanguagesServerToClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CLanguagesServerToClientU3Ek__BackingField_13)); }
	inline StringU5BU5D_t1281789340* get_U3CLanguagesServerToClientU3Ek__BackingField_13() const { return ___U3CLanguagesServerToClientU3Ek__BackingField_13; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CLanguagesServerToClientU3Ek__BackingField_13() { return &___U3CLanguagesServerToClientU3Ek__BackingField_13; }
	inline void set_U3CLanguagesServerToClientU3Ek__BackingField_13(StringU5BU5D_t1281789340* value)
	{
		___U3CLanguagesServerToClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLanguagesServerToClientU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CFirstKexPacketFollowsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CFirstKexPacketFollowsU3Ek__BackingField_14)); }
	inline bool get_U3CFirstKexPacketFollowsU3Ek__BackingField_14() const { return ___U3CFirstKexPacketFollowsU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CFirstKexPacketFollowsU3Ek__BackingField_14() { return &___U3CFirstKexPacketFollowsU3Ek__BackingField_14; }
	inline void set_U3CFirstKexPacketFollowsU3Ek__BackingField_14(bool value)
	{
		___U3CFirstKexPacketFollowsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CReservedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(KeyExchangeInitMessage_t1820053751, ___U3CReservedU3Ek__BackingField_15)); }
	inline uint32_t get_U3CReservedU3Ek__BackingField_15() const { return ___U3CReservedU3Ek__BackingField_15; }
	inline uint32_t* get_address_of_U3CReservedU3Ek__BackingField_15() { return &___U3CReservedU3Ek__BackingField_15; }
	inline void set_U3CReservedU3Ek__BackingField_15(uint32_t value)
	{
		___U3CReservedU3Ek__BackingField_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEXCHANGEINITMESSAGE_T1820053751_H
#ifndef SERVICEREQUESTMESSAGE_T1388233984_H
#define SERVICEREQUESTMESSAGE_T1388233984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.ServiceRequestMessage
struct  ServiceRequestMessage_t1388233984  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.ServiceRequestMessage::_serviceName
	ByteU5BU5D_t4116647657* ____serviceName_3;

public:
	inline static int32_t get_offset_of__serviceName_3() { return static_cast<int32_t>(offsetof(ServiceRequestMessage_t1388233984, ____serviceName_3)); }
	inline ByteU5BU5D_t4116647657* get__serviceName_3() const { return ____serviceName_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__serviceName_3() { return &____serviceName_3; }
	inline void set__serviceName_3(ByteU5BU5D_t4116647657* value)
	{
		____serviceName_3 = value;
		Il2CppCodeGenWriteBarrier((&____serviceName_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEREQUESTMESSAGE_T1388233984_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::04D2A79C8A779AFAA779125335E9334C245EBB46
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___04D2A79C8A779AFAA779125335E9334C245EBB46_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::0C4110BC17D746F018F47B49E0EB0D6590F69939
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___0C4110BC17D746F018F47B49E0EB0D6590F69939_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::102C522344FCAC1545BDA50C0FC675C502FFEC53
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___102C522344FCAC1545BDA50C0FC675C502FFEC53_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::17651A9FA4DEA6C24D1287324CF4A640D080FE8E
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___17651A9FA4DEA6C24D1287324CF4A640D080FE8E_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::1AFB455399A50580CF1039188ABA6BE82F309543
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___1AFB455399A50580CF1039188ABA6BE82F309543_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::1C1237F52E2ED7B4D229AE3978DA144B9E653F5E
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___1C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::29EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___29EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=257 <PrivateImplementationDetails>::31FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6
	__StaticArrayInitTypeSizeU3D257_t4096019792  ___31FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::37454D933508E238CFB980F1077B24ADA4A480F4
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___37454D933508E238CFB980F1077B24ADA4A480F4_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::3D6EB645BC212077C1B37A3A32CA2A62F7B39018
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___3D6EB645BC212077C1B37A3A32CA2A62F7B39018_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::4C44594E2C603D85EC6195B1A7A6C5876CBB58E2
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::4FFC8339E09825A68B861995F9C660EB11DBF13D
	__StaticArrayInitTypeSizeU3D16_t385395491  ___4FFC8339E09825A68B861995F9C660EB11DBF13D_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::62BAB0F245E66C3EB982CF5A7015F0A7C3382283
	__StaticArrayInitTypeSizeU3D48_t1904228657  ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::64354464C9074B5BB4369689AAA131961CD1EF19
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___64354464C9074B5BB4369689AAA131961CD1EF19_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::643A9D76937E94519B73BE072D65E79BAFF3C213
	__StaticArrayInitTypeSizeU3D72_t2710863246  ___643A9D76937E94519B73BE072D65E79BAFF3C213_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=129 <PrivateImplementationDetails>::66E175AF3B11AE7E13BEA06CEE73F117E92B2AF2
	__StaticArrayInitTypeSizeU3D129_t2870181261  ___66E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::6F576E8737EAAC9B6B12BDFC370048CD205E2CDD
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___6F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::7FF0A15672FF2807983AB77C0DA74928986427C0
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___7FF0A15672FF2807983AB77C0DA74928986427C0_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::84F6B4137736E2F6671FC8787A500AC5C6E1D6AC
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___84F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::8F22C9ECE1331718CBD268A9BBFD2F5E451441E3
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::95CA85749ADCFBF9A2B82C0381DBCF95D175524C
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___95CA85749ADCFBF9A2B82C0381DBCF95D175524C_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::9E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367
	__StaticArrayInitTypeSizeU3D512_t3317833660  ___9E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::A47DBBBB6655DAA5E024374BB9C8AA44FF40D444
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D
	__StaticArrayInitTypeSizeU3D16_t385395491  ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::B68637EF60D499620B99E336C59E4865FFC4C5D7
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___B68637EF60D499620B99E336C59E4865FFC4C5D7_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30 <PrivateImplementationDetails>::B8DB0CB599EDD82A386D1A154FB3EB9235513DAD
	__StaticArrayInitTypeSizeU3D30_t1548325975  ___B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::C105B70BED997DB5D36E1D2E84C1EFCB445A428C
	__StaticArrayInitTypeSizeU3D96_t385919777  ___C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::D9C221237B647EC215A7BCDED447349810E6BF9C
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___D9C221237B647EC215A7BCDED447349810E6BF9C_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82
	__StaticArrayInitTypeSizeU3D56_t385133347  ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::E21F52BC931487E3B4E28F1E315561D39A384D55
	__StaticArrayInitTypeSizeU3D48_t1904228657  ___E21F52BC931487E3B4E28F1E315561D39A384D55_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::E43F6BA634642FB90FEEE1A8F9905E957741960C
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___E43F6BA634642FB90FEEE1A8F9905E957741960C_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::EF813A47B13574822D335279EF445343654A4F04
	__StaticArrayInitTypeSizeU3D1024_t4211899789  ___EF813A47B13574822D335279EF445343654A4F04_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::FC9EEBC457831129D4AF4FF84333B481F4BED60E
	__StaticArrayInitTypeSizeU3D256_t1757367635  ___FC9EEBC457831129D4AF4FF84333B481F4BED60E_40;

public:
	inline static int32_t get_offset_of_U304B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U304B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0() const { return ___04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U304B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0() { return &___04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0; }
	inline void set_U304B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___04B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0 = value;
	}

	inline static int32_t get_offset_of_U304D2A79C8A779AFAA779125335E9334C245EBB46_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___04D2A79C8A779AFAA779125335E9334C245EBB46_1)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U304D2A79C8A779AFAA779125335E9334C245EBB46_1() const { return ___04D2A79C8A779AFAA779125335E9334C245EBB46_1; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U304D2A79C8A779AFAA779125335E9334C245EBB46_1() { return &___04D2A79C8A779AFAA779125335E9334C245EBB46_1; }
	inline void set_U304D2A79C8A779AFAA779125335E9334C245EBB46_1(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___04D2A79C8A779AFAA779125335E9334C245EBB46_1 = value;
	}

	inline static int32_t get_offset_of_U30C4110BC17D746F018F47B49E0EB0D6590F69939_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___0C4110BC17D746F018F47B49E0EB0D6590F69939_2)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U30C4110BC17D746F018F47B49E0EB0D6590F69939_2() const { return ___0C4110BC17D746F018F47B49E0EB0D6590F69939_2; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U30C4110BC17D746F018F47B49E0EB0D6590F69939_2() { return &___0C4110BC17D746F018F47B49E0EB0D6590F69939_2; }
	inline void set_U30C4110BC17D746F018F47B49E0EB0D6590F69939_2(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___0C4110BC17D746F018F47B49E0EB0D6590F69939_2 = value;
	}

	inline static int32_t get_offset_of_U3102C522344FCAC1545BDA50C0FC675C502FFEC53_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___102C522344FCAC1545BDA50C0FC675C502FFEC53_3)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U3102C522344FCAC1545BDA50C0FC675C502FFEC53_3() const { return ___102C522344FCAC1545BDA50C0FC675C502FFEC53_3; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U3102C522344FCAC1545BDA50C0FC675C502FFEC53_3() { return &___102C522344FCAC1545BDA50C0FC675C502FFEC53_3; }
	inline void set_U3102C522344FCAC1545BDA50C0FC675C502FFEC53_3(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___102C522344FCAC1545BDA50C0FC675C502FFEC53_3 = value;
	}

	inline static int32_t get_offset_of_U317651A9FA4DEA6C24D1287324CF4A640D080FE8E_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___17651A9FA4DEA6C24D1287324CF4A640D080FE8E_4)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U317651A9FA4DEA6C24D1287324CF4A640D080FE8E_4() const { return ___17651A9FA4DEA6C24D1287324CF4A640D080FE8E_4; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U317651A9FA4DEA6C24D1287324CF4A640D080FE8E_4() { return &___17651A9FA4DEA6C24D1287324CF4A640D080FE8E_4; }
	inline void set_U317651A9FA4DEA6C24D1287324CF4A640D080FE8E_4(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___17651A9FA4DEA6C24D1287324CF4A640D080FE8E_4 = value;
	}

	inline static int32_t get_offset_of_U31AFB455399A50580CF1039188ABA6BE82F309543_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___1AFB455399A50580CF1039188ABA6BE82F309543_5)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U31AFB455399A50580CF1039188ABA6BE82F309543_5() const { return ___1AFB455399A50580CF1039188ABA6BE82F309543_5; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U31AFB455399A50580CF1039188ABA6BE82F309543_5() { return &___1AFB455399A50580CF1039188ABA6BE82F309543_5; }
	inline void set_U31AFB455399A50580CF1039188ABA6BE82F309543_5(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___1AFB455399A50580CF1039188ABA6BE82F309543_5 = value;
	}

	inline static int32_t get_offset_of_U31C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___1C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U31C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6() const { return ___1C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U31C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6() { return &___1C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6; }
	inline void set_U31C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___1C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6 = value;
	}

	inline static int32_t get_offset_of_U329EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___29EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U329EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7() const { return ___29EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U329EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7() { return &___29EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7; }
	inline void set_U329EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___29EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7 = value;
	}

	inline static int32_t get_offset_of_U331FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___31FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8)); }
	inline __StaticArrayInitTypeSizeU3D257_t4096019792  get_U331FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8() const { return ___31FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8; }
	inline __StaticArrayInitTypeSizeU3D257_t4096019792 * get_address_of_U331FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8() { return &___31FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8; }
	inline void set_U331FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8(__StaticArrayInitTypeSizeU3D257_t4096019792  value)
	{
		___31FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8 = value;
	}

	inline static int32_t get_offset_of_U337454D933508E238CFB980F1077B24ADA4A480F4_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___37454D933508E238CFB980F1077B24ADA4A480F4_9)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U337454D933508E238CFB980F1077B24ADA4A480F4_9() const { return ___37454D933508E238CFB980F1077B24ADA4A480F4_9; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U337454D933508E238CFB980F1077B24ADA4A480F4_9() { return &___37454D933508E238CFB980F1077B24ADA4A480F4_9; }
	inline void set_U337454D933508E238CFB980F1077B24ADA4A480F4_9(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___37454D933508E238CFB980F1077B24ADA4A480F4_9 = value;
	}

	inline static int32_t get_offset_of_U33D6EB645BC212077C1B37A3A32CA2A62F7B39018_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___3D6EB645BC212077C1B37A3A32CA2A62F7B39018_10)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U33D6EB645BC212077C1B37A3A32CA2A62F7B39018_10() const { return ___3D6EB645BC212077C1B37A3A32CA2A62F7B39018_10; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U33D6EB645BC212077C1B37A3A32CA2A62F7B39018_10() { return &___3D6EB645BC212077C1B37A3A32CA2A62F7B39018_10; }
	inline void set_U33D6EB645BC212077C1B37A3A32CA2A62F7B39018_10(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___3D6EB645BC212077C1B37A3A32CA2A62F7B39018_10 = value;
	}

	inline static int32_t get_offset_of_U33F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U33F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11() const { return ___3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U33F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11() { return &___3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11; }
	inline void set_U33F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___3F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11 = value;
	}

	inline static int32_t get_offset_of_U34C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U34C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12() const { return ___4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U34C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12() { return &___4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12; }
	inline void set_U34C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___4C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12 = value;
	}

	inline static int32_t get_offset_of_U34FFC8339E09825A68B861995F9C660EB11DBF13D_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___4FFC8339E09825A68B861995F9C660EB11DBF13D_13)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395491  get_U34FFC8339E09825A68B861995F9C660EB11DBF13D_13() const { return ___4FFC8339E09825A68B861995F9C660EB11DBF13D_13; }
	inline __StaticArrayInitTypeSizeU3D16_t385395491 * get_address_of_U34FFC8339E09825A68B861995F9C660EB11DBF13D_13() { return &___4FFC8339E09825A68B861995F9C660EB11DBF13D_13; }
	inline void set_U34FFC8339E09825A68B861995F9C660EB11DBF13D_13(__StaticArrayInitTypeSizeU3D16_t385395491  value)
	{
		___4FFC8339E09825A68B861995F9C660EB11DBF13D_13 = value;
	}

	inline static int32_t get_offset_of_U3555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U3555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14() const { return ___555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U3555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14() { return &___555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14; }
	inline void set_U3555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14 = value;
	}

	inline static int32_t get_offset_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_15)); }
	inline __StaticArrayInitTypeSizeU3D48_t1904228657  get_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_15() const { return ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_15; }
	inline __StaticArrayInitTypeSizeU3D48_t1904228657 * get_address_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_15() { return &___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_15; }
	inline void set_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_15(__StaticArrayInitTypeSizeU3D48_t1904228657  value)
	{
		___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_15 = value;
	}

	inline static int32_t get_offset_of_U364354464C9074B5BB4369689AAA131961CD1EF19_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___64354464C9074B5BB4369689AAA131961CD1EF19_16)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U364354464C9074B5BB4369689AAA131961CD1EF19_16() const { return ___64354464C9074B5BB4369689AAA131961CD1EF19_16; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U364354464C9074B5BB4369689AAA131961CD1EF19_16() { return &___64354464C9074B5BB4369689AAA131961CD1EF19_16; }
	inline void set_U364354464C9074B5BB4369689AAA131961CD1EF19_16(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___64354464C9074B5BB4369689AAA131961CD1EF19_16 = value;
	}

	inline static int32_t get_offset_of_U3643A9D76937E94519B73BE072D65E79BAFF3C213_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___643A9D76937E94519B73BE072D65E79BAFF3C213_17)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863246  get_U3643A9D76937E94519B73BE072D65E79BAFF3C213_17() const { return ___643A9D76937E94519B73BE072D65E79BAFF3C213_17; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863246 * get_address_of_U3643A9D76937E94519B73BE072D65E79BAFF3C213_17() { return &___643A9D76937E94519B73BE072D65E79BAFF3C213_17; }
	inline void set_U3643A9D76937E94519B73BE072D65E79BAFF3C213_17(__StaticArrayInitTypeSizeU3D72_t2710863246  value)
	{
		___643A9D76937E94519B73BE072D65E79BAFF3C213_17 = value;
	}

	inline static int32_t get_offset_of_U366E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___66E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18)); }
	inline __StaticArrayInitTypeSizeU3D129_t2870181261  get_U366E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18() const { return ___66E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18; }
	inline __StaticArrayInitTypeSizeU3D129_t2870181261 * get_address_of_U366E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18() { return &___66E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18; }
	inline void set_U366E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18(__StaticArrayInitTypeSizeU3D129_t2870181261  value)
	{
		___66E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18 = value;
	}

	inline static int32_t get_offset_of_U36D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U36D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19() const { return ___6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U36D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19() { return &___6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19; }
	inline void set_U36D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___6D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19 = value;
	}

	inline static int32_t get_offset_of_U36F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___6F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U36F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20() const { return ___6F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U36F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20() { return &___6F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20; }
	inline void set_U36F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___6F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20 = value;
	}

	inline static int32_t get_offset_of_U37FF0A15672FF2807983AB77C0DA74928986427C0_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___7FF0A15672FF2807983AB77C0DA74928986427C0_21)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U37FF0A15672FF2807983AB77C0DA74928986427C0_21() const { return ___7FF0A15672FF2807983AB77C0DA74928986427C0_21; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U37FF0A15672FF2807983AB77C0DA74928986427C0_21() { return &___7FF0A15672FF2807983AB77C0DA74928986427C0_21; }
	inline void set_U37FF0A15672FF2807983AB77C0DA74928986427C0_21(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___7FF0A15672FF2807983AB77C0DA74928986427C0_21 = value;
	}

	inline static int32_t get_offset_of_U3821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U3821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22() const { return ___821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U3821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22() { return &___821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22; }
	inline void set_U3821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22 = value;
	}

	inline static int32_t get_offset_of_U384F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___84F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U384F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23() const { return ___84F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U384F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23() { return &___84F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23; }
	inline void set_U384F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___84F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23 = value;
	}

	inline static int32_t get_offset_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24() const { return ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24() { return &___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24; }
	inline void set_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24 = value;
	}

	inline static int32_t get_offset_of_U395CA85749ADCFBF9A2B82C0381DBCF95D175524C_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___95CA85749ADCFBF9A2B82C0381DBCF95D175524C_25)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_U395CA85749ADCFBF9A2B82C0381DBCF95D175524C_25() const { return ___95CA85749ADCFBF9A2B82C0381DBCF95D175524C_25; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_U395CA85749ADCFBF9A2B82C0381DBCF95D175524C_25() { return &___95CA85749ADCFBF9A2B82C0381DBCF95D175524C_25; }
	inline void set_U395CA85749ADCFBF9A2B82C0381DBCF95D175524C_25(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___95CA85749ADCFBF9A2B82C0381DBCF95D175524C_25 = value;
	}

	inline static int32_t get_offset_of_U39E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___9E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833660  get_U39E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26() const { return ___9E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833660 * get_address_of_U39E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26() { return &___9E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26; }
	inline void set_U39E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26(__StaticArrayInitTypeSizeU3D512_t3317833660  value)
	{
		___9E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26 = value;
	}

	inline static int32_t get_offset_of_A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27() const { return ___A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27() { return &___A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27; }
	inline void set_A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27 = value;
	}

	inline static int32_t get_offset_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395491  get_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28() const { return ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28; }
	inline __StaticArrayInitTypeSizeU3D16_t385395491 * get_address_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28() { return &___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28; }
	inline void set_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28(__StaticArrayInitTypeSizeU3D16_t385395491  value)
	{
		___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28 = value;
	}

	inline static int32_t get_offset_of_B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29() const { return ___B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29() { return &___B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29; }
	inline void set_B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29 = value;
	}

	inline static int32_t get_offset_of_B68637EF60D499620B99E336C59E4865FFC4C5D7_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___B68637EF60D499620B99E336C59E4865FFC4C5D7_30)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_B68637EF60D499620B99E336C59E4865FFC4C5D7_30() const { return ___B68637EF60D499620B99E336C59E4865FFC4C5D7_30; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_B68637EF60D499620B99E336C59E4865FFC4C5D7_30() { return &___B68637EF60D499620B99E336C59E4865FFC4C5D7_30; }
	inline void set_B68637EF60D499620B99E336C59E4865FFC4C5D7_30(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___B68637EF60D499620B99E336C59E4865FFC4C5D7_30 = value;
	}

	inline static int32_t get_offset_of_B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31)); }
	inline __StaticArrayInitTypeSizeU3D30_t1548325975  get_B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31() const { return ___B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31; }
	inline __StaticArrayInitTypeSizeU3D30_t1548325975 * get_address_of_B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31() { return &___B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31; }
	inline void set_B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31(__StaticArrayInitTypeSizeU3D30_t1548325975  value)
	{
		___B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31 = value;
	}

	inline static int32_t get_offset_of_C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32)); }
	inline __StaticArrayInitTypeSizeU3D96_t385919777  get_C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32() const { return ___C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32; }
	inline __StaticArrayInitTypeSizeU3D96_t385919777 * get_address_of_C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32() { return &___C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32; }
	inline void set_C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32(__StaticArrayInitTypeSizeU3D96_t385919777  value)
	{
		___C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32 = value;
	}

	inline static int32_t get_offset_of_D9C221237B647EC215A7BCDED447349810E6BF9C_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___D9C221237B647EC215A7BCDED447349810E6BF9C_33)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_D9C221237B647EC215A7BCDED447349810E6BF9C_33() const { return ___D9C221237B647EC215A7BCDED447349810E6BF9C_33; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_D9C221237B647EC215A7BCDED447349810E6BF9C_33() { return &___D9C221237B647EC215A7BCDED447349810E6BF9C_33; }
	inline void set_D9C221237B647EC215A7BCDED447349810E6BF9C_33(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___D9C221237B647EC215A7BCDED447349810E6BF9C_33 = value;
	}

	inline static int32_t get_offset_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34)); }
	inline __StaticArrayInitTypeSizeU3D56_t385133347  get_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34() const { return ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34; }
	inline __StaticArrayInitTypeSizeU3D56_t385133347 * get_address_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34() { return &___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34; }
	inline void set_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34(__StaticArrayInitTypeSizeU3D56_t385133347  value)
	{
		___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34 = value;
	}

	inline static int32_t get_offset_of_E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35() const { return ___E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35() { return &___E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35; }
	inline void set_E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35 = value;
	}

	inline static int32_t get_offset_of_E21F52BC931487E3B4E28F1E315561D39A384D55_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___E21F52BC931487E3B4E28F1E315561D39A384D55_36)); }
	inline __StaticArrayInitTypeSizeU3D48_t1904228657  get_E21F52BC931487E3B4E28F1E315561D39A384D55_36() const { return ___E21F52BC931487E3B4E28F1E315561D39A384D55_36; }
	inline __StaticArrayInitTypeSizeU3D48_t1904228657 * get_address_of_E21F52BC931487E3B4E28F1E315561D39A384D55_36() { return &___E21F52BC931487E3B4E28F1E315561D39A384D55_36; }
	inline void set_E21F52BC931487E3B4E28F1E315561D39A384D55_36(__StaticArrayInitTypeSizeU3D48_t1904228657  value)
	{
		___E21F52BC931487E3B4E28F1E315561D39A384D55_36 = value;
	}

	inline static int32_t get_offset_of_E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37() const { return ___E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37() { return &___E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37; }
	inline void set_E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37 = value;
	}

	inline static int32_t get_offset_of_E43F6BA634642FB90FEEE1A8F9905E957741960C_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___E43F6BA634642FB90FEEE1A8F9905E957741960C_38)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_E43F6BA634642FB90FEEE1A8F9905E957741960C_38() const { return ___E43F6BA634642FB90FEEE1A8F9905E957741960C_38; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_E43F6BA634642FB90FEEE1A8F9905E957741960C_38() { return &___E43F6BA634642FB90FEEE1A8F9905E957741960C_38; }
	inline void set_E43F6BA634642FB90FEEE1A8F9905E957741960C_38(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___E43F6BA634642FB90FEEE1A8F9905E957741960C_38 = value;
	}

	inline static int32_t get_offset_of_EF813A47B13574822D335279EF445343654A4F04_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___EF813A47B13574822D335279EF445343654A4F04_39)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789  get_EF813A47B13574822D335279EF445343654A4F04_39() const { return ___EF813A47B13574822D335279EF445343654A4F04_39; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899789 * get_address_of_EF813A47B13574822D335279EF445343654A4F04_39() { return &___EF813A47B13574822D335279EF445343654A4F04_39; }
	inline void set_EF813A47B13574822D335279EF445343654A4F04_39(__StaticArrayInitTypeSizeU3D1024_t4211899789  value)
	{
		___EF813A47B13574822D335279EF445343654A4F04_39 = value;
	}

	inline static int32_t get_offset_of_FC9EEBC457831129D4AF4FF84333B481F4BED60E_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___FC9EEBC457831129D4AF4FF84333B481F4BED60E_40)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635  get_FC9EEBC457831129D4AF4FF84333B481F4BED60E_40() const { return ___FC9EEBC457831129D4AF4FF84333B481F4BED60E_40; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367635 * get_address_of_FC9EEBC457831129D4AF4FF84333B481F4BED60E_40() { return &___FC9EEBC457831129D4AF4FF84333B481F4BED60E_40; }
	inline void set_FC9EEBC457831129D4AF4FF84333B481F4BED60E_40(__StaticArrayInitTypeSizeU3D256_t1757367635  value)
	{
		___FC9EEBC457831129D4AF4FF84333B481F4BED60E_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t61518632 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____lastReadTask_13)); }
	inline Task_1_t61518632 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t61518632 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t61518632 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef NEWKEYSMESSAGE_T2094769425_H
#define NEWKEYSMESSAGE_T2094769425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.NewKeysMessage
struct  NewKeysMessage_t2094769425  : public Message_t2172764883
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWKEYSMESSAGE_T2094769425_H
#ifndef KEYEXCHANGEDHGROUPEXCHANGEGROUP_T3170201939_H
#define KEYEXCHANGEDHGROUPEXCHANGEGROUP_T3170201939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeGroup
struct  KeyExchangeDhGroupExchangeGroup_t3170201939  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeGroup::_safePrime
	ByteU5BU5D_t4116647657* ____safePrime_3;
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeGroup::_subGroup
	ByteU5BU5D_t4116647657* ____subGroup_4;

public:
	inline static int32_t get_offset_of__safePrime_3() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeGroup_t3170201939, ____safePrime_3)); }
	inline ByteU5BU5D_t4116647657* get__safePrime_3() const { return ____safePrime_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__safePrime_3() { return &____safePrime_3; }
	inline void set__safePrime_3(ByteU5BU5D_t4116647657* value)
	{
		____safePrime_3 = value;
		Il2CppCodeGenWriteBarrier((&____safePrime_3), value);
	}

	inline static int32_t get_offset_of__subGroup_4() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeGroup_t3170201939, ____subGroup_4)); }
	inline ByteU5BU5D_t4116647657* get__subGroup_4() const { return ____subGroup_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__subGroup_4() { return &____subGroup_4; }
	inline void set__subGroup_4(ByteU5BU5D_t4116647657* value)
	{
		____subGroup_4 = value;
		Il2CppCodeGenWriteBarrier((&____subGroup_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEXCHANGEDHGROUPEXCHANGEGROUP_T3170201939_H
#ifndef KEYEXCHANGEDHGROUPEXCHANGEINIT_T413383314_H
#define KEYEXCHANGEDHGROUPEXCHANGEINIT_T413383314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeInit
struct  KeyExchangeDhGroupExchangeInit_t413383314  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeInit::_eBytes
	ByteU5BU5D_t4116647657* ____eBytes_3;

public:
	inline static int32_t get_offset_of__eBytes_3() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeInit_t413383314, ____eBytes_3)); }
	inline ByteU5BU5D_t4116647657* get__eBytes_3() const { return ____eBytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__eBytes_3() { return &____eBytes_3; }
	inline void set__eBytes_3(ByteU5BU5D_t4116647657* value)
	{
		____eBytes_3 = value;
		Il2CppCodeGenWriteBarrier((&____eBytes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEXCHANGEDHGROUPEXCHANGEINIT_T413383314_H
#ifndef KEYEXCHANGEDHGROUPEXCHANGEREPLY_T1476353978_H
#define KEYEXCHANGEDHGROUPEXCHANGEREPLY_T1476353978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply
struct  KeyExchangeDhGroupExchangeReply_t1476353978  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply::_fBytes
	ByteU5BU5D_t4116647657* ____fBytes_3;
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply::<HostKey>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CHostKeyU3Ek__BackingField_4;
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeReply::<Signature>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CSignatureU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__fBytes_3() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeReply_t1476353978, ____fBytes_3)); }
	inline ByteU5BU5D_t4116647657* get__fBytes_3() const { return ____fBytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__fBytes_3() { return &____fBytes_3; }
	inline void set__fBytes_3(ByteU5BU5D_t4116647657* value)
	{
		____fBytes_3 = value;
		Il2CppCodeGenWriteBarrier((&____fBytes_3), value);
	}

	inline static int32_t get_offset_of_U3CHostKeyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeReply_t1476353978, ___U3CHostKeyU3Ek__BackingField_4)); }
	inline ByteU5BU5D_t4116647657* get_U3CHostKeyU3Ek__BackingField_4() const { return ___U3CHostKeyU3Ek__BackingField_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CHostKeyU3Ek__BackingField_4() { return &___U3CHostKeyU3Ek__BackingField_4; }
	inline void set_U3CHostKeyU3Ek__BackingField_4(ByteU5BU5D_t4116647657* value)
	{
		___U3CHostKeyU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHostKeyU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CSignatureU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeReply_t1476353978, ___U3CSignatureU3Ek__BackingField_5)); }
	inline ByteU5BU5D_t4116647657* get_U3CSignatureU3Ek__BackingField_5() const { return ___U3CSignatureU3Ek__BackingField_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CSignatureU3Ek__BackingField_5() { return &___U3CSignatureU3Ek__BackingField_5; }
	inline void set_U3CSignatureU3Ek__BackingField_5(ByteU5BU5D_t4116647657* value)
	{
		___U3CSignatureU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSignatureU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEXCHANGEDHGROUPEXCHANGEREPLY_T1476353978_H
#ifndef SERVICENAME_T459976500_H
#define SERVICENAME_T459976500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.ServiceName
struct  ServiceName_t459976500 
{
public:
	// System.Int32 Renci.SshNet.Messages.ServiceName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServiceName_t459976500, ___value___2)); }
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
#endif // SERVICENAME_T459976500_H
#ifndef IGNOREMESSAGE_T499969309_H
#define IGNOREMESSAGE_T499969309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.IgnoreMessage
struct  IgnoreMessage_t499969309  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.IgnoreMessage::<Data>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CDataU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IgnoreMessage_t499969309, ___U3CDataU3Ek__BackingField_3)); }
	inline ByteU5BU5D_t4116647657* get_U3CDataU3Ek__BackingField_3() const { return ___U3CDataU3Ek__BackingField_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CDataU3Ek__BackingField_3() { return &___U3CDataU3Ek__BackingField_3; }
	inline void set_U3CDataU3Ek__BackingField_3(ByteU5BU5D_t4116647657* value)
	{
		___U3CDataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IGNOREMESSAGE_T499969309_H
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
#ifndef KEYEXCHANGEDHGROUPEXCHANGEREQUEST_T1412751601_H
#define KEYEXCHANGEDHGROUPEXCHANGEREQUEST_T1412751601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeRequest
struct  KeyExchangeDhGroupExchangeRequest_t1412751601  : public Message_t2172764883
{
public:
	// System.UInt32 Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeRequest::<Minimum>k__BackingField
	uint32_t ___U3CMinimumU3Ek__BackingField_3;
	// System.UInt32 Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeRequest::<Preferred>k__BackingField
	uint32_t ___U3CPreferredU3Ek__BackingField_4;
	// System.UInt32 Renci.SshNet.Messages.Transport.KeyExchangeDhGroupExchangeRequest::<Maximum>k__BackingField
	uint32_t ___U3CMaximumU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CMinimumU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeRequest_t1412751601, ___U3CMinimumU3Ek__BackingField_3)); }
	inline uint32_t get_U3CMinimumU3Ek__BackingField_3() const { return ___U3CMinimumU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CMinimumU3Ek__BackingField_3() { return &___U3CMinimumU3Ek__BackingField_3; }
	inline void set_U3CMinimumU3Ek__BackingField_3(uint32_t value)
	{
		___U3CMinimumU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CPreferredU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeRequest_t1412751601, ___U3CPreferredU3Ek__BackingField_4)); }
	inline uint32_t get_U3CPreferredU3Ek__BackingField_4() const { return ___U3CPreferredU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CPreferredU3Ek__BackingField_4() { return &___U3CPreferredU3Ek__BackingField_4; }
	inline void set_U3CPreferredU3Ek__BackingField_4(uint32_t value)
	{
		___U3CPreferredU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(KeyExchangeDhGroupExchangeRequest_t1412751601, ___U3CMaximumU3Ek__BackingField_5)); }
	inline uint32_t get_U3CMaximumU3Ek__BackingField_5() const { return ___U3CMaximumU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CMaximumU3Ek__BackingField_5() { return &___U3CMaximumU3Ek__BackingField_5; }
	inline void set_U3CMaximumU3Ek__BackingField_5(uint32_t value)
	{
		___U3CMaximumU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEXCHANGEDHGROUPEXCHANGEREQUEST_T1412751601_H
#ifndef TERMINALMODES_T2307982478_H
#define TERMINALMODES_T2307982478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.TerminalModes
struct  TerminalModes_t2307982478 
{
public:
	// System.Byte Renci.SshNet.Common.TerminalModes::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TerminalModes_t2307982478, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERMINALMODES_T2307982478_H
#ifndef DEBUGMESSAGE_T3445337755_H
#define DEBUGMESSAGE_T3445337755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.DebugMessage
struct  DebugMessage_t3445337755  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.DebugMessage::_message
	ByteU5BU5D_t4116647657* ____message_3;
	// System.Byte[] Renci.SshNet.Messages.Transport.DebugMessage::_language
	ByteU5BU5D_t4116647657* ____language_4;
	// System.Boolean Renci.SshNet.Messages.Transport.DebugMessage::<IsAlwaysDisplay>k__BackingField
	bool ___U3CIsAlwaysDisplayU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__message_3() { return static_cast<int32_t>(offsetof(DebugMessage_t3445337755, ____message_3)); }
	inline ByteU5BU5D_t4116647657* get__message_3() const { return ____message_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__message_3() { return &____message_3; }
	inline void set__message_3(ByteU5BU5D_t4116647657* value)
	{
		____message_3 = value;
		Il2CppCodeGenWriteBarrier((&____message_3), value);
	}

	inline static int32_t get_offset_of__language_4() { return static_cast<int32_t>(offsetof(DebugMessage_t3445337755, ____language_4)); }
	inline ByteU5BU5D_t4116647657* get__language_4() const { return ____language_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__language_4() { return &____language_4; }
	inline void set__language_4(ByteU5BU5D_t4116647657* value)
	{
		____language_4 = value;
		Il2CppCodeGenWriteBarrier((&____language_4), value);
	}

	inline static int32_t get_offset_of_U3CIsAlwaysDisplayU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DebugMessage_t3445337755, ___U3CIsAlwaysDisplayU3Ek__BackingField_5)); }
	inline bool get_U3CIsAlwaysDisplayU3Ek__BackingField_5() const { return ___U3CIsAlwaysDisplayU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsAlwaysDisplayU3Ek__BackingField_5() { return &___U3CIsAlwaysDisplayU3Ek__BackingField_5; }
	inline void set_U3CIsAlwaysDisplayU3Ek__BackingField_5(bool value)
	{
		___U3CIsAlwaysDisplayU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGMESSAGE_T3445337755_H
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
#ifndef KEYEXCHANGEDHINITMESSAGE_T1197260220_H
#define KEYEXCHANGEDHINITMESSAGE_T1197260220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.KeyExchangeDhInitMessage
struct  KeyExchangeDhInitMessage_t1197260220  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhInitMessage::_eBytes
	ByteU5BU5D_t4116647657* ____eBytes_3;

public:
	inline static int32_t get_offset_of__eBytes_3() { return static_cast<int32_t>(offsetof(KeyExchangeDhInitMessage_t1197260220, ____eBytes_3)); }
	inline ByteU5BU5D_t4116647657* get__eBytes_3() const { return ____eBytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__eBytes_3() { return &____eBytes_3; }
	inline void set__eBytes_3(ByteU5BU5D_t4116647657* value)
	{
		____eBytes_3 = value;
		Il2CppCodeGenWriteBarrier((&____eBytes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEXCHANGEDHINITMESSAGE_T1197260220_H
#ifndef KEYEXCHANGEDHREPLYMESSAGE_T3243625140_H
#define KEYEXCHANGEDHREPLYMESSAGE_T3243625140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage
struct  KeyExchangeDhReplyMessage_t3243625140  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage::_fBytes
	ByteU5BU5D_t4116647657* ____fBytes_3;
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage::<HostKey>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CHostKeyU3Ek__BackingField_4;
	// System.Byte[] Renci.SshNet.Messages.Transport.KeyExchangeDhReplyMessage::<Signature>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CSignatureU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__fBytes_3() { return static_cast<int32_t>(offsetof(KeyExchangeDhReplyMessage_t3243625140, ____fBytes_3)); }
	inline ByteU5BU5D_t4116647657* get__fBytes_3() const { return ____fBytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__fBytes_3() { return &____fBytes_3; }
	inline void set__fBytes_3(ByteU5BU5D_t4116647657* value)
	{
		____fBytes_3 = value;
		Il2CppCodeGenWriteBarrier((&____fBytes_3), value);
	}

	inline static int32_t get_offset_of_U3CHostKeyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(KeyExchangeDhReplyMessage_t3243625140, ___U3CHostKeyU3Ek__BackingField_4)); }
	inline ByteU5BU5D_t4116647657* get_U3CHostKeyU3Ek__BackingField_4() const { return ___U3CHostKeyU3Ek__BackingField_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CHostKeyU3Ek__BackingField_4() { return &___U3CHostKeyU3Ek__BackingField_4; }
	inline void set_U3CHostKeyU3Ek__BackingField_4(ByteU5BU5D_t4116647657* value)
	{
		___U3CHostKeyU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHostKeyU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CSignatureU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(KeyExchangeDhReplyMessage_t3243625140, ___U3CSignatureU3Ek__BackingField_5)); }
	inline ByteU5BU5D_t4116647657* get_U3CSignatureU3Ek__BackingField_5() const { return ___U3CSignatureU3Ek__BackingField_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CSignatureU3Ek__BackingField_5() { return &___U3CSignatureU3Ek__BackingField_5; }
	inline void set_U3CSignatureU3Ek__BackingField_5(ByteU5BU5D_t4116647657* value)
	{
		___U3CSignatureU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSignatureU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEXCHANGEDHREPLYMESSAGE_T3243625140_H
#ifndef CHANNEL_T457090584_H
#define CHANNEL_T457090584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Channels.Channel
struct  Channel_t457090584  : public RuntimeObject
{
public:
	// System.Threading.EventWaitHandle Renci.SshNet.Channels.Channel::_channelClosedWaitHandle
	EventWaitHandle_t777845177 * ____channelClosedWaitHandle_0;
	// System.Threading.EventWaitHandle Renci.SshNet.Channels.Channel::_channelServerWindowAdjustWaitHandle
	EventWaitHandle_t777845177 * ____channelServerWindowAdjustWaitHandle_1;
	// System.Threading.EventWaitHandle Renci.SshNet.Channels.Channel::_errorOccuredWaitHandle
	EventWaitHandle_t777845177 * ____errorOccuredWaitHandle_2;
	// System.Object Renci.SshNet.Channels.Channel::_serverWindowSizeLock
	RuntimeObject * ____serverWindowSizeLock_3;
	// System.UInt32 Renci.SshNet.Channels.Channel::_initialWindowSize
	uint32_t ____initialWindowSize_4;
	// System.Nullable`1<System.UInt32> Renci.SshNet.Channels.Channel::_remoteWindowSize
	Nullable_1_t4282624060  ____remoteWindowSize_5;
	// System.Nullable`1<System.UInt32> Renci.SshNet.Channels.Channel::_remoteChannelNumber
	Nullable_1_t4282624060  ____remoteChannelNumber_6;
	// System.Nullable`1<System.UInt32> Renci.SshNet.Channels.Channel::_remotePacketSize
	Nullable_1_t4282624060  ____remotePacketSize_7;
	// Renci.SshNet.ISession Renci.SshNet.Channels.Channel::_session
	RuntimeObject* ____session_8;
	// System.Boolean Renci.SshNet.Channels.Channel::_closeMessageSent
	bool ____closeMessageSent_9;
	// System.Boolean Renci.SshNet.Channels.Channel::_closeMessageReceived
	bool ____closeMessageReceived_10;
	// System.Boolean Renci.SshNet.Channels.Channel::_eofMessageReceived
	bool ____eofMessageReceived_11;
	// System.Boolean Renci.SshNet.Channels.Channel::_eofMessageSent
	bool ____eofMessageSent_12;
	// System.EventHandler`1<Renci.SshNet.Common.ExceptionEventArgs> Renci.SshNet.Channels.Channel::Exception
	EventHandler_1_t3115254733 * ___Exception_13;
	// System.UInt32 Renci.SshNet.Channels.Channel::<LocalChannelNumber>k__BackingField
	uint32_t ___U3CLocalChannelNumberU3Ek__BackingField_14;
	// System.UInt32 Renci.SshNet.Channels.Channel::<LocalPacketSize>k__BackingField
	uint32_t ___U3CLocalPacketSizeU3Ek__BackingField_15;
	// System.UInt32 Renci.SshNet.Channels.Channel::<LocalWindowSize>k__BackingField
	uint32_t ___U3CLocalWindowSizeU3Ek__BackingField_16;
	// System.Boolean Renci.SshNet.Channels.Channel::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_17;
	// System.EventHandler`1<Renci.SshNet.Common.ChannelDataEventArgs> Renci.SshNet.Channels.Channel::DataReceived
	EventHandler_1_t3836791184 * ___DataReceived_18;
	// System.EventHandler`1<Renci.SshNet.Common.ChannelExtendedDataEventArgs> Renci.SshNet.Channels.Channel::ExtendedDataReceived
	EventHandler_1_t2214219653 * ___ExtendedDataReceived_19;
	// System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs> Renci.SshNet.Channels.Channel::EndOfData
	EventHandler_1_t1715808396 * ___EndOfData_20;
	// System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs> Renci.SshNet.Channels.Channel::Closed
	EventHandler_1_t1715808396 * ___Closed_21;
	// System.EventHandler`1<Renci.SshNet.Common.ChannelRequestEventArgs> Renci.SshNet.Channels.Channel::RequestReceived
	EventHandler_1_t2424542233 * ___RequestReceived_22;
	// System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs> Renci.SshNet.Channels.Channel::RequestSucceeded
	EventHandler_1_t1715808396 * ___RequestSucceeded_23;
	// System.EventHandler`1<Renci.SshNet.Common.ChannelEventArgs> Renci.SshNet.Channels.Channel::RequestFailed
	EventHandler_1_t1715808396 * ___RequestFailed_24;
	// System.Boolean Renci.SshNet.Channels.Channel::_isDisposed
	bool ____isDisposed_25;

public:
	inline static int32_t get_offset_of__channelClosedWaitHandle_0() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____channelClosedWaitHandle_0)); }
	inline EventWaitHandle_t777845177 * get__channelClosedWaitHandle_0() const { return ____channelClosedWaitHandle_0; }
	inline EventWaitHandle_t777845177 ** get_address_of__channelClosedWaitHandle_0() { return &____channelClosedWaitHandle_0; }
	inline void set__channelClosedWaitHandle_0(EventWaitHandle_t777845177 * value)
	{
		____channelClosedWaitHandle_0 = value;
		Il2CppCodeGenWriteBarrier((&____channelClosedWaitHandle_0), value);
	}

	inline static int32_t get_offset_of__channelServerWindowAdjustWaitHandle_1() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____channelServerWindowAdjustWaitHandle_1)); }
	inline EventWaitHandle_t777845177 * get__channelServerWindowAdjustWaitHandle_1() const { return ____channelServerWindowAdjustWaitHandle_1; }
	inline EventWaitHandle_t777845177 ** get_address_of__channelServerWindowAdjustWaitHandle_1() { return &____channelServerWindowAdjustWaitHandle_1; }
	inline void set__channelServerWindowAdjustWaitHandle_1(EventWaitHandle_t777845177 * value)
	{
		____channelServerWindowAdjustWaitHandle_1 = value;
		Il2CppCodeGenWriteBarrier((&____channelServerWindowAdjustWaitHandle_1), value);
	}

	inline static int32_t get_offset_of__errorOccuredWaitHandle_2() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____errorOccuredWaitHandle_2)); }
	inline EventWaitHandle_t777845177 * get__errorOccuredWaitHandle_2() const { return ____errorOccuredWaitHandle_2; }
	inline EventWaitHandle_t777845177 ** get_address_of__errorOccuredWaitHandle_2() { return &____errorOccuredWaitHandle_2; }
	inline void set__errorOccuredWaitHandle_2(EventWaitHandle_t777845177 * value)
	{
		____errorOccuredWaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&____errorOccuredWaitHandle_2), value);
	}

	inline static int32_t get_offset_of__serverWindowSizeLock_3() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____serverWindowSizeLock_3)); }
	inline RuntimeObject * get__serverWindowSizeLock_3() const { return ____serverWindowSizeLock_3; }
	inline RuntimeObject ** get_address_of__serverWindowSizeLock_3() { return &____serverWindowSizeLock_3; }
	inline void set__serverWindowSizeLock_3(RuntimeObject * value)
	{
		____serverWindowSizeLock_3 = value;
		Il2CppCodeGenWriteBarrier((&____serverWindowSizeLock_3), value);
	}

	inline static int32_t get_offset_of__initialWindowSize_4() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____initialWindowSize_4)); }
	inline uint32_t get__initialWindowSize_4() const { return ____initialWindowSize_4; }
	inline uint32_t* get_address_of__initialWindowSize_4() { return &____initialWindowSize_4; }
	inline void set__initialWindowSize_4(uint32_t value)
	{
		____initialWindowSize_4 = value;
	}

	inline static int32_t get_offset_of__remoteWindowSize_5() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____remoteWindowSize_5)); }
	inline Nullable_1_t4282624060  get__remoteWindowSize_5() const { return ____remoteWindowSize_5; }
	inline Nullable_1_t4282624060 * get_address_of__remoteWindowSize_5() { return &____remoteWindowSize_5; }
	inline void set__remoteWindowSize_5(Nullable_1_t4282624060  value)
	{
		____remoteWindowSize_5 = value;
	}

	inline static int32_t get_offset_of__remoteChannelNumber_6() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____remoteChannelNumber_6)); }
	inline Nullable_1_t4282624060  get__remoteChannelNumber_6() const { return ____remoteChannelNumber_6; }
	inline Nullable_1_t4282624060 * get_address_of__remoteChannelNumber_6() { return &____remoteChannelNumber_6; }
	inline void set__remoteChannelNumber_6(Nullable_1_t4282624060  value)
	{
		____remoteChannelNumber_6 = value;
	}

	inline static int32_t get_offset_of__remotePacketSize_7() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____remotePacketSize_7)); }
	inline Nullable_1_t4282624060  get__remotePacketSize_7() const { return ____remotePacketSize_7; }
	inline Nullable_1_t4282624060 * get_address_of__remotePacketSize_7() { return &____remotePacketSize_7; }
	inline void set__remotePacketSize_7(Nullable_1_t4282624060  value)
	{
		____remotePacketSize_7 = value;
	}

	inline static int32_t get_offset_of__session_8() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____session_8)); }
	inline RuntimeObject* get__session_8() const { return ____session_8; }
	inline RuntimeObject** get_address_of__session_8() { return &____session_8; }
	inline void set__session_8(RuntimeObject* value)
	{
		____session_8 = value;
		Il2CppCodeGenWriteBarrier((&____session_8), value);
	}

	inline static int32_t get_offset_of__closeMessageSent_9() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____closeMessageSent_9)); }
	inline bool get__closeMessageSent_9() const { return ____closeMessageSent_9; }
	inline bool* get_address_of__closeMessageSent_9() { return &____closeMessageSent_9; }
	inline void set__closeMessageSent_9(bool value)
	{
		____closeMessageSent_9 = value;
	}

	inline static int32_t get_offset_of__closeMessageReceived_10() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____closeMessageReceived_10)); }
	inline bool get__closeMessageReceived_10() const { return ____closeMessageReceived_10; }
	inline bool* get_address_of__closeMessageReceived_10() { return &____closeMessageReceived_10; }
	inline void set__closeMessageReceived_10(bool value)
	{
		____closeMessageReceived_10 = value;
	}

	inline static int32_t get_offset_of__eofMessageReceived_11() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____eofMessageReceived_11)); }
	inline bool get__eofMessageReceived_11() const { return ____eofMessageReceived_11; }
	inline bool* get_address_of__eofMessageReceived_11() { return &____eofMessageReceived_11; }
	inline void set__eofMessageReceived_11(bool value)
	{
		____eofMessageReceived_11 = value;
	}

	inline static int32_t get_offset_of__eofMessageSent_12() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____eofMessageSent_12)); }
	inline bool get__eofMessageSent_12() const { return ____eofMessageSent_12; }
	inline bool* get_address_of__eofMessageSent_12() { return &____eofMessageSent_12; }
	inline void set__eofMessageSent_12(bool value)
	{
		____eofMessageSent_12 = value;
	}

	inline static int32_t get_offset_of_Exception_13() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___Exception_13)); }
	inline EventHandler_1_t3115254733 * get_Exception_13() const { return ___Exception_13; }
	inline EventHandler_1_t3115254733 ** get_address_of_Exception_13() { return &___Exception_13; }
	inline void set_Exception_13(EventHandler_1_t3115254733 * value)
	{
		___Exception_13 = value;
		Il2CppCodeGenWriteBarrier((&___Exception_13), value);
	}

	inline static int32_t get_offset_of_U3CLocalChannelNumberU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___U3CLocalChannelNumberU3Ek__BackingField_14)); }
	inline uint32_t get_U3CLocalChannelNumberU3Ek__BackingField_14() const { return ___U3CLocalChannelNumberU3Ek__BackingField_14; }
	inline uint32_t* get_address_of_U3CLocalChannelNumberU3Ek__BackingField_14() { return &___U3CLocalChannelNumberU3Ek__BackingField_14; }
	inline void set_U3CLocalChannelNumberU3Ek__BackingField_14(uint32_t value)
	{
		___U3CLocalChannelNumberU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CLocalPacketSizeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___U3CLocalPacketSizeU3Ek__BackingField_15)); }
	inline uint32_t get_U3CLocalPacketSizeU3Ek__BackingField_15() const { return ___U3CLocalPacketSizeU3Ek__BackingField_15; }
	inline uint32_t* get_address_of_U3CLocalPacketSizeU3Ek__BackingField_15() { return &___U3CLocalPacketSizeU3Ek__BackingField_15; }
	inline void set_U3CLocalPacketSizeU3Ek__BackingField_15(uint32_t value)
	{
		___U3CLocalPacketSizeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CLocalWindowSizeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___U3CLocalWindowSizeU3Ek__BackingField_16)); }
	inline uint32_t get_U3CLocalWindowSizeU3Ek__BackingField_16() const { return ___U3CLocalWindowSizeU3Ek__BackingField_16; }
	inline uint32_t* get_address_of_U3CLocalWindowSizeU3Ek__BackingField_16() { return &___U3CLocalWindowSizeU3Ek__BackingField_16; }
	inline void set_U3CLocalWindowSizeU3Ek__BackingField_16(uint32_t value)
	{
		___U3CLocalWindowSizeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CIsOpenU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___U3CIsOpenU3Ek__BackingField_17)); }
	inline bool get_U3CIsOpenU3Ek__BackingField_17() const { return ___U3CIsOpenU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CIsOpenU3Ek__BackingField_17() { return &___U3CIsOpenU3Ek__BackingField_17; }
	inline void set_U3CIsOpenU3Ek__BackingField_17(bool value)
	{
		___U3CIsOpenU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_DataReceived_18() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___DataReceived_18)); }
	inline EventHandler_1_t3836791184 * get_DataReceived_18() const { return ___DataReceived_18; }
	inline EventHandler_1_t3836791184 ** get_address_of_DataReceived_18() { return &___DataReceived_18; }
	inline void set_DataReceived_18(EventHandler_1_t3836791184 * value)
	{
		___DataReceived_18 = value;
		Il2CppCodeGenWriteBarrier((&___DataReceived_18), value);
	}

	inline static int32_t get_offset_of_ExtendedDataReceived_19() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___ExtendedDataReceived_19)); }
	inline EventHandler_1_t2214219653 * get_ExtendedDataReceived_19() const { return ___ExtendedDataReceived_19; }
	inline EventHandler_1_t2214219653 ** get_address_of_ExtendedDataReceived_19() { return &___ExtendedDataReceived_19; }
	inline void set_ExtendedDataReceived_19(EventHandler_1_t2214219653 * value)
	{
		___ExtendedDataReceived_19 = value;
		Il2CppCodeGenWriteBarrier((&___ExtendedDataReceived_19), value);
	}

	inline static int32_t get_offset_of_EndOfData_20() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___EndOfData_20)); }
	inline EventHandler_1_t1715808396 * get_EndOfData_20() const { return ___EndOfData_20; }
	inline EventHandler_1_t1715808396 ** get_address_of_EndOfData_20() { return &___EndOfData_20; }
	inline void set_EndOfData_20(EventHandler_1_t1715808396 * value)
	{
		___EndOfData_20 = value;
		Il2CppCodeGenWriteBarrier((&___EndOfData_20), value);
	}

	inline static int32_t get_offset_of_Closed_21() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___Closed_21)); }
	inline EventHandler_1_t1715808396 * get_Closed_21() const { return ___Closed_21; }
	inline EventHandler_1_t1715808396 ** get_address_of_Closed_21() { return &___Closed_21; }
	inline void set_Closed_21(EventHandler_1_t1715808396 * value)
	{
		___Closed_21 = value;
		Il2CppCodeGenWriteBarrier((&___Closed_21), value);
	}

	inline static int32_t get_offset_of_RequestReceived_22() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___RequestReceived_22)); }
	inline EventHandler_1_t2424542233 * get_RequestReceived_22() const { return ___RequestReceived_22; }
	inline EventHandler_1_t2424542233 ** get_address_of_RequestReceived_22() { return &___RequestReceived_22; }
	inline void set_RequestReceived_22(EventHandler_1_t2424542233 * value)
	{
		___RequestReceived_22 = value;
		Il2CppCodeGenWriteBarrier((&___RequestReceived_22), value);
	}

	inline static int32_t get_offset_of_RequestSucceeded_23() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___RequestSucceeded_23)); }
	inline EventHandler_1_t1715808396 * get_RequestSucceeded_23() const { return ___RequestSucceeded_23; }
	inline EventHandler_1_t1715808396 ** get_address_of_RequestSucceeded_23() { return &___RequestSucceeded_23; }
	inline void set_RequestSucceeded_23(EventHandler_1_t1715808396 * value)
	{
		___RequestSucceeded_23 = value;
		Il2CppCodeGenWriteBarrier((&___RequestSucceeded_23), value);
	}

	inline static int32_t get_offset_of_RequestFailed_24() { return static_cast<int32_t>(offsetof(Channel_t457090584, ___RequestFailed_24)); }
	inline EventHandler_1_t1715808396 * get_RequestFailed_24() const { return ___RequestFailed_24; }
	inline EventHandler_1_t1715808396 ** get_address_of_RequestFailed_24() { return &___RequestFailed_24; }
	inline void set_RequestFailed_24(EventHandler_1_t1715808396 * value)
	{
		___RequestFailed_24 = value;
		Il2CppCodeGenWriteBarrier((&___RequestFailed_24), value);
	}

	inline static int32_t get_offset_of__isDisposed_25() { return static_cast<int32_t>(offsetof(Channel_t457090584, ____isDisposed_25)); }
	inline bool get__isDisposed_25() const { return ____isDisposed_25; }
	inline bool* get_address_of__isDisposed_25() { return &____isDisposed_25; }
	inline void set__isDisposed_25(bool value)
	{
		____isDisposed_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNEL_T457090584_H
#ifndef PSEUDOTERMINALREQUESTINFO_T4029693938_H
#define PSEUDOTERMINALREQUESTINFO_T4029693938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.PseudoTerminalRequestInfo
struct  PseudoTerminalRequestInfo_t4029693938  : public RequestInfo_t1797926055
{
public:
	// System.String Renci.SshNet.Messages.Connection.PseudoTerminalRequestInfo::<EnvironmentVariable>k__BackingField
	String_t* ___U3CEnvironmentVariableU3Ek__BackingField_4;
	// System.UInt32 Renci.SshNet.Messages.Connection.PseudoTerminalRequestInfo::<Columns>k__BackingField
	uint32_t ___U3CColumnsU3Ek__BackingField_5;
	// System.UInt32 Renci.SshNet.Messages.Connection.PseudoTerminalRequestInfo::<Rows>k__BackingField
	uint32_t ___U3CRowsU3Ek__BackingField_6;
	// System.UInt32 Renci.SshNet.Messages.Connection.PseudoTerminalRequestInfo::<PixelWidth>k__BackingField
	uint32_t ___U3CPixelWidthU3Ek__BackingField_7;
	// System.UInt32 Renci.SshNet.Messages.Connection.PseudoTerminalRequestInfo::<PixelHeight>k__BackingField
	uint32_t ___U3CPixelHeightU3Ek__BackingField_8;
	// System.Collections.Generic.IDictionary`2<Renci.SshNet.Common.TerminalModes,System.UInt32> Renci.SshNet.Messages.Connection.PseudoTerminalRequestInfo::<TerminalModeValues>k__BackingField
	RuntimeObject* ___U3CTerminalModeValuesU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CEnvironmentVariableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PseudoTerminalRequestInfo_t4029693938, ___U3CEnvironmentVariableU3Ek__BackingField_4)); }
	inline String_t* get_U3CEnvironmentVariableU3Ek__BackingField_4() const { return ___U3CEnvironmentVariableU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CEnvironmentVariableU3Ek__BackingField_4() { return &___U3CEnvironmentVariableU3Ek__BackingField_4; }
	inline void set_U3CEnvironmentVariableU3Ek__BackingField_4(String_t* value)
	{
		___U3CEnvironmentVariableU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEnvironmentVariableU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CColumnsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PseudoTerminalRequestInfo_t4029693938, ___U3CColumnsU3Ek__BackingField_5)); }
	inline uint32_t get_U3CColumnsU3Ek__BackingField_5() const { return ___U3CColumnsU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CColumnsU3Ek__BackingField_5() { return &___U3CColumnsU3Ek__BackingField_5; }
	inline void set_U3CColumnsU3Ek__BackingField_5(uint32_t value)
	{
		___U3CColumnsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRowsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PseudoTerminalRequestInfo_t4029693938, ___U3CRowsU3Ek__BackingField_6)); }
	inline uint32_t get_U3CRowsU3Ek__BackingField_6() const { return ___U3CRowsU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CRowsU3Ek__BackingField_6() { return &___U3CRowsU3Ek__BackingField_6; }
	inline void set_U3CRowsU3Ek__BackingField_6(uint32_t value)
	{
		___U3CRowsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CPixelWidthU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PseudoTerminalRequestInfo_t4029693938, ___U3CPixelWidthU3Ek__BackingField_7)); }
	inline uint32_t get_U3CPixelWidthU3Ek__BackingField_7() const { return ___U3CPixelWidthU3Ek__BackingField_7; }
	inline uint32_t* get_address_of_U3CPixelWidthU3Ek__BackingField_7() { return &___U3CPixelWidthU3Ek__BackingField_7; }
	inline void set_U3CPixelWidthU3Ek__BackingField_7(uint32_t value)
	{
		___U3CPixelWidthU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPixelHeightU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PseudoTerminalRequestInfo_t4029693938, ___U3CPixelHeightU3Ek__BackingField_8)); }
	inline uint32_t get_U3CPixelHeightU3Ek__BackingField_8() const { return ___U3CPixelHeightU3Ek__BackingField_8; }
	inline uint32_t* get_address_of_U3CPixelHeightU3Ek__BackingField_8() { return &___U3CPixelHeightU3Ek__BackingField_8; }
	inline void set_U3CPixelHeightU3Ek__BackingField_8(uint32_t value)
	{
		___U3CPixelHeightU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CTerminalModeValuesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PseudoTerminalRequestInfo_t4029693938, ___U3CTerminalModeValuesU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CTerminalModeValuesU3Ek__BackingField_9() const { return ___U3CTerminalModeValuesU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CTerminalModeValuesU3Ek__BackingField_9() { return &___U3CTerminalModeValuesU3Ek__BackingField_9; }
	inline void set_U3CTerminalModeValuesU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CTerminalModeValuesU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTerminalModeValuesU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PSEUDOTERMINALREQUESTINFO_T4029693938_H
#ifndef SHELLREQUESTINFO_T2073515176_H
#define SHELLREQUESTINFO_T2073515176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ShellRequestInfo
struct  ShellRequestInfo_t2073515176  : public RequestInfo_t1797926055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHELLREQUESTINFO_T2073515176_H
#ifndef KEEPALIVEREQUESTINFO_T2495335690_H
#define KEEPALIVEREQUESTINFO_T2495335690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.KeepAliveRequestInfo
struct  KeepAliveRequestInfo_t2495335690  : public RequestInfo_t1797926055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEEPALIVEREQUESTINFO_T2495335690_H
#ifndef EXITSIGNALREQUESTINFO_T2259839821_H
#define EXITSIGNALREQUESTINFO_T2259839821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ExitSignalRequestInfo
struct  ExitSignalRequestInfo_t2259839821  : public RequestInfo_t1797926055
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.ExitSignalRequestInfo::_signalName
	ByteU5BU5D_t4116647657* ____signalName_4;
	// System.Byte[] Renci.SshNet.Messages.Connection.ExitSignalRequestInfo::_errorMessage
	ByteU5BU5D_t4116647657* ____errorMessage_5;
	// System.Byte[] Renci.SshNet.Messages.Connection.ExitSignalRequestInfo::_language
	ByteU5BU5D_t4116647657* ____language_6;
	// System.Boolean Renci.SshNet.Messages.Connection.ExitSignalRequestInfo::<CoreDumped>k__BackingField
	bool ___U3CCoreDumpedU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__signalName_4() { return static_cast<int32_t>(offsetof(ExitSignalRequestInfo_t2259839821, ____signalName_4)); }
	inline ByteU5BU5D_t4116647657* get__signalName_4() const { return ____signalName_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__signalName_4() { return &____signalName_4; }
	inline void set__signalName_4(ByteU5BU5D_t4116647657* value)
	{
		____signalName_4 = value;
		Il2CppCodeGenWriteBarrier((&____signalName_4), value);
	}

	inline static int32_t get_offset_of__errorMessage_5() { return static_cast<int32_t>(offsetof(ExitSignalRequestInfo_t2259839821, ____errorMessage_5)); }
	inline ByteU5BU5D_t4116647657* get__errorMessage_5() const { return ____errorMessage_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__errorMessage_5() { return &____errorMessage_5; }
	inline void set__errorMessage_5(ByteU5BU5D_t4116647657* value)
	{
		____errorMessage_5 = value;
		Il2CppCodeGenWriteBarrier((&____errorMessage_5), value);
	}

	inline static int32_t get_offset_of__language_6() { return static_cast<int32_t>(offsetof(ExitSignalRequestInfo_t2259839821, ____language_6)); }
	inline ByteU5BU5D_t4116647657* get__language_6() const { return ____language_6; }
	inline ByteU5BU5D_t4116647657** get_address_of__language_6() { return &____language_6; }
	inline void set__language_6(ByteU5BU5D_t4116647657* value)
	{
		____language_6 = value;
		Il2CppCodeGenWriteBarrier((&____language_6), value);
	}

	inline static int32_t get_offset_of_U3CCoreDumpedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ExitSignalRequestInfo_t2259839821, ___U3CCoreDumpedU3Ek__BackingField_7)); }
	inline bool get_U3CCoreDumpedU3Ek__BackingField_7() const { return ___U3CCoreDumpedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CCoreDumpedU3Ek__BackingField_7() { return &___U3CCoreDumpedU3Ek__BackingField_7; }
	inline void set_U3CCoreDumpedU3Ek__BackingField_7(bool value)
	{
		___U3CCoreDumpedU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXITSIGNALREQUESTINFO_T2259839821_H
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
#ifndef X11FORWARDINGREQUESTINFO_T3882523697_H
#define X11FORWARDINGREQUESTINFO_T3882523697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.X11ForwardingRequestInfo
struct  X11ForwardingRequestInfo_t3882523697  : public RequestInfo_t1797926055
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.X11ForwardingRequestInfo::_authenticationProtocol
	ByteU5BU5D_t4116647657* ____authenticationProtocol_4;
	// System.Boolean Renci.SshNet.Messages.Connection.X11ForwardingRequestInfo::<IsSingleConnection>k__BackingField
	bool ___U3CIsSingleConnectionU3Ek__BackingField_5;
	// System.Byte[] Renci.SshNet.Messages.Connection.X11ForwardingRequestInfo::<AuthenticationCookie>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CAuthenticationCookieU3Ek__BackingField_6;
	// System.UInt32 Renci.SshNet.Messages.Connection.X11ForwardingRequestInfo::<ScreenNumber>k__BackingField
	uint32_t ___U3CScreenNumberU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__authenticationProtocol_4() { return static_cast<int32_t>(offsetof(X11ForwardingRequestInfo_t3882523697, ____authenticationProtocol_4)); }
	inline ByteU5BU5D_t4116647657* get__authenticationProtocol_4() const { return ____authenticationProtocol_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__authenticationProtocol_4() { return &____authenticationProtocol_4; }
	inline void set__authenticationProtocol_4(ByteU5BU5D_t4116647657* value)
	{
		____authenticationProtocol_4 = value;
		Il2CppCodeGenWriteBarrier((&____authenticationProtocol_4), value);
	}

	inline static int32_t get_offset_of_U3CIsSingleConnectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(X11ForwardingRequestInfo_t3882523697, ___U3CIsSingleConnectionU3Ek__BackingField_5)); }
	inline bool get_U3CIsSingleConnectionU3Ek__BackingField_5() const { return ___U3CIsSingleConnectionU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsSingleConnectionU3Ek__BackingField_5() { return &___U3CIsSingleConnectionU3Ek__BackingField_5; }
	inline void set_U3CIsSingleConnectionU3Ek__BackingField_5(bool value)
	{
		___U3CIsSingleConnectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAuthenticationCookieU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(X11ForwardingRequestInfo_t3882523697, ___U3CAuthenticationCookieU3Ek__BackingField_6)); }
	inline ByteU5BU5D_t4116647657* get_U3CAuthenticationCookieU3Ek__BackingField_6() const { return ___U3CAuthenticationCookieU3Ek__BackingField_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CAuthenticationCookieU3Ek__BackingField_6() { return &___U3CAuthenticationCookieU3Ek__BackingField_6; }
	inline void set_U3CAuthenticationCookieU3Ek__BackingField_6(ByteU5BU5D_t4116647657* value)
	{
		___U3CAuthenticationCookieU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthenticationCookieU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CScreenNumberU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(X11ForwardingRequestInfo_t3882523697, ___U3CScreenNumberU3Ek__BackingField_7)); }
	inline uint32_t get_U3CScreenNumberU3Ek__BackingField_7() const { return ___U3CScreenNumberU3Ek__BackingField_7; }
	inline uint32_t* get_address_of_U3CScreenNumberU3Ek__BackingField_7() { return &___U3CScreenNumberU3Ek__BackingField_7; }
	inline void set_U3CScreenNumberU3Ek__BackingField_7(uint32_t value)
	{
		___U3CScreenNumberU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X11FORWARDINGREQUESTINFO_T3882523697_H
#ifndef XONXOFFREQUESTINFO_T685602832_H
#define XONXOFFREQUESTINFO_T685602832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.XonXoffRequestInfo
struct  XonXoffRequestInfo_t685602832  : public RequestInfo_t1797926055
{
public:
	// System.Boolean Renci.SshNet.Messages.Connection.XonXoffRequestInfo::<ClientCanDo>k__BackingField
	bool ___U3CClientCanDoU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CClientCanDoU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XonXoffRequestInfo_t685602832, ___U3CClientCanDoU3Ek__BackingField_4)); }
	inline bool get_U3CClientCanDoU3Ek__BackingField_4() const { return ___U3CClientCanDoU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CClientCanDoU3Ek__BackingField_4() { return &___U3CClientCanDoU3Ek__BackingField_4; }
	inline void set_U3CClientCanDoU3Ek__BackingField_4(bool value)
	{
		___U3CClientCanDoU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XONXOFFREQUESTINFO_T685602832_H
#ifndef WINDOWCHANGEREQUESTINFO_T1224757212_H
#define WINDOWCHANGEREQUESTINFO_T1224757212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.WindowChangeRequestInfo
struct  WindowChangeRequestInfo_t1224757212  : public RequestInfo_t1797926055
{
public:
	// System.UInt32 Renci.SshNet.Messages.Connection.WindowChangeRequestInfo::<Columns>k__BackingField
	uint32_t ___U3CColumnsU3Ek__BackingField_4;
	// System.UInt32 Renci.SshNet.Messages.Connection.WindowChangeRequestInfo::<Rows>k__BackingField
	uint32_t ___U3CRowsU3Ek__BackingField_5;
	// System.UInt32 Renci.SshNet.Messages.Connection.WindowChangeRequestInfo::<Width>k__BackingField
	uint32_t ___U3CWidthU3Ek__BackingField_6;
	// System.UInt32 Renci.SshNet.Messages.Connection.WindowChangeRequestInfo::<Height>k__BackingField
	uint32_t ___U3CHeightU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CColumnsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WindowChangeRequestInfo_t1224757212, ___U3CColumnsU3Ek__BackingField_4)); }
	inline uint32_t get_U3CColumnsU3Ek__BackingField_4() const { return ___U3CColumnsU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CColumnsU3Ek__BackingField_4() { return &___U3CColumnsU3Ek__BackingField_4; }
	inline void set_U3CColumnsU3Ek__BackingField_4(uint32_t value)
	{
		___U3CColumnsU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRowsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WindowChangeRequestInfo_t1224757212, ___U3CRowsU3Ek__BackingField_5)); }
	inline uint32_t get_U3CRowsU3Ek__BackingField_5() const { return ___U3CRowsU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CRowsU3Ek__BackingField_5() { return &___U3CRowsU3Ek__BackingField_5; }
	inline void set_U3CRowsU3Ek__BackingField_5(uint32_t value)
	{
		___U3CRowsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WindowChangeRequestInfo_t1224757212, ___U3CWidthU3Ek__BackingField_6)); }
	inline uint32_t get_U3CWidthU3Ek__BackingField_6() const { return ___U3CWidthU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CWidthU3Ek__BackingField_6() { return &___U3CWidthU3Ek__BackingField_6; }
	inline void set_U3CWidthU3Ek__BackingField_6(uint32_t value)
	{
		___U3CWidthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WindowChangeRequestInfo_t1224757212, ___U3CHeightU3Ek__BackingField_7)); }
	inline uint32_t get_U3CHeightU3Ek__BackingField_7() const { return ___U3CHeightU3Ek__BackingField_7; }
	inline uint32_t* get_address_of_U3CHeightU3Ek__BackingField_7() { return &___U3CHeightU3Ek__BackingField_7; }
	inline void set_U3CHeightU3Ek__BackingField_7(uint32_t value)
	{
		___U3CHeightU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWCHANGEREQUESTINFO_T1224757212_H
#ifndef SIGNALREQUESTINFO_T4068712302_H
#define SIGNALREQUESTINFO_T4068712302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.SignalRequestInfo
struct  SignalRequestInfo_t4068712302  : public RequestInfo_t1797926055
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.SignalRequestInfo::_signalName
	ByteU5BU5D_t4116647657* ____signalName_4;

public:
	inline static int32_t get_offset_of__signalName_4() { return static_cast<int32_t>(offsetof(SignalRequestInfo_t4068712302, ____signalName_4)); }
	inline ByteU5BU5D_t4116647657* get__signalName_4() const { return ____signalName_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__signalName_4() { return &____signalName_4; }
	inline void set__signalName_4(ByteU5BU5D_t4116647657* value)
	{
		____signalName_4 = value;
		Il2CppCodeGenWriteBarrier((&____signalName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNALREQUESTINFO_T4068712302_H
#ifndef SUBSYSTEMREQUESTINFO_T2580347556_H
#define SUBSYSTEMREQUESTINFO_T2580347556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.SubsystemRequestInfo
struct  SubsystemRequestInfo_t2580347556  : public RequestInfo_t1797926055
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.SubsystemRequestInfo::_subsystemName
	ByteU5BU5D_t4116647657* ____subsystemName_4;

public:
	inline static int32_t get_offset_of__subsystemName_4() { return static_cast<int32_t>(offsetof(SubsystemRequestInfo_t2580347556, ____subsystemName_4)); }
	inline ByteU5BU5D_t4116647657* get__subsystemName_4() const { return ____subsystemName_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__subsystemName_4() { return &____subsystemName_4; }
	inline void set__subsystemName_4(ByteU5BU5D_t4116647657* value)
	{
		____subsystemName_4 = value;
		Il2CppCodeGenWriteBarrier((&____subsystemName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMREQUESTINFO_T2580347556_H
#ifndef DIRECTTCPIPCHANNELINFO_T3432270019_H
#define DIRECTTCPIPCHANNELINFO_T3432270019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.DirectTcpipChannelInfo
struct  DirectTcpipChannelInfo_t3432270019  : public ChannelOpenInfo_t2541744565
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.DirectTcpipChannelInfo::_hostToConnect
	ByteU5BU5D_t4116647657* ____hostToConnect_3;
	// System.Byte[] Renci.SshNet.Messages.Connection.DirectTcpipChannelInfo::_originatorAddress
	ByteU5BU5D_t4116647657* ____originatorAddress_4;
	// System.UInt32 Renci.SshNet.Messages.Connection.DirectTcpipChannelInfo::<PortToConnect>k__BackingField
	uint32_t ___U3CPortToConnectU3Ek__BackingField_5;
	// System.UInt32 Renci.SshNet.Messages.Connection.DirectTcpipChannelInfo::<OriginatorPort>k__BackingField
	uint32_t ___U3COriginatorPortU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__hostToConnect_3() { return static_cast<int32_t>(offsetof(DirectTcpipChannelInfo_t3432270019, ____hostToConnect_3)); }
	inline ByteU5BU5D_t4116647657* get__hostToConnect_3() const { return ____hostToConnect_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__hostToConnect_3() { return &____hostToConnect_3; }
	inline void set__hostToConnect_3(ByteU5BU5D_t4116647657* value)
	{
		____hostToConnect_3 = value;
		Il2CppCodeGenWriteBarrier((&____hostToConnect_3), value);
	}

	inline static int32_t get_offset_of__originatorAddress_4() { return static_cast<int32_t>(offsetof(DirectTcpipChannelInfo_t3432270019, ____originatorAddress_4)); }
	inline ByteU5BU5D_t4116647657* get__originatorAddress_4() const { return ____originatorAddress_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__originatorAddress_4() { return &____originatorAddress_4; }
	inline void set__originatorAddress_4(ByteU5BU5D_t4116647657* value)
	{
		____originatorAddress_4 = value;
		Il2CppCodeGenWriteBarrier((&____originatorAddress_4), value);
	}

	inline static int32_t get_offset_of_U3CPortToConnectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DirectTcpipChannelInfo_t3432270019, ___U3CPortToConnectU3Ek__BackingField_5)); }
	inline uint32_t get_U3CPortToConnectU3Ek__BackingField_5() const { return ___U3CPortToConnectU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CPortToConnectU3Ek__BackingField_5() { return &___U3CPortToConnectU3Ek__BackingField_5; }
	inline void set_U3CPortToConnectU3Ek__BackingField_5(uint32_t value)
	{
		___U3CPortToConnectU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COriginatorPortU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DirectTcpipChannelInfo_t3432270019, ___U3COriginatorPortU3Ek__BackingField_6)); }
	inline uint32_t get_U3COriginatorPortU3Ek__BackingField_6() const { return ___U3COriginatorPortU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3COriginatorPortU3Ek__BackingField_6() { return &___U3COriginatorPortU3Ek__BackingField_6; }
	inline void set_U3COriginatorPortU3Ek__BackingField_6(uint32_t value)
	{
		___U3COriginatorPortU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTTCPIPCHANNELINFO_T3432270019_H
#ifndef FORWARDEDTCPIPCHANNELINFO_T2138801712_H
#define FORWARDEDTCPIPCHANNELINFO_T2138801712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ForwardedTcpipChannelInfo
struct  ForwardedTcpipChannelInfo_t2138801712  : public ChannelOpenInfo_t2541744565
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.ForwardedTcpipChannelInfo::_connectedAddress
	ByteU5BU5D_t4116647657* ____connectedAddress_3;
	// System.Byte[] Renci.SshNet.Messages.Connection.ForwardedTcpipChannelInfo::_originatorAddress
	ByteU5BU5D_t4116647657* ____originatorAddress_4;
	// System.UInt32 Renci.SshNet.Messages.Connection.ForwardedTcpipChannelInfo::<ConnectedPort>k__BackingField
	uint32_t ___U3CConnectedPortU3Ek__BackingField_5;
	// System.UInt32 Renci.SshNet.Messages.Connection.ForwardedTcpipChannelInfo::<OriginatorPort>k__BackingField
	uint32_t ___U3COriginatorPortU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__connectedAddress_3() { return static_cast<int32_t>(offsetof(ForwardedTcpipChannelInfo_t2138801712, ____connectedAddress_3)); }
	inline ByteU5BU5D_t4116647657* get__connectedAddress_3() const { return ____connectedAddress_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__connectedAddress_3() { return &____connectedAddress_3; }
	inline void set__connectedAddress_3(ByteU5BU5D_t4116647657* value)
	{
		____connectedAddress_3 = value;
		Il2CppCodeGenWriteBarrier((&____connectedAddress_3), value);
	}

	inline static int32_t get_offset_of__originatorAddress_4() { return static_cast<int32_t>(offsetof(ForwardedTcpipChannelInfo_t2138801712, ____originatorAddress_4)); }
	inline ByteU5BU5D_t4116647657* get__originatorAddress_4() const { return ____originatorAddress_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__originatorAddress_4() { return &____originatorAddress_4; }
	inline void set__originatorAddress_4(ByteU5BU5D_t4116647657* value)
	{
		____originatorAddress_4 = value;
		Il2CppCodeGenWriteBarrier((&____originatorAddress_4), value);
	}

	inline static int32_t get_offset_of_U3CConnectedPortU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ForwardedTcpipChannelInfo_t2138801712, ___U3CConnectedPortU3Ek__BackingField_5)); }
	inline uint32_t get_U3CConnectedPortU3Ek__BackingField_5() const { return ___U3CConnectedPortU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CConnectedPortU3Ek__BackingField_5() { return &___U3CConnectedPortU3Ek__BackingField_5; }
	inline void set_U3CConnectedPortU3Ek__BackingField_5(uint32_t value)
	{
		___U3CConnectedPortU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COriginatorPortU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ForwardedTcpipChannelInfo_t2138801712, ___U3COriginatorPortU3Ek__BackingField_6)); }
	inline uint32_t get_U3COriginatorPortU3Ek__BackingField_6() const { return ___U3COriginatorPortU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3COriginatorPortU3Ek__BackingField_6() { return &___U3COriginatorPortU3Ek__BackingField_6; }
	inline void set_U3COriginatorPortU3Ek__BackingField_6(uint32_t value)
	{
		___U3COriginatorPortU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDEDTCPIPCHANNELINFO_T2138801712_H
#ifndef CHANNELOPENMESSAGE_T2939452922_H
#define CHANNELOPENMESSAGE_T2939452922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelOpenMessage
struct  ChannelOpenMessage_t2939452922  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.ChannelOpenMessage::_infoBytes
	ByteU5BU5D_t4116647657* ____infoBytes_3;
	// System.Byte[] Renci.SshNet.Messages.Connection.ChannelOpenMessage::<ChannelType>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CChannelTypeU3Ek__BackingField_4;
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelOpenMessage::<LocalChannelNumber>k__BackingField
	uint32_t ___U3CLocalChannelNumberU3Ek__BackingField_5;
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelOpenMessage::<InitialWindowSize>k__BackingField
	uint32_t ___U3CInitialWindowSizeU3Ek__BackingField_6;
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelOpenMessage::<MaximumPacketSize>k__BackingField
	uint32_t ___U3CMaximumPacketSizeU3Ek__BackingField_7;
	// Renci.SshNet.Messages.Connection.ChannelOpenInfo Renci.SshNet.Messages.Connection.ChannelOpenMessage::<Info>k__BackingField
	ChannelOpenInfo_t2541744565 * ___U3CInfoU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__infoBytes_3() { return static_cast<int32_t>(offsetof(ChannelOpenMessage_t2939452922, ____infoBytes_3)); }
	inline ByteU5BU5D_t4116647657* get__infoBytes_3() const { return ____infoBytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__infoBytes_3() { return &____infoBytes_3; }
	inline void set__infoBytes_3(ByteU5BU5D_t4116647657* value)
	{
		____infoBytes_3 = value;
		Il2CppCodeGenWriteBarrier((&____infoBytes_3), value);
	}

	inline static int32_t get_offset_of_U3CChannelTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChannelOpenMessage_t2939452922, ___U3CChannelTypeU3Ek__BackingField_4)); }
	inline ByteU5BU5D_t4116647657* get_U3CChannelTypeU3Ek__BackingField_4() const { return ___U3CChannelTypeU3Ek__BackingField_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CChannelTypeU3Ek__BackingField_4() { return &___U3CChannelTypeU3Ek__BackingField_4; }
	inline void set_U3CChannelTypeU3Ek__BackingField_4(ByteU5BU5D_t4116647657* value)
	{
		___U3CChannelTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CChannelTypeU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CLocalChannelNumberU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChannelOpenMessage_t2939452922, ___U3CLocalChannelNumberU3Ek__BackingField_5)); }
	inline uint32_t get_U3CLocalChannelNumberU3Ek__BackingField_5() const { return ___U3CLocalChannelNumberU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CLocalChannelNumberU3Ek__BackingField_5() { return &___U3CLocalChannelNumberU3Ek__BackingField_5; }
	inline void set_U3CLocalChannelNumberU3Ek__BackingField_5(uint32_t value)
	{
		___U3CLocalChannelNumberU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInitialWindowSizeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChannelOpenMessage_t2939452922, ___U3CInitialWindowSizeU3Ek__BackingField_6)); }
	inline uint32_t get_U3CInitialWindowSizeU3Ek__BackingField_6() const { return ___U3CInitialWindowSizeU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CInitialWindowSizeU3Ek__BackingField_6() { return &___U3CInitialWindowSizeU3Ek__BackingField_6; }
	inline void set_U3CInitialWindowSizeU3Ek__BackingField_6(uint32_t value)
	{
		___U3CInitialWindowSizeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumPacketSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChannelOpenMessage_t2939452922, ___U3CMaximumPacketSizeU3Ek__BackingField_7)); }
	inline uint32_t get_U3CMaximumPacketSizeU3Ek__BackingField_7() const { return ___U3CMaximumPacketSizeU3Ek__BackingField_7; }
	inline uint32_t* get_address_of_U3CMaximumPacketSizeU3Ek__BackingField_7() { return &___U3CMaximumPacketSizeU3Ek__BackingField_7; }
	inline void set_U3CMaximumPacketSizeU3Ek__BackingField_7(uint32_t value)
	{
		___U3CMaximumPacketSizeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChannelOpenMessage_t2939452922, ___U3CInfoU3Ek__BackingField_8)); }
	inline ChannelOpenInfo_t2541744565 * get_U3CInfoU3Ek__BackingField_8() const { return ___U3CInfoU3Ek__BackingField_8; }
	inline ChannelOpenInfo_t2541744565 ** get_address_of_U3CInfoU3Ek__BackingField_8() { return &___U3CInfoU3Ek__BackingField_8; }
	inline void set_U3CInfoU3Ek__BackingField_8(ChannelOpenInfo_t2541744565 * value)
	{
		___U3CInfoU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInfoU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELOPENMESSAGE_T2939452922_H
#ifndef PROXYEXCEPTION_T1139642159_H
#define PROXYEXCEPTION_T1139642159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ProxyException
struct  ProxyException_t1139642159  : public SshException_t1435741398
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYEXCEPTION_T1139642159_H
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
#ifndef ENVIRONMENTVARIABLEREQUESTINFO_T3718133071_H
#define ENVIRONMENTVARIABLEREQUESTINFO_T3718133071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.EnvironmentVariableRequestInfo
struct  EnvironmentVariableRequestInfo_t3718133071  : public RequestInfo_t1797926055
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.EnvironmentVariableRequestInfo::_variableName
	ByteU5BU5D_t4116647657* ____variableName_4;
	// System.Byte[] Renci.SshNet.Messages.Connection.EnvironmentVariableRequestInfo::_variableValue
	ByteU5BU5D_t4116647657* ____variableValue_5;

public:
	inline static int32_t get_offset_of__variableName_4() { return static_cast<int32_t>(offsetof(EnvironmentVariableRequestInfo_t3718133071, ____variableName_4)); }
	inline ByteU5BU5D_t4116647657* get__variableName_4() const { return ____variableName_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__variableName_4() { return &____variableName_4; }
	inline void set__variableName_4(ByteU5BU5D_t4116647657* value)
	{
		____variableName_4 = value;
		Il2CppCodeGenWriteBarrier((&____variableName_4), value);
	}

	inline static int32_t get_offset_of__variableValue_5() { return static_cast<int32_t>(offsetof(EnvironmentVariableRequestInfo_t3718133071, ____variableValue_5)); }
	inline ByteU5BU5D_t4116647657* get__variableValue_5() const { return ____variableValue_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__variableValue_5() { return &____variableValue_5; }
	inline void set__variableValue_5(ByteU5BU5D_t4116647657* value)
	{
		____variableValue_5 = value;
		Il2CppCodeGenWriteBarrier((&____variableValue_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTVARIABLEREQUESTINFO_T3718133071_H
#ifndef EXECREQUESTINFO_T1058597629_H
#define EXECREQUESTINFO_T1058597629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ExecRequestInfo
struct  ExecRequestInfo_t1058597629  : public RequestInfo_t1797926055
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.ExecRequestInfo::_command
	ByteU5BU5D_t4116647657* ____command_4;
	// System.Text.Encoding Renci.SshNet.Messages.Connection.ExecRequestInfo::<Encoding>k__BackingField
	Encoding_t1523322056 * ___U3CEncodingU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__command_4() { return static_cast<int32_t>(offsetof(ExecRequestInfo_t1058597629, ____command_4)); }
	inline ByteU5BU5D_t4116647657* get__command_4() const { return ____command_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__command_4() { return &____command_4; }
	inline void set__command_4(ByteU5BU5D_t4116647657* value)
	{
		____command_4 = value;
		Il2CppCodeGenWriteBarrier((&____command_4), value);
	}

	inline static int32_t get_offset_of_U3CEncodingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ExecRequestInfo_t1058597629, ___U3CEncodingU3Ek__BackingField_5)); }
	inline Encoding_t1523322056 * get_U3CEncodingU3Ek__BackingField_5() const { return ___U3CEncodingU3Ek__BackingField_5; }
	inline Encoding_t1523322056 ** get_address_of_U3CEncodingU3Ek__BackingField_5() { return &___U3CEncodingU3Ek__BackingField_5; }
	inline void set_U3CEncodingU3Ek__BackingField_5(Encoding_t1523322056 * value)
	{
		___U3CEncodingU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEncodingU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECREQUESTINFO_T1058597629_H
#ifndef ENDOFWRITEREQUESTINFO_T558198040_H
#define ENDOFWRITEREQUESTINFO_T558198040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.EndOfWriteRequestInfo
struct  EndOfWriteRequestInfo_t558198040  : public RequestInfo_t1797926055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDOFWRITEREQUESTINFO_T558198040_H
#ifndef SESSIONCHANNELOPENINFO_T2927748240_H
#define SESSIONCHANNELOPENINFO_T2927748240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.SessionChannelOpenInfo
struct  SessionChannelOpenInfo_t2927748240  : public ChannelOpenInfo_t2541744565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONCHANNELOPENINFO_T2927748240_H
#ifndef X11CHANNELOPENINFO_T3103320996_H
#define X11CHANNELOPENINFO_T3103320996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.X11ChannelOpenInfo
struct  X11ChannelOpenInfo_t3103320996  : public ChannelOpenInfo_t2541744565
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.X11ChannelOpenInfo::_originatorAddress
	ByteU5BU5D_t4116647657* ____originatorAddress_3;
	// System.UInt32 Renci.SshNet.Messages.Connection.X11ChannelOpenInfo::<OriginatorPort>k__BackingField
	uint32_t ___U3COriginatorPortU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__originatorAddress_3() { return static_cast<int32_t>(offsetof(X11ChannelOpenInfo_t3103320996, ____originatorAddress_3)); }
	inline ByteU5BU5D_t4116647657* get__originatorAddress_3() const { return ____originatorAddress_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__originatorAddress_3() { return &____originatorAddress_3; }
	inline void set__originatorAddress_3(ByteU5BU5D_t4116647657* value)
	{
		____originatorAddress_3 = value;
		Il2CppCodeGenWriteBarrier((&____originatorAddress_3), value);
	}

	inline static int32_t get_offset_of_U3COriginatorPortU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(X11ChannelOpenInfo_t3103320996, ___U3COriginatorPortU3Ek__BackingField_4)); }
	inline uint32_t get_U3COriginatorPortU3Ek__BackingField_4() const { return ___U3COriginatorPortU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3COriginatorPortU3Ek__BackingField_4() { return &___U3COriginatorPortU3Ek__BackingField_4; }
	inline void set_U3COriginatorPortU3Ek__BackingField_4(uint32_t value)
	{
		___U3COriginatorPortU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X11CHANNELOPENINFO_T3103320996_H
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
#ifndef REQUESTSUCCESSMESSAGE_T3689811642_H
#define REQUESTSUCCESSMESSAGE_T3689811642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.RequestSuccessMessage
struct  RequestSuccessMessage_t3689811642  : public Message_t2172764883
{
public:
	// System.Nullable`1<System.UInt32> Renci.SshNet.Messages.Connection.RequestSuccessMessage::<BoundPort>k__BackingField
	Nullable_1_t4282624060  ___U3CBoundPortU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBoundPortU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RequestSuccessMessage_t3689811642, ___U3CBoundPortU3Ek__BackingField_3)); }
	inline Nullable_1_t4282624060  get_U3CBoundPortU3Ek__BackingField_3() const { return ___U3CBoundPortU3Ek__BackingField_3; }
	inline Nullable_1_t4282624060 * get_address_of_U3CBoundPortU3Ek__BackingField_3() { return &___U3CBoundPortU3Ek__BackingField_3; }
	inline void set_U3CBoundPortU3Ek__BackingField_3(Nullable_1_t4282624060  value)
	{
		___U3CBoundPortU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTSUCCESSMESSAGE_T3689811642_H
#ifndef UNIMPLEMENTEDMESSAGE_T647814860_H
#define UNIMPLEMENTEDMESSAGE_T647814860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.UnimplementedMessage
struct  UnimplementedMessage_t647814860  : public Message_t2172764883
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIMPLEMENTEDMESSAGE_T647814860_H
#ifndef CHANNELOPENFAILEDEVENTARGS_T489206796_H
#define CHANNELOPENFAILEDEVENTARGS_T489206796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ChannelOpenFailedEventArgs
struct  ChannelOpenFailedEventArgs_t489206796  : public ChannelEventArgs_t3791648963
{
public:
	// System.UInt32 Renci.SshNet.Common.ChannelOpenFailedEventArgs::<ReasonCode>k__BackingField
	uint32_t ___U3CReasonCodeU3Ek__BackingField_2;
	// System.String Renci.SshNet.Common.ChannelOpenFailedEventArgs::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_3;
	// System.String Renci.SshNet.Common.ChannelOpenFailedEventArgs::<Language>k__BackingField
	String_t* ___U3CLanguageU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CReasonCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelOpenFailedEventArgs_t489206796, ___U3CReasonCodeU3Ek__BackingField_2)); }
	inline uint32_t get_U3CReasonCodeU3Ek__BackingField_2() const { return ___U3CReasonCodeU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CReasonCodeU3Ek__BackingField_2() { return &___U3CReasonCodeU3Ek__BackingField_2; }
	inline void set_U3CReasonCodeU3Ek__BackingField_2(uint32_t value)
	{
		___U3CReasonCodeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChannelOpenFailedEventArgs_t489206796, ___U3CDescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_3() const { return ___U3CDescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_3() { return &___U3CDescriptionU3Ek__BackingField_3; }
	inline void set_U3CDescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CLanguageU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChannelOpenFailedEventArgs_t489206796, ___U3CLanguageU3Ek__BackingField_4)); }
	inline String_t* get_U3CLanguageU3Ek__BackingField_4() const { return ___U3CLanguageU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CLanguageU3Ek__BackingField_4() { return &___U3CLanguageU3Ek__BackingField_4; }
	inline void set_U3CLanguageU3Ek__BackingField_4(String_t* value)
	{
		___U3CLanguageU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLanguageU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELOPENFAILEDEVENTARGS_T489206796_H
#ifndef AUTHENTICATIONPASSWORDCHANGEEVENTARGS_T1684426427_H
#define AUTHENTICATIONPASSWORDCHANGEEVENTARGS_T1684426427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.AuthenticationPasswordChangeEventArgs
struct  AuthenticationPasswordChangeEventArgs_t1684426427  : public AuthenticationEventArgs_t2817588187
{
public:
	// System.Byte[] Renci.SshNet.Common.AuthenticationPasswordChangeEventArgs::<NewPassword>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CNewPasswordU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNewPasswordU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationPasswordChangeEventArgs_t1684426427, ___U3CNewPasswordU3Ek__BackingField_2)); }
	inline ByteU5BU5D_t4116647657* get_U3CNewPasswordU3Ek__BackingField_2() const { return ___U3CNewPasswordU3Ek__BackingField_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CNewPasswordU3Ek__BackingField_2() { return &___U3CNewPasswordU3Ek__BackingField_2; }
	inline void set_U3CNewPasswordU3Ek__BackingField_2(ByteU5BU5D_t4116647657* value)
	{
		___U3CNewPasswordU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNewPasswordU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONPASSWORDCHANGEEVENTARGS_T1684426427_H
#ifndef AUTHENTICATIONBANNEREVENTARGS_T1678215344_H
#define AUTHENTICATIONBANNEREVENTARGS_T1678215344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.AuthenticationBannerEventArgs
struct  AuthenticationBannerEventArgs_t1678215344  : public AuthenticationEventArgs_t2817588187
{
public:
	// System.String Renci.SshNet.Common.AuthenticationBannerEventArgs::<BannerMessage>k__BackingField
	String_t* ___U3CBannerMessageU3Ek__BackingField_2;
	// System.String Renci.SshNet.Common.AuthenticationBannerEventArgs::<Language>k__BackingField
	String_t* ___U3CLanguageU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBannerMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationBannerEventArgs_t1678215344, ___U3CBannerMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CBannerMessageU3Ek__BackingField_2() const { return ___U3CBannerMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CBannerMessageU3Ek__BackingField_2() { return &___U3CBannerMessageU3Ek__BackingField_2; }
	inline void set_U3CBannerMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CBannerMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBannerMessageU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CLanguageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationBannerEventArgs_t1678215344, ___U3CLanguageU3Ek__BackingField_3)); }
	inline String_t* get_U3CLanguageU3Ek__BackingField_3() const { return ___U3CLanguageU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CLanguageU3Ek__BackingField_3() { return &___U3CLanguageU3Ek__BackingField_3; }
	inline void set_U3CLanguageU3Ek__BackingField_3(String_t* value)
	{
		___U3CLanguageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLanguageU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONBANNEREVENTARGS_T1678215344_H
#ifndef GLOBALREQUESTMESSAGE_T1317063914_H
#define GLOBALREQUESTMESSAGE_T1317063914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.GlobalRequestMessage
struct  GlobalRequestMessage_t1317063914  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.GlobalRequestMessage::_requestName
	ByteU5BU5D_t4116647657* ____requestName_3;
	// System.Boolean Renci.SshNet.Messages.Connection.GlobalRequestMessage::<WantReply>k__BackingField
	bool ___U3CWantReplyU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__requestName_3() { return static_cast<int32_t>(offsetof(GlobalRequestMessage_t1317063914, ____requestName_3)); }
	inline ByteU5BU5D_t4116647657* get__requestName_3() const { return ____requestName_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__requestName_3() { return &____requestName_3; }
	inline void set__requestName_3(ByteU5BU5D_t4116647657* value)
	{
		____requestName_3 = value;
		Il2CppCodeGenWriteBarrier((&____requestName_3), value);
	}

	inline static int32_t get_offset_of_U3CWantReplyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GlobalRequestMessage_t1317063914, ___U3CWantReplyU3Ek__BackingField_4)); }
	inline bool get_U3CWantReplyU3Ek__BackingField_4() const { return ___U3CWantReplyU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CWantReplyU3Ek__BackingField_4() { return &___U3CWantReplyU3Ek__BackingField_4; }
	inline void set_U3CWantReplyU3Ek__BackingField_4(bool value)
	{
		___U3CWantReplyU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALREQUESTMESSAGE_T1317063914_H
#ifndef SUCCESSMESSAGE_T2711121040_H
#define SUCCESSMESSAGE_T2711121040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Authentication.SuccessMessage
struct  SuccessMessage_t2711121040  : public Message_t2172764883
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUCCESSMESSAGE_T2711121040_H
#ifndef CHANNELOPENCONFIRMEDEVENTARGS_T3416490729_H
#define CHANNELOPENCONFIRMEDEVENTARGS_T3416490729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.ChannelOpenConfirmedEventArgs
struct  ChannelOpenConfirmedEventArgs_t3416490729  : public ChannelEventArgs_t3791648963
{
public:
	// System.UInt32 Renci.SshNet.Common.ChannelOpenConfirmedEventArgs::<InitialWindowSize>k__BackingField
	uint32_t ___U3CInitialWindowSizeU3Ek__BackingField_2;
	// System.UInt32 Renci.SshNet.Common.ChannelOpenConfirmedEventArgs::<MaximumPacketSize>k__BackingField
	uint32_t ___U3CMaximumPacketSizeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CInitialWindowSizeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelOpenConfirmedEventArgs_t3416490729, ___U3CInitialWindowSizeU3Ek__BackingField_2)); }
	inline uint32_t get_U3CInitialWindowSizeU3Ek__BackingField_2() const { return ___U3CInitialWindowSizeU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CInitialWindowSizeU3Ek__BackingField_2() { return &___U3CInitialWindowSizeU3Ek__BackingField_2; }
	inline void set_U3CInitialWindowSizeU3Ek__BackingField_2(uint32_t value)
	{
		___U3CInitialWindowSizeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumPacketSizeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChannelOpenConfirmedEventArgs_t3416490729, ___U3CMaximumPacketSizeU3Ek__BackingField_3)); }
	inline uint32_t get_U3CMaximumPacketSizeU3Ek__BackingField_3() const { return ___U3CMaximumPacketSizeU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CMaximumPacketSizeU3Ek__BackingField_3() { return &___U3CMaximumPacketSizeU3Ek__BackingField_3; }
	inline void set_U3CMaximumPacketSizeU3Ek__BackingField_3(uint32_t value)
	{
		___U3CMaximumPacketSizeU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELOPENCONFIRMEDEVENTARGS_T3416490729_H
#ifndef REQUESTFAILUREMESSAGE_T2002613595_H
#define REQUESTFAILUREMESSAGE_T2002613595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.RequestFailureMessage
struct  RequestFailureMessage_t2002613595  : public Message_t2172764883
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTFAILUREMESSAGE_T2002613595_H
#ifndef CHANNELEOFMESSAGE_T1031529297_H
#define CHANNELEOFMESSAGE_T1031529297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelEofMessage
struct  ChannelEofMessage_t1031529297  : public ChannelMessage_t2504225348
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELEOFMESSAGE_T1031529297_H
#ifndef SERVICEACCEPTMESSAGE_T3114318137_H
#define SERVICEACCEPTMESSAGE_T3114318137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.ServiceAcceptMessage
struct  ServiceAcceptMessage_t3114318137  : public Message_t2172764883
{
public:
	// Renci.SshNet.Messages.ServiceName Renci.SshNet.Messages.Transport.ServiceAcceptMessage::<ServiceName>k__BackingField
	int32_t ___U3CServiceNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CServiceNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ServiceAcceptMessage_t3114318137, ___U3CServiceNameU3Ek__BackingField_3)); }
	inline int32_t get_U3CServiceNameU3Ek__BackingField_3() const { return ___U3CServiceNameU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CServiceNameU3Ek__BackingField_3() { return &___U3CServiceNameU3Ek__BackingField_3; }
	inline void set_U3CServiceNameU3Ek__BackingField_3(int32_t value)
	{
		___U3CServiceNameU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEACCEPTMESSAGE_T3114318137_H
#ifndef DISCONNECTMESSAGE_T2107405146_H
#define DISCONNECTMESSAGE_T2107405146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Transport.DisconnectMessage
struct  DisconnectMessage_t2107405146  : public Message_t2172764883
{
public:
	// System.Byte[] Renci.SshNet.Messages.Transport.DisconnectMessage::_description
	ByteU5BU5D_t4116647657* ____description_3;
	// System.Byte[] Renci.SshNet.Messages.Transport.DisconnectMessage::_language
	ByteU5BU5D_t4116647657* ____language_4;
	// Renci.SshNet.Messages.Transport.DisconnectReason Renci.SshNet.Messages.Transport.DisconnectMessage::<ReasonCode>k__BackingField
	int32_t ___U3CReasonCodeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__description_3() { return static_cast<int32_t>(offsetof(DisconnectMessage_t2107405146, ____description_3)); }
	inline ByteU5BU5D_t4116647657* get__description_3() const { return ____description_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__description_3() { return &____description_3; }
	inline void set__description_3(ByteU5BU5D_t4116647657* value)
	{
		____description_3 = value;
		Il2CppCodeGenWriteBarrier((&____description_3), value);
	}

	inline static int32_t get_offset_of__language_4() { return static_cast<int32_t>(offsetof(DisconnectMessage_t2107405146, ____language_4)); }
	inline ByteU5BU5D_t4116647657* get__language_4() const { return ____language_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__language_4() { return &____language_4; }
	inline void set__language_4(ByteU5BU5D_t4116647657* value)
	{
		____language_4 = value;
		Il2CppCodeGenWriteBarrier((&____language_4), value);
	}

	inline static int32_t get_offset_of_U3CReasonCodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DisconnectMessage_t2107405146, ___U3CReasonCodeU3Ek__BackingField_5)); }
	inline int32_t get_U3CReasonCodeU3Ek__BackingField_5() const { return ___U3CReasonCodeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CReasonCodeU3Ek__BackingField_5() { return &___U3CReasonCodeU3Ek__BackingField_5; }
	inline void set_U3CReasonCodeU3Ek__BackingField_5(int32_t value)
	{
		___U3CReasonCodeU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISCONNECTMESSAGE_T2107405146_H
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
#ifndef CHANNELEXTENDEDDATAMESSAGE_T2327058878_H
#define CHANNELEXTENDEDDATAMESSAGE_T2327058878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelExtendedDataMessage
struct  ChannelExtendedDataMessage_t2327058878  : public ChannelMessage_t2504225348
{
public:
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelExtendedDataMessage::<DataTypeCode>k__BackingField
	uint32_t ___U3CDataTypeCodeU3Ek__BackingField_4;
	// System.Byte[] Renci.SshNet.Messages.Connection.ChannelExtendedDataMessage::<Data>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CDataTypeCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChannelExtendedDataMessage_t2327058878, ___U3CDataTypeCodeU3Ek__BackingField_4)); }
	inline uint32_t get_U3CDataTypeCodeU3Ek__BackingField_4() const { return ___U3CDataTypeCodeU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CDataTypeCodeU3Ek__BackingField_4() { return &___U3CDataTypeCodeU3Ek__BackingField_4; }
	inline void set_U3CDataTypeCodeU3Ek__BackingField_4(uint32_t value)
	{
		___U3CDataTypeCodeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChannelExtendedDataMessage_t2327058878, ___U3CDataU3Ek__BackingField_5)); }
	inline ByteU5BU5D_t4116647657* get_U3CDataU3Ek__BackingField_5() const { return ___U3CDataU3Ek__BackingField_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CDataU3Ek__BackingField_5() { return &___U3CDataU3Ek__BackingField_5; }
	inline void set_U3CDataU3Ek__BackingField_5(ByteU5BU5D_t4116647657* value)
	{
		___U3CDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELEXTENDEDDATAMESSAGE_T2327058878_H
#ifndef CHANNELOPENFAILUREMESSAGE_T2605396729_H
#define CHANNELOPENFAILUREMESSAGE_T2605396729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage
struct  ChannelOpenFailureMessage_t2605396729  : public ChannelMessage_t2504225348
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage::_description
	ByteU5BU5D_t4116647657* ____description_4;
	// System.Byte[] Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage::_language
	ByteU5BU5D_t4116647657* ____language_5;
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelOpenFailureMessage::<ReasonCode>k__BackingField
	uint32_t ___U3CReasonCodeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__description_4() { return static_cast<int32_t>(offsetof(ChannelOpenFailureMessage_t2605396729, ____description_4)); }
	inline ByteU5BU5D_t4116647657* get__description_4() const { return ____description_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__description_4() { return &____description_4; }
	inline void set__description_4(ByteU5BU5D_t4116647657* value)
	{
		____description_4 = value;
		Il2CppCodeGenWriteBarrier((&____description_4), value);
	}

	inline static int32_t get_offset_of__language_5() { return static_cast<int32_t>(offsetof(ChannelOpenFailureMessage_t2605396729, ____language_5)); }
	inline ByteU5BU5D_t4116647657* get__language_5() const { return ____language_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__language_5() { return &____language_5; }
	inline void set__language_5(ByteU5BU5D_t4116647657* value)
	{
		____language_5 = value;
		Il2CppCodeGenWriteBarrier((&____language_5), value);
	}

	inline static int32_t get_offset_of_U3CReasonCodeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChannelOpenFailureMessage_t2605396729, ___U3CReasonCodeU3Ek__BackingField_6)); }
	inline uint32_t get_U3CReasonCodeU3Ek__BackingField_6() const { return ___U3CReasonCodeU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CReasonCodeU3Ek__BackingField_6() { return &___U3CReasonCodeU3Ek__BackingField_6; }
	inline void set_U3CReasonCodeU3Ek__BackingField_6(uint32_t value)
	{
		___U3CReasonCodeU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELOPENFAILUREMESSAGE_T2605396729_H
#ifndef CHANNELOPENCONFIRMATIONMESSAGE_T2758044990_H
#define CHANNELOPENCONFIRMATIONMESSAGE_T2758044990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage
struct  ChannelOpenConfirmationMessage_t2758044990  : public ChannelMessage_t2504225348
{
public:
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage::<RemoteChannelNumber>k__BackingField
	uint32_t ___U3CRemoteChannelNumberU3Ek__BackingField_4;
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage::<InitialWindowSize>k__BackingField
	uint32_t ___U3CInitialWindowSizeU3Ek__BackingField_5;
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelOpenConfirmationMessage::<MaximumPacketSize>k__BackingField
	uint32_t ___U3CMaximumPacketSizeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRemoteChannelNumberU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChannelOpenConfirmationMessage_t2758044990, ___U3CRemoteChannelNumberU3Ek__BackingField_4)); }
	inline uint32_t get_U3CRemoteChannelNumberU3Ek__BackingField_4() const { return ___U3CRemoteChannelNumberU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CRemoteChannelNumberU3Ek__BackingField_4() { return &___U3CRemoteChannelNumberU3Ek__BackingField_4; }
	inline void set_U3CRemoteChannelNumberU3Ek__BackingField_4(uint32_t value)
	{
		___U3CRemoteChannelNumberU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CInitialWindowSizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChannelOpenConfirmationMessage_t2758044990, ___U3CInitialWindowSizeU3Ek__BackingField_5)); }
	inline uint32_t get_U3CInitialWindowSizeU3Ek__BackingField_5() const { return ___U3CInitialWindowSizeU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CInitialWindowSizeU3Ek__BackingField_5() { return &___U3CInitialWindowSizeU3Ek__BackingField_5; }
	inline void set_U3CInitialWindowSizeU3Ek__BackingField_5(uint32_t value)
	{
		___U3CInitialWindowSizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumPacketSizeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChannelOpenConfirmationMessage_t2758044990, ___U3CMaximumPacketSizeU3Ek__BackingField_6)); }
	inline uint32_t get_U3CMaximumPacketSizeU3Ek__BackingField_6() const { return ___U3CMaximumPacketSizeU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CMaximumPacketSizeU3Ek__BackingField_6() { return &___U3CMaximumPacketSizeU3Ek__BackingField_6; }
	inline void set_U3CMaximumPacketSizeU3Ek__BackingField_6(uint32_t value)
	{
		___U3CMaximumPacketSizeU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELOPENCONFIRMATIONMESSAGE_T2758044990_H
#ifndef CLIENTCHANNEL_T2601035749_H
#define CLIENTCHANNEL_T2601035749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Channels.ClientChannel
struct  ClientChannel_t2601035749  : public Channel_t457090584
{
public:
	// System.EventHandler`1<Renci.SshNet.Common.ChannelOpenConfirmedEventArgs> Renci.SshNet.Channels.ClientChannel::OpenConfirmed
	EventHandler_1_t1340650162 * ___OpenConfirmed_26;
	// System.EventHandler`1<Renci.SshNet.Common.ChannelOpenFailedEventArgs> Renci.SshNet.Channels.ClientChannel::OpenFailed
	EventHandler_1_t2708333525 * ___OpenFailed_27;

public:
	inline static int32_t get_offset_of_OpenConfirmed_26() { return static_cast<int32_t>(offsetof(ClientChannel_t2601035749, ___OpenConfirmed_26)); }
	inline EventHandler_1_t1340650162 * get_OpenConfirmed_26() const { return ___OpenConfirmed_26; }
	inline EventHandler_1_t1340650162 ** get_address_of_OpenConfirmed_26() { return &___OpenConfirmed_26; }
	inline void set_OpenConfirmed_26(EventHandler_1_t1340650162 * value)
	{
		___OpenConfirmed_26 = value;
		Il2CppCodeGenWriteBarrier((&___OpenConfirmed_26), value);
	}

	inline static int32_t get_offset_of_OpenFailed_27() { return static_cast<int32_t>(offsetof(ClientChannel_t2601035749, ___OpenFailed_27)); }
	inline EventHandler_1_t2708333525 * get_OpenFailed_27() const { return ___OpenFailed_27; }
	inline EventHandler_1_t2708333525 ** get_address_of_OpenFailed_27() { return &___OpenFailed_27; }
	inline void set_OpenFailed_27(EventHandler_1_t2708333525 * value)
	{
		___OpenFailed_27 = value;
		Il2CppCodeGenWriteBarrier((&___OpenFailed_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCHANNEL_T2601035749_H
#ifndef SSHDATASTREAM_T621401638_H
#define SSHDATASTREAM_T621401638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Common.SshDataStream
struct  SshDataStream_t621401638  : public MemoryStream_t94973147
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSHDATASTREAM_T621401638_H
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
#ifndef CHANNELWINDOWADJUSTMESSAGE_T2002191043_H
#define CHANNELWINDOWADJUSTMESSAGE_T2002191043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelWindowAdjustMessage
struct  ChannelWindowAdjustMessage_t2002191043  : public ChannelMessage_t2504225348
{
public:
	// System.UInt32 Renci.SshNet.Messages.Connection.ChannelWindowAdjustMessage::<BytesToAdd>k__BackingField
	uint32_t ___U3CBytesToAddU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CBytesToAddU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChannelWindowAdjustMessage_t2002191043, ___U3CBytesToAddU3Ek__BackingField_4)); }
	inline uint32_t get_U3CBytesToAddU3Ek__BackingField_4() const { return ___U3CBytesToAddU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CBytesToAddU3Ek__BackingField_4() { return &___U3CBytesToAddU3Ek__BackingField_4; }
	inline void set_U3CBytesToAddU3Ek__BackingField_4(uint32_t value)
	{
		___U3CBytesToAddU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELWINDOWADJUSTMESSAGE_T2002191043_H
#ifndef CHANNELDATAMESSAGE_T1485929008_H
#define CHANNELDATAMESSAGE_T1485929008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelDataMessage
struct  ChannelDataMessage_t1485929008  : public ChannelMessage_t2504225348
{
public:
	// System.Byte[] Renci.SshNet.Messages.Connection.ChannelDataMessage::<Data>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CDataU3Ek__BackingField_4;
	// System.Int32 Renci.SshNet.Messages.Connection.ChannelDataMessage::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_5;
	// System.Int32 Renci.SshNet.Messages.Connection.ChannelDataMessage::<Size>k__BackingField
	int32_t ___U3CSizeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChannelDataMessage_t1485929008, ___U3CDataU3Ek__BackingField_4)); }
	inline ByteU5BU5D_t4116647657* get_U3CDataU3Ek__BackingField_4() const { return ___U3CDataU3Ek__BackingField_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CDataU3Ek__BackingField_4() { return &___U3CDataU3Ek__BackingField_4; }
	inline void set_U3CDataU3Ek__BackingField_4(ByteU5BU5D_t4116647657* value)
	{
		___U3CDataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChannelDataMessage_t1485929008, ___U3COffsetU3Ek__BackingField_5)); }
	inline int32_t get_U3COffsetU3Ek__BackingField_5() const { return ___U3COffsetU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3COffsetU3Ek__BackingField_5() { return &___U3COffsetU3Ek__BackingField_5; }
	inline void set_U3COffsetU3Ek__BackingField_5(int32_t value)
	{
		___U3COffsetU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChannelDataMessage_t1485929008, ___U3CSizeU3Ek__BackingField_6)); }
	inline int32_t get_U3CSizeU3Ek__BackingField_6() const { return ___U3CSizeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CSizeU3Ek__BackingField_6() { return &___U3CSizeU3Ek__BackingField_6; }
	inline void set_U3CSizeU3Ek__BackingField_6(int32_t value)
	{
		___U3CSizeU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELDATAMESSAGE_T1485929008_H
#ifndef CHANNELREQUESTMESSAGE_T1936874370_H
#define CHANNELREQUESTMESSAGE_T1936874370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelRequestMessage
struct  ChannelRequestMessage_t1936874370  : public ChannelMessage_t2504225348
{
public:
	// System.String Renci.SshNet.Messages.Connection.ChannelRequestMessage::_requestName
	String_t* ____requestName_4;
	// System.Byte[] Renci.SshNet.Messages.Connection.ChannelRequestMessage::_requestNameBytes
	ByteU5BU5D_t4116647657* ____requestNameBytes_5;
	// System.Byte[] Renci.SshNet.Messages.Connection.ChannelRequestMessage::<RequestData>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CRequestDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__requestName_4() { return static_cast<int32_t>(offsetof(ChannelRequestMessage_t1936874370, ____requestName_4)); }
	inline String_t* get__requestName_4() const { return ____requestName_4; }
	inline String_t** get_address_of__requestName_4() { return &____requestName_4; }
	inline void set__requestName_4(String_t* value)
	{
		____requestName_4 = value;
		Il2CppCodeGenWriteBarrier((&____requestName_4), value);
	}

	inline static int32_t get_offset_of__requestNameBytes_5() { return static_cast<int32_t>(offsetof(ChannelRequestMessage_t1936874370, ____requestNameBytes_5)); }
	inline ByteU5BU5D_t4116647657* get__requestNameBytes_5() const { return ____requestNameBytes_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__requestNameBytes_5() { return &____requestNameBytes_5; }
	inline void set__requestNameBytes_5(ByteU5BU5D_t4116647657* value)
	{
		____requestNameBytes_5 = value;
		Il2CppCodeGenWriteBarrier((&____requestNameBytes_5), value);
	}

	inline static int32_t get_offset_of_U3CRequestDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChannelRequestMessage_t1936874370, ___U3CRequestDataU3Ek__BackingField_6)); }
	inline ByteU5BU5D_t4116647657* get_U3CRequestDataU3Ek__BackingField_6() const { return ___U3CRequestDataU3Ek__BackingField_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CRequestDataU3Ek__BackingField_6() { return &___U3CRequestDataU3Ek__BackingField_6; }
	inline void set_U3CRequestDataU3Ek__BackingField_6(ByteU5BU5D_t4116647657* value)
	{
		___U3CRequestDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRequestDataU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELREQUESTMESSAGE_T1936874370_H
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
#ifndef CHANNELCLOSEMESSAGE_T1584035870_H
#define CHANNELCLOSEMESSAGE_T1584035870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Messages.Connection.ChannelCloseMessage
struct  ChannelCloseMessage_t1584035870  : public ChannelMessage_t2504225348
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELCLOSEMESSAGE_T1584035870_H
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
#ifndef CHANNELSESSION_T200380688_H
#define CHANNELSESSION_T200380688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Renci.SshNet.Channels.ChannelSession
struct  ChannelSession_t200380688  : public ClientChannel_t2601035749
{
public:
	// System.Int32 Renci.SshNet.Channels.ChannelSession::_failedOpenAttempts
	int32_t ____failedOpenAttempts_28;
	// System.Int32 Renci.SshNet.Channels.ChannelSession::_sessionSemaphoreObtained
	int32_t ____sessionSemaphoreObtained_29;
	// System.Threading.EventWaitHandle Renci.SshNet.Channels.ChannelSession::_channelOpenResponseWaitHandle
	EventWaitHandle_t777845177 * ____channelOpenResponseWaitHandle_30;
	// System.Threading.EventWaitHandle Renci.SshNet.Channels.ChannelSession::_channelRequestResponse
	EventWaitHandle_t777845177 * ____channelRequestResponse_31;
	// System.Boolean Renci.SshNet.Channels.ChannelSession::_channelRequestSucces
	bool ____channelRequestSucces_32;

public:
	inline static int32_t get_offset_of__failedOpenAttempts_28() { return static_cast<int32_t>(offsetof(ChannelSession_t200380688, ____failedOpenAttempts_28)); }
	inline int32_t get__failedOpenAttempts_28() const { return ____failedOpenAttempts_28; }
	inline int32_t* get_address_of__failedOpenAttempts_28() { return &____failedOpenAttempts_28; }
	inline void set__failedOpenAttempts_28(int32_t value)
	{
		____failedOpenAttempts_28 = value;
	}

	inline static int32_t get_offset_of__sessionSemaphoreObtained_29() { return static_cast<int32_t>(offsetof(ChannelSession_t200380688, ____sessionSemaphoreObtained_29)); }
	inline int32_t get__sessionSemaphoreObtained_29() const { return ____sessionSemaphoreObtained_29; }
	inline int32_t* get_address_of__sessionSemaphoreObtained_29() { return &____sessionSemaphoreObtained_29; }
	inline void set__sessionSemaphoreObtained_29(int32_t value)
	{
		____sessionSemaphoreObtained_29 = value;
	}

	inline static int32_t get_offset_of__channelOpenResponseWaitHandle_30() { return static_cast<int32_t>(offsetof(ChannelSession_t200380688, ____channelOpenResponseWaitHandle_30)); }
	inline EventWaitHandle_t777845177 * get__channelOpenResponseWaitHandle_30() const { return ____channelOpenResponseWaitHandle_30; }
	inline EventWaitHandle_t777845177 ** get_address_of__channelOpenResponseWaitHandle_30() { return &____channelOpenResponseWaitHandle_30; }
	inline void set__channelOpenResponseWaitHandle_30(EventWaitHandle_t777845177 * value)
	{
		____channelOpenResponseWaitHandle_30 = value;
		Il2CppCodeGenWriteBarrier((&____channelOpenResponseWaitHandle_30), value);
	}

	inline static int32_t get_offset_of__channelRequestResponse_31() { return static_cast<int32_t>(offsetof(ChannelSession_t200380688, ____channelRequestResponse_31)); }
	inline EventWaitHandle_t777845177 * get__channelRequestResponse_31() const { return ____channelRequestResponse_31; }
	inline EventWaitHandle_t777845177 ** get_address_of__channelRequestResponse_31() { return &____channelRequestResponse_31; }
	inline void set__channelRequestResponse_31(EventWaitHandle_t777845177 * value)
	{
		____channelRequestResponse_31 = value;
		Il2CppCodeGenWriteBarrier((&____channelRequestResponse_31), value);
	}

	inline static int32_t get_offset_of__channelRequestSucces_32() { return static_cast<int32_t>(offsetof(ChannelSession_t200380688, ____channelRequestSucces_32)); }
	inline bool get__channelRequestSucces_32() const { return ____channelRequestSucces_32; }
	inline bool* get_address_of__channelRequestSucces_32() { return &____channelRequestSucces_32; }
	inline void set__channelRequestSucces_32(bool value)
	{
		____channelRequestSucces_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSESSION_T200380688_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3900 = { sizeof (SuccessMessage_t2711121040), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3901 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3902 = { sizeof (DebugMessage_t3445337755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3902[3] = 
{
	DebugMessage_t3445337755::get_offset_of__message_3(),
	DebugMessage_t3445337755::get_offset_of__language_4(),
	DebugMessage_t3445337755::get_offset_of_U3CIsAlwaysDisplayU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3903 = { sizeof (DisconnectMessage_t2107405146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3903[3] = 
{
	DisconnectMessage_t2107405146::get_offset_of__description_3(),
	DisconnectMessage_t2107405146::get_offset_of__language_4(),
	DisconnectMessage_t2107405146::get_offset_of_U3CReasonCodeU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3904 = { sizeof (DisconnectReason_t587329116)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3904[17] = 
{
	DisconnectReason_t587329116::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3905 = { sizeof (IgnoreMessage_t499969309), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3905[1] = 
{
	IgnoreMessage_t499969309::get_offset_of_U3CDataU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3906 = { sizeof (KeyExchangeDhGroupExchangeGroup_t3170201939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3906[2] = 
{
	KeyExchangeDhGroupExchangeGroup_t3170201939::get_offset_of__safePrime_3(),
	KeyExchangeDhGroupExchangeGroup_t3170201939::get_offset_of__subGroup_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3907 = { sizeof (KeyExchangeDhGroupExchangeInit_t413383314), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3907[1] = 
{
	KeyExchangeDhGroupExchangeInit_t413383314::get_offset_of__eBytes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3908 = { sizeof (KeyExchangeDhGroupExchangeReply_t1476353978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3908[3] = 
{
	KeyExchangeDhGroupExchangeReply_t1476353978::get_offset_of__fBytes_3(),
	KeyExchangeDhGroupExchangeReply_t1476353978::get_offset_of_U3CHostKeyU3Ek__BackingField_4(),
	KeyExchangeDhGroupExchangeReply_t1476353978::get_offset_of_U3CSignatureU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3909 = { sizeof (KeyExchangeDhGroupExchangeRequest_t1412751601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3909[3] = 
{
	KeyExchangeDhGroupExchangeRequest_t1412751601::get_offset_of_U3CMinimumU3Ek__BackingField_3(),
	KeyExchangeDhGroupExchangeRequest_t1412751601::get_offset_of_U3CPreferredU3Ek__BackingField_4(),
	KeyExchangeDhGroupExchangeRequest_t1412751601::get_offset_of_U3CMaximumU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3910 = { sizeof (KeyExchangeDhInitMessage_t1197260220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3910[1] = 
{
	KeyExchangeDhInitMessage_t1197260220::get_offset_of__eBytes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3911 = { sizeof (KeyExchangeDhReplyMessage_t3243625140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3911[3] = 
{
	KeyExchangeDhReplyMessage_t3243625140::get_offset_of__fBytes_3(),
	KeyExchangeDhReplyMessage_t3243625140::get_offset_of_U3CHostKeyU3Ek__BackingField_4(),
	KeyExchangeDhReplyMessage_t3243625140::get_offset_of_U3CSignatureU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3912 = { sizeof (KeyExchangeInitMessage_t1820053751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3912[13] = 
{
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CCookieU3Ek__BackingField_3(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CKeyExchangeAlgorithmsU3Ek__BackingField_4(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CServerHostKeyAlgorithmsU3Ek__BackingField_5(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CEncryptionAlgorithmsClientToServerU3Ek__BackingField_6(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CEncryptionAlgorithmsServerToClientU3Ek__BackingField_7(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CMacAlgorithmsClientToServerU3Ek__BackingField_8(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CMacAlgorithmsServerToClientU3Ek__BackingField_9(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CCompressionAlgorithmsClientToServerU3Ek__BackingField_10(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CCompressionAlgorithmsServerToClientU3Ek__BackingField_11(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CLanguagesClientToServerU3Ek__BackingField_12(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CLanguagesServerToClientU3Ek__BackingField_13(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CFirstKexPacketFollowsU3Ek__BackingField_14(),
	KeyExchangeInitMessage_t1820053751::get_offset_of_U3CReservedU3Ek__BackingField_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3913 = { sizeof (NewKeysMessage_t2094769425), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3914 = { sizeof (ServiceAcceptMessage_t3114318137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3914[1] = 
{
	ServiceAcceptMessage_t3114318137::get_offset_of_U3CServiceNameU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3915 = { sizeof (ServiceRequestMessage_t1388233984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3915[1] = 
{
	ServiceRequestMessage_t1388233984::get_offset_of__serviceName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3916 = { sizeof (UnimplementedMessage_t647814860), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3917 = { sizeof (ChannelCloseMessage_t1584035870), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3918 = { sizeof (ChannelDataMessage_t1485929008), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3918[3] = 
{
	ChannelDataMessage_t1485929008::get_offset_of_U3CDataU3Ek__BackingField_4(),
	ChannelDataMessage_t1485929008::get_offset_of_U3COffsetU3Ek__BackingField_5(),
	ChannelDataMessage_t1485929008::get_offset_of_U3CSizeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3919 = { sizeof (ChannelEofMessage_t1031529297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3920 = { sizeof (ChannelExtendedDataMessage_t2327058878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3920[2] = 
{
	ChannelExtendedDataMessage_t2327058878::get_offset_of_U3CDataTypeCodeU3Ek__BackingField_4(),
	ChannelExtendedDataMessage_t2327058878::get_offset_of_U3CDataU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3921 = { sizeof (ChannelFailureMessage_t1527543386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3922 = { sizeof (ChannelMessage_t2504225348), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3922[1] = 
{
	ChannelMessage_t2504225348::get_offset_of_U3CLocalChannelNumberU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3923 = { sizeof (ChannelOpenConfirmationMessage_t2758044990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3923[3] = 
{
	ChannelOpenConfirmationMessage_t2758044990::get_offset_of_U3CRemoteChannelNumberU3Ek__BackingField_4(),
	ChannelOpenConfirmationMessage_t2758044990::get_offset_of_U3CInitialWindowSizeU3Ek__BackingField_5(),
	ChannelOpenConfirmationMessage_t2758044990::get_offset_of_U3CMaximumPacketSizeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3924 = { sizeof (ChannelOpenFailureMessage_t2605396729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3924[3] = 
{
	ChannelOpenFailureMessage_t2605396729::get_offset_of__description_4(),
	ChannelOpenFailureMessage_t2605396729::get_offset_of__language_5(),
	ChannelOpenFailureMessage_t2605396729::get_offset_of_U3CReasonCodeU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3925 = { sizeof (ChannelOpenInfo_t2541744565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3926 = { sizeof (ChannelOpenMessage_t2939452922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3926[6] = 
{
	ChannelOpenMessage_t2939452922::get_offset_of__infoBytes_3(),
	ChannelOpenMessage_t2939452922::get_offset_of_U3CChannelTypeU3Ek__BackingField_4(),
	ChannelOpenMessage_t2939452922::get_offset_of_U3CLocalChannelNumberU3Ek__BackingField_5(),
	ChannelOpenMessage_t2939452922::get_offset_of_U3CInitialWindowSizeU3Ek__BackingField_6(),
	ChannelOpenMessage_t2939452922::get_offset_of_U3CMaximumPacketSizeU3Ek__BackingField_7(),
	ChannelOpenMessage_t2939452922::get_offset_of_U3CInfoU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3927 = { sizeof (DirectTcpipChannelInfo_t3432270019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3927[4] = 
{
	DirectTcpipChannelInfo_t3432270019::get_offset_of__hostToConnect_3(),
	DirectTcpipChannelInfo_t3432270019::get_offset_of__originatorAddress_4(),
	DirectTcpipChannelInfo_t3432270019::get_offset_of_U3CPortToConnectU3Ek__BackingField_5(),
	DirectTcpipChannelInfo_t3432270019::get_offset_of_U3COriginatorPortU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3928 = { sizeof (ForwardedTcpipChannelInfo_t2138801712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3928[4] = 
{
	ForwardedTcpipChannelInfo_t2138801712::get_offset_of__connectedAddress_3(),
	ForwardedTcpipChannelInfo_t2138801712::get_offset_of__originatorAddress_4(),
	ForwardedTcpipChannelInfo_t2138801712::get_offset_of_U3CConnectedPortU3Ek__BackingField_5(),
	ForwardedTcpipChannelInfo_t2138801712::get_offset_of_U3COriginatorPortU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3929 = { sizeof (SessionChannelOpenInfo_t2927748240), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3930 = { sizeof (X11ChannelOpenInfo_t3103320996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3930[2] = 
{
	X11ChannelOpenInfo_t3103320996::get_offset_of__originatorAddress_3(),
	X11ChannelOpenInfo_t3103320996::get_offset_of_U3COriginatorPortU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3931 = { sizeof (ChannelRequestMessage_t1936874370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3931[3] = 
{
	ChannelRequestMessage_t1936874370::get_offset_of__requestName_4(),
	ChannelRequestMessage_t1936874370::get_offset_of__requestNameBytes_5(),
	ChannelRequestMessage_t1936874370::get_offset_of_U3CRequestDataU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3932 = { sizeof (EndOfWriteRequestInfo_t558198040), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3933 = { sizeof (EnvironmentVariableRequestInfo_t3718133071), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3933[2] = 
{
	EnvironmentVariableRequestInfo_t3718133071::get_offset_of__variableName_4(),
	EnvironmentVariableRequestInfo_t3718133071::get_offset_of__variableValue_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3934 = { sizeof (ExecRequestInfo_t1058597629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3934[2] = 
{
	ExecRequestInfo_t1058597629::get_offset_of__command_4(),
	ExecRequestInfo_t1058597629::get_offset_of_U3CEncodingU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3935 = { sizeof (ExitSignalRequestInfo_t2259839821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3935[4] = 
{
	ExitSignalRequestInfo_t2259839821::get_offset_of__signalName_4(),
	ExitSignalRequestInfo_t2259839821::get_offset_of__errorMessage_5(),
	ExitSignalRequestInfo_t2259839821::get_offset_of__language_6(),
	ExitSignalRequestInfo_t2259839821::get_offset_of_U3CCoreDumpedU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3936 = { sizeof (ExitStatusRequestInfo_t20368951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3936[1] = 
{
	ExitStatusRequestInfo_t20368951::get_offset_of_U3CExitStatusU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3937 = { sizeof (KeepAliveRequestInfo_t2495335690), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3938 = { sizeof (PseudoTerminalRequestInfo_t4029693938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3938[6] = 
{
	PseudoTerminalRequestInfo_t4029693938::get_offset_of_U3CEnvironmentVariableU3Ek__BackingField_4(),
	PseudoTerminalRequestInfo_t4029693938::get_offset_of_U3CColumnsU3Ek__BackingField_5(),
	PseudoTerminalRequestInfo_t4029693938::get_offset_of_U3CRowsU3Ek__BackingField_6(),
	PseudoTerminalRequestInfo_t4029693938::get_offset_of_U3CPixelWidthU3Ek__BackingField_7(),
	PseudoTerminalRequestInfo_t4029693938::get_offset_of_U3CPixelHeightU3Ek__BackingField_8(),
	PseudoTerminalRequestInfo_t4029693938::get_offset_of_U3CTerminalModeValuesU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3939 = { sizeof (RequestInfo_t1797926055), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3939[1] = 
{
	RequestInfo_t1797926055::get_offset_of_U3CWantReplyU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3940 = { sizeof (ShellRequestInfo_t2073515176), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3941 = { sizeof (SignalRequestInfo_t4068712302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3941[1] = 
{
	SignalRequestInfo_t4068712302::get_offset_of__signalName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3942 = { sizeof (SubsystemRequestInfo_t2580347556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3942[1] = 
{
	SubsystemRequestInfo_t2580347556::get_offset_of__subsystemName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3943 = { sizeof (WindowChangeRequestInfo_t1224757212), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3943[4] = 
{
	WindowChangeRequestInfo_t1224757212::get_offset_of_U3CColumnsU3Ek__BackingField_4(),
	WindowChangeRequestInfo_t1224757212::get_offset_of_U3CRowsU3Ek__BackingField_5(),
	WindowChangeRequestInfo_t1224757212::get_offset_of_U3CWidthU3Ek__BackingField_6(),
	WindowChangeRequestInfo_t1224757212::get_offset_of_U3CHeightU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3944 = { sizeof (X11ForwardingRequestInfo_t3882523697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3944[4] = 
{
	X11ForwardingRequestInfo_t3882523697::get_offset_of__authenticationProtocol_4(),
	X11ForwardingRequestInfo_t3882523697::get_offset_of_U3CIsSingleConnectionU3Ek__BackingField_5(),
	X11ForwardingRequestInfo_t3882523697::get_offset_of_U3CAuthenticationCookieU3Ek__BackingField_6(),
	X11ForwardingRequestInfo_t3882523697::get_offset_of_U3CScreenNumberU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3945 = { sizeof (XonXoffRequestInfo_t685602832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3945[1] = 
{
	XonXoffRequestInfo_t685602832::get_offset_of_U3CClientCanDoU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3946 = { sizeof (ChannelSuccessMessage_t1918479768), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3947 = { sizeof (ChannelWindowAdjustMessage_t2002191043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3947[1] = 
{
	ChannelWindowAdjustMessage_t2002191043::get_offset_of_U3CBytesToAddU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3948 = { sizeof (GlobalRequestMessage_t1317063914), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3948[2] = 
{
	GlobalRequestMessage_t1317063914::get_offset_of__requestName_3(),
	GlobalRequestMessage_t1317063914::get_offset_of_U3CWantReplyU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3949 = { sizeof (RequestFailureMessage_t2002613595), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3950 = { sizeof (RequestSuccessMessage_t3689811642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3950[1] = 
{
	RequestSuccessMessage_t3689811642::get_offset_of_U3CBoundPortU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3951 = { sizeof (Compressor_t2655936137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3951[7] = 
{
	Compressor_t2655936137::get_offset_of__compressor_0(),
	Compressor_t2655936137::get_offset_of__decompressor_1(),
	Compressor_t2655936137::get_offset_of__compressorStream_2(),
	Compressor_t2655936137::get_offset_of__decompressorStream_3(),
	Compressor_t2655936137::get_offset_of_U3CIsActiveU3Ek__BackingField_4(),
	Compressor_t2655936137::get_offset_of_U3CSessionU3Ek__BackingField_5(),
	Compressor_t2655936137::get_offset_of__isDisposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3952 = { sizeof (ZlibStream_t3374314272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3953 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3953[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3954 = { sizeof (AuthenticationBannerEventArgs_t1678215344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3954[2] = 
{
	AuthenticationBannerEventArgs_t1678215344::get_offset_of_U3CBannerMessageU3Ek__BackingField_2(),
	AuthenticationBannerEventArgs_t1678215344::get_offset_of_U3CLanguageU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3955 = { sizeof (AuthenticationEventArgs_t2817588187), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3955[1] = 
{
	AuthenticationEventArgs_t2817588187::get_offset_of_U3CUsernameU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3956 = { sizeof (AuthenticationPasswordChangeEventArgs_t1684426427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3956[1] = 
{
	AuthenticationPasswordChangeEventArgs_t1684426427::get_offset_of_U3CNewPasswordU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3957 = { sizeof (AuthenticationPrompt_t4058028933), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3957[3] = 
{
	AuthenticationPrompt_t4058028933::get_offset_of_U3CIdU3Ek__BackingField_0(),
	AuthenticationPrompt_t4058028933::get_offset_of_U3CIsEchoedU3Ek__BackingField_1(),
	AuthenticationPrompt_t4058028933::get_offset_of_U3CRequestU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3958 = { sizeof (BigInteger_t4061197759)+ sizeof (RuntimeObject), sizeof(BigInteger_t4061197759_marshaled_pinvoke), sizeof(BigInteger_t4061197759_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3958[5] = 
{
	BigInteger_t4061197759_StaticFields::get_offset_of_ZeroSingleton_0(),
	BigInteger_t4061197759_StaticFields::get_offset_of_OneSingleton_1(),
	BigInteger_t4061197759_StaticFields::get_offset_of_MinusOneSingleton_2(),
	BigInteger_t4061197759::get_offset_of__data_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BigInteger_t4061197759::get_offset_of__sign_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3959 = { sizeof (ChannelDataEventArgs_t1617664455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3959[1] = 
{
	ChannelDataEventArgs_t1617664455::get_offset_of_U3CDataU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3960 = { sizeof (ChannelEventArgs_t3791648963), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3960[1] = 
{
	ChannelEventArgs_t3791648963::get_offset_of_U3CChannelNumberU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3961 = { sizeof (ChannelExtendedDataEventArgs_t4290060220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3961[1] = 
{
	ChannelExtendedDataEventArgs_t4290060220::get_offset_of_U3CDataTypeCodeU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3962 = { sizeof (ChannelOpenConfirmedEventArgs_t3416490729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3962[2] = 
{
	ChannelOpenConfirmedEventArgs_t3416490729::get_offset_of_U3CInitialWindowSizeU3Ek__BackingField_2(),
	ChannelOpenConfirmedEventArgs_t3416490729::get_offset_of_U3CMaximumPacketSizeU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3963 = { sizeof (ChannelOpenFailedEventArgs_t489206796), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3963[3] = 
{
	ChannelOpenFailedEventArgs_t489206796::get_offset_of_U3CReasonCodeU3Ek__BackingField_2(),
	ChannelOpenFailedEventArgs_t489206796::get_offset_of_U3CDescriptionU3Ek__BackingField_3(),
	ChannelOpenFailedEventArgs_t489206796::get_offset_of_U3CLanguageU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3964 = { sizeof (ChannelRequestEventArgs_t205415504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3964[1] = 
{
	ChannelRequestEventArgs_t205415504::get_offset_of_U3CInfoU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3965 = { sizeof (Pack_t752192392), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3966 = { sizeof (ProxyException_t1139642159), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3967 = { sizeof (HostKeyEventArgs_t1391086826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3967[5] = 
{
	HostKeyEventArgs_t1391086826::get_offset_of_U3CCanTrustU3Ek__BackingField_1(),
	HostKeyEventArgs_t1391086826::get_offset_of_U3CHostKeyU3Ek__BackingField_2(),
	HostKeyEventArgs_t1391086826::get_offset_of_U3CHostKeyNameU3Ek__BackingField_3(),
	HostKeyEventArgs_t1391086826::get_offset_of_U3CFingerPrintU3Ek__BackingField_4(),
	HostKeyEventArgs_t1391086826::get_offset_of_U3CKeyLengthU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3968 = { sizeof (DerData_t3507035185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3968[1] = 
{
	DerData_t3507035185::get_offset_of__data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3969 = { sizeof (ExceptionEventArgs_t896128004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3969[1] = 
{
	ExceptionEventArgs_t896128004::get_offset_of_U3CExceptionU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3970 = { sizeof (Extensions_t432594648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3971 = { sizeof (ObjectIdentifier_t2054380755)+ sizeof (RuntimeObject), sizeof(ObjectIdentifier_t2054380755_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3971[1] = 
{
	ObjectIdentifier_t2054380755::get_offset_of_U3CIdentifiersU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3972 = { sizeof (PipeStream_t2360103068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3972[5] = 
{
	PipeStream_t2360103068::get_offset_of__buffer_4(),
	PipeStream_t2360103068::get_offset_of__isFlushed_5(),
	PipeStream_t2360103068::get_offset_of__maxBufferLength_6(),
	PipeStream_t2360103068::get_offset_of__canBlockLastRead_7(),
	PipeStream_t2360103068::get_offset_of__isDisposed_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3973 = { sizeof (SemaphoreLight_t4163090541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3973[3] = 
{
	SemaphoreLight_t4163090541::get_offset_of__lock_0(),
	SemaphoreLight_t4163090541::get_offset_of__waitHandle_1(),
	SemaphoreLight_t4163090541::get_offset_of__currentCount_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3974 = { sizeof (SshAuthenticationException_t3116097484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3975 = { sizeof (SshConnectionException_t3734221110), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3975[1] = 
{
	SshConnectionException_t3734221110::get_offset_of_U3CDisconnectReasonU3Ek__BackingField_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3976 = { sizeof (SshData_t3807462516), -1, sizeof(SshData_t3807462516_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3976[3] = 
{
	SshData_t3807462516_StaticFields::get_offset_of_Ascii_0(),
	SshData_t3807462516_StaticFields::get_offset_of_Utf8_1(),
	SshData_t3807462516::get_offset_of__stream_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3977 = { sizeof (SshException_t1435741398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3978 = { sizeof (SshOperationTimeoutException_t3702980668), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3979 = { sizeof (TerminalModes_t2307982478)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3979[57] = 
{
	TerminalModes_t2307982478::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3980 = { sizeof (SshDataStream_t621401638), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3981 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3982 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3983 = { sizeof (Channel_t457090584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3983[26] = 
{
	Channel_t457090584::get_offset_of__channelClosedWaitHandle_0(),
	Channel_t457090584::get_offset_of__channelServerWindowAdjustWaitHandle_1(),
	Channel_t457090584::get_offset_of__errorOccuredWaitHandle_2(),
	Channel_t457090584::get_offset_of__serverWindowSizeLock_3(),
	Channel_t457090584::get_offset_of__initialWindowSize_4(),
	Channel_t457090584::get_offset_of__remoteWindowSize_5(),
	Channel_t457090584::get_offset_of__remoteChannelNumber_6(),
	Channel_t457090584::get_offset_of__remotePacketSize_7(),
	Channel_t457090584::get_offset_of__session_8(),
	Channel_t457090584::get_offset_of__closeMessageSent_9(),
	Channel_t457090584::get_offset_of__closeMessageReceived_10(),
	Channel_t457090584::get_offset_of__eofMessageReceived_11(),
	Channel_t457090584::get_offset_of__eofMessageSent_12(),
	Channel_t457090584::get_offset_of_Exception_13(),
	Channel_t457090584::get_offset_of_U3CLocalChannelNumberU3Ek__BackingField_14(),
	Channel_t457090584::get_offset_of_U3CLocalPacketSizeU3Ek__BackingField_15(),
	Channel_t457090584::get_offset_of_U3CLocalWindowSizeU3Ek__BackingField_16(),
	Channel_t457090584::get_offset_of_U3CIsOpenU3Ek__BackingField_17(),
	Channel_t457090584::get_offset_of_DataReceived_18(),
	Channel_t457090584::get_offset_of_ExtendedDataReceived_19(),
	Channel_t457090584::get_offset_of_EndOfData_20(),
	Channel_t457090584::get_offset_of_Closed_21(),
	Channel_t457090584::get_offset_of_RequestReceived_22(),
	Channel_t457090584::get_offset_of_RequestSucceeded_23(),
	Channel_t457090584::get_offset_of_RequestFailed_24(),
	Channel_t457090584::get_offset_of__isDisposed_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3984 = { sizeof (ChannelSession_t200380688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3984[5] = 
{
	ChannelSession_t200380688::get_offset_of__failedOpenAttempts_28(),
	ChannelSession_t200380688::get_offset_of__sessionSemaphoreObtained_29(),
	ChannelSession_t200380688::get_offset_of__channelOpenResponseWaitHandle_30(),
	ChannelSession_t200380688::get_offset_of__channelRequestResponse_31(),
	ChannelSession_t200380688::get_offset_of__channelRequestSucces_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3985 = { sizeof (ClientChannel_t2601035749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3985[2] = 
{
	ClientChannel_t2601035749::get_offset_of_OpenConfirmed_26(),
	ClientChannel_t2601035749::get_offset_of_OpenFailed_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3986 = { sizeof (CryptoAbstraction_t699149699), -1, sizeof(CryptoAbstraction_t699149699_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3986[1] = 
{
	CryptoAbstraction_t699149699_StaticFields::get_offset_of_Randomizer_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3987 = { sizeof (DnsAbstraction_t2584699643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3988 = { sizeof (ReflectionAbstraction_t4156969134), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3989 = { sizeof (SocketAbstraction_t3398211397), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3990 = { sizeof (ThreadAbstraction_t2304994231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3991 = { sizeof (U3CU3Ec__DisplayClass2_0_t3342799812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3991[1] = 
{
	U3CU3Ec__DisplayClass2_0_t3342799812::get_offset_of_action_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3992 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255367), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3992[41] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U304B9E6B1364BBA4125AE2866E09C57C9E8CD6DA6_0(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U304D2A79C8A779AFAA779125335E9334C245EBB46_1(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U30C4110BC17D746F018F47B49E0EB0D6590F69939_2(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U3102C522344FCAC1545BDA50C0FC675C502FFEC53_3(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U317651A9FA4DEA6C24D1287324CF4A640D080FE8E_4(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U31AFB455399A50580CF1039188ABA6BE82F309543_5(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U31C1237F52E2ED7B4D229AE3978DA144B9E653F5E_6(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U329EC5E8FCA12DB9EC0B5E6D2DE67B624D2E2372C_7(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U331FEE8F5423CEC1C6B1099AFA65A3F4A1CC8E0C6_8(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U337454D933508E238CFB980F1077B24ADA4A480F4_9(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U33D6EB645BC212077C1B37A3A32CA2A62F7B39018_10(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U33F653EBF39CFCB2FD7FF335DC96E82F3CDFDF0C7_11(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U34C44594E2C603D85EC6195B1A7A6C5876CBB58E2_12(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U34FFC8339E09825A68B861995F9C660EB11DBF13D_13(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U3555BD8216452A1A1E3CB7AD8F4DAE8F41FB30380_14(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_15(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U364354464C9074B5BB4369689AAA131961CD1EF19_16(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U3643A9D76937E94519B73BE072D65E79BAFF3C213_17(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U366E175AF3B11AE7E13BEA06CEE73F117E92B2AF2_18(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U36D7292FF64ED402BBFFF5E7534C0980BEBF0EEB1_19(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U36F576E8737EAAC9B6B12BDFC370048CD205E2CDD_20(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U37FF0A15672FF2807983AB77C0DA74928986427C0_21(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U3821D1E62CD072AE9EC73D238C7DE19C5C5F3A7D8_22(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U384F6B4137736E2F6671FC8787A500AC5C6E1D6AC_23(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_24(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U395CA85749ADCFBF9A2B82C0381DBCF95D175524C_25(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U39E815C1DA1D29B2EE0FABE1D38FAADEB1CF6D367_26(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_A47DBBBB6655DAA5E024374BB9C8AA44FF40D444_27(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_28(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_B539B4DC5A69E3FE6AB10F668DDCA96E9D51235B_29(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_B68637EF60D499620B99E336C59E4865FFC4C5D7_30(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_B8DB0CB599EDD82A386D1A154FB3EB9235513DAD_31(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_C105B70BED997DB5D36E1D2E84C1EFCB445A428C_32(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_D9C221237B647EC215A7BCDED447349810E6BF9C_33(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_34(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_E117A40BF9A3AE32474AD7B22EB4C60E95D3BE2A_35(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_E21F52BC931487E3B4E28F1E315561D39A384D55_36(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_E2F8F75B7ABE5A6E4ECF5E32B935909BE2CC9F4B_37(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_E43F6BA634642FB90FEEE1A8F9905E957741960C_38(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_EF813A47B13574822D335279EF445343654A4F04_39(),
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_FC9EEBC457831129D4AF4FF84333B481F4BED60E_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3993 = { sizeof (__StaticArrayInitTypeSizeU3D16_t385395491)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D16_t385395491 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3994 = { sizeof (__StaticArrayInitTypeSizeU3D30_t1548325975)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D30_t1548325975 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3995 = { sizeof (__StaticArrayInitTypeSizeU3D48_t1904228657)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D48_t1904228657 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3996 = { sizeof (__StaticArrayInitTypeSizeU3D56_t385133347)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D56_t385133347 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3997 = { sizeof (__StaticArrayInitTypeSizeU3D72_t2710863246)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D72_t2710863246 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3998 = { sizeof (__StaticArrayInitTypeSizeU3D96_t385919777)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D96_t385919777 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3999 = { sizeof (__StaticArrayInitTypeSizeU3D129_t2870181261)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D129_t2870181261 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
