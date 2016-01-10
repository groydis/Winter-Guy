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

// MovingObject
struct MovingObject_t768084904_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit2D1123397253.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void MovingObject::.ctor()
extern "C"  void MovingObject__ctor_m_626098194_0 (MovingObject_t768084904_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovingObject::Start()
extern "C"  void MovingObject_Start_m_1678960402_0 (MovingObject_t768084904_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
extern "C"  bool MovingObject_Move_m_1709506268_0 (MovingObject_t768084904_0 * __this, int32_t ___xDir, int32_t ___yDir, RaycastHit2D_t1123397253_0 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
extern "C"  Object_t * MovingObject_SmoothMovement_m_724639458_0 (MovingObject_t768084904_0 * __this, Vector3_t_725341337_0  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
