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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// MS.Internal.Xml.Cache.XPathNode[]
struct XPathNodeU5BU5D_t339325318;

extern Il2CppCodeGenString* _stringLiteral811305474;
extern const uint32_t KeyValuePair_2_ToString_m2436023580_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m579361006_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m910120950_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1391611625_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1725904908_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m342607733_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2882821022_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m144997282_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1739958171_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1394661909_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2613351884_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m352839910_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3637890248_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1711784974_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3509457486_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1987861957_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2536510269_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2641661512_MetadataUsageId;
struct XPathNode_t3118381855_marshaled_pinvoke;
struct XPathNode_t3118381855_marshaled_com;



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
#ifndef STRINGBUILDER_T1221177846_H
#define STRINGBUILDER_T1221177846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t1221177846  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t1328083999* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t1221177846 * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t1221177846, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t1328083999* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t1328083999** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t1328083999* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t1221177846, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t1221177846 * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t1221177846 ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t1221177846 * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t1221177846, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t1221177846, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t1221177846, ___m_MaxCapacity_4)); }
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
#endif // STRINGBUILDER_T1221177846_H
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
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef KEYVALUEPAIR_2_T3716250094_H
#define KEYVALUEPAIR_2_T3716250094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t3716250094 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3716250094, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3716250094, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3716250094_H
#ifndef KEYVALUEPAIR_2_T38854645_H
#define KEYVALUEPAIR_2_T38854645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t38854645 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t38854645, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t38854645, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T38854645_H
#ifndef RESOURCELOCATOR_T2156390884_H
#define RESOURCELOCATOR_T2156390884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceLocator
struct  ResourceLocator_t2156390884 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t2156390884, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t2156390884, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t2156390884_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t2156390884_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
#endif // RESOURCELOCATOR_T2156390884_H
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
#ifndef KEYVALUEPAIR_2_T1174980068_H
#define KEYVALUEPAIR_2_T1174980068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t1174980068 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1174980068, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1174980068, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1174980068_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_6)); }
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
#endif // BOOLEAN_T3825574718_H
#ifndef KEYVALUEPAIR_2_T2631255257_H
#define KEYVALUEPAIR_2_T2631255257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
struct  KeyValuePair_2_t2631255257 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint16_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2631255257, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2631255257, ___value_1)); }
	inline uint16_t get_value_1() const { return ___value_1; }
	inline uint16_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint16_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2631255257_H
#ifndef MATRIX4X4_T2933234003_H
#define MATRIX4X4_T2933234003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t2933234003 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t2933234003_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t2933234003  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t2933234003  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t2933234003  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t2933234003 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t2933234003  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t2933234003_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t2933234003  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t2933234003 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t2933234003  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T2933234003_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1328083999* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1328083999* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1328083999** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1328083999* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef UINT16_T986882611_H
#define UINT16_T986882611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t986882611 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t986882611, ___m_value_0)); }
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
#endif // UINT16_T986882611_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_0)); }
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
#endif // SINGLE_T2076509932_H
#ifndef VEC2I_T829768013_H
#define VEC2I_T829768013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t829768013 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t829768013, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t829768013, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T829768013_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2510243513 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2510243513 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t2510243513 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t2510243513 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef KEYVALUEPAIR_2_T3749587448_H
#define KEYVALUEPAIR_2_T3749587448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t3749587448 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3749587448, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3749587448, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3749587448_H
#ifndef KEYVALUEPAIR_2_T3132015601_H
#define KEYVALUEPAIR_2_T3132015601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t3132015601 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3132015601, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3132015601, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3132015601_H
#ifndef CHAR_T3454481338_H
#define CHAR_T3454481338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3454481338 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3454481338, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3454481338_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t3397334013* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t3397334013* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t3397334013* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3454481338_H
#ifndef XPATHNODEREF_T2092605142_H
#define XPATHNODEREF_T2092605142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MS.Internal.Xml.Cache.XPathNodeRef
struct  XPathNodeRef_t2092605142 
{
public:
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeRef::page
	XPathNodeU5BU5D_t339325318* ___page_0;
	// System.Int32 MS.Internal.Xml.Cache.XPathNodeRef::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_page_0() { return static_cast<int32_t>(offsetof(XPathNodeRef_t2092605142, ___page_0)); }
	inline XPathNodeU5BU5D_t339325318* get_page_0() const { return ___page_0; }
	inline XPathNodeU5BU5D_t339325318** get_address_of_page_0() { return &___page_0; }
	inline void set_page_0(XPathNodeU5BU5D_t339325318* value)
	{
		___page_0 = value;
		Il2CppCodeGenWriteBarrier((&___page_0), value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(XPathNodeRef_t2092605142, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_t2092605142_marshaled_pinvoke
{
	XPathNode_t3118381855_marshaled_pinvoke* ___page_0;
	int32_t ___idx_1;
};
// Native definition for COM marshalling of MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_t2092605142_marshaled_com
{
	XPathNode_t3118381855_marshaled_com* ___page_0;
	int32_t ___idx_1;
};
#endif // XPATHNODEREF_T2092605142_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_0)); }
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
#endif // INT32_T2071877448_H
#ifndef VIRTUALBUTTONDATA_T2878855136_H
#define VIRTUALBUTTONDATA_T2878855136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t2878855136 
{
public:
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t2878855136, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t2878855136, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONDATA_T2878855136_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1841601450__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef STEREOSCOPICEYE_T1438019089_H
#define STEREOSCOPICEYE_T1438019089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/StereoscopicEye
struct  StereoscopicEye_t1438019089 
{
public:
	// System.Int32 UnityEngine.Camera/StereoscopicEye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoscopicEye_t1438019089, ___value___2)); }
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
#endif // STEREOSCOPICEYE_T1438019089_H
#ifndef PIXEL_FORMAT_T3010530044_H
#define PIXEL_FORMAT_T3010530044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t3010530044 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t3010530044, ___value___2)); }
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
#endif // PIXEL_FORMAT_T3010530044_H
#ifndef KEYVALUEPAIR_2_T1483742713_H
#define KEYVALUEPAIR_2_T1483742713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>
struct  KeyValuePair_2_t1483742713 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	XPathNodeRef_t2092605142  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	XPathNodeRef_t2092605142  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1483742713, ___key_0)); }
	inline XPathNodeRef_t2092605142  get_key_0() const { return ___key_0; }
	inline XPathNodeRef_t2092605142 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(XPathNodeRef_t2092605142  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1483742713, ___value_1)); }
	inline XPathNodeRef_t2092605142  get_value_1() const { return ___value_1; }
	inline XPathNodeRef_t2092605142 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(XPathNodeRef_t2092605142  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1483742713_H
#ifndef KEYVALUEPAIR_2_T4275477795_H
#define KEYVALUEPAIR_2_T4275477795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_t4275477795 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4275477795, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4275477795, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T4275477795_H
#ifndef PROFILEDATA_T1724666488_H
#define PROFILEDATA_T1724666488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t1724666488 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t829768013  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t829768013  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t1724666488, ___RequestedTextureSize_0)); }
	inline Vec2I_t829768013  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t829768013 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t829768013  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t1724666488, ___ResampledTextureSize_1)); }
	inline Vec2I_t829768013  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t829768013 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t829768013  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t1724666488, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEDATA_T1724666488_H
