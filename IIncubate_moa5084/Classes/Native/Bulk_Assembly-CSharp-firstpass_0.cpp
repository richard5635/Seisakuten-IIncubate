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

// System.Exception
struct Exception_t;
// System.String
struct String_t;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.OutOfMemoryException
struct OutOfMemoryException_t2437671686;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>[]
struct KeyValuePair_2U5BU5D_t3599980199;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>>
struct IEnumerable_1_t3378624555;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t118269214;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1510070208;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t3851719731;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_t2215503679;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>>
struct IEnumerable_1_t934277491;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>[]
struct KeyValuePair_2U5BU5D_t1037808359;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct IEnumerable_1_t2679496939;
// System.WeakReference
struct WeakReference_t1334886716;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>
struct Dictionary_2_t2001099499;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// Helper.SmartGCHandle
struct SmartGCHandle_t3789875977;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t4021634645;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t2947482199;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.WeakReference,System.Collections.DictionaryEntry>
struct Transform_1_t2011406813;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>[]
struct Dictionary_2U5BU5D_t3115388322;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t296309482;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>,System.Collections.DictionaryEntry>
struct Transform_1_t3395883333;
// System.Void
struct Void_t1185182177;
// System.Type
struct Type_t;

extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* OutOfMemoryException_t2437671686_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ExceptionHelper_CheckLastError_m2134668479_RuntimeMethod_var;
extern String_t* _stringLiteral746789852;
extern const uint32_t ExceptionHelper_CheckLastError_m2134668479_MetadataUsageId;
extern RuntimeClass* NativeObjectCache_t1035286246_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_ToArray_TisKeyValuePair_2_t103804370_m699389379_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2223946_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisKeyValuePair_2_t1954424602_m4029421668_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3089501682_RuntimeMethod_var;
extern const uint32_t NativeObjectCache_Flush_m3235208603_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2001099499_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3436618849_RuntimeMethod_var;
extern const uint32_t NativeObjectCache__cctor_m2002075563_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* INativeWrapper_t1132045389_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NativeWrapper_GetNativePtr_m3397454008_RuntimeMethod_var;
extern String_t* _stringLiteral3078181421;
extern const uint32_t NativeWrapper_GetNativePtr_m3397454008_MetadataUsageId;
extern RuntimeClass* CameraIntrinsics_t2990762441_il2cpp_TypeInfo_var;
extern const uint32_t CameraIntrinsics_Equals_m732296039_MetadataUsageId;

struct KeyValuePair_2U5BU5D_t3599980199;
struct KeyValuePair_2U5BU5D_t2215503679;


