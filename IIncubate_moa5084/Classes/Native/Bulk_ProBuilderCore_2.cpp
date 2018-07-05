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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ProBuilder.Core.pb_VersionInfo
struct pb_VersionInfo_t568354953;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Text.RegularExpressions.Match
struct Match_t3408321083;
// System.Text.RegularExpressions.Group
struct Group_t2468205786;
// System.Text.RegularExpressions.Capture
struct Capture_t2232016050;
// System.String[]
struct StringU5BU5D_t1281789340;
// ProBuilder.Core.pb_Vertex
struct pb_Vertex_t2424025474;
// ProBuilder.Core.pb_Vertex[]
struct pb_VertexU5BU5D_t1897471543;
// ProBuilder.Core.pb_Object
struct pb_Object_t4080196558;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t471298240;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t2702166353;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color>
struct IEnumerable_1_t1535539213;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t2298881826;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t1136082412;
// UnityEngine.Object
struct Object_t631007953;
// System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>
struct IList_1_t4239345257;
// ProBuilder.Core.pb_VertexConnection
struct pb_VertexConnection_t1937459598;
// ProBuilder.Core.pb_Face
struct pb_Face_t1264560821;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// ProBuilder.Core.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3213957336;
// ProBuilder.Core.pb_IntArray
struct pb_IntArray_t560209077;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1930798642;
// System.Collections.Generic.List`1<ProBuilder.Core.pb_VertexConnection>
struct List_1_t3409534340;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// ProBuilder.Core.pb_WingedEdge
struct pb_WingedEdge_t1011255431;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// ProBuilder.Core.pb_WingedEdgeEnumerator
struct pb_WingedEdgeEnumerator_t1885848514;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// ProBuilder.Core.pb_EdgeLookup
struct pb_EdgeLookup_t1945391737;
// System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>
struct List_1_t3138043566;
// ProBuilder.Core.pb_Edge[]
struct pb_EdgeU5BU5D_t1313766249;
// System.Collections.Generic.IEnumerable`1<ProBuilder.Core.pb_Edge>
struct IEnumerable_1_t645821713;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>>
struct Dictionary_2_t1372043504;
// System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>
struct List_1_t2483330173;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t1515895227;
// ProBuilder.Core.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0
struct U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839;
// System.Func`2<ProBuilder.Core.pb_WingedEdge,System.Boolean>
struct Func_2_t2166437104;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Collections.Generic.IEnumerable`1<ProBuilder.Core.pb_WingedEdge>
struct IEnumerable_1_t4286075616;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Func`2<ProBuilder.Core.pb_WingedEdge,ProBuilder.Core.pb_Edge>
struct Func_2_t3735117963;
// System.Func`2<System.Object,ProBuilder.Core.pb_Edge>
struct Func_2_t1032993034;
// System.Func`2<ProBuilder.Core.pb_Edge,System.Int32>
struct Func_2_t787796887;
// ProBuilder.Core.pb_Face[]
struct pb_FaceU5BU5D_t2241827544;
// System.Collections.Generic.IEnumerable`1<ProBuilder.Core.pb_Face>
struct IEnumerable_1_t244413710;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1839659084;
// System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,ProBuilder.Core.pb_WingedEdge>
struct Dictionary_2_t828488639;
// System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,System.Object>
struct Dictionary_2_t2897339372;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// ProBuilder.Core.pb_XYZ_Color
struct pb_XYZ_Color_t186003279;
// ProBuilder.Core.ProGridsConditionalSnapAttribute
struct ProGridsConditionalSnapAttribute_t3996304602;
// System.Attribute
struct Attribute_t861562559;
// ProBuilder.Core.ProGridsNoSnapAttribute
struct ProGridsNoSnapAttribute_t871205694;
// ProBuilder.Core.pb_UV
struct pb_UV_t3327765725;
// UnityEngine.Material
struct Material_t340375123;
// ProBuilder.Core.pb_VertexConnection[]
struct pb_VertexConnectionU5BU5D_t732940411;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>[]
struct List_1U5BU5D_t151714032;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>,System.Collections.DictionaryEntry>
struct Transform_1_t4051020172;
// ProBuilder.Core.pb_WingedEdge[]
struct pb_WingedEdgeU5BU5D_t1251096958;
// System.Collections.Generic.HashSet`1/Link<System.Int32>[]
struct LinkU5BU5D_t3073131127;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t4284552512;
// System.Collections.Generic.IEqualityComparer`1<ProBuilder.Core.pb_Edge>
struct IEqualityComparer_1_t3773300842;
// System.Collections.Generic.Dictionary`2/Transform`1<ProBuilder.Core.pb_Edge,ProBuilder.Core.pb_WingedEdge,System.Collections.DictionaryEntry>
struct Transform_1_t304287393;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1760593541;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2106687985;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t69770484;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// ProBuilder.Core.pb_UnwrapParameters
struct pb_UnwrapParameters_t3133121206;
// System.Action`1<ProBuilder.Core.pb_Object>
struct Action_1_t4252664153;
// System.Func`2<ProBuilder.Core.pb_Face,System.Int32>
struct Func_2_t1715858182;
// System.Func`2<ProBuilder.Core.pb_Face,System.Boolean>
struct Func_2_t3157167690;
// System.Func`2<ProBuilder.Core.pb_Submesh,UnityEngine.Material>
struct Func_2_t2697311411;
// System.Func`2<ProBuilder.Core.pb_Face,System.Collections.Generic.IEnumerable`1<System.Int32>>
struct Func_2_t695711071;

extern RuntimeClass* pb_VersionInfo_t568354953_il2cpp_TypeInfo_var;
extern RuntimeClass* pb_Version_t2431675024_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral311822790;
extern String_t* _stringLiteral3623703453;
extern const uint32_t pb_Version__cctor_m2321182676_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral830187393;
extern const uint32_t pb_VersionInfo__ctor_m776985384_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t pb_VersionInfo_get_MajorMinorPatch_m444100749_MetadataUsageId;
extern const uint32_t pb_VersionInfo_Equals_m3550852761_MetadataUsageId;
extern RuntimeClass* VersionType_t1333685008_il2cpp_TypeInfo_var;
extern const uint32_t pb_VersionInfo_GetHashCode_m729831595_MetadataUsageId;
extern const uint32_t pb_VersionInfo_Equals_m2420148568_MetadataUsageId;
extern const uint32_t pb_VersionInfo_CompareTo_m2297211256_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t pb_VersionInfo_ToString_m2999028235_MetadataUsageId;
extern String_t* _stringLiteral3406942722;
extern const uint32_t pb_VersionInfo_ToString_m3399858745_MetadataUsageId;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral149512971;
extern String_t* _stringLiteral4284968698;
extern String_t* _stringLiteral3182724753;
extern String_t* _stringLiteral2841834373;
extern const uint32_t pb_VersionInfo_TryGetVersionInfo_m969676263_MetadataUsageId;
extern String_t* _stringLiteral545303883;
extern String_t* _stringLiteral4053881628;
extern String_t* _stringLiteral3412915140;
extern String_t* _stringLiteral3447949273;
extern String_t* _stringLiteral1728156118;
extern const uint32_t pb_VersionInfo_GetVersionType_m2890666339_MetadataUsageId;
extern String_t* _stringLiteral3326411425;
extern const uint32_t pb_VersionInfo_GetBuildNumber_m2248782345_MetadataUsageId;
extern RuntimeClass* pb_Vertex_t2424025474_il2cpp_TypeInfo_var;
extern const uint32_t pb_Vertex_Equals_m1280853635_MetadataUsageId;
extern const uint32_t pb_Vertex_op_Addition_m1933930467_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t pb_Vertex_Add_m3197668007_MetadataUsageId;
extern const uint32_t pb_Vertex_op_Subtraction_m1464747965_MetadataUsageId;
extern const uint32_t pb_Vertex_Subtract_m2884692325_MetadataUsageId;
extern const uint32_t pb_Vertex_op_Multiply_m1484448880_MetadataUsageId;
extern const uint32_t pb_Vertex_Multiply_m2034339291_MetadataUsageId;
extern const uint32_t pb_Vertex_op_Division_m398869066_MetadataUsageId;
extern const uint32_t pb_Vertex_Divide_m2515048396_MetadataUsageId;
extern RuntimeClass* ICollection_1_t1484130691_il2cpp_TypeInfo_var;
extern RuntimeClass* pb_VertexU5BU5D_t1897471543_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t496136383_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t471298240_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3980905937_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisVector3_t3722313464_m353473236_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisColor_t2555686324_m3934967420_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisVector4_t3319028937_m777756441_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisVector2_t2156229523_m4027559823_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m783205072_RuntimeMethod_var;
extern const uint32_t pb_Vertex_GetVertices_m1833137127_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t pb_Vertex_GetVertices_m3718501708_MetadataUsageId;
extern RuntimeClass* ICollection_1_t957210412_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* ColorU5BU5D_t941916413_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4U5BU5D_t934056436_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t4239345257_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2075911971_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2996644200_RuntimeMethod_var;
extern const uint32_t pb_Vertex_GetArrays_m4132877272_MetadataUsageId;
extern const uint32_t pb_Vertex_SetMesh_m3293155907_MetadataUsageId;
extern const uint32_t pb_Vertex_Average_m1559956661_MetadataUsageId;
extern const uint32_t pb_Vertex_Mix_m2907664785_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const uint32_t pb_VertexConnection_get_isValid_m483077075_MetadataUsageId;
extern RuntimeClass* pb_VertexConnection_t1937459598_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_ToList_TisInt32_t2950945753_m3036595195_RuntimeMethod_var;
extern const uint32_t pb_VertexConnection_Distinct_m1958529234_MetadataUsageId;
extern const uint32_t pb_VertexConnection_Equals_m2951124188_MetadataUsageId;
extern const RuntimeMethod* pb_Util_ToString_TisInt32_t2950945753_m506958589_RuntimeMethod_var;
extern String_t* _stringLiteral3787497674;
extern String_t* _stringLiteral3450517380;
extern const uint32_t pb_VertexConnection_ToString_m3469647405_MetadataUsageId;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2928508082_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3513848896_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m509547872_RuntimeMethod_var;
extern const uint32_t pb_VertexConnection_AllTriangles_m2202413865_MetadataUsageId;
extern RuntimeClass* pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var;
extern RuntimeClass* pb_Edge_t1665968824_il2cpp_TypeInfo_var;
extern const uint32_t pb_WingedEdge_Equals_m3096761069_MetadataUsageId;
extern RuntimeClass* pb_WingedEdgeEnumerator_t1885848514_il2cpp_TypeInfo_var;
extern const uint32_t pb_WingedEdge_GetEnumerator_m1837634229_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral78144138;
extern String_t* _stringLiteral1202628576;
extern const uint32_t pb_WingedEdge_ToString_m2340151532_MetadataUsageId;
extern RuntimeClass* pb_EdgeLookupU5BU5D_t2489130884_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t pb_WingedEdge_MakeQuad_m4068909805_MetadataUsageId;
extern RuntimeClass* List_1_t3138043566_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1459085071_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_SortEdgesByAdjacency_m107630097_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m1947621579_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m2770297842_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m17174339_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_SortEdgesByAdjacency_m212285346_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1372043504_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2483330173_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1884255798_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1339110848_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m804141079_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2985303161_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3006004207_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3833384167_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m244620178_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_GetSpokes_m3784653400_MetadataUsageId;
extern RuntimeClass* U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2166437104_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3735117963_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t787796887_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m1292611489_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3495493528_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_Tispb_WingedEdge_t1011255431_m1579429792_RuntimeMethod_var;
extern const RuntimeMethod* pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__0_m1744158296_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4245899875_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_Tispb_WingedEdge_t1011255431_Tispb_Edge_t1665968824_m355886542_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_Tispb_Edge_t1665968824_m2039411076_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_get_Count_m1006910788_RuntimeMethod_var;
extern const RuntimeMethod* pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__1_m2223624609_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4237725141_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_Tispb_Edge_t1665968824_TisInt32_t2950945753_m2304850911_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_SortCommonIndicesByAdjacency_m1164422170_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t828488639_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t244413710_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1697131289_il2cpp_TypeInfo_var;
extern RuntimeClass* pb_EdgeLookup_t1945391737_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Distinct_Tispb_Face_t1264560821_m2370988055_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3789757531_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1511102918_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3047336659_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m702373266_RuntimeMethod_var;
extern const uint32_t pb_WingedEdge_GetWingedEdges_m911427999_MetadataUsageId;
extern const RuntimeMethod* HashSet_1_Contains_m1005706419_RuntimeMethod_var;
extern const uint32_t U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m1292611489_MetadataUsageId;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const RuntimeMethod* pb_WingedEdgeEnumerator_get_Current_m1786682037_RuntimeMethod_var;
extern const uint32_t pb_WingedEdgeEnumerator_get_Current_m1786682037_MetadataUsageId;
extern RuntimeClass* pb_ColorUtil_t600019625_il2cpp_TypeInfo_var;
extern const uint32_t pb_XYZ_Color_FromRGB_m4145831970_MetadataUsageId;
extern const uint32_t pb_XYZ_Color_FromRGB_m2664003196_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3099091510;
extern const uint32_t pb_XYZ_Color_ToString_m2983137868_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct StringU5BU5D_t1281789340;
struct pb_VertexU5BU5D_t1897471543;
struct Vector3U5BU5D_t1718750761;
struct ColorU5BU5D_t941916413;
struct Vector2U5BU5D_t1457185986;
struct Vector4U5BU5D_t934056436;
struct pb_IntArrayU5BU5D_t3213957336;
struct ObjectU5BU5D_t2843939325;
struct Int32U5BU5D_t385246372;
struct pb_EdgeLookupU5BU5D_t2489130884;
struct pb_EdgeU5BU5D_t1313766249;
struct pb_FaceU5BU5D_t2241827544;


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
#ifndef PB_FACE_T1264560821_H
#define PB_FACE_T1264560821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Face
struct  pb_Face_t1264560821  : public RuntimeObject
{
public:
	// System.Int32[] ProBuilder.Core.pb_Face::_indices
	Int32U5BU5D_t385246372* ____indices_0;
	// System.Int32[] ProBuilder.Core.pb_Face::_distinctIndices
	Int32U5BU5D_t385246372* ____distinctIndices_1;
	// ProBuilder.Core.pb_Edge[] ProBuilder.Core.pb_Face::_edges
	pb_EdgeU5BU5D_t1313766249* ____edges_2;
	// System.Int32 ProBuilder.Core.pb_Face::_smoothingGroup
	int32_t ____smoothingGroup_3;
	// ProBuilder.Core.pb_UV ProBuilder.Core.pb_Face::_uv
	pb_UV_t3327765725 * ____uv_4;
	// UnityEngine.Material ProBuilder.Core.pb_Face::_mat
	Material_t340375123 * ____mat_5;
	// System.Boolean ProBuilder.Core.pb_Face::manualUV
	bool ___manualUV_6;
	// System.Int32 ProBuilder.Core.pb_Face::elementGroup
	int32_t ___elementGroup_7;
	// System.Int32 ProBuilder.Core.pb_Face::textureGroup
	int32_t ___textureGroup_8;

public:
	inline static int32_t get_offset_of__indices_0() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ____indices_0)); }
	inline Int32U5BU5D_t385246372* get__indices_0() const { return ____indices_0; }
	inline Int32U5BU5D_t385246372** get_address_of__indices_0() { return &____indices_0; }
	inline void set__indices_0(Int32U5BU5D_t385246372* value)
	{
		____indices_0 = value;
		Il2CppCodeGenWriteBarrier((&____indices_0), value);
	}

	inline static int32_t get_offset_of__distinctIndices_1() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ____distinctIndices_1)); }
	inline Int32U5BU5D_t385246372* get__distinctIndices_1() const { return ____distinctIndices_1; }
	inline Int32U5BU5D_t385246372** get_address_of__distinctIndices_1() { return &____distinctIndices_1; }
	inline void set__distinctIndices_1(Int32U5BU5D_t385246372* value)
	{
		____distinctIndices_1 = value;
		Il2CppCodeGenWriteBarrier((&____distinctIndices_1), value);
	}

	inline static int32_t get_offset_of__edges_2() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ____edges_2)); }
	inline pb_EdgeU5BU5D_t1313766249* get__edges_2() const { return ____edges_2; }
	inline pb_EdgeU5BU5D_t1313766249** get_address_of__edges_2() { return &____edges_2; }
	inline void set__edges_2(pb_EdgeU5BU5D_t1313766249* value)
	{
		____edges_2 = value;
		Il2CppCodeGenWriteBarrier((&____edges_2), value);
	}

	inline static int32_t get_offset_of__smoothingGroup_3() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ____smoothingGroup_3)); }
	inline int32_t get__smoothingGroup_3() const { return ____smoothingGroup_3; }
	inline int32_t* get_address_of__smoothingGroup_3() { return &____smoothingGroup_3; }
	inline void set__smoothingGroup_3(int32_t value)
	{
		____smoothingGroup_3 = value;
	}

	inline static int32_t get_offset_of__uv_4() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ____uv_4)); }
	inline pb_UV_t3327765725 * get__uv_4() const { return ____uv_4; }
	inline pb_UV_t3327765725 ** get_address_of__uv_4() { return &____uv_4; }
	inline void set__uv_4(pb_UV_t3327765725 * value)
	{
		____uv_4 = value;
		Il2CppCodeGenWriteBarrier((&____uv_4), value);
	}

	inline static int32_t get_offset_of__mat_5() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ____mat_5)); }
	inline Material_t340375123 * get__mat_5() const { return ____mat_5; }
	inline Material_t340375123 ** get_address_of__mat_5() { return &____mat_5; }
	inline void set__mat_5(Material_t340375123 * value)
	{
		____mat_5 = value;
		Il2CppCodeGenWriteBarrier((&____mat_5), value);
	}

	inline static int32_t get_offset_of_manualUV_6() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ___manualUV_6)); }
	inline bool get_manualUV_6() const { return ___manualUV_6; }
	inline bool* get_address_of_manualUV_6() { return &___manualUV_6; }
	inline void set_manualUV_6(bool value)
	{
		___manualUV_6 = value;
	}

	inline static int32_t get_offset_of_elementGroup_7() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ___elementGroup_7)); }
	inline int32_t get_elementGroup_7() const { return ___elementGroup_7; }
	inline int32_t* get_address_of_elementGroup_7() { return &___elementGroup_7; }
	inline void set_elementGroup_7(int32_t value)
	{
		___elementGroup_7 = value;
	}

	inline static int32_t get_offset_of_textureGroup_8() { return static_cast<int32_t>(offsetof(pb_Face_t1264560821, ___textureGroup_8)); }
	inline int32_t get_textureGroup_8() const { return ___textureGroup_8; }
	inline int32_t* get_address_of_textureGroup_8() { return &___textureGroup_8; }
	inline void set_textureGroup_8(int32_t value)
	{
		___textureGroup_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_FACE_T1264560821_H
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
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef PB_INTARRAY_T560209077_H
#define PB_INTARRAY_T560209077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_IntArray
struct  pb_IntArray_t560209077  : public RuntimeObject
{
public:
	// System.Int32[] ProBuilder.Core.pb_IntArray::array
	Int32U5BU5D_t385246372* ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(pb_IntArray_t560209077, ___array_0)); }
	inline Int32U5BU5D_t385246372* get_array_0() const { return ___array_0; }
	inline Int32U5BU5D_t385246372** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(Int32U5BU5D_t385246372* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_INTARRAY_T560209077_H
#ifndef LIST_1_T3409534340_H
#define LIST_1_T3409534340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ProBuilder.Core.pb_VertexConnection>
struct  List_1_t3409534340  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	pb_VertexConnectionU5BU5D_t732940411* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3409534340, ____items_1)); }
	inline pb_VertexConnectionU5BU5D_t732940411* get__items_1() const { return ____items_1; }
	inline pb_VertexConnectionU5BU5D_t732940411** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(pb_VertexConnectionU5BU5D_t732940411* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3409534340, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3409534340, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3409534340_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	pb_VertexConnectionU5BU5D_t732940411* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3409534340_StaticFields, ___EmptyArray_4)); }
	inline pb_VertexConnectionU5BU5D_t732940411* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline pb_VertexConnectionU5BU5D_t732940411** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(pb_VertexConnectionU5BU5D_t732940411* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3409534340_H
#ifndef PB_WINGEDEDGE_T1011255431_H
#define PB_WINGEDEDGE_T1011255431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_WingedEdge
struct  pb_WingedEdge_t1011255431  : public RuntimeObject
{
public:
	// ProBuilder.Core.pb_EdgeLookup ProBuilder.Core.pb_WingedEdge::edge
	pb_EdgeLookup_t1945391737 * ___edge_0;
	// ProBuilder.Core.pb_Face ProBuilder.Core.pb_WingedEdge::face
	pb_Face_t1264560821 * ___face_1;
	// ProBuilder.Core.pb_WingedEdge ProBuilder.Core.pb_WingedEdge::next
	pb_WingedEdge_t1011255431 * ___next_2;
	// ProBuilder.Core.pb_WingedEdge ProBuilder.Core.pb_WingedEdge::previous
	pb_WingedEdge_t1011255431 * ___previous_3;
	// ProBuilder.Core.pb_WingedEdge ProBuilder.Core.pb_WingedEdge::opposite
	pb_WingedEdge_t1011255431 * ___opposite_4;

public:
	inline static int32_t get_offset_of_edge_0() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1011255431, ___edge_0)); }
	inline pb_EdgeLookup_t1945391737 * get_edge_0() const { return ___edge_0; }
	inline pb_EdgeLookup_t1945391737 ** get_address_of_edge_0() { return &___edge_0; }
	inline void set_edge_0(pb_EdgeLookup_t1945391737 * value)
	{
		___edge_0 = value;
		Il2CppCodeGenWriteBarrier((&___edge_0), value);
	}

	inline static int32_t get_offset_of_face_1() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1011255431, ___face_1)); }
	inline pb_Face_t1264560821 * get_face_1() const { return ___face_1; }
	inline pb_Face_t1264560821 ** get_address_of_face_1() { return &___face_1; }
	inline void set_face_1(pb_Face_t1264560821 * value)
	{
		___face_1 = value;
		Il2CppCodeGenWriteBarrier((&___face_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1011255431, ___next_2)); }
	inline pb_WingedEdge_t1011255431 * get_next_2() const { return ___next_2; }
	inline pb_WingedEdge_t1011255431 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(pb_WingedEdge_t1011255431 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}

	inline static int32_t get_offset_of_previous_3() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1011255431, ___previous_3)); }
	inline pb_WingedEdge_t1011255431 * get_previous_3() const { return ___previous_3; }
	inline pb_WingedEdge_t1011255431 ** get_address_of_previous_3() { return &___previous_3; }
	inline void set_previous_3(pb_WingedEdge_t1011255431 * value)
	{
		___previous_3 = value;
		Il2CppCodeGenWriteBarrier((&___previous_3), value);
	}

	inline static int32_t get_offset_of_opposite_4() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1011255431, ___opposite_4)); }
	inline pb_WingedEdge_t1011255431 * get_opposite_4() const { return ___opposite_4; }
	inline pb_WingedEdge_t1011255431 ** get_address_of_opposite_4() { return &___opposite_4; }
	inline void set_opposite_4(pb_WingedEdge_t1011255431 * value)
	{
		___opposite_4 = value;
		Il2CppCodeGenWriteBarrier((&___opposite_4), value);
	}
};

struct pb_WingedEdge_t1011255431_StaticFields
{
public:
	// System.Func`2<ProBuilder.Core.pb_WingedEdge,ProBuilder.Core.pb_Edge> ProBuilder.Core.pb_WingedEdge::<>f__am$cache0
	Func_2_t3735117963 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`2<ProBuilder.Core.pb_Edge,System.Int32> ProBuilder.Core.pb_WingedEdge::<>f__am$cache1
	Func_2_t787796887 * ___U3CU3Ef__amU24cache1_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1011255431_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t3735117963 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t3735117963 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t3735117963 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(pb_WingedEdge_t1011255431_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_2_t787796887 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_2_t787796887 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_2_t787796887 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_WINGEDEDGE_T1011255431_H
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
#ifndef LIST_1_T3138043566_H
#define LIST_1_T3138043566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>
struct  List_1_t3138043566  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	pb_EdgeU5BU5D_t1313766249* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3138043566, ____items_1)); }
	inline pb_EdgeU5BU5D_t1313766249* get__items_1() const { return ____items_1; }
	inline pb_EdgeU5BU5D_t1313766249** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(pb_EdgeU5BU5D_t1313766249* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3138043566, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3138043566, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3138043566_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	pb_EdgeU5BU5D_t1313766249* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3138043566_StaticFields, ___EmptyArray_4)); }
	inline pb_EdgeU5BU5D_t1313766249* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline pb_EdgeU5BU5D_t1313766249** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(pb_EdgeU5BU5D_t1313766249* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3138043566_H
#ifndef DICTIONARY_2_T1372043504_H
#define DICTIONARY_2_T1372043504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>>
struct  Dictionary_2_t1372043504  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t151714032* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___valueSlots_7)); }
	inline List_1U5BU5D_t151714032* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t151714032** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t151714032* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1372043504_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4051020172 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1372043504_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4051020172 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4051020172 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4051020172 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1372043504_H
#ifndef LIST_1_T2483330173_H
#define LIST_1_T2483330173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>
struct  List_1_t2483330173  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	pb_WingedEdgeU5BU5D_t1251096958* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2483330173, ____items_1)); }
	inline pb_WingedEdgeU5BU5D_t1251096958* get__items_1() const { return ____items_1; }
	inline pb_WingedEdgeU5BU5D_t1251096958** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(pb_WingedEdgeU5BU5D_t1251096958* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2483330173, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2483330173, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2483330173_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	pb_WingedEdgeU5BU5D_t1251096958* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2483330173_StaticFields, ___EmptyArray_4)); }
	inline pb_WingedEdgeU5BU5D_t1251096958* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline pb_WingedEdgeU5BU5D_t1251096958** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(pb_WingedEdgeU5BU5D_t1251096958* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2483330173_H
#ifndef HASHSET_1_T1515895227_H
#define HASHSET_1_T1515895227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.Int32>
struct  HashSet_1_t1515895227  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t3073131127* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	Int32U5BU5D_t385246372* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	RuntimeObject* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t950877179 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___links_5)); }
	inline LinkU5BU5D_t3073131127* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t3073131127** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t3073131127* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier((&___links_5), value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___slots_6)); }
	inline Int32U5BU5D_t385246372* get_slots_6() const { return ___slots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(Int32U5BU5D_t385246372* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((&___slots_6), value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___comparer_11)); }
	inline RuntimeObject* get_comparer_11() const { return ___comparer_11; }
	inline RuntimeObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(RuntimeObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_11), value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___si_12)); }
	inline SerializationInfo_t950877179 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t950877179 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t950877179 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier((&___si_12), value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1515895227, ___generation_13)); }
	inline int32_t get_generation_13() const { return ___generation_13; }
	inline int32_t* get_address_of_generation_13() { return &___generation_13; }
	inline void set_generation_13(int32_t value)
	{
		___generation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T1515895227_H
#ifndef U3CSORTCOMMONINDICESBYADJACENCYU3EC__ANONSTOREY0_T3381148839_H
#define U3CSORTCOMMONINDICESBYADJACENCYU3EC__ANONSTOREY0_T3381148839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0
struct  U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.Int32> ProBuilder.Core.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0::common
	HashSet_1_t1515895227 * ___common_0;

public:
	inline static int32_t get_offset_of_common_0() { return static_cast<int32_t>(offsetof(U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839, ___common_0)); }
	inline HashSet_1_t1515895227 * get_common_0() const { return ___common_0; }
	inline HashSet_1_t1515895227 ** get_address_of_common_0() { return &___common_0; }
	inline void set_common_0(HashSet_1_t1515895227 * value)
	{
		___common_0 = value;
		Il2CppCodeGenWriteBarrier((&___common_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSORTCOMMONINDICESBYADJACENCYU3EC__ANONSTOREY0_T3381148839_H
#ifndef DICTIONARY_2_T1839659084_H
#define DICTIONARY_2_T1839659084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct  Dictionary_2_t1839659084  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1839659084_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4284552512 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1839659084_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4284552512 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4284552512 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4284552512 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1839659084_H
#ifndef DICTIONARY_2_T828488639_H
#define DICTIONARY_2_T828488639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,ProBuilder.Core.pb_WingedEdge>
struct  Dictionary_2_t828488639  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	pb_EdgeU5BU5D_t1313766249* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	pb_WingedEdgeU5BU5D_t1251096958* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___keySlots_6)); }
	inline pb_EdgeU5BU5D_t1313766249* get_keySlots_6() const { return ___keySlots_6; }
	inline pb_EdgeU5BU5D_t1313766249** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(pb_EdgeU5BU5D_t1313766249* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___valueSlots_7)); }
	inline pb_WingedEdgeU5BU5D_t1251096958* get_valueSlots_7() const { return ___valueSlots_7; }
	inline pb_WingedEdgeU5BU5D_t1251096958** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(pb_WingedEdgeU5BU5D_t1251096958* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t828488639_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t304287393 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t828488639_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t304287393 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t304287393 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t304287393 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T828488639_H
#ifndef PB_XYZ_COLOR_T186003279_H
#define PB_XYZ_COLOR_T186003279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_XYZ_Color
struct  pb_XYZ_Color_t186003279  : public RuntimeObject
{
public:
	// System.Single ProBuilder.Core.pb_XYZ_Color::x
	float ___x_0;
	// System.Single ProBuilder.Core.pb_XYZ_Color::y
	float ___y_1;
	// System.Single ProBuilder.Core.pb_XYZ_Color::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t186003279, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t186003279, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t186003279, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_XYZ_COLOR_T186003279_H
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
#ifndef PB_VERTEXCONNECTION_T1937459598_H
#define PB_VERTEXCONNECTION_T1937459598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_VertexConnection
struct  pb_VertexConnection_t1937459598  : public RuntimeObject
{
public:
	// ProBuilder.Core.pb_Face ProBuilder.Core.pb_VertexConnection::face
	pb_Face_t1264560821 * ___face_0;
	// System.Collections.Generic.List`1<System.Int32> ProBuilder.Core.pb_VertexConnection::indices
	List_1_t128053199 * ___indices_1;

public:
	inline static int32_t get_offset_of_face_0() { return static_cast<int32_t>(offsetof(pb_VertexConnection_t1937459598, ___face_0)); }
	inline pb_Face_t1264560821 * get_face_0() const { return ___face_0; }
	inline pb_Face_t1264560821 ** get_address_of_face_0() { return &___face_0; }
	inline void set_face_0(pb_Face_t1264560821 * value)
	{
		___face_0 = value;
		Il2CppCodeGenWriteBarrier((&___face_0), value);
	}

	inline static int32_t get_offset_of_indices_1() { return static_cast<int32_t>(offsetof(pb_VertexConnection_t1937459598, ___indices_1)); }
	inline List_1_t128053199 * get_indices_1() const { return ___indices_1; }
	inline List_1_t128053199 ** get_address_of_indices_1() { return &___indices_1; }
	inline void set_indices_1(List_1_t128053199 * value)
	{
		___indices_1 = value;
		Il2CppCodeGenWriteBarrier((&___indices_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_VERTEXCONNECTION_T1937459598_H
#ifndef LIST_1_T496136383_H
#define LIST_1_T496136383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t496136383  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t934056436* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____items_1)); }
	inline Vector4U5BU5D_t934056436* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t934056436** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t934056436* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t496136383_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector4U5BU5D_t934056436* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t496136383_StaticFields, ___EmptyArray_4)); }
	inline Vector4U5BU5D_t934056436* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector4U5BU5D_t934056436** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector4U5BU5D_t934056436* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T496136383_H
#ifndef PB_WINGEDEDGEENUMERATOR_T1885848514_H
#define PB_WINGEDEDGEENUMERATOR_T1885848514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_WingedEdgeEnumerator
struct  pb_WingedEdgeEnumerator_t1885848514  : public RuntimeObject
{
public:
	// ProBuilder.Core.pb_WingedEdge ProBuilder.Core.pb_WingedEdgeEnumerator::_start
	pb_WingedEdge_t1011255431 * ____start_0;
	// ProBuilder.Core.pb_WingedEdge ProBuilder.Core.pb_WingedEdgeEnumerator::_current
	pb_WingedEdge_t1011255431 * ____current_1;

public:
	inline static int32_t get_offset_of__start_0() { return static_cast<int32_t>(offsetof(pb_WingedEdgeEnumerator_t1885848514, ____start_0)); }
	inline pb_WingedEdge_t1011255431 * get__start_0() const { return ____start_0; }
	inline pb_WingedEdge_t1011255431 ** get_address_of__start_0() { return &____start_0; }
	inline void set__start_0(pb_WingedEdge_t1011255431 * value)
	{
		____start_0 = value;
		Il2CppCodeGenWriteBarrier((&____start_0), value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(pb_WingedEdgeEnumerator_t1885848514, ____current_1)); }
	inline pb_WingedEdge_t1011255431 * get__current_1() const { return ____current_1; }
	inline pb_WingedEdge_t1011255431 ** get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(pb_WingedEdge_t1011255431 * value)
	{
		____current_1 = value;
		Il2CppCodeGenWriteBarrier((&____current_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_WINGEDEDGEENUMERATOR_T1885848514_H
#ifndef PB_VERSION_T2431675024_H
#define PB_VERSION_T2431675024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Version
struct  pb_Version_t2431675024  : public RuntimeObject
{
public:

public:
};

struct pb_Version_t2431675024_StaticFields
{
public:
	// ProBuilder.Core.pb_VersionInfo ProBuilder.Core.pb_Version::Current
	pb_VersionInfo_t568354953 * ___Current_0;

public:
	inline static int32_t get_offset_of_Current_0() { return static_cast<int32_t>(offsetof(pb_Version_t2431675024_StaticFields, ___Current_0)); }
	inline pb_VersionInfo_t568354953 * get_Current_0() const { return ___Current_0; }
	inline pb_VersionInfo_t568354953 ** get_address_of_Current_0() { return &___Current_0; }
	inline void set_Current_0(pb_VersionInfo_t568354953 * value)
	{
		___Current_0 = value;
		Il2CppCodeGenWriteBarrier((&___Current_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_VERSION_T2431675024_H
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
#ifndef CAPTURE_T2232016050_H
#define CAPTURE_T2232016050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_t2232016050  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Capture::index
	int32_t ___index_0;
	// System.Int32 System.Text.RegularExpressions.Capture::length
	int32_t ___length_1;
	// System.String System.Text.RegularExpressions.Capture::text
	String_t* ___text_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_T2232016050_H
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
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
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
#ifndef PROGRIDSNOSNAPATTRIBUTE_T871205694_H
#define PROGRIDSNOSNAPATTRIBUTE_T871205694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.ProGridsNoSnapAttribute
struct  ProGridsNoSnapAttribute_t871205694  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRIDSNOSNAPATTRIBUTE_T871205694_H
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
#ifndef PROGRIDSCONDITIONALSNAPATTRIBUTE_T3996304602_H
#define PROGRIDSCONDITIONALSNAPATTRIBUTE_T3996304602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.ProGridsConditionalSnapAttribute
struct  ProGridsConditionalSnapAttribute_t3996304602  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRIDSCONDITIONALSNAPATTRIBUTE_T3996304602_H
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
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef PB_EDGE_T1665968824_H
#define PB_EDGE_T1665968824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Edge
struct  pb_Edge_t1665968824 
{
public:
	// System.Int32 ProBuilder.Core.pb_Edge::x
	int32_t ___x_0;
	// System.Int32 ProBuilder.Core.pb_Edge::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(pb_Edge_t1665968824, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(pb_Edge_t1665968824, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

struct pb_Edge_t1665968824_StaticFields
{
public:
	// ProBuilder.Core.pb_Edge ProBuilder.Core.pb_Edge::Empty
	pb_Edge_t1665968824  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(pb_Edge_t1665968824_StaticFields, ___Empty_2)); }
	inline pb_Edge_t1665968824  get_Empty_2() const { return ___Empty_2; }
	inline pb_Edge_t1665968824 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(pb_Edge_t1665968824  value)
	{
		___Empty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGE_T1665968824_H
#ifndef GROUP_T2468205786_H
#define GROUP_T2468205786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t2468205786  : public Capture_t2232016050
{
public:
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t1760593541 * ___captures_5;

public:
	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(Group_t2468205786, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}

	inline static int32_t get_offset_of_captures_5() { return static_cast<int32_t>(offsetof(Group_t2468205786, ___captures_5)); }
	inline CaptureCollection_t1760593541 * get_captures_5() const { return ___captures_5; }
	inline CaptureCollection_t1760593541 ** get_address_of_captures_5() { return &___captures_5; }
	inline void set_captures_5(CaptureCollection_t1760593541 * value)
	{
		___captures_5 = value;
		Il2CppCodeGenWriteBarrier((&___captures_5), value);
	}
};

struct Group_t2468205786_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t2468205786 * ___Fail_3;

public:
	inline static int32_t get_offset_of_Fail_3() { return static_cast<int32_t>(offsetof(Group_t2468205786_StaticFields, ___Fail_3)); }
	inline Group_t2468205786 * get_Fail_3() const { return ___Fail_3; }
	inline Group_t2468205786 ** get_address_of_Fail_3() { return &___Fail_3; }
	inline void set_Fail_3(Group_t2468205786 * value)
	{
		___Fail_3 = value;
		Il2CppCodeGenWriteBarrier((&___Fail_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T2468205786_H
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
#ifndef PB_EDGELOOKUP_T1945391737_H
#define PB_EDGELOOKUP_T1945391737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_EdgeLookup
struct  pb_EdgeLookup_t1945391737  : public RuntimeObject
{
public:
	// ProBuilder.Core.pb_Edge ProBuilder.Core.pb_EdgeLookup::local
	pb_Edge_t1665968824  ___local_0;
	// ProBuilder.Core.pb_Edge ProBuilder.Core.pb_EdgeLookup::common
	pb_Edge_t1665968824  ___common_1;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(pb_EdgeLookup_t1945391737, ___local_0)); }
	inline pb_Edge_t1665968824  get_local_0() const { return ___local_0; }
	inline pb_Edge_t1665968824 * get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(pb_Edge_t1665968824  value)
	{
		___local_0 = value;
	}

	inline static int32_t get_offset_of_common_1() { return static_cast<int32_t>(offsetof(pb_EdgeLookup_t1945391737, ___common_1)); }
	inline pb_Edge_t1665968824  get_common_1() const { return ___common_1; }
	inline pb_Edge_t1665968824 * get_address_of_common_1() { return &___common_1; }
	inline void set_common_1(pb_Edge_t1665968824  value)
	{
		___common_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGELOOKUP_T1945391737_H
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

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

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
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
#ifndef WINDINGORDER_T3065177242_H
#define WINDINGORDER_T3065177242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.WindingOrder
struct  WindingOrder_t3065177242 
{
public:
	// System.Int32 ProBuilder.Core.WindingOrder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindingOrder_t3065177242, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDINGORDER_T3065177242_H
#ifndef STATUS_T632827111_H
#define STATUS_T632827111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.Status
struct  Status_t632827111 
{
public:
	// System.Int32 ProBuilder.Core.Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t632827111, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T632827111_H
#ifndef SORTMETHOD_T1892027685_H
#define SORTMETHOD_T1892027685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.SortMethod
struct  SortMethod_t1892027685 
{
public:
	// System.Int32 ProBuilder.Core.SortMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SortMethod_t1892027685, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTMETHOD_T1892027685_H
#ifndef SHAPE_T1383804119_H
#define SHAPE_T1383804119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.Shape
struct  Shape_t1383804119 
{
public:
	// System.Int32 ProBuilder.Core.Shape::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Shape_t1383804119, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAPE_T1383804119_H
#ifndef SELECTMODE_T880512167_H
#define SELECTMODE_T880512167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.SelectMode
struct  SelectMode_t880512167 
{
public:
	// System.Int32 ProBuilder.Core.SelectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectMode_t880512167, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTMODE_T880512167_H
#ifndef REFRESHMASK_T651813492_H
#define REFRESHMASK_T651813492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.RefreshMask
struct  RefreshMask_t651813492 
{
public:
	// System.UInt16 ProBuilder.Core.RefreshMask::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshMask_t651813492, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHMASK_T651813492_H
#ifndef MATCH_T3408321083_H
#define MATCH_T3408321083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t3408321083  : public Group_t2468205786
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t3657309853 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	RuntimeObject* ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t69770484 * ___groups_9;

public:
	inline static int32_t get_offset_of_regex_6() { return static_cast<int32_t>(offsetof(Match_t3408321083, ___regex_6)); }
	inline Regex_t3657309853 * get_regex_6() const { return ___regex_6; }
	inline Regex_t3657309853 ** get_address_of_regex_6() { return &___regex_6; }
	inline void set_regex_6(Regex_t3657309853 * value)
	{
		___regex_6 = value;
		Il2CppCodeGenWriteBarrier((&___regex_6), value);
	}

	inline static int32_t get_offset_of_machine_7() { return static_cast<int32_t>(offsetof(Match_t3408321083, ___machine_7)); }
	inline RuntimeObject* get_machine_7() const { return ___machine_7; }
	inline RuntimeObject** get_address_of_machine_7() { return &___machine_7; }
	inline void set_machine_7(RuntimeObject* value)
	{
		___machine_7 = value;
		Il2CppCodeGenWriteBarrier((&___machine_7), value);
	}

	inline static int32_t get_offset_of_text_length_8() { return static_cast<int32_t>(offsetof(Match_t3408321083, ___text_length_8)); }
	inline int32_t get_text_length_8() const { return ___text_length_8; }
	inline int32_t* get_address_of_text_length_8() { return &___text_length_8; }
	inline void set_text_length_8(int32_t value)
	{
		___text_length_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(Match_t3408321083, ___groups_9)); }
	inline GroupCollection_t69770484 * get_groups_9() const { return ___groups_9; }
	inline GroupCollection_t69770484 ** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(GroupCollection_t69770484 * value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier((&___groups_9), value);
	}
};

struct Match_t3408321083_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t3408321083 * ___empty_10;

public:
	inline static int32_t get_offset_of_empty_10() { return static_cast<int32_t>(offsetof(Match_t3408321083_StaticFields, ___empty_10)); }
	inline Match_t3408321083 * get_empty_10() const { return ___empty_10; }
	inline Match_t3408321083 ** get_address_of_empty_10() { return &___empty_10; }
	inline void set_empty_10(Match_t3408321083 * value)
	{
		___empty_10 = value;
		Il2CppCodeGenWriteBarrier((&___empty_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T3408321083_H
#ifndef PROJECTIONAXIS_T2590981057_H
#define PROJECTIONAXIS_T2590981057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.ProjectionAxis
struct  ProjectionAxis_t2590981057 
{
public:
	// System.Int32 ProBuilder.Core.ProjectionAxis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProjectionAxis_t2590981057, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROJECTIONAXIS_T2590981057_H
#ifndef PB_VERTEX_T2424025474_H
#define PB_VERTEX_T2424025474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Vertex
struct  pb_Vertex_t2424025474  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 ProBuilder.Core.pb_Vertex::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Color ProBuilder.Core.pb_Vertex::color
	Color_t2555686324  ___color_1;
	// UnityEngine.Vector3 ProBuilder.Core.pb_Vertex::normal
	Vector3_t3722313464  ___normal_2;
	// UnityEngine.Vector4 ProBuilder.Core.pb_Vertex::tangent
	Vector4_t3319028937  ___tangent_3;
	// UnityEngine.Vector2 ProBuilder.Core.pb_Vertex::uv0
	Vector2_t2156229523  ___uv0_4;
	// UnityEngine.Vector2 ProBuilder.Core.pb_Vertex::uv2
	Vector2_t2156229523  ___uv2_5;
	// UnityEngine.Vector4 ProBuilder.Core.pb_Vertex::uv3
	Vector4_t3319028937  ___uv3_6;
	// UnityEngine.Vector4 ProBuilder.Core.pb_Vertex::uv4
	Vector4_t3319028937  ___uv4_7;
	// System.Boolean ProBuilder.Core.pb_Vertex::hasPosition
	bool ___hasPosition_8;
	// System.Boolean ProBuilder.Core.pb_Vertex::hasColor
	bool ___hasColor_9;
	// System.Boolean ProBuilder.Core.pb_Vertex::hasNormal
	bool ___hasNormal_10;
	// System.Boolean ProBuilder.Core.pb_Vertex::hasTangent
	bool ___hasTangent_11;
	// System.Boolean ProBuilder.Core.pb_Vertex::hasUv0
	bool ___hasUv0_12;
	// System.Boolean ProBuilder.Core.pb_Vertex::hasUv2
	bool ___hasUv2_13;
	// System.Boolean ProBuilder.Core.pb_Vertex::hasUv3
	bool ___hasUv3_14;
	// System.Boolean ProBuilder.Core.pb_Vertex::hasUv4
	bool ___hasUv4_15;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___color_1)); }
	inline Color_t2555686324  get_color_1() const { return ___color_1; }
	inline Color_t2555686324 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t2555686324  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_normal_2() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___normal_2)); }
	inline Vector3_t3722313464  get_normal_2() const { return ___normal_2; }
	inline Vector3_t3722313464 * get_address_of_normal_2() { return &___normal_2; }
	inline void set_normal_2(Vector3_t3722313464  value)
	{
		___normal_2 = value;
	}

	inline static int32_t get_offset_of_tangent_3() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___tangent_3)); }
	inline Vector4_t3319028937  get_tangent_3() const { return ___tangent_3; }
	inline Vector4_t3319028937 * get_address_of_tangent_3() { return &___tangent_3; }
	inline void set_tangent_3(Vector4_t3319028937  value)
	{
		___tangent_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___uv0_4)); }
	inline Vector2_t2156229523  get_uv0_4() const { return ___uv0_4; }
	inline Vector2_t2156229523 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector2_t2156229523  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___uv2_5)); }
	inline Vector2_t2156229523  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t2156229523 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t2156229523  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___uv3_6)); }
	inline Vector4_t3319028937  get_uv3_6() const { return ___uv3_6; }
	inline Vector4_t3319028937 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector4_t3319028937  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_uv4_7() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___uv4_7)); }
	inline Vector4_t3319028937  get_uv4_7() const { return ___uv4_7; }
	inline Vector4_t3319028937 * get_address_of_uv4_7() { return &___uv4_7; }
	inline void set_uv4_7(Vector4_t3319028937  value)
	{
		___uv4_7 = value;
	}

