#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CombatTextManager
struct CombatTextManager_t796081297_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.RectTransform
struct RectTransform_t212748479_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// CombatTextManager
struct  CombatTextManager_t796081297_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.GameObject CombatTextManager::combatTextPrefab
	GameObject_t_184308134_0 * ___combatTextPrefab_3;
	// UnityEngine.GameObject CombatTextManager::celebrationTextPrefab
	GameObject_t_184308134_0 * ___celebrationTextPrefab_4;
	// UnityEngine.RectTransform CombatTextManager::canvasTransform
	RectTransform_t212748479_0 * ___canvasTransform_5;
	// System.Single CombatTextManager::speed
	float ___speed_6;
	// UnityEngine.Vector3 CombatTextManager::direction
	Vector3_t_725341337_0  ___direction_7;
	// System.Single CombatTextManager::fadeTime
	float ___fadeTime_8;
};
struct CombatTextManager_t796081297_0_StaticFields{
	// CombatTextManager CombatTextManager::instance
	CombatTextManager_t796081297_0 * ___instance_2;
};
