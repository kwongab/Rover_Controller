﻿#include "il2cpp-config.h"

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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.String
struct String_t;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>[]
struct KeyValuePair_2U5BU5D_t2069718811;
// System.DateTime[]
struct DateTimeU5BU5D_t1184652292;
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058;
// System.Decimal[]
struct DecimalU5BU5D_t1145110141;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[]
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.SByte[]
struct SByteU5BU5D_t2651576203;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.Text.RegularExpressions.RegexOptions[]
struct RegexOptionsU5BU5D_t160358170;
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Xml.Schema.RangePositionInfo[]
struct RangePositionInfoU5BU5D_t242328633;
// System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry[]
struct XmlSchemaObjectEntryU5BU5D_t1655208330;
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t2389202590;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t1128832444;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t928762055;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1655937503;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;
// System.Reflection.Assembly
struct Assembly_t;
// System.Type
struct Type_t;
// System.Attribute
struct Attribute_t861562559;
// System.Func`1<System.Object>
struct Func_1_t2509852811;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.ArgumentException
struct ArgumentException_t132251570;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// Mono.AppleTls.SslStatus[]
struct SslStatusU5BU5D_t3256112573;
// System.Xml.Schema.SequenceNode/SequenceConstructPosContext[]
struct SequenceConstructPosContextU5BU5D_t615009946;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_t3723878365;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t114149265;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_t3889069996;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2442480487;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Exception
struct Exception_t;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_t548514548;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t1764640198;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t1120718408;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t3995630009;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t2867327688;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t64614563;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t3256600500;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t3111972472;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t3587542510;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t1977848392;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t972960537;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t3277009892;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t2311673543;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t2886331738;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t2950825503;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t955952873;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t3373214253;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t3912835512;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t1475332338;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t2658898854;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t231414508;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3936143868;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3239458680;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2245623724;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t243502644;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2103185493;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t3989247807;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t190679043;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Xml.Schema.SequenceNode
struct SequenceNode_t3837141573;
// System.Xml.Schema.BitSet
struct BitSet_t1154229585;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t831815024;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1315720168;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// System.Void
struct Void_t1185182177;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.Threading.Tasks.StackGuard
struct StackGuard_t1472778820;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t2075988643;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t2170468915;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t1600215562;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t4012569436;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2033747345;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t3139534710;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t2108926;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t3010374299;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t4167915811;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_t585560190;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t1438173104;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t4040729994;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t2924027637;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t3270282352;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_RuntimeMethod_var;
extern String_t* _stringLiteral797640427;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisTouchScreenKeyboardType_t1530597702_m1814313867_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisTouchScreenKeyboardType_t1530597702_m1814313867_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisAspectMode_t3417192999_m813884768_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisAspectMode_t3417192999_m813884768_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisColorBlock_t2139031574_m39371088_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisColorBlock_t2139031574_m39371088_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisFitMode_t3267881214_m2951553158_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisFitMode_t3267881214_m2951553158_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisFillMethod_t1167457570_m2773281980_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisFillMethod_t1167457570_m2773281980_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisType_t1152881528_m2039773256_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisType_t1152881528_m2039773256_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisCharacterValidation_t4051914437_m1884588624_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisCharacterValidation_t4051914437_m1884588624_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisContentType_t1787303396_m1125918082_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisContentType_t1787303396_m1125918082_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisInputType_t1770400679_m2568024483_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisInputType_t1770400679_m2568024483_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisLineType_t4214648469_m2725017131_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisLineType_t4214648469_m2725017131_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisNavigation_t3049316579_m2244158177_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisNavigation_t3049316579_m2244158177_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t3470714353_m1060680375_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t3470714353_m1060680375_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisTransition_t1769908631_m1057654687_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisTransition_t1769908631_m1057654687_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t337909235_m518466143_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t337909235_m518466143_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisSpriteState_t1362986479_m2971757129_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisSpriteState_t1362986479_m2971757129_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisUICharInfo_t75501106_m2335664289_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisUICharInfo_t75501106_m2335664289_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisUILineInfo_t4195266810_m1189106026_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisUILineInfo_t4195266810_m1189106026_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisUIVertex_t4057497605_m1280704486_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisUIVertex_t4057497605_m1280704486_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisVector2_t2156229523_m182881471_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisVector2_t2156229523_m182881471_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisVector3_t3722313464_m321227951_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisVector3_t3722313464_m321227951_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisVector4_t3319028937_m2130480280_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisVector4_t3319028937_m2130480280_MetadataUsageId;
extern const RuntimeMethod* Array_InternalArray__IReadOnlyList_get_Item_TisSemanticMeaning_t3533498486_m1690385756_RuntimeMethod_var;
extern const uint32_t Array_InternalArray__IReadOnlyList_get_Item_TisSemanticMeaning_t3533498486_m1690385756_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m3561972549_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t Marshal_PtrToStructure_TisWin32_FIXED_INFO_t1299345856_m4277728215_MetadataUsageId;
extern const uint32_t Marshal_PtrToStructure_TisWin32_IP_ADAPTER_ADDRESSES_t3463526328_m266777785_MetadataUsageId;
extern const uint32_t Marshal_PtrToStructure_TisRuntimeObject_m12685913_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_RuntimeMethod_var;
extern String_t* _stringLiteral2654205466;
extern const uint32_t LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_MetadataUsageId;
extern const uint32_t AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId;
extern const uint32_t Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId;
extern const uint32_t Component_GetComponentInChildren_TisRuntimeObject_m1033527003_MetadataUsageId;
extern const uint32_t Component_GetComponentInParent_TisRuntimeObject_m3491943679_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_RuntimeMethod_var;
extern String_t* _stringLiteral2964872255;
extern const uint32_t ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_MetadataUsageId;
extern const uint32_t GameObject_AddComponent_TisRuntimeObject_m3469369570_MetadataUsageId;
extern const uint32_t GameObject_GetComponent_TisRuntimeObject_m2049753423_MetadataUsageId;
extern const uint32_t GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2475671027;
extern const uint32_t Object_Instantiate_TisRuntimeObject_m2446893047_MetadataUsageId;
extern const uint32_t Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_MetadataUsageId;
extern const uint32_t ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId;
extern const uint32_t Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_t1671470975_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var;
extern String_t* _stringLiteral4007973390;
extern String_t* _stringLiteral461028519;
extern const uint32_t Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_t3904884886_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t XmlListConverter_ToArray_TisBoolean_t97287965_m1681726772_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisByte_t1134296376_m25630657_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisDateTime_t3738529785_m3434455802_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisDateTimeOffset_t3229287507_m829729751_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisDecimal_t2948259380_m2798570278_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisDouble_t594665363_m3193001621_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisInt16_t2552820387_m2616720600_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisInt32_t2950945753_m360094630_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisInt64_t3736567304_m4217099738_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisRuntimeObject_m1751379490_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisSByte_t1669577662_m4254332645_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisSingle_t1397266774_m1102130495_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisTimeSpan_t881159249_m2972605057_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisUInt16_t2177724958_m2035470571_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisUInt32_t2560061978_m2615763131_MetadataUsageId;
extern const uint32_t XmlListConverter_ToArray_TisUInt64_t4134040092_m3140071152_MetadataUsageId;
extern const uint32_t GameObject_GetComponents_TisRuntimeObject_m1550324888_MetadataUsageId;
extern const RuntimeMethod* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m244174403_RuntimeMethod_var;
extern String_t* _stringLiteral879148213;
extern const uint32_t Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m244174403_MetadataUsageId;
extern RuntimeClass* TaskWrapperAsyncResult_t2316075138_il2cpp_TypeInfo_var;
extern const uint32_t TaskToApm_End_TisInt32_t2950945753_m2874764222_MetadataUsageId;
extern const uint32_t TaskToApm_End_TisRuntimeObject_m300046032_MetadataUsageId;
extern const RuntimeMethod* Enumerable_SingleOrDefault_TisRuntimeObject_m555175825_RuntimeMethod_var;
extern String_t* _stringLiteral4294193667;
extern String_t* _stringLiteral3941128596;
extern const uint32_t Enumerable_SingleOrDefault_TisRuntimeObject_m555175825_MetadataUsageId;
extern const RuntimeMethod* Enumerable_TryGetFirst_TisRuntimeObject_m938458824_RuntimeMethod_var;
extern const uint32_t Enumerable_TryGetFirst_TisRuntimeObject_m938458824_MetadataUsageId;
extern const RuntimeMethod* Enumerable_TryGetLast_TisRuntimeObject_m2096250941_RuntimeMethod_var;
extern const uint32_t Enumerable_TryGetLast_TisRuntimeObject_m2096250941_MetadataUsageId;
extern const RuntimeMethod* Enumerable_ToArray_TisByte_t1134296376_m3684293684_RuntimeMethod_var;
extern const uint32_t Enumerable_ToArray_TisByte_t1134296376_m3684293684_MetadataUsageId;
extern const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_m1754324294_RuntimeMethod_var;
extern const uint32_t Enumerable_ToArray_TisRuntimeObject_m1754324294_MetadataUsageId;
extern const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m1327842210_RuntimeMethod_var;
extern String_t* _stringLiteral2957729587;
extern const uint32_t CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m1327842210_MetadataUsageId;
extern RuntimeClass* ExecuteEvents_t3484638744_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m2402360903_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3543896146_RuntimeMethod_var;
extern const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_MetadataUsageId;
extern const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_MetadataUsageId;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Decimal_t2948259380 ;

struct BooleanU5BU5D_t2897418192;
struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct KeyValuePair_2U5BU5D_t2069718811;
struct DateTimeU5BU5D_t1184652292;
struct DateTimeOffsetU5BU5D_t3473357058;
struct DecimalU5BU5D_t1145110141;
struct DoubleU5BU5D_t3413330114;
struct Int16U5BU5D_t3686840178;
struct Int32U5BU5D_t385246372;
struct Int64U5BU5D_t2559172825;
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057;
struct ObjectU5BU5D_t2843939325;
struct SByteU5BU5D_t2651576203;
struct SingleU5BU5D_t1444911251;
struct RegexOptionsU5BU5D_t160358170;
struct TimeSpanU5BU5D_t4291357516;
struct UInt16U5BU5D_t3326319531;
struct UInt32U5BU5D_t2770800703;
struct UInt64U5BU5D_t1659327989;
struct RangePositionInfoU5BU5D_t242328633;
struct XmlSchemaObjectEntryU5BU5D_t1655208330;
struct OrderBlockU5BU5D_t2389202590;
struct Color32U5BU5D_t3850468773;
struct RaycastResultU5BU5D_t1128832444;
struct UICharInfoU5BU5D_t928762055;
struct UILineInfoU5BU5D_t1655937503;
struct UIVertexU5BU5D_t1981460040;
struct Vector2U5BU5D_t1457185986;
struct Vector3U5BU5D_t1718750761;
struct Vector4U5BU5D_t934056436;
struct SslStatusU5BU5D_t3256112573;
struct SequenceConstructPosContextU5BU5D_t615009946;
struct WorkRequestU5BU5D_t3723878365;
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;


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
#ifndef EMPTYARRAY_1_T576342003_H
#define EMPTYARRAY_1_T576342003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<Mono.AppleTls.SslStatus>
struct  EmptyArray_1_t576342003  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t576342003_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	SslStatusU5BU5D_t3256112573* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t576342003_StaticFields, ___Value_0)); }
	inline SslStatusU5BU5D_t3256112573* get_Value_0() const { return ___Value_0; }
	inline SslStatusU5BU5D_t3256112573** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(SslStatusU5BU5D_t3256112573* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T576342003_H
#ifndef EXECUTEEVENTS_T3484638744_H
#define EXECUTEEVENTS_T3484638744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t3484638744  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t3484638744_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t3995630009 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t2867327688 * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t64614563 * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t3256600500 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t3111972472 * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t3587542510 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t1977848392 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t972960537 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t3277009892 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t2311673543 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t2886331738 * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_t2950825503 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t955952873 * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t3373214253 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t3912835512 * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t1475332338 * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t2658898854 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t231414508 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t777473367 * ___s_InternalTransformList_18;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache0
	EventFunction_1_t3995630009 * ___U3CU3Ef__mgU24cache0_19;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache1
	EventFunction_1_t2867327688 * ___U3CU3Ef__mgU24cache1_20;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache2
	EventFunction_1_t64614563 * ___U3CU3Ef__mgU24cache2_21;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache3
	EventFunction_1_t3256600500 * ___U3CU3Ef__mgU24cache3_22;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache4
	EventFunction_1_t3111972472 * ___U3CU3Ef__mgU24cache4_23;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache5
	EventFunction_1_t3587542510 * ___U3CU3Ef__mgU24cache5_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache6
	EventFunction_1_t1977848392 * ___U3CU3Ef__mgU24cache6_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache7
	EventFunction_1_t972960537 * ___U3CU3Ef__mgU24cache7_26;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache8
	EventFunction_1_t3277009892 * ___U3CU3Ef__mgU24cache8_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache9
	EventFunction_1_t2311673543 * ___U3CU3Ef__mgU24cache9_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheA
	EventFunction_1_t2886331738 * ___U3CU3Ef__mgU24cacheA_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheB
	EventFunction_1_t2950825503 * ___U3CU3Ef__mgU24cacheB_30;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheC
	EventFunction_1_t955952873 * ___U3CU3Ef__mgU24cacheC_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheD
	EventFunction_1_t3373214253 * ___U3CU3Ef__mgU24cacheD_32;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheE
	EventFunction_1_t3912835512 * ___U3CU3Ef__mgU24cacheE_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheF
	EventFunction_1_t1475332338 * ___U3CU3Ef__mgU24cacheF_34;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache10
	EventFunction_1_t2658898854 * ___U3CU3Ef__mgU24cache10_35;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t3995630009 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t3995630009 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t3995630009 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerEnterHandler_0), value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t2867327688 * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t2867327688 ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t2867327688 * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerExitHandler_1), value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t64614563 * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t64614563 ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t64614563 * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerDownHandler_2), value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_t3256600500 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_t3256600500 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_t3256600500 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerUpHandler_3), value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t3111972472 * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t3111972472 ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t3111972472 * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerClickHandler_4), value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_t3587542510 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_t3587542510 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_t3587542510 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_InitializePotentialDragHandler_5), value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t1977848392 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t1977848392 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t1977848392 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_BeginDragHandler_6), value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t972960537 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t972960537 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t972960537 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DragHandler_7), value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t3277009892 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t3277009892 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t3277009892 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EndDragHandler_8), value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t2311673543 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t2311673543 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t2311673543 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_DropHandler_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t2886331738 * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t2886331738 ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t2886331738 * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollHandler_10), value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_t2950825503 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_t2950825503 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_t2950825503 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateSelectedHandler_11), value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t955952873 * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t955952873 ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t955952873 * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_SelectHandler_12), value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t3373214253 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t3373214253 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t3373214253 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_DeselectHandler_13), value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_t3912835512 * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_t3912835512 ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_t3912835512 * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_MoveHandler_14), value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t1475332338 * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t1475332338 ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t1475332338 * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubmitHandler_15), value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_t2658898854 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_t2658898854 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_t2658898854 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_CancelHandler_16), value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t231414508 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t231414508 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t231414508 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_HandlerListPool_17), value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t777473367 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t777473367 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t777473367 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalTransformList_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline EventFunction_1_t3995630009 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline EventFunction_1_t3995630009 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(EventFunction_1_t3995630009 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline EventFunction_1_t2867327688 * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline EventFunction_1_t2867327688 ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(EventFunction_1_t2867327688 * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_21() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache2_21)); }
	inline EventFunction_1_t64614563 * get_U3CU3Ef__mgU24cache2_21() const { return ___U3CU3Ef__mgU24cache2_21; }
	inline EventFunction_1_t64614563 ** get_address_of_U3CU3Ef__mgU24cache2_21() { return &___U3CU3Ef__mgU24cache2_21; }
	inline void set_U3CU3Ef__mgU24cache2_21(EventFunction_1_t64614563 * value)
	{
		___U3CU3Ef__mgU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_22() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache3_22)); }
	inline EventFunction_1_t3256600500 * get_U3CU3Ef__mgU24cache3_22() const { return ___U3CU3Ef__mgU24cache3_22; }
	inline EventFunction_1_t3256600500 ** get_address_of_U3CU3Ef__mgU24cache3_22() { return &___U3CU3Ef__mgU24cache3_22; }
	inline void set_U3CU3Ef__mgU24cache3_22(EventFunction_1_t3256600500 * value)
	{
		___U3CU3Ef__mgU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_23() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache4_23)); }
	inline EventFunction_1_t3111972472 * get_U3CU3Ef__mgU24cache4_23() const { return ___U3CU3Ef__mgU24cache4_23; }
	inline EventFunction_1_t3111972472 ** get_address_of_U3CU3Ef__mgU24cache4_23() { return &___U3CU3Ef__mgU24cache4_23; }
	inline void set_U3CU3Ef__mgU24cache4_23(EventFunction_1_t3111972472 * value)
	{
		___U3CU3Ef__mgU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_24() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache5_24)); }
	inline EventFunction_1_t3587542510 * get_U3CU3Ef__mgU24cache5_24() const { return ___U3CU3Ef__mgU24cache5_24; }
	inline EventFunction_1_t3587542510 ** get_address_of_U3CU3Ef__mgU24cache5_24() { return &___U3CU3Ef__mgU24cache5_24; }
	inline void set_U3CU3Ef__mgU24cache5_24(EventFunction_1_t3587542510 * value)
	{
		___U3CU3Ef__mgU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_25() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache6_25)); }
	inline EventFunction_1_t1977848392 * get_U3CU3Ef__mgU24cache6_25() const { return ___U3CU3Ef__mgU24cache6_25; }
	inline EventFunction_1_t1977848392 ** get_address_of_U3CU3Ef__mgU24cache6_25() { return &___U3CU3Ef__mgU24cache6_25; }
	inline void set_U3CU3Ef__mgU24cache6_25(EventFunction_1_t1977848392 * value)
	{
		___U3CU3Ef__mgU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_26() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache7_26)); }
	inline EventFunction_1_t972960537 * get_U3CU3Ef__mgU24cache7_26() const { return ___U3CU3Ef__mgU24cache7_26; }
	inline EventFunction_1_t972960537 ** get_address_of_U3CU3Ef__mgU24cache7_26() { return &___U3CU3Ef__mgU24cache7_26; }
	inline void set_U3CU3Ef__mgU24cache7_26(EventFunction_1_t972960537 * value)
	{
		___U3CU3Ef__mgU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_27() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache8_27)); }
	inline EventFunction_1_t3277009892 * get_U3CU3Ef__mgU24cache8_27() const { return ___U3CU3Ef__mgU24cache8_27; }
	inline EventFunction_1_t3277009892 ** get_address_of_U3CU3Ef__mgU24cache8_27() { return &___U3CU3Ef__mgU24cache8_27; }
	inline void set_U3CU3Ef__mgU24cache8_27(EventFunction_1_t3277009892 * value)
	{
		___U3CU3Ef__mgU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_28() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache9_28)); }
	inline EventFunction_1_t2311673543 * get_U3CU3Ef__mgU24cache9_28() const { return ___U3CU3Ef__mgU24cache9_28; }
	inline EventFunction_1_t2311673543 ** get_address_of_U3CU3Ef__mgU24cache9_28() { return &___U3CU3Ef__mgU24cache9_28; }
	inline void set_U3CU3Ef__mgU24cache9_28(EventFunction_1_t2311673543 * value)
	{
		___U3CU3Ef__mgU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_29() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheA_29)); }
	inline EventFunction_1_t2886331738 * get_U3CU3Ef__mgU24cacheA_29() const { return ___U3CU3Ef__mgU24cacheA_29; }
	inline EventFunction_1_t2886331738 ** get_address_of_U3CU3Ef__mgU24cacheA_29() { return &___U3CU3Ef__mgU24cacheA_29; }
	inline void set_U3CU3Ef__mgU24cacheA_29(EventFunction_1_t2886331738 * value)
	{
		___U3CU3Ef__mgU24cacheA_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_30() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheB_30)); }
	inline EventFunction_1_t2950825503 * get_U3CU3Ef__mgU24cacheB_30() const { return ___U3CU3Ef__mgU24cacheB_30; }
	inline EventFunction_1_t2950825503 ** get_address_of_U3CU3Ef__mgU24cacheB_30() { return &___U3CU3Ef__mgU24cacheB_30; }
	inline void set_U3CU3Ef__mgU24cacheB_30(EventFunction_1_t2950825503 * value)
	{
		___U3CU3Ef__mgU24cacheB_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_31() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheC_31)); }
	inline EventFunction_1_t955952873 * get_U3CU3Ef__mgU24cacheC_31() const { return ___U3CU3Ef__mgU24cacheC_31; }
	inline EventFunction_1_t955952873 ** get_address_of_U3CU3Ef__mgU24cacheC_31() { return &___U3CU3Ef__mgU24cacheC_31; }
	inline void set_U3CU3Ef__mgU24cacheC_31(EventFunction_1_t955952873 * value)
	{
		___U3CU3Ef__mgU24cacheC_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_32() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheD_32)); }
	inline EventFunction_1_t3373214253 * get_U3CU3Ef__mgU24cacheD_32() const { return ___U3CU3Ef__mgU24cacheD_32; }
	inline EventFunction_1_t3373214253 ** get_address_of_U3CU3Ef__mgU24cacheD_32() { return &___U3CU3Ef__mgU24cacheD_32; }
	inline void set_U3CU3Ef__mgU24cacheD_32(EventFunction_1_t3373214253 * value)
	{
		___U3CU3Ef__mgU24cacheD_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_33() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheE_33)); }
	inline EventFunction_1_t3912835512 * get_U3CU3Ef__mgU24cacheE_33() const { return ___U3CU3Ef__mgU24cacheE_33; }
	inline EventFunction_1_t3912835512 ** get_address_of_U3CU3Ef__mgU24cacheE_33() { return &___U3CU3Ef__mgU24cacheE_33; }
	inline void set_U3CU3Ef__mgU24cacheE_33(EventFunction_1_t3912835512 * value)
	{
		___U3CU3Ef__mgU24cacheE_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_34() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheF_34)); }
	inline EventFunction_1_t1475332338 * get_U3CU3Ef__mgU24cacheF_34() const { return ___U3CU3Ef__mgU24cacheF_34; }
	inline EventFunction_1_t1475332338 ** get_address_of_U3CU3Ef__mgU24cacheF_34() { return &___U3CU3Ef__mgU24cacheF_34; }
	inline void set_U3CU3Ef__mgU24cacheF_34(EventFunction_1_t1475332338 * value)
	{
		___U3CU3Ef__mgU24cacheF_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_35() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache10_35)); }
	inline EventFunction_1_t2658898854 * get_U3CU3Ef__mgU24cache10_35() const { return ___U3CU3Ef__mgU24cache10_35; }
	inline EventFunction_1_t2658898854 ** get_address_of_U3CU3Ef__mgU24cache10_35() { return &___U3CU3Ef__mgU24cache10_35; }
	inline void set_U3CU3Ef__mgU24cache10_35(EventFunction_1_t2658898854 * value)
	{
		___U3CU3Ef__mgU24cache10_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEEVENTS_T3484638744_H
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
#ifndef RESOURCES_T2942265397_H
#define RESOURCES_T2942265397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2942265397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2942265397_H
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
#ifndef EMPTYARRAY_1_T2438741146_H
#define EMPTYARRAY_1_T2438741146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Xml.Schema.SequenceNode/SequenceConstructPosContext>
struct  EmptyArray_1_t2438741146  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t2438741146_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	SequenceConstructPosContextU5BU5D_t615009946* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t2438741146_StaticFields, ___Value_0)); }
	inline SequenceConstructPosContextU5BU5D_t615009946* get_Value_0() const { return ___Value_0; }
	inline SequenceConstructPosContextU5BU5D_t615009946** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(SequenceConstructPosContextU5BU5D_t615009946* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T2438741146_H
#ifndef EMPTYARRAY_1_T1738879059_H
#define EMPTYARRAY_1_T1738879059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct  EmptyArray_1_t1738879059  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t1738879059_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	WorkRequestU5BU5D_t3723878365* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t1738879059_StaticFields, ___Value_0)); }
	inline WorkRequestU5BU5D_t3723878365* get_Value_0() const { return ___Value_0; }
	inline WorkRequestU5BU5D_t3723878365** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(WorkRequestU5BU5D_t3723878365* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T1738879059_H
#ifndef ENUMERABLEHELPERS_T3229093989_H
#define ENUMERABLEHELPERS_T3229093989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EnumerableHelpers
struct  EnumerableHelpers_t3229093989  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEHELPERS_T3229093989_H
#ifndef EMPTYARRAY_1_T1518656823_H
#define EMPTYARRAY_1_T1518656823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Byte>
struct  EmptyArray_1_t1518656823  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t1518656823_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_t4116647657* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t1518656823_StaticFields, ___Value_0)); }
	inline ByteU5BU5D_t4116647657* get_Value_0() const { return ___Value_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ByteU5BU5D_t4116647657* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T1518656823_H
#ifndef EMPTYARRAY_1_T4018820917_H
#define EMPTYARRAY_1_T4018820917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t4018820917  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t4018820917_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t3528271667* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t4018820917_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t3528271667* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t3528271667** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t3528271667* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T4018820917_H
#ifndef EMPTYARRAY_1_T3464466611_H
#define EMPTYARRAY_1_T3464466611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_t3464466611  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t3464466611_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t2843939325* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t3464466611_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t2843939325* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t2843939325* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T3464466611_H
#ifndef MARSHAL_T1757017490_H
#define MARSHAL_T1757017490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t1757017490  : public RuntimeObject
{
public:

public:
};

struct Marshal_t1757017490_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;
	// System.Boolean System.Runtime.InteropServices.Marshal::SetErrorInfoNotAvailable
	bool ___SetErrorInfoNotAvailable_2;
	// System.Boolean System.Runtime.InteropServices.Marshal::GetErrorInfoNotAvailable
	bool ___GetErrorInfoNotAvailable_3;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}

	inline static int32_t get_offset_of_SetErrorInfoNotAvailable_2() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SetErrorInfoNotAvailable_2)); }
	inline bool get_SetErrorInfoNotAvailable_2() const { return ___SetErrorInfoNotAvailable_2; }
	inline bool* get_address_of_SetErrorInfoNotAvailable_2() { return &___SetErrorInfoNotAvailable_2; }
	inline void set_SetErrorInfoNotAvailable_2(bool value)
	{
		___SetErrorInfoNotAvailable_2 = value;
	}

	inline static int32_t get_offset_of_GetErrorInfoNotAvailable_3() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___GetErrorInfoNotAvailable_3)); }
	inline bool get_GetErrorInfoNotAvailable_3() const { return ___GetErrorInfoNotAvailable_3; }
	inline bool* get_address_of_GetErrorInfoNotAvailable_3() { return &___GetErrorInfoNotAvailable_3; }
	inline void set_GetErrorInfoNotAvailable_3(bool value)
	{
		___GetErrorInfoNotAvailable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T1757017490_H
#ifndef INTERLOCKED_T2273387594_H
#define INTERLOCKED_T2273387594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2273387594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2273387594_H
#ifndef JITHELPERS_T1212693971_H
#define JITHELPERS_T1212693971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t1212693971  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JITHELPERS_T1212693971_H
#ifndef CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
#define CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeExtensions
struct  CustomAttributeExtensions_t4268647790  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEEXTENSIONS_T4268647790_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef LAZYINITIALIZER_T767351689_H
#define LAZYINITIALIZER_T767351689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.LazyInitializer
struct  LazyInitializer_t767351689  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAZYINITIALIZER_T767351689_H
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
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef ATTRIBUTEHELPERENGINE_T2735742303_H
#define ATTRIBUTEHELPERENGINE_T2735742303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2735742303  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2735742303_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3936143868* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3239458680* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2245623724* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3936143868* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3936143868** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3936143868* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3239458680* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3239458680** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3239458680* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2245623724* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2245623724** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2245623724* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2735742303_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t807237628* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t807237628* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t807237628** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t807237628* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef VOLATILE_T3391122269_H
#define VOLATILE_T3391122269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Volatile
struct  Volatile_t3391122269  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOLATILE_T3391122269_H
#ifndef CUSTOMATTRIBUTEDATA_T1084486650_H
#define CUSTOMATTRIBUTEDATA_T1084486650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1084486650  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t5769829 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData/LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t3989247807 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___lazyData_3)); }
	inline LazyCAttrData_t3989247807 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t3989247807 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t3989247807 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((&___lazyData_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1084486650_H
#ifndef LIST_1_T4032136720_H
#define LIST_1_T4032136720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt32>
struct  List_1_t4032136720  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t2770800703* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____items_1)); }
	inline UInt32U5BU5D_t2770800703* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_t2770800703** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_t2770800703* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4032136720, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4032136720_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_t2770800703* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4032136720_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_t2770800703* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_t2770800703** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_t2770800703* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4032136720_H