	inline static int32_t get_offset_of_hasPosition_8() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___hasPosition_8)); }
	inline bool get_hasPosition_8() const { return ___hasPosition_8; }
	inline bool* get_address_of_hasPosition_8() { return &___hasPosition_8; }
	inline void set_hasPosition_8(bool value)
	{
		___hasPosition_8 = value;
	}

	inline static int32_t get_offset_of_hasColor_9() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___hasColor_9)); }
	inline bool get_hasColor_9() const { return ___hasColor_9; }
	inline bool* get_address_of_hasColor_9() { return &___hasColor_9; }
	inline void set_hasColor_9(bool value)
	{
		___hasColor_9 = value;
	}

	inline static int32_t get_offset_of_hasNormal_10() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___hasNormal_10)); }
	inline bool get_hasNormal_10() const { return ___hasNormal_10; }
	inline bool* get_address_of_hasNormal_10() { return &___hasNormal_10; }
	inline void set_hasNormal_10(bool value)
	{
		___hasNormal_10 = value;
	}

	inline static int32_t get_offset_of_hasTangent_11() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___hasTangent_11)); }
	inline bool get_hasTangent_11() const { return ___hasTangent_11; }
	inline bool* get_address_of_hasTangent_11() { return &___hasTangent_11; }
	inline void set_hasTangent_11(bool value)
	{
		___hasTangent_11 = value;
	}

	inline static int32_t get_offset_of_hasUv0_12() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___hasUv0_12)); }
	inline bool get_hasUv0_12() const { return ___hasUv0_12; }
	inline bool* get_address_of_hasUv0_12() { return &___hasUv0_12; }
	inline void set_hasUv0_12(bool value)
	{
		___hasUv0_12 = value;
	}

	inline static int32_t get_offset_of_hasUv2_13() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___hasUv2_13)); }
	inline bool get_hasUv2_13() const { return ___hasUv2_13; }
	inline bool* get_address_of_hasUv2_13() { return &___hasUv2_13; }
	inline void set_hasUv2_13(bool value)
	{
		___hasUv2_13 = value;
	}

	inline static int32_t get_offset_of_hasUv3_14() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___hasUv3_14)); }
	inline bool get_hasUv3_14() const { return ___hasUv3_14; }
	inline bool* get_address_of_hasUv3_14() { return &___hasUv3_14; }
	inline void set_hasUv3_14(bool value)
	{
		___hasUv3_14 = value;
	}

	inline static int32_t get_offset_of_hasUv4_15() { return static_cast<int32_t>(offsetof(pb_Vertex_t2424025474, ___hasUv4_15)); }
	inline bool get_hasUv4_15() const { return ___hasUv4_15; }
	inline bool* get_address_of_hasUv4_15() { return &___hasUv4_15; }
	inline void set_hasUv4_15(bool value)
	{
		___hasUv4_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_VERTEX_T2424025474_H
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
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
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
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T92845595_H
#ifndef VERSIONTYPE_T1333685008_H
#define VERSIONTYPE_T1333685008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.VersionType
struct  VersionType_t1333685008 
{
public:
	// System.Int32 ProBuilder.Core.VersionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VersionType_t1333685008, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSIONTYPE_T1333685008_H
#ifndef ATTRIBUTETYPE_T3264562787_H
#define ATTRIBUTETYPE_T3264562787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.AttributeType
struct  AttributeType_t3264562787 
{
public:
	// System.UInt16 ProBuilder.Core.AttributeType::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeType_t3264562787, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPE_T3264562787_H
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
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
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
#ifndef PB_VERSIONINFO_T568354953_H
#define PB_VERSIONINFO_T568354953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_VersionInfo
struct  pb_VersionInfo_t568354953  : public RuntimeObject
{
public:
	// System.Int32 ProBuilder.Core.pb_VersionInfo::m_Major
	int32_t ___m_Major_0;
	// System.Int32 ProBuilder.Core.pb_VersionInfo::m_Minor
	int32_t ___m_Minor_1;
	// System.Int32 ProBuilder.Core.pb_VersionInfo::m_Patch
	int32_t ___m_Patch_2;
	// System.Int32 ProBuilder.Core.pb_VersionInfo::m_Build
	int32_t ___m_Build_3;
	// ProBuilder.Core.VersionType ProBuilder.Core.pb_VersionInfo::m_Type
	int32_t ___m_Type_4;
	// System.String ProBuilder.Core.pb_VersionInfo::m_Metadata
	String_t* ___m_Metadata_5;
	// System.String ProBuilder.Core.pb_VersionInfo::m_Date
	String_t* ___m_Date_6;

public:
	inline static int32_t get_offset_of_m_Major_0() { return static_cast<int32_t>(offsetof(pb_VersionInfo_t568354953, ___m_Major_0)); }
	inline int32_t get_m_Major_0() const { return ___m_Major_0; }
	inline int32_t* get_address_of_m_Major_0() { return &___m_Major_0; }
	inline void set_m_Major_0(int32_t value)
	{
		___m_Major_0 = value;
	}

	inline static int32_t get_offset_of_m_Minor_1() { return static_cast<int32_t>(offsetof(pb_VersionInfo_t568354953, ___m_Minor_1)); }
	inline int32_t get_m_Minor_1() const { return ___m_Minor_1; }
	inline int32_t* get_address_of_m_Minor_1() { return &___m_Minor_1; }
	inline void set_m_Minor_1(int32_t value)
	{
		___m_Minor_1 = value;
	}

	inline static int32_t get_offset_of_m_Patch_2() { return static_cast<int32_t>(offsetof(pb_VersionInfo_t568354953, ___m_Patch_2)); }
	inline int32_t get_m_Patch_2() const { return ___m_Patch_2; }
	inline int32_t* get_address_of_m_Patch_2() { return &___m_Patch_2; }
	inline void set_m_Patch_2(int32_t value)
	{
		___m_Patch_2 = value;
	}

	inline static int32_t get_offset_of_m_Build_3() { return static_cast<int32_t>(offsetof(pb_VersionInfo_t568354953, ___m_Build_3)); }
	inline int32_t get_m_Build_3() const { return ___m_Build_3; }
	inline int32_t* get_address_of_m_Build_3() { return &___m_Build_3; }
	inline void set_m_Build_3(int32_t value)
	{
		___m_Build_3 = value;
	}

	inline static int32_t get_offset_of_m_Type_4() { return static_cast<int32_t>(offsetof(pb_VersionInfo_t568354953, ___m_Type_4)); }
	inline int32_t get_m_Type_4() const { return ___m_Type_4; }
	inline int32_t* get_address_of_m_Type_4() { return &___m_Type_4; }
	inline void set_m_Type_4(int32_t value)
	{
		___m_Type_4 = value;
	}

	inline static int32_t get_offset_of_m_Metadata_5() { return static_cast<int32_t>(offsetof(pb_VersionInfo_t568354953, ___m_Metadata_5)); }
	inline String_t* get_m_Metadata_5() const { return ___m_Metadata_5; }
	inline String_t** get_address_of_m_Metadata_5() { return &___m_Metadata_5; }
	inline void set_m_Metadata_5(String_t* value)
	{
		___m_Metadata_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Metadata_5), value);
	}

	inline static int32_t get_offset_of_m_Date_6() { return static_cast<int32_t>(offsetof(pb_VersionInfo_t568354953, ___m_Date_6)); }
	inline String_t* get_m_Date_6() const { return ___m_Date_6; }
	inline String_t** get_address_of_m_Date_6() { return &___m_Date_6; }
	inline void set_m_Date_6(String_t* value)
	{
		___m_Date_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Date_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_VERSIONINFO_T568354953_H
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
#ifndef FUNC_2_T3735117963_H
#define FUNC_2_T3735117963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<ProBuilder.Core.pb_WingedEdge,ProBuilder.Core.pb_Edge>
struct  Func_2_t3735117963  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3735117963_H
#ifndef FUNC_2_T787796887_H
#define FUNC_2_T787796887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<ProBuilder.Core.pb_Edge,System.Int32>
struct  Func_2_t787796887  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T787796887_H
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
#ifndef FUNC_2_T2166437104_H
#define FUNC_2_T2166437104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<ProBuilder.Core.pb_WingedEdge,System.Boolean>
struct  Func_2_t2166437104  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2166437104_H
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
#ifndef PB_OBJECT_T4080196558_H
#define PB_OBJECT_T4080196558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Object
struct  pb_Object_t4080196558  : public MonoBehaviour_t3962482529
{
public:
	// ProBuilder.Core.pb_Face[] ProBuilder.Core.pb_Object::_quads
	pb_FaceU5BU5D_t2241827544* ____quads_2;
	// ProBuilder.Core.pb_IntArray[] ProBuilder.Core.pb_Object::_sharedIndices
	pb_IntArrayU5BU5D_t3213957336* ____sharedIndices_3;
	// UnityEngine.Vector3[] ProBuilder.Core.pb_Object::_vertices
	Vector3U5BU5D_t1718750761* ____vertices_4;
	// UnityEngine.Vector2[] ProBuilder.Core.pb_Object::_uv
	Vector2U5BU5D_t1457185986* ____uv_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> ProBuilder.Core.pb_Object::_uv3
	List_1_t496136383 * ____uv3_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> ProBuilder.Core.pb_Object::_uv4
	List_1_t496136383 * ____uv4_7;
	// UnityEngine.Vector4[] ProBuilder.Core.pb_Object::_tangents
	Vector4U5BU5D_t934056436* ____tangents_8;
	// ProBuilder.Core.pb_IntArray[] ProBuilder.Core.pb_Object::_sharedIndicesUV
	pb_IntArrayU5BU5D_t3213957336* ____sharedIndicesUV_9;
	// UnityEngine.Color[] ProBuilder.Core.pb_Object::_colors
	ColorU5BU5D_t941916413* ____colors_10;
	// System.Boolean ProBuilder.Core.pb_Object::userCollisions
	bool ___userCollisions_11;
	// System.Boolean ProBuilder.Core.pb_Object::isSelectable
	bool ___isSelectable_12;
	// ProBuilder.Core.pb_UnwrapParameters ProBuilder.Core.pb_Object::unwrapParameters
	pb_UnwrapParameters_t3133121206 * ___unwrapParameters_13;
	// System.String ProBuilder.Core.pb_Object::asset_guid
	String_t* ___asset_guid_14;
	// System.Boolean ProBuilder.Core.pb_Object::dontDestroyMeshOnDelete
	bool ___dontDestroyMeshOnDelete_17;
	// System.Int32[] ProBuilder.Core.pb_Object::m_selectedFaces
	Int32U5BU5D_t385246372* ___m_selectedFaces_18;
	// ProBuilder.Core.pb_Edge[] ProBuilder.Core.pb_Object::m_SelectedEdges
	pb_EdgeU5BU5D_t1313766249* ___m_SelectedEdges_19;
	// System.Int32[] ProBuilder.Core.pb_Object::m_selectedTriangles
	Int32U5BU5D_t385246372* ___m_selectedTriangles_20;

public:
	inline static int32_t get_offset_of__quads_2() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____quads_2)); }
	inline pb_FaceU5BU5D_t2241827544* get__quads_2() const { return ____quads_2; }
	inline pb_FaceU5BU5D_t2241827544** get_address_of__quads_2() { return &____quads_2; }
	inline void set__quads_2(pb_FaceU5BU5D_t2241827544* value)
	{
		____quads_2 = value;
		Il2CppCodeGenWriteBarrier((&____quads_2), value);
	}

	inline static int32_t get_offset_of__sharedIndices_3() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____sharedIndices_3)); }
	inline pb_IntArrayU5BU5D_t3213957336* get__sharedIndices_3() const { return ____sharedIndices_3; }
	inline pb_IntArrayU5BU5D_t3213957336** get_address_of__sharedIndices_3() { return &____sharedIndices_3; }
	inline void set__sharedIndices_3(pb_IntArrayU5BU5D_t3213957336* value)
	{
		____sharedIndices_3 = value;
		Il2CppCodeGenWriteBarrier((&____sharedIndices_3), value);
	}

	inline static int32_t get_offset_of__vertices_4() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____vertices_4)); }
	inline Vector3U5BU5D_t1718750761* get__vertices_4() const { return ____vertices_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of__vertices_4() { return &____vertices_4; }
	inline void set__vertices_4(Vector3U5BU5D_t1718750761* value)
	{
		____vertices_4 = value;
		Il2CppCodeGenWriteBarrier((&____vertices_4), value);
	}

	inline static int32_t get_offset_of__uv_5() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____uv_5)); }
	inline Vector2U5BU5D_t1457185986* get__uv_5() const { return ____uv_5; }
	inline Vector2U5BU5D_t1457185986** get_address_of__uv_5() { return &____uv_5; }
	inline void set__uv_5(Vector2U5BU5D_t1457185986* value)
	{
		____uv_5 = value;
		Il2CppCodeGenWriteBarrier((&____uv_5), value);
	}

	inline static int32_t get_offset_of__uv3_6() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____uv3_6)); }
	inline List_1_t496136383 * get__uv3_6() const { return ____uv3_6; }
	inline List_1_t496136383 ** get_address_of__uv3_6() { return &____uv3_6; }
	inline void set__uv3_6(List_1_t496136383 * value)
	{
		____uv3_6 = value;
		Il2CppCodeGenWriteBarrier((&____uv3_6), value);
	}

	inline static int32_t get_offset_of__uv4_7() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____uv4_7)); }
	inline List_1_t496136383 * get__uv4_7() const { return ____uv4_7; }
	inline List_1_t496136383 ** get_address_of__uv4_7() { return &____uv4_7; }
	inline void set__uv4_7(List_1_t496136383 * value)
	{
		____uv4_7 = value;
		Il2CppCodeGenWriteBarrier((&____uv4_7), value);
	}

	inline static int32_t get_offset_of__tangents_8() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____tangents_8)); }
	inline Vector4U5BU5D_t934056436* get__tangents_8() const { return ____tangents_8; }
	inline Vector4U5BU5D_t934056436** get_address_of__tangents_8() { return &____tangents_8; }
	inline void set__tangents_8(Vector4U5BU5D_t934056436* value)
	{
		____tangents_8 = value;
		Il2CppCodeGenWriteBarrier((&____tangents_8), value);
	}

	inline static int32_t get_offset_of__sharedIndicesUV_9() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____sharedIndicesUV_9)); }
	inline pb_IntArrayU5BU5D_t3213957336* get__sharedIndicesUV_9() const { return ____sharedIndicesUV_9; }
	inline pb_IntArrayU5BU5D_t3213957336** get_address_of__sharedIndicesUV_9() { return &____sharedIndicesUV_9; }
	inline void set__sharedIndicesUV_9(pb_IntArrayU5BU5D_t3213957336* value)
	{
		____sharedIndicesUV_9 = value;
		Il2CppCodeGenWriteBarrier((&____sharedIndicesUV_9), value);
	}

	inline static int32_t get_offset_of__colors_10() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ____colors_10)); }
	inline ColorU5BU5D_t941916413* get__colors_10() const { return ____colors_10; }
	inline ColorU5BU5D_t941916413** get_address_of__colors_10() { return &____colors_10; }
	inline void set__colors_10(ColorU5BU5D_t941916413* value)
	{
		____colors_10 = value;
		Il2CppCodeGenWriteBarrier((&____colors_10), value);
	}

	inline static int32_t get_offset_of_userCollisions_11() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ___userCollisions_11)); }
	inline bool get_userCollisions_11() const { return ___userCollisions_11; }
	inline bool* get_address_of_userCollisions_11() { return &___userCollisions_11; }
	inline void set_userCollisions_11(bool value)
	{
		___userCollisions_11 = value;
	}

	inline static int32_t get_offset_of_isSelectable_12() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ___isSelectable_12)); }
	inline bool get_isSelectable_12() const { return ___isSelectable_12; }
	inline bool* get_address_of_isSelectable_12() { return &___isSelectable_12; }
	inline void set_isSelectable_12(bool value)
	{
		___isSelectable_12 = value;
	}

	inline static int32_t get_offset_of_unwrapParameters_13() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ___unwrapParameters_13)); }
	inline pb_UnwrapParameters_t3133121206 * get_unwrapParameters_13() const { return ___unwrapParameters_13; }
	inline pb_UnwrapParameters_t3133121206 ** get_address_of_unwrapParameters_13() { return &___unwrapParameters_13; }
	inline void set_unwrapParameters_13(pb_UnwrapParameters_t3133121206 * value)
	{
		___unwrapParameters_13 = value;
		Il2CppCodeGenWriteBarrier((&___unwrapParameters_13), value);
	}

	inline static int32_t get_offset_of_asset_guid_14() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ___asset_guid_14)); }
	inline String_t* get_asset_guid_14() const { return ___asset_guid_14; }
	inline String_t** get_address_of_asset_guid_14() { return &___asset_guid_14; }
	inline void set_asset_guid_14(String_t* value)
	{
		___asset_guid_14 = value;
		Il2CppCodeGenWriteBarrier((&___asset_guid_14), value);
	}

	inline static int32_t get_offset_of_dontDestroyMeshOnDelete_17() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ___dontDestroyMeshOnDelete_17)); }
	inline bool get_dontDestroyMeshOnDelete_17() const { return ___dontDestroyMeshOnDelete_17; }
	inline bool* get_address_of_dontDestroyMeshOnDelete_17() { return &___dontDestroyMeshOnDelete_17; }
	inline void set_dontDestroyMeshOnDelete_17(bool value)
	{
		___dontDestroyMeshOnDelete_17 = value;
	}

	inline static int32_t get_offset_of_m_selectedFaces_18() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ___m_selectedFaces_18)); }
	inline Int32U5BU5D_t385246372* get_m_selectedFaces_18() const { return ___m_selectedFaces_18; }
	inline Int32U5BU5D_t385246372** get_address_of_m_selectedFaces_18() { return &___m_selectedFaces_18; }
	inline void set_m_selectedFaces_18(Int32U5BU5D_t385246372* value)
	{
		___m_selectedFaces_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_selectedFaces_18), value);
	}

	inline static int32_t get_offset_of_m_SelectedEdges_19() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ___m_SelectedEdges_19)); }
	inline pb_EdgeU5BU5D_t1313766249* get_m_SelectedEdges_19() const { return ___m_SelectedEdges_19; }
	inline pb_EdgeU5BU5D_t1313766249** get_address_of_m_SelectedEdges_19() { return &___m_SelectedEdges_19; }
	inline void set_m_SelectedEdges_19(pb_EdgeU5BU5D_t1313766249* value)
	{
		___m_SelectedEdges_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectedEdges_19), value);
	}

	inline static int32_t get_offset_of_m_selectedTriangles_20() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558, ___m_selectedTriangles_20)); }
	inline Int32U5BU5D_t385246372* get_m_selectedTriangles_20() const { return ___m_selectedTriangles_20; }
	inline Int32U5BU5D_t385246372** get_address_of_m_selectedTriangles_20() { return &___m_selectedTriangles_20; }
	inline void set_m_selectedTriangles_20(Int32U5BU5D_t385246372* value)
	{
		___m_selectedTriangles_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_selectedTriangles_20), value);
	}
};

struct pb_Object_t4080196558_StaticFields
{
public:
	// System.Action`1<ProBuilder.Core.pb_Object> ProBuilder.Core.pb_Object::onDestroyObject
	Action_1_t4252664153 * ___onDestroyObject_15;
	// System.Action`1<ProBuilder.Core.pb_Object> ProBuilder.Core.pb_Object::onElementSelectionChanged
	Action_1_t4252664153 * ___onElementSelectionChanged_16;
	// System.Func`2<ProBuilder.Core.pb_Face,System.Int32> ProBuilder.Core.pb_Object::<>f__am$cache0
	Func_2_t1715858182 * ___U3CU3Ef__amU24cache0_21;
	// System.Func`2<ProBuilder.Core.pb_Face,System.Boolean> ProBuilder.Core.pb_Object::<>f__am$cache1
	Func_2_t3157167690 * ___U3CU3Ef__amU24cache1_22;
	// System.Func`2<ProBuilder.Core.pb_Submesh,UnityEngine.Material> ProBuilder.Core.pb_Object::<>f__am$cache2
	Func_2_t2697311411 * ___U3CU3Ef__amU24cache2_23;
	// System.Func`2<ProBuilder.Core.pb_Face,System.Collections.Generic.IEnumerable`1<System.Int32>> ProBuilder.Core.pb_Object::<>f__am$cache3
	Func_2_t695711071 * ___U3CU3Ef__amU24cache3_24;

public:
	inline static int32_t get_offset_of_onDestroyObject_15() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558_StaticFields, ___onDestroyObject_15)); }
	inline Action_1_t4252664153 * get_onDestroyObject_15() const { return ___onDestroyObject_15; }
	inline Action_1_t4252664153 ** get_address_of_onDestroyObject_15() { return &___onDestroyObject_15; }
	inline void set_onDestroyObject_15(Action_1_t4252664153 * value)
	{
		___onDestroyObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___onDestroyObject_15), value);
	}

	inline static int32_t get_offset_of_onElementSelectionChanged_16() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558_StaticFields, ___onElementSelectionChanged_16)); }
	inline Action_1_t4252664153 * get_onElementSelectionChanged_16() const { return ___onElementSelectionChanged_16; }
	inline Action_1_t4252664153 ** get_address_of_onElementSelectionChanged_16() { return &___onElementSelectionChanged_16; }
	inline void set_onElementSelectionChanged_16(Action_1_t4252664153 * value)
	{
		___onElementSelectionChanged_16 = value;
		Il2CppCodeGenWriteBarrier((&___onElementSelectionChanged_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_21() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558_StaticFields, ___U3CU3Ef__amU24cache0_21)); }
	inline Func_2_t1715858182 * get_U3CU3Ef__amU24cache0_21() const { return ___U3CU3Ef__amU24cache0_21; }
	inline Func_2_t1715858182 ** get_address_of_U3CU3Ef__amU24cache0_21() { return &___U3CU3Ef__amU24cache0_21; }
	inline void set_U3CU3Ef__amU24cache0_21(Func_2_t1715858182 * value)
	{
		___U3CU3Ef__amU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_22() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558_StaticFields, ___U3CU3Ef__amU24cache1_22)); }
	inline Func_2_t3157167690 * get_U3CU3Ef__amU24cache1_22() const { return ___U3CU3Ef__amU24cache1_22; }
	inline Func_2_t3157167690 ** get_address_of_U3CU3Ef__amU24cache1_22() { return &___U3CU3Ef__amU24cache1_22; }
	inline void set_U3CU3Ef__amU24cache1_22(Func_2_t3157167690 * value)
	{
		___U3CU3Ef__amU24cache1_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_23() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558_StaticFields, ___U3CU3Ef__amU24cache2_23)); }
	inline Func_2_t2697311411 * get_U3CU3Ef__amU24cache2_23() const { return ___U3CU3Ef__amU24cache2_23; }
	inline Func_2_t2697311411 ** get_address_of_U3CU3Ef__amU24cache2_23() { return &___U3CU3Ef__amU24cache2_23; }
	inline void set_U3CU3Ef__amU24cache2_23(Func_2_t2697311411 * value)
	{
		___U3CU3Ef__amU24cache2_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_24() { return static_cast<int32_t>(offsetof(pb_Object_t4080196558_StaticFields, ___U3CU3Ef__amU24cache3_24)); }
	inline Func_2_t695711071 * get_U3CU3Ef__amU24cache3_24() const { return ___U3CU3Ef__amU24cache3_24; }
	inline Func_2_t695711071 ** get_address_of_U3CU3Ef__amU24cache3_24() { return &___U3CU3Ef__amU24cache3_24; }
	inline void set_U3CU3Ef__amU24cache3_24(Func_2_t695711071 * value)
	{
		___U3CU3Ef__amU24cache3_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_OBJECT_T4080196558_H
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
// ProBuilder.Core.pb_Vertex[]
struct pb_VertexU5BU5D_t1897471543  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_Vertex_t2424025474 * m_Items[1];

public:
	inline pb_Vertex_t2424025474 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Vertex_t2424025474 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Vertex_t2424025474 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline pb_Vertex_t2424025474 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Vertex_t2424025474 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Vertex_t2424025474 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
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
// ProBuilder.Core.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3213957336  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_IntArray_t560209077 * m_Items[1];

public:
	inline pb_IntArray_t560209077 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_IntArray_t560209077 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_IntArray_t560209077 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline pb_IntArray_t560209077 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_IntArray_t560209077 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_IntArray_t560209077 * value)
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
// ProBuilder.Core.pb_EdgeLookup[]
struct pb_EdgeLookupU5BU5D_t2489130884  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_EdgeLookup_t1945391737 * m_Items[1];

public:
	inline pb_EdgeLookup_t1945391737 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_EdgeLookup_t1945391737 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_EdgeLookup_t1945391737 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline pb_EdgeLookup_t1945391737 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_EdgeLookup_t1945391737 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_EdgeLookup_t1945391737 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ProBuilder.Core.pb_Edge[]
struct pb_EdgeU5BU5D_t1313766249  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_Edge_t1665968824  m_Items[1];

public:
	inline pb_Edge_t1665968824  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Edge_t1665968824 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Edge_t1665968824  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline pb_Edge_t1665968824  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Edge_t1665968824 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Edge_t1665968824  value)
	{
		m_Items[index] = value;
	}
};
// ProBuilder.Core.pb_Face[]
struct pb_FaceU5BU5D_t2241827544  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) pb_Face_t1264560821 * m_Items[1];

public:
	inline pb_Face_t1264560821 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Face_t1264560821 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Face_t1264560821 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline pb_Face_t1264560821 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Face_t1264560821 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Face_t1264560821 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
