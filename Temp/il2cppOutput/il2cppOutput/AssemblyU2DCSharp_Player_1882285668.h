#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t_204341102_0;
// UnityEngine.AudioClip
struct AudioClip_t719917725_0;
// UnityEngine.Animator
struct Animator_t607439280_0;

#include "AssemblyU2DCSharp_MovingObject768084904.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// Player
struct  Player_t_1882285668_0  : public MovingObject_t768084904_0
{
	// System.Int32 Player::wallDamage
	int32_t ___wallDamage_7;
	// System.Int32 Player::pointsPerFood
	int32_t ___pointsPerFood_8;
	// System.Int32 Player::pointsPerDrink
	int32_t ___pointsPerDrink_9;
	// UnityEngine.UI.Text Player::foodText
	Text_t_204341102_0 * ___foodText_10;
	// System.Single Player::restartLevelDelay
	float ___restartLevelDelay_11;
	// System.Single Player::textFadeTime
	float ___textFadeTime_12;
	// UnityEngine.AudioClip Player::moveSound1
	AudioClip_t719917725_0 * ___moveSound1_13;
	// UnityEngine.AudioClip Player::moveSound2
	AudioClip_t719917725_0 * ___moveSound2_14;
	// UnityEngine.AudioClip Player::eatSound1
	AudioClip_t719917725_0 * ___eatSound1_15;
	// UnityEngine.AudioClip Player::eatSound2
	AudioClip_t719917725_0 * ___eatSound2_16;
	// UnityEngine.AudioClip Player::drinkSound1
	AudioClip_t719917725_0 * ___drinkSound1_17;
	// UnityEngine.AudioClip Player::drinkSound2
	AudioClip_t719917725_0 * ___drinkSound2_18;
	// UnityEngine.AudioClip Player::gameOverSound
	AudioClip_t719917725_0 * ___gameOverSound_19;
	// UnityEngine.Animator Player::animator
	Animator_t607439280_0 * ___animator_20;
	// System.Boolean Player::facingRight
	bool ___facingRight_21;
	// System.Int32 Player::food
	int32_t ___food_22;
	// System.Boolean Player::isCrit
	bool ___isCrit_23;
	// UnityEngine.Vector2 Player::touchOrigin
	Vector2_t_725341338_0  ___touchOrigin_24;
};