#ifndef U3CMODULEU3E_T692745549_H
#define U3CMODULEU3E_T692745549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745549 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745549_H
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
#ifndef EXCEPTIONHELPER_T183203873_H
#define EXCEPTIONHELPER_T183203873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Helper.ExceptionHelper
struct  ExceptionHelper_t183203873  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONHELPER_T183203873_H
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
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef NATIVEWRAPPER_T3284318036_H
#define NATIVEWRAPPER_T3284318036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Helper.NativeWrapper
struct  NativeWrapper_t3284318036  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEWRAPPER_T3284318036_H
#ifndef DICTIONARY_2_T3851719731_H
#define DICTIONARY_2_T3851719731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct  Dictionary_2_t3851719731  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IntPtrU5BU5D_t4013366056* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	WeakReferenceU5BU5D_t4021634645* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___keySlots_6)); }
	inline IntPtrU5BU5D_t4013366056* get_keySlots_6() const { return ___keySlots_6; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(IntPtrU5BU5D_t4013366056* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___valueSlots_7)); }
	inline WeakReferenceU5BU5D_t4021634645* get_valueSlots_7() const { return ___valueSlots_7; }
	inline WeakReferenceU5BU5D_t4021634645** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(WeakReferenceU5BU5D_t4021634645* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3851719731_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2011406813 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2011406813 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2011406813 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2011406813 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3851719731_H
#ifndef NATIVEOBJECTCACHE_T1035286246_H
#define NATIVEOBJECTCACHE_T1035286246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Helper.NativeObjectCache
struct  NativeObjectCache_t1035286246  : public RuntimeObject
{
public:

public:
};

struct NativeObjectCache_t1035286246_StaticFields
{
public:
	// System.Object Helper.NativeObjectCache::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>> Helper.NativeObjectCache::_objectCache
	Dictionary_2_t2001099499 * ____objectCache_1;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(NativeObjectCache_t1035286246_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__objectCache_1() { return static_cast<int32_t>(offsetof(NativeObjectCache_t1035286246_StaticFields, ____objectCache_1)); }
	inline Dictionary_2_t2001099499 * get__objectCache_1() const { return ____objectCache_1; }
	inline Dictionary_2_t2001099499 ** get_address_of__objectCache_1() { return &____objectCache_1; }
	inline void set__objectCache_1(Dictionary_2_t2001099499 * value)
	{
		____objectCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectCache_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEOBJECTCACHE_T1035286246_H
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
#ifndef DICTIONARY_2_T2001099499_H
#define DICTIONARY_2_T2001099499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>
struct  Dictionary_2_t2001099499  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Dictionary_2U5BU5D_t3115388322* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___valueSlots_7)); }
	inline Dictionary_2U5BU5D_t3115388322* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Dictionary_2U5BU5D_t3115388322** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Dictionary_2U5BU5D_t3115388322* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2001099499_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3395883333 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2001099499_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3395883333 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3395883333 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3395883333 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2001099499_H
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
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef CAMERAINTRINSICS_T2990762441_H
#define CAMERAINTRINSICS_T2990762441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.CameraIntrinsics
struct  CameraIntrinsics_t2990762441 
{
public:
	// System.Single Windows.Kinect.CameraIntrinsics::<FocalLengthX>k__BackingField
	float ___U3CFocalLengthXU3Ek__BackingField_0;
	// System.Single Windows.Kinect.CameraIntrinsics::<FocalLengthY>k__BackingField
	float ___U3CFocalLengthYU3Ek__BackingField_1;
	// System.Single Windows.Kinect.CameraIntrinsics::<PrincipalPointX>k__BackingField
	float ___U3CPrincipalPointXU3Ek__BackingField_2;
	// System.Single Windows.Kinect.CameraIntrinsics::<PrincipalPointY>k__BackingField
	float ___U3CPrincipalPointYU3Ek__BackingField_3;
	// System.Single Windows.Kinect.CameraIntrinsics::<RadialDistortionSecondOrder>k__BackingField
	float ___U3CRadialDistortionSecondOrderU3Ek__BackingField_4;
	// System.Single Windows.Kinect.CameraIntrinsics::<RadialDistortionFourthOrder>k__BackingField
	float ___U3CRadialDistortionFourthOrderU3Ek__BackingField_5;
	// System.Single Windows.Kinect.CameraIntrinsics::<RadialDistortionSixthOrder>k__BackingField
	float ___U3CRadialDistortionSixthOrderU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CFocalLengthXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t2990762441, ___U3CFocalLengthXU3Ek__BackingField_0)); }
	inline float get_U3CFocalLengthXU3Ek__BackingField_0() const { return ___U3CFocalLengthXU3Ek__BackingField_0; }
	inline float* get_address_of_U3CFocalLengthXU3Ek__BackingField_0() { return &___U3CFocalLengthXU3Ek__BackingField_0; }
	inline void set_U3CFocalLengthXU3Ek__BackingField_0(float value)
	{
		___U3CFocalLengthXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFocalLengthYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t2990762441, ___U3CFocalLengthYU3Ek__BackingField_1)); }
	inline float get_U3CFocalLengthYU3Ek__BackingField_1() const { return ___U3CFocalLengthYU3Ek__BackingField_1; }
	inline float* get_address_of_U3CFocalLengthYU3Ek__BackingField_1() { return &___U3CFocalLengthYU3Ek__BackingField_1; }
	inline void set_U3CFocalLengthYU3Ek__BackingField_1(float value)
	{
		___U3CFocalLengthYU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPrincipalPointXU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t2990762441, ___U3CPrincipalPointXU3Ek__BackingField_2)); }
	inline float get_U3CPrincipalPointXU3Ek__BackingField_2() const { return ___U3CPrincipalPointXU3Ek__BackingField_2; }
	inline float* get_address_of_U3CPrincipalPointXU3Ek__BackingField_2() { return &___U3CPrincipalPointXU3Ek__BackingField_2; }
	inline void set_U3CPrincipalPointXU3Ek__BackingField_2(float value)
	{
		___U3CPrincipalPointXU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPrincipalPointYU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t2990762441, ___U3CPrincipalPointYU3Ek__BackingField_3)); }
	inline float get_U3CPrincipalPointYU3Ek__BackingField_3() const { return ___U3CPrincipalPointYU3Ek__BackingField_3; }
	inline float* get_address_of_U3CPrincipalPointYU3Ek__BackingField_3() { return &___U3CPrincipalPointYU3Ek__BackingField_3; }
	inline void set_U3CPrincipalPointYU3Ek__BackingField_3(float value)
	{
		___U3CPrincipalPointYU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRadialDistortionSecondOrderU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t2990762441, ___U3CRadialDistortionSecondOrderU3Ek__BackingField_4)); }
	inline float get_U3CRadialDistortionSecondOrderU3Ek__BackingField_4() const { return ___U3CRadialDistortionSecondOrderU3Ek__BackingField_4; }
	inline float* get_address_of_U3CRadialDistortionSecondOrderU3Ek__BackingField_4() { return &___U3CRadialDistortionSecondOrderU3Ek__BackingField_4; }
	inline void set_U3CRadialDistortionSecondOrderU3Ek__BackingField_4(float value)
	{
		___U3CRadialDistortionSecondOrderU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRadialDistortionFourthOrderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t2990762441, ___U3CRadialDistortionFourthOrderU3Ek__BackingField_5)); }
	inline float get_U3CRadialDistortionFourthOrderU3Ek__BackingField_5() const { return ___U3CRadialDistortionFourthOrderU3Ek__BackingField_5; }
	inline float* get_address_of_U3CRadialDistortionFourthOrderU3Ek__BackingField_5() { return &___U3CRadialDistortionFourthOrderU3Ek__BackingField_5; }
	inline void set_U3CRadialDistortionFourthOrderU3Ek__BackingField_5(float value)
	{
		___U3CRadialDistortionFourthOrderU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRadialDistortionSixthOrderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t2990762441, ___U3CRadialDistortionSixthOrderU3Ek__BackingField_6)); }
	inline float get_U3CRadialDistortionSixthOrderU3Ek__BackingField_6() const { return ___U3CRadialDistortionSixthOrderU3Ek__BackingField_6; }
	inline float* get_address_of_U3CRadialDistortionSixthOrderU3Ek__BackingField_6() { return &___U3CRadialDistortionSixthOrderU3Ek__BackingField_6; }
	inline void set_U3CRadialDistortionSixthOrderU3Ek__BackingField_6(float value)
	{
		___U3CRadialDistortionSixthOrderU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAINTRINSICS_T2990762441_H
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
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
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
#ifndef KEYVALUEPAIR_2_T103804370_H
#define KEYVALUEPAIR_2_T103804370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>
struct  KeyValuePair_2_t103804370 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_t3851719731 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t103804370, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t103804370, ___value_1)); }
	inline Dictionary_2_t3851719731 * get_value_1() const { return ___value_1; }
	inline Dictionary_2_t3851719731 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dictionary_2_t3851719731 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T103804370_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2530217319_H
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
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
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
#ifndef KEYVALUEPAIR_2_T3699644050_H
#define KEYVALUEPAIR_2_T3699644050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t3699644050 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3699644050, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3699644050, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3699644050_H
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
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
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
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef SMARTGCHANDLE_T3789875977_H
#define SMARTGCHANDLE_T3789875977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Helper.SmartGCHandle
struct  SmartGCHandle_t3789875977  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle Helper.SmartGCHandle::handle
	GCHandle_t3351438187  ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SmartGCHandle_t3789875977, ___handle_0)); }
	inline GCHandle_t3351438187  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t3351438187 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t3351438187  value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMARTGCHANDLE_T3789875977_H