extern "C"  void List_1__ctor_m3980905937_gshared (List_1_t496136383 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisVector3_t3722313464_m353473236_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Color>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisColor_t2555686324_m3934967420_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector4>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisVector4_t3319028937_m777756441_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector2>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisVector2_t2156229523_m4027559823_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C"  Vector4_t3319028937  List_1_get_Item_m783205072_gshared (List_1_t496136383 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m2075911971_gshared (List_1_t496136383 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(!0)
extern "C"  void List_1_Add_m2996644200_gshared (List_1_t496136383 * __this, Vector4_t3319028937  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C"  int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t128053199 * Enumerable_ToList_TisInt32_t2950945753_m3036595195_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.String ProBuilder.Core.pb_Util::ToString<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,System.String)
extern "C"  String_t* pb_Util_ToString_TisInt32_t2950945753_m506958589_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___arr0, String_t* ___separator1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3513848896_gshared (List_1_t128053199 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1459085071_gshared (List_1_t3138043566 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>::get_Item(System.Int32)
extern "C"  pb_Edge_t1665968824  List_1_get_Item_m1947621579_gshared (List_1_t3138043566 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m2770297842_gshared (List_1_t3138043566 * __this, int32_t p0, pb_Edge_t1665968824  p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>::get_Count()
extern "C"  int32_t List_1_get_Count_m17174339_gshared (List_1_t3138043566 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3411363121_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2059424751_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3104565095_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisRuntimeObject_m3454096398_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,ProBuilder.Core.pb_Edge>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m3583953521_gshared (Func_2_t1032993034 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,ProBuilder.Core.pb_Edge>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_Select_TisRuntimeObject_Tispb_Edge_t1665968824_m3563565228_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t1032993034 * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<ProBuilder.Core.pb_Edge>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t3138043566 * Enumerable_ToList_Tispb_Edge_t1665968824_m2039411076_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
extern "C"  int32_t HashSet_1_get_Count_m1006910788_gshared (HashSet_1_t1515895227 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<ProBuilder.Core.pb_Edge,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m4237725141_gshared (Func_2_t787796887 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<ProBuilder.Core.pb_Edge,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_Select_Tispb_Edge_t1665968824_TisInt32_t2950945753_m2304850911_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t787796887 * p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Distinct_TisRuntimeObject_m3421755008_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m590944211_gshared (Dictionary_2_t2897339372 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
extern "C"  int32_t Dictionary_2_get_Item_m1511102918_gshared (Dictionary_2_t1839659084 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m1362584967_gshared (Dictionary_2_t2897339372 * __this, pb_Edge_t1665968824  p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m3942189393_gshared (Dictionary_2_t2897339372 * __this, pb_Edge_t1665968824  p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
extern "C"  bool HashSet_1_Contains_m1005706419_gshared (HashSet_1_t1515895227 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void ProBuilder.Core.pb_VersionInfo::.ctor(System.String,System.String)
extern "C"  void pb_VersionInfo__ctor_m784160624 (pb_VersionInfo_t568354953 * __this, String_t* ___formatted0, String_t* ___date1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_VersionInfo::TryGetVersionInfo(System.String,ProBuilder.Core.pb_VersionInfo&)
extern "C"  bool pb_VersionInfo_TryGetVersionInfo_m969676263 (RuntimeObject * __this /* static, unused */, String_t* ___input0, pb_VersionInfo_t568354953 ** ___version1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder.Core.pb_VersionInfo::get_metadata()
extern "C"  String_t* pb_VersionInfo_get_metadata_m2293772088 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
extern "C"  String_t* DateTime_ToString_m3718521780 (DateTime_t3738529785 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_VersionInfo::get_major()
extern "C"  int32_t pb_VersionInfo_get_major_m3138679137 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_VersionInfo::get_minor()
extern "C"  int32_t pb_VersionInfo_get_minor_m2557776205 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_VersionInfo::get_patch()
extern "C"  int32_t pb_VersionInfo_get_patch_m3217511842 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_VersionInfo::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,ProBuilder.Core.VersionType,System.String,System.String)
extern "C"  void pb_VersionInfo__ctor_m776985384 (pb_VersionInfo_t568354953 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___patch2, int32_t ___build3, int32_t ___type4, String_t* ___date5, String_t* ___metadata6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_VersionInfo::Equals(ProBuilder.Core.pb_VersionInfo)
extern "C"  bool pb_VersionInfo_Equals_m2420148568 (pb_VersionInfo_t568354953 * __this, pb_VersionInfo_t568354953 * ___version0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_VersionInfo::IsValid()
extern "C"  bool pb_VersionInfo_IsValid_m160168039 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::GetHashCode()
extern "C"  int32_t Int32_GetHashCode_m1876651407 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_VersionInfo::get_build()
extern "C"  int32_t pb_VersionInfo_get_build_m2757362047 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder.Core.VersionType ProBuilder.Core.pb_VersionInfo::get_type()
extern "C"  int32_t pb_VersionInfo_get_type_m3227109946 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m2705121830 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_VersionInfo::CompareTo(ProBuilder.Core.pb_VersionInfo)
extern "C"  int32_t pb_VersionInfo_CompareTo_m3339049886 (pb_VersionInfo_t568354953 * __this, pb_VersionInfo_t568354953 * ___version0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_VersionInfo::WrapNoValue(System.Int32)
extern "C"  int32_t pb_VersionInfo_WrapNoValue_m3647535239 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_VersionInfo::op_Equality(ProBuilder.Core.pb_VersionInfo,ProBuilder.Core.pb_VersionInfo)
extern "C"  bool pb_VersionInfo_op_Equality_m1749244866 (RuntimeObject * __this /* static, unused */, pb_VersionInfo_t568354953 * ___left0, pb_VersionInfo_t568354953 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C"  StringBuilder_t * StringBuilder_Append_m890240332 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char)
extern "C"  Il2CppChar Char_ToLower_m844856331 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder.Core.pb_VersionInfo::get_date()
extern "C"  String_t* pb_VersionInfo_get_date_m3949073496 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder.Core.pb_VersionInfo::ToString(System.String)
extern "C"  String_t* pb_VersionInfo_ToString_m2999028235 (pb_VersionInfo_t568354953 * __this, String_t* ___format0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_VersionInfo::.ctor()
extern "C"  void pb_VersionInfo__ctor_m3439158879 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
extern "C"  Match_t3408321083 * Regex_Match_m2057380353 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C"  bool Group_get_Success_m1492300455 (Group_t2468205786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Capture::get_Value()
extern "C"  String_t* Capture_get_Value_m538076933 (Capture_t2232016050 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C"  bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder.Core.VersionType ProBuilder.Core.pb_VersionInfo::GetVersionType(System.String)
extern "C"  int32_t pb_VersionInfo_GetVersionType_m2890666339 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_VersionInfo::GetBuildNumber(System.String)
extern "C"  int32_t pb_VersionInfo_GetBuildNumber_m2248782345 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Regex_IsMatch_m3454586611 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_Vertex::Equals(ProBuilder.Core.pb_Vertex)
extern "C"  bool pb_Vertex_Equals_m4240600375 (pb_Vertex_t2424025474 * __this, pb_Vertex_t2424025474 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_Math::Approx3(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool pb_Math_Approx3_m1687118489 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___v0, Vector3_t3722313464  ___b1, float ___delta2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_Math::ApproxC(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  bool pb_Math_ApproxC_m1076750931 (RuntimeObject * __this /* static, unused */, Color_t2555686324  ___a0, Color_t2555686324  ___b1, float ___delta2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_Math::Approx4(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
extern "C"  bool pb_Math_Approx4_m3289926052 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___v0, Vector4_t3319028937  ___b1, float ___delta2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_Math::Approx2(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool pb_Math_Approx2_m392173711 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___v0, Vector2_t2156229523  ___b1, float ___delta2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_Vector::GetHashCode(UnityEngine.Vector3)
extern "C"  int32_t pb_Vector_GetHashCode_m3394581290 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_Vector::GetHashCode(UnityEngine.Vector2)
extern "C"  int32_t pb_Vector_GetHashCode_m3394646826 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_Vertex::.ctor(ProBuilder.Core.pb_Vertex)
extern "C"  void pb_Vertex__ctor_m3533538060 (pb_Vertex_t2424025474 * __this, pb_Vertex_t2424025474 * ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_Vertex::Add(ProBuilder.Core.pb_Vertex)
extern "C"  void pb_Vertex_Add_m3197668007 (pb_Vertex_t2424025474 * __this, pb_Vertex_t2424025474 * ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t2555686324  Color_op_Addition_m3293657895 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t3319028937  Vector4_op_Addition_m787366691 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_Vertex::Subtract(ProBuilder.Core.pb_Vertex)
extern "C"  void pb_Vertex_Subtract_m2884692325 (pb_Vertex_t2424025474 * __this, pb_Vertex_t2424025474 * ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
extern "C"  Color_t2555686324  Color_op_Subtraction_m181229690 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t3319028937  Vector4_op_Subtraction_m1632208160 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_Vertex::Multiply(System.Single)
extern "C"  void pb_Vertex_Multiply_m2034339291 (pb_Vertex_t2424025474 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C"  Color_t2555686324  Color_op_Multiply_m2887457390 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t3319028937  Vector4_op_Multiply_m213790997 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_Vertex::Divide(System.Single)
extern "C"  void pb_Vertex_Divide_m2515048396 (pb_Vertex_t2424025474 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Division(UnityEngine.Color,System.Single)
extern "C"  Color_t2555686324  Color_op_Division_m1074517668 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t3319028937  Vector4_op_Division_m264790546 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m914904454 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C"  Vector4_t3319028937  Color_op_Implicit_m986621988 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::Normalize()
extern "C"  void Vector4_Normalize_m2596230534 (Vector4_t3319028937 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::Normalize()
extern "C"  void Vector2_Normalize_m1906922873 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m759076600 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_Object::get_vertexCount()
extern "C"  int32_t pb_Object_get_vertexCount_m1702109088 (pb_Object_t4080196558 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ProBuilder.Core.pb_Object::get_vertices()
extern "C"  Vector3U5BU5D_t1718750761* pb_Object_get_vertices_m4147802905 (pb_Object_t4080196558 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] ProBuilder.Core.pb_Object::get_colors()
extern "C"  ColorU5BU5D_t941916413* pb_Object_get_colors_m1159075833 (pb_Object_t4080196558 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] ProBuilder.Core.pb_Object::get_uv()
extern "C"  Vector2U5BU5D_t1457185986* pb_Object_get_uv_m986108429 (pb_Object_t4080196558 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh ProBuilder.Core.pb_Object::get_msh()
extern "C"  Mesh_t3648964284 * pb_Object_get_msh_m1473874621 (pb_Object_t4080196558 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_normals_m4099615978 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C"  Vector4U5BU5D_t934056436* Mesh_get_tangents_m3279676290 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C"  Vector2U5BU5D_t1457185986* Mesh_get_uv2_m3615020997 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
#define List_1__ctor_m3980905937(__this, method) ((  void (*) (List_1_t496136383 *, const RuntimeMethod*))List_1__ctor_m3980905937_gshared)(__this, method)
// System.Void ProBuilder.Core.pb_Object::GetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void pb_Object_GetUVs_m3025184006 (pb_Object_t4080196558 * __this, int32_t ___channel0, List_1_t496136383 * ___uvs1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisVector3_t3722313464_m353473236(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector3_t3722313464_m353473236_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Color>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisColor_t2555686324_m3934967420(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisColor_t2555686324_m3934967420_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector4>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisVector4_t3319028937_m777756441(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector4_t3319028937_m777756441_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector2>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisVector2_t2156229523_m4027559823(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector2_t2156229523_m4027559823_gshared)(__this /* static, unused */, p0, method)
// System.Void ProBuilder.Core.pb_Vertex::.ctor(System.Boolean)
extern "C"  void pb_Vertex__ctor_m3495902961 (pb_Vertex_t2424025474 * __this, bool ___hasAllValues0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
#define List_1_get_Item_m783205072(__this, p0, method) ((  Vector4_t3319028937  (*) (List_1_t496136383 *, int32_t, const RuntimeMethod*))List_1_get_Item_m783205072_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C"  int32_t Mesh_get_vertexCount_m884140614 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_vertices_m3585684815 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Mesh::get_colors()
extern "C"  ColorU5BU5D_t941916413* Mesh_get_colors_m1375263373 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t1457185986* Mesh_get_uv_m4017248 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::GetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_GetUVs_m55185155 (Mesh_t3648964284 * __this, int32_t p0, List_1_t496136383 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,ProBuilder.Core.AttributeType)
extern "C"  void pb_Vertex_GetArrays_m4132877272 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, Vector3U5BU5D_t1718750761** ___position1, ColorU5BU5D_t941916413** ___color2, Vector2U5BU5D_t1457185986** ___uv03, Vector3U5BU5D_t1718750761** ___normal4, Vector4U5BU5D_t934056436** ___tangent5, Vector2U5BU5D_t1457185986** ___uv26, List_1_t496136383 ** ___uv37, List_1_t496136383 ** ___uv48, uint16_t ___attributes9, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
#define List_1__ctor_m2075911971(__this, p0, method) ((  void (*) (List_1_t496136383 *, int32_t, const RuntimeMethod*))List_1__ctor_m2075911971_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(!0)
#define List_1_Add_m2996644200(__this, p0, method) ((  void (*) (List_1_t496136383 *, Vector4_t3319028937 , const RuntimeMethod*))List_1_Add_m2996644200_gshared)(__this, p0, method)
// System.Void ProBuilder.Core.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&)
extern "C"  void pb_Vertex_GetArrays_m2606191251 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, Vector3U5BU5D_t1718750761** ___position1, ColorU5BU5D_t941916413** ___color2, Vector2U5BU5D_t1457185986** ___uv03, Vector3U5BU5D_t1718750761** ___normal4, Vector4U5BU5D_t934056436** ___tangent5, Vector2U5BU5D_t1457185986** ___uv26, List_1_t496136383 ** ___uv37, List_1_t496136383 ** ___uv48, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m2630385472 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
extern "C"  void Mesh_set_colors_m2218481242 (Mesh_t3648964284 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m332514528 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
extern "C"  void Mesh_set_tangents_m1592250690 (Mesh_t3648964284 * __this, Vector4U5BU5D_t934056436* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv2_m2840654016 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_SetUVs_m3071541108 (Mesh_t3648964284 * __this, int32_t p0, List_1_t496136383 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
#define List_1_get_Count_m361000296(__this, method) ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method)
// System.Collections.Generic.List`1<System.Int32> ProBuilder.Core.pb_IntArrayUtility::UniqueIndicesWithValues(ProBuilder.Core.pb_IntArray[],System.Collections.Generic.IList`1<System.Int32>)
extern "C"  List_1_t128053199 * pb_IntArrayUtility_UniqueIndicesWithValues_m3004014503 (RuntimeObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3213957336* ___pbIntArr0, RuntimeObject* ___indices1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisInt32_t2950945753_m3036595195(__this /* static, unused */, p0, method) ((  List_1_t128053199 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_t2950945753_m3036595195_gshared)(__this /* static, unused */, p0, method)
// System.Void ProBuilder.Core.pb_VertexConnection::.ctor(ProBuilder.Core.pb_Face,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void pb_VertexConnection__ctor_m3368934471 (pb_VertexConnection_t1937459598 * __this, pb_Face_t1264560821 * ___face0, List_1_t128053199 * ___indices1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder.Core.pb_Util::ToString<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,System.String)
#define pb_Util_ToString_TisInt32_t2950945753_m506958589(__this /* static, unused */, ___arr0, ___separator1, method) ((  String_t* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, String_t*, const RuntimeMethod*))pb_Util_ToString_TisInt32_t2950945753_m506958589_gshared)(__this /* static, unused */, ___arr0, ___separator1, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<ProBuilder.Core.pb_VertexConnection>::get_Item(System.Int32)
#define List_1_get_Item_m2928508082(__this, p0, method) ((  pb_VertexConnection_t1937459598 * (*) (List_1_t3409534340 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m3513848896(__this, p0, method) ((  void (*) (List_1_t128053199 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3513848896_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<ProBuilder.Core.pb_VertexConnection>::get_Count()
#define List_1_get_Count_m509547872(__this, method) ((  int32_t (*) (List_1_t3409534340 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Boolean ProBuilder.Core.pb_Edge::Equals(ProBuilder.Core.pb_Edge)
extern "C"  bool pb_Edge_Equals_m478518696 (pb_Edge_t1665968824 * __this, pb_Edge_t1665968824  ___edge0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_WingedEdge::Equals(ProBuilder.Core.pb_WingedEdge)
extern "C"  bool pb_WingedEdge_Equals_m1902962710 (pb_WingedEdge_t1011255431 * __this, pb_WingedEdge_t1011255431 * ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_Edge::GetHashCode()
extern "C"  int32_t pb_Edge_GetHashCode_m1707839855 (pb_Edge_t1665968824 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder.Core.pb_WingedEdgeEnumerator ProBuilder.Core.pb_WingedEdge::GetEnumerator()
extern "C"  pb_WingedEdgeEnumerator_t1885848514 * pb_WingedEdge_GetEnumerator_m1837634229 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_WingedEdgeEnumerator::.ctor(ProBuilder.Core.pb_WingedEdge)
extern "C"  void pb_WingedEdgeEnumerator__ctor_m956777251 (pb_WingedEdgeEnumerator_t1885848514 * __this, pb_WingedEdge_t1011255431 * ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder.Core.pb_Edge::ToString()
extern "C"  String_t* pb_Edge_ToString_m372592668 (pb_Edge_t1665968824 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder.Core.pb_WingedEdge::Count()
extern "C"  int32_t pb_WingedEdge_Count_m226944167 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_EdgeLookup::Equals(ProBuilder.Core.pb_EdgeLookup)
extern "C"  bool pb_EdgeLookup_Equals_m1959387487 (pb_EdgeLookup_t1945391737 * __this, pb_EdgeLookup_t1945391737 * ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder.Core.pb_Edge::Contains(System.Int32)
extern "C"  bool pb_Edge_Contains_m483144525 (pb_Edge_t1665968824 * __this, int32_t ___a0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder.Core.pb_Edge[] ProBuilder.Core.pb_Face::get_edges()
extern "C"  pb_EdgeU5BU5D_t1313766249* pb_Face_get_edges_m1379952927 (pb_Face_t1264560821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m1459085071(__this, p0, method) ((  void (*) (List_1_t3138043566 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1459085071_gshared)(__this, p0, method)
// System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge> ProBuilder.Core.pb_WingedEdge::SortEdgesByAdjacency(System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>)
extern "C"  List_1_t3138043566 * pb_WingedEdge_SortEdgesByAdjacency_m212285346 (RuntimeObject * __this /* static, unused */, List_1_t3138043566 * ___edges0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>::get_Item(System.Int32)
#define List_1_get_Item_m1947621579(__this, p0, method) ((  pb_Edge_t1665968824  (*) (List_1_t3138043566 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1947621579_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>::set_Item(System.Int32,!0)
#define List_1_set_Item_m2770297842(__this, p0, p1, method) ((  void (*) (List_1_t3138043566 *, int32_t, pb_Edge_t1665968824 , const RuntimeMethod*))List_1_set_Item_m2770297842_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>::get_Count()
#define List_1_get_Count_m17174339(__this, method) ((  int32_t (*) (List_1_t3138043566 *, const RuntimeMethod*))List_1_get_Count_m17174339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>>::.ctor()
#define Dictionary_2__ctor_m1884255798(__this, method) ((  void (*) (Dictionary_2_t1372043504 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>::get_Item(System.Int32)
#define List_1_get_Item_m1339110848(__this, p0, method) ((  pb_WingedEdge_t1011255431 * (*) (List_1_t2483330173 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m804141079(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t1372043504 *, int32_t, List_1_t2483330173 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>::Add(!0)
#define List_1_Add_m2985303161(__this, p0, method) ((  void (*) (List_1_t2483330173 *, pb_WingedEdge_t1011255431 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>::.ctor()
#define List_1__ctor_m3006004207(__this, method) ((  void (*) (List_1_t2483330173 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>>::Add(!0,!1)
#define Dictionary_2_Add_m3833384167(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1372043504 *, int32_t, List_1_t2483330173 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>::get_Count()
#define List_1_get_Count_m244620178(__this, method) ((  int32_t (*) (List_1_t2483330173 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void ProBuilder.Core.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0::.ctor()
extern "C"  void U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0__ctor_m1563005025 (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<ProBuilder.Core.pb_WingedEdge,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m3495493528(__this, p0, p1, method) ((  void (*) (Func_2_t2166437104 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3104565095_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<ProBuilder.Core.pb_WingedEdge>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_Tispb_WingedEdge_t1011255431_m1579429792(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2166437104 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3454096398_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Func`2<ProBuilder.Core.pb_WingedEdge,ProBuilder.Core.pb_Edge>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m4245899875(__this, p0, p1, method) ((  void (*) (Func_2_t3735117963 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3583953521_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<ProBuilder.Core.pb_WingedEdge,ProBuilder.Core.pb_Edge>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_Tispb_WingedEdge_t1011255431_Tispb_Edge_t1665968824_m355886542(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3735117963 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_Tispb_Edge_t1665968824_m3563565228_gshared)(__this /* static, unused */, p0, p1, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<ProBuilder.Core.pb_Edge>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_Tispb_Edge_t1665968824_m2039411076(__this /* static, unused */, p0, method) ((  List_1_t3138043566 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_Tispb_Edge_t1665968824_m2039411076_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
#define HashSet_1_get_Count_m1006910788(__this, method) ((  int32_t (*) (HashSet_1_t1515895227 *, const RuntimeMethod*))HashSet_1_get_Count_m1006910788_gshared)(__this, method)
// System.Void System.Func`2<ProBuilder.Core.pb_Edge,System.Int32>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m4237725141(__this, p0, p1, method) ((  void (*) (Func_2_t787796887 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4237725141_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<ProBuilder.Core.pb_Edge,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_Tispb_Edge_t1665968824_TisInt32_t2950945753_m2304850911(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t787796887 *, const RuntimeMethod*))Enumerable_Select_Tispb_Edge_t1665968824_TisInt32_t2950945753_m2304850911_gshared)(__this /* static, unused */, p0, p1, method)
// ProBuilder.Core.pb_Face[] ProBuilder.Core.pb_Object::get_faces()
extern "C"  pb_FaceU5BU5D_t2241827544* pb_Object_get_faces_m1131627313 (pb_Object_t4080196558 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge> ProBuilder.Core.pb_WingedEdge::GetWingedEdges(ProBuilder.Core.pb_Object,System.Collections.Generic.IEnumerable`1<ProBuilder.Core.pb_Face>,System.Boolean,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
extern "C"  List_1_t2483330173 * pb_WingedEdge_GetWingedEdges_m911427999 (RuntimeObject * __this /* static, unused */, pb_Object_t4080196558 * ___pb0, RuntimeObject* ___faces1, bool ___oneWingPerFace2, Dictionary_2_t1839659084 * ___sharedIndexLookup3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder.Core.pb_IntArray[] ProBuilder.Core.pb_Object::get_sharedIndices()
extern "C"  pb_IntArrayU5BU5D_t3213957336* pb_Object_get_sharedIndices_m2390511860 (pb_Object_t4080196558 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ProBuilder.Core.pb_IntArrayUtility::ToDictionary(ProBuilder.Core.pb_IntArray[])
extern "C"  Dictionary_2_t1839659084 * pb_IntArrayUtility_ToDictionary_m3131068144 (RuntimeObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3213957336* ___array0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Distinct<ProBuilder.Core.pb_Face>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Distinct_Tispb_Face_t1264560821_m2370988055(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisRuntimeObject_m3421755008_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,ProBuilder.Core.pb_WingedEdge>::.ctor()
#define Dictionary_2__ctor_m3789757531(__this, method) ((  void (*) (Dictionary_2_t828488639 *, const RuntimeMethod*))Dictionary_2__ctor_m590944211_gshared)(__this, method)
// System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge> ProBuilder.Core.pb_WingedEdge::SortEdgesByAdjacency(ProBuilder.Core.pb_Face)
extern "C"  List_1_t3138043566 * pb_WingedEdge_SortEdgesByAdjacency_m107630097 (RuntimeObject * __this /* static, unused */, pb_Face_t1264560821 * ___face0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder.Core.pb_WingedEdge::.ctor()
extern "C"  void pb_WingedEdge__ctor_m3086440956 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
#define Dictionary_2_get_Item_m1511102918(__this, p0, method) ((  int32_t (*) (Dictionary_2_t1839659084 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m1511102918_gshared)(__this, p0, method)
// System.Void ProBuilder.Core.pb_EdgeLookup::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void pb_EdgeLookup__ctor_m2093191428 (pb_EdgeLookup_t1945391737 * __this, int32_t ___cx0, int32_t ___cy1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,ProBuilder.Core.pb_WingedEdge>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3047336659(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t828488639 *, pb_Edge_t1665968824 , pb_WingedEdge_t1011255431 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1362584967_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder.Core.pb_Edge,ProBuilder.Core.pb_WingedEdge>::Add(!0,!1)
#define Dictionary_2_Add_m702373266(__this, p0, p1, method) ((  void (*) (Dictionary_2_t828488639 *, pb_Edge_t1665968824 , pb_WingedEdge_t1011255431 *, const RuntimeMethod*))Dictionary_2_Add_m3942189393_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
#define HashSet_1_Contains_m1005706419(__this, p0, method) ((  bool (*) (HashSet_1_t1515895227 *, int32_t, const RuntimeMethod*))HashSet_1_Contains_m1005706419_gshared)(__this, p0, method)
// ProBuilder.Core.pb_WingedEdge ProBuilder.Core.pb_WingedEdgeEnumerator::get_Current()
extern "C"  pb_WingedEdge_t1011255431 * pb_WingedEdgeEnumerator_get_Current_m1786682037 (pb_WingedEdgeEnumerator_t1885848514 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder.Core.pb_XYZ_Color ProBuilder.Core.pb_ColorUtil::RGBToXYZ(UnityEngine.Color)
extern "C"  pb_XYZ_Color_t186003279 * pb_ColorUtil_RGBToXYZ_m4004045412 (RuntimeObject * __this /* static, unused */, Color_t2555686324  ___col0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// ProBuilder.Core.pb_XYZ_Color ProBuilder.Core.pb_ColorUtil::RGBToXYZ(System.Single,System.Single,System.Single)
extern "C"  pb_XYZ_Color_t186003279 * pb_ColorUtil_RGBToXYZ_m501436423 (RuntimeObject * __this /* static, unused */, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProBuilder.Core.pb_Version::.cctor()
extern "C"  void pb_Version__cctor_m2321182676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Version__cctor_m2321182676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		pb_VersionInfo_t568354953 * L_0 = (pb_VersionInfo_t568354953 *)il2cpp_codegen_object_new(pb_VersionInfo_t568354953_il2cpp_TypeInfo_var);
		pb_VersionInfo__ctor_m784160624(L_0, _stringLiteral311822790, _stringLiteral3623703453, /*hidden argument*/NULL);
		((pb_Version_t2431675024_StaticFields*)il2cpp_codegen_static_fields_for(pb_Version_t2431675024_il2cpp_TypeInfo_var))->set_Current_0(L_0);
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
// System.Void ProBuilder.Core.pb_VersionInfo::.ctor()
extern "C"  void pb_VersionInfo__ctor_m3439158879 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Major_0((-1));
		__this->set_m_Minor_1((-1));
		__this->set_m_Patch_2((-1));
		__this->set_m_Build_3((-1));
		__this->set_m_Type_4((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProBuilder.Core.pb_VersionInfo::.ctor(System.String,System.String)
extern "C"  void pb_VersionInfo__ctor_m784160624 (pb_VersionInfo_t568354953 * __this, String_t* ___formatted0, String_t* ___date1, const RuntimeMethod* method)
{
	pb_VersionInfo_t568354953 * V_0 = NULL;
	{
		__this->set_m_Major_0((-1));
		__this->set_m_Minor_1((-1));
		__this->set_m_Patch_2((-1));
		__this->set_m_Build_3((-1));
		__this->set_m_Type_4((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___formatted0;
		__this->set_m_Metadata_5(L_0);
		String_t* L_1 = ___date1;
		__this->set_m_Date_6(L_1);
		String_t* L_2 = ___formatted0;
		bool L_3 = pb_VersionInfo_TryGetVersionInfo_m969676263(NULL /*static, unused*/, L_2, (pb_VersionInfo_t568354953 **)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		pb_VersionInfo_t568354953 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_m_Major_0();
		__this->set_m_Major_0(L_5);
		pb_VersionInfo_t568354953 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_m_Minor_1();
		__this->set_m_Minor_1(L_7);
		pb_VersionInfo_t568354953 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_m_Patch_2();
		__this->set_m_Patch_2(L_9);
		pb_VersionInfo_t568354953 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_m_Build_3();
		__this->set_m_Build_3(L_11);
		pb_VersionInfo_t568354953 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_m_Type_4();
		__this->set_m_Type_4(L_13);
		pb_VersionInfo_t568354953 * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = pb_VersionInfo_get_metadata_m2293772088(L_14, /*hidden argument*/NULL);
		__this->set_m_Metadata_5(L_15);
		goto IL_0096;
	}

IL_0094:
	{
	}

IL_0096:
	{
		return;
	}
}
// System.Void ProBuilder.Core.pb_VersionInfo::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,ProBuilder.Core.VersionType,System.String,System.String)
extern "C"  void pb_VersionInfo__ctor_m776985384 (pb_VersionInfo_t568354953 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___patch2, int32_t ___build3, int32_t ___type4, String_t* ___date5, String_t* ___metadata6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo__ctor_m776985384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	pb_VersionInfo_t568354953 * G_B2_0 = NULL;
	pb_VersionInfo_t568354953 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	pb_VersionInfo_t568354953 * G_B3_1 = NULL;
	{
		__this->set_m_Major_0((-1));
		__this->set_m_Minor_1((-1));
		__this->set_m_Patch_2((-1));
		__this->set_m_Build_3((-1));
		__this->set_m_Type_4((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		__this->set_m_Major_0(L_0);
		int32_t L_1 = ___minor1;
		__this->set_m_Minor_1(L_1);
		int32_t L_2 = ___patch2;
		__this->set_m_Patch_2(L_2);
		int32_t L_3 = ___build3;
		__this->set_m_Build_3(L_3);
		int32_t L_4 = ___type4;
		__this->set_m_Type_4(L_4);
		String_t* L_5 = ___metadata6;
		__this->set_m_Metadata_5(L_5);
		String_t* L_6 = ___date5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_7)
		{
			G_B2_0 = __this;
			goto IL_007b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_8 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = DateTime_ToString_m3718521780((DateTime_t3738529785 *)(&V_0), _stringLiteral830187393, /*hidden argument*/NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_007d;
	}

IL_007b:
	{
		String_t* L_10 = ___date5;
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_007d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Date_6(G_B3_0);
		return;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::get_major()
extern "C"  int32_t pb_VersionInfo_get_major_m3138679137 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Major_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::get_minor()
extern "C"  int32_t pb_VersionInfo_get_minor_m2557776205 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Minor_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::get_patch()
extern "C"  int32_t pb_VersionInfo_get_patch_m3217511842 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Patch_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::get_build()
extern "C"  int32_t pb_VersionInfo_get_build_m2757362047 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Build_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// ProBuilder.Core.VersionType ProBuilder.Core.pb_VersionInfo::get_type()
extern "C"  int32_t pb_VersionInfo_get_type_m3227109946 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String ProBuilder.Core.pb_VersionInfo::get_metadata()
extern "C"  String_t* pb_VersionInfo_get_metadata_m2293772088 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Metadata_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String ProBuilder.Core.pb_VersionInfo::get_date()
extern "C"  String_t* pb_VersionInfo_get_date_m3949073496 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Date_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// ProBuilder.Core.pb_VersionInfo ProBuilder.Core.pb_VersionInfo::get_MajorMinorPatch()
extern "C"  pb_VersionInfo_t568354953 * pb_VersionInfo_get_MajorMinorPatch_m444100749 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_get_MajorMinorPatch_m444100749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_VersionInfo_t568354953 * V_0 = NULL;
	{
		int32_t L_0 = pb_VersionInfo_get_major_m3138679137(__this, /*hidden argument*/NULL);
		int32_t L_1 = pb_VersionInfo_get_minor_m2557776205(__this, /*hidden argument*/NULL);
		int32_t L_2 = pb_VersionInfo_get_patch_m3217511842(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_3 = (pb_VersionInfo_t568354953 *)il2cpp_codegen_object_new(pb_VersionInfo_t568354953_il2cpp_TypeInfo_var);
		pb_VersionInfo__ctor_m776985384(L_3, L_0, L_1, L_2, (-1), (-1), _stringLiteral757602046, _stringLiteral757602046, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_002a;
	}

IL_002a:
	{
		pb_VersionInfo_t568354953 * L_4 = V_0;
		return L_4;
	}
}
// System.Boolean ProBuilder.Core.pb_VersionInfo::IsValid()
extern "C"  bool pb_VersionInfo_IsValid_m160168039 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = pb_VersionInfo_get_major_m3138679137(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = pb_VersionInfo_get_minor_m2557776205(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = pb_VersionInfo_get_patch_m3217511842(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean ProBuilder.Core.pb_VersionInfo::Equals(System.Object)
extern "C"  bool pb_VersionInfo_Equals_m3550852761 (pb_VersionInfo_t568354953 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_Equals_m3550852761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___o0;
		if (!((pb_VersionInfo_t568354953 *)IsInstClass((RuntimeObject*)L_0, pb_VersionInfo_t568354953_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_1 = ___o0;
		bool L_2 = pb_VersionInfo_Equals_m2420148568(__this, ((pb_VersionInfo_t568354953 *)CastclassClass((RuntimeObject*)L_1, pb_VersionInfo_t568354953_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::GetHashCode()
extern "C"  int32_t pb_VersionInfo_GetHashCode_m729831595 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_GetHashCode_m729831595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = ((int32_t)13);
		bool L_0 = pb_VersionInfo_IsValid_m160168039(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_1 = V_0;
		int32_t L_2 = pb_VersionInfo_get_major_m3138679137(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Int32_GetHashCode_m1876651407((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)7)), (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = pb_VersionInfo_get_minor_m2557776205(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = Int32_GetHashCode_m1876651407((int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)7)), (int32_t)L_6));
		int32_t L_7 = V_0;
		int32_t L_8 = pb_VersionInfo_get_patch_m3217511842(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = Int32_GetHashCode_m1876651407((int32_t*)(&V_3), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)7)), (int32_t)L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = pb_VersionInfo_get_build_m2757362047(__this, /*hidden argument*/NULL);
		V_4 = L_11;
		int32_t L_12 = Int32_GetHashCode_m1876651407((int32_t*)(&V_4), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)7)), (int32_t)L_12));
		int32_t L_13 = V_0;
		int32_t L_14 = pb_VersionInfo_get_type_m3227109946(__this, /*hidden argument*/NULL);
		V_5 = L_14;
		RuntimeObject * L_15 = Box(VersionType_t1333685008_il2cpp_TypeInfo_var, (&V_5));
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_15);
		V_5 = *(int32_t*)UnBox(L_15);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)7)), (int32_t)L_16));
		goto IL_00c4;
	}

IL_0096:
	{
		String_t* L_17 = __this->get_m_Metadata_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_19 = __this->get_m_Metadata_5();
		NullCheck(L_19);
		int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_19);
		G_B5_0 = L_20;
		goto IL_00bd;
	}

IL_00b7:
	{
		int32_t L_21 = Object_GetHashCode_m2705121830(__this, /*hidden argument*/NULL);
		G_B5_0 = L_21;
	}

IL_00bd:
	{
		V_6 = G_B5_0;
		goto IL_00cd;
	}

IL_00c4:
	{
		int32_t L_22 = V_0;
		V_6 = L_22;
		goto IL_00cd;
	}

IL_00cd:
	{
		int32_t L_23 = V_6;
		return L_23;
	}
}
// System.Boolean ProBuilder.Core.pb_VersionInfo::Equals(ProBuilder.Core.pb_VersionInfo)
extern "C"  bool pb_VersionInfo_Equals_m2420148568 (pb_VersionInfo_t568354953 * __this, pb_VersionInfo_t568354953 * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_Equals_m2420148568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B11_0 = 0;
	{
		pb_VersionInfo_t568354953 * L_0 = ___version0;
		bool L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00d2;
	}

IL_0014:
	{
		bool L_2 = pb_VersionInfo_IsValid_m160168039(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_3 = ___version0;
		NullCheck(L_3);
		bool L_4 = pb_VersionInfo_IsValid_m160168039(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00d2;
	}

IL_002c:
	{
		bool L_5 = pb_VersionInfo_IsValid_m160168039(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_6 = pb_VersionInfo_get_major_m3138679137(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_7 = ___version0;
		NullCheck(L_7);
		int32_t L_8 = pb_VersionInfo_get_major_m3138679137(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_9 = pb_VersionInfo_get_minor_m2557776205(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_10 = ___version0;
		NullCheck(L_10);
		int32_t L_11 = pb_VersionInfo_get_minor_m2557776205(L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_12 = pb_VersionInfo_get_patch_m3217511842(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_13 = ___version0;
		NullCheck(L_13);
		int32_t L_14 = pb_VersionInfo_get_patch_m3217511842(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_15 = pb_VersionInfo_get_type_m3227109946(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_16 = ___version0;
		NullCheck(L_16);
		int32_t L_17 = pb_VersionInfo_get_type_m3227109946(L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_18 = pb_VersionInfo_get_build_m2757362047(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_19 = ___version0;
		NullCheck(L_19);
		int32_t L_20 = pb_VersionInfo_get_build_m2757362047(L_19, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_18) == ((int32_t)L_20))? 1 : 0);
		goto IL_008d;
	}

IL_008c:
	{
		G_B11_0 = 0;
	}

IL_008d:
	{
		V_0 = (bool)G_B11_0;
		goto IL_00d2;
	}

IL_0093:
	{
		String_t* L_21 = __this->get_m_Metadata_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00b4;
		}
	}
	{
		pb_VersionInfo_t568354953 * L_23 = ___version0;
		NullCheck(L_23);
		String_t* L_24 = L_23->get_m_Metadata_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00bb;
		}
	}

IL_00b4:
	{
		V_0 = (bool)0;
		goto IL_00d2;
	}

IL_00bb:
	{
		String_t* L_26 = __this->get_m_Metadata_5();
		pb_VersionInfo_t568354953 * L_27 = ___version0;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_m_Metadata_5();
		NullCheck(L_26);
		bool L_29 = String_Equals_m2270643605(L_26, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		goto IL_00d2;
	}

IL_00d2:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::CompareTo(System.Object)
extern "C"  int32_t pb_VersionInfo_CompareTo_m2297211256 (pb_VersionInfo_t568354953 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_CompareTo_m2297211256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		int32_t L_1 = pb_VersionInfo_CompareTo_m3339049886(__this, ((pb_VersionInfo_t568354953 *)IsInstClass((RuntimeObject*)L_0, pb_VersionInfo_t568354953_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::WrapNoValue(System.Int32)
extern "C"  int32_t pb_VersionInfo_WrapNoValue_m3647535239 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((int32_t)2147483647LL);
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_1 = ___value0;
		G_B3_0 = L_1;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::CompareTo(ProBuilder.Core.pb_VersionInfo)
extern "C"  int32_t pb_VersionInfo_CompareTo_m3339049886 (pb_VersionInfo_t568354953 * __this, pb_VersionInfo_t568354953 * ___version0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		pb_VersionInfo_t568354953 * L_0 = ___version0;
		bool L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = 1;
		goto IL_015a;
	}

IL_0014:
	{
		pb_VersionInfo_t568354953 * L_2 = ___version0;
		bool L_3 = pb_VersionInfo_Equals_m2420148568(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		V_0 = 0;
		goto IL_015a;
	}

IL_0027:
	{
		int32_t L_4 = pb_VersionInfo_get_major_m3138679137(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_5 = ___version0;
		NullCheck(L_5);
		int32_t L_6 = pb_VersionInfo_get_major_m3138679137(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003f;
		}
	}
	{
		V_0 = 1;
		goto IL_015a;
	}

IL_003f:
	{
		int32_t L_7 = pb_VersionInfo_get_major_m3138679137(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_8 = ___version0;
		NullCheck(L_8);
		int32_t L_9 = pb_VersionInfo_get_major_m3138679137(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0057;
		}
	}
	{
		V_0 = (-1);
		goto IL_015a;
	}

IL_0057:
	{
		int32_t L_10 = pb_VersionInfo_get_minor_m2557776205(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_11 = ___version0;
		NullCheck(L_11);
		int32_t L_12 = pb_VersionInfo_get_minor_m2557776205(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)L_12)))
		{
			goto IL_006f;
		}
	}
	{
		V_0 = 1;
		goto IL_015a;
	}

IL_006f:
	{
		int32_t L_13 = pb_VersionInfo_get_minor_m2557776205(__this, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_14 = ___version0;
		NullCheck(L_14);
		int32_t L_15 = pb_VersionInfo_get_minor_m2557776205(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_0087;
		}
	}
	{
		V_0 = (-1);
		goto IL_015a;
	}

IL_0087:
	{
		int32_t L_16 = pb_VersionInfo_get_patch_m3217511842(__this, /*hidden argument*/NULL);
		int32_t L_17 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_18 = ___version0;
		NullCheck(L_18);
		int32_t L_19 = pb_VersionInfo_get_patch_m3217511842(L_18, /*hidden argument*/NULL);
		int32_t L_20 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)L_20)))
		{
			goto IL_00a9;
		}
	}
	{
		V_0 = 1;
		goto IL_015a;
	}

IL_00a9:
	{
		int32_t L_21 = pb_VersionInfo_get_patch_m3217511842(__this, /*hidden argument*/NULL);
		int32_t L_22 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_23 = ___version0;
		NullCheck(L_23);
		int32_t L_24 = pb_VersionInfo_get_patch_m3217511842(L_23, /*hidden argument*/NULL);
		int32_t L_25 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_22) >= ((int32_t)L_25)))
		{
			goto IL_00cb;
		}
	}
	{
		V_0 = (-1);
		goto IL_015a;
	}

IL_00cb:
	{
		int32_t L_26 = pb_VersionInfo_get_type_m3227109946(__this, /*hidden argument*/NULL);
		int32_t L_27 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_28 = ___version0;
		NullCheck(L_28);
		int32_t L_29 = pb_VersionInfo_get_type_m3227109946(L_28, /*hidden argument*/NULL);
		int32_t L_30 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_27) <= ((int32_t)L_30)))
		{
			goto IL_00ed;
		}
	}
	{
		V_0 = 1;
		goto IL_015a;
	}

IL_00ed:
	{
		int32_t L_31 = pb_VersionInfo_get_type_m3227109946(__this, /*hidden argument*/NULL);
		int32_t L_32 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_33 = ___version0;
		NullCheck(L_33);
		int32_t L_34 = pb_VersionInfo_get_type_m3227109946(L_33, /*hidden argument*/NULL);
		int32_t L_35 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if ((((int32_t)L_32) >= ((int32_t)L_35)))
		{
			goto IL_010f;
		}
	}
	{
		V_0 = (-1);
		goto IL_015a;
	}

IL_010f:
	{
		int32_t L_36 = pb_VersionInfo_get_build_m2757362047(__this, /*hidden argument*/NULL);
		int32_t L_37 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_38 = ___version0;
		NullCheck(L_38);
		int32_t L_39 = pb_VersionInfo_get_build_m2757362047(L_38, /*hidden argument*/NULL);
		int32_t L_40 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if ((((int32_t)L_37) <= ((int32_t)L_40)))
		{
			goto IL_0131;
		}
	}
	{
		V_0 = 1;
		goto IL_015a;
	}

IL_0131:
	{
		int32_t L_41 = pb_VersionInfo_get_build_m2757362047(__this, /*hidden argument*/NULL);
		int32_t L_42 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		pb_VersionInfo_t568354953 * L_43 = ___version0;
		NullCheck(L_43);
		int32_t L_44 = pb_VersionInfo_get_build_m2757362047(L_43, /*hidden argument*/NULL);
		int32_t L_45 = pb_VersionInfo_WrapNoValue_m3647535239(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		if ((((int32_t)L_42) >= ((int32_t)L_45)))
		{
			goto IL_0153;
		}
	}
	{
		V_0 = (-1);
		goto IL_015a;
	}

IL_0153:
	{
		V_0 = 0;
		goto IL_015a;
	}

IL_015a:
	{
		int32_t L_46 = V_0;
		return L_46;
	}
}
// System.Boolean ProBuilder.Core.pb_VersionInfo::op_Equality(ProBuilder.Core.pb_VersionInfo,ProBuilder.Core.pb_VersionInfo)
extern "C"  bool pb_VersionInfo_op_Equality_m1749244866 (RuntimeObject * __this /* static, unused */, pb_VersionInfo_t568354953 * ___left0, pb_VersionInfo_t568354953 * ___right1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		pb_VersionInfo_t568354953 * L_0 = ___left0;
		bool L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		pb_VersionInfo_t568354953 * L_2 = ___right1;
		bool L_3 = il2cpp_codegen_object_reference_equals(L_2, NULL);
		V_0 = L_3;
		goto IL_0027;
	}

IL_001a:
	{
		pb_VersionInfo_t568354953 * L_4 = ___left0;
		pb_VersionInfo_t568354953 * L_5 = ___right1;
		NullCheck(L_4);
		bool L_6 = pb_VersionInfo_Equals_m2420148568(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean ProBuilder.Core.pb_VersionInfo::op_Inequality(ProBuilder.Core.pb_VersionInfo,ProBuilder.Core.pb_VersionInfo)
extern "C"  bool pb_VersionInfo_op_Inequality_m3490405406 (RuntimeObject * __this /* static, unused */, pb_VersionInfo_t568354953 * ___left0, pb_VersionInfo_t568354953 * ___right1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		pb_VersionInfo_t568354953 * L_0 = ___left0;
		pb_VersionInfo_t568354953 * L_1 = ___right1;
		bool L_2 = pb_VersionInfo_op_Equality_m1749244866(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean ProBuilder.Core.pb_VersionInfo::op_LessThan(ProBuilder.Core.pb_VersionInfo,ProBuilder.Core.pb_VersionInfo)
extern "C"  bool pb_VersionInfo_op_LessThan_m2001314843 (RuntimeObject * __this /* static, unused */, pb_VersionInfo_t568354953 * ___left0, pb_VersionInfo_t568354953 * ___right1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		pb_VersionInfo_t568354953 * L_0 = ___left0;
		bool L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		pb_VersionInfo_t568354953 * L_2 = ___right1;
		bool L_3 = il2cpp_codegen_object_reference_equals(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_001d:
	{
		pb_VersionInfo_t568354953 * L_4 = ___left0;
		pb_VersionInfo_t568354953 * L_5 = ___right1;
		NullCheck(L_4);
		int32_t L_6 = pb_VersionInfo_CompareTo_m3339049886(L_4, L_5, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002d:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean ProBuilder.Core.pb_VersionInfo::op_GreaterThan(ProBuilder.Core.pb_VersionInfo,ProBuilder.Core.pb_VersionInfo)
extern "C"  bool pb_VersionInfo_op_GreaterThan_m3380503233 (RuntimeObject * __this /* static, unused */, pb_VersionInfo_t568354953 * ___left0, pb_VersionInfo_t568354953 * ___right1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		pb_VersionInfo_t568354953 * L_0 = ___left0;
		bool L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0024;
	}

IL_0014:
	{
		pb_VersionInfo_t568354953 * L_2 = ___left0;
		pb_VersionInfo_t568354953 * L_3 = ___right1;
		NullCheck(L_2);
		int32_t L_4 = pb_VersionInfo_CompareTo_m3339049886(L_2, L_3, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.String ProBuilder.Core.pb_VersionInfo::ToString(System.String)
extern "C"  String_t* pb_VersionInfo_ToString_m2999028235 (pb_VersionInfo_t568354953 * __this, String_t* ___format0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_ToString_m2999028235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	CharU5BU5D_t3528271667* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		String_t* L_1 = ___format0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		V_4 = 0;
		goto IL_0142;
	}

IL_0019:
	{
		CharU5BU5D_t3528271667* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		StringBuilder_t * L_8 = V_0;
		Il2CppChar L_9 = V_2;
		NullCheck(L_8);
		StringBuilder_Append_m2383614642(L_8, L_9, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_013c;
	}

IL_0035:
	{
		Il2CppChar L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0044;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_013b;
	}

IL_0044:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_005e;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		int32_t L_13 = pb_VersionInfo_get_major_m3138679137(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		StringBuilder_Append_m890240332(L_12, L_13, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_005e:
	{
		Il2CppChar L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)109)))))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		int32_t L_16 = pb_VersionInfo_get_minor_m2557776205(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m890240332(L_15, L_16, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0078:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)112)))))
		{
			goto IL_0092;
		}
	}
	{
		StringBuilder_t * L_18 = V_0;
		int32_t L_19 = pb_VersionInfo_get_patch_m3217511842(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_Append_m890240332(L_18, L_19, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0092:
	{
		Il2CppChar L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00ac;
		}
	}
	{
		StringBuilder_t * L_21 = V_0;
		int32_t L_22 = pb_VersionInfo_get_build_m2757362047(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m890240332(L_21, L_22, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_00ac:
	{
		Il2CppChar L_23 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_00e0;
		}
	}
	{
		StringBuilder_t * L_24 = V_0;
		int32_t L_25 = pb_VersionInfo_get_type_m3227109946(__this, /*hidden argument*/NULL);
		V_5 = L_25;
		RuntimeObject * L_26 = Box(VersionType_t1333685008_il2cpp_TypeInfo_var, (&V_5));
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_5 = *(int32_t*)UnBox(L_26);
		NullCheck(L_27);
		Il2CppChar L_28 = String_get_Chars_m2986988803(L_27, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		Il2CppChar L_29 = Char_ToLower_m844856331(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m2383614642(L_24, L_29, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_00e0:
	{
		Il2CppChar L_30 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_00ff;
		}
	}
	{
		StringBuilder_t * L_31 = V_0;
		int32_t L_32 = pb_VersionInfo_get_type_m3227109946(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(VersionType_t1333685008_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		StringBuilder_Append_m1640838743(L_31, L_34, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_00ff:
	{
		Il2CppChar L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0119;
		}
	}
	{
		StringBuilder_t * L_36 = V_0;
		String_t* L_37 = pb_VersionInfo_get_date_m3949073496(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		StringBuilder_Append_m1965104174(L_36, L_37, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0119:
	{
		Il2CppChar L_38 = V_2;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)68)))))
		{
			goto IL_0133;
		}
	}
	{
		StringBuilder_t * L_39 = V_0;
		String_t* L_40 = pb_VersionInfo_get_metadata_m2293772088(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_Append_m1965104174(L_39, L_40, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0133:
	{
		StringBuilder_t * L_41 = V_0;
		Il2CppChar L_42 = V_2;
		NullCheck(L_41);
		StringBuilder_Append_m2383614642(L_41, L_42, /*hidden argument*/NULL);
	}

IL_013b:
	{
	}

IL_013c:
	{
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_0142:
	{
		int32_t L_44 = V_4;
		CharU5BU5D_t3528271667* L_45 = V_3;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t * L_46 = V_0;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		V_6 = L_47;
		goto IL_0159;
	}

IL_0159:
	{
		String_t* L_48 = V_6;
		return L_48;
	}
}
// System.String ProBuilder.Core.pb_VersionInfo::ToString()
extern "C"  String_t* pb_VersionInfo_ToString_m3399858745 (pb_VersionInfo_t568354953 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_ToString_m3399858745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = pb_VersionInfo_ToString_m2999028235(__this, _stringLiteral3406942722, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ProBuilder.Core.pb_VersionInfo::TryGetVersionInfo(System.String,ProBuilder.Core.pb_VersionInfo&)
extern "C"  bool pb_VersionInfo_TryGetVersionInfo_m969676263 (RuntimeObject * __this /* static, unused */, String_t* ___input0, pb_VersionInfo_t568354953 ** ___version1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_TryGetVersionInfo_m969676263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Match_t3408321083 * V_1 = NULL;
	bool V_2 = false;
	StringU5BU5D_t1281789340* V_3 = NULL;
	Match_t3408321083 * V_4 = NULL;
	Match_t3408321083 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		pb_VersionInfo_t568354953 ** L_0 = ___version1;
		pb_VersionInfo_t568354953 * L_1 = (pb_VersionInfo_t568354953 *)il2cpp_codegen_object_new(pb_VersionInfo_t568354953_il2cpp_TypeInfo_var);
		pb_VersionInfo__ctor_m3439158879(L_1, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)L_1);
		V_0 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_2 = ___input0;
			IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
			Match_t3408321083 * L_3 = Regex_Match_m2057380353(NULL /*static, unused*/, L_2, _stringLiteral149512971, /*hidden argument*/NULL);
			V_1 = L_3;
			Match_t3408321083 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = Group_get_Success_m1492300455(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0029;
			}
		}

IL_0022:
		{
			V_2 = (bool)0;
			goto IL_010a;
		}

IL_0029:
		{
			Match_t3408321083 * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = Capture_get_Value_m538076933(L_6, /*hidden argument*/NULL);
			CharU5BU5D_t3528271667* L_8 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t3528271667* L_9 = L_8;
			NullCheck(L_9);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
			NullCheck(L_7);
			StringU5BU5D_t1281789340* L_10 = String_Split_m3646115398(L_7, L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			StringU5BU5D_t1281789340* L_11 = V_3;
			NullCheck(L_11);
			int32_t L_12 = 0;
			String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			pb_VersionInfo_t568354953 ** L_14 = ___version1;
			pb_VersionInfo_t568354953 * L_15 = *((pb_VersionInfo_t568354953 **)L_14);
			NullCheck(L_15);
			int32_t* L_16 = L_15->get_address_of_m_Major_0();
			Int32_TryParse_m2404707562(NULL /*static, unused*/, L_13, (int32_t*)L_16, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_17 = V_3;
			NullCheck(L_17);
			int32_t L_18 = 1;
			String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			pb_VersionInfo_t568354953 ** L_20 = ___version1;
			pb_VersionInfo_t568354953 * L_21 = *((pb_VersionInfo_t568354953 **)L_20);
			NullCheck(L_21);
			int32_t* L_22 = L_21->get_address_of_m_Minor_1();
			Int32_TryParse_m2404707562(NULL /*static, unused*/, L_19, (int32_t*)L_22, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_23 = V_3;
			NullCheck(L_23);
			int32_t L_24 = 2;
			String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
			pb_VersionInfo_t568354953 ** L_26 = ___version1;
			pb_VersionInfo_t568354953 * L_27 = *((pb_VersionInfo_t568354953 **)L_26);
			NullCheck(L_27);
			int32_t* L_28 = L_27->get_address_of_m_Patch_2();
			Int32_TryParse_m2404707562(NULL /*static, unused*/, L_25, (int32_t*)L_28, /*hidden argument*/NULL);
			V_0 = (bool)1;
			String_t* L_29 = ___input0;
			IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
			Match_t3408321083 * L_30 = Regex_Match_m2057380353(NULL /*static, unused*/, L_29, _stringLiteral4284968698, /*hidden argument*/NULL);
			V_4 = L_30;
			Match_t3408321083 * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = Group_get_Success_m1492300455(L_31, /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_0098;
			}
		}

IL_008b:
		{
			String_t* L_33 = ___input0;
			IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
			Match_t3408321083 * L_34 = Regex_Match_m2057380353(NULL /*static, unused*/, L_33, _stringLiteral3182724753, /*hidden argument*/NULL);
			V_4 = L_34;
		}

IL_0098:
		{
			Match_t3408321083 * L_35 = V_4;
			NullCheck(L_35);
			bool L_36 = Group_get_Success_m1492300455(L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_00cc;
			}
		}

IL_00a4:
		{
			pb_VersionInfo_t568354953 ** L_37 = ___version1;
			pb_VersionInfo_t568354953 * L_38 = *((pb_VersionInfo_t568354953 **)L_37);
			Match_t3408321083 * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = Capture_get_Value_m538076933(L_39, /*hidden argument*/NULL);
			int32_t L_41 = pb_VersionInfo_GetVersionType_m2890666339(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
			NullCheck(L_38);
			L_38->set_m_Type_4(L_41);
			pb_VersionInfo_t568354953 ** L_42 = ___version1;
			pb_VersionInfo_t568354953 * L_43 = *((pb_VersionInfo_t568354953 **)L_42);
			Match_t3408321083 * L_44 = V_4;
			NullCheck(L_44);
			String_t* L_45 = Capture_get_Value_m538076933(L_44, /*hidden argument*/NULL);
			int32_t L_46 = pb_VersionInfo_GetBuildNumber_m2248782345(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
			NullCheck(L_43);
			L_43->set_m_Build_3(L_46);
		}

IL_00cc:
		{
			String_t* L_47 = ___input0;
			IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
			Match_t3408321083 * L_48 = Regex_Match_m2057380353(NULL /*static, unused*/, L_47, _stringLiteral2841834373, /*hidden argument*/NULL);
			V_5 = L_48;
			Match_t3408321083 * L_49 = V_5;
			NullCheck(L_49);
			bool L_50 = Group_get_Success_m1492300455(L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_00f3;
			}
		}

IL_00e5:
		{
			pb_VersionInfo_t568354953 ** L_51 = ___version1;
			pb_VersionInfo_t568354953 * L_52 = *((pb_VersionInfo_t568354953 **)L_51);
			Match_t3408321083 * L_53 = V_5;
			NullCheck(L_53);
			String_t* L_54 = Capture_get_Value_m538076933(L_53, /*hidden argument*/NULL);
			NullCheck(L_52);
			L_52->set_m_Metadata_5(L_54);
		}

IL_00f3:
		{
			goto IL_0103;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00f9;
		throw e;
	}

CATCH_00f9:
	{ // begin catch(System.Object)
		V_0 = (bool)0;
		goto IL_0103;
	} // end catch (depth: 1)

IL_0103:
	{
		bool L_55 = V_0;
		V_2 = L_55;
		goto IL_010a;
	}

IL_010a:
	{
		bool L_56 = V_2;
		return L_56;
	}
}
// ProBuilder.Core.VersionType ProBuilder.Core.pb_VersionInfo::GetVersionType(System.String)
extern "C"  int32_t pb_VersionInfo_GetVersionType_m2890666339 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_GetVersionType_m2890666339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		bool L_1 = Regex_IsMatch_m3454586611(NULL /*static, unused*/, L_0, _stringLiteral545303883, 2, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = 2;
		goto IL_0080;
	}

IL_0019:
	{
		String_t* L_2 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		bool L_3 = Regex_IsMatch_m3454586611(NULL /*static, unused*/, L_2, _stringLiteral4053881628, 2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 3;
		goto IL_0080;
	}

IL_0031:
	{
		String_t* L_4 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		bool L_5 = Regex_IsMatch_m3454586611(NULL /*static, unused*/, L_4, _stringLiteral3412915140, 2, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		V_0 = 1;
		goto IL_0080;
	}

IL_0049:
	{
		String_t* L_6 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		bool L_7 = Regex_IsMatch_m3454586611(NULL /*static, unused*/, L_6, _stringLiteral3447949273, 2, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		V_0 = 4;
		goto IL_0080;
	}

IL_0061:
	{
		String_t* L_8 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		bool L_9 = Regex_IsMatch_m3454586611(NULL /*static, unused*/, L_8, _stringLiteral1728156118, 2, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		V_0 = 0;
		goto IL_0080;
	}

IL_0079:
	{
		V_0 = (-1);
		goto IL_0080;
	}

IL_0080:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Int32 ProBuilder.Core.pb_VersionInfo::GetBuildNumber(System.String)
extern "C"  int32_t pb_VersionInfo_GetBuildNumber_m2248782345 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VersionInfo_GetBuildNumber_m2248782345_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Match_t3408321083 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		Match_t3408321083 * L_1 = Regex_Match_m2057380353(NULL /*static, unused*/, L_0, _stringLiteral3326411425, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		Match_t3408321083 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = Group_get_Success_m1492300455(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Match_t3408321083 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = Capture_get_Value_m538076933(L_4, /*hidden argument*/NULL);
		bool L_6 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_5, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		V_2 = L_7;
		goto IL_003a;
	}

IL_0033:
	{
		V_2 = 0;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t L_8 = V_2;
		return L_8;
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
// System.Void ProBuilder.Core.pb_Vertex::.ctor(System.Boolean)
extern "C"  void pb_Vertex__ctor_m3495902961 (pb_Vertex_t2424025474 * __this, bool ___hasAllValues0, const RuntimeMethod* method)
{
	{
		__this->set_hasPosition_8((bool)0);
		__this->set_hasColor_9((bool)0);
		__this->set_hasNormal_10((bool)0);
		__this->set_hasTangent_11((bool)0);
		__this->set_hasUv0_12((bool)0);
		__this->set_hasUv2_13((bool)0);
		__this->set_hasUv3_14((bool)0);
		__this->set_hasUv4_15((bool)0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___hasAllValues0;
		__this->set_hasPosition_8(L_0);
		bool L_1 = ___hasAllValues0;
		__this->set_hasColor_9(L_1);
		bool L_2 = ___hasAllValues0;
		__this->set_hasNormal_10(L_2);
		bool L_3 = ___hasAllValues0;
		__this->set_hasTangent_11(L_3);
		bool L_4 = ___hasAllValues0;
		__this->set_hasUv0_12(L_4);
		bool L_5 = ___hasAllValues0;
		__this->set_hasUv2_13(L_5);
		bool L_6 = ___hasAllValues0;
		__this->set_hasUv3_14(L_6);
		bool L_7 = ___hasAllValues0;
		__this->set_hasUv4_15(L_7);
		return;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::.ctor(ProBuilder.Core.pb_Vertex)
extern "C"  void pb_Vertex__ctor_m3533538060 (pb_Vertex_t2424025474 * __this, pb_Vertex_t2424025474 * ___v0, const RuntimeMethod* method)
{
	{
		__this->set_hasPosition_8((bool)0);
		__this->set_hasColor_9((bool)0);
		__this->set_hasNormal_10((bool)0);
		__this->set_hasTangent_11((bool)0);
		__this->set_hasUv0_12((bool)0);
		__this->set_hasUv2_13((bool)0);
		__this->set_hasUv3_14((bool)0);
		__this->set_hasUv4_15((bool)0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_0 = ___v0;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = L_0->get_position_0();
		__this->set_position_0(L_1);
		pb_Vertex_t2424025474 * L_2 = ___v0;
		NullCheck(L_2);
		bool L_3 = L_2->get_hasPosition_8();
		__this->set_hasPosition_8(L_3);
		pb_Vertex_t2424025474 * L_4 = ___v0;
		NullCheck(L_4);
		Color_t2555686324  L_5 = L_4->get_color_1();
		__this->set_color_1(L_5);
		pb_Vertex_t2424025474 * L_6 = ___v0;
		NullCheck(L_6);
		bool L_7 = L_6->get_hasColor_9();
		__this->set_hasColor_9(L_7);
		pb_Vertex_t2424025474 * L_8 = ___v0;
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = L_8->get_uv0_4();
		__this->set_uv0_4(L_9);
		pb_Vertex_t2424025474 * L_10 = ___v0;
		NullCheck(L_10);
		bool L_11 = L_10->get_hasUv0_12();
		__this->set_hasUv0_12(L_11);
		pb_Vertex_t2424025474 * L_12 = ___v0;
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = L_12->get_normal_2();
		__this->set_normal_2(L_13);
		pb_Vertex_t2424025474 * L_14 = ___v0;
		NullCheck(L_14);
		bool L_15 = L_14->get_hasNormal_10();
		__this->set_hasNormal_10(L_15);
		pb_Vertex_t2424025474 * L_16 = ___v0;
		NullCheck(L_16);
		Vector4_t3319028937  L_17 = L_16->get_tangent_3();
		__this->set_tangent_3(L_17);
		pb_Vertex_t2424025474 * L_18 = ___v0;
		NullCheck(L_18);
		bool L_19 = L_18->get_hasTangent_11();
		__this->set_hasTangent_11(L_19);
		pb_Vertex_t2424025474 * L_20 = ___v0;
		NullCheck(L_20);
		Vector2_t2156229523  L_21 = L_20->get_uv2_5();
		__this->set_uv2_5(L_21);
		pb_Vertex_t2424025474 * L_22 = ___v0;
		NullCheck(L_22);
		bool L_23 = L_22->get_hasUv2_13();
		__this->set_hasUv2_13(L_23);
		pb_Vertex_t2424025474 * L_24 = ___v0;
		NullCheck(L_24);
		Vector4_t3319028937  L_25 = L_24->get_uv3_6();
		__this->set_uv3_6(L_25);
		pb_Vertex_t2424025474 * L_26 = ___v0;
		NullCheck(L_26);
		bool L_27 = L_26->get_hasUv3_14();
		__this->set_hasUv3_14(L_27);
		pb_Vertex_t2424025474 * L_28 = ___v0;
		NullCheck(L_28);
		Vector4_t3319028937  L_29 = L_28->get_uv4_7();
		__this->set_uv4_7(L_29);
		pb_Vertex_t2424025474 * L_30 = ___v0;
		NullCheck(L_30);
		bool L_31 = L_30->get_hasUv4_15();
		__this->set_hasUv4_15(L_31);
		return;
	}
}
// System.Boolean ProBuilder.Core.pb_Vertex::Equals(System.Object)
extern "C"  bool pb_Vertex_Equals_m1280853635 (pb_Vertex_t2424025474 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Equals_m1280853635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!((pb_Vertex_t2424025474 *)IsInstClass((RuntimeObject*)L_0, pb_Vertex_t2424025474_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = pb_Vertex_Equals_m4240600375(__this, ((pb_Vertex_t2424025474 *)IsInstClass((RuntimeObject*)L_1, pb_Vertex_t2424025474_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean ProBuilder.Core.pb_Vertex::Equals(ProBuilder.Core.pb_Vertex)
extern "C"  bool pb_Vertex_Equals_m4240600375 (pb_Vertex_t2424025474 * __this, pb_Vertex_t2424025474 * ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B11_0 = 0;
	{
		pb_Vertex_t2424025474 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_00ea;
	}

IL_000e:
	{
		Vector3_t3722313464  L_1 = __this->get_position_0();
		pb_Vertex_t2424025474 * L_2 = ___other0;
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = L_2->get_position_0();
		bool L_4 = pb_Math_Approx3_m1687118489(NULL /*static, unused*/, L_1, L_3, (0.0001f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00e3;
		}
	}
	{
		Color_t2555686324  L_5 = __this->get_color_1();
		pb_Vertex_t2424025474 * L_6 = ___other0;
		NullCheck(L_6);
		Color_t2555686324  L_7 = L_6->get_color_1();
		bool L_8 = pb_Math_ApproxC_m1076750931(NULL /*static, unused*/, L_5, L_7, (0.0001f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00e3;
		}
	}
	{
		Vector3_t3722313464  L_9 = __this->get_normal_2();
		pb_Vertex_t2424025474 * L_10 = ___other0;
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = L_10->get_normal_2();
		bool L_12 = pb_Math_Approx3_m1687118489(NULL /*static, unused*/, L_9, L_11, (0.0001f), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00e3;
		}
	}
	{
		Vector4_t3319028937  L_13 = __this->get_tangent_3();
		pb_Vertex_t2424025474 * L_14 = ___other0;
		NullCheck(L_14);
		Vector4_t3319028937  L_15 = L_14->get_tangent_3();
		bool L_16 = pb_Math_Approx4_m3289926052(NULL /*static, unused*/, L_13, L_15, (0.0001f), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00e3;
		}
	}
	{
		Vector2_t2156229523  L_17 = __this->get_uv0_4();
		pb_Vertex_t2424025474 * L_18 = ___other0;
		NullCheck(L_18);
		Vector2_t2156229523  L_19 = L_18->get_uv0_4();
		bool L_20 = pb_Math_Approx2_m392173711(NULL /*static, unused*/, L_17, L_19, (0.0001f), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e3;
		}
	}
	{
		Vector2_t2156229523  L_21 = __this->get_uv2_5();
		pb_Vertex_t2424025474 * L_22 = ___other0;
		NullCheck(L_22);
		Vector2_t2156229523  L_23 = L_22->get_uv2_5();
		bool L_24 = pb_Math_Approx2_m392173711(NULL /*static, unused*/, L_21, L_23, (0.0001f), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e3;
		}
	}
	{
		Vector4_t3319028937  L_25 = __this->get_uv3_6();
		pb_Vertex_t2424025474 * L_26 = ___other0;
		NullCheck(L_26);
		Vector4_t3319028937  L_27 = L_26->get_uv3_6();
		bool L_28 = pb_Math_Approx4_m3289926052(NULL /*static, unused*/, L_25, L_27, (0.0001f), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e3;
		}
	}
	{
		Vector4_t3319028937  L_29 = __this->get_uv4_7();
		pb_Vertex_t2424025474 * L_30 = ___other0;
		NullCheck(L_30);
		Vector4_t3319028937  L_31 = L_30->get_uv4_7();
		bool L_32 = pb_Math_Approx4_m3289926052(NULL /*static, unused*/, L_29, L_31, (0.0001f), /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B11_0 = 0;
	}

IL_00e4:
	{
		V_0 = (bool)G_B11_0;
		goto IL_00ea;
	}

IL_00ea:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
// System.Int32 ProBuilder.Core.pb_Vertex::GetHashCode()
extern "C"  int32_t pb_Vertex_GetHashCode_m719996636 (pb_Vertex_t2424025474 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		int32_t L_1 = pb_Vector_GetHashCode_m3394581290(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)783), (int32_t)L_1));
		int32_t L_2 = V_0;
		Vector2_t2156229523  L_3 = __this->get_uv0_4();
		int32_t L_4 = pb_Vector_GetHashCode_m3394646826(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)29))), (int32_t)L_4));
		int32_t L_5 = V_0;
		Vector3_t3722313464  L_6 = __this->get_normal_2();
		int32_t L_7 = pb_Vector_GetHashCode_m3394581290(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)31))), (int32_t)L_7));
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// ProBuilder.Core.pb_Vertex ProBuilder.Core.pb_Vertex::op_Addition(ProBuilder.Core.pb_Vertex,ProBuilder.Core.pb_Vertex)
extern "C"  pb_Vertex_t2424025474 * pb_Vertex_op_Addition_m1933930467 (RuntimeObject * __this /* static, unused */, pb_Vertex_t2424025474 * ___a0, pb_Vertex_t2424025474 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_op_Addition_m1933930467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2424025474 * V_0 = NULL;
	pb_Vertex_t2424025474 * V_1 = NULL;
	{
		pb_Vertex_t2424025474 * L_0 = ___a0;
		pb_Vertex_t2424025474 * L_1 = (pb_Vertex_t2424025474 *)il2cpp_codegen_object_new(pb_Vertex_t2424025474_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m3533538060(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		pb_Vertex_t2424025474 * L_2 = V_0;
		pb_Vertex_t2424025474 * L_3 = ___b1;
		NullCheck(L_2);
		pb_Vertex_Add_m3197668007(L_2, L_3, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		pb_Vertex_t2424025474 * L_5 = V_1;
		return L_5;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::Add(ProBuilder.Core.pb_Vertex)
extern "C"  void pb_Vertex_Add_m3197668007 (pb_Vertex_t2424025474 * __this, pb_Vertex_t2424025474 * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Add_m3197668007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		pb_Vertex_t2424025474 * L_1 = ___b0;
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = L_1->get_position_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_position_0(L_3);
		Color_t2555686324  L_4 = __this->get_color_1();
		pb_Vertex_t2424025474 * L_5 = ___b0;
		NullCheck(L_5);
		Color_t2555686324  L_6 = L_5->get_color_1();
		Color_t2555686324  L_7 = Color_op_Addition_m3293657895(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		__this->set_color_1(L_7);
		Vector3_t3722313464  L_8 = __this->get_normal_2();
		pb_Vertex_t2424025474 * L_9 = ___b0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = L_9->get_normal_2();
		Vector3_t3722313464  L_11 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		__this->set_normal_2(L_11);
		Vector4_t3319028937  L_12 = __this->get_tangent_3();
		pb_Vertex_t2424025474 * L_13 = ___b0;
		NullCheck(L_13);
		Vector4_t3319028937  L_14 = L_13->get_tangent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_15 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_tangent_3(L_15);
		Vector2_t2156229523  L_16 = __this->get_uv0_4();
		pb_Vertex_t2424025474 * L_17 = ___b0;
		NullCheck(L_17);
		Vector2_t2156229523  L_18 = L_17->get_uv0_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		__this->set_uv0_4(L_19);
		Vector2_t2156229523  L_20 = __this->get_uv2_5();
		pb_Vertex_t2424025474 * L_21 = ___b0;
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = L_21->get_uv2_5();
		Vector2_t2156229523  L_23 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		__this->set_uv2_5(L_23);
		Vector4_t3319028937  L_24 = __this->get_uv3_6();
		pb_Vertex_t2424025474 * L_25 = ___b0;
		NullCheck(L_25);
		Vector4_t3319028937  L_26 = L_25->get_uv3_6();
		Vector4_t3319028937  L_27 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		__this->set_uv3_6(L_27);
		Vector4_t3319028937  L_28 = __this->get_uv4_7();
		pb_Vertex_t2424025474 * L_29 = ___b0;
		NullCheck(L_29);
		Vector4_t3319028937  L_30 = L_29->get_uv4_7();
		Vector4_t3319028937  L_31 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		__this->set_uv4_7(L_31);
		return;
	}
}
// ProBuilder.Core.pb_Vertex ProBuilder.Core.pb_Vertex::op_Subtraction(ProBuilder.Core.pb_Vertex,ProBuilder.Core.pb_Vertex)
extern "C"  pb_Vertex_t2424025474 * pb_Vertex_op_Subtraction_m1464747965 (RuntimeObject * __this /* static, unused */, pb_Vertex_t2424025474 * ___a0, pb_Vertex_t2424025474 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_op_Subtraction_m1464747965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2424025474 * V_0 = NULL;
	pb_Vertex_t2424025474 * V_1 = NULL;
	{
		pb_Vertex_t2424025474 * L_0 = ___a0;
		pb_Vertex_t2424025474 * L_1 = (pb_Vertex_t2424025474 *)il2cpp_codegen_object_new(pb_Vertex_t2424025474_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m3533538060(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		pb_Vertex_t2424025474 * L_2 = V_0;
		pb_Vertex_t2424025474 * L_3 = ___b1;
		NullCheck(L_2);
		pb_Vertex_Subtract_m2884692325(L_2, L_3, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		pb_Vertex_t2424025474 * L_5 = V_1;
		return L_5;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::Subtract(ProBuilder.Core.pb_Vertex)
extern "C"  void pb_Vertex_Subtract_m2884692325 (pb_Vertex_t2424025474 * __this, pb_Vertex_t2424025474 * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Subtract_m2884692325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		pb_Vertex_t2424025474 * L_1 = ___b0;
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = L_1->get_position_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_position_0(L_3);
		Color_t2555686324  L_4 = __this->get_color_1();
		pb_Vertex_t2424025474 * L_5 = ___b0;
		NullCheck(L_5);
		Color_t2555686324  L_6 = L_5->get_color_1();
		Color_t2555686324  L_7 = Color_op_Subtraction_m181229690(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		__this->set_color_1(L_7);
		Vector3_t3722313464  L_8 = __this->get_normal_2();
		pb_Vertex_t2424025474 * L_9 = ___b0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = L_9->get_normal_2();
		Vector3_t3722313464  L_11 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		__this->set_normal_2(L_11);
		Vector4_t3319028937  L_12 = __this->get_tangent_3();
		pb_Vertex_t2424025474 * L_13 = ___b0;
		NullCheck(L_13);
		Vector4_t3319028937  L_14 = L_13->get_tangent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_15 = Vector4_op_Subtraction_m1632208160(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_tangent_3(L_15);
		Vector2_t2156229523  L_16 = __this->get_uv0_4();
		pb_Vertex_t2424025474 * L_17 = ___b0;
		NullCheck(L_17);
		Vector2_t2156229523  L_18 = L_17->get_uv0_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_19 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		__this->set_uv0_4(L_19);
		Vector2_t2156229523  L_20 = __this->get_uv2_5();
		pb_Vertex_t2424025474 * L_21 = ___b0;
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = L_21->get_uv2_5();
		Vector2_t2156229523  L_23 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		__this->set_uv2_5(L_23);
		Vector4_t3319028937  L_24 = __this->get_uv3_6();
		pb_Vertex_t2424025474 * L_25 = ___b0;
		NullCheck(L_25);
		Vector4_t3319028937  L_26 = L_25->get_uv3_6();
		Vector4_t3319028937  L_27 = Vector4_op_Subtraction_m1632208160(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		__this->set_uv3_6(L_27);
		Vector4_t3319028937  L_28 = __this->get_uv4_7();
		pb_Vertex_t2424025474 * L_29 = ___b0;
		NullCheck(L_29);
		Vector4_t3319028937  L_30 = L_29->get_uv4_7();
		Vector4_t3319028937  L_31 = Vector4_op_Subtraction_m1632208160(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		__this->set_uv4_7(L_31);
		return;
	}
}
// ProBuilder.Core.pb_Vertex ProBuilder.Core.pb_Vertex::op_Multiply(ProBuilder.Core.pb_Vertex,System.Single)
extern "C"  pb_Vertex_t2424025474 * pb_Vertex_op_Multiply_m1484448880 (RuntimeObject * __this /* static, unused */, pb_Vertex_t2424025474 * ___a0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_op_Multiply_m1484448880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2424025474 * V_0 = NULL;
	pb_Vertex_t2424025474 * V_1 = NULL;
	{
		pb_Vertex_t2424025474 * L_0 = ___a0;
		pb_Vertex_t2424025474 * L_1 = (pb_Vertex_t2424025474 *)il2cpp_codegen_object_new(pb_Vertex_t2424025474_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m3533538060(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		pb_Vertex_t2424025474 * L_2 = V_0;
		float L_3 = ___value1;
		NullCheck(L_2);
		pb_Vertex_Multiply_m2034339291(L_2, L_3, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		pb_Vertex_t2424025474 * L_5 = V_1;
		return L_5;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::Multiply(System.Single)
extern "C"  void pb_Vertex_Multiply_m2034339291 (pb_Vertex_t2424025474 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Multiply_m2034339291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_position_0(L_2);
		Color_t2555686324  L_3 = __this->get_color_1();
		float L_4 = ___value0;
		Color_t2555686324  L_5 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->set_color_1(L_5);
		Vector3_t3722313464  L_6 = __this->get_normal_2();
		float L_7 = ___value0;
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->set_normal_2(L_8);
		Vector4_t3319028937  L_9 = __this->get_tangent_3();
		float L_10 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_11 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->set_tangent_3(L_11);
		Vector2_t2156229523  L_12 = __this->get_uv0_4();
		float L_13 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_14 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		__this->set_uv0_4(L_14);
		Vector2_t2156229523  L_15 = __this->get_uv2_5();
		float L_16 = ___value0;
		Vector2_t2156229523  L_17 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		__this->set_uv2_5(L_17);
		Vector4_t3319028937  L_18 = __this->get_uv3_6();
		float L_19 = ___value0;
		Vector4_t3319028937  L_20 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		__this->set_uv3_6(L_20);
		Vector4_t3319028937  L_21 = __this->get_uv4_7();
		float L_22 = ___value0;
		Vector4_t3319028937  L_23 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		__this->set_uv4_7(L_23);
		return;
	}
}
// ProBuilder.Core.pb_Vertex ProBuilder.Core.pb_Vertex::op_Division(ProBuilder.Core.pb_Vertex,System.Single)
extern "C"  pb_Vertex_t2424025474 * pb_Vertex_op_Division_m398869066 (RuntimeObject * __this /* static, unused */, pb_Vertex_t2424025474 * ___a0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_op_Division_m398869066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2424025474 * V_0 = NULL;
	pb_Vertex_t2424025474 * V_1 = NULL;
	{
		pb_Vertex_t2424025474 * L_0 = ___a0;
		pb_Vertex_t2424025474 * L_1 = (pb_Vertex_t2424025474 *)il2cpp_codegen_object_new(pb_Vertex_t2424025474_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m3533538060(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		pb_Vertex_t2424025474 * L_2 = V_0;
		float L_3 = ___value1;
		NullCheck(L_2);
		pb_Vertex_Divide_m2515048396(L_2, L_3, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		pb_Vertex_t2424025474 * L_5 = V_1;
		return L_5;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::Divide(System.Single)
extern "C"  void pb_Vertex_Divide_m2515048396 (pb_Vertex_t2424025474 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Divide_m2515048396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = __this->get_position_0();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_position_0(L_2);
		Color_t2555686324  L_3 = __this->get_color_1();
		float L_4 = ___value0;
		Color_t2555686324  L_5 = Color_op_Division_m1074517668(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->set_color_1(L_5);
		Vector3_t3722313464  L_6 = __this->get_normal_2();
		float L_7 = ___value0;
		Vector3_t3722313464  L_8 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->set_normal_2(L_8);
		Vector4_t3319028937  L_9 = __this->get_tangent_3();
		float L_10 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_11 = Vector4_op_Division_m264790546(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->set_tangent_3(L_11);
		Vector2_t2156229523  L_12 = __this->get_uv0_4();
		float L_13 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_14 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		__this->set_uv0_4(L_14);
		Vector2_t2156229523  L_15 = __this->get_uv2_5();
		float L_16 = ___value0;
		Vector2_t2156229523  L_17 = Vector2_op_Division_m132623573(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		__this->set_uv2_5(L_17);
		Vector4_t3319028937  L_18 = __this->get_uv3_6();
		float L_19 = ___value0;
		Vector4_t3319028937  L_20 = Vector4_op_Division_m264790546(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		__this->set_uv3_6(L_20);
		Vector4_t3319028937  L_21 = __this->get_uv4_7();
		float L_22 = ___value0;
		Vector4_t3319028937  L_23 = Vector4_op_Division_m264790546(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		__this->set_uv4_7(L_23);
		return;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::Normalize()
extern "C"  void pb_Vertex_Normalize_m1937173321 (pb_Vertex_t2424025474 * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_position_0();
		Vector3_Normalize_m914904454((Vector3_t3722313464 *)L_0, /*hidden argument*/NULL);
		Color_t2555686324  L_1 = __this->get_color_1();
		Vector4_t3319028937  L_2 = Color_op_Implicit_m986621988(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector4_Normalize_m2596230534((Vector4_t3319028937 *)(&V_0), /*hidden argument*/NULL);
		Color_t2555686324 * L_3 = __this->get_address_of_color_1();
		float L_4 = (&V_0)->get_x_1();
		L_3->set_r_0(L_4);
		Color_t2555686324 * L_5 = __this->get_address_of_color_1();
		float L_6 = (&V_0)->get_y_2();
		L_5->set_g_1(L_6);
		Color_t2555686324 * L_7 = __this->get_address_of_color_1();
		float L_8 = (&V_0)->get_z_3();
		L_7->set_b_2(L_8);
		Color_t2555686324 * L_9 = __this->get_address_of_color_1();
		float L_10 = (&V_0)->get_w_4();
		L_9->set_a_3(L_10);
		Vector3_t3722313464 * L_11 = __this->get_address_of_normal_2();
		Vector3_Normalize_m914904454((Vector3_t3722313464 *)L_11, /*hidden argument*/NULL);
		Vector4_t3319028937 * L_12 = __this->get_address_of_tangent_3();
		Vector4_Normalize_m2596230534((Vector4_t3319028937 *)L_12, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_13 = __this->get_address_of_uv0_4();
		Vector2_Normalize_m1906922873((Vector2_t2156229523 *)L_13, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_14 = __this->get_address_of_uv2_5();
		Vector2_Normalize_m1906922873((Vector2_t2156229523 *)L_14, /*hidden argument*/NULL);
		Vector4_t3319028937 * L_15 = __this->get_address_of_uv3_6();
		Vector4_Normalize_m2596230534((Vector4_t3319028937 *)L_15, /*hidden argument*/NULL);
		Vector4_t3319028937 * L_16 = __this->get_address_of_uv4_7();
		Vector4_Normalize_m2596230534((Vector4_t3319028937 *)L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.String ProBuilder.Core.pb_Vertex::ToString()
extern "C"  String_t* pb_Vertex_ToString_m1407154874 (pb_Vertex_t2424025474 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		Vector3_t3722313464 * L_0 = __this->get_address_of_position_0();
		String_t* L_1 = Vector3_ToString_m759076600((Vector3_t3722313464 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// ProBuilder.Core.pb_Vertex[] ProBuilder.Core.pb_Vertex::GetVertices(ProBuilder.Core.pb_Object,System.Collections.Generic.IList`1<System.Int32>)
extern "C"  pb_VertexU5BU5D_t1897471543* pb_Vertex_GetVertices_m1833137127 (RuntimeObject * __this /* static, unused */, pb_Object_t4080196558 * ___pb0, RuntimeObject* ___indices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_GetVertices_m1833137127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	pb_VertexU5BU5D_t1897471543* V_2 = NULL;
	Vector3U5BU5D_t1718750761* V_3 = NULL;
	ColorU5BU5D_t941916413* V_4 = NULL;
	Vector2U5BU5D_t1457185986* V_5 = NULL;
	Vector3U5BU5D_t1718750761* V_6 = NULL;
	Vector4U5BU5D_t934056436* V_7 = NULL;
	Vector2U5BU5D_t1457185986* V_8 = NULL;
	List_1_t496136383 * V_9 = NULL;
	List_1_t496136383 * V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	pb_VertexU5BU5D_t1897471543* V_21 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B31_0 = 0;
	{
		pb_Object_t4080196558 * L_0 = ___pb0;
		NullCheck(L_0);
		int32_t L_1 = pb_Object_get_vertexCount_m1702109088(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___indices1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_3 = ___indices1;
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t1484130691_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
		goto IL_001f;
	}

IL_0019:
	{
		pb_Object_t4080196558 * L_5 = ___pb0;
		NullCheck(L_5);
		int32_t L_6 = pb_Object_get_vertexCount_m1702109088(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		V_1 = G_B3_0;
		int32_t L_7 = V_1;
		pb_VertexU5BU5D_t1897471543* L_8 = (pb_VertexU5BU5D_t1897471543*)SZArrayNew(pb_VertexU5BU5D_t1897471543_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		pb_Object_t4080196558 * L_9 = ___pb0;
		NullCheck(L_9);
		Vector3U5BU5D_t1718750761* L_10 = pb_Object_get_vertices_m4147802905(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		pb_Object_t4080196558 * L_11 = ___pb0;
		NullCheck(L_11);
		ColorU5BU5D_t941916413* L_12 = pb_Object_get_colors_m1159075833(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		pb_Object_t4080196558 * L_13 = ___pb0;
		NullCheck(L_13);
		Vector2U5BU5D_t1457185986* L_14 = pb_Object_get_uv_m986108429(L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		pb_Object_t4080196558 * L_15 = ___pb0;
		NullCheck(L_15);
		Mesh_t3648964284 * L_16 = pb_Object_get_msh_m1473874621(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3U5BU5D_t1718750761* L_17 = Mesh_get_normals_m4099615978(L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		pb_Object_t4080196558 * L_18 = ___pb0;
		NullCheck(L_18);
		Mesh_t3648964284 * L_19 = pb_Object_get_msh_m1473874621(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector4U5BU5D_t934056436* L_20 = Mesh_get_tangents_m3279676290(L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		pb_Object_t4080196558 * L_21 = ___pb0;
		NullCheck(L_21);
		Mesh_t3648964284 * L_22 = pb_Object_get_msh_m1473874621(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector2U5BU5D_t1457185986* L_23 = Mesh_get_uv2_m3615020997(L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		List_1_t496136383 * L_24 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m3980905937(L_24, /*hidden argument*/List_1__ctor_m3980905937_RuntimeMethod_var);
		V_9 = L_24;
		List_1_t496136383 * L_25 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m3980905937(L_25, /*hidden argument*/List_1__ctor_m3980905937_RuntimeMethod_var);
		V_10 = L_25;
		pb_Object_t4080196558 * L_26 = ___pb0;
		List_1_t496136383 * L_27 = V_9;
		NullCheck(L_26);
		pb_Object_GetUVs_m3025184006(L_26, 2, L_27, /*hidden argument*/NULL);
		pb_Object_t4080196558 * L_28 = ___pb0;
		List_1_t496136383 * L_29 = V_10;
		NullCheck(L_28);
		pb_Object_GetUVs_m3025184006(L_28, 3, L_29, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_30 = V_3;
		if (!L_30)
		{
			goto IL_0096;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_31 = V_3;
		int32_t L_32 = Enumerable_Count_TisVector3_t3722313464_m353473236(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_31, /*hidden argument*/Enumerable_Count_TisVector3_t3722313464_m353473236_RuntimeMethod_var);
		int32_t L_33 = V_0;
		G_B6_0 = ((((int32_t)L_32) == ((int32_t)L_33))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B6_0 = 0;
	}

IL_0097:
	{
		V_11 = (bool)G_B6_0;
		ColorU5BU5D_t941916413* L_34 = V_4;
		if (!L_34)
		{
			goto IL_00ac;
		}
	}
	{
		ColorU5BU5D_t941916413* L_35 = V_4;
		int32_t L_36 = Enumerable_Count_TisColor_t2555686324_m3934967420(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_35, /*hidden argument*/Enumerable_Count_TisColor_t2555686324_m3934967420_RuntimeMethod_var);
		int32_t L_37 = V_0;
		G_B9_0 = ((((int32_t)L_36) == ((int32_t)L_37))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B9_0 = 0;
	}

IL_00ad:
	{
		V_12 = (bool)G_B9_0;
		Vector3U5BU5D_t1718750761* L_38 = V_6;
		if (!L_38)
		{
			goto IL_00c2;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_39 = V_6;
		int32_t L_40 = Enumerable_Count_TisVector3_t3722313464_m353473236(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_39, /*hidden argument*/Enumerable_Count_TisVector3_t3722313464_m353473236_RuntimeMethod_var);
		int32_t L_41 = V_0;
		G_B12_0 = ((((int32_t)L_40) == ((int32_t)L_41))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B12_0 = 0;
	}

IL_00c3:
	{
		V_13 = (bool)G_B12_0;
		Vector4U5BU5D_t934056436* L_42 = V_7;
		if (!L_42)
		{
			goto IL_00d8;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_43 = V_7;
		int32_t L_44 = Enumerable_Count_TisVector4_t3319028937_m777756441(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_43, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m777756441_RuntimeMethod_var);
		int32_t L_45 = V_0;
		G_B15_0 = ((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0);
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B15_0 = 0;
	}

IL_00d9:
	{
		V_14 = (bool)G_B15_0;
		Vector2U5BU5D_t1457185986* L_46 = V_5;
		if (!L_46)
		{
			goto IL_00ee;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_47 = V_5;
		int32_t L_48 = Enumerable_Count_TisVector2_t2156229523_m4027559823(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_47, /*hidden argument*/Enumerable_Count_TisVector2_t2156229523_m4027559823_RuntimeMethod_var);
		int32_t L_49 = V_0;
		G_B18_0 = ((((int32_t)L_48) == ((int32_t)L_49))? 1 : 0);
		goto IL_00ef;
	}

IL_00ee:
	{
		G_B18_0 = 0;
	}

IL_00ef:
	{
		V_15 = (bool)G_B18_0;
		Vector2U5BU5D_t1457185986* L_50 = V_8;
		if (!L_50)
		{
			goto IL_0104;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_51 = V_8;
		int32_t L_52 = Enumerable_Count_TisVector2_t2156229523_m4027559823(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_51, /*hidden argument*/Enumerable_Count_TisVector2_t2156229523_m4027559823_RuntimeMethod_var);
		int32_t L_53 = V_0;
		G_B21_0 = ((((int32_t)L_52) == ((int32_t)L_53))? 1 : 0);
		goto IL_0105;
	}

IL_0104:
	{
		G_B21_0 = 0;
	}

IL_0105:
	{
		V_16 = (bool)G_B21_0;
		List_1_t496136383 * L_54 = V_9;
		if (!L_54)
		{
			goto IL_011a;
		}
	}
	{
		List_1_t496136383 * L_55 = V_9;
		int32_t L_56 = Enumerable_Count_TisVector4_t3319028937_m777756441(NULL /*static, unused*/, L_55, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m777756441_RuntimeMethod_var);
		int32_t L_57 = V_0;
		G_B24_0 = ((((int32_t)L_56) == ((int32_t)L_57))? 1 : 0);
		goto IL_011b;
	}

IL_011a:
	{
		G_B24_0 = 0;
	}

IL_011b:
	{
		V_17 = (bool)G_B24_0;
		List_1_t496136383 * L_58 = V_10;
		if (!L_58)
		{
			goto IL_0130;
		}
	}
	{
		List_1_t496136383 * L_59 = V_10;
		int32_t L_60 = Enumerable_Count_TisVector4_t3319028937_m777756441(NULL /*static, unused*/, L_59, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m777756441_RuntimeMethod_var);
		int32_t L_61 = V_0;
		G_B27_0 = ((((int32_t)L_60) == ((int32_t)L_61))? 1 : 0);
		goto IL_0131;
	}

IL_0130:
	{
		G_B27_0 = 0;
	}

IL_0131:
	{
		V_18 = (bool)G_B27_0;
		V_19 = 0;
		goto IL_02a9;
	}

IL_013b:
	{
		pb_VertexU5BU5D_t1897471543* L_62 = V_2;
		int32_t L_63 = V_19;
		pb_Vertex_t2424025474 * L_64 = (pb_Vertex_t2424025474 *)il2cpp_codegen_object_new(pb_Vertex_t2424025474_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m3495902961(L_64, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (pb_Vertex_t2424025474 *)L_64);
		RuntimeObject* L_65 = ___indices1;
		if (L_65)
		{
			goto IL_0153;
		}
	}
	{
		int32_t L_66 = V_19;
		G_B31_0 = L_66;
		goto IL_015b;
	}

IL_0153:
	{
		RuntimeObject* L_67 = ___indices1;
		int32_t L_68 = V_19;
		NullCheck(L_67);
		int32_t L_69 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_t471298240_il2cpp_TypeInfo_var, L_67, L_68);
		G_B31_0 = L_69;
	}

IL_015b:
	{
		V_20 = G_B31_0;
		bool L_70 = V_11;
		if (!L_70)
		{
			goto IL_0186;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_71 = V_2;
		int32_t L_72 = V_19;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		pb_Vertex_t2424025474 * L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		L_74->set_hasPosition_8((bool)1);
		pb_VertexU5BU5D_t1897471543* L_75 = V_2;
		int32_t L_76 = V_19;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		pb_Vertex_t2424025474 * L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Vector3U5BU5D_t1718750761* L_79 = V_3;
		int32_t L_80 = V_20;
		NullCheck(L_79);
		NullCheck(L_78);
		L_78->set_position_0((*(Vector3_t3722313464 *)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)))));
	}

IL_0186:
	{
		bool L_81 = V_12;
		if (!L_81)
		{
			goto IL_01b0;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_82 = V_2;
		int32_t L_83 = V_19;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		pb_Vertex_t2424025474 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		L_85->set_hasColor_9((bool)1);
		pb_VertexU5BU5D_t1897471543* L_86 = V_2;
		int32_t L_87 = V_19;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		pb_Vertex_t2424025474 * L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ColorU5BU5D_t941916413* L_90 = V_4;
		int32_t L_91 = V_20;
		NullCheck(L_90);
		NullCheck(L_89);
		L_89->set_color_1((*(Color_t2555686324 *)((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)))));
	}

IL_01b0:
	{
		bool L_92 = V_13;
		if (!L_92)
		{
			goto IL_01da;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_93 = V_2;
		int32_t L_94 = V_19;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		pb_Vertex_t2424025474 * L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_96);
		L_96->set_hasNormal_10((bool)1);
		pb_VertexU5BU5D_t1897471543* L_97 = V_2;
		int32_t L_98 = V_19;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		pb_Vertex_t2424025474 * L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		Vector3U5BU5D_t1718750761* L_101 = V_6;
		int32_t L_102 = V_20;
		NullCheck(L_101);
		NullCheck(L_100);
		L_100->set_normal_2((*(Vector3_t3722313464 *)((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102)))));
	}

IL_01da:
	{
		bool L_103 = V_14;
		if (!L_103)
		{
			goto IL_0204;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_104 = V_2;
		int32_t L_105 = V_19;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		pb_Vertex_t2424025474 * L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		L_107->set_hasTangent_11((bool)1);
		pb_VertexU5BU5D_t1897471543* L_108 = V_2;
		int32_t L_109 = V_19;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		pb_Vertex_t2424025474 * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector4U5BU5D_t934056436* L_112 = V_7;
		int32_t L_113 = V_20;
		NullCheck(L_112);
		NullCheck(L_111);
		L_111->set_tangent_3((*(Vector4_t3319028937 *)((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_113)))));
	}

IL_0204:
	{
		bool L_114 = V_15;
		if (!L_114)
		{
			goto IL_022e;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_115 = V_2;
		int32_t L_116 = V_19;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		pb_Vertex_t2424025474 * L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		L_118->set_hasUv0_12((bool)1);
		pb_VertexU5BU5D_t1897471543* L_119 = V_2;
		int32_t L_120 = V_19;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		pb_Vertex_t2424025474 * L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Vector2U5BU5D_t1457185986* L_123 = V_5;
		int32_t L_124 = V_20;
		NullCheck(L_123);
		NullCheck(L_122);
		L_122->set_uv0_4((*(Vector2_t2156229523 *)((L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_124)))));
	}

IL_022e:
	{
		bool L_125 = V_16;
		if (!L_125)
		{
			goto IL_0258;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_126 = V_2;
		int32_t L_127 = V_19;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		pb_Vertex_t2424025474 * L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		L_129->set_hasUv2_13((bool)1);
		pb_VertexU5BU5D_t1897471543* L_130 = V_2;
		int32_t L_131 = V_19;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		pb_Vertex_t2424025474 * L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		Vector2U5BU5D_t1457185986* L_134 = V_8;
		int32_t L_135 = V_20;
		NullCheck(L_134);
		NullCheck(L_133);
		L_133->set_uv2_5((*(Vector2_t2156229523 *)((L_134)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_135)))));
	}

IL_0258:
	{
		bool L_136 = V_17;
		if (!L_136)
		{
			goto IL_027d;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_137 = V_2;
		int32_t L_138 = V_19;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		pb_Vertex_t2424025474 * L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_140);
		L_140->set_hasUv3_14((bool)1);
		pb_VertexU5BU5D_t1897471543* L_141 = V_2;
		int32_t L_142 = V_19;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		pb_Vertex_t2424025474 * L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		List_1_t496136383 * L_145 = V_9;
		int32_t L_146 = V_20;
		NullCheck(L_145);
		Vector4_t3319028937  L_147 = List_1_get_Item_m783205072(L_145, L_146, /*hidden argument*/List_1_get_Item_m783205072_RuntimeMethod_var);
		NullCheck(L_144);
		L_144->set_uv3_6(L_147);
	}

IL_027d:
	{
		bool L_148 = V_18;
		if (!L_148)
		{
			goto IL_02a2;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_149 = V_2;
		int32_t L_150 = V_19;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		pb_Vertex_t2424025474 * L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_152);
		L_152->set_hasUv4_15((bool)1);
		pb_VertexU5BU5D_t1897471543* L_153 = V_2;
		int32_t L_154 = V_19;
		NullCheck(L_153);
		int32_t L_155 = L_154;
		pb_Vertex_t2424025474 * L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		List_1_t496136383 * L_157 = V_10;
		int32_t L_158 = V_20;
		NullCheck(L_157);
		Vector4_t3319028937  L_159 = List_1_get_Item_m783205072(L_157, L_158, /*hidden argument*/List_1_get_Item_m783205072_RuntimeMethod_var);
		NullCheck(L_156);
		L_156->set_uv4_7(L_159);
	}

IL_02a2:
	{
		int32_t L_160 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)1));
	}

IL_02a9:
	{
		int32_t L_161 = V_19;
		int32_t L_162 = V_1;
		if ((((int32_t)L_161) < ((int32_t)L_162)))
		{
			goto IL_013b;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_163 = V_2;
		V_21 = L_163;
		goto IL_02b9;
	}

IL_02b9:
	{
		pb_VertexU5BU5D_t1897471543* L_164 = V_21;
		return L_164;
	}
}
// ProBuilder.Core.pb_Vertex[] ProBuilder.Core.pb_Vertex::GetVertices(UnityEngine.Mesh)
extern "C"  pb_VertexU5BU5D_t1897471543* pb_Vertex_GetVertices_m3718501708 (RuntimeObject * __this /* static, unused */, Mesh_t3648964284 * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_GetVertices_m3718501708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_VertexU5BU5D_t1897471543* V_0 = NULL;
	int32_t V_1 = 0;
	pb_VertexU5BU5D_t1897471543* V_2 = NULL;
	Vector3U5BU5D_t1718750761* V_3 = NULL;
	ColorU5BU5D_t941916413* V_4 = NULL;
	Vector3U5BU5D_t1718750761* V_5 = NULL;
	Vector4U5BU5D_t934056436* V_6 = NULL;
	Vector2U5BU5D_t1457185986* V_7 = NULL;
	Vector2U5BU5D_t1457185986* V_8 = NULL;
	List_1_t496136383 * V_9 = NULL;
	List_1_t496136383 * V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Mesh_t3648964284 * L_0 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (pb_VertexU5BU5D_t1897471543*)NULL;
		goto IL_028d;
	}

IL_0014:
	{
		Mesh_t3648964284 * L_2 = ___m0;
		NullCheck(L_2);
		int32_t L_3 = Mesh_get_vertexCount_m884140614(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		pb_VertexU5BU5D_t1897471543* L_5 = (pb_VertexU5BU5D_t1897471543*)SZArrayNew(pb_VertexU5BU5D_t1897471543_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		Mesh_t3648964284 * L_6 = ___m0;
		NullCheck(L_6);
		Vector3U5BU5D_t1718750761* L_7 = Mesh_get_vertices_m3585684815(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		Mesh_t3648964284 * L_8 = ___m0;
		NullCheck(L_8);
		ColorU5BU5D_t941916413* L_9 = Mesh_get_colors_m1375263373(L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		Mesh_t3648964284 * L_10 = ___m0;
		NullCheck(L_10);
		Vector3U5BU5D_t1718750761* L_11 = Mesh_get_normals_m4099615978(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Mesh_t3648964284 * L_12 = ___m0;
		NullCheck(L_12);
		Vector4U5BU5D_t934056436* L_13 = Mesh_get_tangents_m3279676290(L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		Mesh_t3648964284 * L_14 = ___m0;
		NullCheck(L_14);
		Vector2U5BU5D_t1457185986* L_15 = Mesh_get_uv_m4017248(L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		Mesh_t3648964284 * L_16 = ___m0;
		NullCheck(L_16);
		Vector2U5BU5D_t1457185986* L_17 = Mesh_get_uv2_m3615020997(L_16, /*hidden argument*/NULL);
		V_8 = L_17;
		List_1_t496136383 * L_18 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m3980905937(L_18, /*hidden argument*/List_1__ctor_m3980905937_RuntimeMethod_var);
		V_9 = L_18;
		List_1_t496136383 * L_19 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m3980905937(L_19, /*hidden argument*/List_1__ctor_m3980905937_RuntimeMethod_var);
		V_10 = L_19;
		Mesh_t3648964284 * L_20 = ___m0;
		List_1_t496136383 * L_21 = V_9;
		NullCheck(L_20);
		Mesh_GetUVs_m55185155(L_20, 2, L_21, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_22 = ___m0;
		List_1_t496136383 * L_23 = V_10;
		NullCheck(L_22);
		Mesh_GetUVs_m55185155(L_22, 3, L_23, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_24 = V_3;
		if (!L_24)
		{
			goto IL_0082;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_25 = V_3;
		int32_t L_26 = Enumerable_Count_TisVector3_t3722313464_m353473236(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_25, /*hidden argument*/Enumerable_Count_TisVector3_t3722313464_m353473236_RuntimeMethod_var);
		int32_t L_27 = V_1;
		G_B5_0 = ((((int32_t)L_26) == ((int32_t)L_27))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B5_0 = 0;
	}

IL_0083:
	{
		V_11 = (bool)G_B5_0;
		ColorU5BU5D_t941916413* L_28 = V_4;
		if (!L_28)
		{
			goto IL_0098;
		}
	}
	{
		ColorU5BU5D_t941916413* L_29 = V_4;
		int32_t L_30 = Enumerable_Count_TisColor_t2555686324_m3934967420(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_29, /*hidden argument*/Enumerable_Count_TisColor_t2555686324_m3934967420_RuntimeMethod_var);
		int32_t L_31 = V_1;
		G_B8_0 = ((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0);
		goto IL_0099;
	}

IL_0098:
	{
		G_B8_0 = 0;
	}

IL_0099:
	{
		V_12 = (bool)G_B8_0;
		Vector3U5BU5D_t1718750761* L_32 = V_5;
		if (!L_32)
		{
			goto IL_00ae;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_33 = V_5;
		int32_t L_34 = Enumerable_Count_TisVector3_t3722313464_m353473236(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_33, /*hidden argument*/Enumerable_Count_TisVector3_t3722313464_m353473236_RuntimeMethod_var);
		int32_t L_35 = V_1;
		G_B11_0 = ((((int32_t)L_34) == ((int32_t)L_35))? 1 : 0);
		goto IL_00af;
	}

IL_00ae:
	{
		G_B11_0 = 0;
	}

IL_00af:
	{
		V_13 = (bool)G_B11_0;
		Vector4U5BU5D_t934056436* L_36 = V_6;
		if (!L_36)
		{
			goto IL_00c4;
		}
	}
	{
		Vector4U5BU5D_t934056436* L_37 = V_6;
		int32_t L_38 = Enumerable_Count_TisVector4_t3319028937_m777756441(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_37, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m777756441_RuntimeMethod_var);
		int32_t L_39 = V_1;
		G_B14_0 = ((((int32_t)L_38) == ((int32_t)L_39))? 1 : 0);
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B14_0 = 0;
	}

IL_00c5:
	{
		V_14 = (bool)G_B14_0;
		Vector2U5BU5D_t1457185986* L_40 = V_7;
		if (!L_40)
		{
			goto IL_00da;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_41 = V_7;
		int32_t L_42 = Enumerable_Count_TisVector2_t2156229523_m4027559823(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_41, /*hidden argument*/Enumerable_Count_TisVector2_t2156229523_m4027559823_RuntimeMethod_var);
		int32_t L_43 = V_1;
		G_B17_0 = ((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		goto IL_00db;
	}

IL_00da:
	{
		G_B17_0 = 0;
	}

IL_00db:
	{
		V_15 = (bool)G_B17_0;
		Vector2U5BU5D_t1457185986* L_44 = V_8;
		if (!L_44)
		{
			goto IL_00f0;
		}
	}
	{
		Vector2U5BU5D_t1457185986* L_45 = V_8;
		int32_t L_46 = Enumerable_Count_TisVector2_t2156229523_m4027559823(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_45, /*hidden argument*/Enumerable_Count_TisVector2_t2156229523_m4027559823_RuntimeMethod_var);
		int32_t L_47 = V_1;
		G_B20_0 = ((((int32_t)L_46) == ((int32_t)L_47))? 1 : 0);
		goto IL_00f1;
	}

IL_00f0:
	{
		G_B20_0 = 0;
	}

IL_00f1:
	{
		V_16 = (bool)G_B20_0;
		List_1_t496136383 * L_48 = V_9;
		if (!L_48)
		{
			goto IL_0106;
		}
	}
	{
		List_1_t496136383 * L_49 = V_9;
		int32_t L_50 = Enumerable_Count_TisVector4_t3319028937_m777756441(NULL /*static, unused*/, L_49, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m777756441_RuntimeMethod_var);
		int32_t L_51 = V_1;
		G_B23_0 = ((((int32_t)L_50) == ((int32_t)L_51))? 1 : 0);
		goto IL_0107;
	}

IL_0106:
	{
		G_B23_0 = 0;
	}

IL_0107:
	{
		V_17 = (bool)G_B23_0;
		List_1_t496136383 * L_52 = V_10;
		if (!L_52)
		{
			goto IL_011c;
		}
	}
	{
		List_1_t496136383 * L_53 = V_10;
		int32_t L_54 = Enumerable_Count_TisVector4_t3319028937_m777756441(NULL /*static, unused*/, L_53, /*hidden argument*/Enumerable_Count_TisVector4_t3319028937_m777756441_RuntimeMethod_var);
		int32_t L_55 = V_1;
		G_B26_0 = ((((int32_t)L_54) == ((int32_t)L_55))? 1 : 0);
		goto IL_011d;
	}

IL_011c:
	{
		G_B26_0 = 0;
	}

IL_011d:
	{
		V_18 = (bool)G_B26_0;
		V_19 = 0;
		goto IL_027e;
	}

IL_0127:
	{
		pb_VertexU5BU5D_t1897471543* L_56 = V_2;
		int32_t L_57 = V_19;
		pb_Vertex_t2424025474 * L_58 = (pb_Vertex_t2424025474 *)il2cpp_codegen_object_new(pb_Vertex_t2424025474_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m3495902961(L_58, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_58);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (pb_Vertex_t2424025474 *)L_58);
		bool L_59 = V_11;
		if (!L_59)
		{
			goto IL_015b;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_60 = V_2;
		int32_t L_61 = V_19;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		pb_Vertex_t2424025474 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		L_63->set_hasPosition_8((bool)1);
		pb_VertexU5BU5D_t1897471543* L_64 = V_2;
		int32_t L_65 = V_19;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		pb_Vertex_t2424025474 * L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Vector3U5BU5D_t1718750761* L_68 = V_3;
		int32_t L_69 = V_19;
		NullCheck(L_68);
		NullCheck(L_67);
		L_67->set_position_0((*(Vector3_t3722313464 *)((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))));
	}

IL_015b:
	{
		bool L_70 = V_12;
		if (!L_70)
		{
			goto IL_0185;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_71 = V_2;
		int32_t L_72 = V_19;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		pb_Vertex_t2424025474 * L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		L_74->set_hasColor_9((bool)1);
		pb_VertexU5BU5D_t1897471543* L_75 = V_2;
		int32_t L_76 = V_19;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		pb_Vertex_t2424025474 * L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ColorU5BU5D_t941916413* L_79 = V_4;
		int32_t L_80 = V_19;
		NullCheck(L_79);
		NullCheck(L_78);
		L_78->set_color_1((*(Color_t2555686324 *)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)))));
	}

IL_0185:
	{
		bool L_81 = V_13;
		if (!L_81)
		{
			goto IL_01af;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_82 = V_2;
		int32_t L_83 = V_19;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		pb_Vertex_t2424025474 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		L_85->set_hasNormal_10((bool)1);
		pb_VertexU5BU5D_t1897471543* L_86 = V_2;
		int32_t L_87 = V_19;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		pb_Vertex_t2424025474 * L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Vector3U5BU5D_t1718750761* L_90 = V_5;
		int32_t L_91 = V_19;
		NullCheck(L_90);
		NullCheck(L_89);
		L_89->set_normal_2((*(Vector3_t3722313464 *)((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)))));
	}

IL_01af:
	{
		bool L_92 = V_14;
		if (!L_92)
		{
			goto IL_01d9;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_93 = V_2;
		int32_t L_94 = V_19;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		pb_Vertex_t2424025474 * L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_96);
		L_96->set_hasTangent_11((bool)1);
		pb_VertexU5BU5D_t1897471543* L_97 = V_2;
		int32_t L_98 = V_19;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		pb_Vertex_t2424025474 * L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		Vector4U5BU5D_t934056436* L_101 = V_6;
		int32_t L_102 = V_19;
		NullCheck(L_101);
		NullCheck(L_100);
		L_100->set_tangent_3((*(Vector4_t3319028937 *)((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102)))));
	}

IL_01d9:
	{
		bool L_103 = V_15;
		if (!L_103)
		{
			goto IL_0203;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_104 = V_2;
		int32_t L_105 = V_19;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		pb_Vertex_t2424025474 * L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		L_107->set_hasUv0_12((bool)1);
		pb_VertexU5BU5D_t1897471543* L_108 = V_2;
		int32_t L_109 = V_19;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		pb_Vertex_t2424025474 * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Vector2U5BU5D_t1457185986* L_112 = V_7;
		int32_t L_113 = V_19;
		NullCheck(L_112);
		NullCheck(L_111);
		L_111->set_uv0_4((*(Vector2_t2156229523 *)((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_113)))));
	}

IL_0203:
	{
		bool L_114 = V_16;
		if (!L_114)
		{
			goto IL_022d;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_115 = V_2;
		int32_t L_116 = V_19;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		pb_Vertex_t2424025474 * L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		L_118->set_hasUv2_13((bool)1);
		pb_VertexU5BU5D_t1897471543* L_119 = V_2;
		int32_t L_120 = V_19;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		pb_Vertex_t2424025474 * L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Vector2U5BU5D_t1457185986* L_123 = V_8;
		int32_t L_124 = V_19;
		NullCheck(L_123);
		NullCheck(L_122);
		L_122->set_uv2_5((*(Vector2_t2156229523 *)((L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_124)))));
	}

IL_022d:
	{
		bool L_125 = V_17;
		if (!L_125)
		{
			goto IL_0252;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_126 = V_2;
		int32_t L_127 = V_19;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		pb_Vertex_t2424025474 * L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		L_129->set_hasUv3_14((bool)1);
		pb_VertexU5BU5D_t1897471543* L_130 = V_2;
		int32_t L_131 = V_19;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		pb_Vertex_t2424025474 * L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		List_1_t496136383 * L_134 = V_9;
		int32_t L_135 = V_19;
		NullCheck(L_134);
		Vector4_t3319028937  L_136 = List_1_get_Item_m783205072(L_134, L_135, /*hidden argument*/List_1_get_Item_m783205072_RuntimeMethod_var);
		NullCheck(L_133);
		L_133->set_uv3_6(L_136);
	}

IL_0252:
	{
		bool L_137 = V_18;
		if (!L_137)
		{
			goto IL_0277;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_138 = V_2;
		int32_t L_139 = V_19;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		pb_Vertex_t2424025474 * L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_141);
		L_141->set_hasUv4_15((bool)1);
		pb_VertexU5BU5D_t1897471543* L_142 = V_2;
		int32_t L_143 = V_19;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		pb_Vertex_t2424025474 * L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		List_1_t496136383 * L_146 = V_10;
		int32_t L_147 = V_19;
		NullCheck(L_146);
		Vector4_t3319028937  L_148 = List_1_get_Item_m783205072(L_146, L_147, /*hidden argument*/List_1_get_Item_m783205072_RuntimeMethod_var);
		NullCheck(L_145);
		L_145->set_uv4_7(L_148);
	}

IL_0277:
	{
		int32_t L_149 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1));
	}

IL_027e:
	{
		int32_t L_150 = V_19;
		int32_t L_151 = V_1;
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_0127;
		}
	}
	{
		pb_VertexU5BU5D_t1897471543* L_152 = V_2;
		V_0 = L_152;
		goto IL_028d;
	}

IL_028d:
	{
		pb_VertexU5BU5D_t1897471543* L_153 = V_0;
		return L_153;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&)
extern "C"  void pb_Vertex_GetArrays_m2606191251 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, Vector3U5BU5D_t1718750761** ___position1, ColorU5BU5D_t941916413** ___color2, Vector2U5BU5D_t1457185986** ___uv03, Vector3U5BU5D_t1718750761** ___normal4, Vector4U5BU5D_t934056436** ___tangent5, Vector2U5BU5D_t1457185986** ___uv26, List_1_t496136383 ** ___uv37, List_1_t496136383 ** ___uv48, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___vertices0;
		Vector3U5BU5D_t1718750761** L_1 = ___position1;
		ColorU5BU5D_t941916413** L_2 = ___color2;
		Vector2U5BU5D_t1457185986** L_3 = ___uv03;
		Vector3U5BU5D_t1718750761** L_4 = ___normal4;
		Vector4U5BU5D_t934056436** L_5 = ___tangent5;
		Vector2U5BU5D_t1457185986** L_6 = ___uv26;
		List_1_t496136383 ** L_7 = ___uv37;
		List_1_t496136383 ** L_8 = ___uv48;
		pb_Vertex_GetArrays_m4132877272(NULL /*static, unused*/, L_0, (Vector3U5BU5D_t1718750761**)L_1, (ColorU5BU5D_t941916413**)L_2, (Vector2U5BU5D_t1457185986**)L_3, (Vector3U5BU5D_t1718750761**)L_4, (Vector4U5BU5D_t934056436**)L_5, (Vector2U5BU5D_t1457185986**)L_6, (List_1_t496136383 **)L_7, (List_1_t496136383 **)L_8, ((int32_t)255), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,ProBuilder.Core.AttributeType)
extern "C"  void pb_Vertex_GetArrays_m4132877272 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, Vector3U5BU5D_t1718750761** ___position1, ColorU5BU5D_t941916413** ___color2, Vector2U5BU5D_t1457185986** ___uv03, Vector3U5BU5D_t1718750761** ___normal4, Vector4U5BU5D_t934056436** ___tangent5, Vector2U5BU5D_t1457185986** ___uv26, List_1_t496136383 ** ___uv37, List_1_t496136383 ** ___uv48, uint16_t ___attributes9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_GetArrays_m4132877272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Vector3U5BU5D_t1718750761** G_B2_0 = NULL;
	Vector3U5BU5D_t1718750761** G_B1_0 = NULL;
	Vector3U5BU5D_t1718750761* G_B3_0 = NULL;
	Vector3U5BU5D_t1718750761** G_B3_1 = NULL;
	ColorU5BU5D_t941916413** G_B5_0 = NULL;
	ColorU5BU5D_t941916413** G_B4_0 = NULL;
	ColorU5BU5D_t941916413* G_B6_0 = NULL;
	ColorU5BU5D_t941916413** G_B6_1 = NULL;
	Vector2U5BU5D_t1457185986** G_B8_0 = NULL;
	Vector2U5BU5D_t1457185986** G_B7_0 = NULL;
	Vector2U5BU5D_t1457185986* G_B9_0 = NULL;
	Vector2U5BU5D_t1457185986** G_B9_1 = NULL;
	Vector3U5BU5D_t1718750761** G_B11_0 = NULL;
	Vector3U5BU5D_t1718750761** G_B10_0 = NULL;
	Vector3U5BU5D_t1718750761* G_B12_0 = NULL;
	Vector3U5BU5D_t1718750761** G_B12_1 = NULL;
	Vector4U5BU5D_t934056436** G_B14_0 = NULL;
	Vector4U5BU5D_t934056436** G_B13_0 = NULL;
	Vector4U5BU5D_t934056436* G_B15_0 = NULL;
	Vector4U5BU5D_t934056436** G_B15_1 = NULL;
	Vector2U5BU5D_t1457185986** G_B17_0 = NULL;
	Vector2U5BU5D_t1457185986** G_B16_0 = NULL;
	Vector2U5BU5D_t1457185986* G_B18_0 = NULL;
	Vector2U5BU5D_t1457185986** G_B18_1 = NULL;
	List_1_t496136383 ** G_B20_0 = NULL;
	List_1_t496136383 ** G_B19_0 = NULL;
	List_1_t496136383 * G_B21_0 = NULL;
	List_1_t496136383 ** G_B21_1 = NULL;
	List_1_t496136383 ** G_B23_0 = NULL;
	List_1_t496136383 ** G_B22_0 = NULL;
	List_1_t496136383 * G_B24_0 = NULL;
	List_1_t496136383 ** G_B24_1 = NULL;
	{
		RuntimeObject* L_0 = ___vertices0;
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProBuilder.Core.pb_Vertex>::get_Count() */, ICollection_1_t957210412_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		uint16_t L_2 = ___attributes9;
		V_1 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)1)))))) == ((int32_t)1))? 1 : 0);
		uint16_t L_3 = ___attributes9;
		V_2 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)32))))))) == ((int32_t)((int32_t)32)))? 1 : 0);
		uint16_t L_4 = ___attributes9;
		V_3 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_4&(int32_t)2)))))) == ((int32_t)2))? 1 : 0);
		uint16_t L_5 = ___attributes9;
		V_4 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)64))))))) == ((int32_t)((int32_t)64)))? 1 : 0);
		uint16_t L_6 = ___attributes9;
		V_5 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)128))))))) == ((int32_t)((int32_t)128)))? 1 : 0);
		uint16_t L_7 = ___attributes9;
		V_6 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_7&(int32_t)4)))))) == ((int32_t)4))? 1 : 0);
		uint16_t L_8 = ___attributes9;
		V_7 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_8&(int32_t)8)))))) == ((int32_t)8))? 1 : 0);
		uint16_t L_9 = ___attributes9;
		V_8 = (bool)((((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)16))))))) == ((int32_t)((int32_t)16)))? 1 : 0);
		Vector3U5BU5D_t1718750761** L_10 = ___position1;
		bool L_11 = V_1;
		G_B1_0 = L_10;
		if (!L_11)
		{
			G_B2_0 = L_10;
			goto IL_0075;
		}
	}
	{
		int32_t L_12 = V_0;
		Vector3U5BU5D_t1718750761* L_13 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_12);
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		goto IL_0076;
	}

IL_0075:
	{
		G_B3_0 = ((Vector3U5BU5D_t1718750761*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0076:
	{
		*((RuntimeObject **)(G_B3_1)) = (RuntimeObject *)G_B3_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B3_1), (RuntimeObject *)G_B3_0);
		ColorU5BU5D_t941916413** L_14 = ___color2;
		bool L_15 = V_2;
		G_B4_0 = L_14;
		if (!L_15)
		{
			G_B5_0 = L_14;
			goto IL_0089;
		}
	}
	{
		int32_t L_16 = V_0;
		ColorU5BU5D_t941916413* L_17 = (ColorU5BU5D_t941916413*)SZArrayNew(ColorU5BU5D_t941916413_il2cpp_TypeInfo_var, (uint32_t)L_16);
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		goto IL_008a;
	}

IL_0089:
	{
		G_B6_0 = ((ColorU5BU5D_t941916413*)(NULL));
		G_B6_1 = G_B5_0;
	}

IL_008a:
	{
		*((RuntimeObject **)(G_B6_1)) = (RuntimeObject *)G_B6_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B6_1), (RuntimeObject *)G_B6_0);
		Vector2U5BU5D_t1457185986** L_18 = ___uv03;
		bool L_19 = V_3;
		G_B7_0 = L_18;
		if (!L_19)
		{
			G_B8_0 = L_18;
			goto IL_009d;
		}
	}
	{
		int32_t L_20 = V_0;
		Vector2U5BU5D_t1457185986* L_21 = (Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_20);
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B9_0 = ((Vector2U5BU5D_t1457185986*)(NULL));
		G_B9_1 = G_B8_0;
	}

IL_009e:
	{
		*((RuntimeObject **)(G_B9_1)) = (RuntimeObject *)G_B9_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B9_1), (RuntimeObject *)G_B9_0);
		Vector3U5BU5D_t1718750761** L_22 = ___normal4;
		bool L_23 = V_4;
		G_B10_0 = L_22;
		if (!L_23)
		{
			G_B11_0 = L_22;
			goto IL_00b3;
		}
	}
	{
		int32_t L_24 = V_0;
		Vector3U5BU5D_t1718750761* L_25 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_24);
		G_B12_0 = L_25;
		G_B12_1 = G_B10_0;
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B12_0 = ((Vector3U5BU5D_t1718750761*)(NULL));
		G_B12_1 = G_B11_0;
	}

IL_00b4:
	{
		*((RuntimeObject **)(G_B12_1)) = (RuntimeObject *)G_B12_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B12_1), (RuntimeObject *)G_B12_0);
		Vector4U5BU5D_t934056436** L_26 = ___tangent5;
		bool L_27 = V_5;
		G_B13_0 = L_26;
		if (!L_27)
		{
			G_B14_0 = L_26;
			goto IL_00c9;
		}
	}
	{
		int32_t L_28 = V_0;
		Vector4U5BU5D_t934056436* L_29 = (Vector4U5BU5D_t934056436*)SZArrayNew(Vector4U5BU5D_t934056436_il2cpp_TypeInfo_var, (uint32_t)L_28);
		G_B15_0 = L_29;
		G_B15_1 = G_B13_0;
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B15_0 = ((Vector4U5BU5D_t934056436*)(NULL));
		G_B15_1 = G_B14_0;
	}

IL_00ca:
	{
		*((RuntimeObject **)(G_B15_1)) = (RuntimeObject *)G_B15_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B15_1), (RuntimeObject *)G_B15_0);
		Vector2U5BU5D_t1457185986** L_30 = ___uv26;
		bool L_31 = V_6;
		G_B16_0 = L_30;
		if (!L_31)
		{
			G_B17_0 = L_30;
			goto IL_00df;
		}
	}
	{
		int32_t L_32 = V_0;
		Vector2U5BU5D_t1457185986* L_33 = (Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)L_32);
		G_B18_0 = L_33;
		G_B18_1 = G_B16_0;
		goto IL_00e0;
	}

IL_00df:
	{
		G_B18_0 = ((Vector2U5BU5D_t1457185986*)(NULL));
		G_B18_1 = G_B17_0;
	}

IL_00e0:
	{
		*((RuntimeObject **)(G_B18_1)) = (RuntimeObject *)G_B18_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B18_1), (RuntimeObject *)G_B18_0);
		List_1_t496136383 ** L_34 = ___uv37;
		bool L_35 = V_7;
		G_B19_0 = L_34;
		if (!L_35)
		{
			G_B20_0 = L_34;
			goto IL_00f5;
		}
	}
	{
		int32_t L_36 = V_0;
		List_1_t496136383 * L_37 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m2075911971(L_37, L_36, /*hidden argument*/List_1__ctor_m2075911971_RuntimeMethod_var);
		G_B21_0 = L_37;
		G_B21_1 = G_B19_0;
		goto IL_00f6;
	}

IL_00f5:
	{
		G_B21_0 = ((List_1_t496136383 *)(NULL));
		G_B21_1 = G_B20_0;
	}

IL_00f6:
	{
		*((RuntimeObject **)(G_B21_1)) = (RuntimeObject *)G_B21_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B21_1), (RuntimeObject *)G_B21_0);
		List_1_t496136383 ** L_38 = ___uv48;
		bool L_39 = V_8;
		G_B22_0 = L_38;
		if (!L_39)
		{
			G_B23_0 = L_38;
			goto IL_010b;
		}
	}
	{
		int32_t L_40 = V_0;
		List_1_t496136383 * L_41 = (List_1_t496136383 *)il2cpp_codegen_object_new(List_1_t496136383_il2cpp_TypeInfo_var);
		List_1__ctor_m2075911971(L_41, L_40, /*hidden argument*/List_1__ctor_m2075911971_RuntimeMethod_var);
		G_B24_0 = L_41;
		G_B24_1 = G_B22_0;
		goto IL_010c;
	}

IL_010b:
	{
		G_B24_0 = ((List_1_t496136383 *)(NULL));
		G_B24_1 = G_B23_0;
	}

IL_010c:
	{
		*((RuntimeObject **)(G_B24_1)) = (RuntimeObject *)G_B24_0;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(G_B24_1), (RuntimeObject *)G_B24_0);
		V_9 = 0;
		goto IL_0221;
	}

IL_0115:
	{
		bool L_42 = V_1;
		if (!L_42)
		{
			goto IL_0137;
		}
	}
	{
		Vector3U5BU5D_t1718750761** L_43 = ___position1;
		Vector3U5BU5D_t1718750761* L_44 = *((Vector3U5BU5D_t1718750761**)L_43);
		int32_t L_45 = V_9;
		NullCheck(L_44);
		RuntimeObject* L_46 = ___vertices0;
		int32_t L_47 = V_9;
		NullCheck(L_46);
		pb_Vertex_t2424025474 * L_48 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_46, L_47);
		NullCheck(L_48);
		Vector3_t3722313464  L_49 = L_48->get_position_0();
		*(Vector3_t3722313464 *)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))) = L_49;
	}

IL_0137:
	{
		bool L_50 = V_2;
		if (!L_50)
		{
			goto IL_0158;
		}
	}
	{
		ColorU5BU5D_t941916413** L_51 = ___color2;
		ColorU5BU5D_t941916413* L_52 = *((ColorU5BU5D_t941916413**)L_51);
		int32_t L_53 = V_9;
		NullCheck(L_52);
		RuntimeObject* L_54 = ___vertices0;
		int32_t L_55 = V_9;
		NullCheck(L_54);
		pb_Vertex_t2424025474 * L_56 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_54, L_55);
		NullCheck(L_56);
		Color_t2555686324  L_57 = L_56->get_color_1();
		*(Color_t2555686324 *)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53))) = L_57;
	}

