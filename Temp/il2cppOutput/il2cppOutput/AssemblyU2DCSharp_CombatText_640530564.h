#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t1247807435_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// CombatText
struct  CombatText_t_640530564_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single CombatText::speed
	float ___speed_2;
	// UnityEngine.Vector3 CombatText::direction
	Vector3_t_725341337_0  ___direction_3;
	// System.Single CombatText::fadeTime
	float ___fadeTime_4;
	// UnityEngine.AnimationClip CombatText::critAnim
	AnimationClip_t1247807435_0 * ___critAnim_5;
	// System.Boolean CombatText::crit
	bool ___crit_6;
};
