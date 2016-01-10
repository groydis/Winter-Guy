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

// Player
struct Player_t_1882285668_0;
// UnityEngine.Collider2D
struct Collider2D_t1988002255_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C"  void Player_Start_m_181155910_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnDisable()
extern "C"  void Player_OnDisable_m_772631007_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m_1315013741_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Player_OnTriggerEnter2D_m2063740926_0 (Player_t_1882285668_0 * __this, Collider2D_t1988002255_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Restart()
extern "C"  void Player_Restart_m_2019848089_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::LoseFood(System.Int32)
extern "C"  void Player_LoseFood_m967123182_0 (Player_t_1882285668_0 * __this, int32_t ___loss, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::CheckIfGameOver()
extern "C"  void Player_CheckIfGameOver_m2144623523_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Flip()
extern "C"  void Player_Flip_m_1077913481_0 (Player_t_1882285668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::PickUpItem(System.Single,UnityEngine.GameObject)
extern "C"  Object_t * Player_PickUpItem_m_1226958892_0 (Player_t_1882285668_0 * __this, float ___length, GameObject_t_184308134_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