IL_0158:
	{
		bool L_58 = V_3;
		if (!L_58)
		{
			goto IL_0179;
		}
	}
	{
		Vector2U5BU5D_t1457185986** L_59 = ___uv03;
		Vector2U5BU5D_t1457185986* L_60 = *((Vector2U5BU5D_t1457185986**)L_59);
		int32_t L_61 = V_9;
		NullCheck(L_60);
		RuntimeObject* L_62 = ___vertices0;
		int32_t L_63 = V_9;
		NullCheck(L_62);
		pb_Vertex_t2424025474 * L_64 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_62, L_63);
		NullCheck(L_64);
		Vector2_t2156229523  L_65 = L_64->get_uv0_4();
		*(Vector2_t2156229523 *)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61))) = L_65;
	}

IL_0179:
	{
		bool L_66 = V_4;
		if (!L_66)
		{
			goto IL_019c;
		}
	}
	{
		Vector3U5BU5D_t1718750761** L_67 = ___normal4;
		Vector3U5BU5D_t1718750761* L_68 = *((Vector3U5BU5D_t1718750761**)L_67);
		int32_t L_69 = V_9;
		NullCheck(L_68);
		RuntimeObject* L_70 = ___vertices0;
		int32_t L_71 = V_9;
		NullCheck(L_70);
		pb_Vertex_t2424025474 * L_72 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_70, L_71);
		NullCheck(L_72);
		Vector3_t3722313464  L_73 = L_72->get_normal_2();
		*(Vector3_t3722313464 *)((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))) = L_73;
	}