#ifndef OUTOFMEMORYEXCEPTION_T2437671686_H
#define OUTOFMEMORYEXCEPTION_T2437671686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t2437671686  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T2437671686_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef KEYVALUEPAIR_2_T1954424602_H
#define KEYVALUEPAIR_2_T1954424602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>
struct  KeyValuePair_2_t1954424602 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WeakReference_t1334886716 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1954424602, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1954424602, ___value_1)); }
	inline WeakReference_t1334886716 * get_value_1() const { return ___value_1; }
	inline WeakReference_t1334886716 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WeakReference_t1334886716 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1954424602_H
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
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>[]
struct KeyValuePair_2U5BU5D_t3599980199  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t103804370  m_Items[1];

public:
	inline KeyValuePair_2_t103804370  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t103804370 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t103804370  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t103804370  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t103804370 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t103804370  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>[]
struct KeyValuePair_2U5BU5D_t2215503679  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t1954424602  m_Items[1];

public:
	inline KeyValuePair_2_t1954424602  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t1954424602 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t1954424602  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t1954424602  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t1954424602 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t1954424602  value)
	{
		m_Items[index] = value;
	}
};


// !!0[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  KeyValuePair_2U5BU5D_t118269214* Enumerable_ToArray_TisKeyValuePair_2_t2530217319_m1694012995_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  KeyValuePair_2U5BU5D_t1037808359* Enumerable_ToArray_TisKeyValuePair_2_t3699644050_m2319047300_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2347594792_gshared (KeyValuePair_2_t3699644050 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);

// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C"  int32_t Marshal_GetLastWin32Error_m1272610344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32)
extern "C"  Exception_t * Marshal_GetExceptionForHR_m224134077 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.String,System.Exception)
extern "C"  void NotImplementedException__ctor_m1532458134 (NotImplementedException_t3489357830 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
extern "C"  void OutOfMemoryException__ctor_m4180974057 (OutOfMemoryException_t2437671686 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C"  void ArgumentException__ctor_m1535060261 (ArgumentException_t132251570 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String,System.Exception)
extern "C"  void ArgumentNullException__ctor_m7735596 (ArgumentNullException_t1615371798 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C"  void InvalidOperationException__ctor_m1685032583 (InvalidOperationException_t56020091 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisKeyValuePair_2_t103804370_m699389379(__this /* static, unused */, p0, method) ((  KeyValuePair_2U5BU5D_t3599980199* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisKeyValuePair_2_t2530217319_m1694012995_gshared)(__this /* static, unused */, p0, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>::get_Value()
#define KeyValuePair_2_get_Value_m2223946(__this, method) ((  Dictionary_2_t3851719731 * (*) (KeyValuePair_2_t103804370 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisKeyValuePair_2_t1954424602_m4029421668(__this /* static, unused */, p0, method) ((  KeyValuePair_2U5BU5D_t2215503679* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisKeyValuePair_2_t3699644050_m2319047300_gshared)(__this /* static, unused */, p0, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.WeakReference>::get_Value()
#define KeyValuePair_2_get_Value_m3089501682(__this, method) ((  WeakReference_t1334886716 * (*) (KeyValuePair_2_t1954424602 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2347594792_gshared)(__this, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>::.ctor()
#define Dictionary_2__ctor_m3436618849(__this, method) ((  void (*) (Dictionary_2_t2001099499 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
extern "C"  intptr_t GCHandle_AddrOfPinnedObject_m3427142301 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.CameraIntrinsics::get_FocalLengthX()
extern "C"  float CameraIntrinsics_get_FocalLengthX_m4186558185 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CameraIntrinsics::set_FocalLengthX(System.Single)
extern "C"  void CameraIntrinsics_set_FocalLengthX_m599290732 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.CameraIntrinsics::get_FocalLengthY()
extern "C"  float CameraIntrinsics_get_FocalLengthY_m4186558186 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CameraIntrinsics::set_FocalLengthY(System.Single)
extern "C"  void CameraIntrinsics_set_FocalLengthY_m977912265 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.CameraIntrinsics::get_PrincipalPointX()
extern "C"  float CameraIntrinsics_get_PrincipalPointX_m1845066236 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CameraIntrinsics::set_PrincipalPointX(System.Single)
extern "C"  void CameraIntrinsics_set_PrincipalPointX_m366054346 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.CameraIntrinsics::get_PrincipalPointY()
extern "C"  float CameraIntrinsics_get_PrincipalPointY_m3801381372 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CameraIntrinsics::set_PrincipalPointY(System.Single)
extern "C"  void CameraIntrinsics_set_PrincipalPointY_m89426940 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.CameraIntrinsics::get_RadialDistortionSecondOrder()
extern "C"  float CameraIntrinsics_get_RadialDistortionSecondOrder_m3062594160 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CameraIntrinsics::set_RadialDistortionSecondOrder(System.Single)
extern "C"  void CameraIntrinsics_set_RadialDistortionSecondOrder_m3031532176 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.CameraIntrinsics::get_RadialDistortionFourthOrder()
extern "C"  float CameraIntrinsics_get_RadialDistortionFourthOrder_m1788917980 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CameraIntrinsics::set_RadialDistortionFourthOrder(System.Single)
extern "C"  void CameraIntrinsics_set_RadialDistortionFourthOrder_m4028356591 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.CameraIntrinsics::get_RadialDistortionSixthOrder()
extern "C"  float CameraIntrinsics_get_RadialDistortionSixthOrder_m3091092696 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CameraIntrinsics::set_RadialDistortionSixthOrder(System.Single)
extern "C"  void CameraIntrinsics_set_RadialDistortionSixthOrder_m680827619 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::GetHashCode()
extern "C"  int32_t Single_GetHashCode_m1558506138 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.CameraIntrinsics::GetHashCode()
extern "C"  int32_t CameraIntrinsics_GetHashCode_m2560716367 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.CameraIntrinsics::Equals(Windows.Kinect.CameraIntrinsics)
extern "C"  bool CameraIntrinsics_Equals_m826724480 (CameraIntrinsics_t2990762441 * __this, CameraIntrinsics_t2990762441  ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.CameraIntrinsics::Equals(System.Object)
extern "C"  bool CameraIntrinsics_Equals_m732296039 (CameraIntrinsics_t2990762441 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Single)
extern "C"  bool Single_Equals_m1601893879 (float* __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Helper.ExceptionHelper::CheckLastError()
extern "C"  void ExceptionHelper_CheckLastError_m2134668479 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExceptionHelper_CheckLastError_m2134668479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_0 = Marshal_GetLastWin32Error_m1272610344(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-2147483638))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-2147467259)))))
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Exception_t * L_5 = Marshal_GetExceptionForHR_m224134077(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral746789852, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		int32_t L_10 = V_0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)2147467263))))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_0087;
			}
		}
	}

IL_0054:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-2147024882))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-2147024809))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_008f;
	}

IL_006f:
	{
		String_t* L_13 = V_2;
		Exception_t * L_14 = V_1;
		NotImplementedException_t3489357830 * L_15 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m1532458134(L_15, L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, ExceptionHelper_CheckLastError_m2134668479_RuntimeMethod_var);
	}

