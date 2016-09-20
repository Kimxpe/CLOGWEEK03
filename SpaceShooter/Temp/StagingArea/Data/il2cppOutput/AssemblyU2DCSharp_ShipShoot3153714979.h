#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipShoot
struct  ShipShoot_t3153714979  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ShipShoot::bullet
	GameObject_t3674682005 * ___bullet_2;
	// System.Boolean ShipShoot::canFire
	bool ___canFire_3;
	// System.Single ShipShoot::rateOfFire
	float ___rateOfFire_4;

public:
	inline static int32_t get_offset_of_bullet_2() { return static_cast<int32_t>(offsetof(ShipShoot_t3153714979, ___bullet_2)); }
	inline GameObject_t3674682005 * get_bullet_2() const { return ___bullet_2; }
	inline GameObject_t3674682005 ** get_address_of_bullet_2() { return &___bullet_2; }
	inline void set_bullet_2(GameObject_t3674682005 * value)
	{
		___bullet_2 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_2, value);
	}

	inline static int32_t get_offset_of_canFire_3() { return static_cast<int32_t>(offsetof(ShipShoot_t3153714979, ___canFire_3)); }
	inline bool get_canFire_3() const { return ___canFire_3; }
	inline bool* get_address_of_canFire_3() { return &___canFire_3; }
	inline void set_canFire_3(bool value)
	{
		___canFire_3 = value;
	}

	inline static int32_t get_offset_of_rateOfFire_4() { return static_cast<int32_t>(offsetof(ShipShoot_t3153714979, ___rateOfFire_4)); }
	inline float get_rateOfFire_4() const { return ___rateOfFire_4; }
	inline float* get_address_of_rateOfFire_4() { return &___rateOfFire_4; }
	inline void set_rateOfFire_4(float value)
	{
		___rateOfFire_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
