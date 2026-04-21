// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon Logic/Firearm.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAmmoItem;
#ifdef RESIDENTEVILTESTING_Firearm_generated_h
#error "Firearm.generated.h already included, missing '#pragma once' in Firearm.h"
#endif
#define RESIDENTEVILTESTING_Firearm_generated_h

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_SPARSE_DATA
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execGetRequiredAmmoType); \
	DECLARE_FUNCTION(execGetReloadSpeed); \
	DECLARE_FUNCTION(execGetMaxClipSize); \
	DECLARE_FUNCTION(execGetClipSize); \
	DECLARE_FUNCTION(execStartReloadingWeapon);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execGetRequiredAmmoType); \
	DECLARE_FUNCTION(execGetReloadSpeed); \
	DECLARE_FUNCTION(execGetMaxClipSize); \
	DECLARE_FUNCTION(execGetClipSize); \
	DECLARE_FUNCTION(execStartReloadingWeapon);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_ACCESSORS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirearm(); \
	friend struct Z_Construct_UClass_AFirearm_Statics; \
public: \
	DECLARE_CLASS(AFirearm, APrimaryWeaponsBaseClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(AFirearm)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFirearm(); \
	friend struct Z_Construct_UClass_AFirearm_Statics; \
public: \
	DECLARE_CLASS(AFirearm, APrimaryWeaponsBaseClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(AFirearm)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirearm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirearm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirearm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirearm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirearm(AFirearm&&); \
	NO_API AFirearm(const AFirearm&); \
public: \
	NO_API virtual ~AFirearm();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirearm() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirearm(AFirearm&&); \
	NO_API AFirearm(const AFirearm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirearm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirearm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirearm) \
	NO_API virtual ~AFirearm();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_15_PROLOG
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_RPC_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_INCLASS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class AFirearm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Firearm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
