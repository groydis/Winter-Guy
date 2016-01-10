#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t1319921024_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// BoardManager
struct BoardManager_t_1229582238_0;
// UnityEngine.UI.Text
struct Text_t_204341102_0;
// System.Collections.Generic.List`1<Enemy>
struct List_1_t_760472209_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// GameManager
struct  GameManager_t1319921024_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single GameManager::levelStartDelay
	float ___levelStartDelay_2;
	// System.Single GameManager::turnDelay
	float ___turnDelay_3;
	// UnityEngine.GameObject GameManager::player
	GameObject_t_184308134_0 * ___player_5;
	// BoardManager GameManager::boardScript
	BoardManager_t_1229582238_0 * ___boardScript_6;
	// UnityEngine.UI.Text GameManager::levelText
	Text_t_204341102_0 * ___levelText_7;
	// UnityEngine.UI.Text GameManager::highScoreText
	Text_t_204341102_0 * ___highScoreText_8;
	// UnityEngine.GameObject GameManager::levelImage
	GameObject_t_184308134_0 * ___levelImage_9;
	// UnityEngine.GameObject GameManager::buttons
	GameObject_t_184308134_0 * ___buttons_10;
	// UnityEngine.GameObject GameManager::gameUI
	GameObject_t_184308134_0 * ___gameUI_11;
	// System.Int32 GameManager::level
	int32_t ___level_12;
	// System.Collections.Generic.List`1<Enemy> GameManager::enemies
	List_1_t_760472209_0 * ___enemies_13;
	// System.Boolean GameManager::enemiesMoving
	bool ___enemiesMoving_14;
	// System.Int32 GameManager::playerFoodPoints
	int32_t ___playerFoodPoints_15;
	// System.Boolean GameManager::doingSteup
	bool ___doingSteup_18;
	// System.String[] GameManager::celebration
	StringU5BU5D_t_816028754_0* ___celebration_20;
	// System.Boolean GameManager::playersTurn
	bool ___playersTurn_21;
};
struct GameManager_t1319921024_0_StaticFields{
	// GameManager GameManager::instance
	GameManager_t1319921024_0 * ___instance_4;
	// System.Boolean GameManager::restarting
	bool ___restarting_16;
	// System.Boolean GameManager::newGame
	bool ___newGame_17;
	// System.Int32 GameManager::totalFood
	int32_t ___totalFood_19;
};