#ifndef LIST_1_T1311147538_H
#define LIST_1_T1311147538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt64>
struct  List_1_t1311147538  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_t1659327989* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____items_1)); }
	inline UInt64U5BU5D_t1659327989* get__items_1() const { return ____items_1; }
	inline UInt64U5BU5D_t1659327989** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt64U5BU5D_t1659327989* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1311147538_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt64U5BU5D_t1659327989* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1311147538_StaticFields, ____emptyArray_5)); }
	inline UInt64U5BU5D_t1659327989* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt64U5BU5D_t1659327989** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt64U5BU5D_t1659327989* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1311147538_H
#ifndef LIST_1_T3649799700_H
#define LIST_1_T3649799700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt16>
struct  List_1_t3649799700  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt16U5BU5D_t3326319531* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3649799700, ____items_1)); }
	inline UInt16U5BU5D_t3326319531* get__items_1() const { return ____items_1; }
	inline UInt16U5BU5D_t3326319531** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt16U5BU5D_t3326319531* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3649799700, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3649799700, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3649799700, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3649799700_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt16U5BU5D_t3326319531* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3649799700_StaticFields, ____emptyArray_5)); }
	inline UInt16U5BU5D_t3326319531* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt16U5BU5D_t3326319531** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt16U5BU5D_t3326319531* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3649799700_H
#ifndef LIST_1_T2869341516_H
#define LIST_1_T2869341516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Single>
struct  List_1_t2869341516  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t1444911251* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____items_1)); }
	inline SingleU5BU5D_t1444911251* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t1444911251** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t1444911251* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2869341516, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2869341516_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t1444911251* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2869341516_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t1444911251* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t1444911251** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t1444911251* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2869341516_H
#ifndef LIST_1_T2353233991_H
#define LIST_1_T2353233991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.TimeSpan>
struct  List_1_t2353233991  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimeSpanU5BU5D_t4291357516* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2353233991, ____items_1)); }
	inline TimeSpanU5BU5D_t4291357516* get__items_1() const { return ____items_1; }
	inline TimeSpanU5BU5D_t4291357516** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TimeSpanU5BU5D_t4291357516* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2353233991, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2353233991, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2353233991, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2353233991_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimeSpanU5BU5D_t4291357516* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2353233991_StaticFields, ____emptyArray_5)); }
	inline TimeSpanU5BU5D_t4291357516* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TimeSpanU5BU5D_t4291357516** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TimeSpanU5BU5D_t4291357516* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2353233991_H
#ifndef TASKTOAPM_T1739674311_H
#define TASKTOAPM_T1739674311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskToApm
struct  TaskToApm_t1739674311  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKTOAPM_T1739674311_H
#ifndef COLLECTIONEXTENSIONS_T4236879312_H
#define COLLECTIONEXTENSIONS_T4236879312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.CollectionExtensions
struct  CollectionExtensions_t4236879312  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONEXTENSIONS_T4236879312_H
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
#ifndef TASKWRAPPERASYNCRESULT_T2316075138_H
#define TASKWRAPPERASYNCRESULT_T2316075138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct  TaskWrapperAsyncResult_t2316075138  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::Task
	Task_t3187275312 * ___Task_0;
	// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::m_state
	RuntimeObject * ___m_state_1;
	// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::m_completedSynchronously
	bool ___m_completedSynchronously_2;

public:
	inline static int32_t get_offset_of_Task_0() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_t2316075138, ___Task_0)); }
	inline Task_t3187275312 * get_Task_0() const { return ___Task_0; }
	inline Task_t3187275312 ** get_address_of_Task_0() { return &___Task_0; }
	inline void set_Task_0(Task_t3187275312 * value)
	{
		___Task_0 = value;
		Il2CppCodeGenWriteBarrier((&___Task_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_t2316075138, ___m_state_1)); }
	inline RuntimeObject * get_m_state_1() const { return ___m_state_1; }
	inline RuntimeObject ** get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(RuntimeObject * value)
	{
		___m_state_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_state_1), value);
	}

	inline static int32_t get_offset_of_m_completedSynchronously_2() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_t2316075138, ___m_completedSynchronously_2)); }
	inline bool get_m_completedSynchronously_2() const { return ___m_completedSynchronously_2; }
	inline bool* get_address_of_m_completedSynchronously_2() { return &___m_completedSynchronously_2; }
	inline void set_m_completedSynchronously_2(bool value)
	{
		___m_completedSynchronously_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKWRAPPERASYNCRESULT_T2316075138_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef LIST_1_T3141652404_H
#define LIST_1_T3141652404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.SByte>
struct  List_1_t3141652404  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SByteU5BU5D_t2651576203* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3141652404, ____items_1)); }
	inline SByteU5BU5D_t2651576203* get__items_1() const { return ____items_1; }
	inline SByteU5BU5D_t2651576203** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SByteU5BU5D_t2651576203* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3141652404, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3141652404, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3141652404, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3141652404_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SByteU5BU5D_t2651576203* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3141652404_StaticFields, ____emptyArray_5)); }
	inline SByteU5BU5D_t2651576203* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SByteU5BU5D_t2651576203** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SByteU5BU5D_t2651576203* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3141652404_H
#ifndef LIST_1_T915637231_H
#define LIST_1_T915637231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.DateTime>
struct  List_1_t915637231  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeU5BU5D_t1184652292* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____items_1)); }
	inline DateTimeU5BU5D_t1184652292* get__items_1() const { return ____items_1; }
	inline DateTimeU5BU5D_t1184652292** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DateTimeU5BU5D_t1184652292* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t915637231, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t915637231_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DateTimeU5BU5D_t1184652292* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t915637231_StaticFields, ____emptyArray_5)); }
	inline DateTimeU5BU5D_t1184652292* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DateTimeU5BU5D_t1184652292** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DateTimeU5BU5D_t1184652292* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T915637231_H
#ifndef LIST_1_T406394953_H
#define LIST_1_T406394953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.DateTimeOffset>
struct  List_1_t406394953  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeOffsetU5BU5D_t3473357058* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t406394953, ____items_1)); }
	inline DateTimeOffsetU5BU5D_t3473357058* get__items_1() const { return ____items_1; }
	inline DateTimeOffsetU5BU5D_t3473357058** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DateTimeOffsetU5BU5D_t3473357058* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t406394953, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t406394953, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t406394953, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t406394953_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DateTimeOffsetU5BU5D_t3473357058* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t406394953_StaticFields, ____emptyArray_5)); }
	inline DateTimeOffsetU5BU5D_t3473357058* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DateTimeOffsetU5BU5D_t3473357058** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DateTimeOffsetU5BU5D_t3473357058* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T406394953_H
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
#ifndef LIST_1_T1569362707_H
#define LIST_1_T1569362707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_t1569362707  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t2897418192* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____items_1)); }
	inline BooleanU5BU5D_t2897418192* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t2897418192** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t2897418192* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1569362707, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1569362707_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_t2897418192* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1569362707_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_t2897418192* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_t2897418192** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_t2897418192* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1569362707_H
#ifndef XMLVALUECONVERTER_T585560190_H
#define XMLVALUECONVERTER_T585560190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlValueConverter
struct  XmlValueConverter_t585560190  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLVALUECONVERTER_T585560190_H
#ifndef LIST_1_T125366826_H
#define LIST_1_T125366826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Decimal>
struct  List_1_t125366826  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DecimalU5BU5D_t1145110141* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t125366826, ____items_1)); }
	inline DecimalU5BU5D_t1145110141* get__items_1() const { return ____items_1; }
	inline DecimalU5BU5D_t1145110141** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DecimalU5BU5D_t1145110141* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t125366826, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t125366826, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t125366826, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t125366826_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DecimalU5BU5D_t1145110141* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t125366826_StaticFields, ____emptyArray_5)); }
	inline DecimalU5BU5D_t1145110141* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DecimalU5BU5D_t1145110141** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DecimalU5BU5D_t1145110141* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T125366826_H
#ifndef LIST_1_T913674750_H
#define LIST_1_T913674750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int64>
struct  List_1_t913674750  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_t2559172825* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____items_1)); }
	inline Int64U5BU5D_t2559172825* get__items_1() const { return ____items_1; }
	inline Int64U5BU5D_t2559172825** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int64U5BU5D_t2559172825* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t913674750, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t913674750_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int64U5BU5D_t2559172825* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t913674750_StaticFields, ____emptyArray_5)); }
	inline Int64U5BU5D_t2559172825* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int64U5BU5D_t2559172825** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int64U5BU5D_t2559172825* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T913674750_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t2843939325* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t2843939325* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t2843939325** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t2843939325* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t385246372* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t385246372* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t385246372* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T2066740105_H
#define LIST_1_T2066740105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Double>
struct  List_1_t2066740105  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_t3413330114* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2066740105, ____items_1)); }
	inline DoubleU5BU5D_t3413330114* get__items_1() const { return ____items_1; }
	inline DoubleU5BU5D_t3413330114** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DoubleU5BU5D_t3413330114* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2066740105, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2066740105, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2066740105, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2066740105_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_t3413330114* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2066740105_StaticFields, ____emptyArray_5)); }
	inline DoubleU5BU5D_t3413330114* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DoubleU5BU5D_t3413330114** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DoubleU5BU5D_t3413330114* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2066740105_H
#ifndef LIST_1_T4024895129_H
#define LIST_1_T4024895129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int16>
struct  List_1_t4024895129  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int16U5BU5D_t3686840178* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4024895129, ____items_1)); }
	inline Int16U5BU5D_t3686840178* get__items_1() const { return ____items_1; }
	inline Int16U5BU5D_t3686840178** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int16U5BU5D_t3686840178* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4024895129, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4024895129, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4024895129, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4024895129_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int16U5BU5D_t3686840178* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4024895129_StaticFields, ____emptyArray_5)); }
	inline Int16U5BU5D_t3686840178* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int16U5BU5D_t3686840178** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int16U5BU5D_t3686840178* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4024895129_H
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
#ifndef ALIGNMENTUNION_T208902285_H
#define ALIGNMENTUNION_T208902285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
struct  AlignmentUnion_t208902285 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Alignment_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Length_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IfIndex_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IfIndex_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTUNION_T208902285_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef TASKAWAITER_1_T1579621299_H
#define TASKAWAITER_1_T1579621299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t1579621299 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t190679043 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1579621299, ___m_task_0)); }
	inline Task_1_t190679043 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t190679043 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t190679043 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T1579621299_H
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
#ifndef TASKAWAITER_1_T1450460888_H
#define TASKAWAITER_1_T1450460888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct  TaskAwaiter_1_t1450460888 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t61518632 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1450460888, ___m_task_0)); }
	inline Task_1_t61518632 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t61518632 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t61518632 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T1450460888_H
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
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef UILINEINFO_T4195266810_H
#define UILINEINFO_T4195266810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t4195266810 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T4195266810_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
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
#ifndef SEMANTICMEANING_T3533498486_H
#define SEMANTICMEANING_T3533498486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.SemanticMeaning
struct  SemanticMeaning_t3533498486 
{
public:
	// System.String UnityEngine.Windows.Speech.SemanticMeaning::key
	String_t* ___key_0;
	// System.String[] UnityEngine.Windows.Speech.SemanticMeaning::values
	StringU5BU5D_t1281789340* ___values_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(SemanticMeaning_t3533498486, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SemanticMeaning_t3533498486, ___values_1)); }
	inline StringU5BU5D_t1281789340* get_values_1() const { return ___values_1; }
	inline StringU5BU5D_t1281789340** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(StringU5BU5D_t1281789340* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_t3533498486_marshaled_pinvoke
{
	char* ___key_0;
	char** ___values_1;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_t3533498486_marshaled_com
{
	Il2CppChar* ___key_0;
	Il2CppChar** ___values_1;
};
#endif // SEMANTICMEANING_T3533498486_H
#ifndef SEQUENCECONSTRUCTPOSCONTEXT_T2054380699_H
#define SEQUENCECONSTRUCTPOSCONTEXT_T2054380699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct  SequenceConstructPosContext_t2054380699 
{
public:
	// System.Xml.Schema.SequenceNode System.Xml.Schema.SequenceNode/SequenceConstructPosContext::this_
	SequenceNode_t3837141573 * ___this__0;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::firstpos
	BitSet_t1154229585 * ___firstpos_1;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::lastpos
	BitSet_t1154229585 * ___lastpos_2;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::lastposLeft
	BitSet_t1154229585 * ___lastposLeft_3;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode/SequenceConstructPosContext::firstposRight
	BitSet_t1154229585 * ___firstposRight_4;

public:
	inline static int32_t get_offset_of_this__0() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___this__0)); }
	inline SequenceNode_t3837141573 * get_this__0() const { return ___this__0; }
	inline SequenceNode_t3837141573 ** get_address_of_this__0() { return &___this__0; }
	inline void set_this__0(SequenceNode_t3837141573 * value)
	{
		___this__0 = value;
		Il2CppCodeGenWriteBarrier((&___this__0), value);
	}

	inline static int32_t get_offset_of_firstpos_1() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___firstpos_1)); }
	inline BitSet_t1154229585 * get_firstpos_1() const { return ___firstpos_1; }
	inline BitSet_t1154229585 ** get_address_of_firstpos_1() { return &___firstpos_1; }
	inline void set_firstpos_1(BitSet_t1154229585 * value)
	{
		___firstpos_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstpos_1), value);
	}

	inline static int32_t get_offset_of_lastpos_2() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___lastpos_2)); }
	inline BitSet_t1154229585 * get_lastpos_2() const { return ___lastpos_2; }
	inline BitSet_t1154229585 ** get_address_of_lastpos_2() { return &___lastpos_2; }
	inline void set_lastpos_2(BitSet_t1154229585 * value)
	{
		___lastpos_2 = value;
		Il2CppCodeGenWriteBarrier((&___lastpos_2), value);
	}

	inline static int32_t get_offset_of_lastposLeft_3() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___lastposLeft_3)); }
	inline BitSet_t1154229585 * get_lastposLeft_3() const { return ___lastposLeft_3; }
	inline BitSet_t1154229585 ** get_address_of_lastposLeft_3() { return &___lastposLeft_3; }
	inline void set_lastposLeft_3(BitSet_t1154229585 * value)
	{
		___lastposLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___lastposLeft_3), value);
	}

	inline static int32_t get_offset_of_firstposRight_4() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t2054380699, ___firstposRight_4)); }
	inline BitSet_t1154229585 * get_firstposRight_4() const { return ___firstposRight_4; }
	inline BitSet_t1154229585 ** get_address_of_firstposRight_4() { return &___firstposRight_4; }
	inline void set_firstposRight_4(BitSet_t1154229585 * value)
	{
		___firstposRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___firstposRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct SequenceConstructPosContext_t2054380699_marshaled_pinvoke
{
	SequenceNode_t3837141573 * ___this__0;
	BitSet_t1154229585 * ___firstpos_1;
	BitSet_t1154229585 * ___lastpos_2;
	BitSet_t1154229585 * ___lastposLeft_3;
	BitSet_t1154229585 * ___firstposRight_4;
};
// Native definition for COM marshalling of System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct SequenceConstructPosContext_t2054380699_marshaled_com
{
	SequenceNode_t3837141573 * ___this__0;
	BitSet_t1154229585 * ___firstpos_1;
	BitSet_t1154229585 * ___lastpos_2;
	BitSet_t1154229585 * ___lastposLeft_3;
	BitSet_t1154229585 * ___firstposRight_4;
};
#endif // SEQUENCECONSTRUCTPOSCONTEXT_T2054380699_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
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
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
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
#ifndef ARRAYBUILDER_1_T4127036005_H
#define ARRAYBUILDER_1_T4127036005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ArrayBuilder`1<System.Object[]>
struct  ArrayBuilder_1_t4127036005 
{
public:
	// T[] System.Collections.Generic.ArrayBuilder`1::_array
	ObjectU5BU5DU5BU5D_t831815024* ____array_0;
	// System.Int32 System.Collections.Generic.ArrayBuilder`1::_count
	int32_t ____count_1;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t4127036005, ____array_0)); }
	inline ObjectU5BU5DU5BU5D_t831815024* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5DU5BU5D_t831815024** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5DU5BU5D_t831815024* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t4127036005, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYBUILDER_1_T4127036005_H
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
#ifndef RANGEPOSITIONINFO_T589968936_H
#define RANGEPOSITIONINFO_T589968936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.RangePositionInfo
struct  RangePositionInfo_t589968936 
{
public:
	// System.Xml.Schema.BitSet System.Xml.Schema.RangePositionInfo::curpos
	BitSet_t1154229585 * ___curpos_0;
	// System.Decimal[] System.Xml.Schema.RangePositionInfo::rangeCounters
	DecimalU5BU5D_t1145110141* ___rangeCounters_1;

public:
	inline static int32_t get_offset_of_curpos_0() { return static_cast<int32_t>(offsetof(RangePositionInfo_t589968936, ___curpos_0)); }
	inline BitSet_t1154229585 * get_curpos_0() const { return ___curpos_0; }
	inline BitSet_t1154229585 ** get_address_of_curpos_0() { return &___curpos_0; }
	inline void set_curpos_0(BitSet_t1154229585 * value)
	{
		___curpos_0 = value;
		Il2CppCodeGenWriteBarrier((&___curpos_0), value);
	}

