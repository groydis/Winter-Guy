#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t1453031496_0;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t816092662_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_LayerMask_1132430796.h"

// MovingObject
struct  MovingObject_t768084904_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single MovingObject::moveTime
	float ___moveTime_2;
	// UnityEngine.LayerMask MovingObject::blockingLayer
	LayerMask_t_1132430796_0  ___blockingLayer_3;
	// UnityEngine.BoxCollider2D MovingObject::boxCollider
	BoxCollider2D_t1453031496_0 * ___boxCollider_4;
	// UnityEngine.Rigidbody2D MovingObject::rb2d
	Rigidbody2D_t816092662_0 * ___rb2d_5;
	// System.Single MovingObject::inverseMoveTime
	float ___inverseMoveTime_6;
};
