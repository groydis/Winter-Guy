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

// GameManager
struct GameManager_t1319921024_0;
// Enemy
struct Enemy_t_2010477203_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;

#include "codegen/il2cpp-codegen.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m_182690160_0 (GameManager_t1319921024_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::.cctor()
extern "C"  void GameManager__cctor_m_1850523875_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m54915059_0 (GameManager_t1319921024_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnLevelWasLoaded(System.Int32)
extern "C"  void GameManager_OnLevelWasLoaded_m1277507758_0 (GameManager_t1319921024_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::InitGame()
extern "C"  void GameManager_InitGame_m1053132758_0 (GameManager_t1319921024_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::HideLevelImage()
extern "C"  void GameManager_HideLevelImage_m_140814899_0 (GameManager_t1319921024_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GameOver()
extern "C"  void GameManager_GameOver_m1670086042_0 (GameManager_t1319921024_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m358434429_0 (GameManager_t1319921024_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::AddEnemyToList(Enemy)
extern "C"  void GameManager_AddEnemyToList_m904804310_0 (GameManager_t1319921024_0 * __this, Enemy_t_2010477203_0 * ___script, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::MoveEnemies()
extern "C"  Object_t * GameManager_MoveEnemies_m_234123765_0 (GameManager_t1319921024_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::CelebrationTextDisplay()
extern "C"  Object_t * GameManager_CelebrationTextDisplay_m1185514359_0 (GameManager_t1319921024_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
