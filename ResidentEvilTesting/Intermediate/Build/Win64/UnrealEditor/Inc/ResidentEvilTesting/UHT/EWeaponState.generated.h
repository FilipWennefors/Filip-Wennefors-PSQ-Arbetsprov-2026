// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player Logic/EWeaponState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESIDENTEVILTESTING_EWeaponState_generated_h
#error "EWeaponState.generated.h already included, missing '#pragma once' in EWeaponState.h"
#endif
#define RESIDENTEVILTESTING_EWeaponState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_EWeaponState_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::Deploying) \
	op(EWeaponState::Idle) \
	op(EWeaponState::Aiming) \
	op(EWeaponState::Holstering) 

enum class EWeaponState : uint8;
template<> struct TIsUEnumClass<EWeaponState> { enum { Value = true }; };
template<> RESIDENTEVILTESTING_API UEnum* StaticEnum<EWeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
