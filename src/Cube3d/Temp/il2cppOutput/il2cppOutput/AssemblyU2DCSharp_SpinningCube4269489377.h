#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpinningCube
struct  SpinningCube_t4269489377  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SpinningCube::m_Speed
	float ___m_Speed_2;
	// UnityEngine.Vector3 SpinningCube::m_RotationDirection
	Vector3_t2243707580  ___m_RotationDirection_3;

public:
	inline static int32_t get_offset_of_m_Speed_2() { return static_cast<int32_t>(offsetof(SpinningCube_t4269489377, ___m_Speed_2)); }
	inline float get_m_Speed_2() const { return ___m_Speed_2; }
	inline float* get_address_of_m_Speed_2() { return &___m_Speed_2; }
	inline void set_m_Speed_2(float value)
	{
		___m_Speed_2 = value;
	}

	inline static int32_t get_offset_of_m_RotationDirection_3() { return static_cast<int32_t>(offsetof(SpinningCube_t4269489377, ___m_RotationDirection_3)); }
	inline Vector3_t2243707580  get_m_RotationDirection_3() const { return ___m_RotationDirection_3; }
	inline Vector3_t2243707580 * get_address_of_m_RotationDirection_3() { return &___m_RotationDirection_3; }
	inline void set_m_RotationDirection_3(Vector3_t2243707580  value)
	{
		___m_RotationDirection_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