#ifndef STATUS_T4057911311_H
#define STATUS_T4057911311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t4057911311 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t4057911311, ___value___2)); }
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
#endif // STATUS_T4057911311_H
#ifndef SWITCHVALUESTATE_T1956731294_H
#define SWITCHVALUESTATE_T1956731294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext/SwitchValueState
struct  SwitchValueState_t1956731294 
{
public:
	// System.Int32 System.AppContext/SwitchValueState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SwitchValueState_t1956731294, ___value___2)); }
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
#endif // SWITCHVALUESTATE_T1956731294_H
#ifndef KEYVALUEPAIR_2_T3938993289_H
#define KEYVALUEPAIR_2_T3938993289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>
struct  KeyValuePair_2_t3938993289 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VirtualButtonData_t2878855136  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3938993289, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3938993289, ___value_1)); }
	inline VirtualButtonData_t2878855136  get_value_1() const { return ___value_1; }
	inline VirtualButtonData_t2878855136 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VirtualButtonData_t2878855136  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3938993289_H
#ifndef KEYVALUEPAIR_2_T888819835_H
#define KEYVALUEPAIR_2_T888819835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t888819835 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	intptr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t888819835, ___key_0)); }
	inline intptr_t get_key_0() const { return ___key_0; }
	inline intptr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(intptr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t888819835, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T888819835_H
#ifndef KEYVALUEPAIR_2_T3800763530_H
#define KEYVALUEPAIR_2_T3800763530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>
struct  KeyValuePair_2_t3800763530 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ResourceLocator_t2156390884  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3800763530, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3800763530, ___value_1)); }
	inline ResourceLocator_t2156390884  get_value_1() const { return ___value_1; }
	inline ResourceLocator_t2156390884 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ResourceLocator_t2156390884  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3800763530_H
#ifndef KEYVALUEPAIR_2_T3601103940_H
#define KEYVALUEPAIR_2_T3601103940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>
struct  KeyValuePair_2_t3601103940 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3601103940, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3601103940, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3601103940_H
#ifndef KEYVALUEPAIR_2_T598090632_H
#define KEYVALUEPAIR_2_T598090632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>
struct  KeyValuePair_2_t598090632 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t598090632, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t598090632, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T598090632_H
#ifndef KEYVALUEPAIR_2_T2141048052_H
#define KEYVALUEPAIR_2_T2141048052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct  KeyValuePair_2_t2141048052 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2141048052, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2141048052, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2141048052_H
#ifndef KEYVALUEPAIR_2_T1454814703_H
#define KEYVALUEPAIR_2_T1454814703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>
struct  KeyValuePair_2_t1454814703 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Matrix4x4_t2933234003  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1454814703, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1454814703, ___value_1)); }
	inline Matrix4x4_t2933234003  get_value_1() const { return ___value_1; }
	inline Matrix4x4_t2933234003 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Matrix4x4_t2933234003  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1454814703_H
#ifndef KEYVALUEPAIR_2_T3369039134_H
#define KEYVALUEPAIR_2_T3369039134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct  KeyValuePair_2_t3369039134 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ProfileData_t1724666488  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3369039134, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3369039134, ___value_1)); }
	inline ProfileData_t1724666488  get_value_1() const { return ___value_1; }
	inline ProfileData_t1724666488 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ProfileData_t1724666488  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3369039134_H
#ifndef KEYVALUEPAIR_2_T765288279_H
#define KEYVALUEPAIR_2_T765288279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>
struct  KeyValuePair_2_t765288279 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2_t2243707579  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t765288279, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t765288279, ___value_1)); }
	inline Vector2_t2243707579  get_value_1() const { return ___value_1; }
	inline Vector2_t2243707579 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_t2243707579  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T765288279_H
#ifndef KEYVALUEPAIR_2_T823082168_H
#define KEYVALUEPAIR_2_T823082168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>
struct  KeyValuePair_2_t823082168 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t823082168, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t823082168, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T823082168_H


