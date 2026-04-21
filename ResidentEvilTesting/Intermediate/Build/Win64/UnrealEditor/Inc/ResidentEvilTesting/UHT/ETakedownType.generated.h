// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player Logic/ETakedownType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESIDENTEVILTESTING_ETakedownType_generated_h
#error "ETakedownType.generated.h already included, missing '#pragma once' in ETakedownType.h"
#endif
#define RESIDENTEVILTESTING_ETakedownType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Player_Logic_ETakedownType_h


#define FOREACH_ENUM_ETAKEDOWNTYPE(op) \
	op(ETakedownType::RoundhouseKick) \
	op(ETakedownType::GroundStab) \
	op(ETakedownType::Backstab) \
	op(ETakedownType::NONE) 

enum class ETakedownType : uint8;
template<> struct TIsUEnumClass<ETakedownType> { enum { Value = true }; };
template<> RESIDENTEVILTESTING_API UEnum* StaticEnum<ETakedownType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