IL_019c:
	{
		bool L_74 = V_5;
		if (!L_74)
		{
			goto IL_01bf;
		}
	}
	{
		Vector4U5BU5D_t934056436** L_75 = ___tangent5;
		Vector4U5BU5D_t934056436* L_76 = *((Vector4U5BU5D_t934056436**)L_75);
		int32_t L_77 = V_9;
		NullCheck(L_76);
		RuntimeObject* L_78 = ___vertices0;
		int32_t L_79 = V_9;
		NullCheck(L_78);
		pb_Vertex_t2424025474 * L_80 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_78, L_79);
		NullCheck(L_80);
		Vector4_t3319028937  L_81 = L_80->get_tangent_3();
		*(Vector4_t3319028937 *)((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77))) = L_81;
	}

IL_01bf:
	{
		bool L_82 = V_6;
		if (!L_82)
		{
			goto IL_01e2;
		}
	}
	{
		Vector2U5BU5D_t1457185986** L_83 = ___uv26;
		Vector2U5BU5D_t1457185986* L_84 = *((Vector2U5BU5D_t1457185986**)L_83);
		int32_t L_85 = V_9;
		NullCheck(L_84);
		RuntimeObject* L_86 = ___vertices0;
		int32_t L_87 = V_9;
		NullCheck(L_86);
		pb_Vertex_t2424025474 * L_88 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_86, L_87);
		NullCheck(L_88);
		Vector2_t2156229523  L_89 = L_88->get_uv2_5();
		*(Vector2_t2156229523 *)((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85))) = L_89;
	}

