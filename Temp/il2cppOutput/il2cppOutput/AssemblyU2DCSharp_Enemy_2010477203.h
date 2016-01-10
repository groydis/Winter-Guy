#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t_816028754_0;
// UnityEngine.Animator
struct Animator_t607439280_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.AudioClip
struct AudioClip_t719917725_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// CameraScript
struct CameraScript_t1035179723_0;

#include "AssemblyU2DCSharp_MovingObject768084904.h"

// Enemy
struct  Enemy_t_2010477203_0  : public MovingObject_t768084904_0
{
	// System.Int32 Enemy::playerDamage
	int32_t ___playerDamage_7;
	// System.String[] Enemy::nounWord
	StringU5BU5D_t_816028754_0* ___nounWord_8;
	// System.String[] Enemy::adjectiveWord
	StringU5BU5D_t_816028754_0* ___adjectiveWord_9;
	// UnityEngine.Animator Enemy::animator
	Animator_t607439280_0 * ___animator_10;
	// UnityEngine.Transform Enemy::target
	Transform_t1584899523_0 * ___target_11;
	// System.Boolean Enemy::skipMove
	bool ___skipMove_12;
	// System.Single Enemy::textFadeTime
	float ___textFadeTime_13;
	// UnityEngine.AudioClip Enemy::enemyAttack1
	AudioClip_t719917725_0 * ___enemyAttack1_14;
	// UnityEngine.AudioClip Enemy::enemyAttack2
	AudioClip_t719917725_0 * ___enemyAttack2_15;
	// UnityEngine.Camera Enemy::mainCamera
	Camera_t814710830_0 * ___mainCamera_16;
	// CameraScript Enemy::camScript
	CameraScript_t1035179723_0 * ___camScript_17;
	// System.Boolean Enemy::isCrit
	bool ___isCrit_18;
};
