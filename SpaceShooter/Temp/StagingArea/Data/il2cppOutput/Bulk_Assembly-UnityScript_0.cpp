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

// spaceshipScript
struct spaceshipScript_t2455165869;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_spaceshipScript2455165869.h"
#include "AssemblyU2DUnityScript_spaceshipScript2455165869MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void spaceshipScript::.ctor()
extern "C"  void spaceshipScript__ctor_m2486484553 (spaceshipScript_t2455165869 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_speed_2(((int32_t)10));
		return;
	}
}
// System.Void spaceshipScript::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern const uint32_t spaceshipScript_Update_m1498471908_MetadataUsageId;
extern "C"  void spaceshipScript_Update_m1498471908 (spaceshipScript_t2455165869 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (spaceshipScript_Update_m1498471908_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		float L_1 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2375469974, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m2926210380(&L_2, L_0, L_1, (((float)((float)0))), /*hidden argument*/NULL);
		V_0 = L_2;
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = V_0;
		int32_t L_7 = __this->get_speed_2();
		Vector3_t4282066566  L_8 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_6, (((float)((float)L_7))), /*hidden argument*/NULL);
		float L_9 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t4282066566  L_11 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_5, L_10, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_3, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void spaceshipScript::Main()
extern "C"  void spaceshipScript_Main_m3320839508 (spaceshipScript_t2455165869 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
