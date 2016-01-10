#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t812398632_0;
// SoundManager
struct SoundManager_t_30595559_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// SoundManager
struct  SoundManager_t_30595559_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.AudioSource SoundManager::efxSource
	AudioSource_t812398632_0 * ___efxSource_2;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_t812398632_0 * ___musicSource_3;
	// System.Single SoundManager::lowPitchRange
	float ___lowPitchRange_5;
	// System.Single SoundManager::highPitchRange
	float ___highPitchRange_6;
	// System.Single SoundManager::setMusicVolume
	float ___setMusicVolume_7;
	// System.Single SoundManager::setSFXVolume
	float ___setSFXVolume_8;
};
struct SoundManager_t_30595559_0_StaticFields{
	// SoundManager SoundManager::instance
	SoundManager_t_30595559_0 * ___instance_4;
};