	inline static int32_t get_offset_of_rangeCounters_1() { return static_cast<int32_t>(offsetof(RangePositionInfo_t589968936, ___rangeCounters_1)); }
	inline DecimalU5BU5D_t1145110141* get_rangeCounters_1() const { return ___rangeCounters_1; }
	inline DecimalU5BU5D_t1145110141** get_address_of_rangeCounters_1() { return &___rangeCounters_1; }
	inline void set_rangeCounters_1(DecimalU5BU5D_t1145110141* value)
	{
		___rangeCounters_1 = value;
		Il2CppCodeGenWriteBarrier((&___rangeCounters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.RangePositionInfo
struct RangePositionInfo_t589968936_marshaled_pinvoke
{
	BitSet_t1154229585 * ___curpos_0;
	Decimal_t2948259380 * ___rangeCounters_1;
};
// Native definition for COM marshalling of System.Xml.Schema.RangePositionInfo
struct RangePositionInfo_t589968936_marshaled_com
{
	BitSet_t1154229585 * ___curpos_0;
	Decimal_t2948259380 * ___rangeCounters_1;
};
#endif // RANGEPOSITIONINFO_T589968936_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef XMLSCHEMAOBJECTENTRY_T3344676971_H
#define XMLSCHEMAOBJECTENTRY_T3344676971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct  XmlSchemaObjectEntry_t3344676971 
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry::qname
	XmlQualifiedName_t2760654312 * ___qname_0;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry::xso
	XmlSchemaObject_t1315720168 * ___xso_1;

public:
	inline static int32_t get_offset_of_qname_0() { return static_cast<int32_t>(offsetof(XmlSchemaObjectEntry_t3344676971, ___qname_0)); }
	inline XmlQualifiedName_t2760654312 * get_qname_0() const { return ___qname_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_qname_0() { return &___qname_0; }
	inline void set_qname_0(XmlQualifiedName_t2760654312 * value)
	{
		___qname_0 = value;
		Il2CppCodeGenWriteBarrier((&___qname_0), value);
	}

	inline static int32_t get_offset_of_xso_1() { return static_cast<int32_t>(offsetof(XmlSchemaObjectEntry_t3344676971, ___xso_1)); }
	inline XmlSchemaObject_t1315720168 * get_xso_1() const { return ___xso_1; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_xso_1() { return &___xso_1; }
	inline void set_xso_1(XmlSchemaObject_t1315720168 * value)
	{
		___xso_1 = value;
		Il2CppCodeGenWriteBarrier((&___xso_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct XmlSchemaObjectEntry_t3344676971_marshaled_pinvoke
{
	XmlQualifiedName_t2760654312 * ___qname_0;
	XmlSchemaObject_t1315720168 * ___xso_1;
};
// Native definition for COM marshalling of System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry
struct XmlSchemaObjectEntry_t3344676971_marshaled_com
{
	XmlQualifiedName_t2760654312 * ___qname_0;
	XmlSchemaObject_t1315720168 * ___xso_1;
};
#endif // XMLSCHEMAOBJECTENTRY_T3344676971_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef ORDERBLOCK_T1585977831_H
#define ORDERBLOCK_T1585977831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t1585977831 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t3245792599 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___callback_1)); }
	inline UnityAction_t3245792599 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t3245792599 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t3245792599 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T1585977831_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
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
#ifndef ARRAYBUILDER_1_T1104777041_H
#define ARRAYBUILDER_1_T1104777041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ArrayBuilder`1<System.Byte[]>
struct  ArrayBuilder_1_t1104777041 
{
public:
	// T[] System.Collections.Generic.ArrayBuilder`1::_array
	ByteU5BU5DU5BU5D_t457913172* ____array_0;
	// System.Int32 System.Collections.Generic.ArrayBuilder`1::_count
	int32_t ____count_1;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1104777041, ____array_0)); }
	inline ByteU5BU5DU5BU5D_t457913172* get__array_0() const { return ____array_0; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5DU5BU5D_t457913172* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1104777041, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYBUILDER_1_T1104777041_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef FITMODE_T3267881214_H
#define FITMODE_T3267881214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ContentSizeFitter/FitMode
struct  FitMode_t3267881214 
{
public:
	// System.Int32 UnityEngine.UI.ContentSizeFitter/FitMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FitMode_t3267881214, ___value___2)); }
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
#endif // FITMODE_T3267881214_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___2)); }
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
#endif // FILLMETHOD_T1167457570_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___2)); }
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
#endif // INPUTTYPE_T1770400679_H
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___2)); }
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
#endif // LINETYPE_T4214648469_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___2)); }
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
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___2)); }
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
#endif // TYPE_T1152881528_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___2)); }
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
#endif // CONTENTTYPE_T1787303396_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___2)); }
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
#endif // MODE_T1066900953_H
#ifndef INTERNALVERTEXCHANNELTYPE_T299736786_H
#define INTERNALVERTEXCHANNELTYPE_T299736786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t299736786 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t299736786, ___value___2)); }
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
#endif // INTERNALVERTEXCHANNELTYPE_T299736786_H
#ifndef XMLTYPECODE_T2623622950_H
#define XMLTYPECODE_T2623622950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlTypeCode
struct  XmlTypeCode_t2623622950 
{
public:
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlTypeCode_t2623622950, ___value___2)); }
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
#endif // XMLTYPECODE_T2623622950_H
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
#ifndef TASK_T3187275312_H
#define TASK_T3187275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t3187275312  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t1196198384 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t3187275312 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t2170468915 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskScheduler_7)); }
	inline TaskScheduler_t1196198384 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t1196198384 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t1196198384 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_parent_8)); }
	inline Task_t3187275312 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t3187275312 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t3187275312 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_contingentProperties_15)); }
	inline ContingentProperties_t2170468915 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t2170468915 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t2170468915 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t3187275312_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t2660013028 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t2075988643 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t3252573759 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t1600215562 * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t3187275312 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t4012569436 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t3823316192 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t3905400288 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t2660013028 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t2660013028 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t2660013028 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t2075988643 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t2075988643 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t2075988643 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t3252573759 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t3252573759 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t3252573759 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t1600215562 * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t1600215562 ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t1600215562 * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_completedTask_18)); }
	inline Task_t3187275312 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t3187275312 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t3187275312 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_t4012569436 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_t4012569436 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_t4012569436 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t3823316192 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t3823316192 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t3823316192 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t3905400288 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t3905400288 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t3905400288 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t3187275312_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t3187275312 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t1472778820 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t3187275312 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t3187275312 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t3187275312 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t1472778820 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t1472778820 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t1472778820 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T3187275312_H
#ifndef ASPECTMODE_T3417192999_H
#define ASPECTMODE_T3417192999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.AspectRatioFitter/AspectMode
struct  AspectMode_t3417192999 
{
public:
	// System.Int32 UnityEngine.UI.AspectRatioFitter/AspectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AspectMode_t3417192999, ___value___2)); }
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
#endif // ASPECTMODE_T3417192999_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___2)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef INTERNALSHADERCHANNEL_T300897861_H
#define INTERNALSHADERCHANNEL_T300897861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t300897861 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t300897861, ___value___2)); }
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
#endif // INTERNALSHADERCHANNEL_T300897861_H
#ifndef NETWORKINTERFACETYPE_T616418749_H
#define NETWORKINTERFACETYPE_T616418749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_t616418749 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t616418749, ___value___2)); }
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
#endif // NETWORKINTERFACETYPE_T616418749_H
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
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef CASTHELPER_1_T2613165452_H
#define CASTHELPER_1_T2613165452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t2613165452 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTHELPER_1_T2613165452_H
#ifndef KEYVALUEPAIR_2_T870930286_H
#define KEYVALUEPAIR_2_T870930286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct  KeyValuePair_2_t870930286 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_t3738529785  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t870930286, ___key_0)); }
	inline DateTime_t3738529785  get_key_0() const { return ___key_0; }
	inline DateTime_t3738529785 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_t3738529785  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t870930286, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T870930286_H
#ifndef NETBIOSNODETYPE_T3568904212_H
#define NETBIOSNODETYPE_T3568904212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetBiosNodeType
struct  NetBiosNodeType_t3568904212 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetBiosNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetBiosNodeType_t3568904212, ___value___2)); }
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
#endif // NETBIOSNODETYPE_T3568904212_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
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
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};
#endif // ASSEMBLY_T_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
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
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___2)); }
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
#endif // REGEXOPTIONS_T92845595_H
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
#ifndef SSLSTATUS_T191981556_H
#define SSLSTATUS_T191981556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.AppleTls.SslStatus
struct  SslStatus_t191981556 
{
public:
	// System.Int32 Mono.AppleTls.SslStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslStatus_t191981556, ___value___2)); }
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
#endif // SSLSTATUS_T191981556_H
#ifndef DIRECTION_T337909235_H
#define DIRECTION_T337909235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t337909235 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t337909235, ___value___2)); }
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
#endif // DIRECTION_T337909235_H
#ifndef UICHARINFO_T75501106_H
#define UICHARINFO_T75501106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t75501106 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t2156229523  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t75501106, ___cursorPos_0)); }
	inline Vector2_t2156229523  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t2156229523 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t2156229523  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t75501106, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T75501106_H
#ifndef OPERATIONALSTATUS_T2709089529_H
#define OPERATIONALSTATUS_T2709089529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t2709089529 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t2709089529, ___value___2)); }
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
#endif // OPERATIONALSTATUS_T2709089529_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___2)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef DIRECTION_T3470714353_H
#define DIRECTION_T3470714353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Scrollbar/Direction
struct  Direction_t3470714353 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t3470714353, ___value___2)); }
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
#endif // DIRECTION_T3470714353_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___2)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef WIN32_IP_ADDR_STRING_T1213417184_H
#define WIN32_IP_ADDR_STRING_T1213417184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct  Win32_IP_ADDR_STRING_t1213417184 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Next
	intptr_t ___Next_0;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpAddress
	String_t* ___IpAddress_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpMask
	String_t* ___IpMask_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Context
	uint32_t ___Context_3;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Next_0)); }
	inline intptr_t get_Next_0() const { return ___Next_0; }
	inline intptr_t* get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(intptr_t value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_IpAddress_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpAddress_1)); }
	inline String_t* get_IpAddress_1() const { return ___IpAddress_1; }
	inline String_t** get_address_of_IpAddress_1() { return &___IpAddress_1; }
	inline void set_IpAddress_1(String_t* value)
	{
		___IpAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___IpAddress_1), value);
	}

	inline static int32_t get_offset_of_IpMask_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpMask_2)); }
	inline String_t* get_IpMask_2() const { return ___IpMask_2; }
	inline String_t** get_address_of_IpMask_2() { return &___IpMask_2; }
	inline void set_IpMask_2(String_t* value)
	{
		___IpMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___IpMask_2), value);
	}

	inline static int32_t get_offset_of_Context_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Context_3)); }
	inline uint32_t get_Context_3() const { return ___Context_3; }
	inline uint32_t* get_address_of_Context_3() { return &___Context_3; }
	inline void set_Context_3(uint32_t value)
	{
		___Context_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_com
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
#endif // WIN32_IP_ADDR_STRING_T1213417184_H
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
#ifndef LARGEARRAYBUILDER_1_T1044649397_H
#define LARGEARRAYBUILDER_1_T1044649397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LargeArrayBuilder`1<System.Byte>
struct  LargeArrayBuilder_1_t1044649397 
{
public:
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_maxCapacity
	int32_t ____maxCapacity_0;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_first
	ByteU5BU5D_t4116647657* ____first_1;
	// System.Collections.Generic.ArrayBuilder`1<T[]> System.Collections.Generic.LargeArrayBuilder`1::_buffers
	ArrayBuilder_1_t1104777041  ____buffers_2;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_current
	ByteU5BU5D_t4116647657* ____current_3;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_index
	int32_t ____index_4;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_count
	int32_t ____count_5;

public:
	inline static int32_t get_offset_of__maxCapacity_0() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t1044649397, ____maxCapacity_0)); }
	inline int32_t get__maxCapacity_0() const { return ____maxCapacity_0; }
	inline int32_t* get_address_of__maxCapacity_0() { return &____maxCapacity_0; }
	inline void set__maxCapacity_0(int32_t value)
	{
		____maxCapacity_0 = value;
	}

	inline static int32_t get_offset_of__first_1() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t1044649397, ____first_1)); }
	inline ByteU5BU5D_t4116647657* get__first_1() const { return ____first_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__first_1() { return &____first_1; }
	inline void set__first_1(ByteU5BU5D_t4116647657* value)
	{
		____first_1 = value;
		Il2CppCodeGenWriteBarrier((&____first_1), value);
	}

	inline static int32_t get_offset_of__buffers_2() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t1044649397, ____buffers_2)); }
	inline ArrayBuilder_1_t1104777041  get__buffers_2() const { return ____buffers_2; }
	inline ArrayBuilder_1_t1104777041 * get_address_of__buffers_2() { return &____buffers_2; }
	inline void set__buffers_2(ArrayBuilder_1_t1104777041  value)
	{
		____buffers_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t1044649397, ____current_3)); }
	inline ByteU5BU5D_t4116647657* get__current_3() const { return ____current_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(ByteU5BU5D_t4116647657* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t1044649397, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t1044649397, ____count_5)); }
	inline int32_t get__count_5() const { return ____count_5; }
	inline int32_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int32_t value)
	{
		____count_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LARGEARRAYBUILDER_1_T1044649397_H
#ifndef UIVERTEX_T4057497605_H
#define UIVERTEX_T4057497605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t4057497605 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t3722313464  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t3319028937  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t2600501292  ___color_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t2156229523  ___uv0_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t2156229523  ___uv1_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t2156229523  ___uv2_6;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t2156229523  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___normal_1)); }
	inline Vector3_t3722313464  get_normal_1() const { return ___normal_1; }
	inline Vector3_t3722313464 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t3722313464  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___tangent_2)); }
	inline Vector4_t3319028937  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_t3319028937 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_t3319028937  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___color_3)); }
	inline Color32_t2600501292  get_color_3() const { return ___color_3; }
	inline Color32_t2600501292 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_t2600501292  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv0_4)); }
	inline Vector2_t2156229523  get_uv0_4() const { return ___uv0_4; }
	inline Vector2_t2156229523 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector2_t2156229523  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv1_5)); }
	inline Vector2_t2156229523  get_uv1_5() const { return ___uv1_5; }
	inline Vector2_t2156229523 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector2_t2156229523  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv2_6)); }
	inline Vector2_t2156229523  get_uv2_6() const { return ___uv2_6; }
	inline Vector2_t2156229523 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector2_t2156229523  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv3_7)); }
	inline Vector2_t2156229523  get_uv3_7() const { return ___uv3_7; }
	inline Vector2_t2156229523 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector2_t2156229523  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_t4057497605_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t2600501292  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t4057497605  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t2600501292  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t2600501292 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t2600501292  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t4057497605  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t4057497605 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t4057497605  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T4057497605_H
#ifndef LARGEARRAYBUILDER_1_T2990459185_H
#define LARGEARRAYBUILDER_1_T2990459185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LargeArrayBuilder`1<System.Object>
struct  LargeArrayBuilder_1_t2990459185 
{
public:
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_maxCapacity
	int32_t ____maxCapacity_0;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_first
	ObjectU5BU5D_t2843939325* ____first_1;
	// System.Collections.Generic.ArrayBuilder`1<T[]> System.Collections.Generic.LargeArrayBuilder`1::_buffers
	ArrayBuilder_1_t4127036005  ____buffers_2;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_current
	ObjectU5BU5D_t2843939325* ____current_3;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_index
	int32_t ____index_4;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_count
	int32_t ____count_5;

public:
	inline static int32_t get_offset_of__maxCapacity_0() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t2990459185, ____maxCapacity_0)); }
	inline int32_t get__maxCapacity_0() const { return ____maxCapacity_0; }
	inline int32_t* get_address_of__maxCapacity_0() { return &____maxCapacity_0; }
	inline void set__maxCapacity_0(int32_t value)
	{
		____maxCapacity_0 = value;
	}

	inline static int32_t get_offset_of__first_1() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t2990459185, ____first_1)); }
	inline ObjectU5BU5D_t2843939325* get__first_1() const { return ____first_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__first_1() { return &____first_1; }
	inline void set__first_1(ObjectU5BU5D_t2843939325* value)
	{
		____first_1 = value;
		Il2CppCodeGenWriteBarrier((&____first_1), value);
	}

	inline static int32_t get_offset_of__buffers_2() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t2990459185, ____buffers_2)); }
	inline ArrayBuilder_1_t4127036005  get__buffers_2() const { return ____buffers_2; }
	inline ArrayBuilder_1_t4127036005 * get_address_of__buffers_2() { return &____buffers_2; }
	inline void set__buffers_2(ArrayBuilder_1_t4127036005  value)
	{
		____buffers_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t2990459185, ____current_3)); }
	inline ObjectU5BU5D_t2843939325* get__current_3() const { return ____current_3; }
	inline ObjectU5BU5D_t2843939325** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(ObjectU5BU5D_t2843939325* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t2990459185, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_t2990459185, ____count_5)); }
	inline int32_t get__count_5() const { return ____count_5; }
	inline int32_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int32_t value)
	{
		____count_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LARGEARRAYBUILDER_1_T2990459185_H
#ifndef XMLBASECONVERTER_T885945787_H
#define XMLBASECONVERTER_T885945787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlBaseConverter
struct  XmlBaseConverter_t885945787  : public XmlValueConverter_t585560190
{
public:
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t2033747345 * ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t * ___clrTypeDefault_2;

public:
	inline static int32_t get_offset_of_schemaType_0() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787, ___schemaType_0)); }
	inline XmlSchemaType_t2033747345 * get_schemaType_0() const { return ___schemaType_0; }
	inline XmlSchemaType_t2033747345 ** get_address_of_schemaType_0() { return &___schemaType_0; }
	inline void set_schemaType_0(XmlSchemaType_t2033747345 * value)
	{
		___schemaType_0 = value;
		Il2CppCodeGenWriteBarrier((&___schemaType_0), value);
	}

	inline static int32_t get_offset_of_typeCode_1() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787, ___typeCode_1)); }
	inline int32_t get_typeCode_1() const { return ___typeCode_1; }
	inline int32_t* get_address_of_typeCode_1() { return &___typeCode_1; }
	inline void set_typeCode_1(int32_t value)
	{
		___typeCode_1 = value;
	}

	inline static int32_t get_offset_of_clrTypeDefault_2() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787, ___clrTypeDefault_2)); }
	inline Type_t * get_clrTypeDefault_2() const { return ___clrTypeDefault_2; }
	inline Type_t ** get_address_of_clrTypeDefault_2() { return &___clrTypeDefault_2; }
	inline void set_clrTypeDefault_2(Type_t * value)
	{
		___clrTypeDefault_2 = value;
		Il2CppCodeGenWriteBarrier((&___clrTypeDefault_2), value);
	}
};

