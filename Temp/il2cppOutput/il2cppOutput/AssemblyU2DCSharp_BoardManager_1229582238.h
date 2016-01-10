#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BoardManager/Count
struct Count_t1311040770_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t612051333_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t_429089675_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// BoardManager
struct  BoardManager_t_1229582238_0  : public MonoBehaviour_t_92453903_0
{
	// System.Int32 BoardManager::columns
	int32_t ___columns_2;
	// System.Int32 BoardManager::rows
	int32_t ___rows_3;
	// BoardManager/Count BoardManager::wallCount
	Count_t1311040770_0 * ___wallCount_4;
	// BoardManager/Count BoardManager::foodCount
	Count_t1311040770_0 * ___foodCount_5;
	// UnityEngine.GameObject BoardManager::exit
	GameObject_t_184308134_0 * ___exit_6;
	// UnityEngine.GameObject[] BoardManager::floorTiles
	GameObjectU5BU5D_t612051333_0* ___floorTiles_7;
	// UnityEngine.GameObject[] BoardManager::foodTiles
	GameObjectU5BU5D_t612051333_0* ___foodTiles_8;
	// UnityEngine.GameObject[] BoardManager::enemyTiles
	GameObjectU5BU5D_t612051333_0* ___enemyTiles_9;
	// UnityEngine.GameObject[] BoardManager::wallTiles
	GameObjectU5BU5D_t612051333_0* ___wallTiles_10;
	// UnityEngine.GameObject[] BoardManager::outerWallTiles
	GameObjectU5BU5D_t612051333_0* ___outerWallTiles_11;
	// UnityEngine.Transform BoardManager::boardHolder
	Transform_t1584899523_0 * ___boardHolder_12;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BoardManager::gridPositions
	List_1_t_429089675_0 * ___gridPositions_13;
};
