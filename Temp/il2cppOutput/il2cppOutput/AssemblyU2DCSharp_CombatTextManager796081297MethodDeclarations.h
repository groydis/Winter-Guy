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

// CombatTextManager
struct CombatTextManager_t796081297_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// System.Void CombatTextManager::.ctor()
extern "C"  void CombatTextManager__ctor_m_1907208993_0 (CombatTextManager_t796081297_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CombatTextManager CombatTextManager::get_Instance()
extern "C"  CombatTextManager_t796081297_0 * CombatTextManager_get_Instance_m1806508668_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CombatTextManager::CreateCombatText(UnityEngine.Vector3,System.String,UnityEngine.Color,System.Boolean)
extern "C"  void CombatTextManager_CreateCombatText_m1562048138_0 (CombatTextManager_t796081297_0 * __this, Vector3_t_725341337_0  ___position, String_t* ___text, Color_t_388944582_0  ___color, bool ___crit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CombatTextManager::CreateCelebrationText(System.String,UnityEngine.Color)
extern "C"  void CombatTextManager_CreateCelebrationText_m1947103242_0 (CombatTextManager_t796081297_0 * __this, String_t* ___text, Color_t_388944582_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CombatTextManager::CreateCombatTalk(UnityEngine.Vector3,System.String,UnityEngine.Color,System.Boolean)
extern "C"  void CombatTextManager_CreateCombatTalk_m_1442212215_0 (CombatTextManager_t796081297_0 * __this, Vector3_t_725341337_0  ___position, String_t* ___text, Color_t_388944582_0  ___color, bool ___crit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