IL_01e2:
	{
		bool L_90 = V_7;
		if (!L_90)
		{
			goto IL_01fe;
		}
	}
	{
		List_1_t496136383 ** L_91 = ___uv37;
		List_1_t496136383 * L_92 = *((List_1_t496136383 **)L_91);
		RuntimeObject* L_93 = ___vertices0;
		int32_t L_94 = V_9;
		NullCheck(L_93);
		pb_Vertex_t2424025474 * L_95 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_93, L_94);
		NullCheck(L_95);
		Vector4_t3319028937  L_96 = L_95->get_uv3_6();
		NullCheck(L_92);
		List_1_Add_m2996644200(L_92, L_96, /*hidden argument*/List_1_Add_m2996644200_RuntimeMethod_var);
	}

IL_01fe:
	{
		bool L_97 = V_8;
		if (!L_97)
		{
			goto IL_021a;
		}
	}
	{
		List_1_t496136383 ** L_98 = ___uv48;
		List_1_t496136383 * L_99 = *((List_1_t496136383 **)L_98);
		RuntimeObject* L_100 = ___vertices0;
		int32_t L_101 = V_9;
		NullCheck(L_100);
		pb_Vertex_t2424025474 * L_102 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_100, L_101);
		NullCheck(L_102);
		Vector4_t3319028937  L_103 = L_102->get_uv4_7();
		NullCheck(L_99);
		List_1_Add_m2996644200(L_99, L_103, /*hidden argument*/List_1_Add_m2996644200_RuntimeMethod_var);
	}

IL_021a:
	{
		int32_t L_104 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
	}

IL_0221:
	{
		int32_t L_105 = V_9;
		int32_t L_106 = V_0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_0115;
		}
	}
	{
		return;
	}
}
// System.Void ProBuilder.Core.pb_Vertex::SetMesh(UnityEngine.Mesh,System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>)
extern "C"  void pb_Vertex_SetMesh_m3293155907 (RuntimeObject * __this /* static, unused */, Mesh_t3648964284 * ___m0, RuntimeObject* ___vertices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_SetMesh_m3293155907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	ColorU5BU5D_t941916413* V_1 = NULL;
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	Vector3U5BU5D_t1718750761* V_3 = NULL;
	Vector4U5BU5D_t934056436* V_4 = NULL;
	Vector2U5BU5D_t1457185986* V_5 = NULL;
	List_1_t496136383 * V_6 = NULL;
	List_1_t496136383 * V_7 = NULL;
	pb_Vertex_t2424025474 * V_8 = NULL;
	{
		V_0 = (Vector3U5BU5D_t1718750761*)NULL;
		V_1 = (ColorU5BU5D_t941916413*)NULL;
		V_2 = (Vector2U5BU5D_t1457185986*)NULL;
		V_3 = (Vector3U5BU5D_t1718750761*)NULL;
		V_4 = (Vector4U5BU5D_t934056436*)NULL;
		V_5 = (Vector2U5BU5D_t1457185986*)NULL;
		V_6 = (List_1_t496136383 *)NULL;
		V_7 = (List_1_t496136383 *)NULL;
		RuntimeObject* L_0 = ___vertices1;
		pb_Vertex_GetArrays_m2606191251(NULL /*static, unused*/, L_0, (Vector3U5BU5D_t1718750761**)(&V_0), (ColorU5BU5D_t941916413**)(&V_1), (Vector2U5BU5D_t1457185986**)(&V_2), (Vector3U5BU5D_t1718750761**)(&V_3), (Vector4U5BU5D_t934056436**)(&V_4), (Vector2U5BU5D_t1457185986**)(&V_5), (List_1_t496136383 **)(&V_6), (List_1_t496136383 **)(&V_7), /*hidden argument*/NULL);
		Mesh_t3648964284 * L_1 = ___m0;
		NullCheck(L_1);
		Mesh_Clear_m2630385472(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___vertices1;
		NullCheck(L_2);
		pb_Vertex_t2424025474 * L_3 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_2, 0);
		V_8 = L_3;
		pb_Vertex_t2424025474 * L_4 = V_8;
		NullCheck(L_4);
		bool L_5 = L_4->get_hasPosition_8();
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		Mesh_t3648964284 * L_6 = ___m0;
		Vector3U5BU5D_t1718750761* L_7 = V_0;
		NullCheck(L_6);
		Mesh_set_vertices_m2084450642(L_6, L_7, /*hidden argument*/NULL);
	}

IL_004d:
	{
		pb_Vertex_t2424025474 * L_8 = V_8;
		NullCheck(L_8);
		bool L_9 = L_8->get_hasColor_9();
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		Mesh_t3648964284 * L_10 = ___m0;
		ColorU5BU5D_t941916413* L_11 = V_1;
		NullCheck(L_10);
		Mesh_set_colors_m2218481242(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0060:
	{
		pb_Vertex_t2424025474 * L_12 = V_8;
		NullCheck(L_12);
		bool L_13 = L_12->get_hasUv0_12();
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		Mesh_t3648964284 * L_14 = ___m0;
		Vector2U5BU5D_t1457185986* L_15 = V_2;
		NullCheck(L_14);
		Mesh_set_uv_m1258646872(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0073:
	{
		pb_Vertex_t2424025474 * L_16 = V_8;
		NullCheck(L_16);
		bool L_17 = L_16->get_hasNormal_10();
		if (!L_17)
		{
			goto IL_0086;
		}
	}
	{
		Mesh_t3648964284 * L_18 = ___m0;
		Vector3U5BU5D_t1718750761* L_19 = V_3;
		NullCheck(L_18);
		Mesh_set_normals_m332514528(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0086:
	{
		pb_Vertex_t2424025474 * L_20 = V_8;
		NullCheck(L_20);
		bool L_21 = L_20->get_hasTangent_11();
		if (!L_21)
		{
			goto IL_009a;
		}
	}
	{
		Mesh_t3648964284 * L_22 = ___m0;
		Vector4U5BU5D_t934056436* L_23 = V_4;
		NullCheck(L_22);
		Mesh_set_tangents_m1592250690(L_22, L_23, /*hidden argument*/NULL);
	}

IL_009a:
	{
		pb_Vertex_t2424025474 * L_24 = V_8;
		NullCheck(L_24);
		bool L_25 = L_24->get_hasUv2_13();
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		Mesh_t3648964284 * L_26 = ___m0;
		Vector2U5BU5D_t1457185986* L_27 = V_5;
		NullCheck(L_26);
		Mesh_set_uv2_m2840654016(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		pb_Vertex_t2424025474 * L_28 = V_8;
		NullCheck(L_28);
		bool L_29 = L_28->get_hasUv3_14();
		if (!L_29)
		{
			goto IL_00ca;
		}
	}
	{
		List_1_t496136383 * L_30 = V_6;
		if (!L_30)
		{
			goto IL_00ca;
		}
	}
	{
		Mesh_t3648964284 * L_31 = ___m0;
		List_1_t496136383 * L_32 = V_6;
		NullCheck(L_31);
		Mesh_SetUVs_m3071541108(L_31, 2, L_32, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		pb_Vertex_t2424025474 * L_33 = V_8;
		NullCheck(L_33);
		bool L_34 = L_33->get_hasUv4_15();
		if (!L_34)
		{
			goto IL_00e6;
		}
	}
	{
		List_1_t496136383 * L_35 = V_7;
		if (!L_35)
		{
			goto IL_00e6;
		}
	}
	{
		Mesh_t3648964284 * L_36 = ___m0;
		List_1_t496136383 * L_37 = V_7;
		NullCheck(L_36);
		Mesh_SetUVs_m3071541108(L_36, 3, L_37, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		return;
	}
}
// ProBuilder.Core.pb_Vertex ProBuilder.Core.pb_Vertex::Average(System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>,System.Collections.Generic.IList`1<System.Int32>)
extern "C"  pb_Vertex_t2424025474 * pb_Vertex_Average_m1559956661 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___vertices0, RuntimeObject* ___indices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Average_m1559956661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2424025474 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	pb_Vertex_t2424025474 * V_9 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		pb_Vertex_t2424025474 * L_0 = (pb_Vertex_t2424025474 *)il2cpp_codegen_object_new(pb_Vertex_t2424025474_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m3495902961(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___indices1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___indices1;
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t1484130691_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		goto IL_001f;
	}

IL_0019:
	{
		RuntimeObject* L_4 = ___vertices0;
		NullCheck(L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProBuilder.Core.pb_Vertex>::get_Count() */, ICollection_1_t957210412_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = L_5;
	}

IL_001f:
	{
		V_1 = G_B3_0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		goto IL_01c2;
	}

IL_0035:
	{
		RuntimeObject* L_6 = ___indices1;
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_7 = V_7;
		G_B7_0 = L_7;
		goto IL_004b;
	}

IL_0043:
	{
		RuntimeObject* L_8 = ___indices1;
		int32_t L_9 = V_7;
		NullCheck(L_8);
		int32_t L_10 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_t471298240_il2cpp_TypeInfo_var, L_8, L_9);
		G_B7_0 = L_10;
	}

IL_004b:
	{
		V_8 = G_B7_0;
		pb_Vertex_t2424025474 * L_11 = V_0;
		pb_Vertex_t2424025474 * L_12 = L_11;
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = L_12->get_position_0();
		RuntimeObject* L_14 = ___vertices0;
		int32_t L_15 = V_8;
		NullCheck(L_14);
		pb_Vertex_t2424025474 * L_16 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_14, L_15);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = L_16->get_position_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_13, L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_position_0(L_18);
		pb_Vertex_t2424025474 * L_19 = V_0;
		pb_Vertex_t2424025474 * L_20 = L_19;
		NullCheck(L_20);
		Color_t2555686324  L_21 = L_20->get_color_1();
		RuntimeObject* L_22 = ___vertices0;
		int32_t L_23 = V_8;
		NullCheck(L_22);
		pb_Vertex_t2424025474 * L_24 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_22, L_23);
		NullCheck(L_24);
		Color_t2555686324  L_25 = L_24->get_color_1();
		Color_t2555686324  L_26 = Color_op_Addition_m3293657895(NULL /*static, unused*/, L_21, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_color_1(L_26);
		pb_Vertex_t2424025474 * L_27 = V_0;
		pb_Vertex_t2424025474 * L_28 = L_27;
		NullCheck(L_28);
		Vector2_t2156229523  L_29 = L_28->get_uv0_4();
		RuntimeObject* L_30 = ___vertices0;
		int32_t L_31 = V_8;
		NullCheck(L_30);
		pb_Vertex_t2424025474 * L_32 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_30, L_31);
		NullCheck(L_32);
		Vector2_t2156229523  L_33 = L_32->get_uv0_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_34 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_29, L_33, /*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set_uv0_4(L_34);
		RuntimeObject* L_35 = ___vertices0;
		int32_t L_36 = V_8;
		NullCheck(L_35);
		pb_Vertex_t2424025474 * L_37 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_35, L_36);
		NullCheck(L_37);
		bool L_38 = L_37->get_hasNormal_10();
		if (!L_38)
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		pb_Vertex_t2424025474 * L_40 = V_0;
		pb_Vertex_t2424025474 * L_41 = L_40;
		NullCheck(L_41);
		Vector3_t3722313464  L_42 = L_41->get_normal_2();
		RuntimeObject* L_43 = ___vertices0;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		pb_Vertex_t2424025474 * L_45 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_43, L_44);
		NullCheck(L_45);
		Vector3_t3722313464  L_46 = L_45->get_normal_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_47 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_42, L_46, /*hidden argument*/NULL);
		NullCheck(L_41);
		L_41->set_normal_2(L_47);
	}

IL_00dd:
	{
		RuntimeObject* L_48 = ___vertices0;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		pb_Vertex_t2424025474 * L_50 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_48, L_49);
		NullCheck(L_50);
		bool L_51 = L_50->get_hasTangent_11();
		if (!L_51)
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		pb_Vertex_t2424025474 * L_53 = V_0;
		pb_Vertex_t2424025474 * L_54 = L_53;
		NullCheck(L_54);
		Vector4_t3319028937  L_55 = L_54->get_tangent_3();
		RuntimeObject* L_56 = ___vertices0;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		pb_Vertex_t2424025474 * L_58 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_56, L_57);
		NullCheck(L_58);
		Vector4_t3319028937  L_59 = L_58->get_tangent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_60 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_55, L_59, /*hidden argument*/NULL);
		NullCheck(L_54);
		L_54->set_tangent_3(L_60);
	}

IL_0113:
	{
		RuntimeObject* L_61 = ___vertices0;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		pb_Vertex_t2424025474 * L_63 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_61, L_62);
		NullCheck(L_63);
		bool L_64 = L_63->get_hasUv2_13();
		if (!L_64)
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_65 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		pb_Vertex_t2424025474 * L_66 = V_0;
		pb_Vertex_t2424025474 * L_67 = L_66;
		NullCheck(L_67);
		Vector2_t2156229523  L_68 = L_67->get_uv2_5();
		RuntimeObject* L_69 = ___vertices0;
		int32_t L_70 = V_8;
		NullCheck(L_69);
		pb_Vertex_t2424025474 * L_71 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_69, L_70);
		NullCheck(L_71);
		Vector2_t2156229523  L_72 = L_71->get_uv2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_73 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_68, L_72, /*hidden argument*/NULL);
		NullCheck(L_67);
		L_67->set_uv2_5(L_73);
	}

IL_014b:
	{
		RuntimeObject* L_74 = ___vertices0;
		int32_t L_75 = V_8;
		NullCheck(L_74);
		pb_Vertex_t2424025474 * L_76 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_74, L_75);
		NullCheck(L_76);
		bool L_77 = L_76->get_hasUv3_14();
		if (!L_77)
		{
			goto IL_0183;
		}
	}
	{
		int32_t L_78 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		pb_Vertex_t2424025474 * L_79 = V_0;
		pb_Vertex_t2424025474 * L_80 = L_79;
		NullCheck(L_80);
		Vector4_t3319028937  L_81 = L_80->get_uv3_6();
		RuntimeObject* L_82 = ___vertices0;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		pb_Vertex_t2424025474 * L_84 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_82, L_83);
		NullCheck(L_84);
		Vector4_t3319028937  L_85 = L_84->get_uv3_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_86 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_81, L_85, /*hidden argument*/NULL);
		NullCheck(L_80);
		L_80->set_uv3_6(L_86);
	}

IL_0183:
	{
		RuntimeObject* L_87 = ___vertices0;
		int32_t L_88 = V_8;
		NullCheck(L_87);
		pb_Vertex_t2424025474 * L_89 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_87, L_88);
		NullCheck(L_89);
		bool L_90 = L_89->get_hasUv4_15();
		if (!L_90)
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_91 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
		pb_Vertex_t2424025474 * L_92 = V_0;
		pb_Vertex_t2424025474 * L_93 = L_92;
		NullCheck(L_93);
		Vector4_t3319028937  L_94 = L_93->get_uv4_7();
		RuntimeObject* L_95 = ___vertices0;
		int32_t L_96 = V_8;
		NullCheck(L_95);
		pb_Vertex_t2424025474 * L_97 = InterfaceFuncInvoker1< pb_Vertex_t2424025474 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<ProBuilder.Core.pb_Vertex>::get_Item(System.Int32) */, IList_1_t4239345257_il2cpp_TypeInfo_var, L_95, L_96);
		NullCheck(L_97);
		Vector4_t3319028937  L_98 = L_97->get_uv4_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_99 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_94, L_98, /*hidden argument*/NULL);
		NullCheck(L_93);
		L_93->set_uv4_7(L_99);
	}

IL_01bb:
	{
		int32_t L_100 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
	}

IL_01c2:
	{
		int32_t L_101 = V_7;
		int32_t L_102 = V_1;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_0035;
		}
	}
	{
		pb_Vertex_t2424025474 * L_103 = V_0;
		pb_Vertex_t2424025474 * L_104 = L_103;
		NullCheck(L_104);
		Vector3_t3722313464  L_105 = L_104->get_position_0();
		int32_t L_106 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_107 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_105, ((float)((float)(1.0f)/(float)(((float)((float)L_106))))), /*hidden argument*/NULL);
		NullCheck(L_104);
		L_104->set_position_0(L_107);
		pb_Vertex_t2424025474 * L_108 = V_0;
		pb_Vertex_t2424025474 * L_109 = L_108;
		NullCheck(L_109);
		Color_t2555686324  L_110 = L_109->get_color_1();
		int32_t L_111 = V_1;
		Color_t2555686324  L_112 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_110, ((float)((float)(1.0f)/(float)(((float)((float)L_111))))), /*hidden argument*/NULL);
		NullCheck(L_109);
		L_109->set_color_1(L_112);
		pb_Vertex_t2424025474 * L_113 = V_0;
		pb_Vertex_t2424025474 * L_114 = L_113;
		NullCheck(L_114);
		Vector2_t2156229523  L_115 = L_114->get_uv0_4();
		int32_t L_116 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_117 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_115, ((float)((float)(1.0f)/(float)(((float)((float)L_116))))), /*hidden argument*/NULL);
		NullCheck(L_114);
		L_114->set_uv0_4(L_117);
		pb_Vertex_t2424025474 * L_118 = V_0;
		pb_Vertex_t2424025474 * L_119 = L_118;
		NullCheck(L_119);
		Vector3_t3722313464  L_120 = L_119->get_normal_2();
		int32_t L_121 = V_2;
		Vector3_t3722313464  L_122 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_120, ((float)((float)(1.0f)/(float)(((float)((float)L_121))))), /*hidden argument*/NULL);
		NullCheck(L_119);
		L_119->set_normal_2(L_122);
		pb_Vertex_t2424025474 * L_123 = V_0;
		pb_Vertex_t2424025474 * L_124 = L_123;
		NullCheck(L_124);
		Vector4_t3319028937  L_125 = L_124->get_tangent_3();
		int32_t L_126 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_127 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_125, ((float)((float)(1.0f)/(float)(((float)((float)L_126))))), /*hidden argument*/NULL);
		NullCheck(L_124);
		L_124->set_tangent_3(L_127);
		pb_Vertex_t2424025474 * L_128 = V_0;
		pb_Vertex_t2424025474 * L_129 = L_128;
		NullCheck(L_129);
		Vector2_t2156229523  L_130 = L_129->get_uv2_5();
		int32_t L_131 = V_4;
		Vector2_t2156229523  L_132 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_130, ((float)((float)(1.0f)/(float)(((float)((float)L_131))))), /*hidden argument*/NULL);
		NullCheck(L_129);
		L_129->set_uv2_5(L_132);
		pb_Vertex_t2424025474 * L_133 = V_0;
		pb_Vertex_t2424025474 * L_134 = L_133;
		NullCheck(L_134);
		Vector4_t3319028937  L_135 = L_134->get_uv3_6();
		int32_t L_136 = V_5;
		Vector4_t3319028937  L_137 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_135, ((float)((float)(1.0f)/(float)(((float)((float)L_136))))), /*hidden argument*/NULL);
		NullCheck(L_134);
		L_134->set_uv3_6(L_137);
		pb_Vertex_t2424025474 * L_138 = V_0;
		pb_Vertex_t2424025474 * L_139 = L_138;
		NullCheck(L_139);
		Vector4_t3319028937  L_140 = L_139->get_uv4_7();
		int32_t L_141 = V_6;
		Vector4_t3319028937  L_142 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_140, ((float)((float)(1.0f)/(float)(((float)((float)L_141))))), /*hidden argument*/NULL);
		NullCheck(L_139);
		L_139->set_uv4_7(L_142);
		pb_Vertex_t2424025474 * L_143 = V_0;
		V_9 = L_143;
		goto IL_029d;
	}

IL_029d:
	{
		pb_Vertex_t2424025474 * L_144 = V_9;
		return L_144;
	}
}
// ProBuilder.Core.pb_Vertex ProBuilder.Core.pb_Vertex::Mix(ProBuilder.Core.pb_Vertex,ProBuilder.Core.pb_Vertex,System.Single)
extern "C"  pb_Vertex_t2424025474 * pb_Vertex_Mix_m2907664785 (RuntimeObject * __this /* static, unused */, pb_Vertex_t2424025474 * ___x0, pb_Vertex_t2424025474 * ___y1, float ___a2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_Vertex_Mix_m2907664785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	pb_Vertex_t2424025474 * V_1 = NULL;
	pb_Vertex_t2424025474 * V_2 = NULL;
	{
		float L_0 = ___a2;
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_0));
		pb_Vertex_t2424025474 * L_1 = (pb_Vertex_t2424025474 *)il2cpp_codegen_object_new(pb_Vertex_t2424025474_il2cpp_TypeInfo_var);
		pb_Vertex__ctor_m3495902961(L_1, (bool)0, /*hidden argument*/NULL);
		V_1 = L_1;
		pb_Vertex_t2424025474 * L_2 = V_1;
		pb_Vertex_t2424025474 * L_3 = ___x0;
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = L_3->get_position_0();
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_7 = ___y1;
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = L_7->get_position_0();
		float L_9 = ___a2;
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_10, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_position_0(L_11);
		pb_Vertex_t2424025474 * L_12 = V_1;
		pb_Vertex_t2424025474 * L_13 = ___x0;
		NullCheck(L_13);
		Color_t2555686324  L_14 = L_13->get_color_1();
		float L_15 = V_0;
		Color_t2555686324  L_16 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_17 = ___y1;
		NullCheck(L_17);
		Color_t2555686324  L_18 = L_17->get_color_1();
		float L_19 = ___a2;
		Color_t2555686324  L_20 = Color_op_Multiply_m2887457390(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		Color_t2555686324  L_21 = Color_op_Addition_m3293657895(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_color_1(L_21);
		pb_Vertex_t2424025474 * L_22 = V_1;
		pb_Vertex_t2424025474 * L_23 = ___x0;
		NullCheck(L_23);
		Vector2_t2156229523  L_24 = L_23->get_uv0_4();
		float L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_26 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_27 = ___y1;
		NullCheck(L_27);
		Vector2_t2156229523  L_28 = L_27->get_uv0_4();
		float L_29 = ___a2;
		Vector2_t2156229523  L_30 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		Vector2_t2156229523  L_31 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_26, L_30, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_uv0_4(L_31);
		pb_Vertex_t2424025474 * L_32 = ___x0;
		NullCheck(L_32);
		bool L_33 = L_32->get_hasNormal_10();
		if (!L_33)
		{
			goto IL_00b7;
		}
	}
	{
		pb_Vertex_t2424025474 * L_34 = ___y1;
		NullCheck(L_34);
		bool L_35 = L_34->get_hasNormal_10();
		if (!L_35)
		{
			goto IL_00b7;
		}
	}
	{
		pb_Vertex_t2424025474 * L_36 = V_1;
		pb_Vertex_t2424025474 * L_37 = ___x0;
		NullCheck(L_37);
		Vector3_t3722313464  L_38 = L_37->get_normal_2();
		float L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_40 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_41 = ___y1;
		NullCheck(L_41);
		Vector3_t3722313464  L_42 = L_41->get_normal_2();
		float L_43 = ___a2;
		Vector3_t3722313464  L_44 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_40, L_44, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->set_normal_2(L_45);
		goto IL_00ea;
	}

IL_00b7:
	{
		pb_Vertex_t2424025474 * L_46 = ___x0;
		NullCheck(L_46);
		bool L_47 = L_46->get_hasNormal_10();
		if (!L_47)
		{
			goto IL_00d3;
		}
	}
	{
		pb_Vertex_t2424025474 * L_48 = V_1;
		pb_Vertex_t2424025474 * L_49 = ___x0;
		NullCheck(L_49);
		Vector3_t3722313464  L_50 = L_49->get_normal_2();
		NullCheck(L_48);
		L_48->set_normal_2(L_50);
		goto IL_00ea;
	}

IL_00d3:
	{
		pb_Vertex_t2424025474 * L_51 = ___y1;
		NullCheck(L_51);
		bool L_52 = L_51->get_hasNormal_10();
		if (!L_52)
		{
			goto IL_00ea;
		}
	}
	{
		pb_Vertex_t2424025474 * L_53 = V_1;
		pb_Vertex_t2424025474 * L_54 = ___y1;
		NullCheck(L_54);
		Vector3_t3722313464  L_55 = L_54->get_normal_2();
		NullCheck(L_53);
		L_53->set_normal_2(L_55);
	}

IL_00ea:
	{
		pb_Vertex_t2424025474 * L_56 = ___x0;
		NullCheck(L_56);
		bool L_57 = L_56->get_hasTangent_11();
		if (!L_57)
		{
			goto IL_0128;
		}
	}
	{
		pb_Vertex_t2424025474 * L_58 = ___y1;
		NullCheck(L_58);
		bool L_59 = L_58->get_hasTangent_11();
		if (!L_59)
		{
			goto IL_0128;
		}
	}
	{
		pb_Vertex_t2424025474 * L_60 = V_1;
		pb_Vertex_t2424025474 * L_61 = ___x0;
		NullCheck(L_61);
		Vector4_t3319028937  L_62 = L_61->get_tangent_3();
		float L_63 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_64 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_65 = ___y1;
		NullCheck(L_65);
		Vector4_t3319028937  L_66 = L_65->get_tangent_3();
		float L_67 = ___a2;
		Vector4_t3319028937  L_68 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_66, L_67, /*hidden argument*/NULL);
		Vector4_t3319028937  L_69 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_64, L_68, /*hidden argument*/NULL);
		NullCheck(L_60);
		L_60->set_tangent_3(L_69);
		goto IL_015b;
	}

IL_0128:
	{
		pb_Vertex_t2424025474 * L_70 = ___x0;
		NullCheck(L_70);
		bool L_71 = L_70->get_hasTangent_11();
		if (!L_71)
		{
			goto IL_0144;
		}
	}
	{
		pb_Vertex_t2424025474 * L_72 = V_1;
		pb_Vertex_t2424025474 * L_73 = ___x0;
		NullCheck(L_73);
		Vector4_t3319028937  L_74 = L_73->get_tangent_3();
		NullCheck(L_72);
		L_72->set_tangent_3(L_74);
		goto IL_015b;
	}

IL_0144:
	{
		pb_Vertex_t2424025474 * L_75 = ___y1;
		NullCheck(L_75);
		bool L_76 = L_75->get_hasTangent_11();
		if (!L_76)
		{
			goto IL_015b;
		}
	}
	{
		pb_Vertex_t2424025474 * L_77 = V_1;
		pb_Vertex_t2424025474 * L_78 = ___y1;
		NullCheck(L_78);
		Vector4_t3319028937  L_79 = L_78->get_tangent_3();
		NullCheck(L_77);
		L_77->set_tangent_3(L_79);
	}

IL_015b:
	{
		pb_Vertex_t2424025474 * L_80 = ___x0;
		NullCheck(L_80);
		bool L_81 = L_80->get_hasUv2_13();
		if (!L_81)
		{
			goto IL_0199;
		}
	}
	{
		pb_Vertex_t2424025474 * L_82 = ___y1;
		NullCheck(L_82);
		bool L_83 = L_82->get_hasUv2_13();
		if (!L_83)
		{
			goto IL_0199;
		}
	}
	{
		pb_Vertex_t2424025474 * L_84 = V_1;
		pb_Vertex_t2424025474 * L_85 = ___x0;
		NullCheck(L_85);
		Vector2_t2156229523  L_86 = L_85->get_uv2_5();
		float L_87 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_88 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_86, L_87, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_89 = ___y1;
		NullCheck(L_89);
		Vector2_t2156229523  L_90 = L_89->get_uv2_5();
		float L_91 = ___a2;
		Vector2_t2156229523  L_92 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_90, L_91, /*hidden argument*/NULL);
		Vector2_t2156229523  L_93 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_88, L_92, /*hidden argument*/NULL);
		NullCheck(L_84);
		L_84->set_uv2_5(L_93);
		goto IL_01cc;
	}

IL_0199:
	{
		pb_Vertex_t2424025474 * L_94 = ___x0;
		NullCheck(L_94);
		bool L_95 = L_94->get_hasUv2_13();
		if (!L_95)
		{
			goto IL_01b5;
		}
	}
	{
		pb_Vertex_t2424025474 * L_96 = V_1;
		pb_Vertex_t2424025474 * L_97 = ___x0;
		NullCheck(L_97);
		Vector2_t2156229523  L_98 = L_97->get_uv2_5();
		NullCheck(L_96);
		L_96->set_uv2_5(L_98);
		goto IL_01cc;
	}

IL_01b5:
	{
		pb_Vertex_t2424025474 * L_99 = ___y1;
		NullCheck(L_99);
		bool L_100 = L_99->get_hasUv2_13();
		if (!L_100)
		{
			goto IL_01cc;
		}
	}
	{
		pb_Vertex_t2424025474 * L_101 = V_1;
		pb_Vertex_t2424025474 * L_102 = ___y1;
		NullCheck(L_102);
		Vector2_t2156229523  L_103 = L_102->get_uv2_5();
		NullCheck(L_101);
		L_101->set_uv2_5(L_103);
	}