IL_0077:
	{
		String_t* L_16 = V_2;
		Exception_t * L_17 = V_1;
		OutOfMemoryException_t2437671686 * L_18 = (OutOfMemoryException_t2437671686 *)il2cpp_codegen_object_new(OutOfMemoryException_t2437671686_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m4180974057(L_18, L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, ExceptionHelper_CheckLastError_m2134668479_RuntimeMethod_var);
	}

IL_007f:
	{
		String_t* L_19 = V_2;
		Exception_t * L_20 = V_1;
		ArgumentException_t132251570 * L_21 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1535060261(L_21, L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, ExceptionHelper_CheckLastError_m2134668479_RuntimeMethod_var);
	}

IL_0087:
	{
		String_t* L_22 = V_2;
		Exception_t * L_23 = V_1;
		ArgumentNullException_t1615371798 * L_24 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7735596(L_24, L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, ExceptionHelper_CheckLastError_m2134668479_RuntimeMethod_var);
	}

IL_008f:
	{
		String_t* L_25 = V_2;
		Exception_t * L_26 = V_1;
		InvalidOperationException_t56020091 * L_27 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1685032583(L_27, L_25, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, NULL, ExceptionHelper_CheckLastError_m2134668479_RuntimeMethod_var);
	}

IL_0097:
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
// System.Void Helper.NativeObjectCache::Flush()
extern "C"  void NativeObjectCache_Flush_m3235208603 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeObjectCache_Flush_m3235208603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	KeyValuePair_2_t103804370  V_1;
	memset(&V_1, 0, sizeof(V_1));
	KeyValuePair_2U5BU5D_t3599980199* V_2 = NULL;
	int32_t V_3 = 0;
	KeyValuePair_2_t1954424602  V_4;
	memset(&V_4, 0, sizeof(V_4));
	KeyValuePair_2U5BU5D_t2215503679* V_5 = NULL;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t1035286246_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((NativeObjectCache_t1035286246_StaticFields*)il2cpp_codegen_static_fields_for(NativeObjectCache_t1035286246_il2cpp_TypeInfo_var))->get__lock_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t1035286246_il2cpp_TypeInfo_var);
			Dictionary_2_t2001099499 * L_2 = ((NativeObjectCache_t1035286246_StaticFields*)il2cpp_codegen_static_fields_for(NativeObjectCache_t1035286246_il2cpp_TypeInfo_var))->get__objectCache_1();
			KeyValuePair_2U5BU5D_t3599980199* L_3 = Enumerable_ToArray_TisKeyValuePair_2_t103804370_m699389379(NULL /*static, unused*/, L_2, /*hidden argument*/Enumerable_ToArray_TisKeyValuePair_2_t103804370_m699389379_RuntimeMethod_var);
			V_2 = L_3;
			V_3 = 0;
			goto IL_0087;
		}

IL_001e:
		{
			KeyValuePair_2U5BU5D_t3599980199* L_4 = V_2;
			int32_t L_5 = V_3;
			NullCheck(L_4);
			V_1 = (*(KeyValuePair_2_t103804370 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))));
			Dictionary_2_t3851719731 * L_6 = KeyValuePair_2_get_Value_m2223946((KeyValuePair_2_t103804370 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2223946_RuntimeMethod_var);
			KeyValuePair_2U5BU5D_t2215503679* L_7 = Enumerable_ToArray_TisKeyValuePair_2_t1954424602_m4029421668(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_ToArray_TisKeyValuePair_2_t1954424602_m4029421668_RuntimeMethod_var);
			V_5 = L_7;
			V_6 = 0;
			goto IL_0078;
		}

IL_0041:
		{
			KeyValuePair_2U5BU5D_t2215503679* L_8 = V_5;
			int32_t L_9 = V_6;
			NullCheck(L_8);
			V_4 = (*(KeyValuePair_2_t1954424602 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))));
			WeakReference_t1334886716 * L_10 = KeyValuePair_2_get_Value_m3089501682((KeyValuePair_2_t1954424602 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m3089501682_RuntimeMethod_var);
			NullCheck(L_10);
			RuntimeObject * L_11 = VirtFuncInvoker0< RuntimeObject * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_10);
			V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_7;
			if (!L_12)
			{
				goto IL_0072;
			}
		}

IL_006b:
		{
			RuntimeObject* L_13 = V_7;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		}

IL_0072:
		{
			int32_t L_14 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		}

IL_0078:
		{
			int32_t L_15 = V_6;
			KeyValuePair_2U5BU5D_t2215503679* L_16 = V_5;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
			{
				goto IL_0041;
			}
		}

IL_0083:
		{
			int32_t L_17 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		}

IL_0087:
		{
			int32_t L_18 = V_3;
			KeyValuePair_2U5BU5D_t3599980199* L_19 = V_2;
			NullCheck(L_19);
			if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
			{
				goto IL_001e;
			}
		}

IL_0090:
		{
			IL2CPP_LEAVE(0x9C, FINALLY_0095);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0095;
	}

FINALLY_0095:
	{ // begin finally (depth: 1)
		RuntimeObject * L_20 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(149)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009c:
	{
		return;
	}
}
// System.Void Helper.NativeObjectCache::.cctor()
extern "C"  void NativeObjectCache__cctor_m2002075563 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeObjectCache__cctor_m2002075563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((NativeObjectCache_t1035286246_StaticFields*)il2cpp_codegen_static_fields_for(NativeObjectCache_t1035286246_il2cpp_TypeInfo_var))->set__lock_0(L_0);
		Dictionary_2_t2001099499 * L_1 = (Dictionary_2_t2001099499 *)il2cpp_codegen_object_new(Dictionary_2_t2001099499_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3436618849(L_1, /*hidden argument*/Dictionary_2__ctor_m3436618849_RuntimeMethod_var);
		((NativeObjectCache_t1035286246_StaticFields*)il2cpp_codegen_static_fields_for(NativeObjectCache_t1035286246_il2cpp_TypeInfo_var))->set__objectCache_1(L_1);
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
// System.IntPtr Helper.NativeWrapper::GetNativePtr(System.Object)
extern "C"  intptr_t NativeWrapper_GetNativePtr_m3397454008 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeWrapper_GetNativePtr_m3397454008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_000c:
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, INativeWrapper_t1132045389_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		intptr_t L_4 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr Helper.INativeWrapper::get_nativePtr() */, INativeWrapper_t1132045389_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}