// System.Void System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1610857601_gshared (KeyValuePair_2_t1483742713 * __this, XPathNodeRef_t2092605142  ___key0, XPathNodeRef_t2092605142  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Key()
extern "C"  XPathNodeRef_t2092605142  KeyValuePair_2_get_Key_m1323383091_gshared (KeyValuePair_2_t1483742713 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Value()
extern "C"  XPathNodeRef_t2092605142  KeyValuePair_2_get_Value_m3945707859_gshared (KeyValuePair_2_t1483742713 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2436023580_gshared (KeyValuePair_2_t1483742713 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3680193043_gshared (KeyValuePair_2_t4275477795 * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
extern "C"  Guid_t  KeyValuePair_2_get_Key_m62318161_gshared (KeyValuePair_2_t4275477795 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2297471857_gshared (KeyValuePair_2_t4275477795 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m579361006_gshared (KeyValuePair_2_t4275477795 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2454877378_gshared (KeyValuePair_2_t3132015601 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2996364399_gshared (KeyValuePair_2_t3132015601 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2664822910_gshared (KeyValuePair_2_t3132015601 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m910120950_gshared (KeyValuePair_2_t3132015601 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3201181706_gshared (KeyValuePair_2_t3749587448 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1537018582_gshared (KeyValuePair_2_t3749587448 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2897691047_gshared (KeyValuePair_2_t3749587448 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1391611625_gshared (KeyValuePair_2_t3749587448 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3074790253_gshared (KeyValuePair_2_t823082168 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2661129203_gshared (KeyValuePair_2_t823082168 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2492290363_gshared (KeyValuePair_2_t823082168 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1725904908_gshared (KeyValuePair_2_t823082168 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3558132120_gshared (KeyValuePair_2_t3938993289 * __this, int32_t ___key0, VirtualButtonData_t2878855136  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1580123998_gshared (KeyValuePair_2_t3938993289 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t2878855136  KeyValuePair_2_get_Value_m3841070478_gshared (KeyValuePair_2_t3938993289 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m342607733_gshared (KeyValuePair_2_t3938993289 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m477426041_gshared (KeyValuePair_2_t888819835 * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  intptr_t KeyValuePair_2_get_Key_m1574332879_gshared (KeyValuePair_2_t888819835 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m544293807_gshared (KeyValuePair_2_t888819835 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2882821022_gshared (KeyValuePair_2_t888819835 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1443088467_gshared (KeyValuePair_2_t3601103940 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1993096717_gshared (KeyValuePair_2_t3601103940 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3084671221_gshared (KeyValuePair_2_t3601103940 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m144997282_gshared (KeyValuePair_2_t3601103940 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4040336782_gshared (KeyValuePair_2_t1174980068 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2113318928_gshared (KeyValuePair_2_t1174980068 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m1916631176_gshared (KeyValuePair_2_t1174980068 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1739958171_gshared (KeyValuePair_2_t1174980068 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1877755778_gshared (KeyValuePair_2_t3716250094 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1454531804_gshared (KeyValuePair_2_t3716250094 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3699669100_gshared (KeyValuePair_2_t3716250094 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1394661909_gshared (KeyValuePair_2_t3716250094 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1640124561_gshared (KeyValuePair_2_t38854645 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2561166459_gshared (KeyValuePair_2_t38854645 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m499643803_gshared (KeyValuePair_2_t38854645 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2613351884_gshared (KeyValuePair_2_t38854645 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2634263433_gshared (KeyValuePair_2_t3800763530 * __this, RuntimeObject * ___key0, ResourceLocator_t2156390884  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1079151927_gshared (KeyValuePair_2_t3800763530 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::get_Value()
extern "C"  ResourceLocator_t2156390884  KeyValuePair_2_get_Value_m3942390335_gshared (KeyValuePair_2_t3800763530 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m352839910_gshared (KeyValuePair_2_t3800763530 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2351688349_gshared (KeyValuePair_2_t2631255257 * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2800370719_gshared (KeyValuePair_2_t2631255257 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C"  uint16_t KeyValuePair_2_get_Value_m3658972159_gshared (KeyValuePair_2_t2631255257 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3637890248_gshared (KeyValuePair_2_t2631255257 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m833149801_gshared (KeyValuePair_2_t3369039134 * __this, RuntimeObject * ___key0, ProfileData_t1724666488  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1277606655_gshared (KeyValuePair_2_t3369039134 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C"  ProfileData_t1724666488  KeyValuePair_2_get_Value_m699551839_gshared (KeyValuePair_2_t3369039134 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1711784974_gshared (KeyValuePair_2_t3369039134 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2804807071_gshared (KeyValuePair_2_t598090632 * __this, int32_t ___key0, float ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3908220913_gshared (KeyValuePair_2_t598090632 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::get_Value()
extern "C"  float KeyValuePair_2_get_Value_m1316884433_gshared (KeyValuePair_2_t598090632 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3509457486_gshared (KeyValuePair_2_t598090632 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2929965284_gshared (KeyValuePair_2_t1454814703 * __this, int32_t ___key0, Matrix4x4_t2933234003  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2563680046_gshared (KeyValuePair_2_t1454814703 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::get_Value()
extern "C"  Matrix4x4_t2933234003  KeyValuePair_2_get_Value_m2758532134_gshared (KeyValuePair_2_t1454814703 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1987861957_gshared (KeyValuePair_2_t1454814703 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1058141420_gshared (KeyValuePair_2_t765288279 * __this, int32_t ___key0, Vector2_t2243707579  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3821651046_gshared (KeyValuePair_2_t765288279 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::get_Value()
extern "C"  Vector2_t2243707579  KeyValuePair_2_get_Value_m858058478_gshared (KeyValuePair_2_t765288279 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2536510269_gshared (KeyValuePair_2_t765288279 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1737106953_gshared (KeyValuePair_2_t2141048052 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1279069287_gshared (KeyValuePair_2_t2141048052 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4144029831_gshared (KeyValuePair_2_t2141048052 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2641661512_gshared (KeyValuePair_2_t2141048052 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1610857601(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1483742713 *, XPathNodeRef_t2092605142 , XPathNodeRef_t2092605142 , const RuntimeMethod*))KeyValuePair_2__ctor_m1610857601_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Key()
#define KeyValuePair_2_get_Key_m1323383091(__this, method) ((  XPathNodeRef_t2092605142  (*) (KeyValuePair_2_t1483742713 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1323383091_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Value()
#define KeyValuePair_2_get_Value_m3945707859(__this, method) ((  XPathNodeRef_t2092605142  (*) (KeyValuePair_2_t1483742713 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3945707859_gshared)(__this, method)
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
extern "C"  StringBuilder_t1221177846 * StringBuilderCache_Acquire_m469721404 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m3618697540 (StringBuilder_t1221177846 * __this, Il2CppChar ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m3636508479 (StringBuilder_t1221177846 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
extern "C"  String_t* StringBuilderCache_GetStringAndRelease_m2015478976 (RuntimeObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::ToString()
#define KeyValuePair_2_ToString_m2436023580(__this, method) ((  String_t* (*) (KeyValuePair_2_t1483742713 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2436023580_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3680193043(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t4275477795 *, Guid_t , RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3680193043_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m62318161(__this, method) ((  Guid_t  (*) (KeyValuePair_2_t4275477795 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m62318161_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2297471857(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t4275477795 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2297471857_gshared)(__this, method)
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3927110175 (Guid_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::ToString()
#define KeyValuePair_2_ToString_m579361006(__this, method) ((  String_t* (*) (KeyValuePair_2_t4275477795 *, const RuntimeMethod*))KeyValuePair_2_ToString_m579361006_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2454877378(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3132015601 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2454877378_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m2996364399(__this, method) ((  int32_t (*) (KeyValuePair_2_t3132015601 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2996364399_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m2664822910(__this, method) ((  int32_t (*) (KeyValuePair_2_t3132015601 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2664822910_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m910120950(__this, method) ((  String_t* (*) (KeyValuePair_2_t3132015601 *, const RuntimeMethod*))KeyValuePair_2_ToString_m910120950_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3201181706(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3749587448 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3201181706_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1537018582(__this, method) ((  int32_t (*) (KeyValuePair_2_t3749587448 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1537018582_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2897691047(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3749587448 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2897691047_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1391611625(__this, method) ((  String_t* (*) (KeyValuePair_2_t3749587448 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1391611625_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3074790253(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t823082168 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3074790253_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
#define KeyValuePair_2_get_Key_m2661129203(__this, method) ((  int32_t (*) (KeyValuePair_2_t823082168 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2661129203_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
#define KeyValuePair_2_get_Value_m2492290363(__this, method) ((  int32_t (*) (KeyValuePair_2_t823082168 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2492290363_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
#define KeyValuePair_2_ToString_m1725904908(__this, method) ((  String_t* (*) (KeyValuePair_2_t823082168 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1725904908_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3558132120(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3938993289 *, int32_t, VirtualButtonData_t2878855136 , const RuntimeMethod*))KeyValuePair_2__ctor_m3558132120_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::get_Key()
#define KeyValuePair_2_get_Key_m1580123998(__this, method) ((  int32_t (*) (KeyValuePair_2_t3938993289 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1580123998_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::get_Value()
#define KeyValuePair_2_get_Value_m3841070478(__this, method) ((  VirtualButtonData_t2878855136  (*) (KeyValuePair_2_t3938993289 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3841070478_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::ToString()
#define KeyValuePair_2_ToString_m342607733(__this, method) ((  String_t* (*) (KeyValuePair_2_t3938993289 *, const RuntimeMethod*))KeyValuePair_2_ToString_m342607733_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m477426041(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t888819835 *, intptr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m477426041_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1574332879(__this, method) ((  intptr_t (*) (KeyValuePair_2_t888819835 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1574332879_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m544293807(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t888819835 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m544293807_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m428195821 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2882821022(__this, method) ((  String_t* (*) (KeyValuePair_2_t888819835 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2882821022_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1443088467(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3601103940 *, RuntimeObject *, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m1443088467_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::get_Key()
#define KeyValuePair_2_get_Key_m1993096717(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3601103940 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1993096717_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::get_Value()
#define KeyValuePair_2_get_Value_m3084671221(__this, method) ((  int32_t (*) (KeyValuePair_2_t3601103940 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3084671221_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::ToString()
#define KeyValuePair_2_ToString_m144997282(__this, method) ((  String_t* (*) (KeyValuePair_2_t3601103940 *, const RuntimeMethod*))KeyValuePair_2_ToString_m144997282_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4040336782(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1174980068 *, RuntimeObject *, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m4040336782_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m2113318928(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1174980068 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2113318928_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m1916631176(__this, method) ((  bool (*) (KeyValuePair_2_t1174980068 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1916631176_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m1253164328 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m1739958171(__this, method) ((  String_t* (*) (KeyValuePair_2_t1174980068 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1739958171_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1877755778(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3716250094 *, RuntimeObject *, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m1877755778_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m1454531804(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3716250094 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1454531804_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m3699669100(__this, method) ((  int32_t (*) (KeyValuePair_2_t3716250094 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3699669100_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m1394661909(__this, method) ((  String_t* (*) (KeyValuePair_2_t3716250094 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1394661909_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1640124561(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t38854645 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1640124561_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2561166459(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t38854645 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2561166459_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m499643803(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t38854645 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m499643803_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2613351884(__this, method) ((  String_t* (*) (KeyValuePair_2_t38854645 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2613351884_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2634263433(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3800763530 *, RuntimeObject *, ResourceLocator_t2156390884 , const RuntimeMethod*))KeyValuePair_2__ctor_m2634263433_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::get_Key()
#define KeyValuePair_2_get_Key_m1079151927(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3800763530 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1079151927_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::get_Value()
#define KeyValuePair_2_get_Value_m3942390335(__this, method) ((  ResourceLocator_t2156390884  (*) (KeyValuePair_2_t3800763530 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3942390335_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::ToString()
#define KeyValuePair_2_ToString_m352839910(__this, method) ((  String_t* (*) (KeyValuePair_2_t3800763530 *, const RuntimeMethod*))KeyValuePair_2_ToString_m352839910_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2351688349(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2631255257 *, RuntimeObject *, uint16_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2351688349_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
#define KeyValuePair_2_get_Key_m2800370719(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2631255257 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2800370719_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
#define KeyValuePair_2_get_Value_m3658972159(__this, method) ((  uint16_t (*) (KeyValuePair_2_t2631255257 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3658972159_gshared)(__this, method)
// System.String System.UInt16::ToString()
extern "C"  String_t* UInt16_ToString_m2038947049 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
#define KeyValuePair_2_ToString_m3637890248(__this, method) ((  String_t* (*) (KeyValuePair_2_t2631255257 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3637890248_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m833149801(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3369039134 *, RuntimeObject *, ProfileData_t1724666488 , const RuntimeMethod*))KeyValuePair_2__ctor_m833149801_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
#define KeyValuePair_2_get_Key_m1277606655(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3369039134 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1277606655_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
#define KeyValuePair_2_get_Value_m699551839(__this, method) ((  ProfileData_t1724666488  (*) (KeyValuePair_2_t3369039134 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m699551839_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
#define KeyValuePair_2_ToString_m1711784974(__this, method) ((  String_t* (*) (KeyValuePair_2_t3369039134 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1711784974_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2804807071(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t598090632 *, int32_t, float, const RuntimeMethod*))KeyValuePair_2__ctor_m2804807071_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::get_Key()
#define KeyValuePair_2_get_Key_m3908220913(__this, method) ((  int32_t (*) (KeyValuePair_2_t598090632 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3908220913_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::get_Value()
#define KeyValuePair_2_get_Value_m1316884433(__this, method) ((  float (*) (KeyValuePair_2_t598090632 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1316884433_gshared)(__this, method)
// System.String System.Single::ToString()
extern "C"  String_t* Single_ToString_m1813392066 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::ToString()
#define KeyValuePair_2_ToString_m3509457486(__this, method) ((  String_t* (*) (KeyValuePair_2_t598090632 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3509457486_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2929965284(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1454814703 *, int32_t, Matrix4x4_t2933234003 , const RuntimeMethod*))KeyValuePair_2__ctor_m2929965284_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::get_Key()
#define KeyValuePair_2_get_Key_m2563680046(__this, method) ((  int32_t (*) (KeyValuePair_2_t1454814703 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2563680046_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::get_Value()
#define KeyValuePair_2_get_Value_m2758532134(__this, method) ((  Matrix4x4_t2933234003  (*) (KeyValuePair_2_t1454814703 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2758532134_gshared)(__this, method)
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m3886768326 (Matrix4x4_t2933234003 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::ToString()
#define KeyValuePair_2_ToString_m1987861957(__this, method) ((  String_t* (*) (KeyValuePair_2_t1454814703 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1987861957_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1058141420(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t765288279 *, int32_t, Vector2_t2243707579 , const RuntimeMethod*))KeyValuePair_2__ctor_m1058141420_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::get_Key()
#define KeyValuePair_2_get_Key_m3821651046(__this, method) ((  int32_t (*) (KeyValuePair_2_t765288279 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3821651046_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::get_Value()
#define KeyValuePair_2_get_Value_m858058478(__this, method) ((  Vector2_t2243707579  (*) (KeyValuePair_2_t765288279 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m858058478_gshared)(__this, method)
// System.String UnityEngine.Vector2::ToString()
extern "C"  String_t* Vector2_ToString_m1990829454 (Vector2_t2243707579 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::ToString()
#define KeyValuePair_2_ToString_m2536510269(__this, method) ((  String_t* (*) (KeyValuePair_2_t765288279 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2536510269_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1737106953(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2141048052 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m1737106953_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1279069287(__this, method) ((  int32_t (*) (KeyValuePair_2_t2141048052 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1279069287_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4144029831(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2141048052 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4144029831_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2641661512(__this, method) ((  String_t* (*) (KeyValuePair_2_t2141048052 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2641661512_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1610857601_gshared (KeyValuePair_2_t1483742713 * __this, XPathNodeRef_t2092605142  ___key0, XPathNodeRef_t2092605142  ___value1, const RuntimeMethod* method)
{
	{
		XPathNodeRef_t2092605142  L_0 = ___key0;
		__this->set_key_0(L_0);
		XPathNodeRef_t2092605142  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1610857601_AdjustorThunk (RuntimeObject * __this, XPathNodeRef_t2092605142  ___key0, XPathNodeRef_t2092605142  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1483742713 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1483742713 *>(__this + 1);
	KeyValuePair_2__ctor_m1610857601(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Key()
extern "C"  XPathNodeRef_t2092605142  KeyValuePair_2_get_Key_m1323383091_gshared (KeyValuePair_2_t1483742713 * __this, const RuntimeMethod* method)
{
	{
		XPathNodeRef_t2092605142  L_0 = (XPathNodeRef_t2092605142 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  XPathNodeRef_t2092605142  KeyValuePair_2_get_Key_m1323383091_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1483742713 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1483742713 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1323383091(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::get_Value()
extern "C"  XPathNodeRef_t2092605142  KeyValuePair_2_get_Value_m3945707859_gshared (KeyValuePair_2_t1483742713 * __this, const RuntimeMethod* method)
{
	{
		XPathNodeRef_t2092605142  L_0 = (XPathNodeRef_t2092605142 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  XPathNodeRef_t2092605142  KeyValuePair_2_get_Value_m3945707859_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1483742713 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1483742713 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3945707859(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2436023580_gshared (KeyValuePair_2_t1483742713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2436023580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	XPathNodeRef_t2092605142  V_1;
	memset(&V_1, 0, sizeof(V_1));
	XPathNodeRef_t2092605142  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		XPathNodeRef_t2092605142  L_2 = KeyValuePair_2_get_Key_m1323383091((KeyValuePair_2_t1483742713 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		XPathNodeRef_t2092605142  L_4 = KeyValuePair_2_get_Key_m1323383091((KeyValuePair_2_t1483742713 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (XPathNodeRef_t2092605142 )L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		*(&V_1) = *(XPathNodeRef_t2092605142 *)UnBox(L_5);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_7 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_7);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_7, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		XPathNodeRef_t2092605142  L_8 = KeyValuePair_2_get_Value_m3945707859((KeyValuePair_2_t1483742713 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_9 = V_0;
		XPathNodeRef_t2092605142  L_10 = KeyValuePair_2_get_Value_m3945707859((KeyValuePair_2_t1483742713 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (XPathNodeRef_t2092605142 )L_10;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_11);
		*(&V_2) = *(XPathNodeRef_t2092605142 *)UnBox(L_11);
		NullCheck((StringBuilder_t1221177846 *)L_9);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_9, (String_t*)L_12, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_13 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_13);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_13, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_14 = V_0;
		String_t* L_15 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2436023580_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1483742713 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1483742713 *>(__this + 1);
	return KeyValuePair_2_ToString_m2436023580(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3680193043_gshared (KeyValuePair_2_t4275477795 * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3680193043_AdjustorThunk (RuntimeObject * __this, Guid_t  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t4275477795 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4275477795 *>(__this + 1);
	KeyValuePair_2__ctor_m3680193043(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
extern "C"  Guid_t  KeyValuePair_2_get_Key_m62318161_gshared (KeyValuePair_2_t4275477795 * __this, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = (Guid_t )__this->get_key_0();
		return L_0;
	}
}
extern "C"  Guid_t  KeyValuePair_2_get_Key_m62318161_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4275477795 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4275477795 *>(__this + 1);
	return KeyValuePair_2_get_Key_m62318161(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2297471857_gshared (KeyValuePair_2_t4275477795 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2297471857_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4275477795 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4275477795 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2297471857(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m579361006_gshared (KeyValuePair_2_t4275477795 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m579361006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		Guid_t  L_2 = KeyValuePair_2_get_Key_m62318161((KeyValuePair_2_t4275477795 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		Guid_t  L_4 = KeyValuePair_2_get_Key_m62318161((KeyValuePair_2_t4275477795 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (Guid_t )L_4;
		String_t* L_5 = Guid_ToString_m3927110175((Guid_t *)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		RuntimeObject * L_7 = KeyValuePair_2_get_Value_m2297471857((KeyValuePair_2_t4275477795 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2297471857((KeyValuePair_2_t4275477795 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_2)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_2)));
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_11);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m579361006_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t4275477795 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t4275477795 *>(__this + 1);
	return KeyValuePair_2_ToString_m579361006(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2454877378_gshared (KeyValuePair_2_t3132015601 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		int32_t L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2454877378_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	KeyValuePair_2__ctor_m2454877378(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2996364399_gshared (KeyValuePair_2_t3132015601 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2996364399_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2996364399(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2664822910_gshared (KeyValuePair_2_t3132015601 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m2664822910_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2664822910(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m910120950_gshared (KeyValuePair_2_t3132015601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m910120950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m2996364399((KeyValuePair_2_t3132015601 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m2996364399((KeyValuePair_2_t3132015601 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		String_t* L_5 = Int32_ToString_m2960866144((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		int32_t L_7 = KeyValuePair_2_get_Value_m2664822910((KeyValuePair_2_t3132015601 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		int32_t L_9 = KeyValuePair_2_get_Value_m2664822910((KeyValuePair_2_t3132015601 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m2960866144((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_11);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m910120950_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	return KeyValuePair_2_ToString_m910120950(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3201181706_gshared (KeyValuePair_2_t3749587448 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3201181706_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	KeyValuePair_2__ctor_m3201181706(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1537018582_gshared (KeyValuePair_2_t3749587448 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1537018582_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1537018582(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2897691047_gshared (KeyValuePair_2_t3749587448 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2897691047_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2897691047(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1391611625_gshared (KeyValuePair_2_t3749587448 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1391611625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m1537018582((KeyValuePair_2_t3749587448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m1537018582((KeyValuePair_2_t3749587448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		String_t* L_5 = Int32_ToString_m2960866144((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		RuntimeObject * L_7 = KeyValuePair_2_get_Value_m2897691047((KeyValuePair_2_t3749587448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2897691047((KeyValuePair_2_t3749587448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_2)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_2)));
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_11);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1391611625_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	return KeyValuePair_2_ToString_m1391611625(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3074790253_gshared (KeyValuePair_2_t823082168 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		int32_t L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3074790253_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t823082168 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t823082168 *>(__this + 1);
	KeyValuePair_2__ctor_m3074790253(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2661129203_gshared (KeyValuePair_2_t823082168 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2661129203_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t823082168 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t823082168 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2661129203(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2492290363_gshared (KeyValuePair_2_t823082168 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m2492290363_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t823082168 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t823082168 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2492290363(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1725904908_gshared (KeyValuePair_2_t823082168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1725904908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m2661129203((KeyValuePair_2_t823082168 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m2661129203((KeyValuePair_2_t823082168 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		String_t* L_5 = Int32_ToString_m2960866144((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		int32_t L_7 = KeyValuePair_2_get_Value_m2492290363((KeyValuePair_2_t823082168 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		int32_t L_9 = KeyValuePair_2_get_Value_m2492290363((KeyValuePair_2_t823082168 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (int32_t)L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_2) = *(int32_t*)UnBox(L_10);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1725904908_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t823082168 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t823082168 *>(__this + 1);
	return KeyValuePair_2_ToString_m1725904908(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3558132120_gshared (KeyValuePair_2_t3938993289 * __this, int32_t ___key0, VirtualButtonData_t2878855136  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		VirtualButtonData_t2878855136  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3558132120_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, VirtualButtonData_t2878855136  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3938993289 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3938993289 *>(__this + 1);
	KeyValuePair_2__ctor_m3558132120(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1580123998_gshared (KeyValuePair_2_t3938993289 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1580123998_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3938993289 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3938993289 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1580123998(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t2878855136  KeyValuePair_2_get_Value_m3841070478_gshared (KeyValuePair_2_t3938993289 * __this, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t2878855136  L_0 = (VirtualButtonData_t2878855136 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  VirtualButtonData_t2878855136  KeyValuePair_2_get_Value_m3841070478_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3938993289 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3938993289 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3841070478(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackerData/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m342607733_gshared (KeyValuePair_2_t3938993289 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m342607733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	VirtualButtonData_t2878855136  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m1580123998((KeyValuePair_2_t3938993289 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m1580123998((KeyValuePair_2_t3938993289 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		String_t* L_5 = Int32_ToString_m2960866144((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		VirtualButtonData_t2878855136  L_7 = KeyValuePair_2_get_Value_m3841070478((KeyValuePair_2_t3938993289 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		VirtualButtonData_t2878855136  L_9 = KeyValuePair_2_get_Value_m3841070478((KeyValuePair_2_t3938993289 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (VirtualButtonData_t2878855136 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_2) = *(VirtualButtonData_t2878855136 *)UnBox(L_10);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m342607733_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3938993289 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3938993289 *>(__this + 1);
	return KeyValuePair_2_ToString_m342607733(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m477426041_gshared (KeyValuePair_2_t888819835 * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m477426041_AdjustorThunk (RuntimeObject * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t888819835 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t888819835 *>(__this + 1);
	KeyValuePair_2__ctor_m477426041(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  intptr_t KeyValuePair_2_get_Key_m1574332879_gshared (KeyValuePair_2_t888819835 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  intptr_t KeyValuePair_2_get_Key_m1574332879_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t888819835 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t888819835 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1574332879(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m544293807_gshared (KeyValuePair_2_t888819835 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m544293807_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t888819835 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t888819835 *>(__this + 1);
	return KeyValuePair_2_get_Value_m544293807(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2882821022_gshared (KeyValuePair_2_t888819835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2882821022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		intptr_t L_2 = KeyValuePair_2_get_Key_m1574332879((KeyValuePair_2_t888819835 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		intptr_t L_4 = KeyValuePair_2_get_Key_m1574332879((KeyValuePair_2_t888819835 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (intptr_t)L_4;
		String_t* L_5 = IntPtr_ToString_m428195821((intptr_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		RuntimeObject * L_7 = KeyValuePair_2_get_Value_m544293807((KeyValuePair_2_t888819835 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m544293807((KeyValuePair_2_t888819835 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_2)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_2)));
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_11);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2882821022_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t888819835 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t888819835 *>(__this + 1);
	return KeyValuePair_2_ToString_m2882821022(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1443088467_gshared (KeyValuePair_2_t3601103940 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		__this->set_key_0(L_0);
		int32_t L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1443088467_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3601103940 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3601103940 *>(__this + 1);
	KeyValuePair_2__ctor_m1443088467(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1993096717_gshared (KeyValuePair_2_t3601103940 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1993096717_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3601103940 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3601103940 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1993096717(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3084671221_gshared (KeyValuePair_2_t3601103940 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m3084671221_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3601103940 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3601103940 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3084671221(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.AppContext/SwitchValueState>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m144997282_gshared (KeyValuePair_2_t3601103940 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m144997282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m1993096717((KeyValuePair_2_t3601103940 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		RuntimeObject * L_4 = KeyValuePair_2_get_Key_m1993096717((KeyValuePair_2_t3601103940 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_4;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		int32_t L_7 = KeyValuePair_2_get_Value_m3084671221((KeyValuePair_2_t3601103940 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		int32_t L_9 = KeyValuePair_2_get_Value_m3084671221((KeyValuePair_2_t3601103940 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (int32_t)L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_2) = *(int32_t*)UnBox(L_10);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m144997282_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3601103940 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3601103940 *>(__this + 1);
	return KeyValuePair_2_ToString_m144997282(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4040336782_gshared (KeyValuePair_2_t1174980068 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		__this->set_key_0(L_0);
		bool L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4040336782_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1174980068 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1174980068 *>(__this + 1);
	KeyValuePair_2__ctor_m4040336782(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2113318928_gshared (KeyValuePair_2_t1174980068 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2113318928_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1174980068 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1174980068 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2113318928(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m1916631176_gshared (KeyValuePair_2_t1174980068 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m1916631176_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1174980068 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1174980068 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1916631176(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1739958171_gshared (KeyValuePair_2_t1174980068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1739958171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2113318928((KeyValuePair_2_t1174980068 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		RuntimeObject * L_4 = KeyValuePair_2_get_Key_m2113318928((KeyValuePair_2_t1174980068 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_4;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		bool L_7 = KeyValuePair_2_get_Value_m1916631176((KeyValuePair_2_t1174980068 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		bool L_9 = KeyValuePair_2_get_Value_m1916631176((KeyValuePair_2_t1174980068 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m1253164328((bool*)(&V_2), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_11);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1739958171_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1174980068 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1174980068 *>(__this + 1);
	return KeyValuePair_2_ToString_m1739958171(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1877755778_gshared (KeyValuePair_2_t3716250094 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		__this->set_key_0(L_0);
		int32_t L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1877755778_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3716250094 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3716250094 *>(__this + 1);
	KeyValuePair_2__ctor_m1877755778(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1454531804_gshared (KeyValuePair_2_t3716250094 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1454531804_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3716250094 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3716250094 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1454531804(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3699669100_gshared (KeyValuePair_2_t3716250094 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m3699669100_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3716250094 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3716250094 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3699669100(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1394661909_gshared (KeyValuePair_2_t3716250094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1394661909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m1454531804((KeyValuePair_2_t3716250094 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		RuntimeObject * L_4 = KeyValuePair_2_get_Key_m1454531804((KeyValuePair_2_t3716250094 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_4;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		int32_t L_7 = KeyValuePair_2_get_Value_m3699669100((KeyValuePair_2_t3716250094 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		int32_t L_9 = KeyValuePair_2_get_Value_m3699669100((KeyValuePair_2_t3716250094 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m2960866144((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_11);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1394661909_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3716250094 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3716250094 *>(__this + 1);
	return KeyValuePair_2_ToString_m1394661909(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1640124561_gshared (KeyValuePair_2_t38854645 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1640124561_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t38854645 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t38854645 *>(__this + 1);
	KeyValuePair_2__ctor_m1640124561(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2561166459_gshared (KeyValuePair_2_t38854645 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2561166459_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t38854645 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t38854645 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2561166459(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m499643803_gshared (KeyValuePair_2_t38854645 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m499643803_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t38854645 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t38854645 *>(__this + 1);
	return KeyValuePair_2_get_Value_m499643803(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2613351884_gshared (KeyValuePair_2_t38854645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2613351884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2561166459((KeyValuePair_2_t38854645 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		RuntimeObject * L_4 = KeyValuePair_2_get_Key_m2561166459((KeyValuePair_2_t38854645 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_4;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		RuntimeObject * L_7 = KeyValuePair_2_get_Value_m499643803((KeyValuePair_2_t38854645 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m499643803((KeyValuePair_2_t38854645 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_2)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_2)));
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_11);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2613351884_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t38854645 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t38854645 *>(__this + 1);
	return KeyValuePair_2_ToString_m2613351884(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2634263433_gshared (KeyValuePair_2_t3800763530 * __this, RuntimeObject * ___key0, ResourceLocator_t2156390884  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		__this->set_key_0(L_0);
		ResourceLocator_t2156390884  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2634263433_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, ResourceLocator_t2156390884  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3800763530 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3800763530 *>(__this + 1);
	KeyValuePair_2__ctor_m2634263433(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1079151927_gshared (KeyValuePair_2_t3800763530 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1079151927_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3800763530 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3800763530 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1079151927(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::get_Value()
extern "C"  ResourceLocator_t2156390884  KeyValuePair_2_get_Value_m3942390335_gshared (KeyValuePair_2_t3800763530 * __this, const RuntimeMethod* method)
{
	{
		ResourceLocator_t2156390884  L_0 = (ResourceLocator_t2156390884 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  ResourceLocator_t2156390884  KeyValuePair_2_get_Value_m3942390335_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3800763530 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3800763530 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3942390335(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m352839910_gshared (KeyValuePair_2_t3800763530 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m352839910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	ResourceLocator_t2156390884  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m1079151927((KeyValuePair_2_t3800763530 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		RuntimeObject * L_4 = KeyValuePair_2_get_Key_m1079151927((KeyValuePair_2_t3800763530 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_4;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		ResourceLocator_t2156390884  L_7 = KeyValuePair_2_get_Value_m3942390335((KeyValuePair_2_t3800763530 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		ResourceLocator_t2156390884  L_9 = KeyValuePair_2_get_Value_m3942390335((KeyValuePair_2_t3800763530 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (ResourceLocator_t2156390884 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_2) = *(ResourceLocator_t2156390884 *)UnBox(L_10);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m352839910_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3800763530 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3800763530 *>(__this + 1);
	return KeyValuePair_2_ToString_m352839910(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2351688349_gshared (KeyValuePair_2_t2631255257 * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		__this->set_key_0(L_0);
		uint16_t L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2351688349_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2631255257 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2631255257 *>(__this + 1);
	KeyValuePair_2__ctor_m2351688349(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2800370719_gshared (KeyValuePair_2_t2631255257 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2800370719_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2631255257 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2631255257 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2800370719(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C"  uint16_t KeyValuePair_2_get_Value_m3658972159_gshared (KeyValuePair_2_t2631255257 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = (uint16_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  uint16_t KeyValuePair_2_get_Value_m3658972159_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2631255257 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2631255257 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3658972159(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3637890248_gshared (KeyValuePair_2_t2631255257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3637890248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	uint16_t V_2 = 0;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2800370719((KeyValuePair_2_t2631255257 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		RuntimeObject * L_4 = KeyValuePair_2_get_Key_m2800370719((KeyValuePair_2_t2631255257 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_4;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		uint16_t L_7 = KeyValuePair_2_get_Value_m3658972159((KeyValuePair_2_t2631255257 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		uint16_t L_9 = KeyValuePair_2_get_Value_m3658972159((KeyValuePair_2_t2631255257 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (uint16_t)L_9;
		String_t* L_10 = UInt16_ToString_m2038947049((uint16_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_11);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_11, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		String_t* L_13 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3637890248_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2631255257 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2631255257 *>(__this + 1);
	return KeyValuePair_2_ToString_m3637890248(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m833149801_gshared (KeyValuePair_2_t3369039134 * __this, RuntimeObject * ___key0, ProfileData_t1724666488  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		__this->set_key_0(L_0);
		ProfileData_t1724666488  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m833149801_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, ProfileData_t1724666488  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3369039134 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3369039134 *>(__this + 1);
	KeyValuePair_2__ctor_m833149801(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1277606655_gshared (KeyValuePair_2_t3369039134 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1277606655_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3369039134 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3369039134 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1277606655(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C"  ProfileData_t1724666488  KeyValuePair_2_get_Value_m699551839_gshared (KeyValuePair_2_t3369039134 * __this, const RuntimeMethod* method)
{
	{
		ProfileData_t1724666488  L_0 = (ProfileData_t1724666488 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  ProfileData_t1724666488  KeyValuePair_2_get_Value_m699551839_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3369039134 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3369039134 *>(__this + 1);
	return KeyValuePair_2_get_Value_m699551839(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1711784974_gshared (KeyValuePair_2_t3369039134 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1711784974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	ProfileData_t1724666488  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m1277606655((KeyValuePair_2_t3369039134 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		RuntimeObject * L_4 = KeyValuePair_2_get_Key_m1277606655((KeyValuePair_2_t3369039134 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_4;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_6 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_6);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_6, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		ProfileData_t1724666488  L_7 = KeyValuePair_2_get_Value_m699551839((KeyValuePair_2_t3369039134 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_8 = V_0;
		ProfileData_t1724666488  L_9 = KeyValuePair_2_get_Value_m699551839((KeyValuePair_2_t3369039134 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (ProfileData_t1724666488 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_2));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_2) = *(ProfileData_t1724666488 *)UnBox(L_10);
		NullCheck((StringBuilder_t1221177846 *)L_8);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_8, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1711784974_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3369039134 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3369039134 *>(__this + 1);
	return KeyValuePair_2_ToString_m1711784974(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2804807071_gshared (KeyValuePair_2_t598090632 * __this, int32_t ___key0, float ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		float L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2804807071_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, float ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t598090632 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t598090632 *>(__this + 1);
	KeyValuePair_2__ctor_m2804807071(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3908220913_gshared (KeyValuePair_2_t598090632 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3908220913_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t598090632 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t598090632 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3908220913(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::get_Value()
extern "C"  float KeyValuePair_2_get_Value_m1316884433_gshared (KeyValuePair_2_t598090632 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_value_1();
		return L_0;
	}
}
extern "C"  float KeyValuePair_2_get_Value_m1316884433_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t598090632 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t598090632 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1316884433(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,System.Single>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3509457486_gshared (KeyValuePair_2_t598090632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3509457486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m3908220913((KeyValuePair_2_t598090632 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m3908220913((KeyValuePair_2_t598090632 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		*(&V_1) = *(int32_t*)UnBox(L_5);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_7 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_7);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_7, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		float L_8 = KeyValuePair_2_get_Value_m1316884433((KeyValuePair_2_t598090632 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_9 = V_0;
		float L_10 = KeyValuePair_2_get_Value_m1316884433((KeyValuePair_2_t598090632 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (float)L_10;
		String_t* L_11 = Single_ToString_m1813392066((float*)(&V_2), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_9);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_9, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3509457486_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t598090632 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t598090632 *>(__this + 1);
	return KeyValuePair_2_ToString_m3509457486(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2929965284_gshared (KeyValuePair_2_t1454814703 * __this, int32_t ___key0, Matrix4x4_t2933234003  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		Matrix4x4_t2933234003  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2929965284_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, Matrix4x4_t2933234003  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1454814703 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1454814703 *>(__this + 1);
	KeyValuePair_2__ctor_m2929965284(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2563680046_gshared (KeyValuePair_2_t1454814703 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2563680046_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1454814703 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1454814703 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2563680046(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::get_Value()
extern "C"  Matrix4x4_t2933234003  KeyValuePair_2_get_Value_m2758532134_gshared (KeyValuePair_2_t1454814703 * __this, const RuntimeMethod* method)
{
	{
		Matrix4x4_t2933234003  L_0 = (Matrix4x4_t2933234003 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  Matrix4x4_t2933234003  KeyValuePair_2_get_Value_m2758532134_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1454814703 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1454814703 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2758532134(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1987861957_gshared (KeyValuePair_2_t1454814703 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1987861957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	Matrix4x4_t2933234003  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m2563680046((KeyValuePair_2_t1454814703 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m2563680046((KeyValuePair_2_t1454814703 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		*(&V_1) = *(int32_t*)UnBox(L_5);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_7 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_7);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_7, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		Matrix4x4_t2933234003  L_8 = KeyValuePair_2_get_Value_m2758532134((KeyValuePair_2_t1454814703 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_9 = V_0;
		Matrix4x4_t2933234003  L_10 = KeyValuePair_2_get_Value_m2758532134((KeyValuePair_2_t1454814703 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (Matrix4x4_t2933234003 )L_10;
		String_t* L_11 = Matrix4x4_ToString_m3886768326((Matrix4x4_t2933234003 *)(&V_2), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_9);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_9, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1987861957_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1454814703 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1454814703 *>(__this + 1);
	return KeyValuePair_2_ToString_m1987861957(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1058141420_gshared (KeyValuePair_2_t765288279 * __this, int32_t ___key0, Vector2_t2243707579  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		Vector2_t2243707579  L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1058141420_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, Vector2_t2243707579  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t765288279 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t765288279 *>(__this + 1);
	KeyValuePair_2__ctor_m1058141420(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m3821651046_gshared (KeyValuePair_2_t765288279 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m3821651046_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t765288279 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t765288279 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3821651046(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::get_Value()
extern "C"  Vector2_t2243707579  KeyValuePair_2_get_Value_m858058478_gshared (KeyValuePair_2_t765288279 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2243707579  L_0 = (Vector2_t2243707579 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  Vector2_t2243707579  KeyValuePair_2_get_Value_m858058478_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t765288279 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t765288279 *>(__this + 1);
	return KeyValuePair_2_get_Value_m858058478(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2536510269_gshared (KeyValuePair_2_t765288279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2536510269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m3821651046((KeyValuePair_2_t765288279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m3821651046((KeyValuePair_2_t765288279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		*(&V_1) = *(int32_t*)UnBox(L_5);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_7 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_7);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_7, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		Vector2_t2243707579  L_8 = KeyValuePair_2_get_Value_m858058478((KeyValuePair_2_t765288279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		StringBuilder_t1221177846 * L_9 = V_0;
		Vector2_t2243707579  L_10 = KeyValuePair_2_get_Value_m858058478((KeyValuePair_2_t765288279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (Vector2_t2243707579 )L_10;
		String_t* L_11 = Vector2_ToString_m1990829454((Vector2_t2243707579 *)(&V_2), /*hidden argument*/NULL);
		NullCheck((StringBuilder_t1221177846 *)L_9);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_9, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2536510269_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t765288279 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t765288279 *>(__this + 1);
	return KeyValuePair_2_ToString_m2536510269(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1737106953_gshared (KeyValuePair_2_t2141048052 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		__this->set_key_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_value_1(L_1);
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1737106953_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2141048052 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2141048052 *>(__this + 1);
	KeyValuePair_2__ctor_m1737106953(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1279069287_gshared (KeyValuePair_2_t2141048052 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1279069287_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2141048052 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2141048052 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1279069287(_thisAdjusted, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4144029831_gshared (KeyValuePair_2_t2141048052 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4144029831_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2141048052 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2141048052 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4144029831(_thisAdjusted, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2641661512_gshared (KeyValuePair_2_t2141048052 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2641661512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = StringBuilderCache_Acquire_m469721404(NULL /*static, unused*/, (int32_t)((int32_t)16), /*hidden argument*/NULL);
		V_0 = (StringBuilder_t1221177846 *)L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_1);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_1, (Il2CppChar)((int32_t)91), /*hidden argument*/NULL);
		int32_t L_2 = KeyValuePair_2_get_Key_m1279069287((KeyValuePair_2_t2141048052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
	}
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = KeyValuePair_2_get_Key_m1279069287((KeyValuePair_2_t2141048052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		V_1 = (int32_t)L_4;
		RuntimeObject * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&V_1));
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		*(&V_1) = *(int32_t*)UnBox(L_5);
		NullCheck((StringBuilder_t1221177846 *)L_3);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_3, (String_t*)L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		StringBuilder_t1221177846 * L_7 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_7);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_7, (String_t*)_stringLiteral811305474, /*hidden argument*/NULL);
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m4144029831((KeyValuePair_2_t2141048052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t1221177846 * L_9 = V_0;
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m4144029831((KeyValuePair_2_t2141048052 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_2 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(*(&V_2)));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_2)));
		NullCheck((StringBuilder_t1221177846 *)L_9);
		StringBuilder_Append_m3636508479((StringBuilder_t1221177846 *)L_9, (String_t*)L_11, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck((StringBuilder_t1221177846 *)L_12);
		StringBuilder_Append_m3618697540((StringBuilder_t1221177846 *)L_12, (Il2CppChar)((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_13 = V_0;
		String_t* L_14 = StringBuilderCache_GetStringAndRelease_m2015478976(NULL /*static, unused*/, (StringBuilder_t1221177846 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2641661512_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2141048052 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2141048052 *>(__this + 1);
	return KeyValuePair_2_ToString_m2641661512(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
