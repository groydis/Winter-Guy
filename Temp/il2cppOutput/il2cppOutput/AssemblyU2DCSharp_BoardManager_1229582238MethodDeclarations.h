#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BoardManager
struct BoardManager_t_1229582238_0;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t612051333_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void BoardManager::.ctor()
extern "C"  void BoardManager__ctor_m547433588_0 (BoardManager_t_1229582238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::InitializeList()
extern "C"  void BoardManager_InitializeList_m2027477086_0 (BoardManager_t_1229582238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::BoardSetup()
extern "C"  void BoardManager_BoardSetup_m_931695481_0 (BoardManager_t_1229582238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BoardManager::RandomPosition()
extern "C"  Vector3_t_725341337_0  BoardManager_RandomPosition_m939101078_0 (BoardManager_t_1229582238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
extern "C"  void BoardManager_LayoutObjectAtRandom_m1803720261_0 (BoardManager_t_1229582238_0 * __this, GameObjectU5BU5D_t612051333_0* ___tileArray, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::SetupScene(System.Int32)
extern "C"  void BoardManager_SetupScene_m_1819970000_0 (BoardManager_t_1229582238_0 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
