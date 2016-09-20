#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// enemy2
struct  enemy2_t2996249002  : public MonoBehaviour_t667441552
{
public:
	// System.Single enemy2::speed
	float ___speed_2;
	// UnityEngine.Transform enemy2::player
	Transform_t1659122786 * ___player_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(enemy2_t2996249002, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(enemy2_t2996249002, ___player_3)); }
	inline Transform_t1659122786 * get_player_3() const { return ___player_3; }
	inline Transform_t1659122786 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t1659122786 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
