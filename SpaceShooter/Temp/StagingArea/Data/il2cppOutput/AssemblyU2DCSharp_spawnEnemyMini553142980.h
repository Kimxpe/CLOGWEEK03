#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// spawnEnemyMini
struct  spawnEnemyMini_t553142980  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean spawnEnemyMini::isSpawning
	bool ___isSpawning_2;
	// System.Single spawnEnemyMini::minTime
	float ___minTime_3;
	// System.Single spawnEnemyMini::maxTime
	float ___maxTime_4;
	// UnityEngine.GameObject[] spawnEnemyMini::enemies
	GameObjectU5BU5D_t2662109048* ___enemies_5;
	// UnityEngine.GameObject spawnEnemyMini::enemy
	GameObject_t3674682005 * ___enemy_6;

public:
	inline static int32_t get_offset_of_isSpawning_2() { return static_cast<int32_t>(offsetof(spawnEnemyMini_t553142980, ___isSpawning_2)); }
	inline bool get_isSpawning_2() const { return ___isSpawning_2; }
	inline bool* get_address_of_isSpawning_2() { return &___isSpawning_2; }
	inline void set_isSpawning_2(bool value)
	{
		___isSpawning_2 = value;
	}

	inline static int32_t get_offset_of_minTime_3() { return static_cast<int32_t>(offsetof(spawnEnemyMini_t553142980, ___minTime_3)); }
	inline float get_minTime_3() const { return ___minTime_3; }
	inline float* get_address_of_minTime_3() { return &___minTime_3; }
	inline void set_minTime_3(float value)
	{
		___minTime_3 = value;
	}

	inline static int32_t get_offset_of_maxTime_4() { return static_cast<int32_t>(offsetof(spawnEnemyMini_t553142980, ___maxTime_4)); }
	inline float get_maxTime_4() const { return ___maxTime_4; }
	inline float* get_address_of_maxTime_4() { return &___maxTime_4; }
	inline void set_maxTime_4(float value)
	{
		___maxTime_4 = value;
	}

	inline static int32_t get_offset_of_enemies_5() { return static_cast<int32_t>(offsetof(spawnEnemyMini_t553142980, ___enemies_5)); }
	inline GameObjectU5BU5D_t2662109048* get_enemies_5() const { return ___enemies_5; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_enemies_5() { return &___enemies_5; }
	inline void set_enemies_5(GameObjectU5BU5D_t2662109048* value)
	{
		___enemies_5 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_5, value);
	}

	inline static int32_t get_offset_of_enemy_6() { return static_cast<int32_t>(offsetof(spawnEnemyMini_t553142980, ___enemy_6)); }
	inline GameObject_t3674682005 * get_enemy_6() const { return ___enemy_6; }
	inline GameObject_t3674682005 ** get_address_of_enemy_6() { return &___enemy_6; }
	inline void set_enemy_6(GameObject_t3674682005 * value)
	{
		___enemy_6 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