struct XmlBaseConverter_t885945787_StaticFields
{
public:
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t * ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t * ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t * ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t * ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t * ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t * ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t * ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t * ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t * ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t * ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t * ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t * ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t * ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t * ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t * ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t * ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t * ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t * ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t * ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t * ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t * ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t * ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t * ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t * ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t * ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t * ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t * ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t * ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t * ___XPathNavigatorType_31;

public:
	inline static int32_t get_offset_of_ICollectionType_3() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ICollectionType_3)); }
	inline Type_t * get_ICollectionType_3() const { return ___ICollectionType_3; }
	inline Type_t ** get_address_of_ICollectionType_3() { return &___ICollectionType_3; }
	inline void set_ICollectionType_3(Type_t * value)
	{
		___ICollectionType_3 = value;
		Il2CppCodeGenWriteBarrier((&___ICollectionType_3), value);
	}

	inline static int32_t get_offset_of_IEnumerableType_4() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___IEnumerableType_4)); }
	inline Type_t * get_IEnumerableType_4() const { return ___IEnumerableType_4; }
	inline Type_t ** get_address_of_IEnumerableType_4() { return &___IEnumerableType_4; }
	inline void set_IEnumerableType_4(Type_t * value)
	{
		___IEnumerableType_4 = value;
		Il2CppCodeGenWriteBarrier((&___IEnumerableType_4), value);
	}

	inline static int32_t get_offset_of_IListType_5() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___IListType_5)); }
	inline Type_t * get_IListType_5() const { return ___IListType_5; }
	inline Type_t ** get_address_of_IListType_5() { return &___IListType_5; }
	inline void set_IListType_5(Type_t * value)
	{
		___IListType_5 = value;
		Il2CppCodeGenWriteBarrier((&___IListType_5), value);
	}

	inline static int32_t get_offset_of_ObjectArrayType_6() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ObjectArrayType_6)); }
	inline Type_t * get_ObjectArrayType_6() const { return ___ObjectArrayType_6; }
	inline Type_t ** get_address_of_ObjectArrayType_6() { return &___ObjectArrayType_6; }
	inline void set_ObjectArrayType_6(Type_t * value)
	{
		___ObjectArrayType_6 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectArrayType_6), value);
	}

	inline static int32_t get_offset_of_StringArrayType_7() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___StringArrayType_7)); }
	inline Type_t * get_StringArrayType_7() const { return ___StringArrayType_7; }
	inline Type_t ** get_address_of_StringArrayType_7() { return &___StringArrayType_7; }
	inline void set_StringArrayType_7(Type_t * value)
	{
		___StringArrayType_7 = value;
		Il2CppCodeGenWriteBarrier((&___StringArrayType_7), value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueArrayType_8() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XmlAtomicValueArrayType_8)); }
	inline Type_t * get_XmlAtomicValueArrayType_8() const { return ___XmlAtomicValueArrayType_8; }
	inline Type_t ** get_address_of_XmlAtomicValueArrayType_8() { return &___XmlAtomicValueArrayType_8; }
	inline void set_XmlAtomicValueArrayType_8(Type_t * value)
	{
		___XmlAtomicValueArrayType_8 = value;
		Il2CppCodeGenWriteBarrier((&___XmlAtomicValueArrayType_8), value);
	}

	inline static int32_t get_offset_of_DecimalType_9() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___DecimalType_9)); }
	inline Type_t * get_DecimalType_9() const { return ___DecimalType_9; }
	inline Type_t ** get_address_of_DecimalType_9() { return &___DecimalType_9; }
	inline void set_DecimalType_9(Type_t * value)
	{
		___DecimalType_9 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalType_9), value);
	}

	inline static int32_t get_offset_of_Int32Type_10() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___Int32Type_10)); }
	inline Type_t * get_Int32Type_10() const { return ___Int32Type_10; }
	inline Type_t ** get_address_of_Int32Type_10() { return &___Int32Type_10; }
	inline void set_Int32Type_10(Type_t * value)
	{
		___Int32Type_10 = value;
		Il2CppCodeGenWriteBarrier((&___Int32Type_10), value);
	}

	inline static int32_t get_offset_of_Int64Type_11() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___Int64Type_11)); }
	inline Type_t * get_Int64Type_11() const { return ___Int64Type_11; }
	inline Type_t ** get_address_of_Int64Type_11() { return &___Int64Type_11; }
	inline void set_Int64Type_11(Type_t * value)
	{
		___Int64Type_11 = value;
		Il2CppCodeGenWriteBarrier((&___Int64Type_11), value);
	}

	inline static int32_t get_offset_of_StringType_12() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___StringType_12)); }
	inline Type_t * get_StringType_12() const { return ___StringType_12; }
	inline Type_t ** get_address_of_StringType_12() { return &___StringType_12; }
	inline void set_StringType_12(Type_t * value)
	{
		___StringType_12 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_12), value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueType_13() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XmlAtomicValueType_13)); }
	inline Type_t * get_XmlAtomicValueType_13() const { return ___XmlAtomicValueType_13; }
	inline Type_t ** get_address_of_XmlAtomicValueType_13() { return &___XmlAtomicValueType_13; }
	inline void set_XmlAtomicValueType_13(Type_t * value)
	{
		___XmlAtomicValueType_13 = value;
		Il2CppCodeGenWriteBarrier((&___XmlAtomicValueType_13), value);
	}

	inline static int32_t get_offset_of_ObjectType_14() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ObjectType_14)); }
	inline Type_t * get_ObjectType_14() const { return ___ObjectType_14; }
	inline Type_t ** get_address_of_ObjectType_14() { return &___ObjectType_14; }
	inline void set_ObjectType_14(Type_t * value)
	{
		___ObjectType_14 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_14), value);
	}

	inline static int32_t get_offset_of_ByteType_15() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ByteType_15)); }
	inline Type_t * get_ByteType_15() const { return ___ByteType_15; }
	inline Type_t ** get_address_of_ByteType_15() { return &___ByteType_15; }
	inline void set_ByteType_15(Type_t * value)
	{
		___ByteType_15 = value;
		Il2CppCodeGenWriteBarrier((&___ByteType_15), value);
	}

	inline static int32_t get_offset_of_Int16Type_16() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___Int16Type_16)); }
	inline Type_t * get_Int16Type_16() const { return ___Int16Type_16; }
	inline Type_t ** get_address_of_Int16Type_16() { return &___Int16Type_16; }
	inline void set_Int16Type_16(Type_t * value)
	{
		___Int16Type_16 = value;
		Il2CppCodeGenWriteBarrier((&___Int16Type_16), value);
	}

	inline static int32_t get_offset_of_SByteType_17() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___SByteType_17)); }
	inline Type_t * get_SByteType_17() const { return ___SByteType_17; }
	inline Type_t ** get_address_of_SByteType_17() { return &___SByteType_17; }
	inline void set_SByteType_17(Type_t * value)
	{
		___SByteType_17 = value;
		Il2CppCodeGenWriteBarrier((&___SByteType_17), value);
	}

	inline static int32_t get_offset_of_UInt16Type_18() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___UInt16Type_18)); }
	inline Type_t * get_UInt16Type_18() const { return ___UInt16Type_18; }
	inline Type_t ** get_address_of_UInt16Type_18() { return &___UInt16Type_18; }
	inline void set_UInt16Type_18(Type_t * value)
	{
		___UInt16Type_18 = value;
		Il2CppCodeGenWriteBarrier((&___UInt16Type_18), value);
	}

	inline static int32_t get_offset_of_UInt32Type_19() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___UInt32Type_19)); }
	inline Type_t * get_UInt32Type_19() const { return ___UInt32Type_19; }
	inline Type_t ** get_address_of_UInt32Type_19() { return &___UInt32Type_19; }
	inline void set_UInt32Type_19(Type_t * value)
	{
		___UInt32Type_19 = value;
		Il2CppCodeGenWriteBarrier((&___UInt32Type_19), value);
	}

	inline static int32_t get_offset_of_UInt64Type_20() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___UInt64Type_20)); }
	inline Type_t * get_UInt64Type_20() const { return ___UInt64Type_20; }
	inline Type_t ** get_address_of_UInt64Type_20() { return &___UInt64Type_20; }
	inline void set_UInt64Type_20(Type_t * value)
	{
		___UInt64Type_20 = value;
		Il2CppCodeGenWriteBarrier((&___UInt64Type_20), value);
	}

	inline static int32_t get_offset_of_XPathItemType_21() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XPathItemType_21)); }
	inline Type_t * get_XPathItemType_21() const { return ___XPathItemType_21; }
	inline Type_t ** get_address_of_XPathItemType_21() { return &___XPathItemType_21; }
	inline void set_XPathItemType_21(Type_t * value)
	{
		___XPathItemType_21 = value;
		Il2CppCodeGenWriteBarrier((&___XPathItemType_21), value);
	}

	inline static int32_t get_offset_of_DoubleType_22() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___DoubleType_22)); }
	inline Type_t * get_DoubleType_22() const { return ___DoubleType_22; }
	inline Type_t ** get_address_of_DoubleType_22() { return &___DoubleType_22; }
	inline void set_DoubleType_22(Type_t * value)
	{
		___DoubleType_22 = value;
		Il2CppCodeGenWriteBarrier((&___DoubleType_22), value);
	}

	inline static int32_t get_offset_of_SingleType_23() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___SingleType_23)); }
	inline Type_t * get_SingleType_23() const { return ___SingleType_23; }
	inline Type_t ** get_address_of_SingleType_23() { return &___SingleType_23; }
	inline void set_SingleType_23(Type_t * value)
	{
		___SingleType_23 = value;
		Il2CppCodeGenWriteBarrier((&___SingleType_23), value);
	}

	inline static int32_t get_offset_of_DateTimeType_24() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___DateTimeType_24)); }
	inline Type_t * get_DateTimeType_24() const { return ___DateTimeType_24; }
	inline Type_t ** get_address_of_DateTimeType_24() { return &___DateTimeType_24; }
	inline void set_DateTimeType_24(Type_t * value)
	{
		___DateTimeType_24 = value;
		Il2CppCodeGenWriteBarrier((&___DateTimeType_24), value);
	}

	inline static int32_t get_offset_of_DateTimeOffsetType_25() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___DateTimeOffsetType_25)); }
	inline Type_t * get_DateTimeOffsetType_25() const { return ___DateTimeOffsetType_25; }
	inline Type_t ** get_address_of_DateTimeOffsetType_25() { return &___DateTimeOffsetType_25; }
	inline void set_DateTimeOffsetType_25(Type_t * value)
	{
		___DateTimeOffsetType_25 = value;
		Il2CppCodeGenWriteBarrier((&___DateTimeOffsetType_25), value);
	}

	inline static int32_t get_offset_of_BooleanType_26() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___BooleanType_26)); }
	inline Type_t * get_BooleanType_26() const { return ___BooleanType_26; }
	inline Type_t ** get_address_of_BooleanType_26() { return &___BooleanType_26; }
	inline void set_BooleanType_26(Type_t * value)
	{
		___BooleanType_26 = value;
		Il2CppCodeGenWriteBarrier((&___BooleanType_26), value);
	}

	inline static int32_t get_offset_of_ByteArrayType_27() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___ByteArrayType_27)); }
	inline Type_t * get_ByteArrayType_27() const { return ___ByteArrayType_27; }
	inline Type_t ** get_address_of_ByteArrayType_27() { return &___ByteArrayType_27; }
	inline void set_ByteArrayType_27(Type_t * value)
	{
		___ByteArrayType_27 = value;
		Il2CppCodeGenWriteBarrier((&___ByteArrayType_27), value);
	}

	inline static int32_t get_offset_of_XmlQualifiedNameType_28() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XmlQualifiedNameType_28)); }
	inline Type_t * get_XmlQualifiedNameType_28() const { return ___XmlQualifiedNameType_28; }
	inline Type_t ** get_address_of_XmlQualifiedNameType_28() { return &___XmlQualifiedNameType_28; }
	inline void set_XmlQualifiedNameType_28(Type_t * value)
	{
		___XmlQualifiedNameType_28 = value;
		Il2CppCodeGenWriteBarrier((&___XmlQualifiedNameType_28), value);
	}

	inline static int32_t get_offset_of_UriType_29() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___UriType_29)); }
	inline Type_t * get_UriType_29() const { return ___UriType_29; }
	inline Type_t ** get_address_of_UriType_29() { return &___UriType_29; }
	inline void set_UriType_29(Type_t * value)
	{
		___UriType_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriType_29), value);
	}

	inline static int32_t get_offset_of_TimeSpanType_30() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___TimeSpanType_30)); }
	inline Type_t * get_TimeSpanType_30() const { return ___TimeSpanType_30; }
	inline Type_t ** get_address_of_TimeSpanType_30() { return &___TimeSpanType_30; }
	inline void set_TimeSpanType_30(Type_t * value)
	{
		___TimeSpanType_30 = value;
		Il2CppCodeGenWriteBarrier((&___TimeSpanType_30), value);
	}

	inline static int32_t get_offset_of_XPathNavigatorType_31() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t885945787_StaticFields, ___XPathNavigatorType_31)); }
	inline Type_t * get_XPathNavigatorType_31() const { return ___XPathNavigatorType_31; }
	inline Type_t ** get_address_of_XPathNavigatorType_31() { return &___XPathNavigatorType_31; }
	inline void set_XPathNavigatorType_31(Type_t * value)
	{
		___XPathNavigatorType_31 = value;
		Il2CppCodeGenWriteBarrier((&___XPathNavigatorType_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLBASECONVERTER_T885945787_H
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
#ifndef WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#define WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t3463526328 
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t208902285  ___Alignment_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	intptr_t ___Next_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_2;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	intptr_t ___FirstUnicastAddress_3;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	intptr_t ___FirstAnycastAddress_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	intptr_t ___FirstMulticastAddress_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	intptr_t ___FirstDnsServerAddress_6;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_7;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_8;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_9;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t4116647657* ___PhysicalAddress_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_13;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_14;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_15;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_16;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t2770800703* ___ZoneIndices_17;

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Alignment_0)); }
	inline AlignmentUnion_t208902285  get_Alignment_0() const { return ___Alignment_0; }
	inline AlignmentUnion_t208902285 * get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(AlignmentUnion_t208902285  value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_AdapterName_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___AdapterName_2)); }
	inline String_t* get_AdapterName_2() const { return ___AdapterName_2; }
	inline String_t** get_address_of_AdapterName_2() { return &___AdapterName_2; }
	inline void set_AdapterName_2(String_t* value)
	{
		___AdapterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_2), value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstUnicastAddress_3)); }
	inline intptr_t get_FirstUnicastAddress_3() const { return ___FirstUnicastAddress_3; }
	inline intptr_t* get_address_of_FirstUnicastAddress_3() { return &___FirstUnicastAddress_3; }
	inline void set_FirstUnicastAddress_3(intptr_t value)
	{
		___FirstUnicastAddress_3 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstAnycastAddress_4)); }
	inline intptr_t get_FirstAnycastAddress_4() const { return ___FirstAnycastAddress_4; }
	inline intptr_t* get_address_of_FirstAnycastAddress_4() { return &___FirstAnycastAddress_4; }
	inline void set_FirstAnycastAddress_4(intptr_t value)
	{
		___FirstAnycastAddress_4 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstMulticastAddress_5)); }
	inline intptr_t get_FirstMulticastAddress_5() const { return ___FirstMulticastAddress_5; }
	inline intptr_t* get_address_of_FirstMulticastAddress_5() { return &___FirstMulticastAddress_5; }
	inline void set_FirstMulticastAddress_5(intptr_t value)
	{
		___FirstMulticastAddress_5 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstDnsServerAddress_6)); }
	inline intptr_t get_FirstDnsServerAddress_6() const { return ___FirstDnsServerAddress_6; }
	inline intptr_t* get_address_of_FirstDnsServerAddress_6() { return &___FirstDnsServerAddress_6; }
	inline void set_FirstDnsServerAddress_6(intptr_t value)
	{
		___FirstDnsServerAddress_6 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___DnsSuffix_7)); }
	inline String_t* get_DnsSuffix_7() const { return ___DnsSuffix_7; }
	inline String_t** get_address_of_DnsSuffix_7() { return &___DnsSuffix_7; }
	inline void set_DnsSuffix_7(String_t* value)
	{
		___DnsSuffix_7 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSuffix_7), value);
	}

	inline static int32_t get_offset_of_Description_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Description_8)); }
	inline String_t* get_Description_8() const { return ___Description_8; }
	inline String_t** get_address_of_Description_8() { return &___Description_8; }
	inline void set_Description_8(String_t* value)
	{
		___Description_8 = value;
		Il2CppCodeGenWriteBarrier((&___Description_8), value);
	}

	inline static int32_t get_offset_of_FriendlyName_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FriendlyName_9)); }
	inline String_t* get_FriendlyName_9() const { return ___FriendlyName_9; }
	inline String_t** get_address_of_FriendlyName_9() { return &___FriendlyName_9; }
	inline void set_FriendlyName_9(String_t* value)
	{
		___FriendlyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___FriendlyName_9), value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddress_10)); }
	inline ByteU5BU5D_t4116647657* get_PhysicalAddress_10() const { return ___PhysicalAddress_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysicalAddress_10() { return &___PhysicalAddress_10; }
	inline void set_PhysicalAddress_10(ByteU5BU5D_t4116647657* value)
	{
		___PhysicalAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___PhysicalAddress_10), value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddressLength_11)); }
	inline uint32_t get_PhysicalAddressLength_11() const { return ___PhysicalAddressLength_11; }
	inline uint32_t* get_address_of_PhysicalAddressLength_11() { return &___PhysicalAddressLength_11; }
	inline void set_PhysicalAddressLength_11(uint32_t value)
	{
		___PhysicalAddressLength_11 = value;
	}

	inline static int32_t get_offset_of_Flags_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Flags_12)); }
	inline uint32_t get_Flags_12() const { return ___Flags_12; }
	inline uint32_t* get_address_of_Flags_12() { return &___Flags_12; }
	inline void set_Flags_12(uint32_t value)
	{
		___Flags_12 = value;
	}

	inline static int32_t get_offset_of_Mtu_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Mtu_13)); }
	inline uint32_t get_Mtu_13() const { return ___Mtu_13; }
	inline uint32_t* get_address_of_Mtu_13() { return &___Mtu_13; }
	inline void set_Mtu_13(uint32_t value)
	{
		___Mtu_13 = value;
	}

	inline static int32_t get_offset_of_IfType_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___IfType_14)); }
	inline int32_t get_IfType_14() const { return ___IfType_14; }
	inline int32_t* get_address_of_IfType_14() { return &___IfType_14; }
	inline void set_IfType_14(int32_t value)
	{
		___IfType_14 = value;
	}

	inline static int32_t get_offset_of_OperStatus_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___OperStatus_15)); }
	inline int32_t get_OperStatus_15() const { return ___OperStatus_15; }
	inline int32_t* get_address_of_OperStatus_15() { return &___OperStatus_15; }
	inline void set_OperStatus_15(int32_t value)
	{
		___OperStatus_15 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Ipv6IfIndex_16)); }
	inline int32_t get_Ipv6IfIndex_16() const { return ___Ipv6IfIndex_16; }
	inline int32_t* get_address_of_Ipv6IfIndex_16() { return &___Ipv6IfIndex_16; }
	inline void set_Ipv6IfIndex_16(int32_t value)
	{
		___Ipv6IfIndex_16 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___ZoneIndices_17)); }
	inline UInt32U5BU5D_t2770800703* get_ZoneIndices_17() const { return ___ZoneIndices_17; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ZoneIndices_17() { return &___ZoneIndices_17; }
	inline void set_ZoneIndices_17(UInt32U5BU5D_t2770800703* value)
	{
		___ZoneIndices_17 = value;
		Il2CppCodeGenWriteBarrier((&___ZoneIndices_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_com
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
#endif // WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef WIN32_FIXED_INFO_T1299345856_H
#define WIN32_FIXED_INFO_T1299345856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t1299345856 
{
public:
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_0;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_1;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	intptr_t ___CurrentDnsServer_2;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t1213417184  ___DnsServerList_3;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_8;

public:
	inline static int32_t get_offset_of_HostName_0() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___HostName_0)); }
	inline String_t* get_HostName_0() const { return ___HostName_0; }
	inline String_t** get_address_of_HostName_0() { return &___HostName_0; }
	inline void set_HostName_0(String_t* value)
	{
		___HostName_0 = value;
		Il2CppCodeGenWriteBarrier((&___HostName_0), value);
	}

	inline static int32_t get_offset_of_DomainName_1() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DomainName_1)); }
	inline String_t* get_DomainName_1() const { return ___DomainName_1; }
	inline String_t** get_address_of_DomainName_1() { return &___DomainName_1; }
	inline void set_DomainName_1(String_t* value)
	{
		___DomainName_1 = value;
		Il2CppCodeGenWriteBarrier((&___DomainName_1), value);
	}

	inline static int32_t get_offset_of_CurrentDnsServer_2() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___CurrentDnsServer_2)); }
	inline intptr_t get_CurrentDnsServer_2() const { return ___CurrentDnsServer_2; }
	inline intptr_t* get_address_of_CurrentDnsServer_2() { return &___CurrentDnsServer_2; }
	inline void set_CurrentDnsServer_2(intptr_t value)
	{
		___CurrentDnsServer_2 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_3() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DnsServerList_3)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_DnsServerList_3() const { return ___DnsServerList_3; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_DnsServerList_3() { return &___DnsServerList_3; }
	inline void set_DnsServerList_3(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___DnsServerList_3 = value;
	}

	inline static int32_t get_offset_of_NodeType_4() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___NodeType_4)); }
	inline int32_t get_NodeType_4() const { return ___NodeType_4; }
	inline int32_t* get_address_of_NodeType_4() { return &___NodeType_4; }
	inline void set_NodeType_4(int32_t value)
	{
		___NodeType_4 = value;
	}

	inline static int32_t get_offset_of_ScopeId_5() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___ScopeId_5)); }
	inline String_t* get_ScopeId_5() const { return ___ScopeId_5; }
	inline String_t** get_address_of_ScopeId_5() { return &___ScopeId_5; }
	inline void set_ScopeId_5(String_t* value)
	{
		___ScopeId_5 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_5), value);
	}

	inline static int32_t get_offset_of_EnableRouting_6() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableRouting_6)); }
	inline uint32_t get_EnableRouting_6() const { return ___EnableRouting_6; }
	inline uint32_t* get_address_of_EnableRouting_6() { return &___EnableRouting_6; }
	inline void set_EnableRouting_6(uint32_t value)
	{
		___EnableRouting_6 = value;
	}

	inline static int32_t get_offset_of_EnableProxy_7() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableProxy_7)); }
	inline uint32_t get_EnableProxy_7() const { return ___EnableProxy_7; }
	inline uint32_t* get_address_of_EnableProxy_7() { return &___EnableProxy_7; }
	inline void set_EnableProxy_7(uint32_t value)
	{
		___EnableProxy_7 = value;
	}

	inline static int32_t get_offset_of_EnableDns_8() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableDns_8)); }
	inline uint32_t get_EnableDns_8() const { return ___EnableDns_8; }
	inline uint32_t* get_address_of_EnableDns_8() { return &___EnableDns_8; }
	inline void set_EnableDns_8(uint32_t value)
	{
		___EnableDns_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_pinvoke
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_com
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
#endif // WIN32_FIXED_INFO_T1299345856_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
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
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TASK_1_T190679043_H
#define TASK_1_T190679043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_t190679043  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t190679043, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_t190679043_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3139534710 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2108926 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t190679043_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t3139534710 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t3139534710 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t3139534710 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t190679043_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t2108926 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t2108926 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t2108926 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T190679043_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef TASK_1_T61518632_H
#define TASK_1_T61518632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_t61518632  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t61518632, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t61518632_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3010374299 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t4167915811 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t61518632_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t3010374299 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t3010374299 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t3010374299 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t61518632_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t4167915811 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t4167915811 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t4167915811 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T61518632_H
#ifndef FUNC_1_T2509852811_H
#define FUNC_1_T2509852811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Object>
struct  Func_1_t2509852811  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2509852811_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef EVENTFUNCTION_1_T1764640198_H
#define EVENTFUNCTION_1_T1764640198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct  EventFunction_1_t1764640198  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T1764640198_H
#ifndef CONVERTER_2_T2442480487_H
#define CONVERTER_2_T2442480487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t2442480487  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T2442480487_H
#ifndef FUNC_2_T3759279471_H
#define FUNC_2_T3759279471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t3759279471  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3759279471_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
#ifndef XMLLISTCONVERTER_T3889069996_H
#define XMLLISTCONVERTER_T3889069996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlListConverter
struct  XmlListConverter_t3889069996  : public XmlBaseConverter_t885945787
{
public:
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_t585560190 * ___atomicConverter_32;

public:
	inline static int32_t get_offset_of_atomicConverter_32() { return static_cast<int32_t>(offsetof(XmlListConverter_t3889069996, ___atomicConverter_32)); }
	inline XmlValueConverter_t585560190 * get_atomicConverter_32() const { return ___atomicConverter_32; }
	inline XmlValueConverter_t585560190 ** get_address_of_atomicConverter_32() { return &___atomicConverter_32; }
	inline void set_atomicConverter_32(XmlValueConverter_t585560190 * value)
	{
		___atomicConverter_32 = value;
		Il2CppCodeGenWriteBarrier((&___atomicConverter_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLISTCONVERTER_T3889069996_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef DROPDOWN_T2274391225_H
#define DROPDOWN_T2274391225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown
struct  Dropdown_t2274391225  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t3704657025 * ___m_Template_16;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t1901882714 * ___m_CaptionText_17;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t2670269651 * ___m_CaptionImage_18;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t1901882714 * ___m_ItemText_19;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t2670269651 * ___m_ItemImage_20;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_21;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t1438173104 * ___m_Options_22;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t4040729994 * ___m_OnValueChanged_23;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t1113636619 * ___m_Dropdown_24;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t1113636619 * ___m_Blocker_25;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t2924027637 * ___m_Items_26;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t3520241082 * ___m_AlphaTweenRunner_27;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_28;

public:
	inline static int32_t get_offset_of_m_Template_16() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Template_16)); }
	inline RectTransform_t3704657025 * get_m_Template_16() const { return ___m_Template_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_Template_16() { return &___m_Template_16; }
	inline void set_m_Template_16(RectTransform_t3704657025 * value)
	{
		___m_Template_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Template_16), value);
	}

	inline static int32_t get_offset_of_m_CaptionText_17() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionText_17)); }
	inline Text_t1901882714 * get_m_CaptionText_17() const { return ___m_CaptionText_17; }
	inline Text_t1901882714 ** get_address_of_m_CaptionText_17() { return &___m_CaptionText_17; }
	inline void set_m_CaptionText_17(Text_t1901882714 * value)
	{
		___m_CaptionText_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionText_17), value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_18() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionImage_18)); }
	inline Image_t2670269651 * get_m_CaptionImage_18() const { return ___m_CaptionImage_18; }
	inline Image_t2670269651 ** get_address_of_m_CaptionImage_18() { return &___m_CaptionImage_18; }
	inline void set_m_CaptionImage_18(Image_t2670269651 * value)
	{
		___m_CaptionImage_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionImage_18), value);
	}

	inline static int32_t get_offset_of_m_ItemText_19() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemText_19)); }
	inline Text_t1901882714 * get_m_ItemText_19() const { return ___m_ItemText_19; }
	inline Text_t1901882714 ** get_address_of_m_ItemText_19() { return &___m_ItemText_19; }
	inline void set_m_ItemText_19(Text_t1901882714 * value)
	{
		___m_ItemText_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemText_19), value);
	}

	inline static int32_t get_offset_of_m_ItemImage_20() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemImage_20)); }
	inline Image_t2670269651 * get_m_ItemImage_20() const { return ___m_ItemImage_20; }
	inline Image_t2670269651 ** get_address_of_m_ItemImage_20() { return &___m_ItemImage_20; }
	inline void set_m_ItemImage_20(Image_t2670269651 * value)
	{
		___m_ItemImage_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemImage_20), value);
	}

	inline static int32_t get_offset_of_m_Value_21() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Value_21)); }
	inline int32_t get_m_Value_21() const { return ___m_Value_21; }
	inline int32_t* get_address_of_m_Value_21() { return &___m_Value_21; }
	inline void set_m_Value_21(int32_t value)
	{
		___m_Value_21 = value;
	}

	inline static int32_t get_offset_of_m_Options_22() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Options_22)); }
	inline OptionDataList_t1438173104 * get_m_Options_22() const { return ___m_Options_22; }
	inline OptionDataList_t1438173104 ** get_address_of_m_Options_22() { return &___m_Options_22; }
	inline void set_m_Options_22(OptionDataList_t1438173104 * value)
	{
		___m_Options_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_Options_22), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_OnValueChanged_23)); }
	inline DropdownEvent_t4040729994 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline DropdownEvent_t4040729994 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(DropdownEvent_t4040729994 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_Dropdown_24() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Dropdown_24)); }
	inline GameObject_t1113636619 * get_m_Dropdown_24() const { return ___m_Dropdown_24; }
	inline GameObject_t1113636619 ** get_address_of_m_Dropdown_24() { return &___m_Dropdown_24; }
	inline void set_m_Dropdown_24(GameObject_t1113636619 * value)
	{
		___m_Dropdown_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dropdown_24), value);
	}

	inline static int32_t get_offset_of_m_Blocker_25() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Blocker_25)); }
	inline GameObject_t1113636619 * get_m_Blocker_25() const { return ___m_Blocker_25; }
	inline GameObject_t1113636619 ** get_address_of_m_Blocker_25() { return &___m_Blocker_25; }
	inline void set_m_Blocker_25(GameObject_t1113636619 * value)
	{
		___m_Blocker_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_Blocker_25), value);
	}

	inline static int32_t get_offset_of_m_Items_26() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Items_26)); }
	inline List_1_t2924027637 * get_m_Items_26() const { return ___m_Items_26; }
	inline List_1_t2924027637 ** get_address_of_m_Items_26() { return &___m_Items_26; }
	inline void set_m_Items_26(List_1_t2924027637 * value)
	{
		___m_Items_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Items_26), value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_27() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_AlphaTweenRunner_27)); }
	inline TweenRunner_1_t3520241082 * get_m_AlphaTweenRunner_27() const { return ___m_AlphaTweenRunner_27; }
	inline TweenRunner_1_t3520241082 ** get_address_of_m_AlphaTweenRunner_27() { return &___m_AlphaTweenRunner_27; }
	inline void set_m_AlphaTweenRunner_27(TweenRunner_1_t3520241082 * value)
	{
		___m_AlphaTweenRunner_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlphaTweenRunner_27), value);
	}

	inline static int32_t get_offset_of_validTemplate_28() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___validTemplate_28)); }
	inline bool get_validTemplate_28() const { return ___validTemplate_28; }
	inline bool* get_address_of_validTemplate_28() { return &___validTemplate_28; }
	inline void set_validTemplate_28(bool value)
	{
		___validTemplate_28 = value;
	}
};

