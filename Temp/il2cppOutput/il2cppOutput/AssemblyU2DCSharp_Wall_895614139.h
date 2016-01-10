#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t1286782926_0;
// UnityEngine.AudioClip
struct AudioClip_t719917725_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// CameraScript
struct CameraScript_t1035179723_0;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t_1091520847_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// Wall
struct  Wall_t_895614139_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Sprite Wall::dmgSprite
	Sprite_t1286782926_0 * ___dmgSprite_2;
	// System.Int32 Wall::hp
	int32_t ___hp_3;
	// UnityEngine.AudioClip Wall::chopSound1
	AudioClip_t719917725_0 * ___chopSound1_4;
	// UnityEngine.AudioClip Wall::chopSound2
	AudioClip_t719917725_0 * ___chopSound2_5;
	// UnityEngine.AudioClip Wall::wallDestroySound1
	AudioClip_t719917725_0 * ___wallDestroySound1_6;
	// UnityEngine.AudioClip Wall::wallDestorySound2
	AudioClip_t719917725_0 * ___wallDestorySound2_7;
	// UnityEngine.Camera Wall::mainCamera
	Camera_t814710830_0 * ___mainCamera_8;
	// CameraScript Wall::camScript
	CameraScript_t1035179723_0 * ___camScript_9;
	// UnityEngine.SpriteRenderer Wall::spriteRenderer
	SpriteRenderer_t_1091520847_0 * ___spriteRenderer_10;
};
