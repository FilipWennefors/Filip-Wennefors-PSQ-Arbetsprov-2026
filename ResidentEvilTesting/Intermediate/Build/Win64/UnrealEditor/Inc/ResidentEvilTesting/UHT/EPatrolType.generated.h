// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy Logic/EPatrolType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESIDENTEVILTESTING_EPatrolType_generated_h
#error "EPatrolType.generated.h already included, missing '#pragma once' in EPatrolType.h"
#endif
#define RESIDENTEVILTESTING_EPatrolType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_EPatrolType_h


#define FOREACH_ENUM_EPATROLTYPE(op) \
	op(EPatrolType::StandStill) \
	op(EPatrolType::PatrolRadius) \
	op(EPatrolType::PatrolSplinePath) \
	op(EPatrolType::NONE) 

enum class EPatrolType : uint8;
template<> struct TIsUEnumClass<EPatrolType> { enum { Value = true }; };
template<> RESIDENTEVILTESTING_API UEnum* StaticEnum<EPatrolType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