IL_01cc:
	{
		pb_Vertex_t2424025474 * L_104 = ___x0;
		NullCheck(L_104);
		bool L_105 = L_104->get_hasUv3_14();
		if (!L_105)
		{
			goto IL_020a;
		}
	}
	{
		pb_Vertex_t2424025474 * L_106 = ___y1;
		NullCheck(L_106);
		bool L_107 = L_106->get_hasUv3_14();
		if (!L_107)
		{
			goto IL_020a;
		}
	}
	{
		pb_Vertex_t2424025474 * L_108 = V_1;
		pb_Vertex_t2424025474 * L_109 = ___x0;
		NullCheck(L_109);
		Vector4_t3319028937  L_110 = L_109->get_uv3_6();
		float L_111 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_112 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_110, L_111, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_113 = ___y1;
		NullCheck(L_113);
		Vector4_t3319028937  L_114 = L_113->get_uv3_6();
		float L_115 = ___a2;
		Vector4_t3319028937  L_116 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_114, L_115, /*hidden argument*/NULL);
		Vector4_t3319028937  L_117 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_112, L_116, /*hidden argument*/NULL);
		NullCheck(L_108);
		L_108->set_uv3_6(L_117);
		goto IL_023d;
	}

IL_020a:
	{
		pb_Vertex_t2424025474 * L_118 = ___x0;
		NullCheck(L_118);
		bool L_119 = L_118->get_hasUv3_14();
		if (!L_119)
		{
			goto IL_0226;
		}
	}
	{
		pb_Vertex_t2424025474 * L_120 = V_1;
		pb_Vertex_t2424025474 * L_121 = ___x0;
		NullCheck(L_121);
		Vector4_t3319028937  L_122 = L_121->get_uv3_6();
		NullCheck(L_120);
		L_120->set_uv3_6(L_122);
		goto IL_023d;
	}

IL_0226:
	{
		pb_Vertex_t2424025474 * L_123 = ___y1;
		NullCheck(L_123);
		bool L_124 = L_123->get_hasUv3_14();
		if (!L_124)
		{
			goto IL_023d;
		}
	}
	{
		pb_Vertex_t2424025474 * L_125 = V_1;
		pb_Vertex_t2424025474 * L_126 = ___y1;
		NullCheck(L_126);
		Vector4_t3319028937  L_127 = L_126->get_uv3_6();
		NullCheck(L_125);
		L_125->set_uv3_6(L_127);
	}

IL_023d:
	{
		pb_Vertex_t2424025474 * L_128 = ___x0;
		NullCheck(L_128);
		bool L_129 = L_128->get_hasUv4_15();
		if (!L_129)
		{
			goto IL_027b;
		}
	}
	{
		pb_Vertex_t2424025474 * L_130 = ___y1;
		NullCheck(L_130);
		bool L_131 = L_130->get_hasUv4_15();
		if (!L_131)
		{
			goto IL_027b;
		}
	}
	{
		pb_Vertex_t2424025474 * L_132 = V_1;
		pb_Vertex_t2424025474 * L_133 = ___x0;
		NullCheck(L_133);
		Vector4_t3319028937  L_134 = L_133->get_uv4_7();
		float L_135 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_136 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_134, L_135, /*hidden argument*/NULL);
		pb_Vertex_t2424025474 * L_137 = ___y1;
		NullCheck(L_137);
		Vector4_t3319028937  L_138 = L_137->get_uv4_7();
		float L_139 = ___a2;
		Vector4_t3319028937  L_140 = Vector4_op_Multiply_m213790997(NULL /*static, unused*/, L_138, L_139, /*hidden argument*/NULL);
		Vector4_t3319028937  L_141 = Vector4_op_Addition_m787366691(NULL /*static, unused*/, L_136, L_140, /*hidden argument*/NULL);
		NullCheck(L_132);
		L_132->set_uv4_7(L_141);
		goto IL_02ae;
	}

IL_027b:
	{
		pb_Vertex_t2424025474 * L_142 = ___x0;
		NullCheck(L_142);
		bool L_143 = L_142->get_hasUv4_15();
		if (!L_143)
		{
			goto IL_0297;
		}
	}
	{
		pb_Vertex_t2424025474 * L_144 = V_1;
		pb_Vertex_t2424025474 * L_145 = ___x0;
		NullCheck(L_145);
		Vector4_t3319028937  L_146 = L_145->get_uv4_7();
		NullCheck(L_144);
		L_144->set_uv4_7(L_146);
		goto IL_02ae;
	}

IL_0297:
	{
		pb_Vertex_t2424025474 * L_147 = ___y1;
		NullCheck(L_147);
		bool L_148 = L_147->get_hasUv4_15();
		if (!L_148)
		{
			goto IL_02ae;
		}
	}
	{
		pb_Vertex_t2424025474 * L_149 = V_1;
		pb_Vertex_t2424025474 * L_150 = ___y1;
		NullCheck(L_150);
		Vector4_t3319028937  L_151 = L_150->get_uv4_7();
		NullCheck(L_149);
		L_149->set_uv4_7(L_151);
	}

IL_02ae:
	{
		pb_Vertex_t2424025474 * L_152 = V_1;
		V_2 = L_152;
		goto IL_02b5;
	}

