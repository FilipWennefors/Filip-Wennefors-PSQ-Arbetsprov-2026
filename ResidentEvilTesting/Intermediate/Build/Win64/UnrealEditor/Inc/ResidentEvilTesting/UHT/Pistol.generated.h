// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon Logic/Pistol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
struct FHitResult;
#ifdef RESIDENTEVILTESTING_Pistol_generated_h
#error "Pistol.generated.h already included, missing '#pragma once' in Pistol.h"
#endif
#define RESIDENTEVILTESTING_Pistol_generated_h

#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_SPARSE_DATA
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitialRaycast);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitialRaycast);


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_ACCESSORS
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPistol(); \
	friend struct Z_Construct_UClass_APistol_Statics; \
public: \
	DECLARE_CLASS(APistol, AFirearm, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(APistol)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPistol(); \
	friend struct Z_Construct_UClass_APistol_Statics; \
public: \
	DECLARE_CLASS(APistol, AFirearm, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(APistol)


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APistol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APistol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APistol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APistol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APistol(APistol&&); \
	NO_API APistol(const APistol&); \
public: \
	NO_API virtual ~APistol();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APistol() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APistol(APistol&&); \
	NO_API APistol(const APistol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APistol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APistol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APistol) \
	NO_API virtual ~APistol();


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_14_PROLOG
#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_RPC_WRAPPERS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_INCLASS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_SPARSE_DATA \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_ACCESSORS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class APistol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fwenn_Github_Repositories_GameSampleProjects_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Weapon_Logic_Pistol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