struct Dropdown_t2274391225_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t3270282352 * ___s_NoOptionData_29;

public:
	inline static int32_t get_offset_of_s_NoOptionData_29() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225_StaticFields, ___s_NoOptionData_29)); }
	inline OptionData_t3270282352 * get_s_NoOptionData_29() const { return ___s_NoOptionData_29; }
	inline OptionData_t3270282352 ** get_address_of_s_NoOptionData_29() { return &___s_NoOptionData_29; }
	inline void set_s_NoOptionData_29(OptionData_t3270282352 * value)
	{
		___s_NoOptionData_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_NoOptionData_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPDOWN_T2274391225_H
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
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>[]
struct KeyValuePair_2U5BU5D_t2069718811  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t870930286  m_Items[1];

public:
	inline KeyValuePair_2_t870930286  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t870930286 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t870930286  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t870930286  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t870930286 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t870930286  value)
	{
		m_Items[index] = value;
	}
};
// System.DateTime[]
struct DateTimeU5BU5D_t1184652292  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTime_t3738529785  m_Items[1];

public:
	inline DateTime_t3738529785  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t3738529785 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t3738529785  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t3738529785  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t3738529785 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t3738529785  value)
	{
		m_Items[index] = value;
	}
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTimeOffset_t3229287507  m_Items[1];

public:
	inline DateTimeOffset_t3229287507  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t3229287507  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		m_Items[index] = value;
	}
};
// System.Decimal[]
struct DecimalU5BU5D_t1145110141  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Decimal_t2948259380  m_Items[1];

public:
	inline Decimal_t2948259380  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decimal_t2948259380 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decimal_t2948259380  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Decimal_t2948259380  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decimal_t2948259380 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decimal_t2948259380  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
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
// System.Int16[]
struct Int16U5BU5D_t3686840178  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
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
// System.Int64[]
struct Int64U5BU5D_t2559172825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[]
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Win32_IP_ADAPTER_ADDRESSES_t3463526328  m_Items[1];

public:
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		m_Items[index] = value;
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
// System.SByte[]
struct SByteU5BU5D_t2651576203  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.Text.RegularExpressions.RegexOptions[]
struct RegexOptionsU5BU5D_t160358170  : public RuntimeArray
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
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_t881159249  m_Items[1];

public:
	inline TimeSpan_t881159249  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t881159249  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t881159249  value)
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
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t1659327989  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Schema.RangePositionInfo[]
struct RangePositionInfoU5BU5D_t242328633  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RangePositionInfo_t589968936  m_Items[1];

public:
	inline RangePositionInfo_t589968936  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RangePositionInfo_t589968936 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RangePositionInfo_t589968936  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RangePositionInfo_t589968936  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RangePositionInfo_t589968936 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RangePositionInfo_t589968936  value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry[]
struct XmlSchemaObjectEntryU5BU5D_t1655208330  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XmlSchemaObjectEntry_t3344676971  m_Items[1];

public:
	inline XmlSchemaObjectEntry_t3344676971  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlSchemaObjectEntry_t3344676971 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlSchemaObjectEntry_t3344676971  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XmlSchemaObjectEntry_t3344676971  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlSchemaObjectEntry_t3344676971 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlSchemaObjectEntry_t3344676971  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t2389202590  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OrderBlock_t1585977831  m_Items[1];

public:
	inline OrderBlock_t1585977831  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t1585977831 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t1585977831  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OrderBlock_t1585977831  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t1585977831 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t1585977831  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t1128832444  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastResult_t3360306849  m_Items[1];

public:
	inline RaycastResult_t3360306849  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastResult_t3360306849 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastResult_t3360306849  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastResult_t3360306849  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastResult_t3360306849 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastResult_t3360306849  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t928762055  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UICharInfo_t75501106  m_Items[1];

public:
	inline UICharInfo_t75501106  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UICharInfo_t75501106 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UICharInfo_t75501106  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UICharInfo_t75501106  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UICharInfo_t75501106 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UICharInfo_t75501106  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1655937503  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UILineInfo_t4195266810  m_Items[1];

public:
	inline UILineInfo_t4195266810  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UILineInfo_t4195266810 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UILineInfo_t4195266810  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UILineInfo_t4195266810  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UILineInfo_t4195266810 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UILineInfo_t4195266810  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIVertex_t4057497605  m_Items[1];

public:
	inline UIVertex_t4057497605  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_t4057497605 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_t4057497605  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_t4057497605  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_t4057497605 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_t4057497605  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_t3319028937  m_Items[1];

public:
	inline Vector4_t3319028937  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t3319028937  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		m_Items[index] = value;
	}
};
// Mono.AppleTls.SslStatus[]
struct SslStatusU5BU5D_t3256112573  : public RuntimeArray
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
// System.Xml.Schema.SequenceNode/SequenceConstructPosContext[]
struct SequenceConstructPosContextU5BU5D_t615009946  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SequenceConstructPosContext_t2054380699  m_Items[1];

public:
	inline SequenceConstructPosContext_t2054380699  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SequenceConstructPosContext_t2054380699 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SequenceConstructPosContext_t2054380699  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SequenceConstructPosContext_t2054380699  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SequenceConstructPosContext_t2054380699 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SequenceConstructPosContext_t2054380699  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_t3723878365  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WorkRequest_t1354518612  m_Items[1];