IL_02b5:
	{
		pb_Vertex_t2424025474 * L_153 = V_2;
		return L_153;
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
// System.Void ProBuilder.Core.pb_VertexConnection::.ctor(ProBuilder.Core.pb_Face,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void pb_VertexConnection__ctor_m3368934471 (pb_VertexConnection_t1937459598 * __this, pb_Face_t1264560821 * ___face0, List_1_t128053199 * ___indices1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		pb_Face_t1264560821 * L_0 = ___face0;
		__this->set_face_0(L_0);
		List_1_t128053199 * L_1 = ___indices1;
		__this->set_indices_1(L_1);
		return;
	}
}
// System.Boolean ProBuilder.Core.pb_VertexConnection::get_isValid()
extern "C"  bool pb_VertexConnection_get_isValid_m483077075 (pb_VertexConnection_t1937459598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_get_isValid_m483077075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_t128053199 * L_0 = __this->get_indices_1();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		List_1_t128053199 * L_1 = __this->get_indices_1();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m361000296(L_1, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)1))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// ProBuilder.Core.pb_VertexConnection ProBuilder.Core.pb_VertexConnection::Distinct(ProBuilder.Core.pb_IntArray[])
extern "C"  pb_VertexConnection_t1937459598 * pb_VertexConnection_Distinct_m1958529234 (pb_VertexConnection_t1937459598 * __this, pb_IntArrayU5BU5D_t3213957336* ___sharedIndices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_Distinct_m1958529234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_VertexConnection_t1937459598 * V_0 = NULL;
	{
		pb_Face_t1264560821 * L_0 = __this->get_face_0();
		pb_IntArrayU5BU5D_t3213957336* L_1 = ___sharedIndices0;
		List_1_t128053199 * L_2 = __this->get_indices_1();
		List_1_t128053199 * L_3 = pb_IntArrayUtility_UniqueIndicesWithValues_m3004014503(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		List_1_t128053199 * L_4 = Enumerable_ToList_TisInt32_t2950945753_m3036595195(NULL /*static, unused*/, L_3, /*hidden argument*/Enumerable_ToList_TisInt32_t2950945753_m3036595195_RuntimeMethod_var);
		pb_VertexConnection_t1937459598 * L_5 = (pb_VertexConnection_t1937459598 *)il2cpp_codegen_object_new(pb_VertexConnection_t1937459598_il2cpp_TypeInfo_var);
		pb_VertexConnection__ctor_m3368934471(L_5, L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		pb_VertexConnection_t1937459598 * L_6 = V_0;
		return L_6;
	}
}
// System.Boolean ProBuilder.Core.pb_VertexConnection::Equals(System.Object)
extern "C"  bool pb_VertexConnection_Equals_m2951124188 (pb_VertexConnection_t1937459598 * __this, RuntimeObject * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_Equals_m2951124188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___b0;
		if (!((pb_VertexConnection_t1937459598 *)IsInstClass((RuntimeObject*)L_0, pb_VertexConnection_t1937459598_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		pb_Face_t1264560821 * L_1 = __this->get_face_0();
		RuntimeObject * L_2 = ___b0;
		NullCheck(((pb_VertexConnection_t1937459598 *)CastclassClass((RuntimeObject*)L_2, pb_VertexConnection_t1937459598_il2cpp_TypeInfo_var)));
		pb_Face_t1264560821 * L_3 = ((pb_VertexConnection_t1937459598 *)CastclassClass((RuntimeObject*)L_2, pb_VertexConnection_t1937459598_il2cpp_TypeInfo_var))->get_face_0();
		G_B3_0 = ((((RuntimeObject*)(pb_Face_t1264560821 *)L_1) == ((RuntimeObject*)(pb_Face_t1264560821 *)L_3))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean ProBuilder.Core.pb_VertexConnection::Equals(ProBuilder.Core.pb_VertexConnection)
extern "C"  bool pb_VertexConnection_Equals_m2594634668 (pb_VertexConnection_t1937459598 * __this, pb_VertexConnection_t1937459598 * ___vc0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		pb_Face_t1264560821 * L_0 = __this->get_face_0();
		pb_VertexConnection_t1937459598 * L_1 = ___vc0;
		NullCheck(L_1);
		pb_Face_t1264560821 * L_2 = L_1->get_face_0();
		V_0 = (bool)((((RuntimeObject*)(pb_Face_t1264560821 *)L_0) == ((RuntimeObject*)(pb_Face_t1264560821 *)L_2))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// ProBuilder.Core.pb_Face ProBuilder.Core.pb_VertexConnection::op_Implicit(ProBuilder.Core.pb_VertexConnection)
extern "C"  pb_Face_t1264560821 * pb_VertexConnection_op_Implicit_m278143536 (RuntimeObject * __this /* static, unused */, pb_VertexConnection_t1937459598 * ___vc0, const RuntimeMethod* method)
{
	pb_Face_t1264560821 * V_0 = NULL;
	{
		pb_VertexConnection_t1937459598 * L_0 = ___vc0;
		NullCheck(L_0);
		pb_Face_t1264560821 * L_1 = L_0->get_face_0();
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		pb_Face_t1264560821 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ProBuilder.Core.pb_VertexConnection::GetHashCode()
extern "C"  int32_t pb_VertexConnection_GetHashCode_m1006001325 (pb_VertexConnection_t1937459598 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Object_GetHashCode_m2705121830(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String ProBuilder.Core.pb_VertexConnection::ToString()
extern "C"  String_t* pb_VertexConnection_ToString_m3469647405 (pb_VertexConnection_t1937459598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_ToString_m3469647405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		pb_Face_t1264560821 * L_0 = __this->get_face_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		List_1_t128053199 * L_2 = __this->get_indices_1();
		String_t* L_3 = pb_Util_ToString_TisInt32_t2950945753_m506958589(NULL /*static, unused*/, L_2, _stringLiteral3450517380, /*hidden argument*/pb_Util_ToString_TisInt32_t2950945753_m506958589_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3787497674, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002c;
	}

IL_002c:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.Generic.List`1<System.Int32> ProBuilder.Core.pb_VertexConnection::AllTriangles(System.Collections.Generic.List`1<ProBuilder.Core.pb_VertexConnection>)
extern "C"  List_1_t128053199 * pb_VertexConnection_AllTriangles_m2202413865 (RuntimeObject * __this /* static, unused */, List_1_t3409534340 * ___vcs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_VertexConnection_AllTriangles_m2202413865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t128053199 * V_2 = NULL;
	{
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000e:
	{
		List_1_t128053199 * L_1 = V_0;
		List_1_t3409534340 * L_2 = ___vcs0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		pb_VertexConnection_t1937459598 * L_4 = List_1_get_Item_m2928508082(L_2, L_3, /*hidden argument*/List_1_get_Item_m2928508082_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_t128053199 * L_5 = L_4->get_indices_1();
		NullCheck(L_1);
		List_1_AddRange_m3513848896(L_1, L_5, /*hidden argument*/List_1_AddRange_m3513848896_RuntimeMethod_var);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_7 = V_1;
		List_1_t3409534340 * L_8 = ___vcs0;
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m509547872(L_8, /*hidden argument*/List_1_get_Count_m509547872_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000e;
		}
	}
	{
		List_1_t128053199 * L_10 = V_0;
		V_2 = L_10;
		goto IL_0037;
	}

IL_0037:
	{
		List_1_t128053199 * L_11 = V_2;
		return L_11;
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
// System.Void ProBuilder.Core.pb_WingedEdge::.ctor()
extern "C"  void pb_WingedEdge__ctor_m3086440956 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ProBuilder.Core.pb_WingedEdge::Equals(ProBuilder.Core.pb_WingedEdge)
extern "C"  bool pb_WingedEdge_Equals_m1902962710 (pb_WingedEdge_t1011255431 * __this, pb_WingedEdge_t1011255431 * ___b0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		pb_WingedEdge_t1011255431 * L_0 = ___b0;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		pb_EdgeLookup_t1945391737 * L_1 = __this->get_edge_0();
		NullCheck(L_1);
		pb_Edge_t1665968824 * L_2 = L_1->get_address_of_local_0();
		pb_WingedEdge_t1011255431 * L_3 = ___b0;
		NullCheck(L_3);
		pb_EdgeLookup_t1945391737 * L_4 = L_3->get_edge_0();
		NullCheck(L_4);
		pb_Edge_t1665968824  L_5 = L_4->get_local_0();
		bool L_6 = pb_Edge_Equals_m478518696((pb_Edge_t1665968824 *)L_2, L_5, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean ProBuilder.Core.pb_WingedEdge::Equals(System.Object)
extern "C"  bool pb_WingedEdge_Equals_m3096761069 (pb_WingedEdge_t1011255431 * __this, RuntimeObject * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_Equals_m3096761069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_WingedEdge_t1011255431 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___b0;
		V_0 = ((pb_WingedEdge_t1011255431 *)IsInstClass((RuntimeObject*)L_0, pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var));
		pb_WingedEdge_t1011255431 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		pb_WingedEdge_t1011255431 * L_2 = V_0;
		bool L_3 = pb_WingedEdge_Equals_m1902962710(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0055;
	}

IL_0021:
	{
		RuntimeObject * L_4 = ___b0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, pb_Edge_t1665968824_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		pb_EdgeLookup_t1945391737 * L_5 = __this->get_edge_0();
		NullCheck(L_5);
		pb_Edge_t1665968824 * L_6 = L_5->get_address_of_local_0();
		RuntimeObject * L_7 = ___b0;
		bool L_8 = pb_Edge_Equals_m478518696((pb_Edge_t1665968824 *)L_6, ((*(pb_Edge_t1665968824 *)((pb_Edge_t1665968824 *)UnBox(L_7, pb_Edge_t1665968824_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0055;
	}

IL_004e:
	{
		V_1 = (bool)1;
		goto IL_0055;
	}

IL_0055:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Int32 ProBuilder.Core.pb_WingedEdge::GetHashCode()
extern "C"  int32_t pb_WingedEdge_GetHashCode_m2845795159 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		pb_EdgeLookup_t1945391737 * L_0 = __this->get_edge_0();
		NullCheck(L_0);
		pb_Edge_t1665968824 * L_1 = L_0->get_address_of_local_0();
		int32_t L_2 = pb_Edge_GetHashCode_m1707839855((pb_Edge_t1665968824 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator ProBuilder.Core.pb_WingedEdge::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* pb_WingedEdge_System_Collections_IEnumerable_GetEnumerator_m1031837293 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		pb_WingedEdgeEnumerator_t1885848514 * L_0 = pb_WingedEdge_GetEnumerator_m1837634229(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// ProBuilder.Core.pb_WingedEdgeEnumerator ProBuilder.Core.pb_WingedEdge::GetEnumerator()
extern "C"  pb_WingedEdgeEnumerator_t1885848514 * pb_WingedEdge_GetEnumerator_m1837634229 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_GetEnumerator_m1837634229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_WingedEdgeEnumerator_t1885848514 * V_0 = NULL;
	{
		pb_WingedEdgeEnumerator_t1885848514 * L_0 = (pb_WingedEdgeEnumerator_t1885848514 *)il2cpp_codegen_object_new(pb_WingedEdgeEnumerator_t1885848514_il2cpp_TypeInfo_var);
		pb_WingedEdgeEnumerator__ctor_m956777251(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		pb_WingedEdgeEnumerator_t1885848514 * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ProBuilder.Core.pb_WingedEdge::Count()
extern "C"  int32_t pb_WingedEdge_Count_m226944167 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method)
{
	pb_WingedEdge_t1011255431 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = __this;
		V_1 = 0;
	}

IL_0005:
	{
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		pb_WingedEdge_t1011255431 * L_1 = V_0;
		NullCheck(L_1);
		pb_WingedEdge_t1011255431 * L_2 = L_1->get_next_2();
		V_0 = L_2;
		pb_WingedEdge_t1011255431 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		pb_WingedEdge_t1011255431 * L_4 = V_0;
		if ((!(((RuntimeObject*)(pb_WingedEdge_t1011255431 *)L_4) == ((RuntimeObject*)(pb_WingedEdge_t1011255431 *)__this))))
		{
			goto IL_0005;
		}
	}

IL_001f:
	{
		int32_t L_5 = V_1;
		V_2 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.String ProBuilder.Core.pb_WingedEdge::ToString()
extern "C"  String_t* pb_WingedEdge_ToString_m2340151532 (pb_WingedEdge_t1011255431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_ToString_m2340151532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		pb_EdgeLookup_t1945391737 * L_2 = __this->get_edge_0();
		NullCheck(L_2);
		pb_Edge_t1665968824 * L_3 = L_2->get_address_of_common_1();
		String_t* L_4 = pb_Edge_ToString_m372592668((pb_Edge_t1665968824 *)L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		pb_EdgeLookup_t1945391737 * L_6 = __this->get_edge_0();
		NullCheck(L_6);
		pb_Edge_t1665968824 * L_7 = L_6->get_address_of_local_0();
		String_t* L_8 = pb_Edge_ToString_m372592668((pb_Edge_t1665968824 *)L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		pb_WingedEdge_t1011255431 * L_10 = __this->get_opposite_4();
		G_B1_0 = 2;
		G_B1_1 = L_9;
		G_B1_2 = L_9;
		G_B1_3 = _stringLiteral78144138;
		if (L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_9;
			G_B2_2 = L_9;
			G_B2_3 = _stringLiteral78144138;
			goto IL_0055;
		}
	}
	{
		G_B3_0 = _stringLiteral1202628576;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0065;
	}

IL_0055:
	{
		pb_WingedEdge_t1011255431 * L_11 = __this->get_opposite_4();
		NullCheck(L_11);
		pb_EdgeLookup_t1945391737 * L_12 = L_11->get_edge_0();
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0065:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t2843939325* L_14 = G_B3_3;
		pb_Face_t1264560821 * L_15 = __this->get_face_1();
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m630303134(NULL /*static, unused*/, G_B3_4, L_14, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_007f;
	}

IL_007f:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
// System.Int32[] ProBuilder.Core.pb_WingedEdge::MakeQuad(ProBuilder.Core.pb_WingedEdge,ProBuilder.Core.pb_WingedEdge)
extern "C"  Int32U5BU5D_t385246372* pb_WingedEdge_MakeQuad_m4068909805 (RuntimeObject * __this /* static, unused */, pb_WingedEdge_t1011255431 * ___left0, pb_WingedEdge_t1011255431 * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_MakeQuad_m4068909805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	pb_EdgeLookupU5BU5D_t2489130884* V_1 = NULL;
	Int32U5BU5D_t385246372* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	pb_EdgeLookupU5BU5D_t2489130884* V_7 = NULL;
	int32_t V_8 = 0;
	Int32U5BU5D_t385246372* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		pb_WingedEdge_t1011255431 * L_0 = ___left0;
		NullCheck(L_0);
		int32_t L_1 = pb_WingedEdge_Count_m226944167(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0019;
		}
	}
	{
		pb_WingedEdge_t1011255431 * L_2 = ___right1;
		NullCheck(L_2);
		int32_t L_3 = pb_WingedEdge_Count_m226944167(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0020;
		}
	}

IL_0019:
	{
		V_0 = (Int32U5BU5D_t385246372*)NULL;
		goto IL_02bd;
	}

IL_0020:
	{
		pb_EdgeLookupU5BU5D_t2489130884* L_4 = (pb_EdgeLookupU5BU5D_t2489130884*)SZArrayNew(pb_EdgeLookupU5BU5D_t2489130884_il2cpp_TypeInfo_var, (uint32_t)6);
		pb_EdgeLookupU5BU5D_t2489130884* L_5 = L_4;
		pb_WingedEdge_t1011255431 * L_6 = ___left0;
		NullCheck(L_6);
		pb_EdgeLookup_t1945391737 * L_7 = L_6->get_edge_0();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (pb_EdgeLookup_t1945391737 *)L_7);
		pb_EdgeLookupU5BU5D_t2489130884* L_8 = L_5;
		pb_WingedEdge_t1011255431 * L_9 = ___left0;
		NullCheck(L_9);
		pb_WingedEdge_t1011255431 * L_10 = L_9->get_next_2();
		NullCheck(L_10);
		pb_EdgeLookup_t1945391737 * L_11 = L_10->get_edge_0();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (pb_EdgeLookup_t1945391737 *)L_11);
		pb_EdgeLookupU5BU5D_t2489130884* L_12 = L_8;
		pb_WingedEdge_t1011255431 * L_13 = ___left0;
		NullCheck(L_13);
		pb_WingedEdge_t1011255431 * L_14 = L_13->get_next_2();
		NullCheck(L_14);
		pb_WingedEdge_t1011255431 * L_15 = L_14->get_next_2();
		NullCheck(L_15);
		pb_EdgeLookup_t1945391737 * L_16 = L_15->get_edge_0();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (pb_EdgeLookup_t1945391737 *)L_16);
		pb_EdgeLookupU5BU5D_t2489130884* L_17 = L_12;
		pb_WingedEdge_t1011255431 * L_18 = ___right1;
		NullCheck(L_18);
		pb_EdgeLookup_t1945391737 * L_19 = L_18->get_edge_0();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (pb_EdgeLookup_t1945391737 *)L_19);
		pb_EdgeLookupU5BU5D_t2489130884* L_20 = L_17;
		pb_WingedEdge_t1011255431 * L_21 = ___right1;
		NullCheck(L_21);
		pb_WingedEdge_t1011255431 * L_22 = L_21->get_next_2();
		NullCheck(L_22);
		pb_EdgeLookup_t1945391737 * L_23 = L_22->get_edge_0();
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (pb_EdgeLookup_t1945391737 *)L_23);
		pb_EdgeLookupU5BU5D_t2489130884* L_24 = L_20;
		pb_WingedEdge_t1011255431 * L_25 = ___right1;
		NullCheck(L_25);
		pb_WingedEdge_t1011255431 * L_26 = L_25->get_next_2();
		NullCheck(L_26);
		pb_WingedEdge_t1011255431 * L_27 = L_26->get_next_2();
		NullCheck(L_27);
		pb_EdgeLookup_t1945391737 * L_28 = L_27->get_edge_0();
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (pb_EdgeLookup_t1945391737 *)L_28);
		V_1 = L_24;
		Int32U5BU5D_t385246372* L_29 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)6);
		V_2 = L_29;
		V_3 = 0;
		V_4 = 0;
		goto IL_00d2;
	}

IL_008c:
	{
		V_5 = 3;
		goto IL_00c3;
	}

IL_0095:
	{
		pb_EdgeLookupU5BU5D_t2489130884* L_30 = V_1;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		pb_EdgeLookup_t1945391737 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		pb_EdgeLookupU5BU5D_t2489130884* L_34 = V_1;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		pb_EdgeLookup_t1945391737 * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		bool L_38 = pb_EdgeLookup_Equals_m1959387487(L_33, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		Int32U5BU5D_t385246372* L_40 = V_2;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int32_t)1);
		Int32U5BU5D_t385246372* L_42 = V_2;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (int32_t)1);
		goto IL_00cb;
	}

IL_00bc:
	{
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00c3:
	{
		int32_t L_45 = V_5;
		if ((((int32_t)L_45) < ((int32_t)6)))
		{
			goto IL_0095;
		}
	}

IL_00cb:
	{
		int32_t L_46 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00d2:
	{
		int32_t L_47 = V_4;
		if ((((int32_t)L_47) < ((int32_t)3)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_48 = V_3;
		if ((((int32_t)L_48) == ((int32_t)1)))
		{
			goto IL_00e8;
		}
	}
	{
		V_0 = (Int32U5BU5D_t385246372*)NULL;
		goto IL_02bd;
	}

IL_00e8:
	{
		V_6 = 0;
		pb_EdgeLookupU5BU5D_t2489130884* L_49 = (pb_EdgeLookupU5BU5D_t2489130884*)SZArrayNew(pb_EdgeLookupU5BU5D_t2489130884_il2cpp_TypeInfo_var, (uint32_t)4);
		V_7 = L_49;
		V_8 = 0;
		goto IL_0119;
	}

IL_00fb:
	{
		Int32U5BU5D_t385246372* L_50 = V_2;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((((int32_t)L_53) >= ((int32_t)1)))
		{
			goto IL_0113;
		}
	}
	{
		pb_EdgeLookupU5BU5D_t2489130884* L_54 = V_7;
		int32_t L_55 = V_6;
		int32_t L_56 = L_55;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		pb_EdgeLookupU5BU5D_t2489130884* L_57 = V_1;
		int32_t L_58 = V_8;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		pb_EdgeLookup_t1945391737 * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_60);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (pb_EdgeLookup_t1945391737 *)L_60);
	}

IL_0113:
	{
		int32_t L_61 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0119:
	{
		int32_t L_62 = V_8;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_00fb;
		}
	}
	{
		Int32U5BU5D_t385246372* L_63 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t385246372* L_64 = L_63;
		pb_EdgeLookupU5BU5D_t2489130884* L_65 = V_7;
		NullCheck(L_65);
		int32_t L_66 = 0;
		pb_EdgeLookup_t1945391737 * L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		pb_Edge_t1665968824 * L_68 = L_67->get_address_of_local_0();
		int32_t L_69 = L_68->get_x_0();
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_69);
		Int32U5BU5D_t385246372* L_70 = L_64;
		pb_EdgeLookupU5BU5D_t2489130884* L_71 = V_7;
		NullCheck(L_71);
		int32_t L_72 = 0;
		pb_EdgeLookup_t1945391737 * L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		pb_Edge_t1665968824 * L_74 = L_73->get_address_of_local_0();
		int32_t L_75 = L_74->get_y_1();
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_75);
		Int32U5BU5D_t385246372* L_76 = L_70;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)(-1));
		Int32U5BU5D_t385246372* L_77 = L_76;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)(-1));
		V_9 = L_77;
		pb_EdgeLookupU5BU5D_t2489130884* L_78 = V_7;
		NullCheck(L_78);
		int32_t L_79 = 0;
		pb_EdgeLookup_t1945391737 * L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		pb_Edge_t1665968824 * L_81 = L_80->get_address_of_common_1();
		int32_t L_82 = L_81->get_y_1();
		V_10 = L_82;
		V_11 = (-1);
		pb_EdgeLookupU5BU5D_t2489130884* L_83 = V_7;
		NullCheck(L_83);
		int32_t L_84 = 1;
		pb_EdgeLookup_t1945391737 * L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		pb_Edge_t1665968824 * L_86 = L_85->get_address_of_common_1();
		int32_t L_87 = L_86->get_x_0();
		int32_t L_88 = V_10;
		if ((!(((uint32_t)L_87) == ((uint32_t)L_88))))
		{
			goto IL_01a4;
		}
	}
	{
		Int32U5BU5D_t385246372* L_89 = V_9;
		pb_EdgeLookupU5BU5D_t2489130884* L_90 = V_7;
		NullCheck(L_90);
		int32_t L_91 = 1;
		pb_EdgeLookup_t1945391737 * L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		pb_Edge_t1665968824 * L_93 = L_92->get_address_of_local_0();
		int32_t L_94 = L_93->get_y_1();
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_94);
		pb_EdgeLookupU5BU5D_t2489130884* L_95 = V_7;
		NullCheck(L_95);
		int32_t L_96 = 1;
		pb_EdgeLookup_t1945391737 * L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		pb_Edge_t1665968824 * L_98 = L_97->get_address_of_common_1();
		int32_t L_99 = L_98->get_y_1();
		V_11 = L_99;
		goto IL_021b;
	}

IL_01a4:
	{
		pb_EdgeLookupU5BU5D_t2489130884* L_100 = V_7;
		NullCheck(L_100);
		int32_t L_101 = 2;
		pb_EdgeLookup_t1945391737 * L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		NullCheck(L_102);
		pb_Edge_t1665968824 * L_103 = L_102->get_address_of_common_1();
		int32_t L_104 = L_103->get_x_0();
		int32_t L_105 = V_10;
		if ((!(((uint32_t)L_104) == ((uint32_t)L_105))))
		{
			goto IL_01e2;
		}
	}
	{
		Int32U5BU5D_t385246372* L_106 = V_9;
		pb_EdgeLookupU5BU5D_t2489130884* L_107 = V_7;
		NullCheck(L_107);
		int32_t L_108 = 2;
		pb_EdgeLookup_t1945391737 * L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_109);
		pb_Edge_t1665968824 * L_110 = L_109->get_address_of_local_0();
		int32_t L_111 = L_110->get_y_1();
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_111);
		pb_EdgeLookupU5BU5D_t2489130884* L_112 = V_7;
		NullCheck(L_112);
		int32_t L_113 = 2;
		pb_EdgeLookup_t1945391737 * L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_114);
		pb_Edge_t1665968824 * L_115 = L_114->get_address_of_common_1();
		int32_t L_116 = L_115->get_y_1();
		V_11 = L_116;
		goto IL_021b;
	}

IL_01e2:
	{
		pb_EdgeLookupU5BU5D_t2489130884* L_117 = V_7;
		NullCheck(L_117);
		int32_t L_118 = 3;
		pb_EdgeLookup_t1945391737 * L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_119);
		pb_Edge_t1665968824 * L_120 = L_119->get_address_of_common_1();
		int32_t L_121 = L_120->get_x_0();
		int32_t L_122 = V_10;
		if ((!(((uint32_t)L_121) == ((uint32_t)L_122))))
		{
			goto IL_021b;
		}
	}
	{
		Int32U5BU5D_t385246372* L_123 = V_9;
		pb_EdgeLookupU5BU5D_t2489130884* L_124 = V_7;
		NullCheck(L_124);
		int32_t L_125 = 3;
		pb_EdgeLookup_t1945391737 * L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_126);
		pb_Edge_t1665968824 * L_127 = L_126->get_address_of_local_0();
		int32_t L_128 = L_127->get_y_1();
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_128);
		pb_EdgeLookupU5BU5D_t2489130884* L_129 = V_7;
		NullCheck(L_129);
		int32_t L_130 = 3;
		pb_EdgeLookup_t1945391737 * L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		NullCheck(L_131);
		pb_Edge_t1665968824 * L_132 = L_131->get_address_of_common_1();
		int32_t L_133 = L_132->get_y_1();
		V_11 = L_133;
	}

IL_021b:
	{
		pb_EdgeLookupU5BU5D_t2489130884* L_134 = V_7;
		NullCheck(L_134);
		int32_t L_135 = 1;
		pb_EdgeLookup_t1945391737 * L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		pb_Edge_t1665968824 * L_137 = L_136->get_address_of_common_1();
		int32_t L_138 = L_137->get_x_0();
		int32_t L_139 = V_11;
		if ((!(((uint32_t)L_138) == ((uint32_t)L_139))))
		{
			goto IL_0247;
		}
	}
	{
		Int32U5BU5D_t385246372* L_140 = V_9;
		pb_EdgeLookupU5BU5D_t2489130884* L_141 = V_7;
		NullCheck(L_141);
		int32_t L_142 = 1;
		pb_EdgeLookup_t1945391737 * L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_143);
		pb_Edge_t1665968824 * L_144 = L_143->get_address_of_local_0();
		int32_t L_145 = L_144->get_y_1();
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_145);
		goto IL_029a;
	}

IL_0247:
	{
		pb_EdgeLookupU5BU5D_t2489130884* L_146 = V_7;
		NullCheck(L_146);
		int32_t L_147 = 2;
		pb_EdgeLookup_t1945391737 * L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_148);
		pb_Edge_t1665968824 * L_149 = L_148->get_address_of_common_1();
		int32_t L_150 = L_149->get_x_0();
		int32_t L_151 = V_11;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_151))))
		{
			goto IL_0273;
		}
	}
	{
		Int32U5BU5D_t385246372* L_152 = V_9;
		pb_EdgeLookupU5BU5D_t2489130884* L_153 = V_7;
		NullCheck(L_153);
		int32_t L_154 = 2;
		pb_EdgeLookup_t1945391737 * L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		NullCheck(L_155);
		pb_Edge_t1665968824 * L_156 = L_155->get_address_of_local_0();
		int32_t L_157 = L_156->get_y_1();
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_157);
		goto IL_029a;
	}

IL_0273:
	{
		pb_EdgeLookupU5BU5D_t2489130884* L_158 = V_7;
		NullCheck(L_158);
		int32_t L_159 = 3;
		pb_EdgeLookup_t1945391737 * L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_160);
		pb_Edge_t1665968824 * L_161 = L_160->get_address_of_common_1();
		int32_t L_162 = L_161->get_x_0();
		int32_t L_163 = V_11;
		if ((!(((uint32_t)L_162) == ((uint32_t)L_163))))
		{
			goto IL_029a;
		}
	}
	{
		Int32U5BU5D_t385246372* L_164 = V_9;
		pb_EdgeLookupU5BU5D_t2489130884* L_165 = V_7;
		NullCheck(L_165);
		int32_t L_166 = 3;
		pb_EdgeLookup_t1945391737 * L_167 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		NullCheck(L_167);
		pb_Edge_t1665968824 * L_168 = L_167->get_address_of_local_0();
		int32_t L_169 = L_168->get_y_1();
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_169);
	}

IL_029a:
	{
		Int32U5BU5D_t385246372* L_170 = V_9;
		NullCheck(L_170);
		int32_t L_171 = 2;
		int32_t L_172 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		if ((((int32_t)L_172) == ((int32_t)(-1))))
		{
			goto IL_02ae;
		}
	}
	{
		Int32U5BU5D_t385246372* L_173 = V_9;
		NullCheck(L_173);
		int32_t L_174 = 3;
		int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		if ((!(((uint32_t)L_175) == ((uint32_t)(-1)))))
		{
			goto IL_02b5;
		}
	}

IL_02ae:
	{
		V_0 = (Int32U5BU5D_t385246372*)NULL;
		goto IL_02bd;
	}

IL_02b5:
	{
		Int32U5BU5D_t385246372* L_176 = V_9;
		V_0 = L_176;
		goto IL_02bd;
	}

IL_02bd:
	{
		Int32U5BU5D_t385246372* L_177 = V_0;
		return L_177;
	}
}
// ProBuilder.Core.pb_WingedEdge ProBuilder.Core.pb_WingedEdge::GetAdjacentEdgeWithCommonIndex(System.Int32)
extern "C"  pb_WingedEdge_t1011255431 * pb_WingedEdge_GetAdjacentEdgeWithCommonIndex_m155620095 (pb_WingedEdge_t1011255431 * __this, int32_t ___common0, const RuntimeMethod* method)
{
	pb_WingedEdge_t1011255431 * V_0 = NULL;
	{
		pb_WingedEdge_t1011255431 * L_0 = __this->get_next_2();
		NullCheck(L_0);
		pb_EdgeLookup_t1945391737 * L_1 = L_0->get_edge_0();
		NullCheck(L_1);
		pb_Edge_t1665968824 * L_2 = L_1->get_address_of_common_1();
		int32_t L_3 = ___common0;
		bool L_4 = pb_Edge_Contains_m483144525((pb_Edge_t1665968824 *)L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		pb_WingedEdge_t1011255431 * L_5 = __this->get_next_2();
		V_0 = L_5;
		goto IL_0056;
	}

IL_0028:
	{
		pb_WingedEdge_t1011255431 * L_6 = __this->get_previous_3();
		NullCheck(L_6);
		pb_EdgeLookup_t1945391737 * L_7 = L_6->get_edge_0();
		NullCheck(L_7);
		pb_Edge_t1665968824 * L_8 = L_7->get_address_of_common_1();
		int32_t L_9 = ___common0;
		bool L_10 = pb_Edge_Contains_m483144525((pb_Edge_t1665968824 *)L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		pb_WingedEdge_t1011255431 * L_11 = __this->get_previous_3();
		V_0 = L_11;
		goto IL_0056;
	}

IL_004f:
	{
		V_0 = (pb_WingedEdge_t1011255431 *)NULL;
		goto IL_0056;
	}

IL_0056:
	{
		pb_WingedEdge_t1011255431 * L_12 = V_0;
		return L_12;
	}
}
// System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge> ProBuilder.Core.pb_WingedEdge::SortEdgesByAdjacency(ProBuilder.Core.pb_Face)
extern "C"  List_1_t3138043566 * pb_WingedEdge_SortEdgesByAdjacency_m107630097 (RuntimeObject * __this /* static, unused */, pb_Face_t1264560821 * ___face0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_SortEdgesByAdjacency_m107630097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3138043566 * V_0 = NULL;
	List_1_t3138043566 * V_1 = NULL;
	{
		pb_Face_t1264560821 * L_0 = ___face0;
		NullCheck(L_0);
		pb_EdgeU5BU5D_t1313766249* L_1 = pb_Face_get_edges_m1379952927(L_0, /*hidden argument*/NULL);
		List_1_t3138043566 * L_2 = (List_1_t3138043566 *)il2cpp_codegen_object_new(List_1_t3138043566_il2cpp_TypeInfo_var);
		List_1__ctor_m1459085071(L_2, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1__ctor_m1459085071_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t3138043566 * L_3 = V_0;
		List_1_t3138043566 * L_4 = pb_WingedEdge_SortEdgesByAdjacency_m212285346(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		List_1_t3138043566 * L_5 = V_1;
		return L_5;
	}
}
// System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge> ProBuilder.Core.pb_WingedEdge::SortEdgesByAdjacency(System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>)
extern "C"  List_1_t3138043566 * pb_WingedEdge_SortEdgesByAdjacency_m212285346 (RuntimeObject * __this /* static, unused */, List_1_t3138043566 * ___edges0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_SortEdgesByAdjacency_m212285346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	pb_Edge_t1665968824  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	pb_Edge_t1665968824  V_4;
	memset(&V_4, 0, sizeof(V_4));
	pb_Edge_t1665968824  V_5;
	memset(&V_5, 0, sizeof(V_5));
	pb_Edge_t1665968824  V_6;
	memset(&V_6, 0, sizeof(V_6));
	List_1_t3138043566 * V_7 = NULL;
	{
		V_0 = 1;
		goto IL_0089;
	}

IL_0008:
	{
		List_1_t3138043566 * L_0 = ___edges0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		pb_Edge_t1665968824  L_2 = List_1_get_Item_m1947621579(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1947621579_RuntimeMethod_var);
		V_2 = L_2;
		int32_t L_3 = (&V_2)->get_y_1();
		V_1 = L_3;
		int32_t L_4 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		goto IL_0078;
	}

IL_0024:
	{
		List_1_t3138043566 * L_5 = ___edges0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		pb_Edge_t1665968824  L_7 = List_1_get_Item_m1947621579(L_5, L_6, /*hidden argument*/List_1_get_Item_m1947621579_RuntimeMethod_var);
		V_4 = L_7;
		int32_t L_8 = (&V_4)->get_x_0();
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0051;
		}
	}
	{
		List_1_t3138043566 * L_10 = ___edges0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		pb_Edge_t1665968824  L_12 = List_1_get_Item_m1947621579(L_10, L_11, /*hidden argument*/List_1_get_Item_m1947621579_RuntimeMethod_var);
		V_5 = L_12;
		int32_t L_13 = (&V_5)->get_y_1();
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0073;
		}
	}

IL_0051:
	{
		List_1_t3138043566 * L_15 = ___edges0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		pb_Edge_t1665968824  L_17 = List_1_get_Item_m1947621579(L_15, L_16, /*hidden argument*/List_1_get_Item_m1947621579_RuntimeMethod_var);
		V_6 = L_17;
		List_1_t3138043566 * L_18 = ___edges0;
		int32_t L_19 = V_3;
		List_1_t3138043566 * L_20 = ___edges0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		pb_Edge_t1665968824  L_22 = List_1_get_Item_m1947621579(L_20, L_21, /*hidden argument*/List_1_get_Item_m1947621579_RuntimeMethod_var);
		NullCheck(L_18);
		List_1_set_Item_m2770297842(L_18, L_19, L_22, /*hidden argument*/List_1_set_Item_m2770297842_RuntimeMethod_var);
		List_1_t3138043566 * L_23 = ___edges0;
		int32_t L_24 = V_0;
		pb_Edge_t1665968824  L_25 = V_6;
		NullCheck(L_23);
		List_1_set_Item_m2770297842(L_23, L_24, L_25, /*hidden argument*/List_1_set_Item_m2770297842_RuntimeMethod_var);
	}

IL_0073:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_27 = V_3;
		List_1_t3138043566 * L_28 = ___edges0;
		NullCheck(L_28);
		int32_t L_29 = List_1_get_Count_m17174339(L_28, /*hidden argument*/List_1_get_Count_m17174339_RuntimeMethod_var);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_31 = V_0;
		List_1_t3138043566 * L_32 = ___edges0;
		NullCheck(L_32);
		int32_t L_33 = List_1_get_Count_m17174339(L_32, /*hidden argument*/List_1_get_Count_m17174339_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0008;
		}
	}
	{
		List_1_t3138043566 * L_34 = ___edges0;
		V_7 = L_34;
		goto IL_009d;
	}

IL_009d:
	{
		List_1_t3138043566 * L_35 = V_7;
		return L_35;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>> ProBuilder.Core.pb_WingedEdge::GetSpokes(System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>)
extern "C"  Dictionary_2_t1372043504 * pb_WingedEdge_GetSpokes_m3784653400 (RuntimeObject * __this /* static, unused */, List_1_t2483330173 * ___wings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_GetSpokes_m3784653400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1372043504 * V_0 = NULL;
	List_1_t2483330173 * V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t2483330173 * V_3 = NULL;
	Dictionary_2_t1372043504 * V_4 = NULL;
	{
		Dictionary_2_t1372043504 * L_0 = (Dictionary_2_t1372043504 *)il2cpp_codegen_object_new(Dictionary_2_t1372043504_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1884255798(L_0, /*hidden argument*/Dictionary_2__ctor_m1884255798_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (List_1_t2483330173 *)NULL;
		V_2 = 0;
		goto IL_00e0;
	}

IL_0010:
	{
		Dictionary_2_t1372043504 * L_1 = V_0;
		List_1_t2483330173 * L_2 = ___wings0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		pb_WingedEdge_t1011255431 * L_4 = List_1_get_Item_m1339110848(L_2, L_3, /*hidden argument*/List_1_get_Item_m1339110848_RuntimeMethod_var);
		NullCheck(L_4);
		pb_EdgeLookup_t1945391737 * L_5 = L_4->get_edge_0();
		NullCheck(L_5);
		pb_Edge_t1665968824 * L_6 = L_5->get_address_of_common_1();
		int32_t L_7 = L_6->get_x_0();
		NullCheck(L_1);
		bool L_8 = Dictionary_2_TryGetValue_m804141079(L_1, L_7, (List_1_t2483330173 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m804141079_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		List_1_t2483330173 * L_9 = V_1;
		List_1_t2483330173 * L_10 = ___wings0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		pb_WingedEdge_t1011255431 * L_12 = List_1_get_Item_m1339110848(L_10, L_11, /*hidden argument*/List_1_get_Item_m1339110848_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_Add_m2985303161(L_9, L_12, /*hidden argument*/List_1_Add_m2985303161_RuntimeMethod_var);
		goto IL_0076;
	}

IL_0046:
	{
		Dictionary_2_t1372043504 * L_13 = V_0;
		List_1_t2483330173 * L_14 = ___wings0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		pb_WingedEdge_t1011255431 * L_16 = List_1_get_Item_m1339110848(L_14, L_15, /*hidden argument*/List_1_get_Item_m1339110848_RuntimeMethod_var);
		NullCheck(L_16);
		pb_EdgeLookup_t1945391737 * L_17 = L_16->get_edge_0();
		NullCheck(L_17);
		pb_Edge_t1665968824 * L_18 = L_17->get_address_of_common_1();
		int32_t L_19 = L_18->get_x_0();
		List_1_t2483330173 * L_20 = (List_1_t2483330173 *)il2cpp_codegen_object_new(List_1_t2483330173_il2cpp_TypeInfo_var);
		List_1__ctor_m3006004207(L_20, /*hidden argument*/List_1__ctor_m3006004207_RuntimeMethod_var);
		V_3 = L_20;
		List_1_t2483330173 * L_21 = V_3;
		List_1_t2483330173 * L_22 = ___wings0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		pb_WingedEdge_t1011255431 * L_24 = List_1_get_Item_m1339110848(L_22, L_23, /*hidden argument*/List_1_get_Item_m1339110848_RuntimeMethod_var);
		NullCheck(L_21);
		List_1_Add_m2985303161(L_21, L_24, /*hidden argument*/List_1_Add_m2985303161_RuntimeMethod_var);
		List_1_t2483330173 * L_25 = V_3;
		NullCheck(L_13);
		Dictionary_2_Add_m3833384167(L_13, L_19, L_25, /*hidden argument*/Dictionary_2_Add_m3833384167_RuntimeMethod_var);
	}

IL_0076:
	{
		Dictionary_2_t1372043504 * L_26 = V_0;
		List_1_t2483330173 * L_27 = ___wings0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		pb_WingedEdge_t1011255431 * L_29 = List_1_get_Item_m1339110848(L_27, L_28, /*hidden argument*/List_1_get_Item_m1339110848_RuntimeMethod_var);
		NullCheck(L_29);
		pb_EdgeLookup_t1945391737 * L_30 = L_29->get_edge_0();
		NullCheck(L_30);
		pb_Edge_t1665968824 * L_31 = L_30->get_address_of_common_1();
		int32_t L_32 = L_31->get_y_1();
		NullCheck(L_26);
		bool L_33 = Dictionary_2_TryGetValue_m804141079(L_26, L_32, (List_1_t2483330173 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m804141079_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_00ab;
		}
	}
	{
		List_1_t2483330173 * L_34 = V_1;
		List_1_t2483330173 * L_35 = ___wings0;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		pb_WingedEdge_t1011255431 * L_37 = List_1_get_Item_m1339110848(L_35, L_36, /*hidden argument*/List_1_get_Item_m1339110848_RuntimeMethod_var);
		NullCheck(L_34);
		List_1_Add_m2985303161(L_34, L_37, /*hidden argument*/List_1_Add_m2985303161_RuntimeMethod_var);
		goto IL_00db;
	}

IL_00ab:
	{
		Dictionary_2_t1372043504 * L_38 = V_0;
		List_1_t2483330173 * L_39 = ___wings0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		pb_WingedEdge_t1011255431 * L_41 = List_1_get_Item_m1339110848(L_39, L_40, /*hidden argument*/List_1_get_Item_m1339110848_RuntimeMethod_var);
		NullCheck(L_41);
		pb_EdgeLookup_t1945391737 * L_42 = L_41->get_edge_0();
		NullCheck(L_42);
		pb_Edge_t1665968824 * L_43 = L_42->get_address_of_common_1();
		int32_t L_44 = L_43->get_y_1();
		List_1_t2483330173 * L_45 = (List_1_t2483330173 *)il2cpp_codegen_object_new(List_1_t2483330173_il2cpp_TypeInfo_var);
		List_1__ctor_m3006004207(L_45, /*hidden argument*/List_1__ctor_m3006004207_RuntimeMethod_var);
		V_3 = L_45;
		List_1_t2483330173 * L_46 = V_3;
		List_1_t2483330173 * L_47 = ___wings0;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		pb_WingedEdge_t1011255431 * L_49 = List_1_get_Item_m1339110848(L_47, L_48, /*hidden argument*/List_1_get_Item_m1339110848_RuntimeMethod_var);
		NullCheck(L_46);
		List_1_Add_m2985303161(L_46, L_49, /*hidden argument*/List_1_Add_m2985303161_RuntimeMethod_var);
		List_1_t2483330173 * L_50 = V_3;
		NullCheck(L_38);
		Dictionary_2_Add_m3833384167(L_38, L_44, L_50, /*hidden argument*/Dictionary_2_Add_m3833384167_RuntimeMethod_var);
	}

IL_00db:
	{
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00e0:
	{
		int32_t L_52 = V_2;
		List_1_t2483330173 * L_53 = ___wings0;
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_m244620178(L_53, /*hidden argument*/List_1_get_Count_m244620178_RuntimeMethod_var);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_0010;
		}
	}
	{
		Dictionary_2_t1372043504 * L_55 = V_0;
		V_4 = L_55;
		goto IL_00f4;
	}

IL_00f4:
	{
		Dictionary_2_t1372043504 * L_56 = V_4;
		return L_56;
	}
}
// System.Collections.Generic.List`1<System.Int32> ProBuilder.Core.pb_WingedEdge::SortCommonIndicesByAdjacency(System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge>,System.Collections.Generic.HashSet`1<System.Int32>)
extern "C"  List_1_t128053199 * pb_WingedEdge_SortCommonIndicesByAdjacency_m1164422170 (RuntimeObject * __this /* static, unused */, List_1_t2483330173 * ___wings0, HashSet_1_t1515895227 * ___common1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_SortCommonIndicesByAdjacency_m1164422170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 * V_0 = NULL;
	List_1_t3138043566 * V_1 = NULL;
	List_1_t128053199 * V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	List_1_t3138043566 * G_B6_0 = NULL;
	List_1_t3138043566 * G_B5_0 = NULL;
	{
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 * L_0 = (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 *)il2cpp_codegen_object_new(U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839_il2cpp_TypeInfo_var);
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0__ctor_m1563005025(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 * L_1 = V_0;
		HashSet_1_t1515895227 * L_2 = ___common1;
		NullCheck(L_1);
		L_1->set_common_0(L_2);
		List_1_t2483330173 * L_3 = ___wings0;
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m1292611489_RuntimeMethod_var;
		Func_2_t2166437104 * L_6 = (Func_2_t2166437104 *)il2cpp_codegen_object_new(Func_2_t2166437104_il2cpp_TypeInfo_var);
		Func_2__ctor_m3495493528(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m3495493528_RuntimeMethod_var);
		RuntimeObject* L_7 = Enumerable_Where_Tispb_WingedEdge_t1011255431_m1579429792(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/Enumerable_Where_Tispb_WingedEdge_t1011255431_m1579429792_RuntimeMethod_var);
		Func_2_t3735117963 * L_8 = ((pb_WingedEdge_t1011255431_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		G_B1_0 = L_7;
		if (L_8)
		{
			G_B2_0 = L_7;
			goto IL_0038;
		}
	}
	{
		intptr_t L_9 = (intptr_t)pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__0_m1744158296_RuntimeMethod_var;
		Func_2_t3735117963 * L_10 = (Func_2_t3735117963 *)il2cpp_codegen_object_new(Func_2_t3735117963_il2cpp_TypeInfo_var);
		Func_2__ctor_m4245899875(L_10, NULL, L_9, /*hidden argument*/Func_2__ctor_m4245899875_RuntimeMethod_var);
		((pb_WingedEdge_t1011255431_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_5(L_10);
		G_B2_0 = G_B1_0;
	}

IL_0038:
	{
		Func_2_t3735117963 * L_11 = ((pb_WingedEdge_t1011255431_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		RuntimeObject* L_12 = Enumerable_Select_Tispb_WingedEdge_t1011255431_Tispb_Edge_t1665968824_m355886542(NULL /*static, unused*/, G_B2_0, L_11, /*hidden argument*/Enumerable_Select_Tispb_WingedEdge_t1011255431_Tispb_Edge_t1665968824_m355886542_RuntimeMethod_var);
		List_1_t3138043566 * L_13 = Enumerable_ToList_Tispb_Edge_t1665968824_m2039411076(NULL /*static, unused*/, L_12, /*hidden argument*/Enumerable_ToList_Tispb_Edge_t1665968824_m2039411076_RuntimeMethod_var);
		V_1 = L_13;
		List_1_t3138043566 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m17174339(L_14, /*hidden argument*/List_1_get_Count_m17174339_RuntimeMethod_var);
		U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 * L_16 = V_0;
		NullCheck(L_16);
		HashSet_1_t1515895227 * L_17 = L_16->get_common_0();
		NullCheck(L_17);
		int32_t L_18 = HashSet_1_get_Count_m1006910788(L_17, /*hidden argument*/HashSet_1_get_Count_m1006910788_RuntimeMethod_var);
		if ((((int32_t)L_15) == ((int32_t)L_18)))
		{
			goto IL_0065;
		}
	}
	{
		V_2 = (List_1_t128053199 *)NULL;
		goto IL_0098;
	}

IL_0065:
	{
		List_1_t3138043566 * L_19 = V_1;
		List_1_t3138043566 * L_20 = pb_WingedEdge_SortEdgesByAdjacency_m212285346(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Func_2_t787796887 * L_21 = ((pb_WingedEdge_t1011255431_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		G_B5_0 = L_20;
		if (L_21)
		{
			G_B6_0 = L_20;
			goto IL_0083;
		}
	}
	{
		intptr_t L_22 = (intptr_t)pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__1_m2223624609_RuntimeMethod_var;
		Func_2_t787796887 * L_23 = (Func_2_t787796887 *)il2cpp_codegen_object_new(Func_2_t787796887_il2cpp_TypeInfo_var);
		Func_2__ctor_m4237725141(L_23, NULL, L_22, /*hidden argument*/Func_2__ctor_m4237725141_RuntimeMethod_var);
		((pb_WingedEdge_t1011255431_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_6(L_23);
		G_B6_0 = G_B5_0;
	}

IL_0083:
	{
		Func_2_t787796887 * L_24 = ((pb_WingedEdge_t1011255431_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		RuntimeObject* L_25 = Enumerable_Select_Tispb_Edge_t1665968824_TisInt32_t2950945753_m2304850911(NULL /*static, unused*/, G_B6_0, L_24, /*hidden argument*/Enumerable_Select_Tispb_Edge_t1665968824_TisInt32_t2950945753_m2304850911_RuntimeMethod_var);
		List_1_t128053199 * L_26 = Enumerable_ToList_TisInt32_t2950945753_m3036595195(NULL /*static, unused*/, L_25, /*hidden argument*/Enumerable_ToList_TisInt32_t2950945753_m3036595195_RuntimeMethod_var);
		V_2 = L_26;
		goto IL_0098;
	}

IL_0098:
	{
		List_1_t128053199 * L_27 = V_2;
		return L_27;
	}
}
// System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge> ProBuilder.Core.pb_WingedEdge::GetWingedEdges(ProBuilder.Core.pb_Object,System.Boolean)
extern "C"  List_1_t2483330173 * pb_WingedEdge_GetWingedEdges_m461807673 (RuntimeObject * __this /* static, unused */, pb_Object_t4080196558 * ___pb0, bool ___oneWingPerFace1, const RuntimeMethod* method)
{
	List_1_t2483330173 * V_0 = NULL;
	{
		pb_Object_t4080196558 * L_0 = ___pb0;
		pb_Object_t4080196558 * L_1 = ___pb0;
		NullCheck(L_1);
		pb_FaceU5BU5D_t2241827544* L_2 = pb_Object_get_faces_m1131627313(L_1, /*hidden argument*/NULL);
		bool L_3 = ___oneWingPerFace1;
		List_1_t2483330173 * L_4 = pb_WingedEdge_GetWingedEdges_m911427999(NULL /*static, unused*/, L_0, (RuntimeObject*)(RuntimeObject*)L_2, L_3, (Dictionary_2_t1839659084 *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		List_1_t2483330173 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.Generic.List`1<ProBuilder.Core.pb_WingedEdge> ProBuilder.Core.pb_WingedEdge::GetWingedEdges(ProBuilder.Core.pb_Object,System.Collections.Generic.IEnumerable`1<ProBuilder.Core.pb_Face>,System.Boolean,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
extern "C"  List_1_t2483330173 * pb_WingedEdge_GetWingedEdges_m911427999 (RuntimeObject * __this /* static, unused */, pb_Object_t4080196558 * ___pb0, RuntimeObject* ___faces1, bool ___oneWingPerFace2, Dictionary_2_t1839659084 * ___sharedIndexLookup3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdge_GetWingedEdges_m911427999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1839659084 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	List_1_t2483330173 * V_2 = NULL;
	Dictionary_2_t828488639 * V_3 = NULL;
	int32_t V_4 = 0;
	pb_Face_t1264560821 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	List_1_t3138043566 * V_7 = NULL;
	int32_t V_8 = 0;
	pb_WingedEdge_t1011255431 * V_9 = NULL;
	pb_WingedEdge_t1011255431 * V_10 = NULL;
	int32_t V_11 = 0;
	pb_Edge_t1665968824  V_12;
	memset(&V_12, 0, sizeof(V_12));
	pb_WingedEdge_t1011255431 * V_13 = NULL;
	pb_WingedEdge_t1011255431 * V_14 = NULL;
	List_1_t2483330173 * V_15 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Dictionary_2_t1839659084 * G_B3_0 = NULL;
	{
		Dictionary_2_t1839659084 * L_0 = ___sharedIndexLookup3;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		pb_Object_t4080196558 * L_1 = ___pb0;
		NullCheck(L_1);
		pb_IntArrayU5BU5D_t3213957336* L_2 = pb_Object_get_sharedIndices_m2390511860(L_1, /*hidden argument*/NULL);
		Dictionary_2_t1839659084 * L_3 = pb_IntArrayUtility_ToDictionary_m3131068144(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		Dictionary_2_t1839659084 * L_4 = ___sharedIndexLookup3;
		G_B3_0 = L_4;
	}

IL_0018:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_5 = ___faces1;
		RuntimeObject* L_6 = Enumerable_Distinct_Tispb_Face_t1264560821_m2370988055(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_Distinct_Tispb_Face_t1264560821_m2370988055_RuntimeMethod_var);
		V_1 = L_6;
		List_1_t2483330173 * L_7 = (List_1_t2483330173 *)il2cpp_codegen_object_new(List_1_t2483330173_il2cpp_TypeInfo_var);
		List_1__ctor_m3006004207(L_7, /*hidden argument*/List_1__ctor_m3006004207_RuntimeMethod_var);
		V_2 = L_7;
		Dictionary_2_t828488639 * L_8 = (Dictionary_2_t828488639 *)il2cpp_codegen_object_new(Dictionary_2_t828488639_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3789757531(L_8, /*hidden argument*/Dictionary_2__ctor_m3789757531_RuntimeMethod_var);
		V_3 = L_8;
		V_4 = 0;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<ProBuilder.Core.pb_Face>::GetEnumerator() */, IEnumerable_1_t244413710_il2cpp_TypeInfo_var, L_9);
		V_6 = L_10;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0180;
		}

IL_003d:
		{
			RuntimeObject* L_11 = V_6;
			NullCheck(L_11);
			pb_Face_t1264560821 * L_12 = InterfaceFuncInvoker0< pb_Face_t1264560821 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<ProBuilder.Core.pb_Face>::get_Current() */, IEnumerator_1_t1697131289_il2cpp_TypeInfo_var, L_11);
			V_5 = L_12;
			pb_Face_t1264560821 * L_13 = V_5;
			List_1_t3138043566 * L_14 = pb_WingedEdge_SortEdgesByAdjacency_m107630097(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			V_7 = L_14;
			List_1_t3138043566 * L_15 = V_7;
			NullCheck(L_15);
			int32_t L_16 = List_1_get_Count_m17174339(L_15, /*hidden argument*/List_1_get_Count_m17174339_RuntimeMethod_var);
			V_8 = L_16;
			V_9 = (pb_WingedEdge_t1011255431 *)NULL;
			V_10 = (pb_WingedEdge_t1011255431 *)NULL;
			V_11 = 0;
			goto IL_016f;
		}

IL_0067:
		{
			List_1_t3138043566 * L_17 = V_7;
			int32_t L_18 = V_11;
			NullCheck(L_17);
			pb_Edge_t1665968824  L_19 = List_1_get_Item_m1947621579(L_17, L_18, /*hidden argument*/List_1_get_Item_m1947621579_RuntimeMethod_var);
			V_12 = L_19;
			pb_WingedEdge_t1011255431 * L_20 = (pb_WingedEdge_t1011255431 *)il2cpp_codegen_object_new(pb_WingedEdge_t1011255431_il2cpp_TypeInfo_var);
			pb_WingedEdge__ctor_m3086440956(L_20, /*hidden argument*/NULL);
			V_13 = L_20;
			pb_WingedEdge_t1011255431 * L_21 = V_13;
			Dictionary_2_t1839659084 * L_22 = V_0;
			int32_t L_23 = (&V_12)->get_x_0();
			NullCheck(L_22);
			int32_t L_24 = Dictionary_2_get_Item_m1511102918(L_22, L_23, /*hidden argument*/Dictionary_2_get_Item_m1511102918_RuntimeMethod_var);
			Dictionary_2_t1839659084 * L_25 = V_0;
			int32_t L_26 = (&V_12)->get_y_1();
			NullCheck(L_25);
			int32_t L_27 = Dictionary_2_get_Item_m1511102918(L_25, L_26, /*hidden argument*/Dictionary_2_get_Item_m1511102918_RuntimeMethod_var);
			int32_t L_28 = (&V_12)->get_x_0();
			int32_t L_29 = (&V_12)->get_y_1();
			pb_EdgeLookup_t1945391737 * L_30 = (pb_EdgeLookup_t1945391737 *)il2cpp_codegen_object_new(pb_EdgeLookup_t1945391737_il2cpp_TypeInfo_var);
			pb_EdgeLookup__ctor_m2093191428(L_30, L_24, L_27, L_28, L_29, /*hidden argument*/NULL);
			NullCheck(L_21);
			L_21->set_edge_0(L_30);
			pb_WingedEdge_t1011255431 * L_31 = V_13;
			pb_Face_t1264560821 * L_32 = V_5;
			NullCheck(L_31);
			L_31->set_face_1(L_32);
			int32_t L_33 = V_11;
			if ((((int32_t)L_33) >= ((int32_t)1)))
			{
				goto IL_00c3;
			}
		}

IL_00bf:
		{
			pb_WingedEdge_t1011255431 * L_34 = V_13;
			V_9 = L_34;
		}

IL_00c3:
		{
			int32_t L_35 = V_11;
			if ((((int32_t)L_35) <= ((int32_t)0)))
			{
				goto IL_00df;
			}
		}

IL_00cb:
		{
			pb_WingedEdge_t1011255431 * L_36 = V_13;
			pb_WingedEdge_t1011255431 * L_37 = V_10;
			NullCheck(L_36);
			L_36->set_previous_3(L_37);
			pb_WingedEdge_t1011255431 * L_38 = V_10;
			pb_WingedEdge_t1011255431 * L_39 = V_13;
			NullCheck(L_38);
			L_38->set_next_2(L_39);
		}

IL_00df:
		{
			int32_t L_40 = V_11;
			int32_t L_41 = V_8;
			if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1))))))
			{
				goto IL_00fe;
			}
		}

IL_00ea:
		{
			pb_WingedEdge_t1011255431 * L_42 = V_13;
			pb_WingedEdge_t1011255431 * L_43 = V_9;
			NullCheck(L_42);
			L_42->set_next_2(L_43);
			pb_WingedEdge_t1011255431 * L_44 = V_9;
			pb_WingedEdge_t1011255431 * L_45 = V_13;
			NullCheck(L_44);
			L_44->set_previous_3(L_45);
		}

IL_00fe:
		{
			pb_WingedEdge_t1011255431 * L_46 = V_13;
			V_10 = L_46;
			Dictionary_2_t828488639 * L_47 = V_3;
			pb_WingedEdge_t1011255431 * L_48 = V_13;
			NullCheck(L_48);
			pb_EdgeLookup_t1945391737 * L_49 = L_48->get_edge_0();
			NullCheck(L_49);
			pb_Edge_t1665968824  L_50 = L_49->get_common_1();
			NullCheck(L_47);
			bool L_51 = Dictionary_2_TryGetValue_m3047336659(L_47, L_50, (pb_WingedEdge_t1011255431 **)(&V_14), /*hidden argument*/Dictionary_2_TryGetValue_m3047336659_RuntimeMethod_var);
			if (!L_51)
			{
				goto IL_0134;
			}
		}

IL_011b:
		{
			pb_WingedEdge_t1011255431 * L_52 = V_14;
			pb_WingedEdge_t1011255431 * L_53 = V_13;
			NullCheck(L_52);
			L_52->set_opposite_4(L_53);
			pb_WingedEdge_t1011255431 * L_54 = V_13;
			pb_WingedEdge_t1011255431 * L_55 = V_14;
			NullCheck(L_54);
			L_54->set_opposite_4(L_55);
			goto IL_0152;
		}

IL_0134:
		{
			pb_WingedEdge_t1011255431 * L_56 = V_13;
			NullCheck(L_56);
			L_56->set_opposite_4((pb_WingedEdge_t1011255431 *)NULL);
			Dictionary_2_t828488639 * L_57 = V_3;
			pb_WingedEdge_t1011255431 * L_58 = V_13;
			NullCheck(L_58);
			pb_EdgeLookup_t1945391737 * L_59 = L_58->get_edge_0();
			NullCheck(L_59);
			pb_Edge_t1665968824  L_60 = L_59->get_common_1();
			pb_WingedEdge_t1011255431 * L_61 = V_13;
			NullCheck(L_57);
			Dictionary_2_Add_m702373266(L_57, L_60, L_61, /*hidden argument*/Dictionary_2_Add_m702373266_RuntimeMethod_var);
		}

IL_0152:
		{
			bool L_62 = ___oneWingPerFace2;
			if (!L_62)
			{
				goto IL_0160;
			}
		}

IL_0158:
		{
			int32_t L_63 = V_11;
			if ((((int32_t)L_63) >= ((int32_t)1)))
			{
				goto IL_0168;
			}
		}

IL_0160:
		{
			List_1_t2483330173 * L_64 = V_2;
			pb_WingedEdge_t1011255431 * L_65 = V_13;
			NullCheck(L_64);
			List_1_Add_m2985303161(L_64, L_65, /*hidden argument*/List_1_Add_m2985303161_RuntimeMethod_var);
		}

IL_0168:
		{
			int32_t L_66 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		}

IL_016f:
		{
			int32_t L_67 = V_11;
			int32_t L_68 = V_8;
			if ((((int32_t)L_67) < ((int32_t)L_68)))
			{
				goto IL_0067;
			}
		}

IL_0178:
		{
			int32_t L_69 = V_4;
			int32_t L_70 = V_8;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70));
		}

IL_0180:
		{
			RuntimeObject* L_71 = V_6;
			NullCheck(L_71);
			bool L_72 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_71);
			if (L_72)
			{
				goto IL_003d;
			}
		}

IL_018c:
		{
			IL2CPP_LEAVE(0x1A0, FINALLY_0191);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0191;
	}

FINALLY_0191:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_73 = V_6;
			if (!L_73)
			{
				goto IL_019f;
			}
		}

IL_0198:
		{
			RuntimeObject* L_74 = V_6;
			NullCheck(L_74);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_74);
		}

IL_019f:
		{
			IL2CPP_END_FINALLY(401)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(401)
	{
		IL2CPP_JUMP_TBL(0x1A0, IL_01a0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01a0:
	{
		List_1_t2483330173 * L_75 = V_2;
		V_15 = L_75;
		goto IL_01a8;
	}

IL_01a8:
	{
		List_1_t2483330173 * L_76 = V_15;
		return L_76;
	}
}
// ProBuilder.Core.pb_Edge ProBuilder.Core.pb_WingedEdge::<SortCommonIndicesByAdjacency>m__0(ProBuilder.Core.pb_WingedEdge)
extern "C"  pb_Edge_t1665968824  pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__0_m1744158296 (RuntimeObject * __this /* static, unused */, pb_WingedEdge_t1011255431 * ___y0, const RuntimeMethod* method)
{
	pb_Edge_t1665968824  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		pb_WingedEdge_t1011255431 * L_0 = ___y0;
		NullCheck(L_0);
		pb_EdgeLookup_t1945391737 * L_1 = L_0->get_edge_0();
		NullCheck(L_1);
		pb_Edge_t1665968824  L_2 = L_1->get_common_1();
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		pb_Edge_t1665968824  L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ProBuilder.Core.pb_WingedEdge::<SortCommonIndicesByAdjacency>m__1(ProBuilder.Core.pb_Edge)
extern "C"  int32_t pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Em__1_m2223624609 (RuntimeObject * __this /* static, unused */, pb_Edge_t1665968824  ___x0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (&___x0)->get_x_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
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
// System.Void ProBuilder.Core.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0::.ctor()
extern "C"  void U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0__ctor_m1563005025 (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ProBuilder.Core.pb_WingedEdge/<SortCommonIndicesByAdjacency>c__AnonStorey0::<>m__0(ProBuilder.Core.pb_WingedEdge)
extern "C"  bool U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m1292611489 (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_t3381148839 * __this, pb_WingedEdge_t1011255431 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSortCommonIndicesByAdjacencyU3Ec__AnonStorey0_U3CU3Em__0_m1292611489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		HashSet_1_t1515895227 * L_0 = __this->get_common_0();
		pb_WingedEdge_t1011255431 * L_1 = ___x0;
		NullCheck(L_1);
		pb_EdgeLookup_t1945391737 * L_2 = L_1->get_edge_0();
		NullCheck(L_2);
		pb_Edge_t1665968824 * L_3 = L_2->get_address_of_common_1();
		int32_t L_4 = L_3->get_x_0();
		NullCheck(L_0);
		bool L_5 = HashSet_1_Contains_m1005706419(L_0, L_4, /*hidden argument*/HashSet_1_Contains_m1005706419_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		HashSet_1_t1515895227 * L_6 = __this->get_common_0();
		pb_WingedEdge_t1011255431 * L_7 = ___x0;
		NullCheck(L_7);
		pb_EdgeLookup_t1945391737 * L_8 = L_7->get_edge_0();
		NullCheck(L_8);
		pb_Edge_t1665968824 * L_9 = L_8->get_address_of_common_1();
		int32_t L_10 = L_9->get_y_1();
		NullCheck(L_6);
		bool L_11 = HashSet_1_Contains_m1005706419(L_6, L_10, /*hidden argument*/HashSet_1_Contains_m1005706419_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_11));
		goto IL_003e;
	}

IL_003d:
	{
		G_B3_0 = 0;
	}

IL_003e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0044;
	}

IL_0044:
	{
		bool L_12 = V_0;
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
// System.Void ProBuilder.Core.pb_WingedEdgeEnumerator::.ctor(ProBuilder.Core.pb_WingedEdge)
extern "C"  void pb_WingedEdgeEnumerator__ctor_m956777251 (pb_WingedEdgeEnumerator_t1885848514 * __this, pb_WingedEdge_t1011255431 * ___start0, const RuntimeMethod* method)
{
	{
		__this->set__start_0((pb_WingedEdge_t1011255431 *)NULL);
		__this->set__current_1((pb_WingedEdge_t1011255431 *)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		pb_WingedEdge_t1011255431 * L_0 = ___start0;
		__this->set__start_0(L_0);
		__this->set__current_1((pb_WingedEdge_t1011255431 *)NULL);
		return;
	}
}
// System.Boolean ProBuilder.Core.pb_WingedEdgeEnumerator::MoveNext()
extern "C"  bool pb_WingedEdgeEnumerator_MoveNext_m1749150183 (pb_WingedEdgeEnumerator_t1885848514 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		pb_WingedEdge_t1011255431 * L_0 = __this->get__current_1();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		pb_WingedEdge_t1011255431 * L_1 = __this->get__start_0();
		__this->set__current_1(L_1);
		pb_WingedEdge_t1011255431 * L_2 = __this->get__current_1();
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(pb_WingedEdge_t1011255431 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_002b:
	{
		pb_WingedEdge_t1011255431 * L_3 = __this->get__current_1();
		NullCheck(L_3);
		pb_WingedEdge_t1011255431 * L_4 = L_3->get_next_2();
		__this->set__current_1(L_4);
		pb_WingedEdge_t1011255431 * L_5 = __this->get__current_1();
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		pb_WingedEdge_t1011255431 * L_6 = __this->get__current_1();
		pb_WingedEdge_t1011255431 * L_7 = __this->get__start_0();
		G_B5_0 = ((((int32_t)((((RuntimeObject*)(pb_WingedEdge_t1011255431 *)L_6) == ((RuntimeObject*)(pb_WingedEdge_t1011255431 *)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 0;
	}

IL_005c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0062;
	}

IL_0062:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Void ProBuilder.Core.pb_WingedEdgeEnumerator::Reset()
extern "C"  void pb_WingedEdgeEnumerator_Reset_m369206410 (pb_WingedEdgeEnumerator_t1885848514 * __this, const RuntimeMethod* method)
{
	{
		__this->set__current_1((pb_WingedEdge_t1011255431 *)NULL);
		return;
	}
}
// System.Object ProBuilder.Core.pb_WingedEdgeEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * pb_WingedEdgeEnumerator_System_Collections_IEnumerator_get_Current_m1719845452 (pb_WingedEdgeEnumerator_t1885848514 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		pb_WingedEdge_t1011255431 * L_0 = pb_WingedEdgeEnumerator_get_Current_m1786682037(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// ProBuilder.Core.pb_WingedEdge ProBuilder.Core.pb_WingedEdgeEnumerator::get_Current()
extern "C"  pb_WingedEdge_t1011255431 * pb_WingedEdgeEnumerator_get_Current_m1786682037 (pb_WingedEdgeEnumerator_t1885848514 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_WingedEdgeEnumerator_get_Current_m1786682037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_WingedEdge_t1011255431 * V_0 = NULL;
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
		pb_WingedEdge_t1011255431 * L_0 = __this->get__current_1();
		V_0 = L_0;
		goto IL_0016;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000e;
		throw e;
	}

CATCH_000e:
	{ // begin catch(System.IndexOutOfRangeException)
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, pb_WingedEdgeEnumerator_get_Current_m1786682037_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0016:
	{
		pb_WingedEdge_t1011255431 * L_2 = V_0;
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
// System.Void ProBuilder.Core.pb_XYZ_Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void pb_XYZ_Color__ctor_m780724332 (pb_XYZ_Color_t186003279 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		return;
	}
}
// ProBuilder.Core.pb_XYZ_Color ProBuilder.Core.pb_XYZ_Color::FromRGB(UnityEngine.Color)
extern "C"  pb_XYZ_Color_t186003279 * pb_XYZ_Color_FromRGB_m4145831970 (RuntimeObject * __this /* static, unused */, Color_t2555686324  ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_XYZ_Color_FromRGB_m4145831970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_XYZ_Color_t186003279 * V_0 = NULL;
	{
		Color_t2555686324  L_0 = ___col0;
		IL2CPP_RUNTIME_CLASS_INIT(pb_ColorUtil_t600019625_il2cpp_TypeInfo_var);
		pb_XYZ_Color_t186003279 * L_1 = pb_ColorUtil_RGBToXYZ_m4004045412(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		pb_XYZ_Color_t186003279 * L_2 = V_0;
		return L_2;
	}
}
// ProBuilder.Core.pb_XYZ_Color ProBuilder.Core.pb_XYZ_Color::FromRGB(System.Single,System.Single,System.Single)
extern "C"  pb_XYZ_Color_t186003279 * pb_XYZ_Color_FromRGB_m2664003196 (RuntimeObject * __this /* static, unused */, float ___R0, float ___G1, float ___B2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_XYZ_Color_FromRGB_m2664003196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	pb_XYZ_Color_t186003279 * V_0 = NULL;
	{
		float L_0 = ___R0;
		float L_1 = ___G1;
		float L_2 = ___B2;
		IL2CPP_RUNTIME_CLASS_INIT(pb_ColorUtil_t600019625_il2cpp_TypeInfo_var);
		pb_XYZ_Color_t186003279 * L_3 = pb_ColorUtil_RGBToXYZ_m501436423(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		pb_XYZ_Color_t186003279 * L_4 = V_0;
		return L_4;
	}
}
// System.String ProBuilder.Core.pb_XYZ_Color::ToString()
extern "C"  String_t* pb_XYZ_Color_ToString_m2983137868 (pb_XYZ_Color_t186003279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (pb_XYZ_Color_ToString_m2983137868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		float L_0 = __this->get_x_0();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_1);
		float L_3 = __this->get_y_1();
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_4);
		float L_6 = __this->get_z_2();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral3099091510, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		String_t* L_10 = V_0;
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
// System.Void ProBuilder.Core.ProGridsConditionalSnapAttribute::.ctor()
extern "C"  void ProGridsConditionalSnapAttribute__ctor_m1672498311 (ProGridsConditionalSnapAttribute_t3996304602 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void ProBuilder.Core.ProGridsNoSnapAttribute::.ctor()
extern "C"  void ProGridsNoSnapAttribute__ctor_m220440066 (ProGridsNoSnapAttribute_t871205694 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
