// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy Logic/CombatEncounter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseEnemy;
#ifdef RESIDENTEVILTESTING_CombatEncounter_generated_h
#error "CombatEncounter.generated.h already included, missing '#pragma once' in CombatEncounter.h"
#endif
#define RESIDENTEVILTESTING_CombatEncounter_generated_h

#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_SPARSE_DATA
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEnemyKilledInternal); \
	DECLARE_FUNCTION(execInitialSetup); \
	DECLARE_FUNCTION(execOnNewEnemySpawned);


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEnemyKilledInternal); \
	DECLARE_FUNCTION(execInitialSetup); \
	DECLARE_FUNCTION(execOnNewEnemySpawned);


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_ACCESSORS
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_CALLBACK_WRAPPERS
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatEncounter(); \
	friend struct Z_Construct_UClass_ACombatEncounter_Statics; \
public: \
	DECLARE_CLASS(ACombatEncounter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(ACombatEncounter)


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACombatEncounter(); \
	friend struct Z_Construct_UClass_ACombatEncounter_Statics; \
public: \
	DECLARE_CLASS(ACombatEncounter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ResidentEvilTesting"), NO_API) \
	DECLARE_SERIALIZER(ACombatEncounter)


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatEncounter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatEncounter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatEncounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatEncounter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatEncounter(ACombatEncounter&&); \
	NO_API ACombatEncounter(const ACombatEncounter&); \
public: \
	NO_API virtual ~ACombatEncounter();


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatEncounter(ACombatEncounter&&); \
	NO_API ACombatEncounter(const ACombatEncounter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatEncounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatEncounter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatEncounter) \
	NO_API virtual ~ACombatEncounter();


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_11_PROLOG
#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_SPARSE_DATA \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_RPC_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_ACCESSORS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_CALLBACK_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_INCLASS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_SPARSE_DATA \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_ACCESSORS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_CALLBACK_WRAPPERS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_INCLASS_NO_PURE_DECLS \
	FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESIDENTEVILTESTING_API UClass* StaticClass<class ACombatEncounter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ResidentEvilTesting_Source_ResidentEvilTesting_Public_Enemy_Logic_CombatEncounter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