IL_0020:
	{
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, _stringLiteral3078181421, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, NativeWrapper_GetNativePtr_m3397454008_RuntimeMethod_var);
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
// System.Void Helper.SmartGCHandle::.ctor(System.Runtime.InteropServices.GCHandle)
extern "C"  void SmartGCHandle__ctor_m1521978238 (SmartGCHandle_t3789875977 * __this, GCHandle_t3351438187  ___handle0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GCHandle_t3351438187  L_0 = ___handle0;
		__this->set_handle_0(L_0);
		return;
	}
}
// System.Void Helper.SmartGCHandle::Finalize()
extern "C"  void SmartGCHandle_Finalize_m758944493 (SmartGCHandle_t3789875977 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void Helper.SmartGCHandle::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.IntPtr Helper.SmartGCHandle::AddrOfPinnedObject()
extern "C"  intptr_t SmartGCHandle_AddrOfPinnedObject_m3324926650 (SmartGCHandle_t3789875977 * __this, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_handle_0();
		intptr_t L_1 = GCHandle_AddrOfPinnedObject_m3427142301((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Helper.SmartGCHandle::Dispose()
extern "C"  void SmartGCHandle_Dispose_m2180152667 (SmartGCHandle_t3789875977 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void Helper.SmartGCHandle::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void Helper.SmartGCHandle::Dispose(System.Boolean)
extern "C"  void SmartGCHandle_Dispose_m305810900 (SmartGCHandle_t3789875977 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_handle_0();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.GCHandle Helper.SmartGCHandle::op_Implicit(Helper.SmartGCHandle)
extern "C"  GCHandle_t3351438187  SmartGCHandle_op_Implicit_m3877674438 (RuntimeObject * __this /* static, unused */, SmartGCHandle_t3789875977 * ___other0, const RuntimeMethod* method)
{
	{
		SmartGCHandle_t3789875977 * L_0 = ___other0;
		NullCheck(L_0);
		GCHandle_t3351438187  L_1 = L_0->get_handle_0();
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
// System.Single Windows.Kinect.CameraIntrinsics::get_FocalLengthX()
extern "C"  float CameraIntrinsics_get_FocalLengthX_m4186558185 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CFocalLengthXU3Ek__BackingField_0();
		return L_0;
	}
}
extern "C"  float CameraIntrinsics_get_FocalLengthX_m4186558185_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_get_FocalLengthX_m4186558185(_thisAdjusted, method);
}
// System.Void Windows.Kinect.CameraIntrinsics::set_FocalLengthX(System.Single)
extern "C"  void CameraIntrinsics_set_FocalLengthX_m599290732 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CFocalLengthXU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void CameraIntrinsics_set_FocalLengthX_m599290732_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	CameraIntrinsics_set_FocalLengthX_m599290732(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.CameraIntrinsics::get_FocalLengthY()
extern "C"  float CameraIntrinsics_get_FocalLengthY_m4186558186 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CFocalLengthYU3Ek__BackingField_1();
		return L_0;
	}
}
extern "C"  float CameraIntrinsics_get_FocalLengthY_m4186558186_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_get_FocalLengthY_m4186558186(_thisAdjusted, method);
}
// System.Void Windows.Kinect.CameraIntrinsics::set_FocalLengthY(System.Single)
extern "C"  void CameraIntrinsics_set_FocalLengthY_m977912265 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CFocalLengthYU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void CameraIntrinsics_set_FocalLengthY_m977912265_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	CameraIntrinsics_set_FocalLengthY_m977912265(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.CameraIntrinsics::get_PrincipalPointX()
extern "C"  float CameraIntrinsics_get_PrincipalPointX_m1845066236 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CPrincipalPointXU3Ek__BackingField_2();
		return L_0;
	}
}
extern "C"  float CameraIntrinsics_get_PrincipalPointX_m1845066236_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_get_PrincipalPointX_m1845066236(_thisAdjusted, method);
}
// System.Void Windows.Kinect.CameraIntrinsics::set_PrincipalPointX(System.Single)
extern "C"  void CameraIntrinsics_set_PrincipalPointX_m366054346 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CPrincipalPointXU3Ek__BackingField_2(L_0);
		return;
	}
}
extern "C"  void CameraIntrinsics_set_PrincipalPointX_m366054346_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	CameraIntrinsics_set_PrincipalPointX_m366054346(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.CameraIntrinsics::get_PrincipalPointY()
extern "C"  float CameraIntrinsics_get_PrincipalPointY_m3801381372 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CPrincipalPointYU3Ek__BackingField_3();
		return L_0;
	}
}
extern "C"  float CameraIntrinsics_get_PrincipalPointY_m3801381372_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_get_PrincipalPointY_m3801381372(_thisAdjusted, method);
}
// System.Void Windows.Kinect.CameraIntrinsics::set_PrincipalPointY(System.Single)
extern "C"  void CameraIntrinsics_set_PrincipalPointY_m89426940 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CPrincipalPointYU3Ek__BackingField_3(L_0);
		return;
	}
}
extern "C"  void CameraIntrinsics_set_PrincipalPointY_m89426940_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	CameraIntrinsics_set_PrincipalPointY_m89426940(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.CameraIntrinsics::get_RadialDistortionSecondOrder()
extern "C"  float CameraIntrinsics_get_RadialDistortionSecondOrder_m3062594160 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CRadialDistortionSecondOrderU3Ek__BackingField_4();
		return L_0;
	}
}
extern "C"  float CameraIntrinsics_get_RadialDistortionSecondOrder_m3062594160_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_get_RadialDistortionSecondOrder_m3062594160(_thisAdjusted, method);
}
// System.Void Windows.Kinect.CameraIntrinsics::set_RadialDistortionSecondOrder(System.Single)
extern "C"  void CameraIntrinsics_set_RadialDistortionSecondOrder_m3031532176 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CRadialDistortionSecondOrderU3Ek__BackingField_4(L_0);
		return;
	}
}
extern "C"  void CameraIntrinsics_set_RadialDistortionSecondOrder_m3031532176_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	CameraIntrinsics_set_RadialDistortionSecondOrder_m3031532176(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.CameraIntrinsics::get_RadialDistortionFourthOrder()
extern "C"  float CameraIntrinsics_get_RadialDistortionFourthOrder_m1788917980 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CRadialDistortionFourthOrderU3Ek__BackingField_5();
		return L_0;
	}
}
extern "C"  float CameraIntrinsics_get_RadialDistortionFourthOrder_m1788917980_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_get_RadialDistortionFourthOrder_m1788917980(_thisAdjusted, method);
}
// System.Void Windows.Kinect.CameraIntrinsics::set_RadialDistortionFourthOrder(System.Single)
extern "C"  void CameraIntrinsics_set_RadialDistortionFourthOrder_m4028356591 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CRadialDistortionFourthOrderU3Ek__BackingField_5(L_0);
		return;
	}
}
extern "C"  void CameraIntrinsics_set_RadialDistortionFourthOrder_m4028356591_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	CameraIntrinsics_set_RadialDistortionFourthOrder_m4028356591(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.CameraIntrinsics::get_RadialDistortionSixthOrder()
extern "C"  float CameraIntrinsics_get_RadialDistortionSixthOrder_m3091092696 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CRadialDistortionSixthOrderU3Ek__BackingField_6();
		return L_0;
	}
}
extern "C"  float CameraIntrinsics_get_RadialDistortionSixthOrder_m3091092696_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_get_RadialDistortionSixthOrder_m3091092696(_thisAdjusted, method);
}
// System.Void Windows.Kinect.CameraIntrinsics::set_RadialDistortionSixthOrder(System.Single)
extern "C"  void CameraIntrinsics_set_RadialDistortionSixthOrder_m680827619 (CameraIntrinsics_t2990762441 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CRadialDistortionSixthOrderU3Ek__BackingField_6(L_0);
		return;
	}
}
extern "C"  void CameraIntrinsics_set_RadialDistortionSixthOrder_m680827619_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	CameraIntrinsics_set_RadialDistortionSixthOrder_m680827619(_thisAdjusted, ___value0, method);
}
// System.Int32 Windows.Kinect.CameraIntrinsics::GetHashCode()
extern "C"  int32_t CameraIntrinsics_GetHashCode_m2560716367 (CameraIntrinsics_t2990762441 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		float L_0 = CameraIntrinsics_get_FocalLengthX_m4186558185((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m1558506138((float*)(&V_0), /*hidden argument*/NULL);
		float L_2 = CameraIntrinsics_get_FocalLengthY_m4186558186((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Single_GetHashCode_m1558506138((float*)(&V_1), /*hidden argument*/NULL);
		float L_4 = CameraIntrinsics_get_PrincipalPointX_m1845066236((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = Single_GetHashCode_m1558506138((float*)(&V_2), /*hidden argument*/NULL);
		float L_6 = CameraIntrinsics_get_PrincipalPointY_m3801381372((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_3 = L_6;
		int32_t L_7 = Single_GetHashCode_m1558506138((float*)(&V_3), /*hidden argument*/NULL);
		float L_8 = CameraIntrinsics_get_RadialDistortionSecondOrder_m3062594160((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = Single_GetHashCode_m1558506138((float*)(&V_4), /*hidden argument*/NULL);
		float L_10 = CameraIntrinsics_get_RadialDistortionFourthOrder_m1788917980((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_5 = L_10;
		int32_t L_11 = Single_GetHashCode_m1558506138((float*)(&V_5), /*hidden argument*/NULL);
		float L_12 = CameraIntrinsics_get_RadialDistortionSixthOrder_m3091092696((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_6 = L_12;
		int32_t L_13 = Single_GetHashCode_m1558506138((float*)(&V_6), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7))^(int32_t)L_9))^(int32_t)L_11))^(int32_t)L_13));
	}
}
extern "C"  int32_t CameraIntrinsics_GetHashCode_m2560716367_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_GetHashCode_m2560716367(_thisAdjusted, method);
}
// System.Boolean Windows.Kinect.CameraIntrinsics::Equals(System.Object)
extern "C"  bool CameraIntrinsics_Equals_m732296039 (CameraIntrinsics_t2990762441 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraIntrinsics_Equals_m732296039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, CameraIntrinsics_t2990762441_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = CameraIntrinsics_Equals_m826724480((CameraIntrinsics_t2990762441 *)__this, ((*(CameraIntrinsics_t2990762441 *)((CameraIntrinsics_t2990762441 *)UnBox(L_1, CameraIntrinsics_t2990762441_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool CameraIntrinsics_Equals_m732296039_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_Equals_m732296039(_thisAdjusted, ___obj0, method);
}
// System.Boolean Windows.Kinect.CameraIntrinsics::Equals(Windows.Kinect.CameraIntrinsics)
extern "C"  bool CameraIntrinsics_Equals_m826724480 (CameraIntrinsics_t2990762441 * __this, CameraIntrinsics_t2990762441  ___obj0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t G_B8_0 = 0;
	{
		float L_0 = CameraIntrinsics_get_FocalLengthX_m4186558185((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = CameraIntrinsics_get_FocalLengthX_m4186558185((CameraIntrinsics_t2990762441 *)(&___obj0), /*hidden argument*/NULL);
		bool L_2 = Single_Equals_m1601893879((float*)(&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00b6;
		}
	}
	{
		float L_3 = CameraIntrinsics_get_FocalLengthY_m4186558186((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = CameraIntrinsics_get_FocalLengthY_m4186558186((CameraIntrinsics_t2990762441 *)(&___obj0), /*hidden argument*/NULL);
		bool L_5 = Single_Equals_m1601893879((float*)(&V_1), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00b6;
		}
	}
	{
		float L_6 = CameraIntrinsics_get_PrincipalPointX_m1845066236((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = CameraIntrinsics_get_PrincipalPointX_m1845066236((CameraIntrinsics_t2990762441 *)(&___obj0), /*hidden argument*/NULL);
		bool L_8 = Single_Equals_m1601893879((float*)(&V_2), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b6;
		}
	}
	{
		float L_9 = CameraIntrinsics_get_PrincipalPointY_m3801381372((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10 = CameraIntrinsics_get_PrincipalPointY_m3801381372((CameraIntrinsics_t2990762441 *)(&___obj0), /*hidden argument*/NULL);
		bool L_11 = Single_Equals_m1601893879((float*)(&V_3), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00b6;
		}
	}
	{
		float L_12 = CameraIntrinsics_get_RadialDistortionSecondOrder_m3062594160((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_4 = L_12;
		float L_13 = CameraIntrinsics_get_RadialDistortionSecondOrder_m3062594160((CameraIntrinsics_t2990762441 *)(&___obj0), /*hidden argument*/NULL);
		bool L_14 = Single_Equals_m1601893879((float*)(&V_4), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b6;
		}
	}
	{
		float L_15 = CameraIntrinsics_get_RadialDistortionFourthOrder_m1788917980((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_5 = L_15;
		float L_16 = CameraIntrinsics_get_RadialDistortionFourthOrder_m1788917980((CameraIntrinsics_t2990762441 *)(&___obj0), /*hidden argument*/NULL);
		bool L_17 = Single_Equals_m1601893879((float*)(&V_5), L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b6;
		}
	}
	{
		float L_18 = CameraIntrinsics_get_RadialDistortionSixthOrder_m3091092696((CameraIntrinsics_t2990762441 *)__this, /*hidden argument*/NULL);
		V_6 = L_18;
		float L_19 = CameraIntrinsics_get_RadialDistortionSixthOrder_m3091092696((CameraIntrinsics_t2990762441 *)(&___obj0), /*hidden argument*/NULL);
		bool L_20 = Single_Equals_m1601893879((float*)(&V_6), L_19, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_20));
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B8_0 = 0;
	}

IL_00b7:
	{
		return (bool)G_B8_0;
	}
}
extern "C"  bool CameraIntrinsics_Equals_m826724480_AdjustorThunk (RuntimeObject * __this, CameraIntrinsics_t2990762441  ___obj0, const RuntimeMethod* method)
{
	CameraIntrinsics_t2990762441 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_t2990762441 *>(__this + 1);
	return CameraIntrinsics_Equals_m826724480(_thisAdjusted, ___obj0, method);
}
// System.Boolean Windows.Kinect.CameraIntrinsics::op_Equality(Windows.Kinect.CameraIntrinsics,Windows.Kinect.CameraIntrinsics)
extern "C"  bool CameraIntrinsics_op_Equality_m1906259427 (RuntimeObject * __this /* static, unused */, CameraIntrinsics_t2990762441  ___a0, CameraIntrinsics_t2990762441  ___b1, const RuntimeMethod* method)
{
	{
		CameraIntrinsics_t2990762441  L_0 = ___b1;
		bool L_1 = CameraIntrinsics_Equals_m826724480((CameraIntrinsics_t2990762441 *)(&___a0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Windows.Kinect.CameraIntrinsics::op_Inequality(Windows.Kinect.CameraIntrinsics,Windows.Kinect.CameraIntrinsics)
extern "C"  bool CameraIntrinsics_op_Inequality_m4192321713 (RuntimeObject * __this /* static, unused */, CameraIntrinsics_t2990762441  ___a0, CameraIntrinsics_t2990762441  ___b1, const RuntimeMethod* method)
{
	{
		CameraIntrinsics_t2990762441  L_0 = ___b1;
		bool L_1 = CameraIntrinsics_Equals_m826724480((CameraIntrinsics_t2990762441 *)(&___a0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