public:
	inline WorkRequest_t1354518612  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t1354518612 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t1354518612  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WorkRequest_t1354518612  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t1354518612 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t1354518612  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t287865710  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t287865710  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t287865710  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t2723150157  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t2723150157  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t2723150157  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Byte>::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LargeArrayBuilder_1__ctor_m208055018_gshared (LargeArrayBuilder_1_t1044649397 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" IL2CPP_METHOD_ATTR void LargeArrayBuilder_1_AddRange_m2616601375_gshared (LargeArrayBuilder_1_t1044649397 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Byte>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* LargeArrayBuilder_1_ToArray_m2037294919_gshared (LargeArrayBuilder_1_t1044649397 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LargeArrayBuilder_1__ctor_m104969882_gshared (LargeArrayBuilder_1_t2990459185 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" IL2CPP_METHOD_ATTR void LargeArrayBuilder_1_AddRange_m1159522811_gshared (LargeArrayBuilder_1_t2990459185 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* LargeArrayBuilder_1_ToArray_m390648332_gshared (LargeArrayBuilder_1_t2990459185 * __this, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m3496793423_gshared (TaskAwaiter_1_t1450460888 * __this, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m3577040539_gshared (TaskAwaiter_1_t1579621299 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Int32 System.Array::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method);
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.Assembly,System.Type)
extern "C" IL2CPP_METHOD_ATTR Attribute_t861562559 * CustomAttributeExtensions_GetCustomAttribute_m2805223115 (RuntimeObject * __this /* static, unused */, Assembly_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_m771949023 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m2063689938 (RuntimeObject * __this /* static, unused */, String_t* ___key0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m3384658186 (intptr_t* __this, void* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Component_GetComponentFastPath_m1180649031 (Component_t1923634451 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * Component_GetComponentInChildren_m388868270 (Component_t1923634451 * __this, Type_t * ___t0, bool ___includeInactive1, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * Component_GetComponentInParent_m779177818 (Component_t1923634451 * __this, Type_t * ___t0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * GameObject_AddComponent_m136524825 (GameObject_t1113636619 * __this, Type_t * ___componentType0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GameObject_GetComponentFastPath_m2620139331 (GameObject_t1113636619 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * GameObject_GetComponentInChildren_m2567799249 (GameObject_t1113636619 * __this, Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4237608654 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Object_Internal_CloneSingle_m1021157572 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___data0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Resources_GetBuiltinResource_m3641967638 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___path1, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_m3714848183 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Byte>::.ctor(System.Boolean)
#define LargeArrayBuilder_1__ctor_m208055018(__this, p0, method) ((  void (*) (LargeArrayBuilder_1_t1044649397 *, bool, const RuntimeMethod*))LargeArrayBuilder_1__ctor_m208055018_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define LargeArrayBuilder_1_AddRange_m2616601375(__this, p0, method) ((  void (*) (LargeArrayBuilder_1_t1044649397 *, RuntimeObject*, const RuntimeMethod*))LargeArrayBuilder_1_AddRange_m2616601375_gshared)(__this, p0, method)
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Byte>::ToArray()
#define LargeArrayBuilder_1_ToArray_m2037294919(__this, method) ((  ByteU5BU5D_t4116647657* (*) (LargeArrayBuilder_1_t1044649397 *, const RuntimeMethod*))LargeArrayBuilder_1_ToArray_m2037294919_gshared)(__this, method)
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
#define LargeArrayBuilder_1__ctor_m104969882(__this, p0, method) ((  void (*) (LargeArrayBuilder_1_t2990459185 *, bool, const RuntimeMethod*))LargeArrayBuilder_1__ctor_m104969882_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define LargeArrayBuilder_1_AddRange_m1159522811(__this, p0, method) ((  void (*) (LargeArrayBuilder_1_t2990459185 *, RuntimeObject*, const RuntimeMethod*))LargeArrayBuilder_1_AddRange_m1159522811_gshared)(__this, p0, method)
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
#define LargeArrayBuilder_1_ToArray_m390648332(__this, method) ((  ObjectU5BU5D_t2843939325* (*) (LargeArrayBuilder_1_t2990459185 *, const RuntimeMethod*))LargeArrayBuilder_1_ToArray_m390648332_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_m4006738154 (GameObject_t1113636619 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C" IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_m576040980 (RuntimeObject * __this /* static, unused */, int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C" IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m2239225054 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C" IL2CPP_METHOD_ATTR bool Mesh_HasChannel_m4256962133 (Mesh_t3648964284 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m3084065604 (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C" IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2109128075 (Mesh_t3648964284 * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Void System.IO.__Error::WrongAsyncResult()
extern "C" IL2CPP_METHOD_ATTR void __Error_WrongAsyncResult_m4181844776 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
#define TaskAwaiter_1_GetResult_m3496793423(__this, method) ((  int32_t (*) (TaskAwaiter_1_t1450460888 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3496793423_gshared)(__this, method)
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
#define TaskAwaiter_1_GetResult_m3577040539(__this, method) ((  RuntimeObject * (*) (TaskAwaiter_1_t1579621299 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3577040539_gshared)(__this, method)
// System.Exception System.Linq.Error::ArgumentNull(System.String)
extern "C" IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_m219206370 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::MoreThanOneMatch()
extern "C" IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneMatch_m2666736739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C" IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m2404658789 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m2402360903(__this, p0, method) ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m3543896146(__this, method) ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR HitInfo_t3229609740  Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t3229609740  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisHitInfo_t3229609740_m2347572902_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (HitInfo_t3229609740 *)(HitInfo_t3229609740 *)(&V_0));
		HitInfo_t3229609740  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.TouchScreenKeyboardType>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisTouchScreenKeyboardType_t1530597702_m1814313867_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisTouchScreenKeyboardType_t1530597702_m1814313867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisTouchScreenKeyboardType_t1530597702_m1814313867_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.AspectRatioFitter/AspectMode>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisAspectMode_t3417192999_m813884768_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisAspectMode_t3417192999_m813884768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisAspectMode_t3417192999_m813884768_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.ColorBlock>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColorBlock_t2139031574  Array_InternalArray__IReadOnlyList_get_Item_TisColorBlock_t2139031574_m39371088_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisColorBlock_t2139031574_m39371088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColorBlock_t2139031574  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisColorBlock_t2139031574_m39371088_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ColorBlock_t2139031574 *)(ColorBlock_t2139031574 *)(&V_0));
		ColorBlock_t2139031574  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.ContentSizeFitter/FitMode>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisFitMode_t3267881214_m2951553158_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisFitMode_t3267881214_m2951553158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisFitMode_t3267881214_m2951553158_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.Image/FillMethod>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisFillMethod_t1167457570_m2773281980_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisFillMethod_t1167457570_m2773281980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisFillMethod_t1167457570_m2773281980_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.Image/Type>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisType_t1152881528_m2039773256_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisType_t1152881528_m2039773256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisType_t1152881528_m2039773256_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.InputField/CharacterValidation>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisCharacterValidation_t4051914437_m1884588624_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisCharacterValidation_t4051914437_m1884588624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisCharacterValidation_t4051914437_m1884588624_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisContentType_t1787303396_m1125918082_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisContentType_t1787303396_m1125918082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisContentType_t1787303396_m1125918082_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.InputField/InputType>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisInputType_t1770400679_m2568024483_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisInputType_t1770400679_m2568024483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisInputType_t1770400679_m2568024483_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.InputField/LineType>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisLineType_t4214648469_m2725017131_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisLineType_t4214648469_m2725017131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisLineType_t4214648469_m2725017131_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.Navigation>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Navigation_t3049316579  Array_InternalArray__IReadOnlyList_get_Item_TisNavigation_t3049316579_m2244158177_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisNavigation_t3049316579_m2244158177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Navigation_t3049316579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisNavigation_t3049316579_m2244158177_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Navigation_t3049316579 *)(Navigation_t3049316579 *)(&V_0));
		Navigation_t3049316579  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.Scrollbar/Direction>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t3470714353_m1060680375_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t3470714353_m1060680375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t3470714353_m1060680375_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.Selectable/Transition>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisTransition_t1769908631_m1057654687_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisTransition_t1769908631_m1057654687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisTransition_t1769908631_m1057654687_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.Slider/Direction>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t337909235_m518466143_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t337909235_m518466143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisDirection_t337909235_m518466143_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UI.SpriteState>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SpriteState_t1362986479  Array_InternalArray__IReadOnlyList_get_Item_TisSpriteState_t1362986479_m2971757129_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisSpriteState_t1362986479_m2971757129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpriteState_t1362986479  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisSpriteState_t1362986479_m2971757129_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (SpriteState_t1362986479 *)(SpriteState_t1362986479 *)(&V_0));
		SpriteState_t1362986479  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UICharInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR UICharInfo_t75501106  Array_InternalArray__IReadOnlyList_get_Item_TisUICharInfo_t75501106_m2335664289_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisUICharInfo_t75501106_m2335664289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UICharInfo_t75501106  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisUICharInfo_t75501106_m2335664289_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UICharInfo_t75501106 *)(UICharInfo_t75501106 *)(&V_0));
		UICharInfo_t75501106  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UILineInfo>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR UILineInfo_t4195266810  Array_InternalArray__IReadOnlyList_get_Item_TisUILineInfo_t4195266810_m1189106026_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisUILineInfo_t4195266810_m1189106026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UILineInfo_t4195266810  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisUILineInfo_t4195266810_m1189106026_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UILineInfo_t4195266810 *)(UILineInfo_t4195266810 *)(&V_0));
		UILineInfo_t4195266810  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UIVertex>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR UIVertex_t4057497605  Array_InternalArray__IReadOnlyList_get_Item_TisUIVertex_t4057497605_m1280704486_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisUIVertex_t4057497605_m1280704486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UIVertex_t4057497605  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisUIVertex_t4057497605_m1280704486_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UIVertex_t4057497605 *)(UIVertex_t4057497605 *)(&V_0));
		UIVertex_t4057497605  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR WorkRequest_t1354518612  Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkRequest_t1354518612  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisWorkRequest_t1354518612_m3429665912_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WorkRequest_t1354518612 *)(WorkRequest_t1354518612 *)(&V_0));
		WorkRequest_t1354518612  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.Vector2>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Array_InternalArray__IReadOnlyList_get_Item_TisVector2_t2156229523_m182881471_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisVector2_t2156229523_m182881471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisVector2_t2156229523_m182881471_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector2_t2156229523 *)(Vector2_t2156229523 *)(&V_0));
		Vector2_t2156229523  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.Vector3>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Array_InternalArray__IReadOnlyList_get_Item_TisVector3_t3722313464_m321227951_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisVector3_t3722313464_m321227951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisVector3_t3722313464_m321227951_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector3_t3722313464 *)(Vector3_t3722313464 *)(&V_0));
		Vector3_t3722313464  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.Vector4>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Array_InternalArray__IReadOnlyList_get_Item_TisVector4_t3319028937_m2130480280_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisVector4_t3319028937_m2130480280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisVector4_t3319028937_m2130480280_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector4_t3319028937 *)(Vector4_t3319028937 *)(&V_0));
		Vector4_t3319028937  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__IReadOnlyList_get_Item<UnityEngine.Windows.Speech.SemanticMeaning>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SemanticMeaning_t3533498486  Array_InternalArray__IReadOnlyList_get_Item_TisSemanticMeaning_t3533498486_m1690385756_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__IReadOnlyList_get_Item_TisSemanticMeaning_t3533498486_m1690385756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SemanticMeaning_t3533498486  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Array_InternalArray__IReadOnlyList_get_Item_TisSemanticMeaning_t3533498486_m1690385756_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (SemanticMeaning_t3533498486 *)(SemanticMeaning_t3533498486 *)(&V_0));
		SemanticMeaning_t3533498486  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::UnsafeLoad<System.Boolean>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Array_UnsafeLoad_TisBoolean_t97287965_m4116378621_gshared (RuntimeObject * __this /* static, unused */, BooleanU5BU5D_t2897418192* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		BooleanU5BU5D_t2897418192* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		bool L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Byte>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t Array_UnsafeLoad_TisByte_t1134296376_m1784857405_gshared (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Char>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Array_UnsafeLoad_TisChar_t3634460470_m3470172794_gshared (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Il2CppChar L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t870930286  Array_UnsafeLoad_TisKeyValuePair_2_t870930286_m4068227996_gshared (RuntimeObject * __this /* static, unused */, KeyValuePair_2U5BU5D_t2069718811* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t2069718811* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		KeyValuePair_2_t870930286  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.DateTime>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Array_UnsafeLoad_TisDateTime_t3738529785_m1778205872_gshared (RuntimeObject * __this /* static, unused */, DateTimeU5BU5D_t1184652292* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		DateTimeU5BU5D_t1184652292* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		DateTime_t3738529785  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.DateTimeOffset>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  Array_UnsafeLoad_TisDateTimeOffset_t3229287507_m2817945770_gshared (RuntimeObject * __this /* static, unused */, DateTimeOffsetU5BU5D_t3473357058* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		DateTimeOffsetU5BU5D_t3473357058* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		DateTimeOffset_t3229287507  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Decimal>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Array_UnsafeLoad_TisDecimal_t2948259380_m2909934722_gshared (RuntimeObject * __this /* static, unused */, DecimalU5BU5D_t1145110141* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		DecimalU5BU5D_t1145110141* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Decimal_t2948259380  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Double>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Array_UnsafeLoad_TisDouble_t594665363_m2721017048_gshared (RuntimeObject * __this /* static, unused */, DoubleU5BU5D_t3413330114* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		DoubleU5BU5D_t3413330114* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		double L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int16>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int16_t Array_UnsafeLoad_TisInt16_t2552820387_m4054917194_gshared (RuntimeObject * __this /* static, unused */, Int16U5BU5D_t3686840178* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int16U5BU5D_t3686840178* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int32>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_UnsafeLoad_TisInt32_t2950945753_m3748710844_gshared (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t385246372* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int64>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t Array_UnsafeLoad_TisInt64_t3736567304_m253327233_gshared (RuntimeObject * __this /* static, unused */, Int64U5BU5D_t2559172825* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int64U5BU5D_t2559172825* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Win32_IP_ADAPTER_ADDRESSES_t3463526328  Array_UnsafeLoad_TisWin32_IP_ADAPTER_ADDRESSES_t3463526328_m3535701914_gshared (RuntimeObject * __this /* static, unused */, Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Win32_IP_ADAPTER_ADDRESSESU5BU5D_t3385662057* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Win32_IP_ADAPTER_ADDRESSES_t3463526328  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Object>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_UnsafeLoad_TisRuntimeObject_m2315037888_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.SByte>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int8_t Array_UnsafeLoad_TisSByte_t1669577662_m1148738187_gshared (RuntimeObject * __this /* static, unused */, SByteU5BU5D_t2651576203* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		SByteU5BU5D_t2651576203* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Single>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Array_UnsafeLoad_TisSingle_t1397266774_m256462809_gshared (RuntimeObject * __this /* static, unused */, SingleU5BU5D_t1444911251* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_t1444911251* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Text.RegularExpressions.RegexOptions>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_UnsafeLoad_TisRegexOptions_t92845595_m3371636671_gshared (RuntimeObject * __this /* static, unused */, RegexOptionsU5BU5D_t160358170* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RegexOptionsU5BU5D_t160358170* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.TimeSpan>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  Array_UnsafeLoad_TisTimeSpan_t881159249_m4284443576_gshared (RuntimeObject * __this /* static, unused */, TimeSpanU5BU5D_t4291357516* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		TimeSpanU5BU5D_t4291357516* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TimeSpan_t881159249  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.UInt16>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint16_t Array_UnsafeLoad_TisUInt16_t2177724958_m137633933_gshared (RuntimeObject * __this /* static, unused */, UInt16U5BU5D_t3326319531* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UInt16U5BU5D_t3326319531* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.UInt32>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint32_t Array_UnsafeLoad_TisUInt32_t2560061978_m1933780967_gshared (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UInt32U5BU5D_t2770800703* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.UInt64>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint64_t Array_UnsafeLoad_TisUInt64_t4134040092_m601078984_gshared (RuntimeObject * __this /* static, unused */, UInt64U5BU5D_t1659327989* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UInt64U5BU5D_t1659327989* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint64_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Xml.Schema.RangePositionInfo>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RangePositionInfo_t589968936  Array_UnsafeLoad_TisRangePositionInfo_t589968936_m3859971865_gshared (RuntimeObject * __this /* static, unused */, RangePositionInfoU5BU5D_t242328633* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RangePositionInfoU5BU5D_t242328633* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RangePositionInfo_t589968936  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR XmlSchemaObjectEntry_t3344676971  Array_UnsafeLoad_TisXmlSchemaObjectEntry_t3344676971_m3793754449_gshared (RuntimeObject * __this /* static, unused */, XmlSchemaObjectEntryU5BU5D_t1655208330* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		XmlSchemaObjectEntryU5BU5D_t1655208330* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		XmlSchemaObjectEntry_t3344676971  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.BeforeRenderHelper/OrderBlock>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR OrderBlock_t1585977831  Array_UnsafeLoad_TisOrderBlock_t1585977831_m3469429553_gshared (RuntimeObject * __this /* static, unused */, OrderBlockU5BU5D_t2389202590* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		OrderBlockU5BU5D_t2389202590* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		OrderBlock_t1585977831  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.Color32>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Color32_t2600501292  Array_UnsafeLoad_TisColor32_t2600501292_m2128701277_gshared (RuntimeObject * __this /* static, unused */, Color32U5BU5D_t3850468773* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Color32U5BU5D_t3850468773* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Color32_t2600501292  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.EventSystems.RaycastResult>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastResult_t3360306849  Array_UnsafeLoad_TisRaycastResult_t3360306849_m2618696119_gshared (RuntimeObject * __this /* static, unused */, RaycastResultU5BU5D_t1128832444* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		RaycastResultU5BU5D_t1128832444* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RaycastResult_t3360306849  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.UICharInfo>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR UICharInfo_t75501106  Array_UnsafeLoad_TisUICharInfo_t75501106_m2614895110_gshared (RuntimeObject * __this /* static, unused */, UICharInfoU5BU5D_t928762055* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UICharInfoU5BU5D_t928762055* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UICharInfo_t75501106  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.UILineInfo>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR UILineInfo_t4195266810  Array_UnsafeLoad_TisUILineInfo_t4195266810_m1874012595_gshared (RuntimeObject * __this /* static, unused */, UILineInfoU5BU5D_t1655937503* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UILineInfoU5BU5D_t1655937503* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UILineInfo_t4195266810  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.UIVertex>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR UIVertex_t4057497605  Array_UnsafeLoad_TisUIVertex_t4057497605_m4292457783_gshared (RuntimeObject * __this /* static, unused */, UIVertexU5BU5D_t1981460040* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		UIVertexU5BU5D_t1981460040* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		UIVertex_t4057497605  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.Vector2>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Array_UnsafeLoad_TisVector2_t2156229523_m1964103660_gshared (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t1457185986* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Vector2U5BU5D_t1457185986* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector2_t2156229523  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.Vector3>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Array_UnsafeLoad_TisVector3_t3722313464_m1885782093_gshared (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t1718750761* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_t1718750761* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector3_t3722313464  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.Vector4>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Array_UnsafeLoad_TisVector4_t3319028937_m1672017758_gshared (RuntimeObject * __this /* static, unused */, Vector4U5BU5D_t934056436* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Vector4U5BU5D_t934056436* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector4_t3319028937  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.Assembly)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m3561972549_gshared (RuntimeObject * __this /* static, unused */, Assembly_t * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m3561972549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Assembly_t * L_0 = ___element0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		Attribute_t861562559 * L_3 = CustomAttributeExtensions_GetCustomAttribute_m2805223115(NULL /*static, unused*/, (Assembly_t *)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T System.Runtime.CompilerServices.JitHelpers::UnsafeCast<System.Object>(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JitHelpers_UnsafeCast_TisRuntimeObject_m33382438_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T System.Runtime.InteropServices.Marshal::PtrToStructure<System.Net.NetworkInformation.Win32_FIXED_INFO>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR Win32_FIXED_INFO_t1299345856  Marshal_PtrToStructure_TisWin32_FIXED_INFO_t1299345856_m4277728215_gshared (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Marshal_PtrToStructure_TisWin32_FIXED_INFO_t1299345856_m4277728215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, (intptr_t)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((*(Win32_FIXED_INFO_t1299345856 *)((Win32_FIXED_INFO_t1299345856 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}
}
// T System.Runtime.InteropServices.Marshal::PtrToStructure<System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR Win32_IP_ADAPTER_ADDRESSES_t3463526328  Marshal_PtrToStructure_TisWin32_IP_ADAPTER_ADDRESSES_t3463526328_m266777785_gshared (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Marshal_PtrToStructure_TisWin32_IP_ADAPTER_ADDRESSES_t3463526328_m266777785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, (intptr_t)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((*(Win32_IP_ADAPTER_ADDRESSES_t3463526328 *)((Win32_IP_ADAPTER_ADDRESSES_t3463526328 *)UnBox(L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}
}
// T System.Runtime.InteropServices.Marshal::PtrToStructure<System.Object>(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_TisRuntimeObject_m12685913_gshared (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Marshal_PtrToStructure_TisRuntimeObject_m12685913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, (intptr_t)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitialized_TisRuntimeObject_m2889131792_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject ** ___target0, Func_1_t2509852811 * ___valueFactory1, const RuntimeMethod* method)
{
	{
		RuntimeObject ** L_0 = ___target0;
		RuntimeObject * L_1 = VolatileRead((RuntimeObject **)(RuntimeObject **)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		return (*(RuntimeObject **)L_2);
	}

IL_0014:
	{
		RuntimeObject ** L_3 = ___target0;
		Func_1_t2509852811 * L_4 = ___valueFactory1;
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject **, Func_1_t2509852811 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (RuntimeObject **)(RuntimeObject **)L_3, (Func_1_t2509852811 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Func`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject ** ___target0, Func_1_t2509852811 * ___valueFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Func_1_t2509852811 * L_0 = ___valueFactory1;
		NullCheck((Func_1_t2509852811 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (Func_1_t2509852811 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_1_t2509852811 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = Environment_GetResourceString_m2063689938(NULL /*static, unused*/, (String_t*)_stringLiteral2654205466, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_4 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m3224443177_RuntimeMethod_var);
	}

IL_001f:
	{
		RuntimeObject ** L_5 = ___target0;
		RuntimeObject * L_6 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_1;
		InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(RuntimeObject **)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7);
		RuntimeObject ** L_8 = ___target0;
		return (*(RuntimeObject **)L_8);
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m3872089505_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_gshared (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = ___klass0;
		Type_t * L_3 = V_0;
		NullCheck((MemberInfo_t *)L_2);
		ObjectU5BU5D_t2843939325* L_4 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t *)L_2, (Type_t *)L_3, (bool)1);
		V_1 = (ObjectU5BU5D_t2843939325*)L_4;
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_6 = V_1;
		NullCheck(L_6);
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		RuntimeObject * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_0031:
	{
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_003d:
	{
		RuntimeObject * L_10 = V_2;
		return L_10;
	}
}
// T UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t2613165452  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t2613165452 ));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3384658186((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((Component_t1923634451 *)__this);
		Component_GetComponentFastPath_m1180649031((Component_t1923634451 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponentInChildren_TisRuntimeObject_m1033527003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((Component_t1923634451 *)__this);
		Component_t1923634451 * L_2 = Component_GetComponentInChildren_m388868270((Component_t1923634451 *)__this, (Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponentInParent_TisRuntimeObject_m3491943679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((Component_t1923634451 *)__this);
		Component_t1923634451 * L_2 = Component_GetComponentInParent_m779177818((Component_t1923634451 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_gshared (RuntimeObject * __this /* static, unused */, BaseEventData_t3903027533 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		BaseEventData_t3903027533 * L_0 = ___data0;
		if (((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003b;
		}
	}
	{
		BaseEventData_t3903027533 * L_1 = ___data0;
		NullCheck((RuntimeObject *)L_1);
		Type_t * L_2 = Object_GetType_m88164663((RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Format_m2556382932(NULL /*static, unused*/, (String_t*)_stringLiteral2964872255, (RuntimeObject *)L_2, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, (String_t*)L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_RuntimeMethod_var);
	}

IL_003b:
	{
		BaseEventData_t3903027533 * L_7 = ___data0;
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0051;
	}

IL_0051:
	{
		RuntimeObject * L_8 = V_0;
		return L_8;
	}
}
// T UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_AddComponent_TisRuntimeObject_m3469369570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		Component_t1923634451 * L_2 = GameObject_AddComponent_m136524825((GameObject_t1113636619 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponent_TisRuntimeObject_m2049753423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t2613165452  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t2613165452 ));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3384658186((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		GameObject_GetComponentFastPath_m2620139331((GameObject_t1113636619 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		bool L_0 = V_0;
		NullCheck((GameObject_t1113636619 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_1;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject * L_2 = V_1;
		return L_2;
	}
}
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_gshared (GameObject_t1113636619 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_t1113636619 *)__this);
		Component_t1923634451 * L_3 = GameObject_GetComponentInChildren_m2567799249((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___original0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_TisRuntimeObject_m2446893047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4237608654(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)_stringLiteral2475671027, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___original0;
		Object_t631007953 * L_2 = Object_Internal_CloneSingle_m1021157572(NULL /*static, unused*/, (Object_t631007953 *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		Object_t631007953 * L_3 = Resources_GetBuiltinResource_m3641967638(NULL /*static, unused*/, (Type_t *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t2528358522 * L_2 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.UI.Dropdown::GetOrAddComponent<System.Object>(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck((GameObject_t1113636619 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, (Object_t631007953 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t1113636619 * L_4 = ___go0;
		NullCheck((GameObject_t1113636619 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((GameObject_t1113636619 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_5;
	}

IL_001f:
	{
		RuntimeObject * L_6 = V_0;
		V_1 = (RuntimeObject *)L_6;
		goto IL_0026;
	}

IL_0026:
	{
		RuntimeObject * L_7 = V_1;
		return L_7;
	}
}
// T[] Renci.SshNet.Common.Extensions::Reverse<System.Byte>(T[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Extensions_Reverse_TisByte_t1134296376_m1705562620_gshared (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = ___array0;
		return L_1;
	}
}
// T[] Renci.SshNet.Common.Extensions::Reverse<System.Object>(T[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Extensions_Reverse_TisRuntimeObject_m3935597008_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = ___array0;
		return L_1;
	}
}
// T[] Scarlet.Utilities.UtilMain::SubArray<System.Byte>(T[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UtilMain_SubArray_TisByte_t1134296376_m3734100360_gshared (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___Data0, int32_t ___Index1, int32_t ___Length2, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		int32_t L_0 = ___Length2;
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (ByteU5BU5D_t4116647657*)L_1;
		ByteU5BU5D_t4116647657* L_2 = ___Data0;
		int32_t L_3 = ___Index1;
		ByteU5BU5D_t4116647657* L_4 = V_0;
		int32_t L_5 = ___Length2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (RuntimeArray *)(RuntimeArray *)L_4, (int32_t)0, (int32_t)L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = V_0;
		V_1 = (ByteU5BU5D_t4116647657*)L_6;
		goto IL_0017;
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_7 = V_1;
		return L_7;
	}
}
// T[] Scarlet.Utilities.UtilMain::SubArray<System.Object>(T[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* UtilMain_SubArray_TisRuntimeObject_m346270275_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___Data0, int32_t ___Index1, int32_t ___Length2, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	{
		int32_t L_0 = ___Length2;
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (ObjectU5BU5D_t2843939325*)L_1;
		ObjectU5BU5D_t2843939325* L_2 = ___Data0;
		int32_t L_3 = ___Index1;
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		int32_t L_5 = ___Length2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (RuntimeArray *)(RuntimeArray *)L_4, (int32_t)0, (int32_t)L_5, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_6 = V_0;
		V_1 = (ObjectU5BU5D_t2843939325*)L_6;
		goto IL_0017;
	}

IL_0017:
	{
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		return L_7;
	}
}
// T[] System.Array::Empty<Mono.AppleTls.SslStatus>()
extern "C" IL2CPP_METHOD_ATTR SslStatusU5BU5D_t3256112573* Array_Empty_TisSslStatus_t191981556_m2757501056_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		SslStatusU5BU5D_t3256112573* L_0 = ((EmptyArray_1_t576342003_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Byte>()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Array_Empty_TisByte_t1134296376_m3611076617_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ByteU5BU5D_t4116647657* L_0 = ((EmptyArray_1_t1518656823_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Char>()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* Array_Empty_TisChar_t3634460470_m2203016263_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t3528271667* L_0 = ((EmptyArray_1_t4018820917_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_Empty_TisRuntimeObject_m4268358689_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t2843939325* L_0 = ((EmptyArray_1_t3464466611_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Xml.Schema.SequenceNode/SequenceConstructPosContext>()
extern "C" IL2CPP_METHOD_ATTR SequenceConstructPosContextU5BU5D_t615009946* Array_Empty_TisSequenceConstructPosContext_t2054380699_m3296676353_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		SequenceConstructPosContextU5BU5D_t615009946* L_0 = ((EmptyArray_1_t2438741146_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<UnityEngine.UnitySynchronizationContext/WorkRequest>()
extern "C" IL2CPP_METHOD_ATTR WorkRequestU5BU5D_t3723878365* Array_Empty_TisWorkRequest_t1354518612_m3613807077_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		WorkRequestU5BU5D_t3723878365* L_0 = ((EmptyArray_1_t1738879059_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_FindAll_TisRuntimeObject_m3566631088_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t2843939325** G_B9_0 = NULL;
	ObjectU5BU5D_t2843939325** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t2843939325** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_FindAll_TisRuntimeObject_m3566631088_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t2843939325* L_4 = ((  ObjectU5BU5D_t2843939325* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t2843939325*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t3905400288 * L_5 = ___match1;
		ObjectU5BU5D_t2843939325* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t3905400288 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t3905400288 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t2843939325* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t2843939325* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_m3468062251(NULL /*static, unused*/, (int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2843939325**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t2843939325**)(ObjectU5BU5D_t2843939325**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t2843939325* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t2843939325* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t2843939325* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t2843939325* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2843939325**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t2843939325**)(ObjectU5BU5D_t2843939325**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t2843939325* L_30 = V_1;
		return L_30;
	}
}
// T[] System.Collections.Generic.EnumerableHelpers::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<T>)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* EnumerableHelpers_ToArray_TisByte_t1134296376_m2091354686_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	LargeArrayBuilder_1_t1044649397  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_1;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_2 = (int32_t)L_3;
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_5 = ((  ByteU5BU5D_t4116647657* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		ByteU5BU5D_t4116647657* L_7 = (ByteU5BU5D_t4116647657*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (uint32_t)L_6);
		V_3 = (ByteU5BU5D_t4116647657*)L_7;
		RuntimeObject* L_8 = V_0;
		ByteU5BU5D_t4116647657* L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker2< ByteU5BU5D_t4116647657*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_8, (ByteU5BU5D_t4116647657*)L_9, (int32_t)0);
		ByteU5BU5D_t4116647657* L_10 = V_3;
		return L_10;
	}

IL_002b:
	{
		LargeArrayBuilder_1__ctor_m208055018((LargeArrayBuilder_1_t1044649397 *)(LargeArrayBuilder_1_t1044649397 *)(&V_1), (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		RuntimeObject* L_11 = ___source0;
		LargeArrayBuilder_1_AddRange_m2616601375((LargeArrayBuilder_1_t1044649397 *)(LargeArrayBuilder_1_t1044649397 *)(&V_1), (RuntimeObject*)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		ByteU5BU5D_t4116647657* L_12 = LargeArrayBuilder_1_ToArray_m2037294919((LargeArrayBuilder_1_t1044649397 *)(LargeArrayBuilder_1_t1044649397 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_12;
	}
}
// T[] System.Collections.Generic.EnumerableHelpers::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* EnumerableHelpers_ToArray_TisRuntimeObject_m625332260_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	LargeArrayBuilder_1_t2990459185  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	ObjectU5BU5D_t2843939325* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_1;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_2 = (int32_t)L_3;
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = ((  ObjectU5BU5D_t2843939325* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		ObjectU5BU5D_t2843939325* L_7 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (uint32_t)L_6);
		V_3 = (ObjectU5BU5D_t2843939325*)L_7;
		RuntimeObject* L_8 = V_0;
		ObjectU5BU5D_t2843939325* L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker2< ObjectU5BU5D_t2843939325*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_8, (ObjectU5BU5D_t2843939325*)L_9, (int32_t)0);
		ObjectU5BU5D_t2843939325* L_10 = V_3;
		return L_10;
	}

IL_002b:
	{
		LargeArrayBuilder_1__ctor_m104969882((LargeArrayBuilder_1_t2990459185 *)(LargeArrayBuilder_1_t2990459185 *)(&V_1), (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		RuntimeObject* L_11 = ___source0;
		LargeArrayBuilder_1_AddRange_m1159522811((LargeArrayBuilder_1_t2990459185 *)(LargeArrayBuilder_1_t2990459185 *)(&V_1), (RuntimeObject*)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		ObjectU5BU5D_t2843939325* L_12 = LargeArrayBuilder_1_ToArray_m390648332((LargeArrayBuilder_1_t2990459185 *)(LargeArrayBuilder_1_t2990459185 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_12;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* CustomAttributeData_UnboxValues_TisRuntimeObject_m160061819_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t2843939325*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t2843939325* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t2843939325* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_t3710464795* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t287865710_m423120871_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_t3710464795* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_1 = (CustomAttributeNamedArgumentU5BU5D_t3710464795*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_t3710464795*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t2843939325* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t2843939325* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t1465843424* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t2723150157_m3477834415_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t1465843424* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_1 = (CustomAttributeTypedArgumentU5BU5D_t1465843424*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t1465843424*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t2843939325* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t2843939325* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Boolean>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR BooleanU5BU5D_t2897418192* XmlListConverter_ToArray_TisBoolean_t97287965_m1681726772_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisBoolean_t97287965_m1681726772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t1569362707 * V_1 = NULL;
	BooleanU5BU5D_t2897418192* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		BooleanU5BU5D_t2897418192* L_4 = (BooleanU5BU5D_t2897418192*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (BooleanU5BU5D_t2897418192*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		BooleanU5BU5D_t2897418192* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (bool)((*(bool*)((bool*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t1569362707 * L_21 = (List_1_t1569362707 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t1569362707 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t1569362707 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t1569362707 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t1569362707 *)L_25);
			((  void (*) (List_1_t1569362707 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t1569362707 *)L_25, (bool)((*(bool*)((bool*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t1569362707 * L_37 = V_1;
		NullCheck((List_1_t1569362707 *)L_37);
		BooleanU5BU5D_t2897418192* L_38 = ((  BooleanU5BU5D_t2897418192* (*) (List_1_t1569362707 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t1569362707 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Byte>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* XmlListConverter_ToArray_TisByte_t1134296376_m25630657_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisByte_t1134296376_m25630657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t2606371118 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (ByteU5BU5D_t4116647657*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		ByteU5BU5D_t4116647657* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t2606371118 * L_21 = (List_1_t2606371118 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t2606371118 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t2606371118 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t2606371118 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t2606371118 *)L_25);
			((  void (*) (List_1_t2606371118 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t2606371118 *)L_25, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t2606371118 * L_37 = V_1;
		NullCheck((List_1_t2606371118 *)L_37);
		ByteU5BU5D_t4116647657* L_38 = ((  ByteU5BU5D_t4116647657* (*) (List_1_t2606371118 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t2606371118 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTime>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR DateTimeU5BU5D_t1184652292* XmlListConverter_ToArray_TisDateTime_t3738529785_m3434455802_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDateTime_t3738529785_m3434455802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t915637231 * V_1 = NULL;
	DateTimeU5BU5D_t1184652292* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeU5BU5D_t1184652292* L_4 = (DateTimeU5BU5D_t1184652292*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DateTimeU5BU5D_t1184652292*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeU5BU5D_t1184652292* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (DateTime_t3738529785 )((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeU5BU5D_t1184652292* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t915637231 * L_21 = (List_1_t915637231 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t915637231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t915637231 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t915637231 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t915637231 *)L_25);
			((  void (*) (List_1_t915637231 *, DateTime_t3738529785 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t915637231 *)L_25, (DateTime_t3738529785 )((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t915637231 * L_37 = V_1;
		NullCheck((List_1_t915637231 *)L_37);
		DateTimeU5BU5D_t1184652292* L_38 = ((  DateTimeU5BU5D_t1184652292* (*) (List_1_t915637231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t915637231 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTimeOffset>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t3473357058* XmlListConverter_ToArray_TisDateTimeOffset_t3229287507_m829729751_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDateTimeOffset_t3229287507_m829729751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t406394953 * V_1 = NULL;
	DateTimeOffsetU5BU5D_t3473357058* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeOffsetU5BU5D_t3473357058* L_4 = (DateTimeOffsetU5BU5D_t3473357058*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DateTimeOffsetU5BU5D_t3473357058*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeOffsetU5BU5D_t3473357058* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (DateTimeOffset_t3229287507 )((*(DateTimeOffset_t3229287507 *)((DateTimeOffset_t3229287507 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeOffsetU5BU5D_t3473357058* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t406394953 * L_21 = (List_1_t406394953 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t406394953 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t406394953 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t406394953 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t406394953 *)L_25);
			((  void (*) (List_1_t406394953 *, DateTimeOffset_t3229287507 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t406394953 *)L_25, (DateTimeOffset_t3229287507 )((*(DateTimeOffset_t3229287507 *)((DateTimeOffset_t3229287507 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t406394953 * L_37 = V_1;
		NullCheck((List_1_t406394953 *)L_37);
		DateTimeOffsetU5BU5D_t3473357058* L_38 = ((  DateTimeOffsetU5BU5D_t3473357058* (*) (List_1_t406394953 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t406394953 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Decimal>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR DecimalU5BU5D_t1145110141* XmlListConverter_ToArray_TisDecimal_t2948259380_m2798570278_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDecimal_t2948259380_m2798570278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t125366826 * V_1 = NULL;
	DecimalU5BU5D_t1145110141* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DecimalU5BU5D_t1145110141* L_4 = (DecimalU5BU5D_t1145110141*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DecimalU5BU5D_t1145110141*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DecimalU5BU5D_t1145110141* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Decimal_t2948259380 )((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DecimalU5BU5D_t1145110141* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t125366826 * L_21 = (List_1_t125366826 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t125366826 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t125366826 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t125366826 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t125366826 *)L_25);
			((  void (*) (List_1_t125366826 *, Decimal_t2948259380 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t125366826 *)L_25, (Decimal_t2948259380 )((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t125366826 * L_37 = V_1;
		NullCheck((List_1_t125366826 *)L_37);
		DecimalU5BU5D_t1145110141* L_38 = ((  DecimalU5BU5D_t1145110141* (*) (List_1_t125366826 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t125366826 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Double>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR DoubleU5BU5D_t3413330114* XmlListConverter_ToArray_TisDouble_t594665363_m3193001621_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDouble_t594665363_m3193001621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t2066740105 * V_1 = NULL;
	DoubleU5BU5D_t3413330114* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DoubleU5BU5D_t3413330114* L_4 = (DoubleU5BU5D_t3413330114*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DoubleU5BU5D_t3413330114*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DoubleU5BU5D_t3413330114* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (double)((*(double*)((double*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DoubleU5BU5D_t3413330114* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t2066740105 * L_21 = (List_1_t2066740105 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t2066740105 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t2066740105 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t2066740105 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t2066740105 *)L_25);
			((  void (*) (List_1_t2066740105 *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t2066740105 *)L_25, (double)((*(double*)((double*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t2066740105 * L_37 = V_1;
		NullCheck((List_1_t2066740105 *)L_37);
		DoubleU5BU5D_t3413330114* L_38 = ((  DoubleU5BU5D_t3413330114* (*) (List_1_t2066740105 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t2066740105 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int16>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR Int16U5BU5D_t3686840178* XmlListConverter_ToArray_TisInt16_t2552820387_m2616720600_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt16_t2552820387_m2616720600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t4024895129 * V_1 = NULL;
	Int16U5BU5D_t3686840178* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int16U5BU5D_t3686840178* L_4 = (Int16U5BU5D_t3686840178*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int16U5BU5D_t3686840178*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int16U5BU5D_t3686840178* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int16_t)((*(int16_t*)((int16_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int16U5BU5D_t3686840178* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t4024895129 * L_21 = (List_1_t4024895129 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t4024895129 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t4024895129 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t4024895129 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t4024895129 *)L_25);
			((  void (*) (List_1_t4024895129 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t4024895129 *)L_25, (int16_t)((*(int16_t*)((int16_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t4024895129 * L_37 = V_1;
		NullCheck((List_1_t4024895129 *)L_37);
		Int16U5BU5D_t3686840178* L_38 = ((  Int16U5BU5D_t3686840178* (*) (List_1_t4024895129 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t4024895129 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int32>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* XmlListConverter_ToArray_TisInt32_t2950945753_m360094630_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt32_t2950945753_m360094630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t128053199 * V_1 = NULL;
	Int32U5BU5D_t385246372* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int32U5BU5D_t385246372* L_4 = (Int32U5BU5D_t385246372*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int32U5BU5D_t385246372*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int32U5BU5D_t385246372* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t385246372* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t128053199 * L_21 = (List_1_t128053199 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t128053199 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t128053199 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t128053199 *)L_25);
			((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t128053199 *)L_25, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t128053199 * L_37 = V_1;
		NullCheck((List_1_t128053199 *)L_37);
		Int32U5BU5D_t385246372* L_38 = ((  Int32U5BU5D_t385246372* (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t128053199 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int64>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR Int64U5BU5D_t2559172825* XmlListConverter_ToArray_TisInt64_t3736567304_m4217099738_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt64_t3736567304_m4217099738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t913674750 * V_1 = NULL;
	Int64U5BU5D_t2559172825* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int64U5BU5D_t2559172825* L_4 = (Int64U5BU5D_t2559172825*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int64U5BU5D_t2559172825*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int64U5BU5D_t2559172825* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int64U5BU5D_t2559172825* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t913674750 * L_21 = (List_1_t913674750 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t913674750 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t913674750 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t913674750 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t913674750 *)L_25);
			((  void (*) (List_1_t913674750 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t913674750 *)L_25, (int64_t)((*(int64_t*)((int64_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t913674750 * L_37 = V_1;
		NullCheck((List_1_t913674750 *)L_37);
		Int64U5BU5D_t2559172825* L_38 = ((  Int64U5BU5D_t2559172825* (*) (List_1_t913674750 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t913674750 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Object>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* XmlListConverter_ToArray_TisRuntimeObject_m1751379490_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisRuntimeObject_m1751379490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t257213610 * V_1 = NULL;
	ObjectU5BU5D_t2843939325* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (ObjectU5BU5D_t2843939325*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		ObjectU5BU5D_t2843939325* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t257213610 * L_21 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t257213610 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t257213610 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t257213610 *)L_25);
			((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_25, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t257213610 * L_37 = V_1;
		NullCheck((List_1_t257213610 *)L_37);
		ObjectU5BU5D_t2843939325* L_38 = ((  ObjectU5BU5D_t2843939325* (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t257213610 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.SByte>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR SByteU5BU5D_t2651576203* XmlListConverter_ToArray_TisSByte_t1669577662_m4254332645_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisSByte_t1669577662_m4254332645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t3141652404 * V_1 = NULL;
	SByteU5BU5D_t2651576203* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SByteU5BU5D_t2651576203* L_4 = (SByteU5BU5D_t2651576203*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (SByteU5BU5D_t2651576203*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		SByteU5BU5D_t2651576203* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int8_t)((*(int8_t*)((int8_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SByteU5BU5D_t2651576203* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t3141652404 * L_21 = (List_1_t3141652404 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t3141652404 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t3141652404 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t3141652404 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t3141652404 *)L_25);
			((  void (*) (List_1_t3141652404 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3141652404 *)L_25, (int8_t)((*(int8_t*)((int8_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t3141652404 * L_37 = V_1;
		NullCheck((List_1_t3141652404 *)L_37);
		SByteU5BU5D_t2651576203* L_38 = ((  SByteU5BU5D_t2651576203* (*) (List_1_t3141652404 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t3141652404 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Single>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR SingleU5BU5D_t1444911251* XmlListConverter_ToArray_TisSingle_t1397266774_m1102130495_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisSingle_t1397266774_m1102130495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t2869341516 * V_1 = NULL;
	SingleU5BU5D_t1444911251* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SingleU5BU5D_t1444911251* L_4 = (SingleU5BU5D_t1444911251*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (SingleU5BU5D_t1444911251*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		SingleU5BU5D_t1444911251* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (float)((*(float*)((float*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t2869341516 * L_21 = (List_1_t2869341516 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t2869341516 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t2869341516 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t2869341516 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t2869341516 *)L_25);
			((  void (*) (List_1_t2869341516 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t2869341516 *)L_25, (float)((*(float*)((float*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t2869341516 * L_37 = V_1;
		NullCheck((List_1_t2869341516 *)L_37);
		SingleU5BU5D_t1444911251* L_38 = ((  SingleU5BU5D_t1444911251* (*) (List_1_t2869341516 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t2869341516 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.TimeSpan>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR TimeSpanU5BU5D_t4291357516* XmlListConverter_ToArray_TisTimeSpan_t881159249_m2972605057_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisTimeSpan_t881159249_m2972605057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t2353233991 * V_1 = NULL;
	TimeSpanU5BU5D_t4291357516* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		TimeSpanU5BU5D_t4291357516* L_4 = (TimeSpanU5BU5D_t4291357516*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (TimeSpanU5BU5D_t4291357516*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		TimeSpanU5BU5D_t4291357516* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TimeSpan_t881159249 )((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		TimeSpanU5BU5D_t4291357516* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t2353233991 * L_21 = (List_1_t2353233991 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t2353233991 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t2353233991 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t2353233991 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t2353233991 *)L_25);
			((  void (*) (List_1_t2353233991 *, TimeSpan_t881159249 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t2353233991 *)L_25, (TimeSpan_t881159249 )((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t2353233991 * L_37 = V_1;
		NullCheck((List_1_t2353233991 *)L_37);
		TimeSpanU5BU5D_t4291357516* L_38 = ((  TimeSpanU5BU5D_t4291357516* (*) (List_1_t2353233991 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t2353233991 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR UInt16U5BU5D_t3326319531* XmlListConverter_ToArray_TisUInt16_t2177724958_m2035470571_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt16_t2177724958_m2035470571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t3649799700 * V_1 = NULL;
	UInt16U5BU5D_t3326319531* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt16U5BU5D_t3326319531* L_4 = (UInt16U5BU5D_t3326319531*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt16U5BU5D_t3326319531*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt16U5BU5D_t3326319531* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt16U5BU5D_t3326319531* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t3649799700 * L_21 = (List_1_t3649799700 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t3649799700 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t3649799700 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t3649799700 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t3649799700 *)L_25);
			((  void (*) (List_1_t3649799700 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3649799700 *)L_25, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t3649799700 * L_37 = V_1;
		NullCheck((List_1_t3649799700 *)L_37);
		UInt16U5BU5D_t3326319531* L_38 = ((  UInt16U5BU5D_t3326319531* (*) (List_1_t3649799700 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t3649799700 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR UInt32U5BU5D_t2770800703* XmlListConverter_ToArray_TisUInt32_t2560061978_m2615763131_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt32_t2560061978_m2615763131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t4032136720 * V_1 = NULL;
	UInt32U5BU5D_t2770800703* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt32U5BU5D_t2770800703* L_4 = (UInt32U5BU5D_t2770800703*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt32U5BU5D_t2770800703*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt32U5BU5D_t2770800703* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t4032136720 * L_21 = (List_1_t4032136720 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t4032136720 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t4032136720 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t4032136720 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t4032136720 *)L_25);
			((  void (*) (List_1_t4032136720 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t4032136720 *)L_25, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t4032136720 * L_37 = V_1;
		NullCheck((List_1_t4032136720 *)L_37);
		UInt32U5BU5D_t2770800703* L_38 = ((  UInt32U5BU5D_t2770800703* (*) (List_1_t4032136720 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t4032136720 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
extern "C" IL2CPP_METHOD_ATTR UInt64U5BU5D_t1659327989* XmlListConverter_ToArray_TisUInt64_t4134040092_m3140071152_gshared (XmlListConverter_t3889069996 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt64_t4134040092_m3140071152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t1311147538 * V_1 = NULL;
	UInt64U5BU5D_t1659327989* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt64U5BU5D_t1659327989* L_4 = (UInt64U5BU5D_t1659327989*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt64U5BU5D_t1659327989*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt64U5BU5D_t1659327989* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t585560190 * L_7 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_t585560190 *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_t1659327989* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t1311147538 * L_21 = (List_1_t1311147538 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t1311147538 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t1311147538 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t1941168011_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t1311147538 * L_25 = V_1;
			XmlValueConverter_t585560190 * L_26 = (XmlValueConverter_t585560190 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t3027515415  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_t585560190 *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t585560190 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t1311147538 *)L_25);
			((  void (*) (List_1_t1311147538 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t1311147538 *)L_25, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t1311147538 * L_37 = V_1;
		NullCheck((List_1_t1311147538 *)L_37);
		UInt64U5BU5D_t1659327989* L_38 = ((  UInt64U5BU5D_t1659327989* (*) (List_1_t1311147538 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t1311147538 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponents_TisRuntimeObject_m539078962_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Component_t1923634451 *)__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142((Component_t1923634451 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_0);
		ObjectU5BU5D_t2843939325* L_1 = ((  ObjectU5BU5D_t2843939325* (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* GameObject_GetComponents_TisRuntimeObject_m1550324888_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m1550324888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_m4006738154((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m3566760165_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		ObjectU5BU5D_t2843939325* L_3 = ((  ObjectU5BU5D_t2843939325* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m1538119140_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (ObjectU5BU5D_t2843939325*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		ObjectU5BU5D_t2843939325* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* Mesh_GetAllocArrayFromChannel_TisColor32_t2600501292_m3180365313_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Color32U5BU5D_t3850468773* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Color32U5BU5D_t3850468773*)((Color32U5BU5D_t3850468773*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Color32U5BU5D_t3850468773* L_8 = (Color32U5BU5D_t3850468773*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Color32U5BU5D_t3850468773*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Color32U5BU5D_t3850468773* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel)
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* Mesh_GetAllocArrayFromChannel_TisVector2_t2156229523_m1057679375_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector2U5BU5D_t1457185986* L_3 = ((  Vector2U5BU5D_t1457185986* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_t1457185986*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2U5BU5D_t1457185986* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* Mesh_GetAllocArrayFromChannel_TisVector2_t2156229523_m1394090975_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector2U5BU5D_t1457185986*)((Vector2U5BU5D_t1457185986*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector2U5BU5D_t1457185986* L_8 = (Vector2U5BU5D_t1457185986*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector2U5BU5D_t1457185986*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector2U5BU5D_t1457185986* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* Mesh_GetAllocArrayFromChannel_TisVector3_t3722313464_m4289135201_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector3U5BU5D_t1718750761* L_3 = ((  Vector3U5BU5D_t1718750761* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_t1718750761*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3U5BU5D_t1718750761* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* Mesh_GetAllocArrayFromChannel_TisVector3_t3722313464_m2332439905_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector3U5BU5D_t1718750761*)((Vector3U5BU5D_t1718750761*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector3U5BU5D_t1718750761* L_8 = (Vector3U5BU5D_t1718750761*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector3U5BU5D_t1718750761*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector3U5BU5D_t1718750761* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel)
extern "C" IL2CPP_METHOD_ATTR Vector4U5BU5D_t934056436* Mesh_GetAllocArrayFromChannel_TisVector4_t3319028937_m3479135907_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t934056436* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector4U5BU5D_t934056436* L_3 = ((  Vector4U5BU5D_t934056436* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t934056436*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector4U5BU5D_t934056436* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4U5BU5D_t934056436* Mesh_GetAllocArrayFromChannel_TisVector4_t3319028937_m1010044762_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector4U5BU5D_t934056436* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector4U5BU5D_t934056436*)((Vector4U5BU5D_t934056436*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector4U5BU5D_t934056436* L_8 = (Vector4U5BU5D_t934056436*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector4U5BU5D_t934056436*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector4U5BU5D_t934056436* L_9 = V_0;
		return L_9;
	}
}
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m244174403_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Converter_2_t2442480487 * ___converter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m244174403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m244174403_RuntimeMethod_var);
	}

IL_000e:
	{
		Converter_2_t2442480487 * L_2 = ___converter1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral879148213, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m244174403_RuntimeMethod_var);
	}

IL_001c:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))));
		V_0 = (ObjectU5BU5D_t2843939325*)L_5;
		V_1 = (int32_t)0;
		goto IL_0041;
	}

IL_0029:
	{
		ObjectU5BU5D_t2843939325* L_6 = V_0;
		int32_t L_7 = V_1;
		Converter_2_t2442480487 * L_8 = ___converter1;
		ObjectU5BU5D_t2843939325* L_9 = ___array0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((Converter_2_t2442480487 *)L_8);
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (Converter_2_t2442480487 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Converter_2_t2442480487 *)L_8, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject *)L_13);
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_1;
		ObjectU5BU5D_t2843939325* L_16 = ___array0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_17 = V_0;
		return L_17;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t2950945753_m2874764222_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskToApm_End_TisInt32_t2950945753_m2874764222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t61518632 * V_0 = NULL;
	TaskWrapperAsyncResult_t2316075138 * V_1 = NULL;
	TaskAwaiter_1_t1450460888  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = (TaskWrapperAsyncResult_t2316075138 *)((TaskWrapperAsyncResult_t2316075138 *)IsInst((RuntimeObject*)L_0, TaskWrapperAsyncResult_t2316075138_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t2316075138 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t2316075138 * L_2 = V_1;
		NullCheck(L_2);
		Task_t3187275312 * L_3 = (Task_t3187275312 *)L_2->get_Task_0();
		V_0 = (Task_1_t61518632 *)((Task_1_t61518632 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = (Task_1_t61518632 *)((Task_1_t61518632 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t61518632 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		__Error_WrongAsyncResult_m4181844776(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0027:
	{
		Task_1_t61518632 * L_6 = V_0;
		NullCheck((Task_1_t61518632 *)L_6);
		TaskAwaiter_1_t1450460888  L_7 = ((  TaskAwaiter_1_t1450460888  (*) (Task_1_t61518632 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Task_1_t61518632 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (TaskAwaiter_1_t1450460888 )L_7;
		int32_t L_8 = TaskAwaiter_1_GetResult_m3496793423((TaskAwaiter_1_t1450460888 *)(TaskAwaiter_1_t1450460888 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_8;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<System.Object>(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskToApm_End_TisRuntimeObject_m300046032_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskToApm_End_TisRuntimeObject_m300046032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t190679043 * V_0 = NULL;
	TaskWrapperAsyncResult_t2316075138 * V_1 = NULL;
	TaskAwaiter_1_t1579621299  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = (TaskWrapperAsyncResult_t2316075138 *)((TaskWrapperAsyncResult_t2316075138 *)IsInst((RuntimeObject*)L_0, TaskWrapperAsyncResult_t2316075138_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t2316075138 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t2316075138 * L_2 = V_1;
		NullCheck(L_2);
		Task_t3187275312 * L_3 = (Task_t3187275312 *)L_2->get_Task_0();
		V_0 = (Task_1_t190679043 *)((Task_1_t190679043 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = (Task_1_t190679043 *)((Task_1_t190679043 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t190679043 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		__Error_WrongAsyncResult_m4181844776(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0027:
	{
		Task_1_t190679043 * L_6 = V_0;
		NullCheck((Task_1_t190679043 *)L_6);
		TaskAwaiter_1_t1579621299  L_7 = ((  TaskAwaiter_1_t1579621299  (*) (Task_1_t190679043 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Task_1_t190679043 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (TaskAwaiter_1_t1579621299 )L_7;
		RuntimeObject * L_8 = TaskAwaiter_1_GetResult_m3577040539((TaskAwaiter_1_t1579621299 *)(TaskAwaiter_1_t1579621299 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_8;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m3776981238_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, bool*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_0, (bool*)(bool*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// TSource System.Linq.Enumerable::LastOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_LastOrDefault_TisRuntimeObject_m3329327330_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, bool*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_0, (bool*)(bool*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m555175825_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SingleOrDefault_TisRuntimeObject_m555175825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_m219206370(NULL /*static, unused*/, (String_t*)_stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Enumerable_SingleOrDefault_TisRuntimeObject_m555175825_RuntimeMethod_var);
	}

IL_000e:
	{
		Func_2_t3759279471 * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = Error_ArgumentNull_m219206370(NULL /*static, unused*/, (String_t*)_stringLiteral3941128596, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Enumerable_SingleOrDefault_TisRuntimeObject_m555175825_RuntimeMethod_var);
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4);
		V_0 = (RuntimeObject*)L_5;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0025:
		{
			RuntimeObject* L_6 = V_0;
			NullCheck((RuntimeObject*)L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
			V_1 = (RuntimeObject *)L_7;
			Func_2_t3759279471 * L_8 = ___predicate1;
			RuntimeObject * L_9 = V_1;
			NullCheck((Func_2_t3759279471 *)L_8);
			bool L_10 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t3759279471 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_10)
			{
				goto IL_0057;
			}
		}

IL_0035:
		{
			goto IL_004b;
		}

IL_0037:
		{
			Func_2_t3759279471 * L_11 = ___predicate1;
			RuntimeObject* L_12 = V_0;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_12);
			NullCheck((Func_2_t3759279471 *)L_11);
			bool L_14 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t3759279471 *)L_11, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_14)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			Exception_t * L_15 = Error_MoreThanOneMatch_m2666736739(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, Enumerable_SingleOrDefault_TisRuntimeObject_m555175825_RuntimeMethod_var);
		}

IL_004b:
		{
			RuntimeObject* L_16 = V_0;
			NullCheck((RuntimeObject*)L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (L_17)
			{
				goto IL_0037;
			}
		}

IL_0053:
		{
			RuntimeObject * L_18 = V_1;
			V_2 = (RuntimeObject *)L_18;
			IL2CPP_LEAVE(0x75, FINALLY_0061);
		}

IL_0057:
		{
			RuntimeObject* L_19 = V_0;
			NullCheck((RuntimeObject*)L_19);
			bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
			if (L_20)
			{
				goto IL_0025;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_21 = V_0;
			if (!L_21)
			{
				goto IL_006a;
			}
		}

IL_0064:
		{
			RuntimeObject* L_22 = V_0;
			NullCheck((RuntimeObject*)L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(97)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_23 = V_3;
		return L_23;
	}

IL_0075:
	{
		RuntimeObject * L_24 = V_2;
		return L_24;
	}
}
// TSource System.Linq.Enumerable::TryGetFirst<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_TryGetFirst_TisRuntimeObject_m938458824_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, bool* ___found1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_TryGetFirst_TisRuntimeObject_m938458824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_m219206370(NULL /*static, unused*/, (String_t*)_stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Enumerable_TryGetFirst_TisRuntimeObject_m938458824_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		bool* L_5 = ___found1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, bool* >::Invoke(1 /* TElement System.Linq.IPartition`1<System.Object>::TryGetFirst(System.Boolean&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (bool*)(bool*)L_5);
		return L_6;
	}

IL_0020:
	{
		RuntimeObject* L_7 = ___source0;
		RuntimeObject* L_8 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_1 = (RuntimeObject*)L_8;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_9 = V_1;
		NullCheck((RuntimeObject*)L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_9);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		bool* L_11 = ___found1;
		*((int8_t*)(L_11)) = (int8_t)1;
		RuntimeObject* L_12 = V_1;
		NullCheck((RuntimeObject*)L_12);
		RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_12, (int32_t)0);
		return L_13;
	}

IL_003e:
	{
		RuntimeObject* L_14 = ___source0;
		NullCheck((RuntimeObject*)L_14);
		RuntimeObject* L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_14);
		V_2 = (RuntimeObject*)L_15;
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			if (!L_17)
			{
				goto IL_0059;
			}
		}

IL_004d:
		{
			bool* L_18 = ___found1;
			*((int8_t*)(L_18)) = (int8_t)1;
			RuntimeObject* L_19 = V_2;
			NullCheck((RuntimeObject*)L_19);
			RuntimeObject * L_20 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 4), (RuntimeObject*)L_19);
			V_3 = (RuntimeObject *)L_20;
			IL2CPP_LEAVE(0x73, FINALLY_005b);
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x65, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_21 = V_2;
			if (!L_21)
			{
				goto IL_0064;
			}
		}

IL_005e:
		{
			RuntimeObject* L_22 = V_2;
			NullCheck((RuntimeObject*)L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
		}

IL_0064:
		{
			IL2CPP_END_FINALLY(91)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		bool* L_23 = ___found1;
		*((int8_t*)(L_23)) = (int8_t)0;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_24 = V_4;
		return L_24;
	}

IL_0073:
	{
		RuntimeObject * L_25 = V_3;
		return L_25;
	}
}
// TSource System.Linq.Enumerable::TryGetLast<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_TryGetLast_TisRuntimeObject_m2096250941_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, bool* ___found1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_TryGetLast_TisRuntimeObject_m2096250941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_m219206370(NULL /*static, unused*/, (String_t*)_stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Enumerable_TryGetLast_TisRuntimeObject_m2096250941_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		bool* L_5 = ___found1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, bool* >::Invoke(2 /* TElement System.Linq.IPartition`1<System.Object>::TryGetLast(System.Boolean&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (bool*)(bool*)L_5);
		return L_6;
	}

IL_0020:
	{
		RuntimeObject* L_7 = ___source0;
		RuntimeObject* L_8 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_1 = (RuntimeObject*)L_8;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_9 = V_1;
		NullCheck((RuntimeObject*)L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_9);
		V_2 = (int32_t)L_10;
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		bool* L_12 = ___found1;
		*((int8_t*)(L_12)) = (int8_t)1;
		RuntimeObject* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject * L_15 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_13, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)));
		return L_15;
	}

IL_0042:
	{
		RuntimeObject* L_16 = ___source0;
		NullCheck((RuntimeObject*)L_16);
		RuntimeObject* L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_16);
		V_3 = (RuntimeObject*)L_17;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_18 = V_3;
			NullCheck((RuntimeObject*)L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
			if (!L_19)
			{
				goto IL_006a;
			}
		}

IL_0051:
		{
			RuntimeObject* L_20 = V_3;
			NullCheck((RuntimeObject*)L_20);
			RuntimeObject * L_21 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 4), (RuntimeObject*)L_20);
			V_4 = (RuntimeObject *)L_21;
			RuntimeObject* L_22 = V_3;
			NullCheck((RuntimeObject*)L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
			if (L_23)
			{
				goto IL_0051;
			}
		}

IL_0061:
		{
			bool* L_24 = ___found1;
			*((int8_t*)(L_24)) = (int8_t)1;
			RuntimeObject * L_25 = V_4;
			V_5 = (RuntimeObject *)L_25;
			IL2CPP_LEAVE(0x84, FINALLY_006c);
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x76, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_3;
			if (!L_26)
			{
				goto IL_0075;
			}
		}

IL_006f:
		{
			RuntimeObject* L_27 = V_3;
			NullCheck((RuntimeObject*)L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
		}

IL_0075:
		{
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_JUMP_TBL(0x76, IL_0076)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0076:
	{
		bool* L_28 = ___found1;
		*((int8_t*)(L_28)) = (int8_t)0;
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject *));
		RuntimeObject * L_29 = V_6;
		return L_29;
	}

IL_0084:
	{
		RuntimeObject * L_30 = V_5;
		return L_30;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Byte>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Enumerable_ToArray_TisByte_t1134296376_m3684293684_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisByte_t1134296376_m3684293684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_m219206370(NULL /*static, unused*/, (String_t*)_stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Enumerable_ToArray_TisByte_t1134296376_m3684293684_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_4 = ___source0;
		ByteU5BU5D_t4116647657* L_5 = ((  ByteU5BU5D_t4116647657* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}

IL_001f:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		ByteU5BU5D_t4116647657* L_7 = InterfaceFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(0 /* TElement[] System.Linq.IIListProvider`1<System.Byte>::ToArray() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6);
		return L_7;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m1754324294_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_ToArray_TisRuntimeObject_m1754324294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_m219206370(NULL /*static, unused*/, (String_t*)_stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Enumerable_ToArray_TisRuntimeObject_m1754324294_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_4 = ___source0;
		ObjectU5BU5D_t2843939325* L_5 = ((  ObjectU5BU5D_t2843939325* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}

IL_001f:
	{
		RuntimeObject* L_6 = V_0;
		NullCheck((RuntimeObject*)L_6);
		ObjectU5BU5D_t2843939325* L_7 = InterfaceFuncInvoker0< ObjectU5BU5D_t2843939325* >::Invoke(0 /* TElement[] System.Linq.IIListProvider`1<System.Object>::ToArray() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6);
		return L_7;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m1799513869_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___dictionary0, RuntimeObject * ___key1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		RuntimeObject * L_1 = ___key1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_3;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey,TValue)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m1327842210_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___dictionary0, RuntimeObject * ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m1327842210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral2957729587, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m1327842210_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___dictionary0;
		RuntimeObject * L_3 = ___key1;
		NullCheck((RuntimeObject*)L_2);
		bool L_4 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2, (RuntimeObject *)L_3, (RuntimeObject **)(RuntimeObject **)(&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_5 = ___defaultValue2;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject * L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, BaseEventData_t3903027533 * ___eventData1, EventFunction_1_t1764640198 * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_t3600365921 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_1 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m2404658789(NULL /*static, unused*/, (GameObject_t1113636619 *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)0;
		goto IL_0043;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_2 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t777473367 *)L_2);
		Transform_t3600365921 * L_4 = List_1_get_Item_m2402360903((List_1_t777473367 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m2402360903_RuntimeMethod_var);
		V_1 = (Transform_t3600365921 *)L_4;
		Transform_t3600365921 * L_5 = V_1;
		NullCheck((Component_t1923634451 *)L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t3903027533 * L_7 = ___eventData1;
		EventFunction_1_t1764640198 * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t1764640198 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t1113636619 *)L_6, (BaseEventData_t3903027533 *)L_7, (EventFunction_1_t1764640198 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Transform_t3600365921 * L_10 = V_1;
		NullCheck((Component_t1923634451 *)L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_10, /*hidden argument*/NULL);
		V_2 = (GameObject_t1113636619 *)L_11;
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_14 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t777473367 *)L_14);
		int32_t L_15 = List_1_get_Count_m3543896146((List_1_t777473367 *)L_14, /*hidden argument*/List_1_get_Count_m3543896146_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (GameObject_t1113636619 *)NULL;
		goto IL_005a;
	}

IL_005a:
	{
		GameObject_t1113636619 * L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		goto IL_0058;
	}

IL_0014:
	{
		GameObject_t1113636619 * L_2 = ___root0;
		NullCheck((GameObject_t1113636619 *)L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730((GameObject_t1113636619 *)L_2, /*hidden argument*/NULL);
		V_1 = (Transform_t3600365921 *)L_3;
		goto IL_0045;
	}

IL_0020:
	{
		Transform_t3600365921 * L_4 = V_1;
		NullCheck((Component_t1923634451 *)L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t1113636619 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		Transform_t3600365921 * L_7 = V_1;
		NullCheck((Component_t1923634451 *)L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_7, /*hidden argument*/NULL);
		V_0 = (GameObject_t1113636619 *)L_8;
		goto IL_0058;
	}

IL_003d:
	{
		Transform_t3600365921 * L_9 = V_1;
		NullCheck((Transform_t3600365921 *)L_9);
		Transform_t3600365921 * L_10 = Transform_get_parent_m835071599((Transform_t3600365921 *)L_9, /*hidden argument*/NULL);
		V_1 = (Transform_t3600365921 *)L_10;
	}

IL_0045:
	{
		Transform_t3600365921 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		goto IL_0058;
	}

IL_0058:
	{
		GameObject_t1113636619 * L_13 = V_0;
		return L_13;
	}
}
