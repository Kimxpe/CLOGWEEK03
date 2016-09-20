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

// BulletController
struct BulletController_t1061293662;
// enemy2
struct enemy2_t2996249002;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// System.Object
struct Il2CppObject;
// KillOtherObject
struct KillOtherObject_t3420618769;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;
// ShipKillBullet
struct ShipKillBullet_t1762063740;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// ShipKillBullet/<reload>c__Iterator0
struct U3CreloadU3Ec__Iterator0_t994016379;
// shipMove
struct shipMove_t3777694765;
// ShipShoot
struct ShipShoot_t3153714979;
// ShipShoot/<reload>c__Iterator1
struct U3CreloadU3Ec__Iterator1_t195359029;
// spawnEnemyMini
struct spawnEnemyMini_t553142980;
// spawnEnemyMini/<SpawnObject>c__Iterator5
struct U3CSpawnObjectU3Ec__Iterator5_t1581964537;
// SpawnKill
struct SpawnKill_t1630702937;
// SpawnKill/<waitSeconds>c__Iterator2
struct U3CwaitSecondsU3Ec__Iterator2_t3469533307;
// SpawnKillBiggerEnemy
struct SpawnKillBiggerEnemy_t2113583739;
// SpawnKillBiggerEnemy/<waitSeconds>c__Iterator3
struct U3CwaitSecondsU3Ec__Iterator3_t3729458974;
// SpawnKillMini
struct SpawnKillMini_t1076810064;
// SpawnKillMini/<waitSeconds>c__Iterator4
struct U3CwaitSecondsU3Ec__Iterator4_t794987956;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_BulletController1061293662.h"
#include "AssemblyU2DCSharp_BulletController1061293662MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_enemy22996249002.h"
#include "AssemblyU2DCSharp_enemy22996249002MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "AssemblyU2DCSharp_KillOtherObject3420618769.h"
#include "AssemblyU2DCSharp_KillOtherObject3420618769MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_ShipKillBullet1762063740.h"
#include "AssemblyU2DCSharp_ShipKillBullet1762063740MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_Coroutine3621161934.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "AssemblyU2DCSharp_ShipKillBullet_U3CreloadU3Ec__Ite994016379MethodDeclarations.h"
#include "AssemblyU2DCSharp_ShipKillBullet_U3CreloadU3Ec__Ite994016379.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1615819279MethodDeclarations.h"
#include "mscorlib_System_UInt3224667981.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1615819279.h"
#include "mscorlib_System_NotSupportedException1732551818MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1732551818.h"
#include "AssemblyU2DCSharp_shipMove3777694765.h"
#include "AssemblyU2DCSharp_shipMove3777694765MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "AssemblyU2DCSharp_ShipShoot3153714979.h"
#include "AssemblyU2DCSharp_ShipShoot3153714979MethodDeclarations.h"
#include "AssemblyU2DCSharp_ShipShoot_U3CreloadU3Ec__Iterator195359029MethodDeclarations.h"
#include "AssemblyU2DCSharp_ShipShoot_U3CreloadU3Ec__Iterator195359029.h"
#include "AssemblyU2DCSharp_spawnEnemyMini553142980.h"
#include "AssemblyU2DCSharp_spawnEnemyMini553142980MethodDeclarations.h"
#include "AssemblyU2DCSharp_spawnEnemyMini_U3CSpawnObjectU3E1581964537MethodDeclarations.h"
#include "AssemblyU2DCSharp_spawnEnemyMini_U3CSpawnObjectU3E1581964537.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "AssemblyU2DCSharp_SpawnKill1630702937.h"
#include "AssemblyU2DCSharp_SpawnKill1630702937MethodDeclarations.h"
#include "AssemblyU2DCSharp_SpawnKill_U3CwaitSecondsU3Ec__It3469533307MethodDeclarations.h"
#include "AssemblyU2DCSharp_SpawnKill_U3CwaitSecondsU3Ec__It3469533307.h"
#include "AssemblyU2DCSharp_SpawnKillBiggerEnemy2113583739.h"
#include "AssemblyU2DCSharp_SpawnKillBiggerEnemy2113583739MethodDeclarations.h"
#include "AssemblyU2DCSharp_SpawnKillBiggerEnemy_U3CwaitSeco3729458974MethodDeclarations.h"
#include "AssemblyU2DCSharp_SpawnKillBiggerEnemy_U3CwaitSeco3729458974.h"
#include "AssemblyU2DCSharp_SpawnKillMini1076810064.h"
#include "AssemblyU2DCSharp_SpawnKillMini1076810064MethodDeclarations.h"
#include "AssemblyU2DCSharp_SpawnKillMini_U3CwaitSecondsU3Ec_794987956MethodDeclarations.h"
#include "AssemblyU2DCSharp_SpawnKillMini_U3CwaitSecondsU3Ec_794987956.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, method) ((  Rigidbody2D_t1743771669 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(__this, method) ((  Rigidbody2D_t1743771669 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BulletController::.ctor()
extern "C"  void BulletController__ctor_m1786405373 (BulletController_t1061293662 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BulletController::Start()
extern "C"  void BulletController_Start_m733543165 (BulletController_t1061293662 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BulletController::Update()
extern "C"  void BulletController_Update_m1270853808 (BulletController_t1061293662 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector2_t4282066565  L_1 = Vector2_get_up_m1197831267(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_speed_2();
		Vector2_t4282066565  L_3 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		float L_4 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_5 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Transform_Translate_m2849099360(L_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void enemy2::.ctor()
extern "C"  void enemy2__ctor_m1139442225 (enemy2_t2996249002 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void enemy2::Start()
extern Il2CppCodeGenString* _stringLiteral2393081601;
extern const uint32_t enemy2_Start_m86580017_MetadataUsageId;
extern "C"  void enemy2_Start_m86580017 (enemy2_t2996249002 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (enemy2_Start_m86580017_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral2393081601, /*hidden argument*/NULL);
		Transform_t1659122786 * L_1 = GameObject_get_transform_m1278640159(L_0, /*hidden argument*/NULL);
		__this->set_player_3(L_1);
		return;
	}
}
// System.Void enemy2::FixedUpdate()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var;
extern const uint32_t enemy2_FixedUpdate_m211564268_MetadataUsageId;
extern "C"  void enemy2_FixedUpdate_m211564268 (enemy2_t2996249002 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (enemy2_FixedUpdate_m211564268_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t4282066566  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t1659122786 * L_0 = __this->get_player_3();
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(L_0, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_y_2();
		Transform_t1659122786 * L_7 = __this->get_player_3();
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(L_7, /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = Transform_get_position_m2211398607(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10 = (&V_3)->get_x_1();
		Transform_t1659122786 * L_11 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_position_m2211398607(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		float L_13 = (&V_4)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_14 = atan2f(((float)((float)L_3-(float)L_6)), ((float)((float)L_10-(float)L_13)));
		V_0 = ((float)((float)((float)((float)L_14*(float)(57.29578f)))-(float)(90.0f)));
		Transform_t1659122786 * L_15 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_16 = V_0;
		Vector3_t4282066566  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m2926210380(&L_17, (0.0f), (0.0f), L_16, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m1704681314(L_15, L_17, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_18 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		GameObject_t3674682005 * L_19 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_20 = GameObject_get_transform_m1278640159(L_19, /*hidden argument*/NULL);
		Vector3_t4282066566  L_21 = Transform_get_up_m297874561(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_speed_2();
		Vector3_t4282066566  L_23 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Vector2_t4282066565  L_24 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m312397382(L_18, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KillOtherObject::.ctor()
extern "C"  void KillOtherObject__ctor_m905300602 (KillOtherObject_t3420618769 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KillOtherObject::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2249486;
extern Il2CppCodeGenString* _stringLiteral233716657;
extern const uint32_t KillOtherObject_OnCollisionEnter2D_m1819410916_MetadataUsageId;
extern "C"  void KillOtherObject_OnCollisionEnter2D_m1819410916 (KillOtherObject_t3420618769 * __this, Collision2D_t2859305914 * ___otherCollider0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KillOtherObject_OnCollisionEnter2D_m1819410916_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral2249486, /*hidden argument*/NULL);
		Collision2D_t2859305914 * L_0 = ___otherCollider0;
		GameObject_t3674682005 * L_1 = Collision2D_get_gameObject_m718845954(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3153977471(L_1, _stringLiteral233716657, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Collision2D_t2859305914 * L_4 = ___otherCollider0;
		GameObject_t3674682005 * L_5 = Collision2D_get_gameObject_m718845954(L_4, /*hidden argument*/NULL);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void ShipKillBullet::.ctor()
extern "C"  void ShipKillBullet__ctor_m1621443231 (ShipKillBullet_t1762063740 * __this, const MethodInfo* method)
{
	{
		__this->set_canFire_3((bool)1);
		__this->set_rateOfFire_4((0.5f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShipKillBullet::Start()
extern "C"  void ShipKillBullet_Start_m568581023 (ShipKillBullet_t1762063740 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ShipKillBullet::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3360326041;
extern const uint32_t ShipKillBullet_Update_m451994702_MetadataUsageId;
extern "C"  void ShipKillBullet_Update_m451994702 (ShipKillBullet_t1762063740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ShipKillBullet_Update_m451994702_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)101), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		bool L_1 = __this->get_canFire_3();
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		__this->set_canFire_3((bool)0);
		MonoBehaviour_StartCoroutine_m2272783641(__this, _stringLiteral3360326041, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = __this->get_bullet_2();
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_6 = Transform_get_rotation_m11483428(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_7 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_2, L_4, L_6, /*hidden argument*/NULL);
		V_0 = ((GameObject_t3674682005 *)IsInstSealed(L_7, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_8 = V_0;
		Rigidbody2D_t1743771669 * L_9 = GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var);
		Vector3_t4282066566  L_10 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_11 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m312397382(L_9, L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Collections.IEnumerator ShipKillBullet::reload()
extern Il2CppClass* U3CreloadU3Ec__Iterator0_t994016379_il2cpp_TypeInfo_var;
extern const uint32_t ShipKillBullet_reload_m2239363910_MetadataUsageId;
extern "C"  Il2CppObject * ShipKillBullet_reload_m2239363910 (ShipKillBullet_t1762063740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ShipKillBullet_reload_m2239363910_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CreloadU3Ec__Iterator0_t994016379 * V_0 = NULL;
	{
		U3CreloadU3Ec__Iterator0_t994016379 * L_0 = (U3CreloadU3Ec__Iterator0_t994016379 *)il2cpp_codegen_object_new(U3CreloadU3Ec__Iterator0_t994016379_il2cpp_TypeInfo_var);
		U3CreloadU3Ec__Iterator0__ctor_m1970315600(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CreloadU3Ec__Iterator0_t994016379 * L_1 = V_0;
		L_1->set_U3CU3Ef__this_2(__this);
		U3CreloadU3Ec__Iterator0_t994016379 * L_2 = V_0;
		return L_2;
	}
}
// System.Void ShipKillBullet/<reload>c__Iterator0::.ctor()
extern "C"  void U3CreloadU3Ec__Iterator0__ctor_m1970315600 (U3CreloadU3Ec__Iterator0_t994016379 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object ShipKillBullet/<reload>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CreloadU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m121099906 (U3CreloadU3Ec__Iterator0_t994016379 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object ShipKillBullet/<reload>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CreloadU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m530259478 (U3CreloadU3Ec__Iterator0_t994016379 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean ShipKillBullet/<reload>c__Iterator0::MoveNext()
extern Il2CppClass* WaitForSeconds_t1615819279_il2cpp_TypeInfo_var;
extern const uint32_t U3CreloadU3Ec__Iterator0_MoveNext_m2952459428_MetadataUsageId;
extern "C"  bool U3CreloadU3Ec__Iterator0_MoveNext_m2952459428 (U3CreloadU3Ec__Iterator0_t994016379 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CreloadU3Ec__Iterator0_MoveNext_m2952459428_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0056;
	}

IL_0021:
	{
		ShipKillBullet_t1762063740 * L_2 = __this->get_U3CU3Ef__this_2();
		float L_3 = L_2->get_rateOfFire_4();
		WaitForSeconds_t1615819279 * L_4 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U24current_1(L_4);
		__this->set_U24PC_0(1);
		goto IL_0058;
	}

IL_0043:
	{
		ShipKillBullet_t1762063740 * L_5 = __this->get_U3CU3Ef__this_2();
		L_5->set_canFire_3((bool)1);
		__this->set_U24PC_0((-1));
	}

IL_0056:
	{
		return (bool)0;
	}

IL_0058:
	{
		return (bool)1;
	}
	// Dead block : IL_005a: ldloc.1
}
// System.Void ShipKillBullet/<reload>c__Iterator0::Dispose()
extern "C"  void U3CreloadU3Ec__Iterator0_Dispose_m3585964429 (U3CreloadU3Ec__Iterator0_t994016379 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void ShipKillBullet/<reload>c__Iterator0::Reset()
extern Il2CppClass* NotSupportedException_t1732551818_il2cpp_TypeInfo_var;
extern const uint32_t U3CreloadU3Ec__Iterator0_Reset_m3911715837_MetadataUsageId;
extern "C"  void U3CreloadU3Ec__Iterator0_Reset_m3911715837 (U3CreloadU3Ec__Iterator0_t994016379 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CreloadU3Ec__Iterator0_Reset_m3911715837_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1732551818 * L_0 = (NotSupportedException_t1732551818 *)il2cpp_codegen_object_new(NotSupportedException_t1732551818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void shipMove::.ctor()
extern "C"  void shipMove__ctor_m2850821390 (shipMove_t3777694765 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shipMove::Start()
extern "C"  void shipMove_Start_m1797959182 (shipMove_t3777694765 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void shipMove::Update()
extern "C"  void shipMove_Update_m4202979263 (shipMove_t3777694765 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void shipMove::FixedUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2375469974;
extern const uint32_t shipMove_FixedUpdate_m644444169_MetadataUsageId;
extern "C"  void shipMove_FixedUpdate_m644444169 (shipMove_t3777694765 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (shipMove_FixedUpdate_m644444169_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t1553702882  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Camera_t2727095145 * L_0 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Vector3_t4282066566  L_1 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Camera_ScreenToWorldPoint_m1572306334(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = V_0;
		Vector3_t4282066566  L_6 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = Vector3_get_forward_m1039372701(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_8 = Quaternion_LookRotation_m2869326048(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Transform_t1659122786 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_10 = V_1;
		Transform_set_rotation_m1525803229(L_9, L_10, /*hidden argument*/NULL);
		Transform_t1659122786 * L_11 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_12 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_13 = Transform_get_eulerAngles_m1058084741(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		float L_14 = (&V_3)->get_z_3();
		Vector3_t4282066566  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m2926210380(&L_15, (0.0f), (0.0f), L_14, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m1704681314(L_11, L_15, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_16 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		Rigidbody2D_set_angularVelocity_m1393720209(L_16, (0.0f), /*hidden argument*/NULL);
		float L_17 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2375469974, /*hidden argument*/NULL);
		V_2 = L_17;
		Rigidbody2D_t1743771669 * L_18 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		GameObject_t3674682005 * L_19 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_20 = GameObject_get_transform_m1278640159(L_19, /*hidden argument*/NULL);
		Vector3_t4282066566  L_21 = Transform_get_up_m297874561(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_speed_2();
		Vector3_t4282066566  L_23 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		float L_24 = V_2;
		Vector3_t4282066566  L_25 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		Vector2_t4282066565  L_26 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m312397382(L_18, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShipShoot::.ctor()
extern "C"  void ShipShoot__ctor_m2295762344 (ShipShoot_t3153714979 * __this, const MethodInfo* method)
{
	{
		__this->set_canFire_3((bool)1);
		__this->set_rateOfFire_4((0.5f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShipShoot::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3360326041;
extern const uint32_t ShipShoot_Update_m4176018021_MetadataUsageId;
extern "C"  void ShipShoot_Update_m4176018021 (ShipShoot_t3153714979 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ShipShoot_Update_m4176018021_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m1349175653(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		bool L_1 = __this->get_canFire_3();
		if (!L_1)
		{
			goto IL_0076;
		}
	}
	{
		__this->set_canFire_3((bool)0);
		MonoBehaviour_StartCoroutine_m2272783641(__this, _stringLiteral3360326041, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = __this->get_bullet_2();
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_6 = Transform_get_rotation_m11483428(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_7 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_2, L_4, L_6, /*hidden argument*/NULL);
		V_0 = ((GameObject_t3674682005 *)IsInstSealed(L_7, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_8 = V_0;
		Rigidbody2D_t1743771669 * L_9 = GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var);
		GameObject_t3674682005 * L_10 = V_0;
		Transform_t1659122786 * L_11 = GameObject_get_transform_m1278640159(L_10, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_forward_m877665793(L_11, /*hidden argument*/NULL);
		Vector3_t4282066566  L_13 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_12, (100.0f), /*hidden argument*/NULL);
		Vector2_t4282066565  L_14 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m312397382(L_9, L_14, /*hidden argument*/NULL);
	}

IL_0076:
	{
		return;
	}
}
// System.Collections.IEnumerator ShipShoot::reload()
extern Il2CppClass* U3CreloadU3Ec__Iterator1_t195359029_il2cpp_TypeInfo_var;
extern const uint32_t ShipShoot_reload_m1365571533_MetadataUsageId;
extern "C"  Il2CppObject * ShipShoot_reload_m1365571533 (ShipShoot_t3153714979 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ShipShoot_reload_m1365571533_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CreloadU3Ec__Iterator1_t195359029 * V_0 = NULL;
	{
		U3CreloadU3Ec__Iterator1_t195359029 * L_0 = (U3CreloadU3Ec__Iterator1_t195359029 *)il2cpp_codegen_object_new(U3CreloadU3Ec__Iterator1_t195359029_il2cpp_TypeInfo_var);
		U3CreloadU3Ec__Iterator1__ctor_m3800643334(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CreloadU3Ec__Iterator1_t195359029 * L_1 = V_0;
		L_1->set_U3CU3Ef__this_2(__this);
		U3CreloadU3Ec__Iterator1_t195359029 * L_2 = V_0;
		return L_2;
	}
}
// System.Void ShipShoot/<reload>c__Iterator1::.ctor()
extern "C"  void U3CreloadU3Ec__Iterator1__ctor_m3800643334 (U3CreloadU3Ec__Iterator1_t195359029 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object ShipShoot/<reload>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CreloadU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2584622038 (U3CreloadU3Ec__Iterator1_t195359029 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object ShipShoot/<reload>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CreloadU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3764298602 (U3CreloadU3Ec__Iterator1_t195359029 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean ShipShoot/<reload>c__Iterator1::MoveNext()
extern Il2CppClass* WaitForSeconds_t1615819279_il2cpp_TypeInfo_var;
extern const uint32_t U3CreloadU3Ec__Iterator1_MoveNext_m2956273174_MetadataUsageId;
extern "C"  bool U3CreloadU3Ec__Iterator1_MoveNext_m2956273174 (U3CreloadU3Ec__Iterator1_t195359029 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CreloadU3Ec__Iterator1_MoveNext_m2956273174_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0056;
	}

IL_0021:
	{
		ShipShoot_t3153714979 * L_2 = __this->get_U3CU3Ef__this_2();
		float L_3 = L_2->get_rateOfFire_4();
		WaitForSeconds_t1615819279 * L_4 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U24current_1(L_4);
		__this->set_U24PC_0(1);
		goto IL_0058;
	}

IL_0043:
	{
		ShipShoot_t3153714979 * L_5 = __this->get_U3CU3Ef__this_2();
		L_5->set_canFire_3((bool)1);
		__this->set_U24PC_0((-1));
	}

IL_0056:
	{
		return (bool)0;
	}

IL_0058:
	{
		return (bool)1;
	}
	// Dead block : IL_005a: ldloc.1
}
// System.Void ShipShoot/<reload>c__Iterator1::Dispose()
extern "C"  void U3CreloadU3Ec__Iterator1_Dispose_m1594325443 (U3CreloadU3Ec__Iterator1_t195359029 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void ShipShoot/<reload>c__Iterator1::Reset()
extern Il2CppClass* NotSupportedException_t1732551818_il2cpp_TypeInfo_var;
extern const uint32_t U3CreloadU3Ec__Iterator1_Reset_m1447076275_MetadataUsageId;
extern "C"  void U3CreloadU3Ec__Iterator1_Reset_m1447076275 (U3CreloadU3Ec__Iterator1_t195359029 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CreloadU3Ec__Iterator1_Reset_m1447076275_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1732551818 * L_0 = (NotSupportedException_t1732551818 *)il2cpp_codegen_object_new(NotSupportedException_t1732551818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void spawnEnemyMini::.ctor()
extern "C"  void spawnEnemyMini__ctor_m520838743 (spawnEnemyMini_t553142980 * __this, const MethodInfo* method)
{
	{
		__this->set_minTime_3((1.0f));
		__this->set_maxTime_4((4.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator spawnEnemyMini::SpawnObject(System.Int32,System.Single)
extern Il2CppClass* U3CSpawnObjectU3Ec__Iterator5_t1581964537_il2cpp_TypeInfo_var;
extern const uint32_t spawnEnemyMini_SpawnObject_m310715133_MetadataUsageId;
extern "C"  Il2CppObject * spawnEnemyMini_SpawnObject_m310715133 (spawnEnemyMini_t553142980 * __this, int32_t ___index0, float ___seconds1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (spawnEnemyMini_SpawnObject_m310715133_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CSpawnObjectU3Ec__Iterator5_t1581964537 * V_0 = NULL;
	{
		U3CSpawnObjectU3Ec__Iterator5_t1581964537 * L_0 = (U3CSpawnObjectU3Ec__Iterator5_t1581964537 *)il2cpp_codegen_object_new(U3CSpawnObjectU3Ec__Iterator5_t1581964537_il2cpp_TypeInfo_var);
		U3CSpawnObjectU3Ec__Iterator5__ctor_m1274939842(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSpawnObjectU3Ec__Iterator5_t1581964537 * L_1 = V_0;
		float L_2 = ___seconds1;
		L_1->set_seconds_0(L_2);
		U3CSpawnObjectU3Ec__Iterator5_t1581964537 * L_3 = V_0;
		int32_t L_4 = ___index0;
		L_3->set_index_1(L_4);
		U3CSpawnObjectU3Ec__Iterator5_t1581964537 * L_5 = V_0;
		float L_6 = ___seconds1;
		L_5->set_U3CU24U3Eseconds_4(L_6);
		U3CSpawnObjectU3Ec__Iterator5_t1581964537 * L_7 = V_0;
		int32_t L_8 = ___index0;
		L_7->set_U3CU24U3Eindex_5(L_8);
		U3CSpawnObjectU3Ec__Iterator5_t1581964537 * L_9 = V_0;
		L_9->set_U3CU3Ef__this_6(__this);
		U3CSpawnObjectU3Ec__Iterator5_t1581964537 * L_10 = V_0;
		return L_10;
	}
}
// System.Void spawnEnemyMini::Update()
extern "C"  void spawnEnemyMini_Update_m692993942 (spawnEnemyMini_t553142980 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_isSpawning_2();
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_isSpawning_2((bool)1);
		GameObjectU5BU5D_t2662109048* L_1 = __this->get_enemies_5();
		int32_t L_2 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		float L_4 = __this->get_minTime_3();
		float L_5 = __this->get_maxTime_4();
		float L_6 = Random_Range_m3362417303(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Il2CppObject * L_7 = spawnEnemyMini_SpawnObject_m310715133(__this, L_3, L_6, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2135303124(__this, L_7, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void spawnEnemyMini/<SpawnObject>c__Iterator5::.ctor()
extern "C"  void U3CSpawnObjectU3Ec__Iterator5__ctor_m1274939842 (U3CSpawnObjectU3Ec__Iterator5_t1581964537 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object spawnEnemyMini/<SpawnObject>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CSpawnObjectU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2248859738 (U3CSpawnObjectU3Ec__Iterator5_t1581964537 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object spawnEnemyMini/<SpawnObject>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CSpawnObjectU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m262985710 (U3CSpawnObjectU3Ec__Iterator5_t1581964537 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Boolean spawnEnemyMini/<SpawnObject>c__Iterator5::MoveNext()
extern Il2CppClass* WaitForSeconds_t1615819279_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t U3CSpawnObjectU3Ec__Iterator5_MoveNext_m1964250_MetadataUsageId;
extern "C"  bool U3CSpawnObjectU3Ec__Iterator5_MoveNext_m1964250 (U3CSpawnObjectU3Ec__Iterator5_t1581964537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CSpawnObjectU3Ec__Iterator5_MoveNext_m1964250_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0089;
	}

IL_0021:
	{
		float L_2 = __this->get_seconds_0();
		WaitForSeconds_t1615819279 * L_3 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_3(L_3);
		__this->set_U24PC_2(1);
		goto IL_008b;
	}

IL_003e:
	{
		spawnEnemyMini_t553142980 * L_4 = __this->get_U3CU3Ef__this_6();
		GameObjectU5BU5D_t2662109048* L_5 = L_4->get_enemies_5();
		int32_t L_6 = __this->get_index_1();
		int32_t L_7 = L_6;
		GameObject_t3674682005 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		spawnEnemyMini_t553142980 * L_9 = __this->get_U3CU3Ef__this_6();
		Transform_t1659122786 * L_10 = Component_get_transform_m4257140443(L_9, /*hidden argument*/NULL);
		Vector3_t4282066566  L_11 = Transform_get_position_m2211398607(L_10, /*hidden argument*/NULL);
		spawnEnemyMini_t553142980 * L_12 = __this->get_U3CU3Ef__this_6();
		Transform_t1659122786 * L_13 = Component_get_transform_m4257140443(L_12, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_14 = Transform_get_rotation_m11483428(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_8, L_11, L_14, /*hidden argument*/NULL);
		spawnEnemyMini_t553142980 * L_15 = __this->get_U3CU3Ef__this_6();
		L_15->set_isSpawning_2((bool)0);
		__this->set_U24PC_2((-1));
	}

IL_0089:
	{
		return (bool)0;
	}

IL_008b:
	{
		return (bool)1;
	}
	// Dead block : IL_008d: ldloc.1
}
// System.Void spawnEnemyMini/<SpawnObject>c__Iterator5::Dispose()
extern "C"  void U3CSpawnObjectU3Ec__Iterator5_Dispose_m1049791871 (U3CSpawnObjectU3Ec__Iterator5_t1581964537 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_2((-1));
		return;
	}
}
// System.Void spawnEnemyMini/<SpawnObject>c__Iterator5::Reset()
extern Il2CppClass* NotSupportedException_t1732551818_il2cpp_TypeInfo_var;
extern const uint32_t U3CSpawnObjectU3Ec__Iterator5_Reset_m3216340079_MetadataUsageId;
extern "C"  void U3CSpawnObjectU3Ec__Iterator5_Reset_m3216340079 (U3CSpawnObjectU3Ec__Iterator5_t1581964537 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CSpawnObjectU3Ec__Iterator5_Reset_m3216340079_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1732551818 * L_0 = (NotSupportedException_t1732551818 *)il2cpp_codegen_object_new(NotSupportedException_t1732551818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void SpawnKill::.ctor()
extern "C"  void SpawnKill__ctor_m3036642354 (SpawnKill_t1630702937 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnKill::Start()
extern Il2CppCodeGenString* _stringLiteral3301752045;
extern const uint32_t SpawnKill_Start_m1983780146_MetadataUsageId;
extern "C"  void SpawnKill_Start_m1983780146 (SpawnKill_t1630702937 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpawnKill_Start_m1983780146_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_InvokeRepeating_m1115468640(__this, _stringLiteral3301752045, (0.0f), (3.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnKill::SpawnEnemy()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t SpawnKill_SpawnEnemy_m2276156319_MetadataUsageId;
extern "C"  void SpawnKill_SpawnEnemy_m2276156319 (SpawnKill_t1630702937 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpawnKill_SpawnEnemy_m2276156319_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = __this->get_enemy1_2();
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_4 = Transform_get_rotation_m11483428(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SpawnKill::waitSeconds()
extern Il2CppClass* U3CwaitSecondsU3Ec__Iterator2_t3469533307_il2cpp_TypeInfo_var;
extern const uint32_t SpawnKill_waitSeconds_m1354115394_MetadataUsageId;
extern "C"  Il2CppObject * SpawnKill_waitSeconds_m1354115394 (SpawnKill_t1630702937 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpawnKill_waitSeconds_m1354115394_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CwaitSecondsU3Ec__Iterator2_t3469533307 * V_0 = NULL;
	{
		U3CwaitSecondsU3Ec__Iterator2_t3469533307 * L_0 = (U3CwaitSecondsU3Ec__Iterator2_t3469533307 *)il2cpp_codegen_object_new(U3CwaitSecondsU3Ec__Iterator2_t3469533307_il2cpp_TypeInfo_var);
		U3CwaitSecondsU3Ec__Iterator2__ctor_m1085521232(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwaitSecondsU3Ec__Iterator2_t3469533307 * L_1 = V_0;
		L_1->set_U3CU3Ef__this_2(__this);
		U3CwaitSecondsU3Ec__Iterator2_t3469533307 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SpawnKill/<waitSeconds>c__Iterator2::.ctor()
extern "C"  void U3CwaitSecondsU3Ec__Iterator2__ctor_m1085521232 (U3CwaitSecondsU3Ec__Iterator2_t3469533307 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SpawnKill/<waitSeconds>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CwaitSecondsU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1101937282 (U3CwaitSecondsU3Ec__Iterator2_t3469533307 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object SpawnKill/<waitSeconds>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CwaitSecondsU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m995721750 (U3CwaitSecondsU3Ec__Iterator2_t3469533307 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean SpawnKill/<waitSeconds>c__Iterator2::MoveNext()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* WaitForSeconds_t1615819279_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitSecondsU3Ec__Iterator2_MoveNext_m2257737892_MetadataUsageId;
extern "C"  bool U3CwaitSecondsU3Ec__Iterator2_MoveNext_m2257737892 (U3CwaitSecondsU3Ec__Iterator2_t3469533307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitSecondsU3Ec__Iterator2_MoveNext_m2257737892_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_007d;
		}
		if (L_1 == 1)
		{
			goto IL_00ca;
		}
		if (L_1 == 2)
		{
			goto IL_0117;
		}
		if (L_1 == 3)
		{
			goto IL_0164;
		}
		if (L_1 == 4)
		{
			goto IL_01b1;
		}
		if (L_1 == 5)
		{
			goto IL_01fe;
		}
		if (L_1 == 6)
		{
			goto IL_024b;
		}
		if (L_1 == 7)
		{
			goto IL_0298;
		}
		if (L_1 == 8)
		{
			goto IL_02e5;
		}
		if (L_1 == 9)
		{
			goto IL_0333;
		}
		if (L_1 == 10)
		{
			goto IL_0381;
		}
		if (L_1 == 11)
		{
			goto IL_03cf;
		}
		if (L_1 == 12)
		{
			goto IL_041d;
		}
		if (L_1 == 13)
		{
			goto IL_046b;
		}
		if (L_1 == 14)
		{
			goto IL_04b9;
		}
		if (L_1 == 15)
		{
			goto IL_0507;
		}
		if (L_1 == 16)
		{
			goto IL_0555;
		}
		if (L_1 == 17)
		{
			goto IL_05a3;
		}
		if (L_1 == 18)
		{
			goto IL_05f1;
		}
		if (L_1 == 19)
		{
			goto IL_063f;
		}
		if (L_1 == 20)
		{
			goto IL_068d;
		}
		if (L_1 == 21)
		{
			goto IL_06db;
		}
		if (L_1 == 22)
		{
			goto IL_0729;
		}
		if (L_1 == 23)
		{
			goto IL_0777;
		}
		if (L_1 == 24)
		{
			goto IL_07c5;
		}
	}
	{
		goto IL_07fd;
	}

IL_007d:
	{
		SpawnKill_t1630702937 * L_2 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_3 = L_2->get_enemy1_2();
		SpawnKill_t1630702937 * L_4 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(L_4, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_7 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(L_7, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_9 = Transform_get_rotation_m11483428(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_3, L_6, L_9, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_10 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_10, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_10);
		__this->set_U24PC_0(1);
		goto IL_07ff;
	}

IL_00ca:
	{
		SpawnKill_t1630702937 * L_11 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_12 = L_11->get_enemy1_2();
		SpawnKill_t1630702937 * L_13 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_14 = Component_get_transform_m4257140443(L_13, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = Transform_get_position_m2211398607(L_14, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_16 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_17 = Component_get_transform_m4257140443(L_16, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_18 = Transform_get_rotation_m11483428(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_12, L_15, L_18, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_19 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_19, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_19);
		__this->set_U24PC_0(2);
		goto IL_07ff;
	}

IL_0117:
	{
		SpawnKill_t1630702937 * L_20 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_21 = L_20->get_enemy1_2();
		SpawnKill_t1630702937 * L_22 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_23 = Component_get_transform_m4257140443(L_22, /*hidden argument*/NULL);
		Vector3_t4282066566  L_24 = Transform_get_position_m2211398607(L_23, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_25 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_26 = Component_get_transform_m4257140443(L_25, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_27 = Transform_get_rotation_m11483428(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_21, L_24, L_27, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_28 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_28, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_28);
		__this->set_U24PC_0(3);
		goto IL_07ff;
	}

IL_0164:
	{
		SpawnKill_t1630702937 * L_29 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_30 = L_29->get_enemy1_2();
		SpawnKill_t1630702937 * L_31 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_32 = Component_get_transform_m4257140443(L_31, /*hidden argument*/NULL);
		Vector3_t4282066566  L_33 = Transform_get_position_m2211398607(L_32, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_34 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_35 = Component_get_transform_m4257140443(L_34, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_36 = Transform_get_rotation_m11483428(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_30, L_33, L_36, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_37 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_37, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_37);
		__this->set_U24PC_0(4);
		goto IL_07ff;
	}

IL_01b1:
	{
		SpawnKill_t1630702937 * L_38 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_39 = L_38->get_enemy1_2();
		SpawnKill_t1630702937 * L_40 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_41 = Component_get_transform_m4257140443(L_40, /*hidden argument*/NULL);
		Vector3_t4282066566  L_42 = Transform_get_position_m2211398607(L_41, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_43 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_44 = Component_get_transform_m4257140443(L_43, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_45 = Transform_get_rotation_m11483428(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_39, L_42, L_45, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_46 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_46, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_46);
		__this->set_U24PC_0(5);
		goto IL_07ff;
	}

IL_01fe:
	{
		SpawnKill_t1630702937 * L_47 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_48 = L_47->get_enemy1_2();
		SpawnKill_t1630702937 * L_49 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_50 = Component_get_transform_m4257140443(L_49, /*hidden argument*/NULL);
		Vector3_t4282066566  L_51 = Transform_get_position_m2211398607(L_50, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_52 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_53 = Component_get_transform_m4257140443(L_52, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_54 = Transform_get_rotation_m11483428(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_48, L_51, L_54, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_55 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_55, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_55);
		__this->set_U24PC_0(6);
		goto IL_07ff;
	}

IL_024b:
	{
		SpawnKill_t1630702937 * L_56 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_57 = L_56->get_enemy1_2();
		SpawnKill_t1630702937 * L_58 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_59 = Component_get_transform_m4257140443(L_58, /*hidden argument*/NULL);
		Vector3_t4282066566  L_60 = Transform_get_position_m2211398607(L_59, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_61 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_62 = Component_get_transform_m4257140443(L_61, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_63 = Transform_get_rotation_m11483428(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_57, L_60, L_63, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_64 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_64, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_64);
		__this->set_U24PC_0(7);
		goto IL_07ff;
	}

IL_0298:
	{
		SpawnKill_t1630702937 * L_65 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_66 = L_65->get_enemy1_2();
		SpawnKill_t1630702937 * L_67 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_68 = Component_get_transform_m4257140443(L_67, /*hidden argument*/NULL);
		Vector3_t4282066566  L_69 = Transform_get_position_m2211398607(L_68, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_70 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_71 = Component_get_transform_m4257140443(L_70, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_72 = Transform_get_rotation_m11483428(L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_66, L_69, L_72, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_73 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_73, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_73);
		__this->set_U24PC_0(8);
		goto IL_07ff;
	}

IL_02e5:
	{
		SpawnKill_t1630702937 * L_74 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_75 = L_74->get_enemy1_2();
		SpawnKill_t1630702937 * L_76 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_77 = Component_get_transform_m4257140443(L_76, /*hidden argument*/NULL);
		Vector3_t4282066566  L_78 = Transform_get_position_m2211398607(L_77, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_79 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_80 = Component_get_transform_m4257140443(L_79, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_81 = Transform_get_rotation_m11483428(L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_75, L_78, L_81, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_82 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_82, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_82);
		__this->set_U24PC_0(((int32_t)9));
		goto IL_07ff;
	}

IL_0333:
	{
		SpawnKill_t1630702937 * L_83 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_84 = L_83->get_enemy1_2();
		SpawnKill_t1630702937 * L_85 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_86 = Component_get_transform_m4257140443(L_85, /*hidden argument*/NULL);
		Vector3_t4282066566  L_87 = Transform_get_position_m2211398607(L_86, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_88 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_89 = Component_get_transform_m4257140443(L_88, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_90 = Transform_get_rotation_m11483428(L_89, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_84, L_87, L_90, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_91 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_91, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_91);
		__this->set_U24PC_0(((int32_t)10));
		goto IL_07ff;
	}

IL_0381:
	{
		SpawnKill_t1630702937 * L_92 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_93 = L_92->get_enemy1_2();
		SpawnKill_t1630702937 * L_94 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_95 = Component_get_transform_m4257140443(L_94, /*hidden argument*/NULL);
		Vector3_t4282066566  L_96 = Transform_get_position_m2211398607(L_95, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_97 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_98 = Component_get_transform_m4257140443(L_97, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_99 = Transform_get_rotation_m11483428(L_98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_93, L_96, L_99, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_100 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_100, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_100);
		__this->set_U24PC_0(((int32_t)11));
		goto IL_07ff;
	}

IL_03cf:
	{
		SpawnKill_t1630702937 * L_101 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_102 = L_101->get_enemy1_2();
		SpawnKill_t1630702937 * L_103 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_104 = Component_get_transform_m4257140443(L_103, /*hidden argument*/NULL);
		Vector3_t4282066566  L_105 = Transform_get_position_m2211398607(L_104, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_106 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_107 = Component_get_transform_m4257140443(L_106, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_108 = Transform_get_rotation_m11483428(L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_102, L_105, L_108, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_109 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_109, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_109);
		__this->set_U24PC_0(((int32_t)12));
		goto IL_07ff;
	}

IL_041d:
	{
		SpawnKill_t1630702937 * L_110 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_111 = L_110->get_enemy1_2();
		SpawnKill_t1630702937 * L_112 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_113 = Component_get_transform_m4257140443(L_112, /*hidden argument*/NULL);
		Vector3_t4282066566  L_114 = Transform_get_position_m2211398607(L_113, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_115 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_116 = Component_get_transform_m4257140443(L_115, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_117 = Transform_get_rotation_m11483428(L_116, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_111, L_114, L_117, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_118 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_118, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_118);
		__this->set_U24PC_0(((int32_t)13));
		goto IL_07ff;
	}

IL_046b:
	{
		SpawnKill_t1630702937 * L_119 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_120 = L_119->get_enemy1_2();
		SpawnKill_t1630702937 * L_121 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_122 = Component_get_transform_m4257140443(L_121, /*hidden argument*/NULL);
		Vector3_t4282066566  L_123 = Transform_get_position_m2211398607(L_122, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_124 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_125 = Component_get_transform_m4257140443(L_124, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_126 = Transform_get_rotation_m11483428(L_125, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_120, L_123, L_126, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_127 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_127, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_127);
		__this->set_U24PC_0(((int32_t)14));
		goto IL_07ff;
	}

IL_04b9:
	{
		SpawnKill_t1630702937 * L_128 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_129 = L_128->get_enemy1_2();
		SpawnKill_t1630702937 * L_130 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_131 = Component_get_transform_m4257140443(L_130, /*hidden argument*/NULL);
		Vector3_t4282066566  L_132 = Transform_get_position_m2211398607(L_131, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_133 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_134 = Component_get_transform_m4257140443(L_133, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_135 = Transform_get_rotation_m11483428(L_134, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_129, L_132, L_135, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_136 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_136, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_136);
		__this->set_U24PC_0(((int32_t)15));
		goto IL_07ff;
	}

IL_0507:
	{
		SpawnKill_t1630702937 * L_137 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_138 = L_137->get_enemy1_2();
		SpawnKill_t1630702937 * L_139 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_140 = Component_get_transform_m4257140443(L_139, /*hidden argument*/NULL);
		Vector3_t4282066566  L_141 = Transform_get_position_m2211398607(L_140, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_142 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_143 = Component_get_transform_m4257140443(L_142, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_144 = Transform_get_rotation_m11483428(L_143, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_138, L_141, L_144, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_145 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_145, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_145);
		__this->set_U24PC_0(((int32_t)16));
		goto IL_07ff;
	}

IL_0555:
	{
		SpawnKill_t1630702937 * L_146 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_147 = L_146->get_enemy1_2();
		SpawnKill_t1630702937 * L_148 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_149 = Component_get_transform_m4257140443(L_148, /*hidden argument*/NULL);
		Vector3_t4282066566  L_150 = Transform_get_position_m2211398607(L_149, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_151 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_152 = Component_get_transform_m4257140443(L_151, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_153 = Transform_get_rotation_m11483428(L_152, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_147, L_150, L_153, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_154 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_154, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_154);
		__this->set_U24PC_0(((int32_t)17));
		goto IL_07ff;
	}

IL_05a3:
	{
		SpawnKill_t1630702937 * L_155 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_156 = L_155->get_enemy1_2();
		SpawnKill_t1630702937 * L_157 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_158 = Component_get_transform_m4257140443(L_157, /*hidden argument*/NULL);
		Vector3_t4282066566  L_159 = Transform_get_position_m2211398607(L_158, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_160 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_161 = Component_get_transform_m4257140443(L_160, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_162 = Transform_get_rotation_m11483428(L_161, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_156, L_159, L_162, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_163 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_163, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_163);
		__this->set_U24PC_0(((int32_t)18));
		goto IL_07ff;
	}

IL_05f1:
	{
		SpawnKill_t1630702937 * L_164 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_165 = L_164->get_enemy1_2();
		SpawnKill_t1630702937 * L_166 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_167 = Component_get_transform_m4257140443(L_166, /*hidden argument*/NULL);
		Vector3_t4282066566  L_168 = Transform_get_position_m2211398607(L_167, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_169 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_170 = Component_get_transform_m4257140443(L_169, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_171 = Transform_get_rotation_m11483428(L_170, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_165, L_168, L_171, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_172 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_172, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_172);
		__this->set_U24PC_0(((int32_t)19));
		goto IL_07ff;
	}

IL_063f:
	{
		SpawnKill_t1630702937 * L_173 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_174 = L_173->get_enemy1_2();
		SpawnKill_t1630702937 * L_175 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_176 = Component_get_transform_m4257140443(L_175, /*hidden argument*/NULL);
		Vector3_t4282066566  L_177 = Transform_get_position_m2211398607(L_176, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_178 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_179 = Component_get_transform_m4257140443(L_178, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_180 = Transform_get_rotation_m11483428(L_179, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_174, L_177, L_180, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_181 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_181, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_181);
		__this->set_U24PC_0(((int32_t)20));
		goto IL_07ff;
	}

IL_068d:
	{
		SpawnKill_t1630702937 * L_182 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_183 = L_182->get_enemy1_2();
		SpawnKill_t1630702937 * L_184 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_185 = Component_get_transform_m4257140443(L_184, /*hidden argument*/NULL);
		Vector3_t4282066566  L_186 = Transform_get_position_m2211398607(L_185, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_187 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_188 = Component_get_transform_m4257140443(L_187, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_189 = Transform_get_rotation_m11483428(L_188, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_183, L_186, L_189, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_190 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_190, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_190);
		__this->set_U24PC_0(((int32_t)21));
		goto IL_07ff;
	}

IL_06db:
	{
		SpawnKill_t1630702937 * L_191 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_192 = L_191->get_enemy1_2();
		SpawnKill_t1630702937 * L_193 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_194 = Component_get_transform_m4257140443(L_193, /*hidden argument*/NULL);
		Vector3_t4282066566  L_195 = Transform_get_position_m2211398607(L_194, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_196 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_197 = Component_get_transform_m4257140443(L_196, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_198 = Transform_get_rotation_m11483428(L_197, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_192, L_195, L_198, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_199 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_199, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_199);
		__this->set_U24PC_0(((int32_t)22));
		goto IL_07ff;
	}

IL_0729:
	{
		SpawnKill_t1630702937 * L_200 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_201 = L_200->get_enemy1_2();
		SpawnKill_t1630702937 * L_202 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_203 = Component_get_transform_m4257140443(L_202, /*hidden argument*/NULL);
		Vector3_t4282066566  L_204 = Transform_get_position_m2211398607(L_203, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_205 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_206 = Component_get_transform_m4257140443(L_205, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_207 = Transform_get_rotation_m11483428(L_206, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_201, L_204, L_207, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_208 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_208, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_208);
		__this->set_U24PC_0(((int32_t)23));
		goto IL_07ff;
	}

IL_0777:
	{
		SpawnKill_t1630702937 * L_209 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_210 = L_209->get_enemy1_2();
		SpawnKill_t1630702937 * L_211 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_212 = Component_get_transform_m4257140443(L_211, /*hidden argument*/NULL);
		Vector3_t4282066566  L_213 = Transform_get_position_m2211398607(L_212, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_214 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_215 = Component_get_transform_m4257140443(L_214, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_216 = Transform_get_rotation_m11483428(L_215, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_210, L_213, L_216, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_217 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_217, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_217);
		__this->set_U24PC_0(((int32_t)24));
		goto IL_07ff;
	}

IL_07c5:
	{
		SpawnKill_t1630702937 * L_218 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_219 = L_218->get_enemy1_2();
		SpawnKill_t1630702937 * L_220 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_221 = Component_get_transform_m4257140443(L_220, /*hidden argument*/NULL);
		Vector3_t4282066566  L_222 = Transform_get_position_m2211398607(L_221, /*hidden argument*/NULL);
		SpawnKill_t1630702937 * L_223 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_224 = Component_get_transform_m4257140443(L_223, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_225 = Transform_get_rotation_m11483428(L_224, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_219, L_222, L_225, /*hidden argument*/NULL);
		__this->set_U24PC_0((-1));
	}

IL_07fd:
	{
		return (bool)0;
	}

IL_07ff:
	{
		return (bool)1;
	}
	// Dead block : IL_0801: ldloc.1
}
// System.Void SpawnKill/<waitSeconds>c__Iterator2::Dispose()
extern "C"  void U3CwaitSecondsU3Ec__Iterator2_Dispose_m3702101389 (U3CwaitSecondsU3Ec__Iterator2_t3469533307 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void SpawnKill/<waitSeconds>c__Iterator2::Reset()
extern Il2CppClass* NotSupportedException_t1732551818_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitSecondsU3Ec__Iterator2_Reset_m3026921469_MetadataUsageId;
extern "C"  void U3CwaitSecondsU3Ec__Iterator2_Reset_m3026921469 (U3CwaitSecondsU3Ec__Iterator2_t3469533307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitSecondsU3Ec__Iterator2_Reset_m3026921469_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1732551818 * L_0 = (NotSupportedException_t1732551818 *)il2cpp_codegen_object_new(NotSupportedException_t1732551818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void SpawnKillBiggerEnemy::.ctor()
extern "C"  void SpawnKillBiggerEnemy__ctor_m1843935872 (SpawnKillBiggerEnemy_t2113583739 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnKillBiggerEnemy::Start()
extern Il2CppCodeGenString* _stringLiteral3301752045;
extern const uint32_t SpawnKillBiggerEnemy_Start_m791073664_MetadataUsageId;
extern "C"  void SpawnKillBiggerEnemy_Start_m791073664 (SpawnKillBiggerEnemy_t2113583739 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpawnKillBiggerEnemy_Start_m791073664_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_InvokeRepeating_m1115468640(__this, _stringLiteral3301752045, (0.0f), (3.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnKillBiggerEnemy::SpawnEnemy()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t SpawnKillBiggerEnemy_SpawnEnemy_m3718473233_MetadataUsageId;
extern "C"  void SpawnKillBiggerEnemy_SpawnEnemy_m3718473233 (SpawnKillBiggerEnemy_t2113583739 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpawnKillBiggerEnemy_SpawnEnemy_m3718473233_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = __this->get_enemy2_2();
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_4 = Transform_get_rotation_m11483428(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SpawnKillBiggerEnemy::waitSeconds()
extern Il2CppClass* U3CwaitSecondsU3Ec__Iterator3_t3729458974_il2cpp_TypeInfo_var;
extern const uint32_t SpawnKillBiggerEnemy_waitSeconds_m1110502272_MetadataUsageId;
extern "C"  Il2CppObject * SpawnKillBiggerEnemy_waitSeconds_m1110502272 (SpawnKillBiggerEnemy_t2113583739 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpawnKillBiggerEnemy_waitSeconds_m1110502272_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CwaitSecondsU3Ec__Iterator3_t3729458974 * V_0 = NULL;
	{
		U3CwaitSecondsU3Ec__Iterator3_t3729458974 * L_0 = (U3CwaitSecondsU3Ec__Iterator3_t3729458974 *)il2cpp_codegen_object_new(U3CwaitSecondsU3Ec__Iterator3_t3729458974_il2cpp_TypeInfo_var);
		U3CwaitSecondsU3Ec__Iterator3__ctor_m3171387197(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwaitSecondsU3Ec__Iterator3_t3729458974 * L_1 = V_0;
		L_1->set_U3CU3Ef__this_2(__this);
		U3CwaitSecondsU3Ec__Iterator3_t3729458974 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SpawnKillBiggerEnemy/<waitSeconds>c__Iterator3::.ctor()
extern "C"  void U3CwaitSecondsU3Ec__Iterator3__ctor_m3171387197 (U3CwaitSecondsU3Ec__Iterator3_t3729458974 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SpawnKillBiggerEnemy/<waitSeconds>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CwaitSecondsU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m470748671 (U3CwaitSecondsU3Ec__Iterator3_t3729458974 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object SpawnKillBiggerEnemy/<waitSeconds>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CwaitSecondsU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m1363341203 (U3CwaitSecondsU3Ec__Iterator3_t3729458974 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean SpawnKillBiggerEnemy/<waitSeconds>c__Iterator3::MoveNext()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* WaitForSeconds_t1615819279_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitSecondsU3Ec__Iterator3_MoveNext_m3164860031_MetadataUsageId;
extern "C"  bool U3CwaitSecondsU3Ec__Iterator3_MoveNext_m3164860031 (U3CwaitSecondsU3Ec__Iterator3_t3729458974 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitSecondsU3Ec__Iterator3_MoveNext_m3164860031_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_007d;
		}
		if (L_1 == 1)
		{
			goto IL_00ca;
		}
		if (L_1 == 2)
		{
			goto IL_0117;
		}
		if (L_1 == 3)
		{
			goto IL_0164;
		}
		if (L_1 == 4)
		{
			goto IL_01b1;
		}
		if (L_1 == 5)
		{
			goto IL_01fe;
		}
		if (L_1 == 6)
		{
			goto IL_024b;
		}
		if (L_1 == 7)
		{
			goto IL_0298;
		}
		if (L_1 == 8)
		{
			goto IL_02e5;
		}
		if (L_1 == 9)
		{
			goto IL_0333;
		}
		if (L_1 == 10)
		{
			goto IL_0381;
		}
		if (L_1 == 11)
		{
			goto IL_03cf;
		}
		if (L_1 == 12)
		{
			goto IL_041d;
		}
		if (L_1 == 13)
		{
			goto IL_046b;
		}
		if (L_1 == 14)
		{
			goto IL_04b9;
		}
		if (L_1 == 15)
		{
			goto IL_0507;
		}
		if (L_1 == 16)
		{
			goto IL_0555;
		}
		if (L_1 == 17)
		{
			goto IL_05a3;
		}
		if (L_1 == 18)
		{
			goto IL_05f1;
		}
		if (L_1 == 19)
		{
			goto IL_063f;
		}
		if (L_1 == 20)
		{
			goto IL_068d;
		}
		if (L_1 == 21)
		{
			goto IL_06db;
		}
		if (L_1 == 22)
		{
			goto IL_0729;
		}
		if (L_1 == 23)
		{
			goto IL_0777;
		}
		if (L_1 == 24)
		{
			goto IL_07c5;
		}
	}
	{
		goto IL_07fd;
	}

IL_007d:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_2 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_3 = L_2->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_4 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(L_4, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_7 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(L_7, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_9 = Transform_get_rotation_m11483428(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_3, L_6, L_9, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_10 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_10, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_10);
		__this->set_U24PC_0(1);
		goto IL_07ff;
	}

IL_00ca:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_11 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_12 = L_11->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_13 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_14 = Component_get_transform_m4257140443(L_13, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = Transform_get_position_m2211398607(L_14, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_16 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_17 = Component_get_transform_m4257140443(L_16, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_18 = Transform_get_rotation_m11483428(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_12, L_15, L_18, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_19 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_19, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_19);
		__this->set_U24PC_0(2);
		goto IL_07ff;
	}

IL_0117:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_20 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_21 = L_20->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_22 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_23 = Component_get_transform_m4257140443(L_22, /*hidden argument*/NULL);
		Vector3_t4282066566  L_24 = Transform_get_position_m2211398607(L_23, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_25 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_26 = Component_get_transform_m4257140443(L_25, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_27 = Transform_get_rotation_m11483428(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_21, L_24, L_27, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_28 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_28, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_28);
		__this->set_U24PC_0(3);
		goto IL_07ff;
	}

IL_0164:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_29 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_30 = L_29->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_31 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_32 = Component_get_transform_m4257140443(L_31, /*hidden argument*/NULL);
		Vector3_t4282066566  L_33 = Transform_get_position_m2211398607(L_32, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_34 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_35 = Component_get_transform_m4257140443(L_34, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_36 = Transform_get_rotation_m11483428(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_30, L_33, L_36, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_37 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_37, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_37);
		__this->set_U24PC_0(4);
		goto IL_07ff;
	}

IL_01b1:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_38 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_39 = L_38->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_40 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_41 = Component_get_transform_m4257140443(L_40, /*hidden argument*/NULL);
		Vector3_t4282066566  L_42 = Transform_get_position_m2211398607(L_41, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_43 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_44 = Component_get_transform_m4257140443(L_43, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_45 = Transform_get_rotation_m11483428(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_39, L_42, L_45, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_46 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_46, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_46);
		__this->set_U24PC_0(5);
		goto IL_07ff;
	}

IL_01fe:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_47 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_48 = L_47->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_49 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_50 = Component_get_transform_m4257140443(L_49, /*hidden argument*/NULL);
		Vector3_t4282066566  L_51 = Transform_get_position_m2211398607(L_50, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_52 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_53 = Component_get_transform_m4257140443(L_52, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_54 = Transform_get_rotation_m11483428(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_48, L_51, L_54, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_55 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_55, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_55);
		__this->set_U24PC_0(6);
		goto IL_07ff;
	}

IL_024b:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_56 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_57 = L_56->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_58 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_59 = Component_get_transform_m4257140443(L_58, /*hidden argument*/NULL);
		Vector3_t4282066566  L_60 = Transform_get_position_m2211398607(L_59, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_61 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_62 = Component_get_transform_m4257140443(L_61, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_63 = Transform_get_rotation_m11483428(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_57, L_60, L_63, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_64 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_64, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_64);
		__this->set_U24PC_0(7);
		goto IL_07ff;
	}

IL_0298:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_65 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_66 = L_65->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_67 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_68 = Component_get_transform_m4257140443(L_67, /*hidden argument*/NULL);
		Vector3_t4282066566  L_69 = Transform_get_position_m2211398607(L_68, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_70 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_71 = Component_get_transform_m4257140443(L_70, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_72 = Transform_get_rotation_m11483428(L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_66, L_69, L_72, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_73 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_73, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_73);
		__this->set_U24PC_0(8);
		goto IL_07ff;
	}

IL_02e5:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_74 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_75 = L_74->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_76 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_77 = Component_get_transform_m4257140443(L_76, /*hidden argument*/NULL);
		Vector3_t4282066566  L_78 = Transform_get_position_m2211398607(L_77, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_79 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_80 = Component_get_transform_m4257140443(L_79, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_81 = Transform_get_rotation_m11483428(L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_75, L_78, L_81, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_82 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_82, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_82);
		__this->set_U24PC_0(((int32_t)9));
		goto IL_07ff;
	}

IL_0333:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_83 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_84 = L_83->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_85 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_86 = Component_get_transform_m4257140443(L_85, /*hidden argument*/NULL);
		Vector3_t4282066566  L_87 = Transform_get_position_m2211398607(L_86, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_88 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_89 = Component_get_transform_m4257140443(L_88, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_90 = Transform_get_rotation_m11483428(L_89, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_84, L_87, L_90, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_91 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_91, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_91);
		__this->set_U24PC_0(((int32_t)10));
		goto IL_07ff;
	}

IL_0381:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_92 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_93 = L_92->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_94 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_95 = Component_get_transform_m4257140443(L_94, /*hidden argument*/NULL);
		Vector3_t4282066566  L_96 = Transform_get_position_m2211398607(L_95, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_97 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_98 = Component_get_transform_m4257140443(L_97, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_99 = Transform_get_rotation_m11483428(L_98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_93, L_96, L_99, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_100 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_100, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_100);
		__this->set_U24PC_0(((int32_t)11));
		goto IL_07ff;
	}

IL_03cf:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_101 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_102 = L_101->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_103 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_104 = Component_get_transform_m4257140443(L_103, /*hidden argument*/NULL);
		Vector3_t4282066566  L_105 = Transform_get_position_m2211398607(L_104, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_106 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_107 = Component_get_transform_m4257140443(L_106, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_108 = Transform_get_rotation_m11483428(L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_102, L_105, L_108, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_109 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_109, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_109);
		__this->set_U24PC_0(((int32_t)12));
		goto IL_07ff;
	}

IL_041d:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_110 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_111 = L_110->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_112 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_113 = Component_get_transform_m4257140443(L_112, /*hidden argument*/NULL);
		Vector3_t4282066566  L_114 = Transform_get_position_m2211398607(L_113, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_115 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_116 = Component_get_transform_m4257140443(L_115, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_117 = Transform_get_rotation_m11483428(L_116, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_111, L_114, L_117, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_118 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_118, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_118);
		__this->set_U24PC_0(((int32_t)13));
		goto IL_07ff;
	}

IL_046b:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_119 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_120 = L_119->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_121 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_122 = Component_get_transform_m4257140443(L_121, /*hidden argument*/NULL);
		Vector3_t4282066566  L_123 = Transform_get_position_m2211398607(L_122, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_124 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_125 = Component_get_transform_m4257140443(L_124, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_126 = Transform_get_rotation_m11483428(L_125, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_120, L_123, L_126, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_127 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_127, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_127);
		__this->set_U24PC_0(((int32_t)14));
		goto IL_07ff;
	}

IL_04b9:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_128 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_129 = L_128->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_130 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_131 = Component_get_transform_m4257140443(L_130, /*hidden argument*/NULL);
		Vector3_t4282066566  L_132 = Transform_get_position_m2211398607(L_131, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_133 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_134 = Component_get_transform_m4257140443(L_133, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_135 = Transform_get_rotation_m11483428(L_134, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_129, L_132, L_135, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_136 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_136, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_136);
		__this->set_U24PC_0(((int32_t)15));
		goto IL_07ff;
	}

IL_0507:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_137 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_138 = L_137->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_139 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_140 = Component_get_transform_m4257140443(L_139, /*hidden argument*/NULL);
		Vector3_t4282066566  L_141 = Transform_get_position_m2211398607(L_140, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_142 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_143 = Component_get_transform_m4257140443(L_142, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_144 = Transform_get_rotation_m11483428(L_143, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_138, L_141, L_144, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_145 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_145, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_145);
		__this->set_U24PC_0(((int32_t)16));
		goto IL_07ff;
	}

IL_0555:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_146 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_147 = L_146->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_148 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_149 = Component_get_transform_m4257140443(L_148, /*hidden argument*/NULL);
		Vector3_t4282066566  L_150 = Transform_get_position_m2211398607(L_149, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_151 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_152 = Component_get_transform_m4257140443(L_151, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_153 = Transform_get_rotation_m11483428(L_152, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_147, L_150, L_153, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_154 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_154, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_154);
		__this->set_U24PC_0(((int32_t)17));
		goto IL_07ff;
	}

IL_05a3:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_155 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_156 = L_155->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_157 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_158 = Component_get_transform_m4257140443(L_157, /*hidden argument*/NULL);
		Vector3_t4282066566  L_159 = Transform_get_position_m2211398607(L_158, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_160 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_161 = Component_get_transform_m4257140443(L_160, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_162 = Transform_get_rotation_m11483428(L_161, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_156, L_159, L_162, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_163 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_163, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_163);
		__this->set_U24PC_0(((int32_t)18));
		goto IL_07ff;
	}

IL_05f1:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_164 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_165 = L_164->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_166 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_167 = Component_get_transform_m4257140443(L_166, /*hidden argument*/NULL);
		Vector3_t4282066566  L_168 = Transform_get_position_m2211398607(L_167, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_169 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_170 = Component_get_transform_m4257140443(L_169, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_171 = Transform_get_rotation_m11483428(L_170, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_165, L_168, L_171, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_172 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_172, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_172);
		__this->set_U24PC_0(((int32_t)19));
		goto IL_07ff;
	}

IL_063f:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_173 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_174 = L_173->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_175 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_176 = Component_get_transform_m4257140443(L_175, /*hidden argument*/NULL);
		Vector3_t4282066566  L_177 = Transform_get_position_m2211398607(L_176, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_178 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_179 = Component_get_transform_m4257140443(L_178, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_180 = Transform_get_rotation_m11483428(L_179, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_174, L_177, L_180, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_181 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_181, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_181);
		__this->set_U24PC_0(((int32_t)20));
		goto IL_07ff;
	}

IL_068d:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_182 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_183 = L_182->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_184 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_185 = Component_get_transform_m4257140443(L_184, /*hidden argument*/NULL);
		Vector3_t4282066566  L_186 = Transform_get_position_m2211398607(L_185, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_187 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_188 = Component_get_transform_m4257140443(L_187, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_189 = Transform_get_rotation_m11483428(L_188, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_183, L_186, L_189, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_190 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_190, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_190);
		__this->set_U24PC_0(((int32_t)21));
		goto IL_07ff;
	}

IL_06db:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_191 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_192 = L_191->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_193 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_194 = Component_get_transform_m4257140443(L_193, /*hidden argument*/NULL);
		Vector3_t4282066566  L_195 = Transform_get_position_m2211398607(L_194, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_196 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_197 = Component_get_transform_m4257140443(L_196, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_198 = Transform_get_rotation_m11483428(L_197, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_192, L_195, L_198, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_199 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_199, (7.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_199);
		__this->set_U24PC_0(((int32_t)22));
		goto IL_07ff;
	}

IL_0729:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_200 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_201 = L_200->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_202 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_203 = Component_get_transform_m4257140443(L_202, /*hidden argument*/NULL);
		Vector3_t4282066566  L_204 = Transform_get_position_m2211398607(L_203, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_205 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_206 = Component_get_transform_m4257140443(L_205, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_207 = Transform_get_rotation_m11483428(L_206, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_201, L_204, L_207, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_208 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_208, (9.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_208);
		__this->set_U24PC_0(((int32_t)23));
		goto IL_07ff;
	}

IL_0777:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_209 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_210 = L_209->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_211 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_212 = Component_get_transform_m4257140443(L_211, /*hidden argument*/NULL);
		Vector3_t4282066566  L_213 = Transform_get_position_m2211398607(L_212, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_214 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_215 = Component_get_transform_m4257140443(L_214, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_216 = Transform_get_rotation_m11483428(L_215, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_210, L_213, L_216, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_217 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_217, (6.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_217);
		__this->set_U24PC_0(((int32_t)24));
		goto IL_07ff;
	}

IL_07c5:
	{
		SpawnKillBiggerEnemy_t2113583739 * L_218 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_219 = L_218->get_enemy2_2();
		SpawnKillBiggerEnemy_t2113583739 * L_220 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_221 = Component_get_transform_m4257140443(L_220, /*hidden argument*/NULL);
		Vector3_t4282066566  L_222 = Transform_get_position_m2211398607(L_221, /*hidden argument*/NULL);
		SpawnKillBiggerEnemy_t2113583739 * L_223 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_224 = Component_get_transform_m4257140443(L_223, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_225 = Transform_get_rotation_m11483428(L_224, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_219, L_222, L_225, /*hidden argument*/NULL);
		__this->set_U24PC_0((-1));
	}

IL_07fd:
	{
		return (bool)0;
	}

IL_07ff:
	{
		return (bool)1;
	}
	// Dead block : IL_0801: ldloc.1
}
// System.Void SpawnKillBiggerEnemy/<waitSeconds>c__Iterator3::Dispose()
extern "C"  void U3CwaitSecondsU3Ec__Iterator3_Dispose_m2469566522 (U3CwaitSecondsU3Ec__Iterator3_t3729458974 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void SpawnKillBiggerEnemy/<waitSeconds>c__Iterator3::Reset()
extern Il2CppClass* NotSupportedException_t1732551818_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitSecondsU3Ec__Iterator3_Reset_m817820138_MetadataUsageId;
extern "C"  void U3CwaitSecondsU3Ec__Iterator3_Reset_m817820138 (U3CwaitSecondsU3Ec__Iterator3_t3729458974 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitSecondsU3Ec__Iterator3_Reset_m817820138_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1732551818 * L_0 = (NotSupportedException_t1732551818 *)il2cpp_codegen_object_new(NotSupportedException_t1732551818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void SpawnKillMini::.ctor()
extern "C"  void SpawnKillMini__ctor_m1184500251 (SpawnKillMini_t1076810064 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawnKillMini::Start()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2162340682;
extern const uint32_t SpawnKillMini_Start_m131638043_MetadataUsageId;
extern "C"  void SpawnKillMini_Start_m131638043 (SpawnKillMini_t1076810064 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpawnKillMini_Start_m131638043_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_StartCoroutine_m2272783641(__this, _stringLiteral2162340682, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_0 = __this->get_enemy1_2();
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_4 = Transform_get_rotation_m11483428(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SpawnKillMini::waitSeconds()
extern Il2CppClass* U3CwaitSecondsU3Ec__Iterator4_t794987956_il2cpp_TypeInfo_var;
extern const uint32_t SpawnKillMini_waitSeconds_m3530719339_MetadataUsageId;
extern "C"  Il2CppObject * SpawnKillMini_waitSeconds_m3530719339 (SpawnKillMini_t1076810064 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpawnKillMini_waitSeconds_m3530719339_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CwaitSecondsU3Ec__Iterator4_t794987956 * V_0 = NULL;
	{
		U3CwaitSecondsU3Ec__Iterator4_t794987956 * L_0 = (U3CwaitSecondsU3Ec__Iterator4_t794987956 *)il2cpp_codegen_object_new(U3CwaitSecondsU3Ec__Iterator4_t794987956_il2cpp_TypeInfo_var);
		U3CwaitSecondsU3Ec__Iterator4__ctor_m1600334903(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwaitSecondsU3Ec__Iterator4_t794987956 * L_1 = V_0;
		L_1->set_U3CU3Ef__this_2(__this);
		U3CwaitSecondsU3Ec__Iterator4_t794987956 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SpawnKillMini/<waitSeconds>c__Iterator4::.ctor()
extern "C"  void U3CwaitSecondsU3Ec__Iterator4__ctor_m1600334903 (U3CwaitSecondsU3Ec__Iterator4_t794987956 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SpawnKillMini/<waitSeconds>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CwaitSecondsU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2730745979 (U3CwaitSecondsU3Ec__Iterator4_t794987956 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object SpawnKillMini/<waitSeconds>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CwaitSecondsU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m1300511247 (U3CwaitSecondsU3Ec__Iterator4_t794987956 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean SpawnKillMini/<waitSeconds>c__Iterator4::MoveNext()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* WaitForSeconds_t1615819279_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitSecondsU3Ec__Iterator4_MoveNext_m1330046557_MetadataUsageId;
extern "C"  bool U3CwaitSecondsU3Ec__Iterator4_MoveNext_m1330046557 (U3CwaitSecondsU3Ec__Iterator4_t794987956 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitSecondsU3Ec__Iterator4_MoveNext_m1330046557_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_00bd;
		}
		if (L_1 == 1)
		{
			goto IL_010a;
		}
		if (L_1 == 2)
		{
			goto IL_0157;
		}
		if (L_1 == 3)
		{
			goto IL_01a4;
		}
		if (L_1 == 4)
		{
			goto IL_01f1;
		}
		if (L_1 == 5)
		{
			goto IL_023e;
		}
		if (L_1 == 6)
		{
			goto IL_028b;
		}
		if (L_1 == 7)
		{
			goto IL_02d8;
		}
		if (L_1 == 8)
		{
			goto IL_0325;
		}
		if (L_1 == 9)
		{
			goto IL_0373;
		}
		if (L_1 == 10)
		{
			goto IL_03c1;
		}
		if (L_1 == 11)
		{
			goto IL_040f;
		}
		if (L_1 == 12)
		{
			goto IL_045d;
		}
		if (L_1 == 13)
		{
			goto IL_04ab;
		}
		if (L_1 == 14)
		{
			goto IL_04f9;
		}
		if (L_1 == 15)
		{
			goto IL_0547;
		}
		if (L_1 == 16)
		{
			goto IL_0595;
		}
		if (L_1 == 17)
		{
			goto IL_05e3;
		}
		if (L_1 == 18)
		{
			goto IL_0631;
		}
		if (L_1 == 19)
		{
			goto IL_067f;
		}
		if (L_1 == 20)
		{
			goto IL_06cd;
		}
		if (L_1 == 21)
		{
			goto IL_071b;
		}
		if (L_1 == 22)
		{
			goto IL_0769;
		}
		if (L_1 == 23)
		{
			goto IL_07b7;
		}
		if (L_1 == 24)
		{
			goto IL_0805;
		}
		if (L_1 == 25)
		{
			goto IL_0853;
		}
		if (L_1 == 26)
		{
			goto IL_08a1;
		}
		if (L_1 == 27)
		{
			goto IL_08ef;
		}
		if (L_1 == 28)
		{
			goto IL_093d;
		}
		if (L_1 == 29)
		{
			goto IL_098b;
		}
		if (L_1 == 30)
		{
			goto IL_09d9;
		}
		if (L_1 == 31)
		{
			goto IL_0a27;
		}
		if (L_1 == 32)
		{
			goto IL_0a75;
		}
		if (L_1 == 33)
		{
			goto IL_0ac3;
		}
		if (L_1 == 34)
		{
			goto IL_0b11;
		}
		if (L_1 == 35)
		{
			goto IL_0b5f;
		}
		if (L_1 == 36)
		{
			goto IL_0bad;
		}
		if (L_1 == 37)
		{
			goto IL_0bfb;
		}
		if (L_1 == 38)
		{
			goto IL_0c49;
		}
		if (L_1 == 39)
		{
			goto IL_0c97;
		}
		if (L_1 == 40)
		{
			goto IL_0ce5;
		}
	}
	{
		goto IL_0d1d;
	}

IL_00bd:
	{
		SpawnKillMini_t1076810064 * L_2 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_3 = L_2->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_4 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(L_4, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_7 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(L_7, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_9 = Transform_get_rotation_m11483428(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_3, L_6, L_9, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_10 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_10, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_10);
		__this->set_U24PC_0(1);
		goto IL_0d1f;
	}

IL_010a:
	{
		SpawnKillMini_t1076810064 * L_11 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_12 = L_11->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_13 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_14 = Component_get_transform_m4257140443(L_13, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = Transform_get_position_m2211398607(L_14, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_16 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_17 = Component_get_transform_m4257140443(L_16, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_18 = Transform_get_rotation_m11483428(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_12, L_15, L_18, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_19 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_19, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_19);
		__this->set_U24PC_0(2);
		goto IL_0d1f;
	}

IL_0157:
	{
		SpawnKillMini_t1076810064 * L_20 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_21 = L_20->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_22 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_23 = Component_get_transform_m4257140443(L_22, /*hidden argument*/NULL);
		Vector3_t4282066566  L_24 = Transform_get_position_m2211398607(L_23, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_25 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_26 = Component_get_transform_m4257140443(L_25, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_27 = Transform_get_rotation_m11483428(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_21, L_24, L_27, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_28 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_28, (0.3f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_28);
		__this->set_U24PC_0(3);
		goto IL_0d1f;
	}

IL_01a4:
	{
		SpawnKillMini_t1076810064 * L_29 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_30 = L_29->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_31 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_32 = Component_get_transform_m4257140443(L_31, /*hidden argument*/NULL);
		Vector3_t4282066566  L_33 = Transform_get_position_m2211398607(L_32, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_34 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_35 = Component_get_transform_m4257140443(L_34, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_36 = Transform_get_rotation_m11483428(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_30, L_33, L_36, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_37 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_37, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_37);
		__this->set_U24PC_0(4);
		goto IL_0d1f;
	}

IL_01f1:
	{
		SpawnKillMini_t1076810064 * L_38 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_39 = L_38->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_40 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_41 = Component_get_transform_m4257140443(L_40, /*hidden argument*/NULL);
		Vector3_t4282066566  L_42 = Transform_get_position_m2211398607(L_41, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_43 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_44 = Component_get_transform_m4257140443(L_43, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_45 = Transform_get_rotation_m11483428(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_39, L_42, L_45, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_46 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_46, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_46);
		__this->set_U24PC_0(5);
		goto IL_0d1f;
	}

IL_023e:
	{
		SpawnKillMini_t1076810064 * L_47 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_48 = L_47->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_49 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_50 = Component_get_transform_m4257140443(L_49, /*hidden argument*/NULL);
		Vector3_t4282066566  L_51 = Transform_get_position_m2211398607(L_50, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_52 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_53 = Component_get_transform_m4257140443(L_52, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_54 = Transform_get_rotation_m11483428(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_48, L_51, L_54, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_55 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_55, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_55);
		__this->set_U24PC_0(6);
		goto IL_0d1f;
	}

IL_028b:
	{
		SpawnKillMini_t1076810064 * L_56 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_57 = L_56->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_58 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_59 = Component_get_transform_m4257140443(L_58, /*hidden argument*/NULL);
		Vector3_t4282066566  L_60 = Transform_get_position_m2211398607(L_59, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_61 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_62 = Component_get_transform_m4257140443(L_61, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_63 = Transform_get_rotation_m11483428(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_57, L_60, L_63, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_64 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_64, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_64);
		__this->set_U24PC_0(7);
		goto IL_0d1f;
	}

IL_02d8:
	{
		SpawnKillMini_t1076810064 * L_65 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_66 = L_65->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_67 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_68 = Component_get_transform_m4257140443(L_67, /*hidden argument*/NULL);
		Vector3_t4282066566  L_69 = Transform_get_position_m2211398607(L_68, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_70 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_71 = Component_get_transform_m4257140443(L_70, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_72 = Transform_get_rotation_m11483428(L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_66, L_69, L_72, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_73 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_73, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_73);
		__this->set_U24PC_0(8);
		goto IL_0d1f;
	}

IL_0325:
	{
		SpawnKillMini_t1076810064 * L_74 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_75 = L_74->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_76 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_77 = Component_get_transform_m4257140443(L_76, /*hidden argument*/NULL);
		Vector3_t4282066566  L_78 = Transform_get_position_m2211398607(L_77, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_79 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_80 = Component_get_transform_m4257140443(L_79, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_81 = Transform_get_rotation_m11483428(L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_75, L_78, L_81, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_82 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_82, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_82);
		__this->set_U24PC_0(((int32_t)9));
		goto IL_0d1f;
	}

IL_0373:
	{
		SpawnKillMini_t1076810064 * L_83 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_84 = L_83->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_85 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_86 = Component_get_transform_m4257140443(L_85, /*hidden argument*/NULL);
		Vector3_t4282066566  L_87 = Transform_get_position_m2211398607(L_86, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_88 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_89 = Component_get_transform_m4257140443(L_88, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_90 = Transform_get_rotation_m11483428(L_89, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_84, L_87, L_90, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_91 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_91, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_91);
		__this->set_U24PC_0(((int32_t)10));
		goto IL_0d1f;
	}

IL_03c1:
	{
		SpawnKillMini_t1076810064 * L_92 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_93 = L_92->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_94 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_95 = Component_get_transform_m4257140443(L_94, /*hidden argument*/NULL);
		Vector3_t4282066566  L_96 = Transform_get_position_m2211398607(L_95, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_97 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_98 = Component_get_transform_m4257140443(L_97, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_99 = Transform_get_rotation_m11483428(L_98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_93, L_96, L_99, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_100 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_100, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_100);
		__this->set_U24PC_0(((int32_t)11));
		goto IL_0d1f;
	}

IL_040f:
	{
		SpawnKillMini_t1076810064 * L_101 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_102 = L_101->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_103 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_104 = Component_get_transform_m4257140443(L_103, /*hidden argument*/NULL);
		Vector3_t4282066566  L_105 = Transform_get_position_m2211398607(L_104, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_106 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_107 = Component_get_transform_m4257140443(L_106, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_108 = Transform_get_rotation_m11483428(L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_102, L_105, L_108, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_109 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_109, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_109);
		__this->set_U24PC_0(((int32_t)12));
		goto IL_0d1f;
	}

IL_045d:
	{
		SpawnKillMini_t1076810064 * L_110 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_111 = L_110->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_112 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_113 = Component_get_transform_m4257140443(L_112, /*hidden argument*/NULL);
		Vector3_t4282066566  L_114 = Transform_get_position_m2211398607(L_113, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_115 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_116 = Component_get_transform_m4257140443(L_115, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_117 = Transform_get_rotation_m11483428(L_116, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_111, L_114, L_117, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_118 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_118, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_118);
		__this->set_U24PC_0(((int32_t)13));
		goto IL_0d1f;
	}

IL_04ab:
	{
		SpawnKillMini_t1076810064 * L_119 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_120 = L_119->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_121 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_122 = Component_get_transform_m4257140443(L_121, /*hidden argument*/NULL);
		Vector3_t4282066566  L_123 = Transform_get_position_m2211398607(L_122, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_124 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_125 = Component_get_transform_m4257140443(L_124, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_126 = Transform_get_rotation_m11483428(L_125, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_120, L_123, L_126, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_127 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_127, (0.6f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_127);
		__this->set_U24PC_0(((int32_t)14));
		goto IL_0d1f;
	}

IL_04f9:
	{
		SpawnKillMini_t1076810064 * L_128 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_129 = L_128->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_130 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_131 = Component_get_transform_m4257140443(L_130, /*hidden argument*/NULL);
		Vector3_t4282066566  L_132 = Transform_get_position_m2211398607(L_131, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_133 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_134 = Component_get_transform_m4257140443(L_133, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_135 = Transform_get_rotation_m11483428(L_134, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_129, L_132, L_135, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_136 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_136, (0.8f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_136);
		__this->set_U24PC_0(((int32_t)15));
		goto IL_0d1f;
	}

IL_0547:
	{
		SpawnKillMini_t1076810064 * L_137 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_138 = L_137->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_139 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_140 = Component_get_transform_m4257140443(L_139, /*hidden argument*/NULL);
		Vector3_t4282066566  L_141 = Transform_get_position_m2211398607(L_140, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_142 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_143 = Component_get_transform_m4257140443(L_142, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_144 = Transform_get_rotation_m11483428(L_143, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_138, L_141, L_144, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_145 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_145, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_145);
		__this->set_U24PC_0(((int32_t)16));
		goto IL_0d1f;
	}

IL_0595:
	{
		SpawnKillMini_t1076810064 * L_146 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_147 = L_146->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_148 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_149 = Component_get_transform_m4257140443(L_148, /*hidden argument*/NULL);
		Vector3_t4282066566  L_150 = Transform_get_position_m2211398607(L_149, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_151 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_152 = Component_get_transform_m4257140443(L_151, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_153 = Transform_get_rotation_m11483428(L_152, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_147, L_150, L_153, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_154 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_154, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_154);
		__this->set_U24PC_0(((int32_t)17));
		goto IL_0d1f;
	}

IL_05e3:
	{
		SpawnKillMini_t1076810064 * L_155 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_156 = L_155->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_157 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_158 = Component_get_transform_m4257140443(L_157, /*hidden argument*/NULL);
		Vector3_t4282066566  L_159 = Transform_get_position_m2211398607(L_158, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_160 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_161 = Component_get_transform_m4257140443(L_160, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_162 = Transform_get_rotation_m11483428(L_161, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_156, L_159, L_162, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_163 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_163, (0.2f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_163);
		__this->set_U24PC_0(((int32_t)18));
		goto IL_0d1f;
	}

IL_0631:
	{
		SpawnKillMini_t1076810064 * L_164 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_165 = L_164->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_166 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_167 = Component_get_transform_m4257140443(L_166, /*hidden argument*/NULL);
		Vector3_t4282066566  L_168 = Transform_get_position_m2211398607(L_167, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_169 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_170 = Component_get_transform_m4257140443(L_169, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_171 = Transform_get_rotation_m11483428(L_170, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_165, L_168, L_171, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_172 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_172, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_172);
		__this->set_U24PC_0(((int32_t)19));
		goto IL_0d1f;
	}

IL_067f:
	{
		SpawnKillMini_t1076810064 * L_173 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_174 = L_173->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_175 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_176 = Component_get_transform_m4257140443(L_175, /*hidden argument*/NULL);
		Vector3_t4282066566  L_177 = Transform_get_position_m2211398607(L_176, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_178 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_179 = Component_get_transform_m4257140443(L_178, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_180 = Transform_get_rotation_m11483428(L_179, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_174, L_177, L_180, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_181 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_181, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_181);
		__this->set_U24PC_0(((int32_t)20));
		goto IL_0d1f;
	}

IL_06cd:
	{
		SpawnKillMini_t1076810064 * L_182 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_183 = L_182->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_184 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_185 = Component_get_transform_m4257140443(L_184, /*hidden argument*/NULL);
		Vector3_t4282066566  L_186 = Transform_get_position_m2211398607(L_185, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_187 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_188 = Component_get_transform_m4257140443(L_187, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_189 = Transform_get_rotation_m11483428(L_188, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_183, L_186, L_189, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_190 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_190, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_190);
		__this->set_U24PC_0(((int32_t)21));
		goto IL_0d1f;
	}

IL_071b:
	{
		SpawnKillMini_t1076810064 * L_191 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_192 = L_191->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_193 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_194 = Component_get_transform_m4257140443(L_193, /*hidden argument*/NULL);
		Vector3_t4282066566  L_195 = Transform_get_position_m2211398607(L_194, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_196 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_197 = Component_get_transform_m4257140443(L_196, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_198 = Transform_get_rotation_m11483428(L_197, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_192, L_195, L_198, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_199 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_199, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_199);
		__this->set_U24PC_0(((int32_t)22));
		goto IL_0d1f;
	}

IL_0769:
	{
		SpawnKillMini_t1076810064 * L_200 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_201 = L_200->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_202 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_203 = Component_get_transform_m4257140443(L_202, /*hidden argument*/NULL);
		Vector3_t4282066566  L_204 = Transform_get_position_m2211398607(L_203, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_205 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_206 = Component_get_transform_m4257140443(L_205, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_207 = Transform_get_rotation_m11483428(L_206, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_201, L_204, L_207, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_208 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_208, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_208);
		__this->set_U24PC_0(((int32_t)23));
		goto IL_0d1f;
	}

IL_07b7:
	{
		SpawnKillMini_t1076810064 * L_209 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_210 = L_209->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_211 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_212 = Component_get_transform_m4257140443(L_211, /*hidden argument*/NULL);
		Vector3_t4282066566  L_213 = Transform_get_position_m2211398607(L_212, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_214 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_215 = Component_get_transform_m4257140443(L_214, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_216 = Transform_get_rotation_m11483428(L_215, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_210, L_213, L_216, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_217 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_217, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_217);
		__this->set_U24PC_0(((int32_t)24));
		goto IL_0d1f;
	}

IL_0805:
	{
		SpawnKillMini_t1076810064 * L_218 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_219 = L_218->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_220 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_221 = Component_get_transform_m4257140443(L_220, /*hidden argument*/NULL);
		Vector3_t4282066566  L_222 = Transform_get_position_m2211398607(L_221, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_223 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_224 = Component_get_transform_m4257140443(L_223, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_225 = Transform_get_rotation_m11483428(L_224, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_219, L_222, L_225, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_226 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_226, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_226);
		__this->set_U24PC_0(((int32_t)25));
		goto IL_0d1f;
	}

IL_0853:
	{
		SpawnKillMini_t1076810064 * L_227 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_228 = L_227->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_229 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_230 = Component_get_transform_m4257140443(L_229, /*hidden argument*/NULL);
		Vector3_t4282066566  L_231 = Transform_get_position_m2211398607(L_230, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_232 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_233 = Component_get_transform_m4257140443(L_232, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_234 = Transform_get_rotation_m11483428(L_233, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_228, L_231, L_234, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_235 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_235, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_235);
		__this->set_U24PC_0(((int32_t)26));
		goto IL_0d1f;
	}

IL_08a1:
	{
		SpawnKillMini_t1076810064 * L_236 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_237 = L_236->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_238 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_239 = Component_get_transform_m4257140443(L_238, /*hidden argument*/NULL);
		Vector3_t4282066566  L_240 = Transform_get_position_m2211398607(L_239, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_241 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_242 = Component_get_transform_m4257140443(L_241, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_243 = Transform_get_rotation_m11483428(L_242, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_237, L_240, L_243, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_244 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_244, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_244);
		__this->set_U24PC_0(((int32_t)27));
		goto IL_0d1f;
	}

IL_08ef:
	{
		SpawnKillMini_t1076810064 * L_245 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_246 = L_245->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_247 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_248 = Component_get_transform_m4257140443(L_247, /*hidden argument*/NULL);
		Vector3_t4282066566  L_249 = Transform_get_position_m2211398607(L_248, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_250 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_251 = Component_get_transform_m4257140443(L_250, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_252 = Transform_get_rotation_m11483428(L_251, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_246, L_249, L_252, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_253 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_253, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_253);
		__this->set_U24PC_0(((int32_t)28));
		goto IL_0d1f;
	}

IL_093d:
	{
		SpawnKillMini_t1076810064 * L_254 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_255 = L_254->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_256 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_257 = Component_get_transform_m4257140443(L_256, /*hidden argument*/NULL);
		Vector3_t4282066566  L_258 = Transform_get_position_m2211398607(L_257, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_259 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_260 = Component_get_transform_m4257140443(L_259, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_261 = Transform_get_rotation_m11483428(L_260, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_255, L_258, L_261, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_262 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_262, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_262);
		__this->set_U24PC_0(((int32_t)29));
		goto IL_0d1f;
	}

IL_098b:
	{
		SpawnKillMini_t1076810064 * L_263 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_264 = L_263->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_265 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_266 = Component_get_transform_m4257140443(L_265, /*hidden argument*/NULL);
		Vector3_t4282066566  L_267 = Transform_get_position_m2211398607(L_266, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_268 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_269 = Component_get_transform_m4257140443(L_268, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_270 = Transform_get_rotation_m11483428(L_269, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_264, L_267, L_270, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_271 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_271, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_271);
		__this->set_U24PC_0(((int32_t)30));
		goto IL_0d1f;
	}

IL_09d9:
	{
		SpawnKillMini_t1076810064 * L_272 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_273 = L_272->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_274 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_275 = Component_get_transform_m4257140443(L_274, /*hidden argument*/NULL);
		Vector3_t4282066566  L_276 = Transform_get_position_m2211398607(L_275, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_277 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_278 = Component_get_transform_m4257140443(L_277, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_279 = Transform_get_rotation_m11483428(L_278, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_273, L_276, L_279, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_280 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_280, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_280);
		__this->set_U24PC_0(((int32_t)31));
		goto IL_0d1f;
	}

IL_0a27:
	{
		SpawnKillMini_t1076810064 * L_281 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_282 = L_281->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_283 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_284 = Component_get_transform_m4257140443(L_283, /*hidden argument*/NULL);
		Vector3_t4282066566  L_285 = Transform_get_position_m2211398607(L_284, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_286 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_287 = Component_get_transform_m4257140443(L_286, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_288 = Transform_get_rotation_m11483428(L_287, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_282, L_285, L_288, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_289 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_289, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_289);
		__this->set_U24PC_0(((int32_t)32));
		goto IL_0d1f;
	}

IL_0a75:
	{
		SpawnKillMini_t1076810064 * L_290 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_291 = L_290->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_292 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_293 = Component_get_transform_m4257140443(L_292, /*hidden argument*/NULL);
		Vector3_t4282066566  L_294 = Transform_get_position_m2211398607(L_293, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_295 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_296 = Component_get_transform_m4257140443(L_295, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_297 = Transform_get_rotation_m11483428(L_296, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_291, L_294, L_297, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_298 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_298, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_298);
		__this->set_U24PC_0(((int32_t)33));
		goto IL_0d1f;
	}

IL_0ac3:
	{
		SpawnKillMini_t1076810064 * L_299 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_300 = L_299->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_301 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_302 = Component_get_transform_m4257140443(L_301, /*hidden argument*/NULL);
		Vector3_t4282066566  L_303 = Transform_get_position_m2211398607(L_302, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_304 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_305 = Component_get_transform_m4257140443(L_304, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_306 = Transform_get_rotation_m11483428(L_305, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_300, L_303, L_306, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_307 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_307, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_307);
		__this->set_U24PC_0(((int32_t)34));
		goto IL_0d1f;
	}

IL_0b11:
	{
		SpawnKillMini_t1076810064 * L_308 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_309 = L_308->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_310 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_311 = Component_get_transform_m4257140443(L_310, /*hidden argument*/NULL);
		Vector3_t4282066566  L_312 = Transform_get_position_m2211398607(L_311, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_313 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_314 = Component_get_transform_m4257140443(L_313, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_315 = Transform_get_rotation_m11483428(L_314, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_309, L_312, L_315, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_316 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_316, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_316);
		__this->set_U24PC_0(((int32_t)35));
		goto IL_0d1f;
	}

IL_0b5f:
	{
		SpawnKillMini_t1076810064 * L_317 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_318 = L_317->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_319 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_320 = Component_get_transform_m4257140443(L_319, /*hidden argument*/NULL);
		Vector3_t4282066566  L_321 = Transform_get_position_m2211398607(L_320, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_322 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_323 = Component_get_transform_m4257140443(L_322, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_324 = Transform_get_rotation_m11483428(L_323, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_318, L_321, L_324, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_325 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_325, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_325);
		__this->set_U24PC_0(((int32_t)36));
		goto IL_0d1f;
	}

IL_0bad:
	{
		SpawnKillMini_t1076810064 * L_326 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_327 = L_326->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_328 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_329 = Component_get_transform_m4257140443(L_328, /*hidden argument*/NULL);
		Vector3_t4282066566  L_330 = Transform_get_position_m2211398607(L_329, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_331 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_332 = Component_get_transform_m4257140443(L_331, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_333 = Transform_get_rotation_m11483428(L_332, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_327, L_330, L_333, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_334 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_334, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_334);
		__this->set_U24PC_0(((int32_t)37));
		goto IL_0d1f;
	}

IL_0bfb:
	{
		SpawnKillMini_t1076810064 * L_335 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_336 = L_335->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_337 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_338 = Component_get_transform_m4257140443(L_337, /*hidden argument*/NULL);
		Vector3_t4282066566  L_339 = Transform_get_position_m2211398607(L_338, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_340 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_341 = Component_get_transform_m4257140443(L_340, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_342 = Transform_get_rotation_m11483428(L_341, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_336, L_339, L_342, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_343 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_343, (3.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_343);
		__this->set_U24PC_0(((int32_t)38));
		goto IL_0d1f;
	}

IL_0c49:
	{
		SpawnKillMini_t1076810064 * L_344 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_345 = L_344->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_346 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_347 = Component_get_transform_m4257140443(L_346, /*hidden argument*/NULL);
		Vector3_t4282066566  L_348 = Transform_get_position_m2211398607(L_347, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_349 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_350 = Component_get_transform_m4257140443(L_349, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_351 = Transform_get_rotation_m11483428(L_350, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_345, L_348, L_351, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_352 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_352, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_352);
		__this->set_U24PC_0(((int32_t)39));
		goto IL_0d1f;
	}

IL_0c97:
	{
		SpawnKillMini_t1076810064 * L_353 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_354 = L_353->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_355 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_356 = Component_get_transform_m4257140443(L_355, /*hidden argument*/NULL);
		Vector3_t4282066566  L_357 = Transform_get_position_m2211398607(L_356, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_358 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_359 = Component_get_transform_m4257140443(L_358, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_360 = Transform_get_rotation_m11483428(L_359, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_354, L_357, L_360, /*hidden argument*/NULL);
		WaitForSeconds_t1615819279 * L_361 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_361, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_361);
		__this->set_U24PC_0(((int32_t)40));
		goto IL_0d1f;
	}

IL_0ce5:
	{
		SpawnKillMini_t1076810064 * L_362 = __this->get_U3CU3Ef__this_2();
		GameObject_t3674682005 * L_363 = L_362->get_enemy1_2();
		SpawnKillMini_t1076810064 * L_364 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_365 = Component_get_transform_m4257140443(L_364, /*hidden argument*/NULL);
		Vector3_t4282066566  L_366 = Transform_get_position_m2211398607(L_365, /*hidden argument*/NULL);
		SpawnKillMini_t1076810064 * L_367 = __this->get_U3CU3Ef__this_2();
		Transform_t1659122786 * L_368 = Component_get_transform_m4257140443(L_367, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_369 = Transform_get_rotation_m11483428(L_368, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_363, L_366, L_369, /*hidden argument*/NULL);
		__this->set_U24PC_0((-1));
	}

IL_0d1d:
	{
		return (bool)0;
	}

IL_0d1f:
	{
		return (bool)1;
	}
	// Dead block : IL_0d21: ldloc.1
}
// System.Void SpawnKillMini/<waitSeconds>c__Iterator4::Dispose()
extern "C"  void U3CwaitSecondsU3Ec__Iterator4_Dispose_m221832884 (U3CwaitSecondsU3Ec__Iterator4_t794987956 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void SpawnKillMini/<waitSeconds>c__Iterator4::Reset()
extern Il2CppClass* NotSupportedException_t1732551818_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitSecondsU3Ec__Iterator4_Reset_m3541735140_MetadataUsageId;
extern "C"  void U3CwaitSecondsU3Ec__Iterator4_Reset_m3541735140 (U3CwaitSecondsU3Ec__Iterator4_t794987956 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitSecondsU3Ec__Iterator4_Reset_m3541735140_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1732551818 * L_0 = (NotSupportedException_t1732551818 *)il2cpp_codegen_object_new(NotSupportedException_t1732551818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
